module tb();

    reg original_clk=0, rst;
    
    always begin
        original_clk = ~original_clk;
        #50;
    end

    initial begin
        rst <= 1'b0;
        #200;
        rst <= 1'b1;
        #1000;
        $finish;    
    end

    Pipeline_top dut (.original_clk(original_clk), .rst(rst));
endmodule