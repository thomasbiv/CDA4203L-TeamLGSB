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
						KEY, LED, ledRAM, 
						reset, clk, readwrite,
						hw_ram_rasn, hw_ram_casn, hw_ram_wen, SW, hw_ram_ba, hw_ram_udqs_p, hw_ram_udqs_n, 
						hw_ram_ldqs_p, hw_ram_ldqs_n, hw_ram_udm, hw_ram_ldm, hw_ram_ck, hw_ram_ckn, 
						hw_ram_cke, hw_ram_odt, hw_ram_ad, hw_ram_dq, hw_rzq_pin, hw_zio_pin, s_req, s_end);
	
	//Interfacing variables
	reg read;
	input clk;
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
	reg[1:0] ledreg;
	output[1:0] LED;
	assign LED = ledreg;
	wire [25:0] max_ram_address;
	output ledRAM; 
	wire rdy;
	input reset;
	output hw_ram_rasn;
	output hw_ram_casn;
	output hw_ram_wen;
	output hw_ram_ldqs_p;
	output hw_ram_cke;
	output [2:0] hw_ram_ba;
	output hw_ram_ldqs_n;
	output hw_ram_odt;
	inout hw_ram_udqs_p;
	output hw_ram_udm;
	output [12:0]hw_ram_ad;
	inout hw_ram_udqs_n;
	output hw_ram_ldm;
	inout [15:0]hw_ram_dq;
	output hw_ram_ck;
	inout hw_rzq_pin;
	output hw_ram_ckn;
	inout hw_zio_pin;
	input [1:0] readwrite; //readwrite[0] -> reading, readwrite[1] -> writing
	wire killme;
	
	
	
	
	clkwiz wiz(
		.CLK_IN1(wizclk),
		.CLK_OUT1(clk1),
		.CLK_OUT2(clk2)
	);
	
	
	sockit_top audio_interface (
		.OSC_100MHz(clk2),
		.AUD_ADCLRCK(AUD_ADCLRCK),
		.AUD_ADCDAT(AUD_ADCDAT),
		.AUD_DACDAT(AUD_DACDAT),
		.AUD_XCK(AUD_XCK),
		.AUD_BCLK(AUD_BCLK),
		.AUD_I2C_SCLK(AUD_I2C_SCLK),
		.AUD_I2C_SDAT(AUD_I2C_SDAT),
		.AUD_MUTE(AUD_MUTE),
		.PLL_LOCKED(PLL_LOCKED),
		.KEY(1),
		.SW(SW),
		.LED(killme),
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
		.write_enable(enableWrite),
		.rdy(rdy),
		.rd_data_pres(dataPresent),
		.read_request(reqRead),
		.read_ack(ackRead),
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
		ledreg[1:0] <= 0;
	end
	
	always @(posedge wizclk) begin
		if (rdy) begin
			if (readwrite[0] == 1 && readwrite[1] == 0) begin //readwrite[0] -> reading, readwrite[1] -> writing (READING STATE)
				ledreg[0] <= 1;
				if (read_state == 0) begin
					reqRead <= 1;
					address <= address + 1;
					read_state <= 1;
					ackRead <= 0;
				end
				else if (read_state == 1) begin
					if (dataPresent) begin
						ackRead <= 1;
						tmpData <= RAMout;
						reqRead <= 0;
					end
					if (s_req == 0) begin
						s_req_check <= 1;
					end
					if (s_req_check) begin
						s_req_check <= 0;
						audio_out <= tmpData;
						read_state <= 0;
					end
				end
			end
			else if (readwrite[0] == 0 && readwrite[1] == 1) begin //readwrite[0] -> reading, readwrite[1] -> writing (WRITING STATE)
				ledreg[1] <= 1;
				if (s_end == 0) begin
					s_end_check <= 1;
				end
				if (s_end_check) begin
					address <= address + 1;
					enableWrite <= 1;
					RAMin <= audio_in;
					s_end_check <= 0;
				end
				else begin
					enableWrite <= 0;
				end
			end
			else if (readwrite[0] == 0 && readwrite[1] == 0) begin
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
				ledreg[1:0] <= 0;
			end
		end
	end
endmodule
