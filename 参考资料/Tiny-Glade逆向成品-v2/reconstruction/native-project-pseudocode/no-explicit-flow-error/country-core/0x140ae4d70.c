// VA 0x140ae4d70, PDB extent 16 bytes
// country_core::resources::history::History::iter_resolved_snapshots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::iter_resolved_snapshots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 16 */

undefined8 pdb_140ae4d70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

