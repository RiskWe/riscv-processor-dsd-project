`timescale 1ns / 1ps

module main_tb;
    // Inputs
    reg clk;
    reg reset;
    reg [31:0] PCin_top;

    // Outputs
    wire [31:0] instruction_top;
    wire [31:0] Rd1_top;
    wire [31:0] Rd2_top;

    // Instantiate the main module
    main uut (
        .clk(clk),
        .reset(reset),
        .PCin_top(PCin_top),
        .instruction_top(instruction_top),
        .Rd1_top(Rd1_top),
        .Rd2_top(Rd2_top)
    );

    // Clock generation: toggles every 5 ns
    always #5 clk = ~clk;

    initial begin
        // Initialize signals
        clk = 0;
        reset = 1;  // Assert reset initially
        PCin_top = 32'd0;  // Start with Program Counter = 0

        // Deassert reset after 12 timestamps (reset from 3 to 12 ns)
        #3 reset = 1;  // Assert reset at timestamp 3
        #9 reset = 0;  // Deassert reset at timestamp 12

        // Apply clock pulses and increment PC each clock cycle
        // Start clock pulses at timestamp 12 with reset deasserted
        repeat (8) begin
            #10;  // Wait for the clock edge
            PCin_top = PCin_top + 32'd4;  // Increment the PC by 4
        end

        // Print the values of Rd1 and Rd2
        $display("After 8 clock pulses:");
        $display("Instruction = %h", instruction_top);
        $display("Read Register 1: %d", Rd1_top);
        $display("Read Register 2: %d", Rd2_top);

        // End simulation
        #10;
        $finish;
    end
endmodule
