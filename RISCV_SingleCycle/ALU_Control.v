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
// Description:    This module implements the ALU Control logic for a RISC-V 
//                 processor. It generates a 4-bit control signal to dictate the
//                 specific ALU operation based on the ALUOp, funct7, and funct3 fields.
//
// Dependencies:   None
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module ALU_Control(
    input [1:0] ALUOp,         // 2-bit ALU operation code from the Control Unit
    input fun7,                // Most significant bit of funct7 (7th bit of instruction)
    input [2:0] fun3,          // 3-bit funct3 field from the instruction
    output reg [3:0] Control_out // 4-bit ALU control output
);

    always @(*)
    begin
        // Combine ALUOp, funct7, and funct3 to select the correct ALU operation
        case ({ALUOp, fun7, fun3})
            // For Load/Store operations (ALUOp = 00): Perform ADD (addition)
            6'b00_0_000: Control_out <= 4'b0010; // ADD for load/store

            // For Branch instructions (ALUOp = 01): Perform SUB (subtraction)
            6'b01_0_000: Control_out <= 4'b0110; // SUB for branch comparison

            // For R-type instructions (ALUOp = 10) based on funct3 and funct7:
            6'b10_0_000: Control_out <= 4'b0010; // ADD (funct7 = 0)
            6'b10_1_000: Control_out <= 4'b0110; // SUB (funct7 = 1)
            6'b10_0_111: Control_out <= 4'b0000; // AND operation
            6'b10_0_110: Control_out <= 4'b0001; // OR operation
            
            // Add additional cases here for other R-type instructions if needed

            default: Control_out <= 4'b0000; // Default case: Perform AND (safe default)
        endcase
    end

endmodule
