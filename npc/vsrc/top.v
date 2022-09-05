/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata, input byte bytes);

import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

import "DPI-C" function void get_instr(input int instr);

module top(
  input clk,
  input rst,
  output [31:0] instr,
  output [63:0] pc,
  output wb_commit,
  output [63:0] wb_pc,
  output [31:0] wb_instr,
  output [63:0] next_pc,
/*
  output [63:0] i_rw_addr_o,
  output i_rw_req_o,
  output i_rw_valid_o,
  input  [127:0] i_data_read_i,
  input  i_rw_ready_i,
  
  output [63:0]     d_rw_addr_o,
  output            d_rw_req_o,//
  output            d_rw_valid_o,
  output [127:0]    d_rw_w_data_o,
  input  [127:0]    d_data_read_i,//finish burst
  input             d_rw_ready_i,
  */
  output  [63:0]   rw_addr_o,
  output           rw_req_o,//
  output           rw_valid_o,
  output [127:0]   rw_w_data_o,
  input  [127:0]   data_read_i,//finish burst
  input            rw_ready_i,//data_read_i in ram
  output d_rw_ready,
  output mem_valid,
  output reg wb_dev_o
);
    our s;
    /////////////wires///////////////
    wire [63:0] i_rw_addr_o;
    wire i_rw_req_o;
    wire i_rw_valid_o;
    wire  [127:0] i_data_read_i;
    wire  i_rw_ready_i;
    
    wire [63:0]     d_rw_addr_o;
    wire            d_rw_req_o;//
    wire            d_rw_valid_o;
    wire [127:0]    d_rw_w_data_o;
    wire  [127:0]    d_data_read_i;//finish burst
    wire             d_rw_ready_i;
    wire mstatus_MIE;
    wire mie_MITE;
    wire Time_interrupt;
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
    wire [4:0]  id_rd_o, id_rs1, id_rs2;//id 段输出
    wire [63:0] id_busa_o, id_busb_o;
    wire [63:0] id_imm_o;
    wire id_ALUSrcA_o;
    wire id_MemToReg_o;
    wire id_MemWen_o;
    wire id_wen_o;
    wire id_CsrToReg_o;
    wire id_Ebreak_o;
    wire id_Fence_i_o;
    wire id_Csri_o;
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
    wire ex_Ebreak_i;
    wire ex_Fence_i_i;
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
    wire m_Ebreak_i;
    wire m_Fence_i_i;
    wire [63:0] m_rfdata_o;//m 段输出
    wire is_cmp;
    //////////////WB///////////////////////////
    wire wb_wen_i;
    wire [63:0] wb_wdata_i;
    wire [4:0] wb_waddr_i;//wb 段输入
    wire wb_Ebreak_i;
    wire wb_Fence_i_i;
    //wb 段输出
    ////////////////others//////////////////////
    reg running_r;
    wire ebreak_commit;
    wire Fence_i_commit;
    wire running;
    /////////////////hazard and block/////////////
    wire id_use_rd, ex_has_rd, m_has_rd, wb_has_rd, rs1_need, rs2_need;
    wire [6:0] id_op = id_instr_o[6:0];
    wire [6:0] ex_op = ex_instr_o[6:0];
    wire [6:0] m_op = m_instr_o[6:0];
    wire [6:0] wb_op = wb_instr_o[6:0];
    wire [2:0] id_func3 = id_instr_o[14:12];
    wire [6:0] id_func7 = id_instr_o[31:25];
    assign id_use_rd = id_valid_o & (~(id_op == 7'b0110111 || id_op == 7'b0010111 || id_op == 7'b1101111 || id_Ebreak_o == 1'b1 || id_Mret == 1'b1 || id_Ecall == 1'b1 || id_Csri_o == 1'b1)); //|| id_op == 7'b1110011
    assign ex_has_rd = ex_valid_o & ex_wen_i;//(ex_op == 7'b0110111 || ex_op == 7'b0010111 || ex_op == 7'b1100011 || ex_op == 7'b0100011 || ex_op == 7'b1110011);
    assign m_has_rd = m_valid_o & m_wen_i;//(m_op == 7'b0110111 || m_op == 7'b0010111 || m_op == 7'b1100011 || m_op == 7'b0100011 || m_op == 7'b1110011);
    assign wb_has_rd = wb_valid_o & wb_wen_i;//(wb_op == 7'b0110111 || wb_op == 7'b0010111 || wb_op == 7'b1100011 || wb_op == 7'b0100011 || wb_op == 7'b1110011);
    
    reg id_ex_hazard, id_m_hazard, id_wb_hazard;
    always@(*) begin
      if( id_use_rd && ex_has_rd && ((id_rs1 == ex_rd_i && id_rs1 != 5'b0) || (id_rs2 == ex_rd_i && id_rs2 != 5'b0))) begin
        id_ex_hazard = 1'b1;
      end
      else id_ex_hazard = 1'b0;
    end
    always@(*) begin
      if(id_use_rd && m_has_rd && ((id_rs1 == m_rd_i && id_rs1 != 5'b0) || (id_rs2 == m_rd_i && id_rs2 != 5'b0))) begin
        id_m_hazard = 1'b1;
      end
      else id_m_hazard = 1'b0;
    end
    always@(*) begin
      if(id_use_rd && wb_has_rd && ((id_rs1 == wb_waddr_i && id_rs1 != 5'b0) || (id_rs2 == wb_waddr_i && id_rs2 != 5'b0))) begin
        id_wb_hazard = 1'b1;
      end
      else id_wb_hazard = 1'b0;
    end
    reg load_use;
    always@(*) begin//load-use
      if(id_ex_hazard && ex_op == 7'b0000011) begin
        load_use = 1'b1;
      end
      else load_use = 1'b0;
    end
    wire hazard = id_ex_hazard | id_m_hazard | id_wb_hazard;
    wire rs1_need = (id_ex_hazard && id_rs1 == ex_rd_i) || (id_m_hazard && id_rs1 == m_rd_i) || (id_wb_hazard && id_rs1 == wb_waddr_i);
    wire rs2_need = (id_ex_hazard && id_rs2 == ex_rd_i) || (id_m_hazard && id_rs2 == m_rd_i) || (id_wb_hazard && id_rs2 == wb_waddr_i);
    reg [63:0] forward_data1, forward_data2;
    always@(*) begin
      if(id_ex_hazard && id_rs1 == ex_rd_i) forward_data1 = (ex_CsrToReg_i == 1'b0) ? ex_ALURes_o : ex_csrres_i;
      else if(id_m_hazard && id_rs1 == m_rd_i) forward_data1 = m_rfdata_o;
      else if(id_wb_hazard && id_rs1 == wb_waddr_i) forward_data1 = wb_wdata_i;
      else forward_data1 = 64'b0;
    end

    always@(*) begin
      if(id_ex_hazard && id_rs2 == ex_rd_i) forward_data2 = (ex_CsrToReg_i == 1'b0) ? ex_ALURes_o : ex_csrres_i;
      else if(id_m_hazard && id_rs2 == m_rd_i) forward_data2 = m_rfdata_o;
      else if(id_wb_hazard && id_rs2 == wb_waddr_i) forward_data2 = wb_wdata_i;
      else forward_data2 = 64'b0;
    end


    assign Time_interrupt = mie_MITE & mstatus_MIE & is_cmp;
    /////////////IF/////////////////
    wire has_fence_i = id_Fence_i_o && id_valid_o | ex_Fence_i_i && ex_valid_o | m_Fence_i_i && m_valid_o;// | wb_Fence_i_i;
    wire if_busy;
    wire cpu_halt;
    wire dnpc_valid = id_valid_o & ~has_fence_i;
    ysyx_220053_IFU my_ifu(
      .clk(clk),
      .rst(rst),
      .dnpc(id_dnpc),
      .pc(if_pc_o),
      .instr_o(if_instr_o),
      .dnpc_valid(id_valid_o),
      .block(cpu_halt),
      .if_busy(if_busy),
      .i_rw_addr_o(i_rw_addr_o),
      .i_rw_req_o(i_rw_req_o),
      .i_rw_valid_o(i_rw_valid_o),
      .i_data_read_i(i_data_read_i),
      .i_rw_ready_i(i_rw_ready_i),
      .id_en_i(id_en)
    );
    assign pc = if_pc_o;
    assign instr = if_instr_o;
    assign cpu_halt = id_Ebreak_o | rst;
    assign if_block = id_Ebreak_o | if_busy;
    assign id_en = ~(id_block | ex_block | m_block | wb_block);
    assign id_valid_i = ~(rst | if_block | cpu_halt);
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
    wire [63:0] ex_dnpc,m_dnpc,wb_dnpc;
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
      .busa(id_busa_o),
      .busb(id_busb_o),
      .mtvec(id_mtvec),
      .mepc(id_mepc),
      .CsrId(id_CsrId),
      .Ebreak(id_Ebreak_o),
      .Fence_i(id_Fence_i_o),
      .Csri(id_Csri_o),
      .Time_interrupt(Time_interrupt)
      );
      assign id_flush = rst;
      wire is_Csrwen = (~id_flush) & id_Csrwen & id_valid_o;
      assign id_block = load_use | has_fence_i;//id_Ebreak_o;   //load_use
      assign id_busa_o = (rs1_need == 1'b0) ? id_busa : forward_data1;
      assign id_busb_o = (rs2_need == 1'b0) ? id_busb : forward_data2;
      assign ex_en = ~(ex_block | m_block | wb_block);//还未处理阻塞
      assign ex_valid_i = id_valid_o & (~id_block) & ~Time_interrupt;//还未处理冒险
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
      .Ebreak_i(id_Ebreak_o),
      .Fence_i_i(id_Fence_i_o),

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
      .Csrres_o(ex_csrres_i),
      .Ebreak_o(ex_Ebreak_i),
      .Fence_i_o(ex_Fence_i_i)

      ,.dnpc_i(id_dnpc),
      .dnpc_o(ex_dnpc)
    );
    ///////////EX////////////////
    wire alu_busy;

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
      .ALURes(ex_ALURes_o),
      .mwb_block(m_block | wb_block),
      .alu_busy(alu_busy)
    );
    assign ex_flush = rst;
    assign ex_block = alu_busy;
    assign m_en = ~(m_block | wb_block);//还未处理阻塞
    assign m_valid_i = ex_valid_o & (~ex_block);//还未处理冒险
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
    .Ebreak_i(ex_Ebreak_i),
    .Fence_i_i(ex_Fence_i_i),

    .rd_o(m_rd_i),
    .wen_o(m_wen_i),
    .MemOp_o(m_MemOp_i),
    .raddr_o(m_raddr_i),
    .MemWen_o(m_MemWen_i),
    .wdata_o(m_wdata_i),
    .Csrres_o(m_Csrres_i),
    .MemToReg_o(m_MemToReg_i),
    .CsrToReg_o(m_CsrToReg_i),
    .Ebreak_o(m_Ebreak_i),
    .Fence_i_o(m_Fence_i_i)


      ,.dnpc_i(ex_dnpc),
      .dnpc_o(m_dnpc)
  );
    ///////////M/////////////////
    wire m_busy;
    ysyx_220053_MU my_mu(
      .clk(clk), 
      .rst(rst),
      .MemOp(m_MemOp_i),
      .MemToReg(is_MemToReg),
      .MemWen(is_men),
      .CsrToReg(m_CsrToReg_i),
      .raddr(m_raddr_i),//load指令的读取地址，save指令的waddr，其他指令的ALURes
      .wdata(m_wdata_i),
      .csrres(m_Csrres_i),
      .rfdata(m_rfdata_o),
      .m_busy(m_busy),
      .d_rw_addr_o(d_rw_addr_o),
      .d_rw_req_o(d_rw_req_o),//
      .d_rw_valid_o(d_rw_valid_o),
      .d_rw_w_data_o(d_rw_w_data_o),
      .d_data_read_i(d_data_read_i),//finish burst
      .d_rw_ready_i(d_rw_ready_i),
      .Fence_i(is_Fence_i),
      .is_cmp(is_cmp)
    );
    wire is_Fence_i = m_Fence_i_i & m_valid_o;
    assign d_rw_ready = d_rw_ready_i;
    wire is_MemToReg = m_MemToReg_i & (~m_flush) & m_valid_o;
    wire is_men = m_MemWen_i & (~m_flush) & m_valid_o;
    assign m_flush = rst;
    assign m_block = m_busy;
    assign wb_en = ~wb_block;//还未处理阻塞
    assign wb_valid_i = m_valid_o & (~m_block);//还未处理冒险

    wire dev_i = m_valid_o && (m_raddr_i[31:28] == 4'ha) && (is_men == 1'b0);
    wire dev_o;
    assign mem_valid = m_valid_o;
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
    .Ebreak_i(m_Ebreak_i),
    .Fence_i_i(m_Fence_i_i),

    .wen_o(wb_wen_i),
    .wdata_o(wb_wdata_i),
    .waddr_o(wb_waddr_i),
    .Ebreak_o(wb_Ebreak_i),
    .Fence_i_o(wb_Fence_i_i)

    ,.dnpc_i(m_dnpc),
      .dnpc_o(wb_dnpc)
    ,.dev_i(dev_i),
    .dev_o(dev_o)
    );
    ///////////WB////////////////
    assign wb_block = 1'b0;
    assign wb_flush = rst;
    wire is_wen = (~wb_flush) & wb_wen_i & wb_valid_o;
    ///commit a finish instr
    reg wb_commit_r;
    reg [63:0] wb_pc_r;
    reg [31:0] wb_instr_r;
    reg [63:0] next_pc_r;
    always@(posedge clk) begin
        if(wb_flush)begin 
            wb_commit_r <= 1'b0;
            wb_pc_r    <= 64'b0;
            wb_instr_r <= 32'b0;
            next_pc_r <= 64'b0;
            wb_dev_o <= 0;
        end
        else begin
          if(wb_valid_o)begin
            wb_commit_r <= wb_valid_o;
            wb_pc_r    <= wb_pc_o;
            wb_instr_r <= wb_instr_o;
            next_pc_r <= wb_dnpc;
            wb_dev_o <= dev_o;
          end
          else begin
            wb_commit_r <= 1'b0;
            wb_pc_r    <= 64'b0;
            wb_instr_r <= 32'b0;
            next_pc_r <= 64'b0;
            wb_dev_o <= 0;
          end
        end
    end
    assign wb_commit = wb_commit_r;
    assign wb_pc = wb_pc_r;
    assign wb_instr = wb_instr_r;
    assign ebreak_commit = wb_Ebreak_i;
    assign next_pc = next_pc_r;
    always@(*) begin
      if(ebreak_commit) c_trap(1);
    end
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
    wire [63:0] Csr_datain = (id_Csri_o == 1'b1) ? {{59{1'b0}},id_rs1} : id_busa_o;
    ysyx_220053_CSR csrfile( .clk(clk), .rst(rst), .Csrwen(is_Csrwen), .CsrOp(id_CsrOp), .CsrId(id_CsrId), .datain(Csr_datain),
                             .mepc_o(id_mepc), .csrres(id_csrres_o), .mtvec_o(id_mtvec), .Ecall(id_Ecall & id_valid_o),
                             .epc_in(id_pc_o),.Mret(id_Mret & id_valid_o),
                             .mstatus_MIE(mstatus_MIE), .mie_MITE(mie_MITE), .Time_interrupt(Time_interrupt & id_valid_o));
    
    //////////Arbiter//////////////
    ysyx_220053_arbiter arbiter(
    clk,rst,
  //icache <-> arbiter
    if_busy,i_rw_addr_o,i_rw_req_o,i_rw_valid_o,i_data_read_i,i_rw_ready_i,
  //dcache <-> arbiter
    m_busy,d_rw_addr_o,d_rw_req_o,d_rw_valid_o,d_rw_w_data_o,d_data_read_i,d_rw_ready_i,
  //arbiter<->memory
    rw_addr_o,rw_req_o,rw_valid_o,rw_w_data_o,data_read_i,rw_ready_i
    );
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
