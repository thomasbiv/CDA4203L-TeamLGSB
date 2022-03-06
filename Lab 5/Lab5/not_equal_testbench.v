`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:17:30 03/05/2022
// Design Name:   not_equal
// Module Name:   C:/Xilinx/CDA 4203L/Lab5/not_equal_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: not_equal
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module not_equal_testbench;

	// Inputs
	reg [7:0] X;
	reg [7:0] Y;

	// Outputs
	wire x_neq_y;

	// Instantiate the Unit Under Test (UUT)
	not_equal uut (
		.X(X), 
		.Y(Y), 
		.x_neq_y(x_neq_y)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		X = 11;
		Y = 10;
        
		// Add stimulus here

	end
      
endmodule

