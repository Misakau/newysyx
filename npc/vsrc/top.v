/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

module top(
  input clk,
  input rst,
  input [31:0]instr_i,
  output [63:0] pc
);
    our s;
    ysyx_220053_IFU my_ifu(
    .clk(clk),
    .rst(rst),
    .dnpc(dnpc),
    .pc(pc)
    );
    wire [63:0] dnpc;
    wire [6:0] op, func7;
    wire [4:0] rd, rs1, rs2;
    wire [2:0] func3;
    wire [63:0] imm;
    wire wen, ALUSrcA;
    wire [1:0] ALUSrcB;
    wire [3:0] ALUOp;
    wire [2:0] Branch;
    ysyx_220053_IDU my_idu(
      .instr_i(instr_i),
      .op(op),
      .rd(rd),.rs1(rs1),.rs2(rs2),
      .func3(func3),.func7(func7),
      .imm(imm),
      .ALUSrcA(ALUSrcA),
      .ALUSrcB(ALUSrcB),
      .ALUOp(ALUOp),
      .Branch(Branch),
      .wen(wen)
      );

    ysyx_220053_EXU my_exu(
      .clk(clk),
      .rst(rst),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .wen(wen),
      .ALUSrcA(ALUSrcA),
      .ALUSrcB(ALUSrcB),
      .ALUOp(ALUOp),
      .pc(pc),
      .imm(imm),
      .dnpc(dnpc)
    );

    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
