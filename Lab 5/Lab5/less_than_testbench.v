`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:53:55 03/05/2022
// Design Name:   less_than
// Module Name:   C:/Xilinx/CDA 4203L/Lab5/less_than_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: less_than
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module less_than_testbench;

	// Inputs
	reg [7:0] X;
	reg [7:0] Y;

	// Outputs
	wire x_lt_y;

	// Instantiate the Unit Under Test (UUT)
	less_than uut (
		.X(X), 
		.Y(Y), 
		.x_lt_y(x_lt_y)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		X = 9;
		Y = 100;
        
		// Add stimulus here

	end
      
endmodule

