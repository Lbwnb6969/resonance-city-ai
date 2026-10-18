// VA 0x140a937c0, PDB extent 7 bytes
// country_core::resources::session::GladeType::is_olden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::GladeType::is_olden
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 7 */

bool pdb_140a937c0(char *param_1)

{
  return *param_1 == '\x01';
}

