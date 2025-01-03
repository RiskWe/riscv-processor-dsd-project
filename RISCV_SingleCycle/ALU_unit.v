
module ALU_unit(A, B, Control_in, ALU_Result, zero, less, less_or_equal);

input [31:0] A, B;
input [3:0] Control_in;
output reg zero;
output reg less;
output reg less_or_equal;
output reg [31:0] ALU_Result;

always @(Control_in, A, B)
begin
	case (Control_in)
		4'b0000: begin // AND Operation
			ALU_Result <= A & B;
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
		end

		4'b0001: begin // OR Operation
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= A | B;
		end

		4'b0010: begin // ADD Operation
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= A + B;
		end

		4'b0110: begin // SUBTRACT Operation and set zero flag if A == B
			ALU_Result <= A - B;
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
		end

		4'b0100: begin // XOR Operation
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= A ^ B;
		end

		4'b0111: begin // SLT (Set Less Than)
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= (A < B) ? 1 : 0;
		end

		4'b1000: begin // SLTU (Set Less Than Unsigned)
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= ($unsigned(A) < $unsigned(B)) ? 1 : 0;
		end

		4'b1001: begin // SLL (Shift Left Logical)
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= A << B[4:0];
		end

		4'b1010: begin // SRL (Shift Right Logical)
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= A >> B[4:0];
		end

		4'b1011: begin // SRA (Shift Right Arithmetic)
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= $signed(A) >>> B[4:0];
		end

		default: begin
			zero <= (A == B);          // Set zero flag for BEQ
            less <= (A > B);           // Set less flag for BLT
            less_or_equal <= (A <= B); // Set less_or_equal flag for BLE
			ALU_Result <= 0;
		end
	endcase
end
endmodule
