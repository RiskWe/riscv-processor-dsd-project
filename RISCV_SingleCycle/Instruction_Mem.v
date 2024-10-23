`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:42:47 10/09/2024 
// Design Name: 
// Module Name:    Instruction_Mem 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Instruction_Mem(clk, reset, read_address, instruction_out);

input clk, reset;
input [31:0] read_address;
output reg [31:0] instruction_out; 
integer k;
reg [31:0] I_Mem[63:0];


always@(posedge clk or posedge reset)
begin
if(reset)
	begin
		for(k=0; k<64; k=k+1)
		begin
		I_Mem[k] <= 32'b00;
		end
		
	// Assign initial values
        I_Mem[0] <= 32'b0000000_00000_00000_000_00000_0000000; // No operation (NOP)
        I_Mem[4] <= 32'b0000000_11001_10000_000_01101_0110011; // ADD x13, x16, x25
		  I_Mem[8] <= 32'b0000000_00000_00000_000_00000_0000000; // No operation (NOP)
        I_Mem[12] <= 32'b0000000_11001_10000_000_01101_0110011; // ADD x13, x16, x25
		  I_Mem[16] <= 32'b0000000_00000_00000_000_00000_0000000; // No operation (NOP)
        I_Mem[20] <= 32'b0000000_11001_10000_000_01101_0110011; // ADD x13, x16, x25
		  
	end
else
	begin
   // Fetch instruction from memory based on word-aligned address
   instruction_out <= I_Mem[read_address];  // Shift right by 2 for word alignment
	//instruction_out <= I_Mem[read_address]; for automated situations
	end	
end


// Optional: A block to preload instructions (could be synthesized)



endmodule
