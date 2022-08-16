/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_CSR(
    input clk,
    input Csrwen, Ecall, Mret,
    input [2:0] CsrOp,
    input [11:0] CsrId,
    input [63:0] datain,
    input [63:0] epc_in,
    output [63:0] mepc_o, mtvec_o,
    output reg [63:0] csrres
);
/*
#define MSTATUS   0x300
#define MTVEC     0x305
#define MSCRATCH  0x340
#define MEPC      0x341
#define MCAUSE    0x342
*/

    reg [63:0] csrin;//data to be written
    /////////////////////write////////////////////
    /////////////////////mtvec////////////////////
    reg [63:0] mtvec;
    always@(posedge clk) begin
        if(CsrId == 12'h305 && Csrwen == 1'b1) begin
            mtvec <= csrin;
        end
    end

    /////////////////////mepc//////////////////////
    reg [63:0] mepc;
    always@(posedge clk) begin
        if(Ecall == 1'b1) begin
            mepc <= epc_in;
        end
        else if(CsrId == 12'h341 && Csrwen == 1'b1) begin
            mepc <= csrin;
        end
    end
    /////////////////////mcause////////////////////
    reg [63:0] mcause;
    always@(posedge clk) begin
        if(Ecall == 1'b1) begin
            mcause <= 64'hb;
        end
        else if(CsrId == 12'h342 && Csrwen == 1'b1) begin
            mcause <= csrin;
        end
    end
    /////////////////////mstatus///////////////////
    reg [63:0] mstatus;
    always@(posedge clk) begin
        if(Ecall == 1'b1) begin
            mstatus <= {mstatus[63:13],1'b0,1'b0,mstatus[10:0]};
        end
        else if(Mret == 1'b1) begin
            mstatus <= {mstatus[63:13],1'b1,1'b1,mstatus[10:0]};
        end
        else if(CsrId == 12'h300 && Csrwen == 1'b1) begin
            mstatus <= csrin;
        end
    end
    /////////////////////mscratch///////////////////
    reg [63:0] mscratch;
    always@(posedge clk) begin
        if(CsrId == 12'h340 && Csrwen == 1'b1) begin
            mscratch <= csrin;
        end
    end
    //////////////////////read/////////////////////
    always@(*) begin
        case(CsrId)
            12'h300:  csrin = mstatus;
            12'h305:  csrres = mtvec;
            12'h340:  csrres = mscratch;
            12'h341:  csrres = mepc;
            12'h342:  csrres = mcause;
            default: csrres = 0;
        endcase
    end

    always@(*) begin
        case(CsrOp)
            3'b000:  csrin = datain;
            3'b001:  csrin = csrres | datain;
            3'b010:  csrin = csrres & (~datain);
            default: csrin = 0;
        endcase
    end
    assign mtvec_o = mtvec;
    assign mepc_o = mepc;
endmodule
