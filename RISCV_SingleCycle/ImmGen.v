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
// Description:    This module generates the immediate value for various instruction
//                 types based on the instruction's opcode.
//
// Dependencies:   None
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module ImmGen(
    input [6:0] Opcode,          // Opcode field of the instruction
    input [31:0] instruction,    // Entire 32-bit instruction
    output reg [31:0] ImmExt     // Sign-extended immediate output
);

    always @(*) begin
        case (Opcode)
            7'b0000011: // Load (I-type for load)
                ImmExt <= {{20{instruction[31]}}, instruction[31:20]}; // 12-bit signed immediate

            7'b0100011: // Store (S-type)
                ImmExt <= {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // 12-bit signed immediate
            
            7'b1100011: // Branch (B-type)
                ImmExt <= {{19{instruction[31]}}, instruction[31], instruction[30:25], instruction[11:8], 1'b0}; // 13-bit signed immediate

            7'b0010011: // Arithmetic Immediate (I-type, e.g., addi)
                ImmExt <= {{20{instruction[31]}}, instruction[31:20]}; // 12-bit signed immediate for addi, subi, etc.

            // Additional cases for other opcodes can be added here

            default: 
                ImmExt <= 32'b0; // Default case
        endcase
    end

endmodule
