// VA 0x140a21340, PDB extent 9 bytes
// country_core::meta_commander::MetaCommander::is_profiling
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::MetaCommander::is_profiling
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 9 */

bool pdb_140a21340(longlong param_1)

{
  return *(longlong *)(param_1 + 0x38) != 0;
}

