// VA 0x140a2fb30, PDB extent 13 bytes
// country_core::resources::tree_storage::TreeStorage::next_index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::tree_storage::TreeStorage::next_index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/tree_storage.rs
   Extent: 13 */

void pdb_140a2fb30(longlong param_1)

{
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
  return;
}

