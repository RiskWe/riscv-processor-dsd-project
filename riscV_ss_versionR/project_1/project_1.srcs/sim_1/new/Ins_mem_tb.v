`timescale 1ns / 1ps

module Instruction_Mem_tb;

// Inputs
reg clk;
reg reset;
reg [31:0] read_address;

// Output
wire [31:0] instruction_out;

// Instantiate the Instruction Memory module
Instruction_Mem uut (
    .clk(clk), 
    .reset(reset), 
    .read_address(read_address), 
    .instruction_out(instruction_out)
);

// Clock generation: 10ns clock period
always #10 clk = ~clk;

initial begin
    // Initialize Inputs
    clk = 0;
    reset = 1;
    read_address = 32'd0; // Start with address 0

    #20;  // Wait for some clock cycles
    reset = 0;

    // Apply different read addresses to fetch instructions
    #20; // Wait for clock edge
    read_address = 32'd4; // Read next instruction

    #20; // Wait for clock edge
    read_address = 32'd8; // Read another instruction

    #20; // Wait for clock edge
    read_address = 32'd12; // Read further instruction

    // Add more read addresses as needed

    #20;
    $stop;  // Stop the simulation
end

// Monitor output values on each clock edge
initial begin
    $monitor("At time %0t: read_address = %d, instruction_out = %h", $time, read_address, instruction_out);
end

endmodule
