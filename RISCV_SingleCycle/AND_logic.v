`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:33 10/10/2024 
// Design Name: 
// Module Name:    AND_logic 
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
module AND_logic(branch, branch_type, zero, branch_enable, less, less_or_equal);

input branch, zero, less, less_or_equal;
input [2:0] branch_type;
output branch_enable;

assign branch_enable = 
    (branch && (branch_type == 3'b000) && zero) ||        // BEQ: Branch if equal
    //(branch && branch_type == 3'b001 && !zero) ||       // BNE: Branch if not equal
    (branch && (branch_type == 3'b100) && less) ||       // BLT: Branch if less than
    (branch && branch_type == 3'b101 && !less_or_equal)       // BGE: Branch if greater or equal
    //(branch && branch_type == 3'b100 && less_unsigned) || // BLTU: Unsigned less
    //(branch && branch_type == 3'b101 && !less_unsigned);  // BGEU: Unsigned greater or equal
;
endmodule
