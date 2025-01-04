
module writeback_cycle(clk, rst, ResultSrcW, PCPlus4W, ALU_ResultW, ReadDataW, ResultW, ledwriteback);

// Declaration of IOs
input clk, rst, ResultSrcW;
input [31:0] PCPlus4W, ALU_ResultW, ReadDataW;

output ledwriteback;
assign ledwriteback = 1;
output [31:0] ResultW;

// Declaration of Module
Mux result_mux (    
                .a(ALU_ResultW),
                .b(ReadDataW),
                .s(ResultSrcW),
                .c(ResultW)
                );
endmodule