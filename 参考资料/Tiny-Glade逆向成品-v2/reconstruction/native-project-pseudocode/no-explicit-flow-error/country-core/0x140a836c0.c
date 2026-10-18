// VA 0x140a836c0, PDB extent 193 bytes
// country_core::utils::dirty_tiles::DirtyTiles::cell_from_world_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::cell_from_world_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 193 */

uint * pdb_140a836c0(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = _DAT_142f3e5f8;
  uVar2 = _DAT_142e37994;
  fVar6 = (float)pub_142e32a50(param_2,_DAT_142f3e5f8,_DAT_142e37994);
  fVar7 = (float)pub_142e32a50(param_3,uVar3,uVar2);
  uVar4 = (uint)fVar6;
  if (_DAT_142e382cc < fVar6) {
    uVar4 = 0x7fffffff;
  }
  if (NAN(fVar6)) {
    uVar4 = 0;
  }
  uVar5 = (int)fVar7;
  if (_DAT_142e382cc < fVar7) {
    uVar5 = 0x7fffffff;
  }
  if (NAN(fVar7)) {
    uVar5 = 0;
  }
  bVar1 = (uVar5 | uVar4) < 0x40;
  if (bVar1) {
    param_1[1] = uVar4;
    param_1[2] = uVar5;
  }
  *param_1 = (uint)bVar1;
  return param_1;
}

