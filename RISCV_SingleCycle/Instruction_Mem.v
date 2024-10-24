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
            I_Mem[0] <= 32'd3;  // No operation (NOP)
            I_Mem[1] <= 32'd6;  // ADD x13, x16, x25 (dummy instruction)
            I_Mem[2] <= 32'd9;  // No operation (NOP)
            I_Mem[3] <= 32'd12; // ADD x13, x16, x25 (dummy instruction)
            I_Mem[4] <= 32'd15; // No operation (NOP)
            I_Mem[5] <= 32'd18; // ADD x13, x16, x25 (dummy instruction)
        end
    end

    // Level-sensitive read logic
    always @(*) begin
        // Fetch instruction using word-aligned address (dividing by 4)
        instruction_out = I_Mem[read_address >> 2];  // Right shift by 2 to divide by 4
        $display("Read Address: %h, Instruction: %h", read_address, instruction_out);
    end

endmodule
