// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
            tracep->chgQData(oldp+2,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+68,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__my_exu__DOT__addr_res)),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__imm),64);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__wen));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__ALUSrcA));
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__ALUSrcB),2);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__ALUOp),4);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__Branch),3);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__my_exu__DOT__busa),64);
            tracep->chgQData(oldp+80,(((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                        ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0
                                        : ((1U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                            ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                               & vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   | vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                    ? 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                     ? 0ULL
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                      ? vlSelf->top__DOT__my_exu__DOT__alu_inB
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                       ? (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                                              ? 
                                                                             (((((~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                                >> 0x3fU))) 
                                                                               | (((IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                                >> 0x3fU))))) 
                                                                              ^ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                                >> 0x3fU)))
                                                                              : 
                                                                             (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp) 
                                                                               >> 3U) 
                                                                              ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                                       : 0ULL)))))))),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__my_exu__DOT__addr_res),64);
            tracep->chgBit(oldp+88,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0)
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr),3);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0),64);
            tracep->chgQData(oldp+96,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                       & vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+98,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                       | vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+100,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+102,((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                            ? 
                                                           (((((~ (IData)(
                                                                          (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                           >> 0x3fU))) 
                                                               & (~ (IData)(
                                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                             >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                         >> 0x3fU))) 
                                                             | (((IData)(
                                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                          >> 0x3fU)) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                              >> 0x3fU))))) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                       >> 0x3fU)))
                                                            : 
                                                           (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp) 
                                                             >> 3U) 
                                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            tracep->chgBit(oldp+106,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+107,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+108,((1U & ((((~ (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x3fU))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                            >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                        >> 0x3fU))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                             >> 0x3fU))))))));
            tracep->chgBit(oldp+109,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+110,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+111,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+112,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgBit(oldp+120,((1U & ((((~ (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x3fU))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                            >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__addr_res 
                                                        >> 0x3fU))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__my_exu__DOT__addr_res 
                                                             >> 0x3fU))))))));
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__addr_res 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+122,(((0ULL == vlSelf->top__DOT__my_exu__DOT__addr_res)
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+123,(((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+124,(((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+126,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgIData(oldp+127,((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)),32);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+129,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+130,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+131,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+132,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+133,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+134,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+135,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+136,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+137,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+138,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+140,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+144,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+145,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+148,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+149,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+150,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+151,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+152,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),8);
            tracep->chgBit(oldp+153,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+155,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+156,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+157,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+158,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+159,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+160,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),4);
            tracep->chgCData(oldp+161,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+162,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+163,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+164,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+167,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+168,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+169,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c))) 
                                            | ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+170,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))));
            tracep->chgBit(oldp+171,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))));
            tracep->chgBit(oldp+172,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+173,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 1U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 1U)))));
            tracep->chgBit(oldp+175,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 1U)))));
            tracep->chgBit(oldp+176,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+177,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+178,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 2U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 2U)))));
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 2U)))));
            tracep->chgBit(oldp+181,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+182,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+183,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 3U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+184,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 3U)))));
            tracep->chgBit(oldp+185,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 3U)))));
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+187,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+188,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+189,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+190,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+192,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+193,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+194,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+196,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+197,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+198,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 4U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 4U)))));
            tracep->chgBit(oldp+200,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 4U)))));
            tracep->chgBit(oldp+201,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+202,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 5U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+203,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 5U)))));
            tracep->chgBit(oldp+204,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 5U)))));
            tracep->chgBit(oldp+205,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+206,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+207,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 6U)))));
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 6U)))));
            tracep->chgBit(oldp+210,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+211,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+212,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 7U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 7U)))));
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 7U)))));
            tracep->chgBit(oldp+215,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+216,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+218,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+219,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+220,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+222,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+223,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+224,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+225,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+226,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+227,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+231,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+234,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+235,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+236,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 8U)))));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 8U)))));
            tracep->chgBit(oldp+239,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 9U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 9U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+240,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 9U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+241,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 9U)))));
            tracep->chgBit(oldp+242,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 9U)))));
            tracep->chgBit(oldp+243,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+244,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xaU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xaU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+245,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+247,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+249,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xbU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xbU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+250,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xbU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+252,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+254,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+255,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+256,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+257,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+258,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+259,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+260,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+262,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+263,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+264,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xcU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+265,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+266,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+267,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+268,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xdU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xdU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+269,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xdU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+271,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+272,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+273,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xeU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xeU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+274,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+276,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+278,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xfU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xfU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+279,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xfU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+280,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+282,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+283,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+284,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+285,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+286,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)))),8);
            tracep->chgBit(oldp+287,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+289,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+290,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+291,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+292,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+293,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+294,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+295,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+296,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+297,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+298,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+299,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+301,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+302,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+303,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+305,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+306,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x11U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x11U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+307,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x11U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+308,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+310,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+311,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x12U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x12U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+312,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x12U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+313,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+315,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+316,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x13U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x13U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+317,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x13U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+318,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+319,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+321,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+322,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+323,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+324,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+325,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+326,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+327,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+328,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+329,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+330,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+331,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x14U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+332,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+333,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+334,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+335,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x15U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+336,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x15U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+337,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+338,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+339,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+340,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x16U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x16U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+341,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x16U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+343,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+344,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+345,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x17U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x17U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+346,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x17U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+347,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+348,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+350,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+351,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+352,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+353,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+354,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+355,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+356,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+357,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+358,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+360,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+361,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+362,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+363,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+364,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+365,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+366,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+367,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+368,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+369,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+370,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+371,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+372,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+373,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x19U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+374,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x19U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+375,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+376,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+377,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+378,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+379,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+380,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+381,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+382,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+383,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+384,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+385,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+386,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+388,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+389,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+390,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+391,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+392,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+393,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+394,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+395,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+396,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+397,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+398,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+399,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+400,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+401,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+402,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+403,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+405,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+406,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+407,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+408,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+409,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+410,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+412,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+413,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x1fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+414,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+415,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+416,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgIData(oldp+417,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+418,((IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x20U))),32);
            tracep->chgCData(oldp+419,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+420,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+421,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+422,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+423,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+424,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+425,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+426,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+427,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+428,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+429,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+430,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+431,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+432,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+433,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+434,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+435,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+436,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+437,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+438,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+439,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+440,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+442,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+443,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)))),8);
            tracep->chgBit(oldp+444,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+445,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+446,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+447,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+448,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+450,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+451,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+452,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+453,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+454,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+455,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+456,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+458,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+459,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x20U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+460,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x20U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+462,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+463,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x21U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x21U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+464,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+465,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+466,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+467,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+468,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x22U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x22U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+469,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x22U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+470,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+471,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+472,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+473,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x23U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x23U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+474,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x23U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+475,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+476,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+477,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+478,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+479,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+480,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+481,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+482,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+483,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+484,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+485,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+486,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+487,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+488,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+489,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+490,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+491,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+492,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+493,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+495,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+496,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+497,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+498,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+499,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+500,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+502,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+503,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+504,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+507,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+509,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+510,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+511,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+512,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+513,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+514,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+515,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+516,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+517,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+518,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+519,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+520,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+521,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+522,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+523,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+525,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+526,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+527,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+528,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+529,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+530,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+531,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+532,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+533,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+534,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+535,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+536,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+537,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+539,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+540,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+541,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+542,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+543,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+544,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+545,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+546,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+547,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+548,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+550,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+554,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+555,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+556,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+559,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+560,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+562,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+563,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+564,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+565,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+567,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+568,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+569,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+570,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+571,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+572,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+573,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+574,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+576,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+577,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+578,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+579,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+580,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+581,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+582,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+583,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+584,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+585,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+586,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+587,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+588,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+589,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+590,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+591,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+592,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+593,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+594,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+595,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+596,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+597,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+598,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+599,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+600,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+601,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+602,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+603,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+604,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+605,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+606,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+607,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+608,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+609,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+610,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+611,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+612,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+613,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+614,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+615,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+616,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+617,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+618,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+619,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+620,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+621,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+622,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+623,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+624,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+625,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+626,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+627,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+629,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+630,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+631,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+632,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+634,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+635,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+636,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+637,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+638,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+639,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+640,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+641,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+642,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+643,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+644,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+645,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+646,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+647,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+648,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+649,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+650,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+651,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+652,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+653,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+654,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+655,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+656,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+657,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+658,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+659,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+660,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+661,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+663,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+664,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+665,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+666,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+667,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+668,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+669,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+670,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+672,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+673,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+674,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+675,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+676,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+677,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+679,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+680,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+681,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+682,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+683,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+684,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+685,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+686,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+687,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+688,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+689,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+690,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+692,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+693,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+694,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+695,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+696,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+697,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+698,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+699,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+700,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+701,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+702,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+703,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+704,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+705,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+706,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+707,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgIData(oldp+708,((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA)),32);
            tracep->chgIData(oldp+709,((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB)),32);
            tracep->chgCData(oldp+710,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+711,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+712,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+713,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+714,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+715,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+716,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+717,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+718,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+719,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+720,(((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                        << 1U)),5);
            tracep->chgCData(oldp+721,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+722,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+726,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+727,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+728,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+729,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+730,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+731,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+732,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+733,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA))),8);
            tracep->chgCData(oldp+734,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB))),8);
            tracep->chgBit(oldp+735,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+736,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+737,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+738,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+739,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+740,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA))),4);
            tracep->chgCData(oldp+741,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB))),4);
            tracep->chgCData(oldp+742,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+743,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+744,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+745,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+746,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+747,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+748,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+749,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+750,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA) 
                                            & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+751,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA))));
            tracep->chgBit(oldp+752,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB))));
            tracep->chgBit(oldp+753,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+754,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 1U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+755,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 1U)))));
            tracep->chgBit(oldp+756,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 1U)))));
            tracep->chgBit(oldp+757,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+758,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+759,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+760,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 2U)))));
            tracep->chgBit(oldp+761,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 2U)))));
            tracep->chgBit(oldp+762,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+763,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+764,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+765,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 3U)))));
            tracep->chgBit(oldp+766,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 3U)))));
            tracep->chgBit(oldp+767,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+768,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+769,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+770,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+771,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+772,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+773,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+774,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+776,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+777,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+778,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+779,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 4U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+780,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 4U)))));
            tracep->chgBit(oldp+781,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 4U)))));
            tracep->chgBit(oldp+782,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+783,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 5U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+784,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 5U)))));
            tracep->chgBit(oldp+785,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 5U)))));
            tracep->chgBit(oldp+786,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+787,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+788,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 6U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+789,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 6U)))));
            tracep->chgBit(oldp+790,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 6U)))));
            tracep->chgBit(oldp+791,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+792,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+793,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+794,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 7U)))));
            tracep->chgBit(oldp+795,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 7U)))));
            tracep->chgBit(oldp+796,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+797,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+798,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+799,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+800,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+801,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+802,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+803,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+804,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+805,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+806,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+807,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+808,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+809,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+810,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+811,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+812,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+813,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+814,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+815,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+816,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 8U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+817,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 8U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))))));
            tracep->chgBit(oldp+818,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 8U)))));
            tracep->chgBit(oldp+819,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 8U)))));
            tracep->chgBit(oldp+820,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 9U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 9U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+821,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 9U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+822,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 9U)))));
            tracep->chgBit(oldp+823,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 9U)))));
            tracep->chgBit(oldp+824,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+825,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xaU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xaU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+826,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+827,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+828,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+829,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+830,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xbU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xbU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+831,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xbU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+832,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+833,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+834,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+835,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+836,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+837,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+838,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+839,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+840,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+841,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+842,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+843,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+844,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+845,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xcU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xcU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+846,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xcU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+847,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+848,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+849,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xdU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xdU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+850,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xdU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+851,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+853,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+854,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xeU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xeU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+855,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+858,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+859,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xfU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xfU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+860,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0xfU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+861,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+862,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+863,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+864,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+866,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+867,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)))),8);
            tracep->chgBit(oldp+868,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+869,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+870,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+871,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+872,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+873,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+874,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+875,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+876,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+877,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+878,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+879,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+880,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+881,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+882,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+883,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x10U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+884,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x10U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+885,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+886,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+887,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x11U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x11U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+888,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x11U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+889,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+890,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+891,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+892,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x12U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x12U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+893,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x12U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+894,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+895,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+896,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+897,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x13U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x13U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+898,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x13U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+899,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+900,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+901,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+902,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+903,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+904,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+905,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+906,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+907,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+908,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+909,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+910,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+911,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+912,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x14U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x14U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+913,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x14U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+914,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+915,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+916,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x15U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+917,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x15U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+918,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+919,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+920,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+921,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x16U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x16U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+922,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x16U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+923,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+924,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+926,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x17U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x17U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+927,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x17U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+928,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+929,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+930,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+931,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+932,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+933,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+934,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+935,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+936,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+937,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+938,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+939,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+940,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+941,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+942,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+943,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+944,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+945,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+946,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+947,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+948,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+949,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+950,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x18U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+951,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x18U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+952,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+953,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+954,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x19U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+955,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x19U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x19U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+956,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+957,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+958,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+959,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+960,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+961,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+962,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+963,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+964,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+965,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+966,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+967,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+968,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+969,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+970,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+971,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+972,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+973,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+974,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+975,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+976,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+977,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+978,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+979,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+980,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+981,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+982,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+983,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+984,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+985,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+986,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+987,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+988,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+989,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+990,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+991,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+992,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+993,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+994,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+995,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+996,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+997,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgIData(oldp+998,((IData)((vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+999,((IData)((vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                >> 0x20U))),32);
            tracep->chgCData(oldp+1000,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1001,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1002,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1003,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1004,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1005,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1006,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1007,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1008,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1009,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1010,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1011,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1012,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1013,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1014,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1015,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1016,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1017,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1018,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1019,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1020,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1021,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1022,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1023,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1024,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1025,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1026,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1027,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1028,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1029,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1031,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1032,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1033,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1034,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1035,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1036,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1037,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1038,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1039,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1040,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1041,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x20U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x20U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1043,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1044,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1045,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x21U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x21U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x21U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1046,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1047,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1048,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1049,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1050,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x22U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x22U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x22U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1051,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1052,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1054,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1055,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x23U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x23U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x23U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1056,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1057,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1058,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1059,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1060,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1061,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1062,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1064,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1067,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1068,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1069,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1070,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x24U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x24U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1071,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1072,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1073,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1074,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x25U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x25U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x25U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1075,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1076,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1077,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1078,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1079,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x26U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x26U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x26U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1080,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1081,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1083,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1084,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x27U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x27U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x27U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1085,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1086,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1087,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1088,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1090,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1091,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1092,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1093,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1094,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1095,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1096,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1097,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1098,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1099,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1100,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1101,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1102,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1103,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1104,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1105,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1106,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1107,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1108,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x28U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x28U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1109,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1110,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1111,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1112,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x29U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x29U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x29U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1113,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1114,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1115,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1116,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1118,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1119,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1121,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1122,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1124,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1126,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1127,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1128,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1130,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1131,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1132,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1133,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1134,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1135,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1136,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1137,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1138,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1139,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1140,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1141,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1142,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1143,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1144,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1145,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1146,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1148,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1150,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1151,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x2fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x2fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1153,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1155,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1156,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1157,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1158,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1159,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1160,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1161,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1162,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1163,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1164,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1165,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1166,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1167,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1168,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1169,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1170,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1171,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1172,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1173,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1174,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1175,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x30U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x30U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1177,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1178,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1179,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x31U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x31U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x31U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1180,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1181,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1182,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1183,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1184,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x32U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x32U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x32U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1185,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1187,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1188,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1189,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x33U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x33U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x33U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1190,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1191,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1192,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1193,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1194,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1195,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1196,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1198,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1199,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1200,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1201,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1202,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1203,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1204,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x34U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x34U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1205,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1207,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1208,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x35U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x35U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x35U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1209,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1211,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1212,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1213,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x36U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x36U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x36U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1215,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1216,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1217,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1218,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x37U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x37U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x37U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1220,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1221,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1222,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1223,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1224,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1225,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1226,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1227,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1228,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1229,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1230,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1231,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1232,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1233,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1234,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1235,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1236,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1237,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1238,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1239,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1240,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1241,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1242,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x38U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x38U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1245,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1246,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x39U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x39U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x39U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1247,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1249,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1250,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1251,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1252,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1254,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1255,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1256,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1257,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1258,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1260,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1261,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1262,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1263,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1264,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1265,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1266,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1267,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1268,(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1269,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1270,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1271,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1272,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1273,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1274,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1275,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1276,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1277,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1278,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1279,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1280,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1281,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1282,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1284,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1285,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x3fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x3fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1286,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1287,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
        }
        tracep->chgBit(oldp+1289,(vlSelf->clk));
        tracep->chgBit(oldp+1290,(vlSelf->rst));
        tracep->chgIData(oldp+1291,(vlSelf->instr_i),32);
        tracep->chgQData(oldp+1292,(vlSelf->pc),64);
        tracep->chgCData(oldp+1294,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+1295,((vlSelf->instr_i 
                                     >> 0x19U)),7);
        tracep->chgCData(oldp+1296,((0x1fU & (vlSelf->instr_i 
                                              >> 7U))),5);
        tracep->chgCData(oldp+1297,((0x1fU & (vlSelf->instr_i 
                                              >> 0xfU))),5);
        tracep->chgCData(oldp+1298,((0x1fU & (vlSelf->instr_i 
                                              >> 0x14U))),5);
        tracep->chgCData(oldp+1299,((7U & (vlSelf->instr_i 
                                           >> 0xcU))),3);
        tracep->chgQData(oldp+1300,(((0U == (0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->instr_i 
                                                >> 0x14U))])),64);
        tracep->chgBit(oldp+1302,(((IData)(vlSelf->top__DOT__wen) 
                                   & (~ (IData)(vlSelf->rst)))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
