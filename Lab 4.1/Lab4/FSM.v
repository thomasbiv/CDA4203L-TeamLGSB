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
module FSM(ni, di, qu, soda, diet, change, CLK, rst, giveSoda, giveDiet);

	input CLK, qu, di, ni, rst, soda, diet;
	output reg giveSoda, giveDiet;
	output reg change;

// Register the current state.
	reg [4:0] curr_state = 5'b00000;

// Parameters for each specific state.
	parameter init_state = 5'b00000;
	parameter state_5 = 5'b00001;
	parameter state_10 = 5'b00010;
	parameter state_15 = 5'b00011;
	parameter state_20 = 5'b00100;
	parameter state_25 = 5'b00101;
	parameter state_30 = 5'b00110;
	parameter state_35 = 5'b00111;
	parameter state_40 = 5'b01000;
	parameter state_45 = 5'b01001;
	parameter state_50 = 5'b01010;
	parameter state_55 = 5'b01011;
	parameter state_60 = 5'b01100;
	parameter state_65 = 5'b01101;
	parameter state_soda = 5'b01110;
	parameter state_diet = 5'b01111;
	parameter state_60inter = 5'b10000;
	parameter state_55inter = 5'b10001;
	parameter state_50inter = 5'b10010;
	parameter state_45inter = 5'b10011;


// Moore Finite State Machine describing a basic process of vending.
// A portion of the states correspond to the amount of change put into the machine.
// The final two states define either giving a soda or giving diet, before reseting to the initial state. 
always @(posedge CLK) begin
	if (rst == 1) begin
		curr_state = init_state;
	end
	else
		change <= 0;
		case (curr_state)
			init_state : begin
				giveSoda <= 0;
				giveDiet <= 0;
				change <= 0;
				if (qu == 1)
					curr_state <= state_25;
				else if (di == 1)
					curr_state <= state_10;
				else if (ni == 1)
					curr_state <= state_5;
			end
			state_5 : begin
				if (qu == 1) begin
					curr_state <= state_30;
					end
				else if (di == 1) begin
					curr_state <= state_15;
					end
				else if (ni == 1) begin
					curr_state <= state_10;
					end
			end
			state_10 : begin
				if (qu == 1) begin
					curr_state <= state_35;
					end
				else if (di == 1) begin
					curr_state <= state_20;
					end
				else if (ni == 1) begin
					curr_state <= state_15;
					end
			end
			state_15 : begin
				if (qu == 1) begin
					curr_state <= state_40;
					end
				else if (di == 1) begin
					curr_state <= state_25;
					end
				else if (ni == 1) begin
					curr_state <= state_20;
					end
			end
			state_20 : begin
				if (qu == 1) begin
					curr_state <= state_45;
					end
				else if (di == 1) begin
					curr_state <= state_30;
					end
				else if (ni == 1) begin
					curr_state <= state_25;
					end
			end
			state_25 : begin
				if (qu == 1) begin
					curr_state <= state_50;
					end
				else if (di == 1) begin
					curr_state <= state_35;
					end
				else if (ni == 1) begin
					curr_state <= state_30;
					end
			end
			state_30 : begin
				if (qu == 1) begin
					curr_state <= state_55;
					end
				else if (di == 1) begin
					curr_state <= state_40;
					end
				else if (ni == 1) begin
					curr_state <= state_35;
					end
			end
			state_35 : begin
				if (qu == 1) begin
					curr_state <= state_60;
					end
				else if (di == 1) begin
					curr_state <= state_45;
					end
				else if (ni == 1) begin
					curr_state <= state_40;
					end
			end
			state_40 : begin
				if (qu == 1) begin
					curr_state <= state_65;
					end
				else if (di == 1) begin
					curr_state <= state_50;
					end
				else if (ni == 1) begin
					curr_state <= state_45;
					end
			end
			state_45 : begin
				if (soda == 1) begin
					giveSoda <= 1;
					curr_state <= init_state;
					end
				else if (diet == 1) begin
					giveDiet <= 1;
					curr_state <= init_state;	
					end
			end
			state_50 : begin
				change <= 1;
				curr_state <= state_45inter;
				//#5;
			end
			state_55 : begin
				change <= 1;
				curr_state <= state_50inter;
				//#5;
			end
			state_60 : begin
				change <= 1;
				curr_state <= state_55inter;
				//#5;
			end
			state_65 : begin
				change <= 1;
				curr_state <= state_60inter;
				//#5;
			end
			/*state_soda : begin
				giveSoda <= 1;
				curr_state <= init_state;
			end
			state_diet : begin
				giveDiet <= 1;
				curr_state <= init_state;
			end*/
			state_60inter : begin
				change <= 0;
				#10;
				curr_state <= state_60;
			end
			state_55inter : begin
				change <= 0;
				#10;
				curr_state <= state_55;
			end
			state_50inter : begin
				change <= 0;
				#10;
				curr_state <= state_50;
			end
			state_45inter : begin
				change <= 0;
				#10;
				curr_state <= state_45;
			end
		endcase
	end
	
endmodule
