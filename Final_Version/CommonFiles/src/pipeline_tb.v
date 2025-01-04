module tb();

    reg original_clk=0, rst;
    
    always begin
        clk = ~clk;
        #5;
    end

    initial begin
        rst <= 1'b0;
        #200;
        rst <= 1'b1;
        #6000;
        $finish;    
    end

    Pipeline_top dut (.original_clk(original_clk), .rst(rst));
endmodule