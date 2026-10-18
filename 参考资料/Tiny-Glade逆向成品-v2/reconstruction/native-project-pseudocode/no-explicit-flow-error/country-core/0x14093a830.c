// VA 0x14093a830, PDB extent 12 bytes
// country_core::systems::render_loop::vermeer::VermeerState::should_freeze_camera
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::VermeerState::should_freeze_camera
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 12 */

byte pdb_14093a830(longlong param_1)

{
  return *(short *)(param_1 + 0x18) != 2 & *(byte *)(param_1 + 0x1f);
}

