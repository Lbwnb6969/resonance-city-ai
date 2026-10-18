// VA 0x140ae2d10, PDB extent 5 bytes
// country_core::systems::mod_key::Modifiers::snapping_toggle_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_key.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_key::Modifiers::snapping_toggle_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_key.rs
   Extent: 5 */

undefined1 pdb_140ae2d10(longlong param_1)

{
  return *(undefined1 *)(param_1 + 2);
}

