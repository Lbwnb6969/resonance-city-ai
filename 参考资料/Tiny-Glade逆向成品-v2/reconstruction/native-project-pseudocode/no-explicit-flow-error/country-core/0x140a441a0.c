// VA 0x140a441a0, PDB extent 7 bytes
// country_core::resources::mod_status::ModStatus::set_package_modified
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mod_status.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::mod_status::ModStatus::set_package_modified
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mod_status.rs
   Extent: 7 */

void pdb_140a441a0(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(*param_1 + 0x10) = param_2;
  return;
}

