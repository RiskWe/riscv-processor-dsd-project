`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:41 10/10/2024 
// Design Name: 
// Module Name:    Adder 
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
module Adder(in_1, in_2, Sum_out);

input [31:0] in_1, in_2;
output [31:0] Sum_out;

wire [31:0] sum_temp;           // Temporary wire to store the addition result
assign sum_temp = in_1 + in_2;  // Perform the addition
assign Sum_out = {1'b0, sum_temp[30:0]}; // Concatenate 0 as the MSB and use [30:0]

endmodule
