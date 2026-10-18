// VA 0x1411630c0, PDB extent 10 bytes
// country_core::resources::critters::BirdSpotManager::gen_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::critters::BirdSpotManager::gen_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
   Extent: 10 */

void pdb_1411630c0(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

