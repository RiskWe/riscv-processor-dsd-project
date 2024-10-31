`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:40 10/09/2024 
// Design Name: 
// Module Name:    Control_Unit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:    This module implements the Control Unit for a processor. It 
//                 decodes the opcode field (instruction[6:0]) and generates
//                 control signals to control the datapath components (e.g., 
//                 ALU, Memory, Register File).
//
// Dependencies:   None
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

// Control Unit module definition
module Control_Unit(
    input [6:0] instruction,  // Input: 7-bit instruction opcode
    output reg Branch,        // Branch control signal
    output reg MemRead,       // Memory Read control signal
    output reg MemtoReg,      // Memory to Register control signal
    output reg MemWrite,      // Memory Write control signal
    output reg ALUSrc,        // ALU Source control signal (1 to select immediate, 0 for register)
    output reg RegWrite,       // Register Write control signal
    output reg [1:0] ALUOp    // 2-bit ALU operation control signal
);

    // Always block triggered on any change (combinational logic)
    always @(*) begin
        // Default values
        {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} = 8'b00000000;

        // Case statement to check opcode and generate corresponding control signals
        case (instruction)
            7'b0110011: // R-type instruction (e.g., ADD, SUB, etc.)
                {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} <= 8'b001000_10;

            7'b0000011: // I-type load instruction (e.g., LW - Load Word)
                {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} <= 8'b111100_00;

            7'b0100011: // S-type store instruction (e.g., SW - Store Word)
                {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} <= 8'b100010_00;

            7'b1100011: // B-type branch instruction (e.g., BEQ - Branch if Equal)
                {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} <= 8'b000001_01;

            7'b0010011: // I-type immediate arithmetic instruction (e.g., ADDI)
                {ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp} <= 8'b101000_10; // ALUSrc=1, MemtoReg=0, RegWrite=1, etc.

            // Add more cases as needed for other instruction types like J-type (jump), etc.
        endcase
    end
endmodule
