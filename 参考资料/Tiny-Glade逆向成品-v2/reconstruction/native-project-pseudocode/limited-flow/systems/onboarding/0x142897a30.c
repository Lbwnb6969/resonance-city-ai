// VA 0x142897a30, PDB extent 2316 bytes
// system_onboarding::hint_terrain_focus::hint_terrain_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_terrain_focus::hint_terrain_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain_focus.rs
   Extent: 2316 */

void pdb_142897a30(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong param_6,undefined8 *param_7)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined4 uStack_dc;
  uint auStack_a0 [12];
  undefined4 uStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_4;
  lVar4 = param_4[1];
  uVar13 = *puVar3;
  uVar16 = 0;
  uVar14 = uVar13 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar14 = uVar16;
  }
  uVar17 = uVar13 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar17 = uVar16;
  }
  lVar9 = uVar14 * 0x10 + *(longlong *)(lVar4 + 8);
  uVar13 = *(ulonglong *)(lVar4 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar14) {
    lVar9 = 8;
    uVar13 = uVar16;
  }
  lVar11 = uVar17 * 0x10 + *(longlong *)(lVar4 + 0x28);
  uVar14 = *(ulonglong *)(lVar4 + 0x30) - uVar17;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar17) {
    lVar11 = 8;
    uVar14 = uVar16;
  }
  *puVar3 = (*(longlong *)(lVar4 + 0x40) - uVar14) - uVar13;
  uVar18 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar5 = (undefined1 *)*param_3;
  puVar6 = (undefined4 *)param_3[2];
  uStack_70 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar4 = *param_5;
  puVar7 = (undefined4 *)param_5[2];
  lVar10 = lVar9;
  lVar12 = lVar11;
  uStack_dc = uVar18;
LAB_142897b45:
  do {
    if ((lVar10 == 0) || (lVar10 == uVar13 * 0x10 + lVar9)) goto LAB_142897b70;
    lVar1 = lVar10 + 0x10;
    *puVar3 = *puVar3 + 1;
    pcVar2 = (char *)(lVar10 + 8);
    lVar10 = lVar1;
  } while (*pcVar2 != '\x02');
  goto LAB_142897b93;
LAB_142897b70:
  if ((lVar12 == 0) || (lVar12 == uVar14 * 0x10 + lVar11)) {
    if ((*(longlong *)*param_7 != 0) && (*(char *)*param_1 == '\x05')) {
      lVar4 = *param_2;
      uStack_134 = pdb_140a44d70(CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
      uStack_138 = 0xca;
      uVar15 = 0;
      if (*(longlong *)(lVar4 + 0x280) != 0) {
        uVar15 = *(undefined8 *)(lVar4 + 0x278);
      }
      pdb_1420c0500(auStack_a0,&uStack_138,uVar15);
      **(undefined4 **)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x1c);
      uVar13 = 4;
      if (0xc4 < auStack_a0[0]) {
        uVar13 = (ulonglong)(auStack_a0[0] - 0xc5);
      }
                    /* WARNING: Could not recover jumptable at 0x000142897c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1435ac60c + *(int *)(&UNK_1435ac60c + uVar13 * 4)))
                (&UNK_1435ac60c + *(int *)(&UNK_1435ac60c + uVar13 * 4));
      return;
    }
    return;
  }
  lVar1 = lVar12 + 0x10;
  *puVar3 = *puVar3 + 1;
  pcVar2 = (char *)(lVar12 + 8);
  lVar10 = 0;
  lVar12 = lVar1;
  lVar1 = 0;
  if (*pcVar2 == '\x02') {
LAB_142897b93:
    lVar10 = lVar1;
    *puVar6 = uVar18;
    *puVar5 = 1;
    *puVar7 = uStack_70;
    lVar1 = *(longlong *)(lVar4 + 0x30);
    uVar15 = *(undefined8 *)(lVar4 + 0x40);
    if (lVar1 == *(longlong *)(lVar4 + 0x20)) {
      pdb_142d7e980(lVar4 + 0x20);
      uVar18 = uStack_dc;
    }
    lVar8 = *(longlong *)(lVar4 + 0x28);
    *(undefined8 *)(lVar8 + lVar1 * 0x10) = uVar15;
    *(undefined1 *)(lVar8 + 8 + lVar1 * 0x10) = 5;
    *(longlong *)(lVar4 + 0x30) = lVar1 + 1;
    *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  }
  goto LAB_142897b45;
}

