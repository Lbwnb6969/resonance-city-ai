// VA 0x1408469b0, PDB extent 582 bytes
// system_wall_constructor::utils::split_horizontally
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::split_horizontally
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/mod.rs
   Extent: 582 */

void pdb_1408469b0(float param_1,longlong param_2,float *param_3,int param_4,ulonglong *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  fVar19 = param_1 * _DAT_14300b538 + _DAT_142e37988;
  fVar14 = (float)pdb_140deec50(param_2);
  fVar15 = (float)pdb_140deec50(param_2);
  fVar23 = _DAT_142e36f28 - fVar19;
  fVar22 = fVar14 * fVar19 * _DAT_142e36f50;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar16 = _DAT_142e36f50 * fVar15 * fVar23;
  uVar17 = pdb_140deec10(param_2);
  uVar18 = pdb_140deec20(param_2);
  pdb_140deead0(&uStack_b8,uVar18,fVar22 + fVar4,uVar17,fVar14 * fVar19);
  uVar9 = uStack_ac;
  uVar8 = uStack_b0;
  uVar7 = uStack_b4;
  uVar6 = uStack_b8;
  fVar4 = *param_3;
  fVar14 = param_3[1];
  fVar20 = (float)*(undefined8 *)(param_3 + 2);
  fVar21 = (float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  fVar22 = fVar19 * fVar20 + fVar23 * fVar4;
  fVar19 = fVar19 * fVar21 + fVar23 * fVar14;
  uVar12 = *param_5;
  uVar11 = param_5[3];
  if (uVar11 == uVar12) {
    pdb_140848dc0(param_5);
    uVar12 = *param_5;
    uVar11 = param_5[3];
  }
  param_5[3] = uVar11 + 1;
  uVar13 = 0;
  if (uVar12 <= uVar11 + param_5[2]) {
    uVar13 = uVar12;
  }
  lVar10 = (uVar11 + param_5[2]) - uVar13;
  uVar12 = param_5[1];
  puVar1 = (undefined4 *)(uVar12 + lVar10 * 0x28);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  pfVar3 = (float *)(uVar12 + 0x10 + lVar10 * 0x28);
  *pfVar3 = fVar4;
  pfVar3[1] = fVar14;
  pfVar3[2] = fVar22;
  pfVar3[3] = fVar19;
  *(int *)(uVar12 + 0x20 + lVar10 * 0x28) = param_4;
  *(undefined2 *)(uVar12 + 0x24 + lVar10 * 0x28) = 0;
  pdb_140deead0(&uStack_b8,uVar18,fVar5 - fVar16,uVar17,fVar15 * fVar23);
  uVar12 = *param_5;
  uVar11 = param_5[3];
  if (uVar11 == uVar12) {
    pdb_140848dc0(param_5);
    uVar12 = *param_5;
    uVar11 = param_5[3];
  }
  param_5[3] = uVar11 + 1;
  uVar13 = 0;
  if (uVar12 <= uVar11 + param_5[2]) {
    uVar13 = uVar12;
  }
  lVar10 = (uVar11 + param_5[2]) - uVar13;
  uVar12 = param_5[1];
  puVar2 = (undefined8 *)(uVar12 + lVar10 * 0x28);
  *puVar2 = CONCAT44(uStack_b4,uStack_b8);
  puVar2[1] = CONCAT44(uStack_ac,uStack_b0);
  pfVar3 = (float *)(uVar12 + 0x10 + lVar10 * 0x28);
  *pfVar3 = fVar22;
  pfVar3[1] = fVar19;
  pfVar3[2] = fVar20;
  pfVar3[3] = fVar21;
  *(int *)(uVar12 + 0x20 + lVar10 * 0x28) = param_4 + 1;
  *(undefined2 *)(uVar12 + 0x24 + lVar10 * 0x28) = 0;
  return;
}

