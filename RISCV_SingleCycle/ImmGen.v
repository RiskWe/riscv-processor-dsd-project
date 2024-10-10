`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:53 10/09/2024 
// Design Name: 
// Module Name:    ImmGen 
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
module ImmGen(Opcode, instruction, ImmExt);

input 	  [6:0] Opcode;
input      [31:0] instruction;
output reg [31:0] ImmExt;

always@(*)
begin
	case(Opcode) 
	7'b0000011: ImmExt <= {{20{instruction[31]}}, instruction[31:20]};
	7'b0100011: ImmExt <= {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
	7'b1100011: ImmExt <= {{19{instruction[31]}}, instruction[31], instruction[30:25], instruction[11:8],1'b0};
	endcase
end

endmodule
