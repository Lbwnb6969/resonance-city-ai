// VA 0x14093a8d0, PDB extent 9 bytes
// country_core::systems::render_loop::vermeer::VermeerState::is_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::VermeerState::is_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 9 */

bool pdb_14093a8d0(longlong param_1)

{
  return *(short *)(param_1 + 0x18) != 2;
}

