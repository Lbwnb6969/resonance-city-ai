// VA 0x1420dff40, PDB extent 989 bytes
// system_onboarding::hint_clutter_focus_edit::hint_clutter_focused_edit_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_clutter_focus_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_clutter_focus_edit::hint_clutter_focused_edit_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_clutter_focus_edit.rs
   Extent: 989 */

void pdb_1420dff40(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  int aiStack_f8 [12];
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  int iStack_94;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_2;
  cVar1 = *pcVar3;
  pcVar8 = (char *)pdb_1408ffdc0(*param_8);
  cVar2 = *pcVar8;
  if (cVar1 == '\0') {
    puVar4 = (ulonglong *)*param_4;
    lVar5 = param_4[1];
    uVar9 = *puVar4;
    uVar11 = 0;
    uVar12 = uVar9 - *(ulonglong *)(lVar5 + 0x18);
    if (uVar9 < *(ulonglong *)(lVar5 + 0x18)) {
      uVar12 = uVar11;
    }
    uVar10 = uVar9 - *(ulonglong *)(lVar5 + 0x38);
    if (uVar9 < *(ulonglong *)(lVar5 + 0x38)) {
      uVar10 = uVar11;
    }
    uVar9 = *(ulonglong *)(lVar5 + 0x30);
    uVar13 = uVar9 - uVar10;
    if (uVar9 < uVar10) {
      uVar13 = uVar11;
    }
    uVar6 = *(ulonglong *)(lVar5 + 0x10);
    uVar14 = uVar6 - uVar12;
    if (uVar6 < uVar12) {
      uVar14 = uVar11;
    }
    uVar11 = *(ulonglong *)(lVar5 + 0x40);
    *puVar4 = uVar11 - (uVar14 + uVar13);
    if (uVar6 >= uVar12 && uVar6 - uVar12 != 0 || uVar9 >= uVar10 && uVar9 - uVar10 != 0) {
      *puVar4 = uVar11;
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      pcVar3[1] = '\x01';
    }
  }
  if (((cVar2 != '\x02') && (*(char *)*param_1 == '\0')) && (*(int *)((char *)*param_1 + 8) == 0)) {
    puVar7 = (undefined4 *)*param_7;
    uStack_108 = *(undefined8 *)(puVar7 + 4);
    uStack_118 = *puVar7;
    uStack_114 = puVar7[1];
    uStack_110 = puVar7[2];
    uStack_10c = puVar7[3];
    pdb_1409efbd0(&uStack_c8,*param_6,&uStack_118,_DAT_142e36f3c,0x1fb);
    if (iStack_94 != 2) {
      uStack_68 = uStack_b8;
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      pdb_140b4d940(aiStack_f8,&uStack_78,*param_5);
      if (aiStack_f8[0] == 4) {
        pdb_14289c440(&uStack_78,*param_9);
        **(undefined4 **)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x1c);
        uVar9 = 4;
        if (0xc4 < uStack_78) {
          uVar9 = (ulonglong)(uStack_78 - 0xc5);
        }
                    /* WARNING: Could not recover jumptable at 0x0001420e00c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1434572b8 + *(int *)(&UNK_1434572b8 + uVar9 * 4)))
                  (&UNK_1434572b8 + *(int *)(&UNK_1434572b8 + uVar9 * 4));
        return;
      }
    }
  }
  return;
}

