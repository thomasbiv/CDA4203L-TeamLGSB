`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:53 03/09/2022 
// Design Name: 
// Module Name:    lab_board 
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
module lab_board(SW, CLK, BTN, DIP, LED, LDT1G);

	input [7:0] SW;
	input [7:0] DIP;
	input [3:0] BTN;
	input CLK;
	
	output [7:0] LED;
	output LDT1G;
	
	GCD_module GCD(
		.x(SW[7:0]),
		.y(DIP[7:0]),
		.out(LED[7:0]),
		.done(LDT1G),
		.start(BTN[0]),
		.reset(BTN[3]),
		.CLK(CLK)
	);

endmodule
