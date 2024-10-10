`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:04 10/10/2024 
// Design Name: 
// Module Name:    test_bench 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// 
// A testbench for verifying the functionality of the register file.
// 
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_bench;

    reg clk, reset, RegWrite;            // Clock, reset, and write control signals
    reg [4:0] Rd;                        // Register destination address
    reg [31:0] Write_data;               // Data to write to the register
    wire [31:0] read_data1, read_data2; // Read data outputs

    // Instantiate the main module (register file)
    main uut (
        .clk(clk),
        .reset(reset),
        .RegWrite(RegWrite_top),
        .Rd(Rd),
        .Write_data(WriteBack_top),
        .read_data1(Rd1_top),
        .read_data2(Rd2_top)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // Toggle clock every 5 time units
    end

    // Test procedure
    initial begin
        // Initialize signals
        reset = 1;
        RegWrite = 0;
        Rd = 0;
        Write_data = 0;

        // Wait for some time and release reset
        #5;
        reset = 0;
        
        // Test writing to register 16
        RegWrite = 1;         // Enable write
        Rd = 5'b10000;       // Address of register 16
        Write_data = 32'hA5A5A5A5; // Example data to write
        #10; // Wait for a clock cycle

        RegWrite = 0; // Disable writing
        #10; // Wait for another clock cycle

        // Check if register 16 holds the value
        // Use $monitor to continuously display the value
        $monitor("At time %t, Register 16: %h", $time, uut.Registers[16]);

        // End simulation after some time
        #100;
        $finish; // End simulation
    end

endmodule
