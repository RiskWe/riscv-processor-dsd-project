`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:10 10/10/2024 
// Design Name: 
// Module Name:    Mux2 
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
module Mux2(sel1, A2, B2, Mux2_out);

input sel2;
input [31:0] A2, B2;
output [31:0] Mux2_out;

assign Mux2_out = (sel2==1'b0) ? A2:B2;
endmodule
