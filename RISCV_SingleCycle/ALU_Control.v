`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:23:17 10/10/2024 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(ALUOp, fun7, fun3, Control_out);

input fun7;
input [2:0] fun3;
input [1:0] ALUOp;
output reg [3:0] Control_out;

always @(*)
begin
	case({ALUOp, fun7, fun3})
		6'b00_0_000: 	Control_out <= 4'b001;
		6'b00_0_000: 	Control_out <= 4'b001;
		6'b00_0_000: 	Control_out <= 4'b001;
		6'b00_0_000: 	Control_out <= 4'b001;
		6'b00_0_000: 	Control_out <= 4'b001;
		


endmodule
