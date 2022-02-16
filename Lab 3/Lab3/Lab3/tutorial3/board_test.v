`timescale 1ns / 1ps

module board_test(LED, SW, BTN, CLK);

output reg [7:0] LED;
input [7:0] SW;
input [3:0] BTN;
input CLK;

always @(posedge CLK)
begin
	if(BTN[0])
		LED = 8'b1111_1111;
	else if(BTN[1])
		LED = 8'b0000_0000;
	else if(BTN[2])
		LED = 8'b1111_0000;
	else if(BTN[3])
		LED = SW;
	else
		LED = LED;
end

endmodule
