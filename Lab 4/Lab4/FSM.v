`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:38:27 02/15/2022 
// Design Name: 
// Module Name:    FSM 
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
module FSM(ni, di, qu, giveSoda, giveDiet, change, CLK);

input CLK, qu, di, ni, reset;
inout giveSoda, giveDiet;
output change;

reg [3:0] curr_state;

parameter init_state <= 4'b0000;
parameter state_5 <= 4'b0001;
parameter state_10 <= 4'b0010;
parameter state_15 <= 4'b0011;
parameter state_20 <= 4'b0100;
parameter state_25 <= 4'b0101;
parameter state_30 <= 4'b0110;
parameter state_35 <= 4'b0111;
parameter state_40 <= 4'b1000;
parameter state_45 <= 4'b1001;
parameter state_50 <= 4'b1010;
parameter state_55 <= 4'b1011;
parameter state_60 <= 4'b1100;
parameter state_65 <= 4'b1101;
parameter state_soda <= 4'b1110;
parameter state_diet <= 4'b1111;

always @(posedge clk) begin
	if (reset == 1) begin
		curr_state <= init_state;
	end
	else
		case (curr_state)
			init_state : begin
				if (qu)
					curr_state <= state_25;
				else if (di)
					curr_state <= state_10;
				else if (ni)
					curr_state <= state_5;
			end
			state_5 : begin
				if (qu)
					curr_state <= state_30;
				else if (di)
					curr_state <= state_15;
				else if (ni)
					curr_state <= state_10;
			end
			state_10 : begin
				if (qu)
					curr_state <= state_35;
				else if (di)
					curr_state <= state_20;
				else if (ni)
					curr_state <= state_15;
			end
			state_15 : begin
				if (qu)
					curr_state <= state_40;
				else if (di)
					curr_state <= state_25;
				else if (ni)
					curr_state <= state_20;
			end
			state_20 : begin
				if (qu)
					curr_state <= state_45;
				else if (di)
					curr_state <= state_30;
				else if (ni)
					curr_state <= state_25;
			end
			state_25 : begin
				if (qu)
					curr_state <= state_50;
				else if (di)
					curr_state <= state_35;
				else if (ni)
					curr_state <= state_30;
			end
			state_30 : begin
				if (qu)
					curr_state <= state_55;
				else if (di)
					curr_state <= state_40;
				else if (ni)
					curr_state <= state_35;
			end
			state_35 : begin
				if (qu)
					curr_state <= state_60;
				else if (di)
					curr_state <= state_45;
				else if (ni)
					curr_state <= state_40;
			end
			state_40 : begin
				if (qu)
					curr_state <= state_65;
				else if (di)
					curr_state <= state_50;
				else if (ni)
					curr_state <= state_45;
			end
			state_45 : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;		
			end
			state_50 : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
			state_55 : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
			state_60 : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
			state_65 : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
			state_soda : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
			state_diet : begin
				if (giveSoda)
					curr_state <= state_soda;
				else if (giveDiet)
					curr_state <= state_diet;
			end
		endcase
	
	assign 
endmodule
