`timescale 1ns / 1ps

module lab_board(LED, SW, CLK);

output [7:0] LED;
input [7:0] SW;
input CLK;

bcd_count_7 counter( 
.max_count(SW[6:0]), 
.CLK(CLK), 
.run(SW[7]), 
.digit_1(LED[7:4]), 
.digit_2(LED[3:0]) 
); 


endmodule
