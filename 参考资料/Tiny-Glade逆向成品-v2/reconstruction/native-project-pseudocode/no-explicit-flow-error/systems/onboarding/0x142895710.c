// VA 0x142895710, PDB extent 396 bytes
// system_onboarding::hint_camera_controls::hint_camera_enable_condition
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_camera_controls::hint_camera_enable_condition
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_controls.rs
   Extent: 396 */

void pdb_142895710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = uVar1;
  piVar3 = (int *)*param_1;
  if (*piVar3 != 0) {
    return;
  }
  puVar4 = (ulonglong *)*param_2;
  lVar11 = param_2[1];
  uVar9 = *puVar4;
  uVar10 = 0;
  uVar7 = uVar9 - *(ulonglong *)(lVar11 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar11 + 0x18)) {
    uVar7 = uVar10;
  }
  uVar12 = uVar9 - *(ulonglong *)(lVar11 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar11 + 0x38)) {
    uVar12 = uVar10;
  }
  uVar9 = *(ulonglong *)(lVar11 + 0x30);
  uVar8 = uVar9 - uVar12;
  if (uVar12 > uVar9) {
    uVar8 = uVar10;
  }
  uVar5 = *(ulonglong *)(lVar11 + 0x10);
  uVar13 = uVar5 - uVar7;
  if (uVar7 > uVar5) {
    uVar13 = uVar10;
  }
  uVar10 = *(ulonglong *)(lVar11 + 0x40);
  *puVar4 = uVar10 - (uVar13 + uVar8);
  if (uVar7 <= uVar5 && uVar5 - uVar7 != 0 || uVar12 <= uVar9 && uVar9 - uVar12 != 0) {
    *puVar4 = uVar10;
    piVar3[2] = 0;
    lVar11 = *param_4;
LAB_1428957b6:
    piVar3[1] = (int)(*(float *)(lVar11 + 0x28) + (float)piVar3[1]);
  }
  else {
    lVar11 = *param_4;
    fVar16 = *(float *)(lVar11 + 0x28) + (float)piVar3[2];
    piVar3[2] = (int)fVar16;
    if (fVar16 < _DAT_142e37878) goto LAB_1428957b6;
  }
  lVar6 = param_3[1];
  uVar9 = *(ulonglong *)*param_3;
  uVar10 = 0;
  uVar7 = uVar9 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar7 = uVar10;
  }
  uVar12 = uVar9 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar12 = uVar10;
  }
  bVar14 = *(ulonglong *)(lVar6 + 0x30) < uVar12;
  uVar12 = *(ulonglong *)(lVar6 + 0x30) - uVar12;
  uVar9 = uVar12;
  if (bVar14) {
    uVar9 = uVar10;
  }
  bVar15 = *(ulonglong *)(lVar6 + 0x10) < uVar7;
  uVar7 = *(ulonglong *)(lVar6 + 0x10) - uVar7;
  uVar8 = uVar7;
  if (bVar15) {
    uVar8 = uVar10;
  }
  uVar9 = uVar8 + uVar9;
  if (!bVar15 && uVar7 != 0 || !bVar14 && uVar12 != 0) {
    uVar9 = uVar10;
  }
  *(ulonglong *)*param_3 = *(longlong *)(lVar6 + 0x40) - uVar9;
  fVar16 = _DAT_142e37838;
  if (!bVar15 && uVar7 != 0 || !bVar14 && uVar12 != 0) {
    piVar3[4] = 0;
    fVar17 = *(float *)(lVar11 + 0x28) + (float)piVar3[3];
    piVar3[3] = (int)fVar17;
    bVar14 = false;
    fVar16 = (float)piVar3[1];
    if (_DAT_142e3b1d8 < fVar17) goto LAB_142895888;
  }
  else {
    fVar17 = *(float *)(lVar11 + 0x28) + (float)piVar3[4];
    piVar3[4] = (int)fVar17;
    bVar14 = fVar16 < fVar17;
    fVar16 = (float)piVar3[1];
    if (_DAT_142e3b1d8 < (float)piVar3[3]) {
LAB_142895888:
      if ((bool)(~bVar14 & fVar16 <= _DAT_142e3a74c)) {
        return;
      }
      goto LAB_14289584f;
    }
  }
  if (fVar16 <= _DAT_142e3a74c) {
    return;
  }
LAB_14289584f:
  *puVar2 = uVar1;
  *piVar3 = 1;
  return;
}

