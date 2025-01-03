`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Testbench for ALU_unit (without clock)
//////////////////////////////////////////////////////////////////////////////////

module ALU_unit_tb;

// Testbench Signals
reg [31:0] A;
reg [31:0] B;
reg [3:0] Control_in;
wire zero;
wire [31:0] ALU_Result;

// Instantiate the ALU_unit module
ALU_unit uut (
    .A(A),
    .B(B),
    .Control_in(Control_in),
    .zero(zero),
    .ALU_Result(ALU_Result)
);

// Test procedure
initial begin
    // Monitor changes to signals
    $monitor("Time=%0t | A=%h, B=%h, Control_in=%b | ALU_Result=%h, Zero=%b",
             $time, A, B, Control_in, ALU_Result, zero);

    // Test Case 1: AND operation
    A = 32'hFFFF0000;
    B = 32'h00FF00FF;
    Control_in = 4'b0000;  // AND operation
    #10;
    $display("AND Result: %h, Zero: %b", ALU_Result, zero);

    // Test Case 2: OR operation
    A = 32'hF0F0F0F0;
    B = 32'h0F0F0F0F;
    Control_in = 4'b0001;  // OR operation
    #10;
    $display("OR Result: %h, Zero: %b", ALU_Result, zero);

    // Test Case 3: ADD operation
    A = 32'h00000005;
    B = 32'h0000000A;
    Control_in = 4'b0010;  // ADD operation
    #10;
    $display("ADD Result: %h, Zero: %b", ALU_Result, zero);

    // Test Case 4: SUBTRACT operation with zero flag set (A == B)
    A = 32'h0000000A;
    B = 32'h0000000A;
    Control_in = 4'b0110;  // SUBTRACT operation
    #10;
    $display("SUB Result: %h, Zero: %b", ALU_Result, zero);

    // Test Case 5: SUBTRACT operation with zero flag cleared (A != B)
    A = 32'h0000000F;
    B = 32'h0000000A;
    Control_in = 4'b0110;  // SUBTRACT operation
    #10;
    $display("SUB Result: %h, Zero: %b", ALU_Result, zero);

    // Add more test cases if needed

    // End simulation
    $finish;
end

endmodule
