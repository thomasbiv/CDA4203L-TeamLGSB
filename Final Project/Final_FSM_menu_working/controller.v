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
	
	// Wires and Register Declarations
	//
	// PicoBlaze Data Lines
	wire	[7:0]	pb_port_id;
	wire	[7:0]	pb_out_port;
	reg		[7:0]	pb_in_port;
	wire			pb_read_strobe;
	wire			pb_write_strobe;
	wire	write_to_state_reg;
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
	assign write_to_state_reg = pb_write_strobe & (pb_port_id == 8'h0B);
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
	
endmodule
