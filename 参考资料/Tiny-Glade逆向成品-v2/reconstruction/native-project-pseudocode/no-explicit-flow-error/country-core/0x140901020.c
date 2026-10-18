// VA 0x140901020, PDB extent 7 bytes
// country_core::resources::session::GladeType::is_autumn
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::GladeType::is_autumn
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 7 */

bool pdb_140901020(char *param_1)

{
  return *param_1 == '\x03';
}

