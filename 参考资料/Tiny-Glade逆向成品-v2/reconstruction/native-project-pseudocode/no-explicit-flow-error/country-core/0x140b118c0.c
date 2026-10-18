// VA 0x140b118c0, PDB extent 66 bytes
// country_core::systems::render_loop::draw_passes::ui_pass::ui_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::render_loop::draw_passes::ui_pass::ui_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
   Extent: 66 */

void pdb_140b118c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined4 auStack_20 [2];
  undefined8 uStack_18;
  
  auStack_20[0] = 0;
  uStack_28 = param_2;
  uStack_18 = param_3;
  pdb_14174eaa0(param_1,&UNK_143054f78,2,auStack_20,param_4,&uStack_28);
  return;
}

