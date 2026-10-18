// VA 0x140c1f040, PDB extent 268 bytes
// country_core::resources::time_of_day::snapshot_lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::time_of_day::snapshot_lerp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
   Extent: 268 */

void pdb_140c1f040(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = (float)pdb_140de8220(param_3,param_4,param_2);
  fVar15 = 0.0;
  if (0.0 <= fVar13) {
    fVar15 = fVar13;
  }
  fVar13 = _DAT_142e36f28;
  if (fVar15 <= _DAT_142e36f28) {
    fVar13 = fVar15;
  }
  if ((uint)ABS(fVar13) < 0x7f800000) {
    pdb_140bb22f0(param_1,param_5,param_6,fVar13);
    fVar2 = *(float *)((longlong)param_5 + 0x34);
    fVar4 = *(float *)(param_5 + 7);
    fVar5 = *(float *)((longlong)param_5 + 0x3c);
    fVar14 = *(float *)(param_6 + 0x34);
    fVar16 = *(float *)(param_6 + 0x38);
    fVar6 = *(float *)(param_6 + 0x3c);
    fVar15 = *(float *)(param_6 + 0x48);
    fVar1 = *(float *)(param_6 + 0x4c);
    *(float *)(param_1 + 6) =
         fVar13 * (*(float *)(param_6 + 0x30) - *(float *)(param_5 + 6)) + *(float *)(param_5 + 6);
    *(float *)((longlong)param_1 + 0x34) = fVar13 * (fVar14 - fVar2) + fVar2;
    *(float *)(param_1 + 7) = fVar13 * (fVar16 - fVar4) + fVar4;
    *(float *)((longlong)param_1 + 0x3c) = fVar13 * (fVar6 - fVar5) + fVar5;
    fVar4 = *(float *)((longlong)param_5 + 0x44);
    fVar5 = *(float *)(param_6 + 0x44);
    uVar3 = param_5[9];
    fVar16 = _UNK_142e4e65c * (float)((ulonglong)uVar3 >> 0x20);
    fVar2 = *(float *)((longlong)param_5 + 0x4c);
    fVar14 = _DAT_14300c770 - fVar13;
    *(float *)(param_1 + 8) = fVar14 * *(float *)(param_5 + 8) + *(float *)(param_6 + 0x40) * fVar13
    ;
    *(float *)((longlong)param_1 + 0x44) = fVar14 * fVar4 + fVar5 * fVar13;
    *(float *)(param_1 + 9) = (float)uVar3 * fVar14 + fVar15 * fVar13;
    *(float *)((longlong)param_1 + 0x4c) = fVar13 * (fVar1 - fVar2) + fVar16;
  }
  else {
    uVar3 = param_5[9];
    param_1[8] = param_5[8];
    param_1[9] = uVar3;
    uVar3 = *param_5;
    uVar7 = param_5[1];
    uVar8 = param_5[2];
    uVar9 = param_5[3];
    uVar10 = param_5[4];
    uVar11 = param_5[5];
    uVar12 = param_5[7];
    param_1[6] = param_5[6];
    param_1[7] = uVar12;
    param_1[4] = uVar10;
    param_1[5] = uVar11;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    *param_1 = uVar3;
    param_1[1] = uVar7;
  }
  return;
}

