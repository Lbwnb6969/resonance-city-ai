// VA 0x140b57880, PDB extent 19 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::bounds_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::bounds_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 19 */

float * pdb_140b57880(float *param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  fVar3 = (float)((ulonglong)uVar1 >> 0x20) * _UNK_143057f34;
  fVar4 = (float)uVar2 * _UNK_143057f38;
  fVar5 = (float)((ulonglong)uVar2 >> 0x20) * _UNK_143057f3c;
  *param_1 = (float)uVar1 * _DAT_143057f30;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  return param_1;
}

