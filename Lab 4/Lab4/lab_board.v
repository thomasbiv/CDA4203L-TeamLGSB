`timescale 1ns / 1ps

module lab_board(LED, SW, CLK);

output [2:0] LED;
input [5:0] SW;
input CLK;

	vending_machine vending_machine(
		.ni(SW[0]), 
		.di(SW[1]), 
		.qu(SW[2]), 
		.soda(SW[3]), 
		.diet(SW[4]), 
		.change(LED[0]), 
		.CLK(CLK), 
		.rst(SW[5]), 
		.giveSoda(LED[1]), 
		.giveDiet(LED[2])
	);
	
endmodule
