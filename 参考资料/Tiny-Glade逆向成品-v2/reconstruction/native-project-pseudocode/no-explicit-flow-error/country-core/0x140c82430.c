// VA 0x140c82430, PDB extent 373 bytes
// country_core::systems::history::replay_raster::RasterReplayCmd::backward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::RasterReplayCmd::backward
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 373 */

undefined8 *
pdb_140c82430(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  lVar9 = uVar5 - 1;
  if (lVar9 == 0) {
    fVar11 = 0.0;
  }
  else {
    uVar10 = (uVar5 - 1) + (ulonglong)(uVar5 == 0);
    uVar1 = uVar5 - 2;
    uVar7 = uVar1;
    if (uVar10 < uVar1) {
      uVar7 = uVar10;
    }
    if (uVar5 == uVar7) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,uVar5,&UNK_1430645f0);
    }
    if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar7 + 1,uVar5,&UNK_143064608);
    }
    lVar6 = *(longlong *)(param_2 + 0x18);
    pfVar8 = (float *)(lVar6 + 0x24);
    fVar11 = 0.0;
    fVar13 = *(float *)(lVar6 + 0x18);
    fVar12 = *(float *)(lVar6 + 0x10);
    fVar14 = *(float *)(lVar6 + 0x14);
    do {
      pfVar2 = pfVar8 + -2;
      pfVar3 = pfVar8 + -1;
      fVar4 = *pfVar8;
      fVar14 = fVar14 - *pfVar3;
      fVar12 = fVar12 - *pfVar2;
      fVar13 = fVar13 - fVar4;
      fVar11 = fVar11 + SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12);
      pfVar8 = pfVar8 + 3;
      lVar9 = lVar9 + -1;
      fVar13 = fVar4;
      fVar12 = *pfVar2;
      fVar14 = *pfVar3;
    } while (lVar9 != 0);
  }
  fVar11 = (fVar11 / _DAT_142e37834) * _DAT_142e37938;
  if (fVar11 <= _DAT_142e3798c) {
    fVar11 = _DAT_142e3798c;
  }
  param_1[1] = param_2;
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(float *)((longlong)param_1 + 0x14) = fVar11;
  *(undefined1 *)((longlong)param_1 + 0x1a) = param_4;
  return param_1;
}

