`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:16 03/05/2022
// Design Name:   GCD_module
// Module Name:   C:/Users/pc/Desktop/Other Projects/CDA4203L-TeamLGSB/Lab 5/Lab5/GCD_module_testbench.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GCD_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GCD_module_testbench;

	// Inputs
	reg [7:0] x;
	reg clk;
	reg start, reset;
	reg [7:0] y;

	// Outputs
	wire [7:0] out;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	GCD_module uut (
		.out(out), 
		.x(x), 
		.CLK(clk), 
		.start(start),
		.reset(reset),
		.y(y),
		.done(done)
	);
	
	// Clock generator.
	always begin
		clk = ~clk;
		#1;
	end

	initial begin
		// Initialize Inputs
		x = 0;
		clk = 0;
		start = 0;
		reset = 0;
		y = 0;

		// Wait 100 ns for global reset to finish

		reset = 1;;
		#50;
		reset = 0;
		
		x = 10;
		y = 5;
		
		
		start = 1;
		#200;
		start = 0;
		#100;
		
		reset = 1;;
		#50;
		reset = 0;
        
		// Add stimulus here

	end
       
endmodule

