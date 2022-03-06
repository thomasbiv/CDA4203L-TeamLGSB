`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:53 03/03/2022 
// Design Name: 
// Module Name:    GCD_module 
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
module GCD_module(LED, SW, clk, BTN, DIP);

	input [7:0] SW;
	input [7:0] DIP;
	input [3:0] BTN;
	input clk;

	output [9:0] LED;

	wire x_ld, y_ld, x_sel, y_sel, d_o_ld, x_neq_y, x_lt_y, deb_rst, deb_st, clk_D;

	clock_divider clk_divider(
			.clk(clk),
			.rst(BTN[3]),
			.clk_div(clk_D)
	);

	debouncer deb_reset(
			.clk(clk),
			.clock_div(clk_D),
			.in(BTN[3]),
			.out(deb_rst)
	);
	
	debouncer deb_start(
			.clk(clk),
			.clock_div(clk_D),
			.in(BTN[0]),
			.out(deb_st)
	);

	datapath data(
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.x_i(SW), 
		.y_i(DIP), 
		.d_o(LED), 
		.clk(clk), 
		.reset(BTN[3])
	);
	
	controller controls(
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.enable(BTN[0]),  
		.clk(clk), 
		.reset(BTN[3]), 
		.x_neq_y(x_neq_y), 
		.x_lt_y(x_lt_y),
		.done(LED[9])
	);

endmodule
