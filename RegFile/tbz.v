`timescale 1ns / 1ps

module REg_File_tb;

// Inputs
reg clk;
reg reset;
reg RegWrite;
reg [4:0] Rs1;
reg [4:0] Rs2;
reg [4:0] Rd;
reg [31:0] Write_data;

// Outputs
wire [31:0] read_data1;
wire [31:0] read_data2;

// Instantiate the Unit Under Test (UUT)
main uut (
    .clk(clk), 
    .reset(reset), 
    .RegWrite(RegWrite), 
    .Rs1(Rs1), 
    .Rs2(Rs2), 
    .Rd(Rd), 
    .Write_data(Write_data), 
    .read_data1(read_data1), 
    .read_data2(read_data2)
);

// Clock generation
always #5 clk = ~clk; // 10ns clock period

initial begin
    // Initialize Inputs
    clk = 0;
    reset = 1;
    RegWrite = 0;
    Rs1 = 0;
    Rs2 = 0;
    Rd = 0;
    Write_data = 0;

    // Wait for 10 ns for global reset to finish
    #10;
    reset = 0;

    // Write 32'hABCD_EF01 to register 3
    Rd = 3;
    Write_data = 32'hABCD_EF01;
    RegWrite = 1;
    #10;
    RegWrite = 0;

    // Write 32'h1234_5678 to register 5
    Rd = 5;
    Write_data = 32'h1234_5678;
    RegWrite = 1;
    #10;
    RegWrite = 0;

    // Read from register 3 and 5
    Rs1 = 3;
    Rs2 = 5;
    #10;

    // Display read values
    $display("Register 3: %h", read_data1); // Expected: 32'hABCD_EF01
    $display("Register 5: %h", read_data2); // Expected: 32'h1234_5678

    // Write 32'hDEAD_BEEF to register 8
    Rd = 8;
    Write_data = 32'hDEAD_BEEF;
    RegWrite = 1;
    #10;
    RegWrite = 0;

    // Read from register 8 and 5
    Rs1 = 8;
    Rs2 = 5;
    #10;

    // Display read values
    $display("Register 8: %h", read_data1); // Expected: 32'hDEAD_BEEF
    $display("Register 5: %h", read_data2); // Expected: 32'h1234_5678

    // Apply reset
    reset = 1;
    #10;
    reset = 0;

    // Check registers after reset
    Rs1 = 3;
    Rs2 = 5;
    #10;

    // Display values after reset
    $display("Register 3 after reset: %h", read_data1); // Expected: 32'h0000_0000
    $display("Register 5 after reset: %h", read_data2); // Expected: 32'h0000_0000

    $stop; // End the simulation
end

endmodule
