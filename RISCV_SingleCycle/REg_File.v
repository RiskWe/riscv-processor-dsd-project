`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:21 10/09/2024 
// Design Name: 
// Module Name:    REg_File 
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
module REg_File(clk, reset, RegWrite, Rs1, Rs2, Rd, Write_data, read_data1, read_data2);

input clk, reset, RegWrite;
input [4:0] Rs1, Rs2, Rd;
input [31:0] Write_data;
output [31:0] read_data1, read_data2;
integer k;
reg [31:0] Registers[31:0];

always @(posedge clk or posedge reset)
begin
if(reset)
	begin
		for(k=0; k<32; k=k+1)
		begin
		Registers[k] <= 32'b00;
		end
	end
else if(RegWrite) 
	begin
	Registers[Rd] <= Write_data;
	end
end

assign read_data1 = Registers[Rs1];
assign read_data2 = Registers[Rs2];



endmodule
