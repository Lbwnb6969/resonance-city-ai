// VA 0x1420bf680, PDB extent 722 bytes
// system_onboarding::hint_state::filter_hint_display_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::filter_hint_display_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 722 */

void pdb_1420bf680(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  lVar4 = *param_1;
  lVar18 = *(longlong *)(lVar4 + 8);
  lVar16 = *(longlong *)(lVar4 + 0x20);
  lVar21 = *(longlong *)(lVar4 + 0x10) * 0x38;
  while (lVar21 != 0) {
    lVar21 = lVar21 + -0x38;
    pcVar17 = (char *)(lVar18 + 0x30);
    lVar18 = lVar18 + 0x38;
    if (*pcVar17 == '\x01') goto LAB_1420bf6e3;
  }
  lVar18 = *(longlong *)(lVar4 + 0x28) * 0x50;
  do {
    if (lVar18 == 0) {
      return;
    }
    lVar18 = lVar18 + -0x50;
    pcVar17 = (char *)(lVar16 + 0x49);
    lVar16 = lVar16 + 0x50;
  } while (*pcVar17 != '\x01');
LAB_1420bf6e3:
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar5 = (undefined4 *)param_1[2];
  *puVar5 = uVar3;
  uVar15 = *(ulonglong *)(lVar4 + 0x10);
  if (uVar15 != 0) {
    lVar18 = *(longlong *)(lVar4 + 8);
    uVar19 = 0;
    lVar16 = lVar18;
    do {
      if (*(char *)(lVar16 + 0x30) == '\0') {
        pdb_141086700();
        uVar20 = uVar19;
        while (uVar20 = uVar20 + 1, uVar20 < uVar15) {
          while (puVar1 = (undefined4 *)(lVar18 + uVar20 * 0x38),
                *(char *)(lVar18 + 0x30 + uVar20 * 0x38) != '\0') {
            lVar16 = uVar19 * 0x38;
            *(undefined8 *)(lVar18 + 0x30 + lVar16) = *(undefined8 *)(puVar1 + 0xc);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar10 = *(undefined8 *)(puVar1 + 4);
            uVar11 = *(undefined8 *)(puVar1 + 6);
            uVar12 = *(undefined8 *)(puVar1 + 10);
            puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar16);
            *puVar2 = *(undefined8 *)(puVar1 + 8);
            puVar2[1] = uVar12;
            puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar16);
            *puVar2 = uVar10;
            puVar2[1] = uVar11;
            puVar1 = (undefined4 *)(lVar18 + lVar16);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            uVar19 = uVar19 + 1;
            uVar20 = uVar20 + 1;
            if (uVar15 <= uVar20) goto LAB_1420bf7d2;
          }
          pdb_141086700();
        }
LAB_1420bf7d2:
        *(ulonglong *)(lVar4 + 0x10) = uVar19;
        *puVar5 = uVar3;
        uVar15 = *(ulonglong *)(lVar4 + 0x28);
        if (uVar15 == 0) {
          return;
        }
        goto LAB_1420bf71d;
      }
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x38;
    } while (uVar15 != uVar19);
  }
  *puVar5 = uVar3;
  uVar15 = *(ulonglong *)(lVar4 + 0x28);
  if (uVar15 == 0) {
    return;
  }
LAB_1420bf71d:
  lVar18 = *(longlong *)(lVar4 + 0x20);
  pcVar17 = (char *)(lVar18 + 0x49);
  uVar19 = 0;
  while (*pcVar17 != '\0') {
    uVar19 = uVar19 + 1;
    pcVar17 = pcVar17 + 0x50;
    if (uVar15 == uVar19) {
      return;
    }
  }
  pdb_141086700(pcVar17 + -0x31);
  uVar20 = uVar19;
  while (uVar20 = uVar20 + 1, uVar20 < uVar15) {
    while (puVar5 = (undefined4 *)(lVar18 + uVar20 * 0x50),
          *(char *)(lVar18 + 0x49 + uVar20 * 0x50) != '\0') {
      lVar16 = uVar19 * 0x50;
      uVar10 = *(undefined8 *)(puVar5 + 0x12);
      puVar2 = (undefined8 *)(lVar18 + 0x40 + lVar16);
      *puVar2 = *(undefined8 *)(puVar5 + 0x10);
      puVar2[1] = uVar10;
      uVar3 = *puVar5;
      uVar6 = puVar5[1];
      uVar7 = puVar5[2];
      uVar8 = puVar5[3];
      uVar10 = *(undefined8 *)(puVar5 + 4);
      uVar11 = *(undefined8 *)(puVar5 + 6);
      uVar12 = *(undefined8 *)(puVar5 + 8);
      uVar13 = *(undefined8 *)(puVar5 + 10);
      uVar14 = *(undefined8 *)(puVar5 + 0xe);
      puVar2 = (undefined8 *)(lVar18 + 0x30 + lVar16);
      *puVar2 = *(undefined8 *)(puVar5 + 0xc);
      puVar2[1] = uVar14;
      puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar16);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar16);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar5 = (undefined4 *)(lVar18 + lVar16);
      *puVar5 = uVar3;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      uVar19 = uVar19 + 1;
      uVar20 = uVar20 + 1;
      if (uVar15 <= uVar20) goto LAB_1420bf883;
    }
    pdb_141086700(puVar5 + 6);
  }
LAB_1420bf883:
  *(ulonglong *)(lVar4 + 0x28) = uVar19;
  return;
}

