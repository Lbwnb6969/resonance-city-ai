// VA 0x142894770, PDB extent 439 bytes
// system_onboarding::hint_camera_progress::hint_camera_progress_reset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_progress.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_camera_progress::hint_camera_progress_reset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_camera_progress.rs
   Extent: 439 */

void pdb_142894770(longlong *param_1,longlong *param_2,char *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = *param_2;
  lVar2 = param_2[1];
  if (*(char *)(lVar7 + 0x108) == '\0') {
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar7 + 0x100) << 2 == lVar10) goto LAB_14289488e;
      lVar9 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xf8) + lVar10) * 0xa0;
      lVar10 = lVar10 + 4;
    } while (*(longlong *)(*(longlong *)(lVar2 + 0x100) + 0x58 + lVar9) == 0);
    lVar9 = *(longlong *)(lVar2 + 0x100) + lVar9;
    uVar8 = (ulonglong)*(uint *)(lVar9 + 0x94);
    if (*(ulonglong *)(lVar7 + 0x110) <
        *(ulonglong *)(*(longlong *)(lVar2 + 0x1a0) + 0x40 + uVar8 * 0x48)) {
      lVar2 = *(longlong *)(lVar2 + 0x1a0) + uVar8 * 0x48;
      uVar8 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8);
      if (uVar8 == 0) goto LAB_1428948a2;
      lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar8 * 0x30);
    }
    else {
LAB_1428948a2:
      lVar7 = 0;
    }
    pcVar5 = (char *)((ulonglong)~*(uint *)(*(longlong *)(lVar9 + 0x50) + 8) + lVar7);
    cVar6 = *pcVar5;
    if (*param_3 == cVar6) goto LAB_14289491e;
  }
  else {
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar7 + 0x100) << 2 == lVar10) {
LAB_14289488e:
        *param_3 = '\x1b';
        return;
      }
      uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xf8) + lVar10);
      lVar10 = lVar10 + 4;
    } while (*(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x10 + uVar8 * 0x48) == 0);
    lVar2 = *(longlong *)(lVar2 + 0x1a0) + uVar8 * 0x48;
    if ((*(ulonglong *)(lVar7 + 0x110) < *(ulonglong *)(lVar2 + 0x40)) &&
       (uVar8 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8),
       uVar8 != 0)) {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar8 * 0x30);
      cVar6 = *pcVar5;
      if (*param_3 == *pcVar5) goto LAB_14289491e;
    }
    else {
      pcVar5 = (char *)0x0;
      cVar6 = cRam0000000000000000;
      if (*param_3 == cRam0000000000000000) goto LAB_14289491e;
    }
  }
  if (cVar6 == '\f') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar7 = *param_1;
    puVar3 = (undefined4 *)param_1[2];
    *(undefined4 *)(lVar7 + 8) = 0;
    *puVar3 = uVar1;
    *(undefined4 *)(lVar7 + 0x20) = 0x42f00000;
  }
  else if (cVar6 == '\v') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar7 = *param_1;
    puVar3 = (undefined4 *)param_1[2];
    *(undefined4 *)(lVar7 + 4) = 0;
    *puVar3 = uVar1;
    *(undefined4 *)(lVar7 + 0x1c) = 0x3f99999a;
  }
  else if (cVar6 == '\n') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)param_1[2];
    *puVar3 = 0;
    *puVar4 = uVar1;
    puVar3[6] = 0x3fb33333;
  }
LAB_14289491e:
  *param_3 = *pcVar5;
  return;
}

