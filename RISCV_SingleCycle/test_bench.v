`timescale 1ns / 1ps
module PC_tb;

// Inputs
reg clk;
reg reset;
reg [31:0] PC_in;

// Outputs
wire [31:0] PC_top;

// Instantiate the Unit Under Test (UUT)
main uut(
    .clk(clk), 
    .reset(reset), 
    .PCin_top(PC_in),
	 .PC_top(PC_top)	 
);

// Clock generation: 10ns clock period
always #10 clk = ~clk;

initial begin
    // Initialize Inputs
    clk = 0;
    reset = 1;
    #10; //Rise
	 #10; //Down
    reset = 0;

	 #10; //Rise
	 #10; //Down
	 
    PC_in = 32'd0;  // Fetch first instruction
    #10; //Rise
	 #10; //Down

    PC_in = 32'd4;  // Fetch second instruction
    #10; //Rise
	 #10; //Down

    PC_in = 32'd8;  // Fetch third instruction
    #10; //Rise
	 #10; //Down

    PC_in = 32'd12; // Fetch fourth instruction
    #10; //Rise
	 #10; //Down
    $stop;  // Stop the simulation
end

// Monitor output
// Monitor output only on clock edges


endmodule
