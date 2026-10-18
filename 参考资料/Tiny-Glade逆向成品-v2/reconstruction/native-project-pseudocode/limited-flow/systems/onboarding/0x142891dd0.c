// VA 0x142891dd0, PDB extent 2222 bytes
// system_onboarding::hint_deselect_tool::hint_deselect_tool
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_deselect_tool.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_deselect_tool::hint_deselect_tool
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_deselect_tool.rs
   Extent: 2222 */

void pdb_142891dd0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  ulonglong uVar22;
  char *pcVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *pcVar26;
  bool bVar27;
  bool bVar28;
  undefined4 uStack_108;
  undefined2 uStack_104;
  uint auStack_88 [12];
  longlong *plStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_6;
  lVar3 = param_6[1];
  uVar14 = *puVar2;
  uVar16 = 0;
  uVar17 = uVar14 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar17 = uVar16;
  }
  uVar22 = uVar14 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar22 = uVar16;
  }
  uVar14 = *(ulonglong *)(lVar3 + 0x30);
  uVar15 = uVar14 - uVar22;
  if (uVar14 < uVar22) {
    uVar15 = uVar16;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x10);
  uVar24 = uVar4 - uVar17;
  if (uVar4 < uVar17) {
    uVar24 = uVar16;
  }
  uVar16 = *(ulonglong *)(lVar3 + 0x40);
  *puVar2 = uVar16 - (uVar24 + uVar15);
  if (uVar4 >= uVar17 && uVar4 - uVar17 != 0 || uVar14 >= uVar22 && uVar14 - uVar22 != 0) {
    *puVar2 = uVar16;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)(*param_2 + 9) = 1;
  }
  lVar3 = param_4[1];
  uVar14 = *(ulonglong *)*param_4;
  pcVar19 = (char *)0x0;
  pcVar21 = (char *)(uVar14 - *(ulonglong *)(lVar3 + 0x18));
  if (uVar14 < *(ulonglong *)(lVar3 + 0x18)) {
    pcVar21 = pcVar19;
  }
  lVar25 = (longlong)pcVar21 * 0x38 + *(longlong *)(lVar3 + 8);
  pcVar5 = *(char **)(lVar3 + 0x10);
  pcVar20 = pcVar5 + -(longlong)pcVar21;
  if (pcVar5 < pcVar21) {
    pcVar20 = pcVar19;
  }
  if (pcVar5 < pcVar21) {
    lVar25 = 8;
  }
  pcVar26 = (char *)(lVar25 + -0x38 + (longlong)pcVar20 * 0x38);
  if (pcVar5 <= pcVar21) {
    pcVar26 = pcVar19;
  }
  pcVar6 = *(char **)(lVar3 + 0x30);
  pcVar12 = (char *)(uVar14 - *(ulonglong *)(lVar3 + 0x38));
  if (uVar14 < *(ulonglong *)(lVar3 + 0x38)) {
    pcVar12 = pcVar19;
  }
  lVar25 = (longlong)pcVar12 * 0x38 + *(longlong *)(lVar3 + 0x28);
  pcVar23 = pcVar6 + -(longlong)pcVar12;
  if (pcVar6 < pcVar12) {
    pcVar23 = pcVar19;
  }
  if (pcVar6 < pcVar12) {
    lVar25 = 8;
  }
  pcVar13 = (char *)(lVar25 + -0x38 + (longlong)pcVar23 * 0x38);
  if (pcVar6 <= pcVar12) {
    pcVar13 = pcVar26;
  }
  pcVar20 = pcVar23 + (longlong)pcVar20;
  if (pcVar21 < pcVar5 || pcVar12 < pcVar6) {
    pcVar20 = pcVar19;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar3 + 0x40) - (longlong)pcVar20;
  plStack_58 = param_3;
  if (pcVar21 < pcVar5 || pcVar12 < pcVar6) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar7 = (undefined4 *)param_2[2];
    *puVar7 = uVar1;
    lVar3 = *param_2;
    *(undefined1 *)(lVar3 + 9) = 0;
    puVar2 = (ulonglong *)*param_5;
    lVar25 = param_5[1];
    uVar14 = *puVar2;
    uVar16 = 0;
    uVar17 = uVar14 - *(ulonglong *)(lVar25 + 0x18);
    if (uVar14 < *(ulonglong *)(lVar25 + 0x18)) {
      uVar17 = uVar16;
    }
    uVar22 = uVar14 - *(ulonglong *)(lVar25 + 0x38);
    if (uVar14 < *(ulonglong *)(lVar25 + 0x38)) {
      uVar22 = uVar16;
    }
    uVar14 = *(ulonglong *)(lVar25 + 0x30);
    uVar15 = uVar14 - uVar22;
    if (uVar14 < uVar22) {
      uVar15 = uVar16;
    }
    uVar4 = *(ulonglong *)(lVar25 + 0x10);
    uVar24 = uVar4 - uVar17;
    if (uVar4 < uVar17) {
      uVar24 = uVar16;
    }
    uVar16 = *(ulonglong *)(lVar25 + 0x40);
    *puVar2 = uVar16 - (uVar24 + uVar15);
    if (((uVar4 >= uVar17 && uVar4 - uVar17 != 0 || uVar14 >= uVar22 && uVar14 - uVar22 != 0) &&
        (*puVar2 = uVar16, *pcVar13 == '\0')) && (*(int *)(pcVar13 + 8) == 0)) {
      *puVar7 = uVar1;
      *(undefined1 *)(lVar3 + 8) = 1;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar3 = *param_9;
      lVar25 = *(longlong *)(lVar3 + 0x30);
      uVar18 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar25 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7e980(lVar3 + 0x20);
      }
      lVar8 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar8 + lVar25 * 0x10) = uVar18;
      *(undefined1 *)(lVar8 + 8 + lVar25 * 0x10) = 0;
      *(longlong *)(lVar3 + 0x30) = lVar25 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    }
  }
  lVar3 = param_10[1];
  uVar14 = *(ulonglong *)*param_10;
  uVar16 = 0;
  uVar17 = uVar14 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar17 = uVar16;
  }
  uVar22 = uVar14 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar22 = uVar16;
  }
  bVar27 = *(ulonglong *)(lVar3 + 0x30) < uVar22;
  uVar22 = *(ulonglong *)(lVar3 + 0x30) - uVar22;
  uVar14 = uVar22;
  if (bVar27) {
    uVar14 = uVar16;
  }
  bVar28 = *(ulonglong *)(lVar3 + 0x10) < uVar17;
  uVar17 = *(ulonglong *)(lVar3 + 0x10) - uVar17;
  uVar15 = uVar17;
  if (bVar28) {
    uVar15 = uVar16;
  }
  uVar14 = uVar15 + uVar14;
  if (!bVar28 && uVar17 != 0 || !bVar27 && uVar22 != 0) {
    uVar14 = uVar16;
  }
  *(ulonglong *)*param_10 = *(longlong *)(lVar3 + 0x40) - uVar14;
  if ((bVar28 || uVar17 == 0) && (bVar27 || uVar22 == 0)) {
    lVar3 = param_11[1];
    uVar14 = *(ulonglong *)*param_11;
    uVar16 = 0;
    uVar17 = uVar14 - *(ulonglong *)(lVar3 + 0x18);
    if (uVar14 < *(ulonglong *)(lVar3 + 0x18)) {
      uVar17 = uVar16;
    }
    uVar22 = uVar14 - *(ulonglong *)(lVar3 + 0x38);
    if (uVar14 < *(ulonglong *)(lVar3 + 0x38)) {
      uVar22 = uVar16;
    }
    bVar27 = *(ulonglong *)(lVar3 + 0x30) < uVar22;
    uVar22 = *(ulonglong *)(lVar3 + 0x30) - uVar22;
    uVar14 = uVar22;
    if (bVar27) {
      uVar14 = uVar16;
    }
    bVar28 = *(ulonglong *)(lVar3 + 0x10) < uVar17;
    uVar17 = *(ulonglong *)(lVar3 + 0x10) - uVar17;
    uVar15 = uVar17;
    if (bVar28) {
      uVar15 = uVar16;
    }
    uVar14 = uVar15 + uVar14;
    if (!bVar28 && uVar17 != 0 || !bVar27 && uVar22 != 0) {
      uVar14 = uVar16;
    }
    *(ulonglong *)*param_11 = *(longlong *)(lVar3 + 0x40) - uVar14;
    if ((bVar28 || uVar17 == 0) && (bVar27 || uVar22 == 0)) goto LAB_1428920a2;
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(longlong *)*param_2 = *(longlong *)*param_2 + 1;
LAB_1428920a2:
  pcVar21 = (char *)*param_1;
  if (((*pcVar21 == '\x01') && (pcVar21[1] != '\0')) &&
     (plVar9 = (longlong *)*param_2, *plVar9 != 0)) {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)plVar9 + 9) = 1;
  }
  cVar10 = pdb_140b44180(pcVar21);
  cVar11 = pdb_140938ba0(*(undefined4 *)*param_7,((undefined4 *)*param_7)[1]);
  if (((cVar11 == '\0') && (cVar10 != '\0')) &&
     (lVar3 = *plStack_58, *(char *)(lVar3 + 0x404) == '\0')) {
    uStack_104 = pdb_140a44d70(1);
    uStack_108 = 0xca;
    uVar18 = 0;
    if (*(longlong *)(lVar3 + 0x280) != 0) {
      uVar18 = *(undefined8 *)(lVar3 + 0x278);
    }
    pdb_1420c0500(auStack_88,&uStack_108,uVar18);
    **(undefined4 **)(param_8 + 0x10) = *(undefined4 *)(param_8 + 0x1c);
    uVar14 = 4;
    if (0xc4 < auStack_88[0]) {
      uVar14 = (ulonglong)(auStack_88[0] - 0xc5);
    }
                    /* WARNING: Could not recover jumptable at 0x000142892172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1435ac2d8 + *(int *)(&UNK_1435ac2d8 + uVar14 * 4)))
              (&UNK_1435ac2d8 + *(int *)(&UNK_1435ac2d8 + uVar14 * 4));
    return;
  }
  return;
}

