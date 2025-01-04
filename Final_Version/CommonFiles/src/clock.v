module clock #(parameter DIV_FACTOR = 100) (
    input original_clk,  // Input clock (e.g., 100 MHz)
    input tb,            // Testbench signal to bypass the divider
    output reg clk       // Output clock (divided or bypassed)
);

    localparam HALF_DIV = DIV_FACTOR / 2;  // Half the division factor
    reg [$clog2(DIV_FACTOR)-1:0] counter; // Counter width based on DIV_FACTOR

    initial begin
        clk = 1'b0;
        counter = 0;
    end
	
/*	 always @(negedge original_clk) begin
		 if(tb==1) begin
			clk <= original_clk;
		 end
	 end*/
 
    always @(posedge original_clk) begin
    if (tb == 1) begin
        clk <= original_clk;  // Bypass mode: clk directly follows original_clk
    end else begin
        counter <= counter + 1;
        if (counter == (HALF_DIV - 1)) begin
            clk <= ~clk;       // Toggle clk
            counter <= 0;      // Reset counter
        end
    end
end

endmodule
