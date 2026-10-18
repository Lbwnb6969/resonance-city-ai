// VA 0x140b575c0, PDB extent 166 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::world_space_to_grid_coord_unclamped
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::world_space_to_grid_coord_unclamped
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 166 */

int pdb_140b575c0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x54);
  fVar5 = _DAT_142e36f50 * fVar1;
  iVar2 = *(int *)(param_1 + 0x4c);
  fVar4 = (float)pub_142e32a40((*(float *)(param_1 + 0x50) * _DAT_142e36f50 + param_2) /
                               (*(float *)(param_1 + 0x50) / (float)*(int *)(param_1 + 0x48)));
  iVar3 = (int)fVar4;
  if (_DAT_142e382cc < fVar4) {
    iVar3 = 0x7fffffff;
  }
  if (NAN(fVar4)) {
    iVar3 = 0;
  }
  pub_142e32a40((fVar5 + param_3) / (fVar1 / (float)iVar2));
  return iVar3;
}

