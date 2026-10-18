// VA 0x1410ce670, PDB extent 59 bytes
// system_clutter::autoclutter::read_bush_positions_from_gpu::BushGrid::bushes_near_point<system_clutter::autoclutter::populate_autoclutter_regions::filter_clutter_object::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/read_bush_positions_from_gpu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::autoclutter::read_bush_positions_from_gpu::BushGrid::bushes_near_point<system_clutter::autoclutter::populate_autoclutter_regions::filter_clutter_object::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/read_bush_positions_from_gpu.rs
   Extent: 59 */

void pdb_1410ce670(undefined8 param_1)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  
  auStack_30[0] = in_stack_00000028;
  uStack_28 = in_stack_00000030;
  pdb_140deeb40(auStack_20);
  pdb_1421a68f0(auStack_20,param_1,auStack_30);
  return;
}

