
module PC_Module(clk,rst,PC,PC_Next,leds);
    input clk,rst;
    input [31:0]PC_Next;
    output [31:0]PC;
    reg [31:0]PC;
	 
	 output reg [4:0] leds;   // 5 LEDs to display the counter


    always @(posedge clk)
    begin
        if(rst == 1'b0)
            PC <= {32{1'b0}};
        else
            //PC <= PC_Next;
				PC <= 32'b11111111111111111111111111111111;
				leds <= PC[4:0];			
    end
	 
	 /*// Assign the 5 least significant bits of the counter to the LEDs
    always @(PC) begin
        leds <= PC[4:0];  // Display LSBs of the counter on LEDs
    end
	 */
	 
    initial begin
            PC <= {32{1'b0}};
        //mem[40] = 32'h00000002;
    end

endmodule
