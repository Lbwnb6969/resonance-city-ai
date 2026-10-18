// VA 0x140b02dd0, PDB extent 76 bytes
// country_core::systems::render_loop::draw_passes::transparency_pass::post_taa_transparency_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::transparency_pass::post_taa_transparency_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
   Extent: 76 */

void pdb_140b02dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uStack_28;
  undefined4 auStack_20 [2];
  undefined8 uStack_18;
  
  if (*(longlong *)(param_4 + 0x1c0) != 0) {
    auStack_20[0] = 0;
    uStack_28 = param_2;
    uStack_18 = param_3;
    pdb_14174d480(param_1,&UNK_14305308a,0x15,auStack_20,param_4,&uStack_28);
  }
  return;
}

