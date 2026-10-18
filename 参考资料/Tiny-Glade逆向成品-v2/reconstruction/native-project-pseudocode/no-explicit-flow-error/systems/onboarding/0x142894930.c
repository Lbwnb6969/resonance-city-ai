// VA 0x142894930, PDB extent 762 bytes
// system_onboarding::hint_camera_progress::hint_camera_progress_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_progress.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_camera_progress::hint_camera_progress_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_progress.rs
   Extent: 762 */

void pdb_142894930(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  
  pfVar6 = (float *)*param_1;
  puVar7 = (undefined4 *)param_1[2];
  fVar1 = *pfVar6;
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *puVar7 = uVar4;
  pfVar6[3] = fVar1;
  fVar1 = pfVar6[1];
  *puVar7 = uVar4;
  pfVar6[4] = fVar1;
  fVar1 = pfVar6[2];
  *puVar7 = uVar4;
  pfVar6[5] = fVar1;
  puVar8 = (ulonglong *)*param_2;
  lVar9 = param_2[1];
  uVar10 = *puVar8;
  uVar17 = 0;
  uVar21 = uVar10 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar21 = uVar17;
  }
  uVar19 = uVar10 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar19 = uVar17;
  }
  piVar20 = (int *)(uVar21 * 0x10 + *(longlong *)(lVar9 + 8));
  uVar10 = *(ulonglong *)(lVar9 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar21) {
    piVar20 = (int *)0x8;
    uVar10 = uVar17;
  }
  piVar22 = (int *)(uVar19 * 0x10 + *(longlong *)(lVar9 + 0x28));
  uVar21 = *(ulonglong *)(lVar9 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar19) {
    piVar22 = (int *)0x8;
    uVar21 = uVar17;
  }
  *puVar8 = (*(longlong *)(lVar9 + 0x40) - uVar21) - uVar10;
  fVar1 = _DAT_142e36f28;
  lVar9 = *param_4;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar11 = *param_3;
  puVar12 = (undefined4 *)param_3[2];
  piVar16 = piVar20;
  piVar23 = piVar22;
  do {
    if ((piVar16 == (int *)0x0) || (piVar16 == piVar20 + uVar10 * 4)) {
      if ((piVar23 == (int *)0x0) || (piVar23 == piVar22 + uVar21 * 4)) {
        return;
      }
      piVar24 = piVar23 + 4;
      piVar18 = (int *)0x0;
      piVar16 = piVar23;
    }
    else {
      piVar18 = piVar16 + 4;
      piVar24 = piVar23;
    }
    *puVar8 = *puVar8 + 1;
    if (*piVar16 == 0) {
      fVar2 = *(float *)(lVar9 + 0x28);
      fVar3 = pfVar6[6];
      *puVar7 = uVar4;
      *pfVar6 = fVar2 / fVar3 + *pfVar6;
      if (pfVar6[3] <= fVar1 && fVar1 != pfVar6[3]) goto LAB_142894b12;
    }
    else if (*piVar16 == 1) {
      fVar2 = (float)piVar16[1];
      fVar3 = pfVar6[8];
      *puVar7 = uVar4;
      pfVar6[2] = fVar2 / fVar3 + pfVar6[2];
      if (pfVar6[3] <= fVar1 && fVar1 != pfVar6[3]) {
LAB_142894b12:
        if (fVar1 <= *pfVar6) {
          *puVar12 = uVar5;
          lVar13 = *(longlong *)(lVar11 + 0x30);
          uVar14 = *(undefined8 *)(lVar11 + 0x40);
          if (lVar13 == *(longlong *)(lVar11 + 0x20)) {
            pdb_142d7e980(lVar11 + 0x20);
          }
          lVar15 = *(longlong *)(lVar11 + 0x28);
          *(undefined8 *)(lVar15 + lVar13 * 0x10) = uVar14;
          *(undefined1 *)(lVar15 + 8 + lVar13 * 0x10) = 10;
          *(longlong *)(lVar11 + 0x30) = lVar13 + 1;
          *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
        }
      }
    }
    else {
      fVar2 = *(float *)(lVar9 + 0x28);
      fVar3 = pfVar6[7];
      *puVar7 = uVar4;
      pfVar6[1] = fVar2 / fVar3 + pfVar6[1];
      if (pfVar6[3] <= fVar1 && fVar1 != pfVar6[3]) goto LAB_142894b12;
    }
    if ((pfVar6[4] <= fVar1 && fVar1 != pfVar6[4]) && (fVar1 <= pfVar6[1])) {
      *puVar12 = uVar5;
      lVar13 = *(longlong *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar13 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e980(lVar11 + 0x20);
      }
      lVar15 = *(longlong *)(lVar11 + 0x28);
      *(undefined8 *)(lVar15 + lVar13 * 0x10) = uVar14;
      *(undefined1 *)(lVar15 + 8 + lVar13 * 0x10) = 0xb;
      *(longlong *)(lVar11 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    }
    piVar16 = piVar18;
    piVar23 = piVar24;
    if ((pfVar6[5] <= fVar1 && fVar1 != pfVar6[5]) && (fVar1 <= pfVar6[2])) {
      *puVar12 = uVar5;
      lVar13 = *(longlong *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar13 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e980(lVar11 + 0x20);
      }
      lVar15 = *(longlong *)(lVar11 + 0x28);
      *(undefined8 *)(lVar15 + lVar13 * 0x10) = uVar14;
      *(undefined1 *)(lVar15 + 8 + lVar13 * 0x10) = 0xc;
      *(longlong *)(lVar11 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    }
  } while( true );
}

