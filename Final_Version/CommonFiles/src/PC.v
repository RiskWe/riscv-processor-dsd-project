
module PC_Module(clk,rst,PC,PC_Next);
    input clk,rst;
    input [31:0]PC_Next;
    output [31:0]PC;
    reg [31:0]PC;

    always @(posedge clk)
    begin
        if(rst == 1'b0)
            PC <= {32{1'b0}};
        else
            PC <= PC_Next;
    end
	 
    initial begin
            PC <= {32{1'b0}};
        //mem[40] = 32'h00000002;
    end

endmodule
