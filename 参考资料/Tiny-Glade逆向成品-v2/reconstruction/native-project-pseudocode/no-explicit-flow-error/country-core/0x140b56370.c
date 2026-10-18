// VA 0x140b56370, PDB extent 98 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSegment::terrain_height_closest_to_ws_pos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSegment::terrain_height_closest_to_ws_pos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 98 */

undefined8 pdb_140b56370(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)*param_1;
  fVar1 = (float)((ulonglong)*param_1 >> 0x20);
  fVar3 = (float)param_1[1] - fVar5;
  fVar4 = (float)((ulonglong)param_1[1] >> 0x20) - fVar1;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar2 <= _DAT_143006dc0) {
    fVar2 = _DAT_143006dc0;
  }
  fVar2 = ((param_3 - fVar1) * fVar4 + (param_2 - fVar5) * fVar3) / fVar2;
  fVar5 = 0.0;
  if (0.0 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar2 = _DAT_142e36f28;
  if (fVar5 <= _DAT_142e36f28) {
    fVar2 = fVar5;
  }
  fVar5 = fVar2 * (float)((ulonglong)param_1[3] >> 0x20);
  return CONCAT44(fVar5,fVar5 + (_DAT_142e36f28 - fVar2) * (float)param_1[3]);
}

