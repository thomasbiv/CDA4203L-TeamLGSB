`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:56:13 03/05/2022
// Design Name:   subtractor
// Module Name:   C:/Xilinx/CDA 4203L/Lab5/subtractor_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module subtractor_testbench;

	// Inputs
	reg [7:0] X;
	reg [7:0] Y;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	subtractor uut (
		.X(X), 
		.Y(Y), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		X = 10;
		Y = 5;
        
		// Add stimulus here

	end
      
endmodule

