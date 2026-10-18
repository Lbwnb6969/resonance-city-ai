// VA 0x140a3d910, PDB extent 7 bytes
// country_core::resources::session::GladeType::is_winter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::GladeType::is_winter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
   Extent: 7 */

bool pdb_140a3d910(char *param_1)

{
  return *param_1 == '\x04';
}

