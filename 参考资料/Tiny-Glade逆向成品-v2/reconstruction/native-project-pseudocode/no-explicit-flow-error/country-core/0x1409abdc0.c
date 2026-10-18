// VA 0x1409abdc0, PDB extent 81 bytes
// country_core::systems::render_loop::draw_passes::grass_velocity_reconstruct::reconstruct_grass_velocity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/grass_velocity_reconstruct.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::grass_velocity_reconstruct::reconstruct_grass_velocity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/grass_velocity_reconstruct.rs
   Extent: 81 */

void pdb_1409abdc0(undefined8 param_1,longlong param_2)

{
  undefined4 auStack_38 [2];
  longlong lStack_30;
  undefined8 uStack_18;
  longlong lStack_10;
  undefined4 uStack_8;
  
  lStack_30 = param_2 + 0x30;
  lStack_10 = param_2 + 0x18;
  auStack_38[0] = 0;
  uStack_18 = 1;
  uStack_8 = 0;
  pdb_14175a4f0(param_1,&UNK_143029385,0x1a,auStack_38,lStack_10);
  return;
}

