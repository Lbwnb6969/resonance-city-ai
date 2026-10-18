// VA 0x140ae3040, PDB extent 19 bytes
// country_core::resources::history::is_stairs_history_diff_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::is_stairs_history_diff_empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 19 */

bool pdb_140ae3040(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return false;
  }
  return *(longlong *)(param_1 + 0x48) == 0;
}

