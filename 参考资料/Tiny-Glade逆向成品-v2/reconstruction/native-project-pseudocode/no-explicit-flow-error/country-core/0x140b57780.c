// VA 0x140b57780, PDB extent 255 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 255 */

undefined8 pdb_140b57780(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_1 + 0x54);
  fVar10 = _DAT_142e36f50 * fVar9;
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x4c);
  fVar8 = (float)pub_142e32a40((*(float *)(param_1 + 0x50) * _DAT_142e36f50 + param_2) /
                               (*(float *)(param_1 + 0x50) / (float)iVar1));
  fVar3 = _DAT_142e382cc;
  iVar7 = (int)fVar8;
  if (_DAT_142e382cc < fVar8) {
    iVar7 = 0x7fffffff;
  }
  if (NAN(fVar8)) {
    iVar7 = 0;
  }
  fVar9 = (float)pub_142e32a40((fVar10 + param_3) / (fVar9 / (float)iVar2));
  iVar5 = (int)fVar9;
  if (fVar3 < fVar9) {
    iVar5 = 0x7fffffff;
  }
  if (NAN(fVar9)) {
    iVar5 = 0;
  }
  uVar4 = 8;
  if ((((-1 < iVar7) && (iVar5 < iVar2)) && (iVar7 < iVar1)) &&
     ((-1 < iVar5 &&
      (uVar6 = (ulonglong)(iVar5 * iVar1 + iVar7), uVar6 < *(ulonglong *)(param_1 + 0x10))))) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + uVar6 * 0x30);
  }
  return uVar4;
}

