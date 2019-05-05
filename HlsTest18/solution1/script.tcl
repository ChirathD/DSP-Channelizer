############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HlsTest18
set_top cpp_FIR
add_files HlsTest18/cpp_FIR.cpp
add_files HlsTest18/cpp_FIR.h
add_files HlsTest18/cpp_FIR.inc
add_files -tb HlsTest18/cpp_FIR_test.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./HlsTest18/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
