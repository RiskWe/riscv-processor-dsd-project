`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:21 10/09/2024 
// Design Name: 
// Module Name:    Reg_File 
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
module Reg_File (
    input clk, 
    input reset, 
    input RegWrite, 
    input [4:0] Rs1, 
    input [4:0] Rs2, 
    input [4:0] Rd, 
    input [31:0] Write_data, 
    output reg [31:0] read_data1,  
    output reg [31:0] read_data2   
);

    // Register array to store values
    reg [31:0] Registers [31:0];
    integer k; // Declare integer k at module level

    // Synchronous reset to zero
    always @(posedge clk) begin
        if (reset) begin
            // Reset all registers to zero
            for (k = 0; k < 32; k = k + 1) begin
                Registers[k] <= 32'h00000000;
            end
        end
    end

    // Write operation on the negative edge of the clock if RegWrite is high
    always @(negedge clk) begin
        if (RegWrite && Rd != 5'd0) begin
            // Write data to the specified register (ignoring x0 as per convention)
            Registers[Rd] <= Write_data;
        end    
    end

    // Continuous reading for Rs1 and Rs2
    always @(*) begin
        read_data1 = Registers[Rs1];
        read_data2 = Registers[Rs2];
    end

endmodule
