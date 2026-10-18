// VA 0x142899150, PDB extent 2521 bytes
// system_onboarding::hint_undo::hint_undo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_undo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_undo::hint_undo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_undo.rs
   Extent: 2521 */

void pdb_142899150(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  uint auStack_a0 [12];
  longlong *plStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar1 = *param_6;
  plStack_70 = param_3;
  cVar6 = pdb_140938b60(*(undefined4 *)(lVar1 + 0x88),*(undefined4 *)(lVar1 + 0x8c));
  if (cVar6 != '\0') {
    *(undefined4 *)plStack_70[2] = *(undefined4 *)((longlong)plStack_70 + 0x1c);
    lVar7 = *plStack_70;
    lVar2 = *(longlong *)(lVar7 + 0x30);
    uVar3 = *(undefined8 *)(lVar7 + 0x40);
    if (lVar2 == *(longlong *)(lVar7 + 0x20)) {
      pdb_142d7e980(lVar7 + 0x20);
    }
    lVar12 = *(longlong *)(lVar7 + 0x28);
    *(undefined8 *)(lVar12 + lVar2 * 0x10) = uVar3;
    *(undefined1 *)(lVar12 + 8 + lVar2 * 0x10) = 2;
    *(longlong *)(lVar7 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
  }
  puVar4 = (ulonglong *)*param_2;
  lVar7 = param_2[1];
  uVar8 = *puVar4;
  uVar11 = 0;
  uVar13 = uVar8 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar13 = uVar11;
  }
  uVar10 = uVar8 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar10 = uVar11;
  }
  uVar8 = *(ulonglong *)(lVar7 + 0x30);
  uVar14 = uVar8 - uVar10;
  if (uVar8 < uVar10) {
    uVar14 = uVar11;
  }
  uVar5 = *(ulonglong *)(lVar7 + 0x10);
  uVar9 = uVar5 - uVar13;
  if (uVar5 < uVar13) {
    uVar9 = uVar11;
  }
  uVar11 = *(ulonglong *)(lVar7 + 0x40);
  *puVar4 = uVar11 - (uVar9 + uVar14);
  if (uVar5 >= uVar13 && uVar5 - uVar13 != 0 || uVar8 >= uVar10 && uVar8 - uVar10 != 0) {
    *puVar4 = uVar11;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    *(undefined1 *)(*param_5 + 4) = 1;
  }
  lVar7 = *param_7;
  lVar2 = param_7[1];
  if (*(char *)(lVar7 + 0x108) != '\0') {
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar7 + 0x100) << 2 == lVar12) goto LAB_142899495;
      uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xf8) + lVar12);
      lVar12 = lVar12 + 4;
    } while (*(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x10 + uVar8 * 0x48) == 0);
    lVar2 = *(longlong *)(lVar2 + 0x1a0) + uVar8 * 0x48;
    cVar6 = cRam0000000000000000;
    if ((*(ulonglong *)(lVar7 + 0x110) < *(ulonglong *)(lVar2 + 0x40)) &&
       (uVar8 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8),
       uVar8 != 0)) {
      cVar6 = **(char **)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar8 * 0x30);
    }
    goto joined_r0x0001428993b0;
  }
  lVar12 = 0;
  do {
    if (*(longlong *)(lVar7 + 0x100) << 2 == lVar12) goto LAB_142899495;
    lVar15 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xf8) + lVar12) * 0xa0;
    lVar12 = lVar12 + 4;
  } while (*(longlong *)(*(longlong *)(lVar2 + 0x100) + 0x58 + lVar15) == 0);
  lVar15 = *(longlong *)(lVar2 + 0x100) + lVar15;
  uVar8 = (ulonglong)*(uint *)(lVar15 + 0x94);
  if (*(ulonglong *)(lVar7 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar2 + 0x1a0) + 0x40 + uVar8 * 0x48)) {
    lVar2 = *(longlong *)(lVar2 + 0x1a0) + uVar8 * 0x48;
    uVar8 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8);
    if (uVar8 == 0) goto LAB_14289939f;
    lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar8 * 0x30);
  }
  else {
LAB_14289939f:
    lVar7 = 0;
  }
  cVar6 = *(char *)((ulonglong)~*(uint *)(*(longlong *)(lVar15 + 0x50) + 8) + lVar7);
joined_r0x0001428993b0:
  if (cVar6 == '\x02') {
    fVar16 = *(float *)(*param_8 + 0x28);
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    fVar16 = fVar16 + *(float *)*param_5;
    *(float *)*param_5 = fVar16;
    if (_DAT_142e37878 < fVar16) {
      *(undefined4 *)plStack_70[2] = *(undefined4 *)((longlong)plStack_70 + 0x1c);
      lVar7 = *plStack_70;
      lVar2 = *(longlong *)(lVar7 + 0x30);
      uVar3 = *(undefined8 *)(lVar7 + 0x40);
      if (lVar2 == *(longlong *)(lVar7 + 0x20)) {
        pdb_142d7e980(lVar7 + 0x20);
      }
      lVar12 = *(longlong *)(lVar7 + 0x28);
      *(undefined8 *)(lVar12 + lVar2 * 0x10) = uVar3;
      *(undefined1 *)(lVar12 + 8 + lVar2 * 0x10) = 2;
      *(longlong *)(lVar7 + 0x30) = lVar2 + 1;
      *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
    }
    cVar6 = pdb_140938b60(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(lVar1 + 0x94));
    if (cVar6 != '\0') {
      *(undefined4 *)plStack_70[2] = *(undefined4 *)((longlong)plStack_70 + 0x1c);
      lVar1 = *plStack_70;
      lVar7 = *(longlong *)(lVar1 + 0x30);
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      if (lVar7 == *(longlong *)(lVar1 + 0x20)) {
        pdb_142d7e980(lVar1 + 0x20);
      }
      lVar2 = *(longlong *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + lVar7 * 0x10) = uVar3;
      *(undefined1 *)(lVar2 + 8 + lVar7 * 0x10) = 2;
      *(longlong *)(lVar1 + 0x30) = lVar7 + 1;
      *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
    }
  }
LAB_142899495:
  if (*(char *)(*param_1 + 0x40e) == '\0') {
    pdb_14289bd20(auStack_a0);
    **(undefined4 **)(param_4 + 0x10) = *(undefined4 *)(param_4 + 0x1c);
    uVar8 = 4;
    if (0xc4 < auStack_a0[0]) {
      uVar8 = (ulonglong)(auStack_a0[0] - 0xc5);
    }
                    /* WARNING: Could not recover jumptable at 0x0001428994dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1435ac768 + *(int *)(&UNK_1435ac768 + uVar8 * 4)))
              (&UNK_1435ac768 + *(int *)(&UNK_1435ac768 + uVar8 * 4));
    return;
  }
  return;
}

