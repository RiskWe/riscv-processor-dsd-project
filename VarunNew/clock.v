/*module clock(original_clk, clk);

	input original_clk;
	
	output reg clk;
	reg [22:0] counter;
	
	initial begin
		clk = 1'b0;
		counter = 0;
	end
	
	always @(posedge original_clk)
	begin 
		counter = counter +1;
		if (counter == 0)
			clk = ~clk;
		end
endmodule*/

module clock(
    input original_clk,
    output reg clk
);

    reg [3:0] counter;  // Counter to count up to 5 (log2(10) = 4 bits)

    initial begin
        clk = 1'b0;
        counter = 4'd0;
    end

    always @(posedge original_clk) begin
        counter <= counter + 1;
        if (counter == 4'd4) begin // Toggle clk after 5 cycles (0 to 4)
            clk <= ~clk;
            counter <= 4'd0;       // Reset counter
        end
    end
endmodule
