// VA 0x1428943d0, PDB extent 928 bytes
// system_onboarding::tutorial_completion::tutorial_completion
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/tutorial_completion.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::tutorial_completion::tutorial_completion
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/tutorial_completion.rs
   Extent: 928 */

void pdb_1428943d0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  puVar3 = (ulonglong *)*param_1;
  lVar4 = param_1[1];
  uVar5 = *puVar3;
  uVar15 = 0;
  uVar12 = uVar5 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar12 = uVar15;
  }
  uVar16 = uVar5 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar16 = uVar15;
  }
  lVar10 = uVar12 * 0x10 + *(longlong *)(lVar4 + 8);
  uVar5 = *(ulonglong *)(lVar4 + 0x10) - uVar12;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar12) {
    lVar10 = 8;
    uVar5 = uVar15;
  }
  lVar13 = uVar16 * 0x10 + *(longlong *)(lVar4 + 0x28);
  uVar12 = *(ulonglong *)(lVar4 + 0x30) - uVar16;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar16) {
    lVar13 = 8;
    uVar12 = uVar15;
  }
  *puVar3 = (*(longlong *)(lVar4 + 0x40) - uVar12) - uVar5;
  lVar14 = uVar5 * 0x10 + lVar10;
  lVar17 = uVar12 * 0x10 + lVar13;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar4 = *param_3;
  puVar6 = (undefined4 *)param_3[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar7 = *param_2;
  puVar8 = (undefined4 *)param_2[2];
  do {
    if ((lVar10 == 0) || (lVar10 == lVar14)) {
      if ((lVar13 == 0) || (lVar13 == lVar17)) {
        return;
      }
      lVar10 = 0;
      lVar11 = lVar13;
      lVar13 = lVar13 + 0x10;
    }
    else {
      lVar11 = lVar10;
      lVar10 = lVar10 + 0x10;
    }
    *puVar3 = *puVar3 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(lVar11 + 8)) {
    case 0:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x404) = 1;
      break;
    case 1:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x405) = 1;
      break;
    case 2:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40e) = 1;
      break;
    case 3:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40c) = 1;
      break;
    case 4:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40a) = 1;
      break;
    case 5:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40b) = 1;
      break;
    case 6:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x409) = 1;
      break;
    case 7:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x410) = 1;
      break;
    case 8:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40d) = 1;
      break;
    case 9:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x411) = 1;
      break;
    case 10:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x406) = 1;
      break;
    case 0xb:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x407) = 1;
      break;
    case 0xc:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x408) = 1;
      break;
    case 0xd:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x412) = 1;
      break;
    case 0xe:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x413) = 1;
      break;
    case 0xf:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x414) = 1;
      break;
    case 0x10:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x415) = 1;
      break;
    case 0x11:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x416) = 1;
      break;
    case 0x14:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x417) = 1;
      break;
    case 0x17:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x40f) = 1;
      break;
    case 0x18:
      *puVar6 = uVar1;
      *(undefined1 *)(lVar4 + 0x418) = 1;
    }
    *puVar8 = uVar2;
    lVar11 = *(longlong *)(lVar7 + 0x30);
    uVar9 = *(undefined8 *)(lVar7 + 0x40);
    if (lVar11 == *(longlong *)(lVar7 + 0x20)) {
      pdb_142d7e8a0(lVar7 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + lVar11 * 8) = uVar9;
    *(longlong *)(lVar7 + 0x30) = lVar11 + 1;
    *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
  } while( true );
}

