// VA 0x140b113c0, PDB extent 91 bytes
// country_core::systems::render_loop::draw_passes::ui_pass::loading_screen_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::ui_pass::loading_screen_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/ui_pass.rs
   Extent: 91 */

void pdb_140b113c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined1 *puStack_28;
  undefined4 auStack_20 [2];
  undefined8 uStack_18;
  
  uStack_41 = 0;
  auStack_20[0] = 0;
  puStack_30 = &uStack_40;
  puStack_28 = &uStack_41;
  uStack_40 = param_2;
  uStack_38 = param_4;
  uStack_18 = param_3;
  pdb_141755b60(param_1,&UNK_143054ec0,0xe,auStack_20,&uStack_38);
  return;
}

