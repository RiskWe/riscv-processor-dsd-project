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
            6'b10_0_100: Control_out <= 4'b0100; // XOR operation
            6'b10_0_010: Control_out <= 4'b0111; // SLT (Set Less Than)
            6'b10_0_011: Control_out <= 4'b1000; // SLTU (Set Less Than Unsigned)
            6'b10_0_001: Control_out <= 4'b1001; // SLL (Shift Left Logical)
            6'b10_0_101: Control_out <= 4'b1010; // SRL (Shift Right Logical)
            6'b10_1_101: Control_out <= 4'b1011; // SRA (Shift Right Arithmetic)

            // Default case: Perform AND (safe default)
            default: Control_out <= 4'b0000;
        endcase
    end

endmodule
