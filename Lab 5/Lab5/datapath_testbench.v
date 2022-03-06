`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:21:20 03/03/2022
// Design Name:   datapath
// Module Name:   C:/Xilinx/CDA 4203L/Lab5/datapath_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module datapath_testbench;

	// Inputs
	reg x_ld;
	reg y_ld;
	reg x_sel;
	reg y_sel;
	reg d_o_ld;
	reg enable;
	reg [7:0] x_i;
	reg [7:0] y_i;
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] d_o;

	// Instantiate the Unit Under Test (UUT)
	datapath uut (
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_lt_y(x_lt_y),
		.x_neq_y(x_neq_y),
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.enable(enable), 
		.x_i(x_i), 
		.y_i(y_i), 
		.d_o(d_o), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		x_ld = 0;
		y_ld = 0;
		x_sel = 0;
		y_sel = 0;
		d_o_ld = 0;
		enable = 0;
		x_i = 0;
		y_i = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

