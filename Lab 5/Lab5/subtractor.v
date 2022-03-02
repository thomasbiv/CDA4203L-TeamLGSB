`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:24:22 03/02/2022 
// Design Name: 
// Module Name:    subtractor 
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
module subtractor(X, Y, result);

input [3:0] X;
input [3:0] Y;

output [3:0] result;

assign result = X - Y;

endmodule
