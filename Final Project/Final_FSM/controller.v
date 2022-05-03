`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    
// Design Name: 
// Module Name:    loopback 
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

module controller(AUD_ADCLRCK, AUD_ADCDAT, AUD_DACLRCK, AUD_DACDAT, 
						AUD_XCK, AUD_BCLK, AUD_I2C_SCLK, AUD_I2C_SDAT, AUD_MUTE, PLL_LOCKED, 
						KEY, LED, ledRAM, data_in, write_enable, rdy, 
						rd_data_pres, read_ack, reset, clk, sys_clk, clkout, 
						hw_ram_rasn, hw_ram_casn, hw_ram_wen, SW, hw_ram_ba, hw_ram_udqs_p, hw_ram_udqs_n, 
						hw_ram_ldqs_p, hw_ram_ldqs_n, hw_ram_udm, hw_ram_ldm, hw_ram_ck, hw_ram_ckn, 
						hw_ram_cke, hw_ram_odt, hw_ram_ad, hw_ram_dq, hw_rzq_pin, hw_zio_pin, s_req, s_end);
	
	//Interfacing variables
	reg read;
	reg clk;
	reg write;
	wire wizclkl;
	wire clk1;
	wire clk2;
	reg [25:0] address;
	reg reqRead;
	reg read_state;
	reg ackRead;
	wire dataPresent;
	reg tmpData;
	output s_req;
	output s_end;
	reg s_req_check;
	reg s_end_check;
	reg [15:0] audio_out;
	wire [15:0] RAMout;
	reg enableWrite;
	reg [15:0] RAMin;
	inout AUD_ADCLRCK;
	inout AUD_DACLRCK;
	input  AUD_ADCDAT;
	
	output AUD_DACDAT;
   output AUD_XCK;
   inout  AUD_BCLK;
   output AUD_I2C_SCLK;
   inout  AUD_I2C_SDAT;
   output AUD_MUTE;
	output PLL_LOCKED;
   input  [3:0] KEY;
	input [3:0] SW;
	output reg LED;
	wire [25:0] max_ram_address;
	
	
	
	clkwiz wiz(
		.CLK_IN1(wizclk),
		.CLK_OUT1(clk1),
		.CLK_OUT2(clk2)
	);
	
	
	sockit_top audio_interface (
		.OSC_100MHz(clk2),
		.AUD_ADCLRCK(AUD_ADCLRCK),
		.AUD_ADCDAT(AUD_ADCDAT),
		.AUD_XCK(AUD_XCK),
		.AUD_BCLK(AUD_BCLK),
		.AUD_I2C_SCLK(AUD_I2C_SCLK),
		.AUD_I2C_SDAT(AUD_I2C_SDAT),
		.AUD_MUTE(AUD_MUTE),
		.PLL_LOCKED(PLL_LOCKED),
		.KEY(KEY),
		.SW(SW),
		.LED(LED),
		.audio_out(audio_out),
		.audio_in(audio_in),
		.audioCLK(audioCLK),
		.s_end(s_end),
		.s_req(s_req)
	);
	
	
	ram_interface_wrapper RAMWrapper (
		.address(address),
		.max_ram_address(max_ram_address),
		.ledRAM(ledRAM),
		.data_in(RAMin),
		.write_enable(write_enable),
		.rdy(rdy),
		.rd_data_pres(dataPresent),
		.read_request(readReq),
		.read_ack(read_ack),
		.data_out(RAMout),
		.reset(reset),
		.clk(clk),
		.sys_clk(wizclk),
		.clkout(wizclk),
		.hw_ram_rasn(hw_ram_rasn),
		.hw_ram_casn(hw_ram_casn),
		.hw_ram_wen(hw_ram_wen),
		.hw_ram_ba(hw_ram_ba),
		.hw_ram_udqs_p(hw_ram_udqs_p),
		.hw_ram_udqs_n(hw_ram_udqs_n),
		.hw_ram_ldqs_p(hw_ram_ldqs_p),
		.hw_ram_ldqs_n(hw_ram_ldqs_n),
		.hw_ram_udm(hw_ram_udm),
		.hw_ram_ldm(hw_ram_ldm),
		.hw_ram_ck(hw_ram_ck),
		.hw_ram_ckn(hw_ram_ckn),
		.hw_ram_cke(hw_ram_cke),
		.hw_ram_odt(hw_ram_odt),
		.hw_ram_ad(hw_ram_ad),
		.hw_ram_dq(hw_ram_dq),
		.hw_rzq_pin(hw_rzq_pin),
		.hw_zio_pin(hw_zio_pin)
	);
	
	
	initial begin
		read <= 0;
		write <= 0;
		address <= 0;
		reqRead <= 0;
		read_state <= 0;
		ackRead <= 0;
		tmpData <= 0;
		s_req_check <= 0;
		s_end_check <= 0;
		enableWrite <= 0;
	end
	
	always @(posedge wizclk) begin
		if (rdy) begin
			if (read) begin
				if (read_state == 0) begin
					reqRead <= 1;
					address = address + 1;
					read_state <= 1;
					ackRead = 0;
				end
				else if (read_state == 1) begin
					if (dataPresent) begin
						ackRead = 1;
						tmpData <= RAMout;
						reqRead <= 0;
					end
					if (s_req == 0) begin
						s_req_check <= 1;
					end
					if (s_req && s_req_check) begin
						s_req_check <= 0;
						audio_out <= tmpData;
						read_state <= 0;
					end
				end
			end
			if (write) begin
				if (s_end == 0) begin
					s_end_check <= 1;
				end
				if (s_end && s_end_check) begin
					address = address + 1;
					enableWrite <= 1;
					RAMin <= audio_in;
					s_end_check <= 0;
				end
				else begin
					enableWrite <= 0;
				end
			end
		end
	end
endmodule
