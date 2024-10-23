`timescale 1ns / 1ps

module PC_tb;

// Inputs
reg clk;
reg reset;
reg [31:0] PC_in;

// Outputs
wire [31:0] PC_out;

// Instantiate the Unit Under Test (UUT)
main uut(
    .clk(clk), 
    .reset(reset), 
    .PCin_top(PC_in), 
    .instruction_top(PC_out)
);

// Clock generation
always #5 clk = ~clk; // 10ns clock period

initial begin
    // Initialize Inputs
    clk = 0;
    reset = 1; // Assert reset initially
    PC_in = 32'd0; // Start PC with 0

    // Wait for global reset to finish
    #10;
    reset = 0; // Deassert reset

    // Apply PC input and check for correct output
    #10;
    PC_in = 32'd4;
    #10;
    PC_in = 32'd8;
    #10;
    PC_in = 32'd12;

    // Assert reset and check if PC resets to zero
    #10;
    reset = 1; // Assert reset
    #10;
    reset = 0; // Deassert reset

    // Apply more inputs after reset
    #10;
    PC_in = 32'd20;
    #10;
    PC_in = 32'd24;
    
    $stop; // Stop the simulation
end

// Monitor output
initial begin
    $monitor("Time: %d, Reset: %b, PC_in: %d, PC_out: %d", $time, reset, PC_in, PC_out);
end

endmodule
