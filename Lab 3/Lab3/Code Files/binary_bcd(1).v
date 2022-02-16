module binary_bcd_2(bin_in, digit_1, digit_2);
  
  input [6:0] bin_in;
  output reg [3:0] digit_1;
  output reg [3:0] digit_2;
  
integer i; 
always @ (bin_in) 
begin 

	digit_1 = 4'd0; 
	digit_2 = 4'd0; 

	for (i = 6; i >=0; i=i-1) 
	begin 

		if ( digit_1 >= 5) 
			digit_1 = digit_1 + 3; 

		if ( digit_2 >= 5) 
			digit_2 = digit_2 + 3; 


		digit_1 = digit_1 << 1; 
		digit_1[0] = digit_2[3]; 
		digit_2 = digit_2 << 1; 
		digit_2[0]= bin_in[i]; 

	end
end
  
endmodule