// VA 0x140a6a710, PDB extent 4 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::gpu_capacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::gpu_capacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 4 */

undefined4 pdb_140a6a710(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}

