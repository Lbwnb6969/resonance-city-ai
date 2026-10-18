// VA 0x142892fe0, PDB extent 719 bytes
// system_onboarding::hint_focused_edit::hint_focused_edit_condition
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_focused_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_focused_edit::hint_focused_edit_condition
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_focused_edit.rs
   Extent: 719 */

void pdb_142892fe0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  
  if (*(char *)(*param_1 + 0x405) != '\0') {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)(*param_2 + 8) = 1;
    return;
  }
  lVar4 = param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  pcVar10 = (char *)0x0;
  pcVar5 = (char *)(uVar6 - *(ulonglong *)(lVar4 + 0x18));
  if (uVar6 < *(ulonglong *)(lVar4 + 0x18)) {
    pcVar5 = pcVar10;
  }
  lVar8 = (longlong)pcVar5 * 0x38 + *(longlong *)(lVar4 + 8);
  pcVar1 = *(char **)(lVar4 + 0x10);
  pcVar14 = pcVar1 + -(longlong)pcVar5;
  if (pcVar1 < pcVar5) {
    pcVar14 = pcVar10;
  }
  if (pcVar1 < pcVar5) {
    lVar8 = 8;
  }
  pcVar9 = (char *)(lVar8 + -0x38 + (longlong)pcVar14 * 0x38);
  if (pcVar1 <= pcVar5) {
    pcVar9 = pcVar10;
  }
  pcVar2 = *(char **)(lVar4 + 0x30);
  pcVar11 = (char *)(uVar6 - *(ulonglong *)(lVar4 + 0x38));
  if (uVar6 < *(ulonglong *)(lVar4 + 0x38)) {
    pcVar11 = pcVar10;
  }
  lVar8 = (longlong)pcVar11 * 0x38 + *(longlong *)(lVar4 + 0x28);
  pcVar15 = pcVar2 + -(longlong)pcVar11;
  if (pcVar2 < pcVar11) {
    pcVar15 = pcVar10;
  }
  if (pcVar2 < pcVar11) {
    lVar8 = 8;
  }
  pcVar12 = (char *)(lVar8 + -0x38 + (longlong)pcVar15 * 0x38);
  if (pcVar2 <= pcVar11) {
    pcVar12 = pcVar9;
  }
  pcVar14 = pcVar15 + (longlong)pcVar14;
  if (pcVar1 > pcVar5 || pcVar2 > pcVar11) {
    pcVar14 = pcVar10;
  }
  *(ulonglong *)*param_3 = *(longlong *)(lVar4 + 0x40) - (longlong)pcVar14;
  if (pcVar1 <= pcVar5 && pcVar2 <= pcVar11) {
    return;
  }
  if (*pcVar12 == '\0') {
    lVar4 = *param_2;
    if (*(int *)(pcVar12 + 8) - 1U < 2) {
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined1 *)(lVar4 + 8) = 1;
    }
  }
  else {
    lVar4 = *param_2;
  }
  if (*(char *)(lVar4 + 8) == '\0') {
    return;
  }
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar4 = *param_6;
  lVar8 = *(longlong *)(lVar4 + 0x30);
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  if (lVar8 == *(longlong *)(lVar4 + 0x20)) {
    pdb_142d7e980(lVar4 + 0x20);
  }
  lVar13 = *(longlong *)(lVar4 + 0x28);
  *(undefined8 *)(lVar13 + lVar8 * 0x10) = uVar3;
  *(undefined1 *)(lVar13 + 8 + lVar8 * 0x10) = 1;
  *(longlong *)(lVar4 + 0x30) = lVar8 + 1;
  *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  lVar4 = *param_5;
  lVar8 = param_5[1];
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar4 + 0x100) << 2 == lVar13) {
        return;
      }
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0xf8) + lVar13);
      lVar13 = lVar13 + 4;
    } while (*(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + uVar6 * 0x48) == 0);
    lVar8 = *(longlong *)(lVar8 + 0x1a0) + uVar6 * 0x48;
    if ((*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar8 + 0x40)) &&
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8),
       uVar6 != 0)) {
      pcVar5 = *(char **)(*(longlong *)(lVar8 + 0x18) + 0x10 + ~uVar6 * 0x30);
    }
    else {
      pcVar5 = (char *)0x0;
    }
    goto LAB_142893254;
  }
  lVar13 = 0;
  do {
    if (*(longlong *)(lVar4 + 0x100) << 2 == lVar13) {
      return;
    }
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0xf8) + lVar13) * 0xa0;
    lVar13 = lVar13 + 4;
  } while (*(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + lVar7) == 0);
  lVar7 = *(longlong *)(lVar8 + 0x100) + lVar7;
  uVar6 = (ulonglong)*(uint *)(lVar7 + 0x94);
  if (*(ulonglong *)(lVar4 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar8 + 0x1a0) + 0x40 + uVar6 * 0x48)) {
    lVar8 = *(longlong *)(lVar8 + 0x1a0) + uVar6 * 0x48;
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
    if (uVar6 == 0) goto LAB_142893246;
    lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x10 + ~uVar6 * 0x30);
  }
  else {
LAB_142893246:
    lVar4 = 0;
  }
  pcVar5 = (char *)((ulonglong)~*(uint *)(*(longlong *)(lVar7 + 0x50) + 8) + lVar4);
LAB_142893254:
  if (*pcVar5 == '\x01') {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar4 = *param_4;
    lVar8 = *(longlong *)(lVar4 + 0x30);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    if (lVar8 == *(longlong *)(lVar4 + 0x20)) {
      pdb_142d7e6e0(lVar4 + 0x20);
    }
    lVar13 = *(longlong *)(lVar4 + 0x28);
    *(undefined4 *)(lVar13 + lVar8 * 0x20) = 0x19;
    *(undefined8 *)(lVar13 + 0x18 + lVar8 * 0x20) = uVar3;
    *(longlong *)(lVar4 + 0x30) = lVar8 + 1;
    *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  }
  return;
}

