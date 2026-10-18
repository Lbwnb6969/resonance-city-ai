// VA 0x140c01460, PDB extent 8 bytes
// country_core::resources::walls::WallId::is_valid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::WallId::is_valid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/mod.rs
   Extent: 8 */

bool pdb_140c01460(longlong *param_1)

{
  return *param_1 != 0;
}

