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
module GCD_module(out, x, CLK, start, reset, y, done);

	input [7:0] x;
	input [7:0] y;
	input start, reset;
	input CLK;

	output [7:0] out;
	output done;

	wire x_ld, y_ld, x_sel, y_sel, d_o_ld, x_neq_y, x_lt_y, deb;
	
	debouncer deb_start(
			.clk(CLK),
			.in(start),
			.out(deb)
	);

	datapath data(
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.x_i(x), 
		.x_lt_y(x_lt_y),
		.x_neq_y(x_neq_y),
		.y_i(y), 
		.d_o(out), 
		.clk(CLK), 
		.reset(reset)
	);
	
	controller controls(
		.x_ld(x_ld), 
		.y_ld(y_ld), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.d_o_ld(d_o_ld), 
		.enable(deb),  
		.clk(CLK), 
		.reset(reset), 
		.x_neq_y(x_neq_y), 
		.x_lt_y(x_lt_y),
		.done(done)
	);

endmodule
