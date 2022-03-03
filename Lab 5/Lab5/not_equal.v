`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:32 03/02/2022 
// Design Name: 
// Module Name:    not_equal 
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
module not_equal(X, Y, x_neq_y);

input [7:0] X;
input [7:0] Y;
output x_neq_y;

assign x_neq_y = (X != Y) ? 1'b1:1'b0;

endmodule
