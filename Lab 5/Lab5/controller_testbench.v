`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:23:01 03/03/2022
// Design Name:   controller
// Module Name:   C:/Xilinx/CDA 4203L/Lab5/controller_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controller_testbench;

	// Inputs
	reg enable;
	reg d_o;
	reg clk;
	reg reset;
	reg x_neq_y;
	reg x_lt_y;

	// Outputs
	wire x_ld;
	wire y_ld;
	wire x_sel;
	wire y_sel;
	wire d_o_ld;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.enable(enable), 
		.done(done), 
		.clk(clk), 
		.reset(reset), 
		.x_neq_y(x_neq_y), 
		.x_lt_y(x_lt_y)
	);

	initial begin
		// Initialize Inputs
		enable = 0;
		d_o = 0;
		clk = 0;
		reset = 0;
		x_neq_y = 0;
		x_lt_y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

