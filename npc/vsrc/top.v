/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

import "DPI-C" function void get_instr(input int instr);

module top(
  input clk,
  input rst,
  output [31:0] instr,
  output [63:0] pc
);
    our s;
    /////////////wires///////////////
    ////////////////////////all/////////////////////////
    wire [31:0] if_instr_o, id_instr_o, ex_instr_o, m_instr_o, wb_instr_o;
    wire [63:0] dnpc;
    wire [63:0] if_pc_o, id_pc_o, ex_pc_o, m_pc_o, wb_pc_o;
    wire id_valid_i, ex_valid_i, m_valid_i, wb_valid_i;
    wire id_en, ex_en, m_en, wb_en; 
    wire id_flush, ex_flush, m_flush, wb_flush; 
    wire id_valid_o, ex_valid_o, m_valid_o, wb_valid_o;
    wire if_block, id_block, ex_block, m_block, wb_block;
    /////////////////ID////////////////////////////////
    wire [63:0] id_csrres_o;
    wire [4:0]  id_rd_o;//id 段输出
    wire [63:0] id_busa_o, id_busb_o;
    wire [63:0] id_imm_o;
    wire id_ALUSrcA_o;
    wire id_MemToReg_o;
    wire id_MemWen_o;
    wire id_wen_o;
    wire id_CsrToReg_o;
    wire [1:0] id_ALUSrcB_o;
    wire [2:0] id_MemOp_o;
    wire [4:0] id_ALUOp_o;
    wire [1:0] id_MulOp_o;
    wire [2:0] id_CsrOp;
    wire id_Ecall, id_Mret, id_Csrwen;
    wire [63:0] id_dnpc;
    wire [63:0] id_busa, id_busb;
    wire [63:0] id_mtvec, id_mepc;
    wire [11:0] id_CsrId;
    /////////////EX/////////////////////////////
    wire [4:0]  ex_rd_i;//ex 段输入
    wire [63:0] ex_busa_i, ex_busb_i;
    wire [63:0] ex_imm_i;
    wire [63:0] ex_csrres_i;
    wire ex_ALUSrcA_i;
    wire ex_MemToReg_i;
    wire ex_MemWen_i;
    wire ex_wen_i;
    wire ex_CsrToReg_i;
    wire [1:0] ex_ALUSrcB_i;
    wire [2:0] ex_MemOp_i;
    wire [4:0] ex_ALUOp_i;
    wire [1:0] ex_MulOp_i;
    
    wire [63:0] ex_ALURes_o;//ex 段输出
    //////////////M////////////////////////////
    wire [63:0] m_ALURes_i;//m 段输入
    wire [2:0]  m_MemOp_i;
    wire [63:0] m_raddr_i;
    wire m_MemWen_i;
    wire [63:0] m_wdata_i;
    wire [63:0] m_Csrres_i;
    wire [4:0]  m_rd_i;
    wire m_wen_i, m_MemToReg_i, m_CsrToReg_i;
    
    wire [63:0] m_rfdata_o;//m 段输出
    //////////////WB///////////////////////////
    wire wb_wen_i;
    wire [63:0] wb_wdata_i;
    wire [4:0] wb_waddr_i;//wb 段输入
    //wb 段输出
    /////////////IF/////////////////
    ysyx_220053_IFU my_ifu(
      .clk(clk),
      .rst(rst),
      .dnpc(id_dnpc),
      .pc(if_pc_o),
      .instr_o(if_instr_o)
    );
    assign pc = if_pc_o;
    assign instr = if_instr_o;
    assign id_en = ~(id_block | ex_block | m_block | wb_block);
    assign id_valid_i = rst;
    /////////////////////////////////
    ysyx_220053_ID_Reg ID_Reg(
      .clk(clk),
      .flush(rst),
      .valid_i(id_valid_i),
      .enable(id_en),
      .valid_o(id_valid_o),

      .pc_i(if_pc_o),
      .instr_i(if_instr_o),
      .pc_o(id_pc_o),
      .instr_o(id_instr_o)
    );
    ////////////ID///////////////////
    ysyx_220053_IDU my_idu(
      .instr_i(id_instr_o),
      .rd(id_rd_o),
      .imm(id_imm_o),
      .ALUSrcA(id_ALUSrcA_o),
      .ALUSrcB(id_ALUSrcB_o),
      .ALUOp(id_ALUOp_o),
      .MemOp(id_MemOp_o),
      .MemToReg(id_MemToReg_o),
      .MemWen(id_MemWen_o),
      .MulOp(id_MulOp_o),
      .wen(id_wen_o),
      .CsrToReg(id_CsrToReg_o),
      .Ecall(id_Ecall),
      .Mret(id_Mret),
      .Csrwen(id_Csrwen),
      .CsrOp(id_CsrOp),
      .rs1(id_rs1),
      .rs2(id_rs2),
      .dnpc(id_dnpc),
      .pc(id_pc_o),
      .busa(id_busa),
      .busb(id_busb),
      .mtvec(id_mtvec),
      .mepc(id_mepc),
      .CsrId(id_CsrId)
      );
      assign id_busa_o = id_busa;
      assign id_busb_o = id_busb;
      assign ex_en = ~(ex_block | m_block | wb_block);//还未处理阻塞
      assign ex_valid_i = rst;//还未处理冒险
    /////////////////////////////
    ysyx_220053_EX_Reg EX_Reg(
      //control
      .clk(clk),
      .flush(ex_flush),
      .valid_i(ex_valid_i),
      .enable(ex_en),
      .valid_o(ex_valid_o),
      //data
      .pc_i(id_pc_o),
      .instr_i(id_instr_o),
      .pc_o(ex_pc_o),
      .instr_o(ex_instr_o),

      .rd_i(id_rd_o),
      .busa_i(id_busa_o),
      .busb_i(id_busb_o),
      .imm_i(id_imm_o),
      .ALUSrcA_i(id_ALUSrcA_o),
      .MemToReg_i(id_MemToReg_o),
      .MemWen_i(id_MemWen_o),
      .ALUSrcB_i(id_ALUSrcB_o),
      .MemOp_i(id_MemOp_o),
      .ALUOp_i(id_ALUOp_o),
      .MulOp_i(id_MulOp_o),
      .wen_i(id_wen_o),
      .CsrToReg_i(id_CsrToReg_o),
      .Csrres_i(id_csrres_o),

      .rd_o(ex_rd_i),
      .busa_o(ex_busa_i),
      .busb_o(ex_busb_i),
      .imm_o(ex_imm_i),
      .ALUSrcA_o(ex_ALUSrcA_i),
      .MemToReg_o(ex_MemToReg_i),
      .MemWen_o(ex_MemWen_i),
      .ALUSrcB_o(ex_ALUSrcB_i),
      .MemOp_o(ex_MemOp_i),
      .ALUOp_o(ex_ALUOp_i),
      .MulOp_o(ex_MulOp_i),
      .wen_o(ex_wen_i),
      .CsrToReg_o(ex_CsrToReg_i),
      .Csrres_o(ex_csrres_i)
    );
    ///////////EX////////////////
    ysyx_220053_EXU my_exu(
      .clk(clk),
      .rst(rst),
      .rd(ex_rd_i),
      .busa(ex_busa_i),
      .busb(ex_busb_i),
      .ALUSrcA(ex_ALUSrcA_i),
      .ALUSrcB(ex_ALUSrcB_i),
      .ALUOp(ex_ALUOp_i),
      .MulOp(ex_MulOp_i),
      .pc(ex_pc_o),
      .imm(ex_imm_i),
      .ALURes(ex_ALURes_o)
    );
    assign m_en = ~(m_block | wb_block);//还未处理阻塞
    assign m_valid_i = rst;//还未处理冒险
    /////////////////////////////
    ysyx_220053_M_Reg M_Reg(
//control
    .clk(clk),
    .flush(m_flush),
    .valid_i(m_valid_i),
    .enable(m_en),
    .valid_o(m_valid_o),
//data
    .pc_i(ex_pc_o),
    .instr_i(ex_instr_o),
    .pc_o(m_pc_o),
    .instr_o(m_instr_o),

    .MemOp_i(ex_MemOp_i),
    .raddr_i(ex_ALURes_o),
    .MemWen_i(ex_MemWen_i),
    .wdata_i(ex_busb_i),
    .Csrres_i(ex_csrres_i),
    .rd_i(ex_rd_i),
    .wen_i(ex_wen_i),
    .MemToReg_i(ex_MemToReg_i),
    .CsrToReg_i(ex_CsrToReg_i),
    
    .rd_o(m_rd_i),
    .wen_o(m_wen_i),
    .MemOp_o(m_MemOp_i),
    .raddr_o(m_raddr_i),
    .MemWen_o(m_MemWen_i),
    .wdata_o(m_wdata_i),
    .Csrres_o(m_Csrres_i),
    .MemToReg_o(MemToReg_i),
    .CsrToReg_o(m_CsrToReg_i)
  );
    ///////////M/////////////////
    ysyx_220053_MU my_mu(
      .clk(clk), 
      .rst(rst),
      .MemOp(m_MemOp_i),
      .MemToReg(m_MemToReg_i),
      .MemWen(m_MemWen_i),
      .CsrToReg(m_CsrToReg_i),
      .raddr(m_raddr_i),//load指令的读取地址，save指令的waddr，其他指令的ALURes
      .wdata(m_wdata_i),
      .csrres(m_Csrres_i),
      .rfdata(m_rfdata_o)
    );
    assign wb_en = ~wb_block;//还未处理阻塞
    assign wb_valid_i = rst;//还未处理冒险
    /////////////////////////////
    ysyx_220053_WB_Reg WB_Reg(
//control
    .clk(clk),
    .flush(wb_flush),
    .valid_i(wb_valid_i),
    .enable(wb_en),
    .valid_o(wb_valid_o),
//data
    .pc_i(m_pc_o),
    .instr_i(m_instr_o),
    .pc_o(wb_pc_o),
    .instr_o(wb_instr_o),
    
    .wen_i(m_wen_i),
    .wdata_i(m_rfdata_o),
    .waddr_i(m_rd_i),

    .wen_o(wb_wen_i),
    .wdata_o(wb_wdata_i),
    .waddr_o(wb_waddr_i)
    );
    ///////////WB////////////////
    wire is_wen = (~m_flush) & wb_wen_i;
    
    ///commit a finish instr
    reg wb_valid_r;
    always@(posedge clk) begin
        if(wb_flush){
            wb_valid_r <= 1'b0;
        }
        else wb_valid_r <= wb_valid_o;
    end
    wire wb_commit = wb_valid_r;
    ///////////Regfile///////////
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(id_rs1),
                                              .rbaddr(id_rs2),
                                              .radata(id_busa),
                                              .rbdata(id_busb),
                                              .wdata(wb_wdata_i),//WB
                                              .waddr(wb_waddr_i),//WB
                                              .wen(is_wen)//WB
                                            );
    //////////Csr////////////////
    //Csrwen:阻塞时不能写,还没完成这里的逻辑，阻塞和冒险判断放在top里
    ysyx_220053_CSR csrfile( .clk(clk), .Csrwen(id_Csrwen), .CsrOp(id_CsrOp), .CsrId(id_CsrId), .datain(id_busa),
                             .mepc_o(id_mepc), .csrres(id_csrres_o), .mtvec_o(id_mtvec), .Ecall(id_Ecall), .epc_in(id_pc_o));
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
