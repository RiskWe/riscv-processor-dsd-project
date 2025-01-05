`timescale 1ns / 1ps

module tb_top_fp_operations;

    // Inputs
    reg clk;
    reg [1:0] select;

    // Outputs
    wire [31:0] result;

 /*  // Instantiate the top module
    top_fp_operations uut (
        .clk(clk),
        .select(select),
        .result(result)
    );*/

    // Clock generation: 10ns period
    always #5 clk = ~clk;

    initial begin
        // Initialize inputs
        clk = 0;
        select = 2'b00; // Start with addition

        // Display header
        $display("Time\tSelect\tResult");

        // Monitor changes
        $monitor("%0d\t%b\t%h", $time, select, result);

        // Test case 1: Addition
        #100; // Wait for a clock cycle
        select = 2'b00; // Addition

        // Test case 2: Subtraction
        #100; // Wait for a clock cycle
        select = 2'b01; // Subtraction

        // Test case 3: Multiplication
        #100; // Wait for a clock cycle
        select = 2'b10; // Multiplication

        // Test case 4: Invalid select (default case)
        #100; // Wait for a clock cycle
        select = 2'b11; // Invalid operation

        // End simulation
        #200;
        $stop;
    end

endmodule
