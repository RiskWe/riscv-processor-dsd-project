`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:  
// Create Date:    14:36:30 10/09/2024 
// Design Name: 
// Module Name:    PC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// Dependencies: 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PC(clk, reset, PC_in, PC_out);

input clk, reset;
input 	 [31:0] PC_in;
output reg [31:0] PC_out;

always @(posedge clk) begin
    case (reset)
        1'b1: PC_out = 32'd0; // When reset is active (assuming active-high reset)
        1'b0: PC_out = PC_in;  // When reset is not active
    endcase
end

endmodule