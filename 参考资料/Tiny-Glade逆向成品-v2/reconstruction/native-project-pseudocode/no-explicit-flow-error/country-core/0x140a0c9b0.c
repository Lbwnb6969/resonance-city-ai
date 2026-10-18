// VA 0x140a0c9b0, PDB extent 9 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::pending_upload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::pending_upload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 9 */

undefined8 pdb_140a0c9b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

