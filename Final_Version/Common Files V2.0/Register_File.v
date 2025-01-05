
module Register_File(clk,rst,WE3,WD3,A1,A2,A3,RD1,RD2,led_R6,led_R);

    input clk,rst,WE3;
    input [4:0]A1,A2,A3;
    input [31:0]WD3;
    output [31:0]RD1,RD2;
	 output [4:0] led_R;
	 output wire led_R6;//added
	 
	
    reg [31:0] Register [31:0];
	 
	 assign led_R = Register[4][4:0];
	 
	 assign led_R6 = Register[6][31];

    always @ (posedge clk)
    begin
        if(WE3 & (A3 != 5'h00))
            Register[A3] <= WD3;
    end
	 

    assign RD1 = (rst==1'b0) ? 32'd0 : Register[A1];
    assign RD2 = (rst==1'b0) ? 32'd0 : Register[A2];

    initial begin
        Register[0] = 32'h00000000;
        $readmemh("regfile.hex",Register);
    end

endmodule
