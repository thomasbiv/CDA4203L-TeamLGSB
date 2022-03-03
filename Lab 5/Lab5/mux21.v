`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:18:29 03/02/2022 
// Design Name: 
// Module Name:    mux21 
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
module mux21(mux_in_a, mux_in_b, mux_out, mux_sel);

input [7:0]mux_in_a;
input [7:0]mux_in_b;
input mux_sel;
output [7:0]mux_out;

reg [7:0]mux_out;

always @(mux_sel or mux_in_a or mux_in_b)
begin
	case(mux_sel)
		1'b0: mux_out = mux_in_a;
		1'b1: mux_out = mux_in_b;
		default: mux_out = 4'bzzzz;
	endcase
end

endmodule
