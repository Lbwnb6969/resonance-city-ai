// VA 0x140b578a0, PDB extent 29 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::cell_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::cell_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 29 */

float pdb_140b578a0(longlong param_1)

{
  return *(float *)(param_1 + 0x50) / (float)*(int *)(param_1 + 0x48);
}

