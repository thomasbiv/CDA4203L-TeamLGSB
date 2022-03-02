`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:17:04 03/02/2022 
// Design Name: 
// Module Name:    less_than 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: It just works.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module less_than(X, Y, x_lt_y);

input [3:0] X;
input [3:0] Y;

output x_lt_y;

assign x_lt_y = (X < Y) ? 1'b1:1'b0;

endmodule
