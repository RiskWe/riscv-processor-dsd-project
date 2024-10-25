module Instruction_Mem(clk, reset, read_address, instruction_out);

    input clk, reset;
    input [31:0] read_address;
    output reg [31:0] instruction_out;
    integer k;
    reg [31:0] I_Mem[63:0];  // Memory with 64 words (32-bit each)

    // Memory initialization or reset logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // Initialize instruction memory with zeros
            for (k = 0; k < 64; k = k + 1) begin
                I_Mem[k] <= 32'b0;
            end
            
            // Assign initial values for testing
            I_Mem[0] <= 32'h006283B3;  // NOP: addi x0, x0, 0
            I_Mem[1] <= 32'h006283B3;  // addi x3, x0, 3
            I_Mem[2] <= 32'h006283B3;  // addi x4, x0, 10
            I_Mem[3] <= 32'h006283B3;  // addi x6, x0, 20
            I_Mem[4] <= 32'h006283B3;  // add x5, x3, x4
            I_Mem[5] <= 32'h006283B3;  // add x6, x5, x6
        end
    end

    // Level-sensitive read logic
    always @(*) begin
        // Fetch instruction using word-aligned address (dividing by 4)
        instruction_out = I_Mem[read_address >> 2];  // Right shift by 2 to divide by 4
        $display("Read Address: %h, Instruction: %h", read_address, instruction_out);
    end

endmodule
