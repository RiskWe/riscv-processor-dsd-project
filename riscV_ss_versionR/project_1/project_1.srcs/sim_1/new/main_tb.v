`timescale 1ns / 1ps

module main_tb;
    // Inputs
    reg clk;
    reg reset;
    
    // Outputs
    wire [31:0] PCin_top;         // Program Counter output
    wire [31:0] instruction_top;   // Instruction output
    wire [31:0] Rd1_top;           // Register 1 data output
    wire [31:0] Rd2_top;           // Register 2 data output
    wire [31:0] address_top;       // ALU result output
    wire [3:0] Control_top;
    wire [2:0] func3;
    wire sel2_top,less, less_or_equal;        // Control signal output

    // Instantiate the main module
    main uut (
        .clk(clk),
        .reset(reset),
        .PCin_top(PCin_top),
        .instruction_top(instruction_top),
        .Rd1_top(Rd1_top),
        .Rd2_top(Rd2_top),
        .address_top(address_top),
        .sel2_top(sel2_top),
        .Control_top(Control_top),
        .branch_top(branch_top),
        .less(less),
        .less_or_equal(less_or_equal),
        .func3(func3)
    );

    // Clock generation: toggles every 5 ns
    always #5 clk = ~clk;

    initial begin
        // Initialize signals
        clk = 0;
        reset = 1;       // Assert reset initially

        // Deassert reset after a few cycles
        #3 reset = 1;     // Assert reset at timestamp 3 ns
        #9 reset = 0;     // Deassert reset at timestamp 12 ns

        // Simulation time limit (e.g., 100 clock cycles)
        #10000 $finish;
    end

    // Monitor outputs continuously
endmodule
