`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Deez
// Engineer: Nuts
// 
// Create Date:    12:06:07 03/02/2022 
// Design Name: 
// Module Name:    datapath 
// Project Name: 
// Target Devices: All of them.
// Tool versions: 
// Description: It just works.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: I spent too much time on this.
//
//////////////////////////////////////////////////////////////////////////////////

// Wrapper for the entire datapath of the GCD module.
module datapath(x_ld, y_ld, x_sel, y_sel, d_o_ld, x_i, y_i, d_o, x_lt_y, x_neq_y, clk, reset);

	// Inputs and outputs.
	input x_ld, y_ld, x_sel, y_sel, d_o_ld, clk, reset;
	input [7:0] x_i;
	input [7:0] y_i;

	output [7:0] d_o;
	output x_lt_y, x_neq_y;

	// Wiring for each module in the datapath.
	wire [7:0] x_mux_wire;
	wire [7:0] y_mux_wire;
	wire [7:0] x_dff_wire;
	wire [7:0] y_dff_wire;
	wire [7:0] d_o_dff_wire;
	wire [7:0] x_sub_y;
	wire [7:0] y_sub_x;

	dff x_reg(
		.clk(clk),
		.d(x_mux_wire), 
		.q(x_dff_wire), 
		.enable(x_ld),
		.reset(reset)
	);
	
	dff y_reg(
		.clk(clk),
		.d(y_mux_wire), 
		.q(y_dff_wire), 
		.enable(y_ld),
		.reset(reset)
	);
	
	dff d_o_reg(
		.clk(clk),
		.d(x_dff_wire),
		.q(d_o),
		.enable(d_o_ld),
		.reset(reset)
	);

	less_than lt(
		.X(x_dff_wire),
		.Y(y_dff_wire),
		.x_lt_y(x_lt_y)
	);
	
	not_equal neq(
		.X(x_dff_wire),
		.Y(y_dff_wire),
		.x_neq_y(x_neq_y)
	);
	
	subtractor sub_x_y(
		.X(x_dff_wire),
		.Y(y_dff_wire),
		.result(x_sub_y)
	);
	
	subtractor sub_y_x(
		.X(y_dff_wire), 
		.Y(x_dff_wire), 
		.result(y_sub_x) 
	);
	
	mux211 x_mux(
		.mux_in_a(x_i),
		.mux_in_b(x_sub_y),
		.mux_out(x_mux_wire), 
		.mux_sel(x_sel)
	);
	
	mux211 y_mux(
		.mux_in_a(y_i),
		.mux_in_b(y_sub_x),
		.mux_out(y_mux_wire),
		.mux_sel(y_sel)
	);
	
endmodule
