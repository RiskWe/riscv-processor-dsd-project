module top_fp_operations (clk, select, result, leds);

	 input clk;              
    input [1:0] select;      // Operation: 2'b00 for add, 2'b01 for subtract, 2'b10 for multiply
    output [31:0] result;     
	 output wire [7:0] leds;   // 5 LEDs to display the counter
	 
    // Hard-coded inputs (32-bit floating point values in IEEE 754 format)
    wire [31:0] a = 32'h40600000; //  A (float 3.5)
    wire [31:0] b = 32'h40d00000; //  B (float 6.5)

    // Intermediate signals for each operation
    wire [31:0] add_result;
    wire [31:0] sub_result;
    wire [31:0] mul_result;

    // Instantiate the adder
    adder_float u_add (
        .clk(clk),
        .a(a),
        .b(b),
        .result(add_result)
    );

    // Instantiate the subtractor
    substractor_float u_sub (
        .clk(clk),
        .a(a),
        .b(b),
        .result(sub_result)
    );

    // Instantiate the multiplier
    fp_multiplier_32 u_mul (
        .clk(clk),
        .a(a),
        .b(b),
        .result(mul_result)
    );

    // Select the operation based on the 'select' input
    reg [31:0] selected_result;
    always @(posedge clk) begin
        case (select)
            2'b00: selected_result <= add_result; // Addition
            2'b01: selected_result <= sub_result; // Subtraction
            2'b10: selected_result <= mul_result; // Multiplication
            default: selected_result <= 32'b0;    // Default to 0 for invalid select
        endcase
    end

    // Assign the result
    assign result = selected_result;
	 
	 assign leds = result[31:24]; 
	 
endmodule
