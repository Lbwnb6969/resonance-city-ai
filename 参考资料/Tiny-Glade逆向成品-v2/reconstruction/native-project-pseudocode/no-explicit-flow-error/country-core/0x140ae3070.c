// VA 0x140ae3070, PDB extent 10 bytes
// country_core::resources::history::History::is_recording
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::is_recording
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 10 */

bool pdb_140ae3070(longlong param_1)

{
  return !SBORROW8(0,*(longlong *)(param_1 + 0x30));
}

