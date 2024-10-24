`timescale 1ns / 1ps

module main_tb;

    // Inputs
    reg clk;
    reg reset;
    reg [31:0] PCin_top;

    // Outputs
    wire [31:0] instruction_top;  // Instruction output from the main module

    // Instantiate the Unit Under Test (UUT)
    main uut (
        .clk(clk),
        .reset(reset),
        .PCin_top(PCin_top),
        .instruction_top(instruction_top)  // Connect the instruction output from the main module
    );

    // Clock generation
    initial begin
        clk = 1;
        forever #5 clk = ~clk;  // Generate a clock signal with a period of 10 ns (100 MHz)
    end

    // Test scenario
    initial begin
        // Initialize Inputs
        reset = 1;
        PCin_top = 0;
        
        // Wait for some time and release the reset
        #10;
        reset = 0;

        // Test different PC values to verify instruction fetching
        #10; PCin_top = 4;  // Fetch instruction at address 4
        #10; PCin_top = 8;  // Fetch instruction at address 8
        #10; PCin_top = 12; // Fetch instruction at address 12
        #10; PCin_top = 16; // Fetch instruction at address 16

        // Continue the test with some random addresses if needed
        #10; PCin_top = 20;
        #10; PCin_top = 0;
        
        // Finish simulation
        #20 $finish;
    end

    // Monitor output for debugging purposes
    initial begin
        $monitor("Time: %0t | Reset: %b | PC_in: %d | Instruction: %h",
                 $time, reset, PCin_top, instruction_top);
    end

endmodule
