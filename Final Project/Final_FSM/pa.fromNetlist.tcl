
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Final_FSM -dir "C:/Users/thomasbivins/Desktop/Projects/CDA4203L-TeamLGSB/Final Project/Final_FSM/planAhead_run_2" -part xc6slx45csg484-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/thomasbivins/Desktop/Projects/CDA4203L-TeamLGSB/Final Project/Final_FSM/controller.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/thomasbivins/Desktop/Projects/CDA4203L-TeamLGSB/Final Project/Final_FSM} {ipcore_dir} }
add_files [list {ipcore_dir/cs_control.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/cs_ila1.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ram_interface.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "main_pin_map.ucf" [current_fileset -constrset]
add_files [list {main_pin_map.ucf}] -fileset [get_property constrset [current_run]]
link_design
