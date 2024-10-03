`timescale 1ns / 1ps

module ALU_tb;

    // Inputs
    reg [31:0] a, b;
    reg [2:0] ALUOp;

    // Outputs
    wire [31:0] result;
    wire zero;

    // Instantiate the Unit Under Test (UUT)
    ALU_v1 uut (
        .a(a), 
        .b(b), 
        .ALUOp(ALUOp), 
        .result(result), 
        .zero(zero)
    );

    // Testbench process
    initial begin
        // Initialize inputs
        $display("Starting ALU testbench...");
        
        // Test ADD operation (ALUOp = 000)
        a = 32'd10; b = 32'd5; ALUOp = 3'b000;
        #10;
        $display("ADD: a = %d, b = %d, result = %d, zero = %b", a, b, result, zero);
        
        // Test SLL operation (ALUOp = 001)
        a = 32'h00000001; b = 32'd2; ALUOp = 3'b001;
        #10;
        $display("SLL: a = %h, b = %d, result = %h, zero = %b", a, b, result, zero);
        
        // Test SLT (signed comparison) operation (ALUOp = 010)
        a = 32'd5; b = 32'd10; ALUOp = 3'b010;
        #10;
        $display("SLT: a = %d, b = %d, result = %d, zero = %b", a, b, result, zero);
        
        // Test SLTU (unsigned comparison) operation (ALUOp = 011)
        a = 32'd5; b = 32'd10; ALUOp = 3'b011;
        #10;
        $display("SLTU: a = %d, b = %d, result = %d, zero = %b", a, b, result, zero);
        
        // Test XOR operation (ALUOp = 100)
        a = 32'h0F0F0F0F; b = 32'hF0F0F0F0; ALUOp = 3'b100;
        #10;
        $display("XOR: a = %h, b = %h, result = %h, zero = %b", a, b, result, zero);
        
        // Test SRL operation (ALUOp = 101)
        a = 32'h00000010; b = 32'd2; ALUOp = 3'b101;
        #10;
        $display("SRL: a = %h, b = %d, result = %h, zero = %b", a, b, result, zero);
        
        // Test OR operation (ALUOp = 110)
        a = 32'h0F0F0F0F; b = 32'hF0F0F0F0; ALUOp = 3'b110;
        #10;
        $display("OR: a = %h, b = %h, result = %h, zero = %b", a, b, result, zero);
        
        // Test AND operation (ALUOp = 111)
        a = 32'h0F0F0F0F; b = 32'hF0F0F0F0; ALUOp = 3'b111;
        #10;
        $display("AND: a = %h, b = %h, result = %h, zero = %b", a, b, result, zero);

        // Test zero flag with zero result
        a = 32'h00000000; b = 32'h00000000; ALUOp = 3'b000;
        #10;
        $display("Zero test (ADD): a = %h, b = %h, result = %h, zero = %b", a, b, result, zero);
        
        $display("ALU testbench completed.");
        $stop;
    end
endmodule
