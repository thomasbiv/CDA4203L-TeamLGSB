// Wrapper to add programmability to a 7-bit counter.
// This module contains the logic to stop a counter when it
// reaches a designated value. The maximum value is 99 (decimal)

module prog_count_7(max_count, run, CLK, count_out);

input [6:0] max_count;
input run, CLK;
output [6:0] count_out;

// Wires/Registers required go here.
reg clk;
reg [6:0] temp;
// 7-bit counter instance
count_7 counter_1(
		  .run(run),
		  .CLK(clk),
		  .count_out(count_out)
);


// TODO: Write logic for Counter control
//In your always block, first check if run == 0, then read //max_count. Compare max_count with count_out to stop.
always @(CLK or max_count) begin 
		if (run == 0) begin
			clk = CLK;
			temp = max_count;	
	end
	else begin
		if (temp == count_out || count_out == 99) begin
			clk = 0;
		end
		else if (temp < count_out) begin
			clk = 0;
		end
		else begin
			clk = CLK;
		end
	end
end	
		
endmodule 