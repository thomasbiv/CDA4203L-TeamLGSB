`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:27 02/17/2022 
// Design Name: 
// Module Name:    vending_machine 
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
module vending_machine(ni, di, qu, soda, diet, change, CLK, rst, giveSoda, giveDiet);

	input CLK, qu, di, ni, rst, soda, diet;
	output reg giveSoda, giveDiet;
	output reg change;

	wire clk_D, deb_qu, deb_ni, deb_di, deb_soda, deb_diet;

	clock_divider clk_divider(
			.clk(CLK),
			.rst(rst),
			.clk_div(clk_D)
	);
	
	debouncer deb1(
			.clk(CLK),
			.clock_div(clk_D),
			.in(qu),
			.out(deb_qu)
	);
	
	debouncer deb2(
			.clk(CLK),
			.clock_div(clk_D),
			.in(ni),
			.out(deb_ni)
	);
	
	debouncer deb3(
			.clk(CLK),
			.clock_div(clk_D),
			.in(di),
			.out(deb_di)
	);
	
	debouncer deb4(
			.clk(CLK),
			.clock_div(clk_D),
			.in(soda),
			.out(deb_soda)
	);
	
	debouncer deb5(
			.clk(CLK),
			.clock_div(clk_D),
			.in(diet),
			.out(deb_diet)
	);

FSM  Moore(
		.ni(ni), 
		.di(di), 
		.qu(qu),
		.rst(rst),
		.giveSoda(giveSoda), 
		.giveDiet(giveDiet), 
		.change(change), 
		.CLK(clk_D),
		.soda(soda),
		.diet(diet)
	);

endmodule
