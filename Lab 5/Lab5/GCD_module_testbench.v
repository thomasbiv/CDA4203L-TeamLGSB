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
	reg [7:0] SW;
	reg clk;
	reg [3:0] BTN;
	reg [7:0] DIP;

	// Outputs
	wire [9:0] LED;

	// Instantiate the Unit Under Test (UUT)
	GCD_module uut (
		.LED(LED), 
		.SW(SW), 
		.clk(clk), 
		.BTN(BTN), 
		.DIP(DIP)
	);
	
	// Clock generator.
	always begin
		clk = ~clk;
		#10;
	end

	initial begin
		// Initialize Inputs
		SW = 0;
		clk = 0;
		BTN = 0;
		DIP = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		BTN = 1;
		
		#100;
		
		BTN = 0;
		
		#100;
		
		SW = 10;
		DIP = 5;
		
		#100;
		
		SW = 12;
		DIP = 8;
		
		#100;
        
		// Add stimulus here

	end
      
endmodule

