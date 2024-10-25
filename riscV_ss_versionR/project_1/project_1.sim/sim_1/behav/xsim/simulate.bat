@echo off
REM ****************************************************************************
REM Vivado (TM) v2024.1.1 (64-bit)
REM
REM Filename    : simulate.bat
REM Simulator   : AMD Vivado Simulator
REM Description : Script for simulating the design by launching the simulator
REM
REM Generated by Vivado on Fri Oct 25 20:39:32 +0530 2024
REM SW Build 5094488 on Fri Jun 14 08:59:21 MDT 2024
REM
REM Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
REM Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
REM
REM usage: simulate.bat
REM
REM ****************************************************************************
REM simulate design
echo "xsim main_tb_behav -key {Behavioral:sim_1:Functional:main_tb} -tclbatch main_tb.tcl -log simulate.log"
call xsim  main_tb_behav -key {Behavioral:sim_1:Functional:main_tb} -tclbatch main_tb.tcl -log simulate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
