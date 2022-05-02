///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2016 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 13.4
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : cs_ila1.v
// /___/   /\     Timestamp  : Tue May 03 13:17:04 US Eastern Daylight Time 2016
// \   \  /  \
//  \___\/\___\
//
// Design Name: Verilog Synthesis Wrapper
///////////////////////////////////////////////////////////////////////////////
// This wrapper is used to integrate with Project Navigator and PlanAhead

`timescale 1ns/1ps

module cs_ila1(
    CONTROL,
    CLK,
    TRIG0,
    TRIG1);


inout [35 : 0] CONTROL;
input CLK;
input [0 : 0] TRIG0;
input [7 : 0] TRIG1;

endmodule
