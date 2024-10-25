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

    // Register initialization on reset
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset the registers; initialize each register with its index value
            for (k = 0; k < 32; k = k + 1) begin
                Registers[k] <= k; // Initialize each register with its index value
            end
        end
        else if (RegWrite) begin
            // Write data to the specified register
            Registers[Rd] <= Write_data;
        end
    end

    // Combinational logic to read data from registers
    always @(*) begin
        read_data1 = Registers[Rs1];
        read_data2 = Registers[Rs2];
    end

endmodule
