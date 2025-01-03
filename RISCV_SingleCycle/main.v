module main(clk, reset, func3, branch_top,sel2_top, Control_top, instruction_top, Rd1_top, Rd2_top, address_top, PCin_top,less, less_or_equal);

    input clk, reset;
    output [31:0] instruction_top, Rd1_top, Rd2_top, address_top, PCin_top;
    output  branch_top, sel2_top, less, less_or_equal;
    output [3:0] Control_top;
    output [2:0] func3;

    wire [1:0] ALUOp_top;
    wire [31:0] PC_top, ImmExt_top, Sum_out_top, NextoPC_top, mux1_top, Memdata_top, WriteBack_top;
    wire RegWrite_top, ALUSrc_top, MemtoReg_top,zero_top, MemWrite_top, MemRead_top;

    // Program Counter
    PC PC(.clk(clk), .reset(reset), .PC_in(PCin_top), .PC_out(PC_top));

    //PC Adder
    PCplus4 PCplus4(.fromPC(PC_top), .NextoPC(NextoPC_top));
    
    // Instruction Memory
    Instruction_Mem Instruction_Mem(.clk(clk), .reset(reset), .read_address(PC_top), .instruction_out(instruction_top));

    // Register File
    Reg_File Reg_File(.clk(clk), .reset(reset), .RegWrite(RegWrite_top), .Rs1(instruction_top[19:15]), .Rs2(instruction_top[24:20]), .Rd(instruction_top[11:7]), .Write_data(WriteBack_top), .read_data1(Rd1_top), .read_data2(Rd2_top));

    // Immediate Generator
    ImmGen ImmGen(.Opcode(instruction_top[6:0]), .instruction(instruction_top), .ImmExt(ImmExt_top));

    // Control Unit
    Control_Unit Control_Unit(.instruction(instruction_top[6:0]), .Branch(branch_top), .MemRead(MemRead_top), .MemtoReg(MemtoReg_top), .ALUOp(ALUOp_top), .MemWrite(MemWrite_top), .ALUSrc(ALUSrc_top), .RegWrite(RegWrite_top));

    // ALU Control
    ALU_Control ALU_Control(.ALUOp(ALUOp_top), .fun7(instruction_top[30]), .fun3(instruction_top[14:12]), .Control_out(Control_top));

    // ALU unit
    ALU_unit ALU_unit(.A(Rd1_top), .B(mux1_top), .Control_in(Control_top), .ALU_Result(address_top), .zero(zero_top), .less(less), .less_or_equal(less_or_equal));

    // ALU Mux
    Mux1 ALU_mux(.sel1(ALUSrc_top), .A1(Rd2_top), .B1(ImmExt_top), .Mux1_out(mux1_top));

    // Adder for branching
    Adder Adder_Branch(.in_1(PC_top), .in_2(ImmExt_top), .Sum_out(Sum_out_top));

    // And Logic for branching
    AND_logic AND_logic(.branch(branch_top), .branch_type(instruction_top[14:12]), .less(less), .less_or_equal(less_or_equal), .zero(zero_top), .branch_enable(sel2_top));

    // Adder mux branching
    Mux2 Adder_mux(.sel2(sel2_top), .A2(NextoPC_top), .B2(Sum_out_top), .Mux2_out(PCin_top));

    // Data Memory (commented out if not needed)
    //Data_memory Data_memory(.clk(clk), .reset(reset), .MemWrite(MemWrite_top), .MemRead(MemRead_top), .read_address(address_top), .Write_data(Rd2_top), .MemData_out(Memdata_top));
    
    // Mux for Memory
    Mux3 Memory_mux(.sel3(MemtoReg_top), .A3(address_top), .B3(Memdata_top), .Mux3_out(WriteBack_top));

    assign func3 = instruction_top[14:12];
endmodule
