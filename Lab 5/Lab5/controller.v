`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:26 03/03/2022 
// Design Name: 
// Module Name:    controller 
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

module controller(x_ld, y_ld, x_sel, y_sel, d_o_ld, enable, clk, reset, x_neq_y, x_lt_y, done);

input enable, clk, reset, x_lt_y, x_neq_y;

output reg x_ld, y_ld, x_sel, y_sel, d_o_ld, done;

reg [3:0] curr_state = 4'b0000;

localparam state_1 = 4'b0000,
state_2 = 4'b0001,
state_2J = 4'b0010,
state_3 = 4'b0011,
state_4 = 4'b0100,
state_5 = 4'b0101,
state_6 = 4'b0110,
state_7 = 4'b0111,
state_8 = 4'b1000,
state_6J = 4'b1001,
state_5J = 4'b1010,
state_9 = 4'b1011,
state_1J = 4'b1100,
state_done = 4'b1101,
state_15 = 4'b1110,
state_16 = 4'b1111;

always @(posedge clk) begin

	if (reset == 1) begin
		curr_state = state_1;
		x_ld = 0;
		y_ld = 0;
		x_sel = 0;
		y_sel = 0;
		d_o_ld = 0;
		done = 0;
	end
	else
		case (curr_state)
			state_1 : begin
				done = 0;
				curr_state = state_2;
			end
			state_2 : begin
				if (enable == 1) begin
					curr_state = state_3;
				end
				else if (enable == 0) begin
					curr_state = state_2J;
				end
			end
			state_2J : begin
				curr_state = state_2J;
			end
			state_3 : begin
				x_ld = 1;
				x_sel = 0;
				curr_state = state_4;
			end
			state_4 : begin
				x_ld = 0;
				y_ld = 1;
				y_sel = 0;
				curr_state = state_15;
			end
			state_15 : begin
				if (x_neq_y == 0) begin
					curr_state = state_9;
				end
				else 
					curr_state = state_5;
			end
			state_5 : begin
				if (x_neq_y == 0) begin
					curr_state = state_9;
				end
				else if (x_neq_y == 1) begin
					curr_state = state_6;
				end
				else 
					curr_state = state_5J;
			end
			state_6 : begin
				if (x_lt_y == 0) begin
					curr_state = state_8;
				end
				else if (x_lt_y == 1) begin
					curr_state = state_7;
				end
				else if (x_neq_y == 1) begin
					curr_state = state_6J;
				end
			end
			state_7 : begin
				y_sel = 1;
				y_ld = 1;
				curr_state = state_6J;
			end
			state_8 : begin
				x_sel = 1;
				x_ld = 1;
				curr_state = state_6J;
			end
			state_6J : begin
				x_ld = 0;
				y_ld = 0;
				curr_state = state_5J;
			end
			state_5J : begin
				curr_state = state_5;
			end
			state_9 : begin
				d_o_ld = 1;
				curr_state = state_done;
			end
			state_done : begin 
				done = 1;
			end
		endcase
	end				

endmodule
