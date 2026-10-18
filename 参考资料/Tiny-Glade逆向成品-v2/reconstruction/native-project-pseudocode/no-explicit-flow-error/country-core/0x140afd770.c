// VA 0x140afd770, PDB extent 112 bytes
// country_core::systems::render_loop::draw_passes::final_post::resolve_to_swapchain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/final_post.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::final_post::resolve_to_swapchain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/final_post.rs
   Extent: 112 */

void pdb_140afd770(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 *puStack_38;
  longlong lStack_30;
  undefined1 *puStack_28;
  undefined4 auStack_20 [2];
  longlong lStack_18;
  
  uStack_45 = *(undefined1 *)(param_2 + 0x12);
  uStack_44 = *(undefined4 *)(param_3 + 8);
  auStack_20[0] = 2;
  puStack_40 = &uStack_45;
  puStack_38 = &uStack_44;
  puStack_28 = &uStack_46;
  uStack_46 = param_4;
  lStack_30 = param_2;
  lStack_18 = param_3;
  pdb_141762550(param_1,&UNK_143052262,0x14,auStack_20,&puStack_40);
  return;
}

