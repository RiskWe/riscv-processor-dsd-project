module tb();

    reg clk = 0, rst;        // Inputs to the DUT
    wire [31:0] InstrD, RD1_E, RD2_E;      // Outputs from the DUT
    wire BranchE;            // Output from the DUT
    integer cycle_count = 0; // Counter for clock cycles

    // Clock generation: Toggle the clock every 5 time units (10 time units per cycle)
    always begin
        #5 clk = ~clk;
    end

    // Reset sequence
    initial begin
        rst <= 1'b0; // Assert reset
        #20;         // Hold reset for 20 time units
        rst <= 1'b1; // Deassert reset
    end

    // Terminate simulation after 100 clock cycles
    always @(posedge clk) begin
        if (cycle_count == 100) begin
            $finish; // End simulation
        end
        cycle_count = cycle_count + 1;
    end

    // Dump waveform file for debugging
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb); // Dump all signals in the testbench
    end

    // Instantiate the DUT (Design Under Test)
    Pipeline_top dut (
        .clk(clk),
        .rst(rst),
        .InstrD(InstrD),    // Connect InstrD as an output to the testbench
        .BranchE(BranchE),  // Connect BranchE as an output
        .RD1_E(RD1_E),      // Correct connection for RD1_E
        .RD2_E(RD2_E)       // Correct connection for RD2_E
    );

endmodule
