`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:11 10/10/2024 
// Design Name: 
// Module Name:    main 
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
	module main(clk, reset, PCin_top, instruction_top);

input clk,reset;

input PCin_top;
output instruction_top;


//wire [31:0] PC_top, instruction_top, Rd1_top, Rd2_top, ImmExt_top, mux1_top, Sum_out_top, NextoPC_top, PCin_top, address_top, Memdata_top, WriteBack_top;
wire RegWrite_top, ALUSrc_top, zero_top, branch_top, sel2_top, MemtoReg_top, MemWrite_top, MemRead_top;
wire [1:0] ALUOp_top;
wire [3:0] Control_top;

//Program Counter
PC PC(.clk(clk), .reset(reset), .PC_in(PCin_top), .PC_out(PC_top));

//PC Adder
//PCplus4 PCplus4(.fromPC(PC_top), .NextoPC(NextoPC_top));

//Instruction Memory
Instruction_Mem Instruction_Mem(.clk(clk), .reset(reset), .read_address(PC_top), .instruction_out(instruction_top));

//Register File
//REg_File REg_File(.clk(clk), .reset(reset), .RegWrite(RegWrite_top), .Rs1(instruction_top[19:15]), .Rs2(instruction_top[24:20]), .Rd(instruction_top[11:7]), .Write_data(WriteBack_top), .read_data1(Rd1_top), .read_data2(Rd2_top));

//Immediate Generator
//ImmGen ImmGen(.Opcode(instruction_top[6:0]), .instruction(instruction_top), .ImmExt(ImmExt_top));

//Control Unit
//Control_Unit Control_Unit(.instruction(instruction_top[6:0]), .Branch(branch_top), .MemRead(MemRead_top), .MemtoReg(MemtoReg_top), .ALUOp(ALUOp_top), .MemWrite(MemWrite_top), .ALUSrc(ALUSrc_top), .RegWrite(RegWrite_top));

//ALU Control
//ALU_Control ALU_Control(.ALUOp(ALUOp_top), .fun7(instruction_top[30]), .fun3(instruction_top[14:12]), .Control_out(Control_top));

//ALU unit
//ALU_unit ALU_unit(.A(Rd1_top), .B(mux1_top), .Control_in(Control_top), .ALU_Result(address_top), .zero(zero_top));

//ALU Mux
//Mux1 ALU_mux(.sel1(ALUSrc_top), .A1(Rd2_top), .B1(ImmExt_top), .Mux1_out(mux1_top));

//Adder
//Adder Adder(.in_1(PC_top), .in_2(ImmExt_top), .Sum_out(Sum_out_top));

//And Logic
//AND_logic AND_logic(.branch(branch_top), .zero(zero_top), .and_out(sel2_top));

//Adder mux
//Mux2 Adder_mux(.sel2(sel2_top), .A2(NextoPC_top), .B2(Sum_out_top), .Mux2_out(PCin_top));

//Data Memory
//Data_memory Data_memory(.clk(clk), .reset(reset), .MemWrite(MemWrite_top), .MemRead(MemRead_top), .read_address(address_top), .Write_data(Rd2_top), .MemData_out(Memdata_top));

//Mux
//Mux3 Memory_mux(.sel3(MemtoReg_top), .A3(address_top), .B3(Memdata_top), .Mux3_out(WriteBack_top));

endmodule
