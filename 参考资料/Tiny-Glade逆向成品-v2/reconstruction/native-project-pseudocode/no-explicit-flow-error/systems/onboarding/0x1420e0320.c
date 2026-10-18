// VA 0x1420e0320, PDB extent 719 bytes
// system_onboarding::hint_clutter_focus_edit::hint_clutter_focused_edit_condition
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_clutter_focus_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_clutter_focus_edit::hint_clutter_focused_edit_condition
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_clutter_focus_edit.rs
   Extent: 719 */

void pdb_1420e0320(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
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
  
  if (*(char *)(*param_1 + 0x411) != '\0') {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)*param_2 = 1;
    return;
  }
  lVar5 = param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  pcVar10 = (char *)0x0;
  pcVar4 = (char *)(uVar6 - *(ulonglong *)(lVar5 + 0x18));
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    pcVar4 = pcVar10;
  }
  lVar8 = (longlong)pcVar4 * 0x38 + *(longlong *)(lVar5 + 8);
  pcVar1 = *(char **)(lVar5 + 0x10);
  pcVar14 = pcVar1 + -(longlong)pcVar4;
  if (pcVar1 < pcVar4) {
    pcVar14 = pcVar10;
  }
  if (pcVar1 < pcVar4) {
    lVar8 = 8;
  }
  pcVar9 = (char *)(lVar8 + -0x38 + (longlong)pcVar14 * 0x38);
  if (pcVar1 <= pcVar4) {
    pcVar9 = pcVar10;
  }
  pcVar2 = *(char **)(lVar5 + 0x30);
  pcVar11 = (char *)(uVar6 - *(ulonglong *)(lVar5 + 0x38));
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    pcVar11 = pcVar10;
  }
  lVar8 = (longlong)pcVar11 * 0x38 + *(longlong *)(lVar5 + 0x28);
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
  if (pcVar1 > pcVar4 || pcVar2 > pcVar11) {
    pcVar14 = pcVar10;
  }
  *(ulonglong *)*param_3 = *(longlong *)(lVar5 + 0x40) - (longlong)pcVar14;
  if (pcVar1 <= pcVar4 && pcVar2 <= pcVar11) {
    return;
  }
  if (*pcVar12 == '\0') {
    pcVar4 = (char *)*param_2;
    if (*(int *)(pcVar12 + 8) == 4) {
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      *pcVar4 = '\x01';
    }
  }
  else {
    pcVar4 = (char *)*param_2;
  }
  if (*pcVar4 == '\0') {
    return;
  }
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar5 = *param_6;
  lVar8 = *(longlong *)(lVar5 + 0x30);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  if (lVar8 == *(longlong *)(lVar5 + 0x20)) {
    pdb_142d7e980(lVar5 + 0x20);
  }
  lVar13 = *(longlong *)(lVar5 + 0x28);
  *(undefined8 *)(lVar13 + lVar8 * 0x10) = uVar3;
  *(undefined1 *)(lVar13 + 8 + lVar8 * 0x10) = 9;
  *(longlong *)(lVar5 + 0x30) = lVar8 + 1;
  *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
  lVar5 = *param_5;
  lVar8 = param_5[1];
  if (*(char *)(lVar5 + 0x108) != '\0') {
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar5 + 0x100) << 2 == lVar13) {
        return;
      }
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0xf8) + lVar13);
      lVar13 = lVar13 + 4;
    } while (*(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + uVar6 * 0x48) == 0);
    lVar8 = *(longlong *)(lVar8 + 0x1a0) + uVar6 * 0x48;
    if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar8 + 0x40)) &&
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
       uVar6 != 0)) {
      pcVar4 = *(char **)(*(longlong *)(lVar8 + 0x18) + 0x10 + ~uVar6 * 0x30);
    }
    else {
      pcVar4 = (char *)0x0;
    }
    goto LAB_1420e0594;
  }
  lVar13 = 0;
  do {
    if (*(longlong *)(lVar5 + 0x100) << 2 == lVar13) {
      return;
    }
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0xf8) + lVar13) * 0xa0;
    lVar13 = lVar13 + 4;
  } while (*(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + lVar7) == 0);
  lVar7 = *(longlong *)(lVar8 + 0x100) + lVar7;
  uVar6 = (ulonglong)*(uint *)(lVar7 + 0x94);
  if (*(ulonglong *)(lVar5 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar8 + 0x1a0) + 0x40 + uVar6 * 0x48)) {
    lVar8 = *(longlong *)(lVar8 + 0x1a0) + uVar6 * 0x48;
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8);
    if (uVar6 == 0) goto LAB_1420e0586;
    lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x10 + ~uVar6 * 0x30);
  }
  else {
LAB_1420e0586:
    lVar5 = 0;
  }
  pcVar4 = (char *)((ulonglong)~*(uint *)(*(longlong *)(lVar7 + 0x50) + 8) + lVar5);
LAB_1420e0594:
  if (*pcVar4 == '\t') {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar5 = *param_4;
    lVar8 = *(longlong *)(lVar5 + 0x30);
    uVar3 = *(undefined8 *)(lVar5 + 0x40);
    if (lVar8 == *(longlong *)(lVar5 + 0x20)) {
      pdb_142d7e6e0(lVar5 + 0x20);
    }
    lVar13 = *(longlong *)(lVar5 + 0x28);
    *(undefined4 *)(lVar13 + lVar8 * 0x20) = 0x19;
    *(undefined8 *)(lVar13 + 0x18 + lVar8 * 0x20) = uVar3;
    *(longlong *)(lVar5 + 0x30) = lVar8 + 1;
    *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
  }
  return;
}

