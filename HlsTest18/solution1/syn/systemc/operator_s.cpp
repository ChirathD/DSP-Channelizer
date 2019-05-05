// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "operator_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic operator_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic operator_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> operator_s::ap_ST_fsm_state1 = "1";
const sc_lv<6> operator_s::ap_ST_fsm_state2 = "10";
const sc_lv<6> operator_s::ap_ST_fsm_state3 = "100";
const sc_lv<6> operator_s::ap_ST_fsm_state4 = "1000";
const sc_lv<6> operator_s::ap_ST_fsm_state5 = "10000";
const sc_lv<6> operator_s::ap_ST_fsm_state6 = "100000";
const sc_lv<32> operator_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> operator_s::ap_const_lv32_2 = "10";
const sc_lv<32> operator_s::ap_const_lv32_4 = "100";
const sc_lv<32> operator_s::ap_const_lv32_1 = "1";
const sc_lv<1> operator_s::ap_const_lv1_0 = "0";
const sc_lv<32> operator_s::ap_const_lv32_3 = "11";
const sc_lv<42> operator_s::ap_const_lv42_0 = "000000000000000000000000000000000000000000";
const sc_lv<5> operator_s::ap_const_lv5_0 = "00000";
const sc_lv<1> operator_s::ap_const_lv1_1 = "1";
const sc_lv<5> operator_s::ap_const_lv5_19 = "11001";
const sc_lv<5> operator_s::ap_const_lv5_1 = "1";
const sc_lv<7> operator_s::ap_const_lv7_0 = "0000000";
const sc_lv<5> operator_s::ap_const_lv5_18 = "11000";
const sc_lv<32> operator_s::ap_const_lv32_7F = "1111111";
const sc_lv<3> operator_s::ap_const_lv3_0 = "000";
const sc_lv<32> operator_s::ap_const_lv32_2C = "101100";
const sc_lv<13> operator_s::ap_const_lv13_1A = "11010";
const bool operator_s::ap_const_boolean_1 = true;

operator_s::operator_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    fir1_shift_reg0_V_U = new operator_s_fir1_sbkb("fir1_shift_reg0_V_U");
    fir1_shift_reg0_V_U->clk(ap_clk);
    fir1_shift_reg0_V_U->reset(ap_rst);
    fir1_shift_reg0_V_U->address0(fir1_shift_reg0_V_address0);
    fir1_shift_reg0_V_U->ce0(fir1_shift_reg0_V_ce0);
    fir1_shift_reg0_V_U->q0(fir1_shift_reg0_V_q0);
    fir1_shift_reg0_V_U->address1(fir1_shift_reg0_V_address1);
    fir1_shift_reg0_V_U->ce1(fir1_shift_reg0_V_ce1);
    fir1_shift_reg0_V_U->we1(fir1_shift_reg0_V_we1);
    fir1_shift_reg0_V_U->d1(fir1_shift_reg0_V_d1);
    CFir_c_V_U = new operator_s_CFir_c_V("CFir_c_V_U");
    CFir_c_V_U->clk(ap_clk);
    CFir_c_V_U->reset(ap_rst);
    CFir_c_V_U->address0(CFir_c_V_address0);
    CFir_c_V_U->ce0(CFir_c_V_ce0);
    CFir_c_V_U->q0(CFir_c_V_q0);
    fir1_shift_reg1_V_U = new operator_s_fir1_scud("fir1_shift_reg1_V_U");
    fir1_shift_reg1_V_U->clk(ap_clk);
    fir1_shift_reg1_V_U->reset(ap_rst);
    fir1_shift_reg1_V_U->address0(fir1_shift_reg1_V_address0);
    fir1_shift_reg1_V_U->ce0(fir1_shift_reg1_V_ce0);
    fir1_shift_reg1_V_U->q0(fir1_shift_reg1_V_q0);
    fir1_shift_reg1_V_U->address1(fir1_shift_reg1_V_address1);
    fir1_shift_reg1_V_U->ce1(fir1_shift_reg1_V_ce1);
    fir1_shift_reg1_V_U->we1(fir1_shift_reg1_V_we1);
    fir1_shift_reg1_V_U->d1(fir1_shift_reg1_V_d1);
    cpp_FIR_mul_mul_6dEe_U1 = new cpp_FIR_mul_mul_6dEe<1,1,6,13,13>("cpp_FIR_mul_mul_6dEe_U1");
    cpp_FIR_mul_mul_6dEe_U1->din0(tmp_fu_360_p0);
    cpp_FIR_mul_mul_6dEe_U1->din1(tmp_fu_360_p1);
    cpp_FIR_mul_mul_6dEe_U1->dout(tmp_fu_360_p2);
    cpp_FIR_mac_muladeOg_U2 = new cpp_FIR_mac_muladeOg<1,1,15,20,45,45>("cpp_FIR_mac_muladeOg_U2");
    cpp_FIR_mac_muladeOg_U2->din0(reg_191);
    cpp_FIR_mac_muladeOg_U2->din1(fir1_shift_reg0_V_lo_reg_456);
    cpp_FIR_mac_muladeOg_U2->din2(grp_fu_367_p2);
    cpp_FIR_mac_muladeOg_U2->dout(grp_fu_367_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_CFir_c_V_address0);
    sensitive << ( CFir_c_V_addr_reg_407 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );
    sensitive << ( tmp_12_cast_fu_252_p1 );

    SC_METHOD(thread_CFir_c_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_start);

    SC_METHOD(thread_exitcond_fu_213_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i1_reg_180 );

    SC_METHOD(thread_fir1_shift_reg0_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_14_cast_fu_277_p1 );

    SC_METHOD(thread_fir1_shift_reg0_V_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( fir1_shift_reg0_V_ad_reg_418 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_13_cast1_fu_307_p1 );

    SC_METHOD(thread_fir1_shift_reg0_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg0_V_ce1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg0_V_d1);
    sensitive << ( x_V );
    sensitive << ( fir1_shift_reg0_V_q0 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg0_V_we1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );

    SC_METHOD(thread_fir1_shift_reg1_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_14_cast_fu_277_p1 );

    SC_METHOD(thread_fir1_shift_reg1_V_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( fir1_shift_reg1_V_ad_reg_423 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_13_cast1_fu_307_p1 );

    SC_METHOD(thread_fir1_shift_reg1_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg1_V_ce1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg1_V_d1);
    sensitive << ( y_V );
    sensitive << ( fir1_shift_reg1_V_q0 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_fir1_shift_reg1_V_we1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );

    SC_METHOD(thread_grp_fu_367_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( p_Val2_s_reg_168 );

    SC_METHOD(thread_i_fu_219_p2);
    sensitive << ( i1_reg_180 );

    SC_METHOD(thread_p_tmp_s_fu_293_p3);
    sensitive << ( tmp_1_fu_283_p2 );
    sensitive << ( tmp_2_fu_288_p2 );

    SC_METHOD(thread_tmp_10_fu_257_p2);
    sensitive << ( tmp_reg_412 );
    sensitive << ( tmp_4_cast_fu_231_p1 );

    SC_METHOD(thread_tmp_11_cast_fu_243_p1);
    sensitive << ( tmp_s_fu_235_p3 );

    SC_METHOD(thread_tmp_11_fu_272_p2);
    sensitive << ( tmp_reg_412 );
    sensitive << ( tmp_6_cast_fu_268_p1 );

    SC_METHOD(thread_tmp_12_cast_fu_252_p1);
    sensitive << ( tmp_6_fu_247_p2 );

    SC_METHOD(thread_tmp_13_cast1_fu_307_p1);
    sensitive << ( tmp_10_reg_441 );

    SC_METHOD(thread_tmp_14_cast_fu_277_p1);
    sensitive << ( tmp_11_fu_272_p2 );

    SC_METHOD(thread_tmp_1_fu_283_p2);
    sensitive << ( fir1_count_load_reg_396 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );

    SC_METHOD(thread_tmp_2_fu_288_p2);
    sensitive << ( fir1_count_load_reg_396 );

    SC_METHOD(thread_tmp_3_fu_225_p2);
    sensitive << ( i1_reg_180 );

    SC_METHOD(thread_tmp_4_cast_fu_231_p1);
    sensitive << ( tmp_3_fu_225_p2 );

    SC_METHOD(thread_tmp_4_fu_204_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fir1_count );

    SC_METHOD(thread_tmp_4_fu_204_p1);
    sensitive << ( tmp_4_fu_204_p0 );

    SC_METHOD(thread_tmp_5_fu_199_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fir1_count );

    SC_METHOD(thread_tmp_5_fu_199_p1);
    sensitive << ( tmp_5_fu_199_p0 );

    SC_METHOD(thread_tmp_6_cast_fu_268_p1);
    sensitive << ( tmp_9_fu_262_p2 );

    SC_METHOD(thread_tmp_6_fu_247_p2);
    sensitive << ( tmp_4_reg_402 );
    sensitive << ( tmp_11_cast_fu_243_p1 );

    SC_METHOD(thread_tmp_9_fu_262_p2);
    sensitive << ( i1_reg_180 );

    SC_METHOD(thread_tmp_cast_fu_208_p1);
    sensitive << ( tmp_fu_360_p2 );

    SC_METHOD(thread_tmp_fu_360_p0);
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_tmp_fu_360_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_4_fu_204_p0 );

    SC_METHOD(thread_tmp_s_fu_235_p3);
    sensitive << ( tmp_3_fu_225_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_213_p2 );

    ap_CS_fsm = "000001";
    fir1_count = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "operator_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, x_V, "(port)x_V");
    sc_trace(mVcdFile, y_V, "(port)y_V");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, fir1_count, "fir1_count");
    sc_trace(mVcdFile, fir1_shift_reg0_V_address0, "fir1_shift_reg0_V_address0");
    sc_trace(mVcdFile, fir1_shift_reg0_V_ce0, "fir1_shift_reg0_V_ce0");
    sc_trace(mVcdFile, fir1_shift_reg0_V_q0, "fir1_shift_reg0_V_q0");
    sc_trace(mVcdFile, fir1_shift_reg0_V_address1, "fir1_shift_reg0_V_address1");
    sc_trace(mVcdFile, fir1_shift_reg0_V_ce1, "fir1_shift_reg0_V_ce1");
    sc_trace(mVcdFile, fir1_shift_reg0_V_we1, "fir1_shift_reg0_V_we1");
    sc_trace(mVcdFile, fir1_shift_reg0_V_d1, "fir1_shift_reg0_V_d1");
    sc_trace(mVcdFile, CFir_c_V_address0, "CFir_c_V_address0");
    sc_trace(mVcdFile, CFir_c_V_ce0, "CFir_c_V_ce0");
    sc_trace(mVcdFile, CFir_c_V_q0, "CFir_c_V_q0");
    sc_trace(mVcdFile, fir1_shift_reg1_V_address0, "fir1_shift_reg1_V_address0");
    sc_trace(mVcdFile, fir1_shift_reg1_V_ce0, "fir1_shift_reg1_V_ce0");
    sc_trace(mVcdFile, fir1_shift_reg1_V_q0, "fir1_shift_reg1_V_q0");
    sc_trace(mVcdFile, fir1_shift_reg1_V_address1, "fir1_shift_reg1_V_address1");
    sc_trace(mVcdFile, fir1_shift_reg1_V_ce1, "fir1_shift_reg1_V_ce1");
    sc_trace(mVcdFile, fir1_shift_reg1_V_we1, "fir1_shift_reg1_V_we1");
    sc_trace(mVcdFile, fir1_shift_reg1_V_d1, "fir1_shift_reg1_V_d1");
    sc_trace(mVcdFile, reg_191, "reg_191");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, fir1_count_load_reg_396, "fir1_count_load_reg_396");
    sc_trace(mVcdFile, tmp_4_fu_204_p1, "tmp_4_fu_204_p1");
    sc_trace(mVcdFile, tmp_4_reg_402, "tmp_4_reg_402");
    sc_trace(mVcdFile, CFir_c_V_addr_reg_407, "CFir_c_V_addr_reg_407");
    sc_trace(mVcdFile, tmp_fu_360_p2, "tmp_fu_360_p2");
    sc_trace(mVcdFile, tmp_reg_412, "tmp_reg_412");
    sc_trace(mVcdFile, fir1_shift_reg0_V_ad_reg_418, "fir1_shift_reg0_V_ad_reg_418");
    sc_trace(mVcdFile, fir1_shift_reg1_V_ad_reg_423, "fir1_shift_reg1_V_ad_reg_423");
    sc_trace(mVcdFile, i_fu_219_p2, "i_fu_219_p2");
    sc_trace(mVcdFile, i_reg_431, "i_reg_431");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond_fu_213_p2, "exitcond_fu_213_p2");
    sc_trace(mVcdFile, tmp_10_fu_257_p2, "tmp_10_fu_257_p2");
    sc_trace(mVcdFile, tmp_10_reg_441, "tmp_10_reg_441");
    sc_trace(mVcdFile, fir1_shift_reg0_V_lo_reg_456, "fir1_shift_reg0_V_lo_reg_456");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, p_Val2_s_reg_168, "p_Val2_s_reg_168");
    sc_trace(mVcdFile, i1_reg_180, "i1_reg_180");
    sc_trace(mVcdFile, tmp_5_fu_199_p1, "tmp_5_fu_199_p1");
    sc_trace(mVcdFile, tmp_cast_fu_208_p1, "tmp_cast_fu_208_p1");
    sc_trace(mVcdFile, tmp_12_cast_fu_252_p1, "tmp_12_cast_fu_252_p1");
    sc_trace(mVcdFile, tmp_14_cast_fu_277_p1, "tmp_14_cast_fu_277_p1");
    sc_trace(mVcdFile, tmp_13_cast1_fu_307_p1, "tmp_13_cast1_fu_307_p1");
    sc_trace(mVcdFile, p_tmp_s_fu_293_p3, "p_tmp_s_fu_293_p3");
    sc_trace(mVcdFile, tmp_5_fu_199_p0, "tmp_5_fu_199_p0");
    sc_trace(mVcdFile, tmp_4_fu_204_p0, "tmp_4_fu_204_p0");
    sc_trace(mVcdFile, tmp_3_fu_225_p2, "tmp_3_fu_225_p2");
    sc_trace(mVcdFile, tmp_s_fu_235_p3, "tmp_s_fu_235_p3");
    sc_trace(mVcdFile, tmp_11_cast_fu_243_p1, "tmp_11_cast_fu_243_p1");
    sc_trace(mVcdFile, tmp_6_fu_247_p2, "tmp_6_fu_247_p2");
    sc_trace(mVcdFile, tmp_4_cast_fu_231_p1, "tmp_4_cast_fu_231_p1");
    sc_trace(mVcdFile, tmp_9_fu_262_p2, "tmp_9_fu_262_p2");
    sc_trace(mVcdFile, tmp_6_cast_fu_268_p1, "tmp_6_cast_fu_268_p1");
    sc_trace(mVcdFile, tmp_11_fu_272_p2, "tmp_11_fu_272_p2");
    sc_trace(mVcdFile, tmp_1_fu_283_p2, "tmp_1_fu_283_p2");
    sc_trace(mVcdFile, tmp_2_fu_288_p2, "tmp_2_fu_288_p2");
    sc_trace(mVcdFile, grp_fu_367_p3, "grp_fu_367_p3");
    sc_trace(mVcdFile, grp_fu_376_p3, "grp_fu_376_p3");
    sc_trace(mVcdFile, tmp_fu_360_p0, "tmp_fu_360_p0");
    sc_trace(mVcdFile, tmp_fu_360_p1, "tmp_fu_360_p1");
    sc_trace(mVcdFile, grp_fu_367_p2, "grp_fu_367_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, grp_fu_376_p0, "grp_fu_376_p0");
    sc_trace(mVcdFile, grp_fu_376_p1, "grp_fu_376_p1");
    sc_trace(mVcdFile, grp_fu_376_p2, "grp_fu_376_p2");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_return, "ap_return");
#endif

    }
}

operator_s::~operator_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete fir1_shift_reg0_V_U;
    delete CFir_c_V_U;
    delete fir1_shift_reg1_V_U;
    delete cpp_FIR_mul_mul_6dEe_U1;
    delete cpp_FIR_mac_muladeOg_U2;
}

void operator_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i1_reg_180 = i_reg_431.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i1_reg_180 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        p_Val2_s_reg_168 = grp_fu_367_p3.read().range(44, 3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_Val2_s_reg_168 = ap_const_lv42_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        CFir_c_V_addr_reg_407 =  (sc_lv<12>) (tmp_5_fu_199_p1.read());
        fir1_count_load_reg_396 = fir1_count.read();
        fir1_shift_reg0_V_ad_reg_418 =  (sc_lv<12>) (tmp_cast_fu_208_p1.read());
        fir1_shift_reg1_V_ad_reg_423 =  (sc_lv<12>) (tmp_cast_fu_208_p1.read());
        tmp_4_reg_402 = tmp_4_fu_204_p1.read();
        tmp_reg_412 = tmp_fu_360_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1))) {
        fir1_count = p_tmp_s_fu_293_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        fir1_shift_reg0_V_lo_reg_456 = fir1_shift_reg0_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_431 = i_fu_219_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        reg_191 = CFir_c_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_0))) {
        tmp_10_reg_441 = tmp_10_fu_257_p2.read();
    }
}

void operator_s::thread_CFir_c_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        if (esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1)) {
            CFir_c_V_address0 = CFir_c_V_addr_reg_407.read();
        } else if (esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_0)) {
            CFir_c_V_address0 =  (sc_lv<12>) (tmp_12_cast_fu_252_p1.read());
        } else {
            CFir_c_V_address0 = "XXXXXXXXXXXX";
        }
    } else {
        CFir_c_V_address0 = "XXXXXXXXXXXX";
    }
}

void operator_s::thread_CFir_c_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1)))) {
        CFir_c_V_ce0 = ap_const_logic_1;
    } else {
        CFir_c_V_ce0 = ap_const_logic_0;
    }
}

void operator_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void operator_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void operator_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void operator_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void operator_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void operator_s::thread_ap_start() {
    ap_start = ap_const_logic_1;
}

void operator_s::thread_exitcond_fu_213_p2() {
    exitcond_fu_213_p2 = (!i1_reg_180.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_180.read() == ap_const_lv5_19);
}

void operator_s::thread_fir1_shift_reg0_V_address0() {
    fir1_shift_reg0_V_address0 =  (sc_lv<12>) (tmp_14_cast_fu_277_p1.read());
}

void operator_s::thread_fir1_shift_reg0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        fir1_shift_reg0_V_address1 =  (sc_lv<12>) (tmp_13_cast1_fu_307_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg0_V_address1 = fir1_shift_reg0_V_ad_reg_418.read();
    } else {
        fir1_shift_reg0_V_address1 = "XXXXXXXXXXXX";
    }
}

void operator_s::thread_fir1_shift_reg0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg0_V_ce0 = ap_const_logic_1;
    } else {
        fir1_shift_reg0_V_ce0 = ap_const_logic_0;
    }
}

void operator_s::thread_fir1_shift_reg0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        fir1_shift_reg0_V_ce1 = ap_const_logic_1;
    } else {
        fir1_shift_reg0_V_ce1 = ap_const_logic_0;
    }
}

void operator_s::thread_fir1_shift_reg0_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        fir1_shift_reg0_V_d1 = fir1_shift_reg0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg0_V_d1 = x_V.read();
    } else {
        fir1_shift_reg0_V_d1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void operator_s::thread_fir1_shift_reg0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1)))) {
        fir1_shift_reg0_V_we1 = ap_const_logic_1;
    } else {
        fir1_shift_reg0_V_we1 = ap_const_logic_0;
    }
}

void operator_s::thread_fir1_shift_reg1_V_address0() {
    fir1_shift_reg1_V_address0 =  (sc_lv<12>) (tmp_14_cast_fu_277_p1.read());
}

void operator_s::thread_fir1_shift_reg1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        fir1_shift_reg1_V_address1 =  (sc_lv<12>) (tmp_13_cast1_fu_307_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg1_V_address1 = fir1_shift_reg1_V_ad_reg_423.read();
    } else {
        fir1_shift_reg1_V_address1 = "XXXXXXXXXXXX";
    }
}

void operator_s::thread_fir1_shift_reg1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg1_V_ce0 = ap_const_logic_1;
    } else {
        fir1_shift_reg1_V_ce0 = ap_const_logic_0;
    }
}

void operator_s::thread_fir1_shift_reg1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        fir1_shift_reg1_V_ce1 = ap_const_logic_1;
    } else {
        fir1_shift_reg1_V_ce1 = ap_const_logic_0;
    }
}

void operator_s::thread_fir1_shift_reg1_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        fir1_shift_reg1_V_d1 = fir1_shift_reg1_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        fir1_shift_reg1_V_d1 = y_V.read();
    } else {
        fir1_shift_reg1_V_d1 =  (sc_lv<20>) ("XXXXXXXXXXXXXXXXXXXX");
    }
}

void operator_s::thread_fir1_shift_reg1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1)))) {
        fir1_shift_reg1_V_we1 = ap_const_logic_1;
    } else {
        fir1_shift_reg1_V_we1 = ap_const_logic_0;
    }
}

void operator_s::thread_grp_fu_367_p2() {
    grp_fu_367_p2 = esl_concat<42,3>(p_Val2_s_reg_168.read(), ap_const_lv3_0);
}

void operator_s::thread_i_fu_219_p2() {
    i_fu_219_p2 = (!i1_reg_180.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i1_reg_180.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void operator_s::thread_p_tmp_s_fu_293_p3() {
    p_tmp_s_fu_293_p3 = (!tmp_1_fu_283_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1_fu_283_p2.read()[0].to_bool())? ap_const_lv32_0: tmp_2_fu_288_p2.read());
}

void operator_s::thread_tmp_10_fu_257_p2() {
    tmp_10_fu_257_p2 = (!tmp_4_cast_fu_231_p1.read().is_01() || !tmp_reg_412.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_4_cast_fu_231_p1.read()) + sc_bigint<13>(tmp_reg_412.read()));
}

void operator_s::thread_tmp_11_cast_fu_243_p1() {
    tmp_11_cast_fu_243_p1 = esl_zext<13,12>(tmp_s_fu_235_p3.read());
}

void operator_s::thread_tmp_11_fu_272_p2() {
    tmp_11_fu_272_p2 = (!tmp_6_cast_fu_268_p1.read().is_01() || !tmp_reg_412.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_6_cast_fu_268_p1.read()) + sc_bigint<13>(tmp_reg_412.read()));
}

void operator_s::thread_tmp_12_cast_fu_252_p1() {
    tmp_12_cast_fu_252_p1 = esl_sext<64,13>(tmp_6_fu_247_p2.read());
}

void operator_s::thread_tmp_13_cast1_fu_307_p1() {
    tmp_13_cast1_fu_307_p1 = esl_sext<64,13>(tmp_10_reg_441.read());
}

void operator_s::thread_tmp_14_cast_fu_277_p1() {
    tmp_14_cast_fu_277_p1 = esl_sext<64,13>(tmp_11_fu_272_p2.read());
}

void operator_s::thread_tmp_1_fu_283_p2() {
    tmp_1_fu_283_p2 = (!fir1_count_load_reg_396.read().is_01() || !ap_const_lv32_7F.is_01())? sc_lv<1>(): sc_lv<1>(fir1_count_load_reg_396.read() == ap_const_lv32_7F);
}

void operator_s::thread_tmp_2_fu_288_p2() {
    tmp_2_fu_288_p2 = (!fir1_count_load_reg_396.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(fir1_count_load_reg_396.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void operator_s::thread_tmp_3_fu_225_p2() {
    tmp_3_fu_225_p2 = (!ap_const_lv5_19.is_01() || !i1_reg_180.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_19) - sc_biguint<5>(i1_reg_180.read()));
}

void operator_s::thread_tmp_4_cast_fu_231_p1() {
    tmp_4_cast_fu_231_p1 = esl_zext<13,5>(tmp_3_fu_225_p2.read());
}

void operator_s::thread_tmp_4_fu_204_p0() {
    tmp_4_fu_204_p0 = fir1_count.read();
}

void operator_s::thread_tmp_4_fu_204_p1() {
    tmp_4_fu_204_p1 = tmp_4_fu_204_p0.read().range(13-1, 0);
}

void operator_s::thread_tmp_5_fu_199_p0() {
    tmp_5_fu_199_p0 = fir1_count.read();
}

void operator_s::thread_tmp_5_fu_199_p1() {
    tmp_5_fu_199_p1 = esl_sext<64,32>(tmp_5_fu_199_p0.read());
}

void operator_s::thread_tmp_6_cast_fu_268_p1() {
    tmp_6_cast_fu_268_p1 = esl_zext<13,5>(tmp_9_fu_262_p2.read());
}

void operator_s::thread_tmp_6_fu_247_p2() {
    tmp_6_fu_247_p2 = (!tmp_4_reg_402.read().is_01() || !tmp_11_cast_fu_243_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_4_reg_402.read()) + sc_biguint<13>(tmp_11_cast_fu_243_p1.read()));
}

void operator_s::thread_tmp_9_fu_262_p2() {
    tmp_9_fu_262_p2 = (!ap_const_lv5_18.is_01() || !i1_reg_180.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_18) - sc_biguint<5>(i1_reg_180.read()));
}

void operator_s::thread_tmp_cast_fu_208_p1() {
    tmp_cast_fu_208_p1 = esl_sext<64,13>(tmp_fu_360_p2.read());
}

void operator_s::thread_tmp_fu_360_p0() {
    tmp_fu_360_p0 =  (sc_lv<6>) (ap_const_lv13_1A);
}

void operator_s::thread_tmp_fu_360_p1() {
    tmp_fu_360_p1 = tmp_4_fu_204_p0.read().range(13-1, 0);
}

void operator_s::thread_tmp_s_fu_235_p3() {
    tmp_s_fu_235_p3 = esl_concat<5,7>(tmp_3_fu_225_p2.read(), ap_const_lv7_0);
}

void operator_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_213_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

}
