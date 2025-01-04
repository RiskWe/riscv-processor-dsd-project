module tb();

    reg original_clk=0, pre_rst;
    
    always begin
        original_clk = ~original_clk;
        #50;
    end

    initial begin
        pre_rst <= 1'b0;
        #200;
        pre_rst <= 1'b1;
        #1000;
        $finish;    
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0);
    end

    Pipeline_top dut (.original_clk(original_clk), .pre_rst(pre_rst));
endmodule