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
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_bench;

reg clk, reset;

main uut(.clk(clk), .reset(reset));

initial begin
clk = 0;
reset = 1;
#5;
reset =0;
#400;
end 

always begin
#5 clk = ~clk;
end

endmodule
