`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:36:59 10/11/2024
// Design Name:   REg_File
// Module Name:   E:/Study Material/My_Github_VisualCode/riscv-processor-dsd-project/RegFile/tbs.v
// Project Name:  RegFile
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: REg_File
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tbs;

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
	REg_File uut (
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

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		RegWrite = 0;
		Rs1 = 0;
		Rs2 = 0;
		Rd = 0;
		Write_data = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

