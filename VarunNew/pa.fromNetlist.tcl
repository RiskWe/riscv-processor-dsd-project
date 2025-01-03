
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name VarunNew -dir "C:/Users/ruchi/Documents/GitHub/riscv-processor-dsd-project/VarunNew/planAhead_run_1" -part xc6slx45csg324-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/ruchi/Documents/GitHub/riscv-processor-dsd-project/VarunNew/Pipeline_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/ruchi/Documents/GitHub/riscv-processor-dsd-project/VarunNew} }
set_property target_constrs_file "pinAssign.ucf" [current_fileset -constrset]
add_files [list {pinAssign.ucf}] -fileset [get_property constrset [current_run]]
link_design
