`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    
// Design Name: 
// Module Name:    loopback 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module controller( pause_play, scroll_up, scroll_down, select, back, switches, leds, rs232_tx, rs232_rx, reset, clk, AUD_ADCLRCK, AUD_ADCDAT, AUD_DACLRCK, AUD_DACDAT, 
						AUD_XCK, AUD_BCLK, AUD_I2C_SCLK, AUD_I2C_SDAT, AUD_MUTE, PLL_LOCKE, KEY, SW, hw_ram_rasn, hw_ram_casn, hw_ram_wen, hw_ram_ba, hw_ram_udqs_p, hw_ram_udqs_n, 
						hw_ram_ldqs_p, hw_ram_ldqs_n, hw_ram_udm, hw_ram_ldm, hw_ram_ck, hw_ram_ckn, hw_ram_cke, hw_ram_odt, hw_ram_ad, hw_ram_dq, hw_rzq_pin, hw_zio_pin, status);

	// Top-level Inputs and Outputs
	// These connect directly to FPGA pins via the pin map
	//
	// Control - clk, rst, etc
	input			reset;			// Remember: ACTIVE LOW!!!
	input			clk;			// 100 MHz
	// GPIO
	input scroll_up;
	input scroll_down;
	input select;
	input back;
	input pause_play;
	output	[7:0]	leds;
	// RS232 Lines
	input			rs232_rx;
	output			rs232_tx;
	
	//Sockit Top

   inout  AUD_ADCLRCK;
   input  AUD_ADCDAT;

   inout  AUD_DACLRCK;
   output AUD_DACDAT;

   output AUD_XCK;
   inout  AUD_BCLK;

   output AUD_I2C_SCLK;
   inout  AUD_I2C_SDAT;

   output AUD_MUTE;
	reg playback;
	output PLL_LOCKE;
	 
   input  [3:0] KEY; 
   input  [3:0] SW;
	
	// Memory Module Wires
	output 		hw_ram_rasn;
	output 		hw_ram_casn;
	output 		hw_ram_wen;
	output[2:0] hw_ram_ba;
	inout 		hw_ram_udqs_p;
	inout 		hw_ram_udqs_n;
	inout 		hw_ram_ldqs_p;
	inout 		hw_ram_ldqs_n;
	output 		hw_ram_udm;
	output 		hw_ram_ldm;
	output 		hw_ram_ck;
	output 		hw_ram_ckn;
	output 		hw_ram_cke;
	output 		hw_ram_odt;
	output[12:0]hw_ram_ad;
	inout [15:0]hw_ram_dq;
	inout 		hw_rzq_pin;
	inout 		hw_zio_pin;
	input [3:0]	switches; 		// address
	output 		status;
	reg [15:0] RAMin;
	wire 	[15:0]	RAMout;
	reg [25:0] address;
	reg enableWrite;
	reg reqRead;
	reg ackRead;
	wire dataPresent;
	wire [25:0]max_ram_address;
	reg [25:0] maxAddr; 
	reg rdy;
	reg [15:0] mem_in;
	reg [15:0] mem_out;
	reg [15:0] count;
	reg message_exists;
	reg delete_finish;

	// Wires and Register Declarations
	wire clk1;
	wire clk2;
	wire wizclk;
	// PicoBlaze Data Lines
	wire	[7:0]	pb_port_id;
	wire	[7:0]	pb_out_port;
	reg		[7:0]	pb_in_port;
	wire			pb_read_strobe;
	wire			pb_write_strobe;
	// PicoBlaze CPU Control Wires
	wire			pb_reset;
	wire			pb_interrupt;
	wire			pb_int_ack;
	
	// UART wires
	wire			write_to_uart;
	wire			uart_buffer_full;
	wire			uart_data_present;
	reg			read_from_uart;
	wire			uart_reset;
	// UART Data Lines
	// TX does not need a wire, as it is fed directly by pb_out_port
	wire	[7:0]	uart_rx_data;
	
	// LED wires
	wire write_to_leds;
	wire led_reset;
	
	//Register the current state.
	reg [7:0] curr_state;

	//Parameters for each state.
	reg main;
	reg play;
	reg record;
	reg are_recording;
	reg delone;
	reg delall;
	reg vol;
	reg play_1;
	reg play_2;
	reg play_3;
	reg play_4;
	reg play_5;
	reg record_1;
	reg record_2;
	reg record_3;
	reg record_4;
	reg record_5;
	reg delone_1;
	reg delone_2;
	reg delone_3;
	reg delone_4;
	reg delone_5;
	reg [3:0] volume_control;
	wire [15:0] audio_out;
	reg volume_up;
	reg volume_down;
	
	
	
	
	// Initialize registers
	initial begin
		main <= 0;
		play <= 0;
		record <= 0;
		delone <= 0;
		delall <= 0;
		vol <= 0;
		play_1 <= 0;
		play_2 <= 0;
		play_3 <= 0;
		play_4 <= 0;
		play_5 <= 0;
		record_1 <= 0;
		record_2 <= 0;
		record_3 <= 0;
		record_4 <= 0;
		record_5 <= 0;
		delone_1 <= 0;
		delone_2 <= 0;
		delone_3 <= 0;
		delone_4 <= 0;
		delone_5 <= 0;
		volume_control <= 1;
		volume_up <= 0;
		volume_down <= 0;
		enableWrite <= 0;
		are_recording <= 0;
		address <= 0;
		reqRead <= 0;
		mem_out <= 0;
		ackRead <= 0;
		maxAddr <= 0;
		message_exists <= 0;
		delete_finish <= 0;
		playback <= 0;
		curr_state <= 8'h00;
	end
	

	// LED Driver and control logic
	//
	// LED driver expects ACTIVE-HIGH reset
	assign led_reset = ~reset;
	// LED driver instantiation
	led_driver_wrapper led_driver (
		.led_value(pb_out_port),
		.leds(leds),
		.write_to_leds(write_to_leds),
		.reset(led_reset),
		.clk(clk)
	);

	
	// UART and control logic
	//
	// UART expects ACTIVE-HIGH reset	
	assign uart_reset =  ~reset;
	// UART instantiation
	//
	// Within the UART Module (rs232_uart.v), make sure you fill in the
	// appropriate sections.
	rs232_uart UART (
		.tx_data_in(pb_out_port), // The UART only accepts data from PB, so we just tie the PB output to the UART input.
		.write_tx_data(write_to_uart), // Goes high when PB sends write strobe and PORT_ID is the UART write port number
		.tx_buffer_full(uart_buffer_full),
		.rx_data_out(uart_rx_data),
		.read_rx_data_ack(read_from_uart),
		.rx_data_present(uart_data_present),
		.rs232_tx(rs232_tx),
		.rs232_rx(rs232_rx),
		.reset(uart_reset),
		.clk(clk2)
	);	
	clkwiz wiz(
		.CLK_IN1(wizclk),
		.CLK_OUT1(clk1),
		.CLK_OUT2(clk2)
	);
	// PicoBlaze and control logic
	//
	// PB expects ACTIVE-HIGH reset
	assign pb_reset = ~reset;
	// Disable interrupt by assigning 0 to interrupt
	assign pb_interrupt = 1'b0;
	// PB CPU instantiation
	//
	// Within the PicoBlaze Module (picoblaze.v), make sure you fill in the
	// appropriate sections.
	picoblaze CPU (
		.port_id(pb_port_id),
		.read_strobe(pb_read_strobe),
		.in_port(pb_in_port),
		.write_strobe(pb_write_strobe),
		.out_port(pb_out_port),
		.interrupt(pb_interrupt),
		.interrupt_ack(),
		.reset(pb_reset),
		.clk(clk2)
	);	
	
	
	//WORKING ON INSTANTIATION HERE
	//address, data_in, write_enable, read_request, read_ack, data_out, reset, clk, hw_ram_rasn, hw_ram_casn,
	//hw_ram_wen, hw_ram_ba, hw_ram_udqs_p, hw_ram_udqs_n, hw_ram_ldqs_p, hw_ram_ldqs_n, hw_ram_udm, hw_ram_ldm, hw_ram_ck, hw_ram_ckn, hw_ram_cke, hw_ram_odt,
	//hw_ram_ad, hw_ram_dq, hw_rzq_pin, hw_zio_pin, clkout, sys_clk, rdy, rd_data_pres,
	//max_ram_address, ledRAM
	
	ram_interface_wrapper RAMWrapper (
					.address(address),				// input 
					.data_in(RAMin), 					// input
					.write_enable(enableWrite), 	//	input
					.read_request(reqRead), 		//	input
					.read_ack(ackRead), 
					.data_out(RAMout), 				// output from ram to wire
					.reset(reset), 
					.clk(clk), 
					.hw_ram_rasn(hw_ram_rasn), 
					.hw_ram_casn(hw_ram_casn),
					.hw_ram_wen(hw_ram_wen), 
					.hw_ram_ba(hw_ram_ba), 
					.hw_ram_udqs_p(hw_ram_udqs_p), 
					.hw_ram_udqs_n(hw_ram_udqs_n), 
					.hw_ram_ldqs_p(hw_ram_ldqs_p), 
					.hw_ram_ldqs_n(hw_ram_ldqs_n), 
					.hw_ram_udm(hw_ram_udm), 
					.hw_ram_ldm(hw_ram_ldm), 
					.hw_ram_ck(hw_ram_ck), 
					.hw_ram_ckn(hw_ram_ckn), 
					.hw_ram_cke(hw_ram_cke), 
					.hw_ram_odt(hw_ram_odt),
					.hw_ram_ad(hw_ram_ad), 
					.hw_ram_dq(hw_ram_dq), 
					.hw_rzq_pin(hw_rzq_pin), 
					.hw_zio_pin(hw_zio_pin), 
					.clkout(wizclk), //
					.sys_clk(wizclk), 
					.rdy(status), 
					.rd_data_pres(dataPresent),
					.max_ram_address(max_ram_address)
	);
	
	
	sockit_top what(
		.clk(clk1),
			.playback(playback),
			.volume_control(volume_control),
		.AUD_ADCLRCK(AUD_ADCLRCK),
		.AUD_ADCDAT(AUD_ADCDAT),
		.AUD_DACLRCK(AUD_DACLRCK),
		.AUD_DACDAT(AUD_DACDAT),
		.AUD_XCK(AUD_XCK),
		.AUD_BCLK(AUD_BCLK),
		.AUD_I2C_SCLK(AUD_I2C_SCLK),
		.AUD_I2C_SDAT(AUD_I2C_SDAT),
		.AUD_MUTE(AUD_MUTE),
		.PLL_LOCKED(PLL_LOCKED),
		.KEY(1),
		.SW(switches),
			.audio_in(mem_out),
			.audio_out(audio_out),
			.audio_clk(audio_clk)
	);
	
	// PB I/O selection/routing
	//
	// Handle PicoBlaze Output Port Logic
	// Output Ports:
	// * uart_data_tx : port 03
	//	* write_to_state_reg : port 0B
	// These signals are effectively "write enable" lines for the UART
	// Driver module. They must be asserted when PB is outputting to the
	// corresponding port
	assign pb_reset = ~reset;
	assign uart_reset =  ~reset;
	assign pb_interrupt = 1'b0;
	assign write_to_uart = pb_write_strobe & (pb_port_id == 8'h03);
	assign write_to_state_reg = pb_write_strobe & (pb_port_id == 8'h0b);
	assign file_selection = pb_write_strobe & (pb_port_id == 8'h0c);
	assign vol_sel = pb_write_strobe & (pb_port_id == 8'h04);
	assign recording = pb_write_strobe & (pb_port_id == 8'h05);
	//
	// Handle PicoBlaze Input Port Logic
	// Input Ports:
	// * switches_in : port 00
	// * uart_data_rx : port 02
	// * uart_data_present : port 04 (1-bit, assigned to LSB)
	// * uart_buffer_full: port 05 (1-bit, assigned to LSB)
	//
	// This process block gets the value of the requested input port device
	// and passes it to PBs in_port. When PB is not requestng data from
	// a valid input port, set the input to static 0.
	always @(posedge clk2 or posedge pb_reset)
	begin
		if(pb_reset) begin
			pb_in_port <= 0;
			read_from_uart <= 0;
		end 
		else begin
			// Set pb input port to appropriate value
			case(pb_port_id)
				8'h00: pb_in_port <= switches;
				8'h08: pb_in_port <= select;
				8'h09: pb_in_port <= back;
				8'h0A: pb_in_port <= pause_play;
				8'h02: pb_in_port <= uart_rx_data;
				8'h0F: pb_in_port <= delete_finish;
				8'h04: pb_in_port <= {7'b0000000,uart_data_present};
				8'h05: pb_in_port <= {7'b0000000,uart_buffer_full};
				8'h0B: pb_in_port <= message_exists;
				default: pb_in_port <= 8'h00;
			endcase
			
	
	
			// Set up acknowledge/enable signals.
			//
			// Some modules, such as the UART, need confirmation that the data
			// has been read, since it needs to push it off the queue and make
			// the next byte available. This logic will set the 'read_from'
			// signal high for corresponding ports, as needed. Most input
			// ports will not need this.
			read_from_uart <= pb_read_strobe & (pb_port_id == 8'h04);
			if (write_to_state_reg) begin
				main <= (pb_out_port == 8'h00);
				play <= (pb_out_port == 8'h01);
				record <= (pb_out_port == 8'h02);
				delone <= (pb_out_port == 8'h03);
				delall <= (pb_out_port == 8'h04);
				vol <= (pb_out_port == 8'h05);
			end
			if (file_selection) begin
				if (play) begin
					play_1 <= (pb_out_port == 8'h00);
					play_2 <= (pb_out_port == 8'h01);
					play_3 <= (pb_out_port == 8'h02);
					play_4 <= (pb_out_port == 8'h03);
					play_5 <= (pb_out_port == 8'h04);
				end
				else if (delone) begin
					delone_1 <= (pb_out_port == 8'h00);
					delone_2 <= (pb_out_port == 8'h01);
					delone_3 <= (pb_out_port == 8'h02);
					delone_4 <= (pb_out_port == 8'h03);
					delone_5 <= (pb_out_port == 8'h04);
				end
			end
			if (vol_sel) begin
				if (vol) begin
					volume_up <= (pb_out_port == 8'h01);
					volume_down <= (pb_out_port == 8'h02);
				end
			end
			if (recording) begin
				if (record) begin
					are_recording <= (pb_out_port == 8'h01);
					record_1 <= (pb_out_port == 8'h02);
					record_2 <= (pb_out_port == 8'h03);
					record_3 <= (pb_out_port == 8'h04);
					record_4 <= (pb_out_port == 8'h05);  
					record_5 <= (pb_out_port == 8'h06);
				end
			end
		end
	end
		
		
		
	
	// Initialize state
	localparam main_state = 8'h00;
	localparam play_state = 8'h01;
	localparam record_state = 8'h02;
	localparam delone_state = 8'h03;
	localparam delall_state = 8'h04;
	localparam vol_state = 8'h05;
	localparam raise_write_record = 8'h06;
	localparam lower_write_record = 8'h07;
	localparam raise_read_play = 8'h08;
	localparam play_audio = 8'h09;
	localparam lower_ack_read = 8'h0A;
	localparam raise_read_record = 8'h0B;
	localparam record_audio = 8'h0C;
	localparam begin_deletion = 8'h0D;
	localparam delete_loop = 8'h0E;
	
	
		
		
		
	always @(posedge wizclk) begin
		if (~pb_reset) begin
			curr_state <= main_state;
		end
		else begin
			case (curr_state)
				main_state : begin
					if (play) begin
						if (play_1) begin
							address <= 0;
							maxAddr <= 26'h333332;
							curr_state <= play_state;
							//some stuff with the memory locale of the first file
						end
						else if (play_2) begin
							address <= 26'h333333;
							maxAddr <= 26'h666665;
							curr_state <= play_state;
							//some stuff with the memory locale of the second file
						end
						else if (play_3) begin
							address <= 26'h666666;
							maxAddr <= 26'h999998;
							curr_state <= play_state;
							//some stuff with the memory locale of the third file
						end
						else if (play_4) begin
							address <= 26'h999999;
							maxAddr <= 26'hCCCCCB;
							curr_state <= play_state;
							//some stuff with the memory locale of the fourth file
						end
						else if (play_5) begin
							address <= 26'hCCCCCC;
							maxAddr <= max_ram_address;
							curr_state <= play_state;
						end
					end
					else if (record) begin
						if (record_1) begin
							address <= 0;
							maxAddr <= 26'h333332;
							curr_state <= record_state;
							//some stuff with the memory locale of the first file
						end
						else if (record_2) begin
							address <= 26'h333333;
							maxAddr <= 26'h666665;
							curr_state <= record_state;
							//some stuff with the memory locale of the second file
						end
						else if (record_3) begin
							address <= 26'h666666;
							maxAddr <= 26'h999998;
							curr_state <= record_state;
							//some stuff with the memory locale of the third file
						end
						else if (record_4) begin
							address <= 26'h999999;
							maxAddr <= 26'hCCCCCB;
							curr_state <= record_state;
							//some stuff with the memory locale of the fourth file
						end
						else if (record_5) begin
							address <= 26'hCCCCCC;
							maxAddr <= max_ram_address;
							curr_state <= record_state;
						end
					end
					else if (delone) begin
						if (delone_1) begin
							address <= 0;
							maxAddr <= 26'h333332;
							curr_state <= delone_state;
							//some stuff with the memory locale of the first file
						end
						else if (delone_2) begin
							address <= 26'h333333;
							maxAddr <= 26'h666665;
							curr_state <= delone_state;
							//some stuff with the memory locale of the second file
						end
						else if (delone_3) begin
							address <= 26'h666666;
							maxAddr <= 26'h999998;
							curr_state <= delone_state;
							//some stuff with the memory locale of the third file
						end
						else if (delone_4) begin
							address <= 26'h999999;
							maxAddr <= 26'hCCCCCB;
							curr_state <= delone_state;
							//some stuff with the memory locale of the fourth file
						end
						else if (delone_5) begin
							address <= 26'hCCCCCC;
							maxAddr <= max_ram_address;
							curr_state <= delone_state;
						end
					end
					else if (delall)
						curr_state <= delall_state;
					else if (vol)
						curr_state <= vol_state;
					//check val of write_to_state_reg
					//Main menu state
				end
				play_state : begin
					if (play_1) begin
						curr_state <= raise_read_play;
						//some stuff with the memory locale of the first file
					end
					else if (play_2) begin
						curr_state <= raise_read_play;
						//some stuff with the memory locale of the second file
					end
					else if (play_3) begin
						curr_state <= raise_read_play;
						//some stuff with the memory locale of the third file
					end
					else if (play_4) begin
						curr_state <= raise_read_play;
						//some stuff with the memory locale of the fourth file
					end
					else if (play_5) begin
						curr_state <= raise_read_play;
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
					end
					if (write_to_state_reg)
						curr_state <= main_state;
				end
				raise_read_play : begin
					playback <= 1;
					enableWrite <= 0;
					reqRead <= 1;
					curr_state <= play_audio;
				end
				play_audio : begin
					reqRead <= 0;
					if (dataPresent) begin
						mem_out <= RAMout;
						ackRead <= 1;
						curr_state <= lower_ack_read;
					end
				end
				lower_ack_read : begin
					ackRead <= 0;
					address <= address + 1;
					if (address >= maxAddr)
						curr_state <= main_state;
					else
						curr_state <= play_state;
				end
				record_state : begin
					if (are_recording)
						curr_state <= raise_read_record;
						//AMin <= audio_out; 
						//curr_state = raise_write_record;
						
						//check val of write_to_state_reg
						//some shit would go here from picoblaze maybe idfk
						//nested FSM of some kind from another file?
					if (write_to_state_reg)
						curr_state <= main_state;
				end
				raise_write_record : begin 
					RAMin <= audio_out;
					enableWrite <= 1;
					curr_state <= lower_write_record;
				end
				raise_read_record : begin
					playback <= 0;
					enableWrite <= 0;
					reqRead <= 1;
					curr_state <= record_audio;
				end
				record_audio : begin
					reqRead <= 0;
					if (dataPresent)
						message_exists <= 1;
					else
						curr_state <= raise_write_record;
				end
				lower_write_record : begin
					enableWrite <= 0;
					curr_state <= record_state;
				end
				delone_state : begin
				playback <= 0;
					curr_state <= begin_deletion;
					if (write_to_state_reg)
						curr_state <= main_state;
				end
				delall_state : begin
					address <= 0;
					playback <= 0;
					maxAddr <= max_ram_address;
					curr_state <= begin_deletion;
					
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
					if (write_to_state_reg)
						curr_state <= main_state;
				end
				begin_deletion: begin
					delete_finish <= 0;
					RAMin <= 0;
					enableWrite <= 1;
					curr_state <= delete_loop;
				end
				delete_loop : begin
					enableWrite <= 0;
					address <= address + 1;
					if (address >= maxAddr) begin
						address <= 0;
						delete_finish <= 1;
						curr_state <= main_state;
					end
					else begin
						curr_state <= begin_deletion;
					end
				end
				vol_state : begin
					if (volume_up && (volume_control < 15))
						volume_control = volume_control + 1;
					else if (volume_down && (volume_control > 1))
						volume_control = volume_control - 1;
					if (write_to_state_reg)
						curr_state <= main_state;
				end
			endcase
		end
	end
endmodule
