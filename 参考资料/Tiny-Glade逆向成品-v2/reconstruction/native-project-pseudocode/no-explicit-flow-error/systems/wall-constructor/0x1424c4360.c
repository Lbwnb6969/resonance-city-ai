// VA 0x1424c4360, PDB extent 497 bytes
// system_wall_constructor::construct_lintels::place_support_beams::SupportBeamGrower::propose
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_lintels::place_support_beams::SupportBeamGrower::propose
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
   Extent: 497 */

ulonglong *
pdb_1424c4360(ulonglong *param_1,byte *param_2,ulonglong param_3,longlong param_4,ulonglong param_5,
             longlong param_6,ulonglong param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = 2;
  if (param_2[0x28] == 0) {
    if (param_5 <= param_3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_3,param_5,&UNK_143510ac8);
    }
    fVar1 = *(float *)(param_4 + 8 + param_3 * 0xc);
    fVar8 = fVar1 - *(float *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_4 + param_3 * 0xc);
    fVar9 = (float)uVar3 - (float)*(undefined8 *)(param_2 + 0x18);
    fVar11 = (float)((ulonglong)uVar3 >> 0x20) -
             (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    fVar7 = _DAT_142e36f28 / SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
    fVar9 = fVar7 * fVar9;
    fVar11 = fVar7 * fVar11;
    fVar7 = fVar7 * fVar8;
    fVar8 = fVar11;
    fVar13 = fVar9;
    fVar10 = fVar7;
    if ((*param_2 & 1) != 0) {
      fVar8 = *(float *)(param_2 + 8);
      fVar13 = *(float *)(param_2 + 4);
      fVar10 = *(float *)(param_2 + 0xc);
    }
    fVar12 = fVar6 + *(float *)(param_2 + 0x24);
    if (fVar12 <= _DAT_14330b2b0) {
      if (param_7 <= param_3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_3,param_7,&UNK_143510ae0);
      }
      uVar2 = *(undefined4 *)(param_4 + param_3 * 0xc);
      uVar4 = *(undefined4 *)(param_4 + 4 + param_3 * 0xc);
      fVar14 = 0.0;
      if (_DAT_142e36f28 <= *(float *)(param_2 + 0x24)) {
        fVar14 = fVar12 * (SQRT((fVar13 - fVar9) * (fVar13 - fVar9) +
                                (fVar8 - fVar11) * (fVar8 - fVar11) +
                                (fVar10 - fVar7) * (fVar10 - fVar7)) + _DAT_142e36f50);
      }
      uVar5 = (*(byte *)(param_6 + param_3) & 0xf) != 0;
      *param_1 = param_3;
      *(float *)(param_1 + 1) = fVar6;
      *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar11,fVar9);
      *(float *)((longlong)param_1 + 0x14) = fVar7;
      *(float *)(param_1 + 3) = fVar14;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(float *)((longlong)param_1 + 0x24) = fVar1;
    }
  }
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}

