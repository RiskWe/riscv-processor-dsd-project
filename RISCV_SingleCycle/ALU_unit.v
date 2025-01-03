//////////////////////////////////////////////////////////////////////////////////
module ALU_unit(A, B, Control_in, ALU_Result, zero);

input [31:0] A, B;
input [3:0] Control_in;
output reg zero;
output reg [31:0] ALU_Result;

always @(Control_in, A, B)
begin
	case (Control_in)
		4'b0000: begin // AND Operation
			zero <= 0;
			ALU_Result <= A & B;
		end

		4'b0001: begin // OR Operation
			zero <= 0;
			ALU_Result <= A | B;
		end

		4'b0010: begin // ADD Operation
			zero <= 0;
			ALU_Result <= A + B;
		end

		4'b0110: begin // SUBTRACT Operation and set zero flag if A == B
			ALU_Result <= A - B;
			if (A == B)
				zero <= 1;
			else
				zero <= 0;
		end

		// Add other cases as needed
		default: begin
			zero <= 0;
			ALU_Result <= 0;
		end
	endcase
end
endmodule