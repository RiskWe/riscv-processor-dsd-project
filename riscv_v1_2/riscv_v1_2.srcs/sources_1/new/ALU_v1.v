//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/03/2024 05:17:41 PM
// Design Name: 
// Module Name: ALU_v1
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 32-bit ALU with support for ADD, SLL, SLT, SLTU, XOR, SRL, OR, AND
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module ALU_v1(
    input [31:0] a, b,           // Operands a and b
    input [2:0] ALUOp,           // ALU operation control signal
    output reg [31:0] result,    // Result of the ALU operation
    output reg zero              // Zero flag, set if result is 0
    );
    
    // Perform the ALU operations based on ALUOp
    always @* begin
        case (ALUOp)
            3'b000: // ADD (ALUOp = 000)
                result = a + b;
            3'b001: // SLL (Shift Left Logical) (ALUOp = 001)
                result = a << b[4:0];
            3'b010: // SLT (Set Less Than, signed) (ALUOp = 010)
                result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;
            3'b011: // SLTU (Set Less Than, unsigned) (ALUOp = 011)
                result = (a < b) ? 32'b1 : 32'b0;
            3'b100: // XOR (ALUOp = 100)
                result = a ^ b;
            3'b101: // SRL (Shift Right Logical) (ALUOp = 101)
                result = a >> b[4:0];
            3'b110: // OR (ALUOp = 110)
                result = a | b;
            3'b111: // AND (ALUOp = 111)
                result = a & b;
            default: // Default case
                result = 32'b0;
        endcase
        
        // Set the zero flag if the result is zero
        zero = (result == 32'b0);
    end
endmodule
