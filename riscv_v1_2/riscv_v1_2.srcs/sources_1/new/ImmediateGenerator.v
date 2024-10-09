module ImmediateGenerator(
    input [31:0] instruction,   // The 32-bit instruction
    output reg [31:0] immediate // The 32-bit sign-extended immediate value
);

    wire [6:0] opcode = instruction[6:0]; // Extract the opcode

    always @(*) begin
        case (opcode)
            7'b0010011, // I-type instructions (e.g., addi, slti, andi)
            7'b0000011, // Load instructions (e.g., lw, lh, lb)
            7'b1100111: // JALR instruction
                immediate = {{20{instruction[31]}}, instruction[31:20]}; // Sign-extend 12-bit immediate

            7'b0100011: // S-type instructions (e.g., sw, sh, sb)
                immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // Sign-extend 12-bit immediate

            7'b1100011: // B-type instructions (e.g., beq, bne)
                immediate = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0}; // Sign-extend 13-bit immediate

            7'b0110111, // U-type instructions (e.g., LUI)
            7'b0010111: // AUIPC instruction
                immediate = {instruction[31:12], 12'b0}; // 20-bit immediate shifted left by 12

            7'b1101111: // J-type instructions (e.g., JAL)
                immediate = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0}; // Sign-extend 21-bit immediate

            default: // Default case for unsupported opcodes
                immediate = 32'b0;
        endcase
    end
endmodule
