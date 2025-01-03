
module Instruction_Memory(rst,A,RD);

  input rst;
  input [31:0]A;
  output [31:0]RD;

  reg [31:0] mem [1023:0];
  
  assign RD = (rst == 1'b0) ? {32{1'b0}} : mem[A[31:2]];

  initial begin
    $readmemh("memfile.hex",mem);
  end



  initial begin
    //mem[0] = 32'hFFC4A303;
    //mem[1] = 32'h00832383;
    // mem[0] = 32'h0064A423;
    // mem[1] = 32'h00B62423;
     //mem[0] = 32'h0062E233;
    // mem[1] = 32'h00B62423;
    mem[0] <= 32'h00000013;  // NOP: addi x0, x0, 0
    mem[1] <= 32'h00500293;  // addi x5, x0, 5   (temp_register = 0)
    mem[2] <= 32'h00000313;  // addi x6, x0, 0   (counter_register = 0
    mem[3] <= 32'h006282B3;  // add x5, x5, x6   (temp_register = temp_register + counter_register)
    mem[4] <= 32'h00130313;  // addi x6, x6, 1   (counter_register = counter_register + 1)
    mem[5] <= 32'h03200393;  // addi t2, x0, 10  (load 10 into t2)
    mem[6] <= 32'hFE63CAE3;  // ble x6, t2, loop (branch to loop if counter_register <= 10)
    mem[7] <= 32'h00A00793;  // addi a7, x0, 10  (load 10 into a7 for ecall)
    mem[8] <= 32'h00000073;  // ecall            (end program)

  end

endmodule
