// VA 0x1400cb3d0, PDB extent 4 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::required_gpu_len
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::required_gpu_len
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 4 */

undefined4 pdb_1400cb3d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}

