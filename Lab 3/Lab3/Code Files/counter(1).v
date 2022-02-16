// Source template for a simple 7-bit binary counter with
// enable and synchronous reset.

module count_7(run, CLK, count_out);

  output reg [6:0] count_out;
  input run, CLK;

initial begin 
count_out = 0; 
end

  always @(posedge CLK) begin
		if(run == 1'b0) begin // Reset Condition
			count_out = 0; 
		end     

		else if (run == 1'b1) begin // Run Condition
			count_out = count_out + 1'b1; 
		end

		else begin
			count_out = count_out; 
		end
end
  
endmodule