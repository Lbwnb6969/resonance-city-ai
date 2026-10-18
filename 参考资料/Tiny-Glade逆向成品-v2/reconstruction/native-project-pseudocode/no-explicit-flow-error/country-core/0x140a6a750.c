// VA 0x140a6a750, PDB extent 43 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::take_pending_upload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::take_pending_upload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 43 */

void pdb_140a6a750(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 8;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}

