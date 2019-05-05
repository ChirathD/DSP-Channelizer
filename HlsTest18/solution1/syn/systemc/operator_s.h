// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_s_HH_
#define _operator_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cpp_FIR_mul_mul_6dEe.h"
#include "cpp_FIR_mac_muladeOg.h"
#include "operator_s_fir1_sbkb.h"
#include "operator_s_CFir_c_V.h"
#include "operator_s_fir1_scud.h"

namespace ap_rtl {

struct operator_s : public sc_module {
    // Port declarations 4
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<20> > x_V;
    sc_in< sc_lv<20> > y_V;


    // Module declarations
    operator_s(sc_module_name name);
    SC_HAS_PROCESS(operator_s);

    ~operator_s();

    sc_trace_file* mVcdFile;

    operator_s_fir1_sbkb* fir1_shift_reg0_V_U;
    operator_s_CFir_c_V* CFir_c_V_U;
    operator_s_fir1_scud* fir1_shift_reg1_V_U;
    cpp_FIR_mul_mul_6dEe<1,1,6,13,13>* cpp_FIR_mul_mul_6dEe_U1;
    cpp_FIR_mac_muladeOg<1,1,15,20,45,45>* cpp_FIR_mac_muladeOg_U2;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > fir1_count;
    sc_signal< sc_lv<12> > fir1_shift_reg0_V_address0;
    sc_signal< sc_logic > fir1_shift_reg0_V_ce0;
    sc_signal< sc_lv<20> > fir1_shift_reg0_V_q0;
    sc_signal< sc_lv<12> > fir1_shift_reg0_V_address1;
    sc_signal< sc_logic > fir1_shift_reg0_V_ce1;
    sc_signal< sc_logic > fir1_shift_reg0_V_we1;
    sc_signal< sc_lv<20> > fir1_shift_reg0_V_d1;
    sc_signal< sc_lv<12> > CFir_c_V_address0;
    sc_signal< sc_logic > CFir_c_V_ce0;
    sc_signal< sc_lv<15> > CFir_c_V_q0;
    sc_signal< sc_lv<12> > fir1_shift_reg1_V_address0;
    sc_signal< sc_logic > fir1_shift_reg1_V_ce0;
    sc_signal< sc_lv<20> > fir1_shift_reg1_V_q0;
    sc_signal< sc_lv<12> > fir1_shift_reg1_V_address1;
    sc_signal< sc_logic > fir1_shift_reg1_V_ce1;
    sc_signal< sc_logic > fir1_shift_reg1_V_we1;
    sc_signal< sc_lv<20> > fir1_shift_reg1_V_d1;
    sc_signal< sc_lv<15> > reg_191;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > fir1_count_load_reg_396;
    sc_signal< sc_lv<13> > tmp_4_fu_204_p1;
    sc_signal< sc_lv<13> > tmp_4_reg_402;
    sc_signal< sc_lv<12> > CFir_c_V_addr_reg_407;
    sc_signal< sc_lv<13> > tmp_fu_360_p2;
    sc_signal< sc_lv<13> > tmp_reg_412;
    sc_signal< sc_lv<12> > fir1_shift_reg0_V_ad_reg_418;
    sc_signal< sc_lv<12> > fir1_shift_reg1_V_ad_reg_423;
    sc_signal< sc_lv<5> > i_fu_219_p2;
    sc_signal< sc_lv<5> > i_reg_431;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_213_p2;
    sc_signal< sc_lv<13> > tmp_10_fu_257_p2;
    sc_signal< sc_lv<13> > tmp_10_reg_441;
    sc_signal< sc_lv<20> > fir1_shift_reg0_V_lo_reg_456;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<42> > p_Val2_s_reg_168;
    sc_signal< sc_lv<5> > i1_reg_180;
    sc_signal< sc_lv<64> > tmp_5_fu_199_p1;
    sc_signal< sc_lv<64> > tmp_cast_fu_208_p1;
    sc_signal< sc_lv<64> > tmp_12_cast_fu_252_p1;
    sc_signal< sc_lv<64> > tmp_14_cast_fu_277_p1;
    sc_signal< sc_lv<64> > tmp_13_cast1_fu_307_p1;
    sc_signal< sc_lv<32> > p_tmp_s_fu_293_p3;
    sc_signal< sc_lv<32> > tmp_5_fu_199_p0;
    sc_signal< sc_lv<32> > tmp_4_fu_204_p0;
    sc_signal< sc_lv<5> > tmp_3_fu_225_p2;
    sc_signal< sc_lv<12> > tmp_s_fu_235_p3;
    sc_signal< sc_lv<13> > tmp_11_cast_fu_243_p1;
    sc_signal< sc_lv<13> > tmp_6_fu_247_p2;
    sc_signal< sc_lv<13> > tmp_4_cast_fu_231_p1;
    sc_signal< sc_lv<5> > tmp_9_fu_262_p2;
    sc_signal< sc_lv<13> > tmp_6_cast_fu_268_p1;
    sc_signal< sc_lv<13> > tmp_11_fu_272_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_283_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_288_p2;
    sc_signal< sc_lv<45> > grp_fu_367_p3;
    sc_signal< sc_lv<45> > grp_fu_376_p3;
    sc_signal< sc_lv<6> > tmp_fu_360_p0;
    sc_signal< sc_lv<13> > tmp_fu_360_p1;
    sc_signal< sc_lv<45> > grp_fu_367_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_lv<15> > grp_fu_376_p0;
    sc_signal< sc_lv<20> > grp_fu_376_p1;
    sc_signal< sc_lv<45> > grp_fu_376_p2;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<42> > ap_return;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<42> ap_const_lv42_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<13> ap_const_lv13_1A;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_CFir_c_V_address0();
    void thread_CFir_c_V_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_start();
    void thread_exitcond_fu_213_p2();
    void thread_fir1_shift_reg0_V_address0();
    void thread_fir1_shift_reg0_V_address1();
    void thread_fir1_shift_reg0_V_ce0();
    void thread_fir1_shift_reg0_V_ce1();
    void thread_fir1_shift_reg0_V_d1();
    void thread_fir1_shift_reg0_V_we1();
    void thread_fir1_shift_reg1_V_address0();
    void thread_fir1_shift_reg1_V_address1();
    void thread_fir1_shift_reg1_V_ce0();
    void thread_fir1_shift_reg1_V_ce1();
    void thread_fir1_shift_reg1_V_d1();
    void thread_fir1_shift_reg1_V_we1();
    void thread_grp_fu_367_p2();
    void thread_i_fu_219_p2();
    void thread_p_tmp_s_fu_293_p3();
    void thread_tmp_10_fu_257_p2();
    void thread_tmp_11_cast_fu_243_p1();
    void thread_tmp_11_fu_272_p2();
    void thread_tmp_12_cast_fu_252_p1();
    void thread_tmp_13_cast1_fu_307_p1();
    void thread_tmp_14_cast_fu_277_p1();
    void thread_tmp_1_fu_283_p2();
    void thread_tmp_2_fu_288_p2();
    void thread_tmp_3_fu_225_p2();
    void thread_tmp_4_cast_fu_231_p1();
    void thread_tmp_4_fu_204_p0();
    void thread_tmp_4_fu_204_p1();
    void thread_tmp_5_fu_199_p0();
    void thread_tmp_5_fu_199_p1();
    void thread_tmp_6_cast_fu_268_p1();
    void thread_tmp_6_fu_247_p2();
    void thread_tmp_9_fu_262_p2();
    void thread_tmp_cast_fu_208_p1();
    void thread_tmp_fu_360_p0();
    void thread_tmp_fu_360_p1();
    void thread_tmp_s_fu_235_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
