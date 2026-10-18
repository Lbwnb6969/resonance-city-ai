// VA 0x140ae3060, PDB extent 9 bytes
// country_core::resources::history::is_decorator_history_diff_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::is_decorator_history_diff_empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 9 */

bool pdb_140ae3060(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) == 0;
}

