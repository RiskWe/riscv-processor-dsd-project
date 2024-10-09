module RegisterFile (
    input wire clk,                      // Clock signal
    input wire we,                       // Write enable signal
    input wire [4:0] read_reg1,          // Address of the first register to read
    input wire [4:0] read_reg2,          // Address of the second register to read
    input wire [4:0] write_reg,          // Address of the register to write to
    input wire [31:0] write_data,        // Data to write into the register
    output wire [31:0] read_data1,       // Data read from the first register
    output wire [31:0] read_data2        // Data read from the second register
);

    // 32 registers, each 32 bits wide
    reg [31:0] registers [31:0];

    // Read operations (combinational)
    assign read_data1 = (read_reg1 == 0) ? 32'b0 : registers[read_reg1];
    assign read_data2 = (read_reg2 == 0) ? 32'b0 : registers[read_reg2];

    // Write operation (sequential, occurs on the rising edge of the clock)
    always @(posedge clk) begin
        if (we && write_reg != 0) begin
            registers[write_reg] <= write_data;
        end
    end
endmodule
