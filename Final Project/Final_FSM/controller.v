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

module controller( pause_play, scroll_up, scroll_down, select, back, switches, leds, rs232_tx, rs232_rx, reset, clk );

	// Top-level Inputs and Outputs
	// These connect directly to FPGA pins via the pin map
	//
	// Control - clk, rst, etc
	input			reset;			// Remember: ACTIVE LOW!!!
	input			clk;			// 100 MHz
	// GPIO
	input	[5:0]	switches;
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
	input  OSC_100MHz;

   inout  AUD_ADCLRCK;
   input  AUD_ADCDAT;

   inout  AUD_DACLRCK;
   output AUD_DACDAT;

   output AUD_XCK;
   inout  AUD_BCLK;

   output AUD_I2C_SCLK;
   inout  AUD_I2C_SDAT;

   output AUD_MUTE;
	output PLL_LOCKE;
	 
   input  [3:0] KEY; 
   input  [3:0] SW;
   output [3:0] LED;

	// Wires and Register Declarations
	//
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
	reg				read_from_uart;
	wire			uart_reset;
	// UART Data Lines
	// TX does not need a wire, as it is fed directly by pb_out_port
	wire	[7:0]	uart_rx_data;
	
	// LED wires
	wire write_to_leds;
	wire led_reset;
	
	//Register the current state.
	reg [3:0] curr_state = 3'b0000;

	//Parameters for each state.
	localparam init_state = 3'd0;
	localparam state_play = 3'd1;
	localparam state_record = 3'd2;
	localparam state_delone = 3'd3;
	localparam state_delall = 3'd4;
	localparam state_vol = 3'd5;
	

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
		.clk(clk)
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
		.clk(clk)
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
					.clk(CLK), 
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
					.clkout(systemCLK), //
					.sys_clk(clk), 
					.rdy(rdy), 
					.rd_data_pres(dataPresent),
					.max_ram_address(max_ram_address)
	);
	
	
	sockit_top what(
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
		.KEY(KEY),
		.SW(SW),
		.LED(LED)
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
	assign write_to_state_reg = pb_write_strobe & (pb_port_id == 8'h06);
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
	always @(posedge clk or posedge pb_reset)
	begin
		if(pb_reset) begin
			pb_in_port <= 0;
			read_from_uart <= 0;
		end else begin
			// Set pb input port to appropriate value
			case(pb_port_id)
				8'h06: pb_in_port <= scroll_up;
				8'h00: pb_in_port <= switches;
				8'h07: pb_in_port <= scroll_down;
				8'h08: pb_in_port <= select;
				8'h09: pb_in_port <= back;
				8'h0A: pb_in_port <= pause_play;
				8'h02: pb_in_port <= uart_rx_data;
				8'h04: pb_in_port <= {7'b0000000,uart_data_present};
				8'h05: pb_in_port <= {7'b0000000,uart_buffer_full};
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
		end
	end
		
	always @(posedge clk or posedge pb_reset) begin
		if (~pb_reset) begin
			curr_state = main_state;
		end
		else
			case (curr_state)
				main_state : begin
					//check val of write_to_state_reg
					//Main menu state
				end
				state_play : begin
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
				end
				state_record : begin
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
				end
				state_delone : begin
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
				end
				state_delall : begin
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
				end
				state_vol : begin
					//check val of write_to_state_reg
					//some shit would go here from picoblaze maybe idfk
					//nested FSM of some kind from another file?
				end
			endcase
		end
			
	
endmodule
