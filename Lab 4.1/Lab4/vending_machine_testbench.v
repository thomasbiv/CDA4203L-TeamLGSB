`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:50:53 02/17/2022
// Design Name:   vending_machine
// Module Name:   C:/Xilinx/CDA 4203L/Lab4/vending_machine_testbench.v
// Project Name:  Lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vending_machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vending_machine_testbench;

	// Inputs
	reg ni;
	reg di;
	reg qu;
	reg soda;
	reg diet;
	reg CLK;
	reg rst;

	// Outputs
	wire change;
	wire giveSoda;
	wire giveDiet;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.ni(ni), 
		.di(di), 
		.qu(qu), 
		.soda(soda), 
		.diet(diet), 
		.change(change), 
		.CLK(CLK), 
		.rst(rst), 
		.giveSoda(giveSoda), 
		.giveDiet(giveDiet)
	);
// Clock generator.
	always begin
		CLK = ~CLK;
		#10;
	end

	initial begin
		// Initialize Inputs
		ni = 0;
		di = 0;
		qu = 0;
		soda = 0;
		diet = 0;
		CLK = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      		//qu = 1;
		//#10;
		//qu = 0;
		/*di = 1;
		#10;
		di = 0;
		#10;
		di = 1;
		#10;
		di = 0;
		#10
		di = 1;
		#10;
		di = 0;
		#10;*/
		//di = 1;
		//#10;
		//di = 0;
		#1;
		ni = 1;
		#20;
		ni = 0;
		#20;
		ni = 1;
		#20;
		ni = 0;
		#20;
		ni = 1;
		#20;
		ni = 0;
		#20;
		ni = 1;
		#20;
		ni = 0;
		#20;
		ni = 1;
		#20;
		ni = 0;
		#20;
		di = 1;
		#20;
		di = 0;
		#20;
		/*//#20;
		//qu = 1;
		//#10;
		//qu = 0;*/
		soda = 1;
		#20;
		soda = 0;
		#20;

	end
      
endmodule

