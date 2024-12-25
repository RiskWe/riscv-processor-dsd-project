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
            // Assign initial values for testing
            I_Mem[0] <= 32'h00000013;  // NOP: addi x0, x0, 0
            I_Mem[1] <= 32'h00500293;  // addi x5, x0, 5   (temp_register = 0)
            I_Mem[2] <= 32'h00600313;  // addi x6, x0, 6   (counter_register = 0
            I_Mem[3] <= 32'h006282B3;  // add x5, x5, x6   (temp_register = temp_register + counter_register)
            I_Mem[4] <= 32'h00130313;  // addi x6, x6, 1   (counter_register = counter_register + 1)
            I_Mem[5] <= 32'h00A00393;  // addi t2, x0, 10  (load 10 into t2)
            I_Mem[6] <= 32'hFE639AE3;  // ble x6, t2, loop (branch to loop if counter_register <= 10)
            I_Mem[7] <= 32'h00A00793;  // addi a7, x0, 10  (load 10 into a7 for ecall)
            I_Mem[8] <= 32'h00000073;  // ecall            (end program)
        end
    end

    // Level-sensitive read logic
    always @(*) begin
        // Fetch instruction using word-aligned address (dividing by 4)
        instruction_out = I_Mem[read_address >> 2];  // Right shift by 2 to divide by 4
        $display("Read Address: %h, Instruction: %h", read_address, instruction_out);
    end

endmodule
