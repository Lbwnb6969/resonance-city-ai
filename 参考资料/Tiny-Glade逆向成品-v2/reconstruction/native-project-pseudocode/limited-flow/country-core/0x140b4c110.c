// VA 0x140b4c110, PDB extent 5707 bytes
// country_core::systems::ui_edit_focus::ui_edit_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui_edit_focus::ui_edit_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 5707 */

void pdb_140b4c110(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9,longlong param_10,longlong *param_11)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong in_stack_00000078;
  longlong in_stack_00000080;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1c8;
  undefined4 uStack_1b0;
  undefined4 uStack_198;
  undefined1 uStack_180;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  undefined8 *puStack_c0;
  char *pcStack_b8;
  longlong lStack_b0;
  undefined4 *puStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pcVar11 = (char *)*param_1;
  uStack_98 = param_1[4];
  uStack_144 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar13 = *param_4;
  uVar12 = *(undefined8 *)(in_stack_00000078 + 0x20);
  uVar1 = *(undefined8 *)(param_10 + 0x20);
  puStack_140 = *(undefined1 **)(in_stack_00000080 + 0x20);
  puVar9 = *(undefined4 **)(in_stack_00000080 + 0x30);
  uVar10 = *(undefined4 *)(in_stack_00000080 + 0x3c);
  if (*pcVar11 != '\t') {
    lStack_a0 = lVar13;
    uStack_90 = uVar10;
    if ((*pcVar11 == '\0') && (*(int *)(pcVar11 + 8) == 3)) {
      uVar10 = *(undefined4 *)((longlong)param_11 + 0x1c);
      lStack_b0 = *param_11;
      puVar2 = (undefined4 *)param_11[2];
      *puVar2 = uVar10;
      uVar3 = *(ulonglong *)(lStack_b0 + 0x10);
      if (uVar3 == 0) goto LAB_140b4c596;
      lStack_88 = *(longlong *)(lStack_b0 + 8);
      lStack_138 = 1 - uVar3;
      lVar13 = 8;
      lVar14 = 0;
      uStack_d0 = uVar12;
      plStack_c8 = param_3;
      puStack_c0 = param_2;
      pcStack_b8 = pcVar11;
      puStack_a8 = puVar9;
      do {
        uStack_1f8 = *(undefined8 *)(lStack_88 + -8 + lVar13);
        cVar6 = pdb_1417b1cb0(uVar1,&uStack_1f8);
        pcVar11 = pcStack_b8;
        if (cVar6 == '\0') {
          lStack_d8 = -lVar14;
          if (uVar3 <= 1U - lVar14) goto LAB_140b4d241;
          lStack_138 = lStack_138 - lVar14;
          goto LAB_140b4cd62;
        }
        lVar13 = lVar13 + 8;
        lVar14 = lVar14 + -1;
      } while (-lVar14 != uVar3);
      lVar13 = *(longlong *)(lStack_b0 + 0x10);
      uVar12 = uStack_d0;
      param_3 = plStack_c8;
      param_2 = puStack_c0;
      puVar9 = puStack_a8;
      goto joined_r0x000140b4d25d;
    }
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar13 = *param_11;
    *(undefined8 *)(lVar13 + 0x10) = 0;
    cVar6 = *pcVar11;
    if (cVar6 == '\0') {
      lStack_b0 = lVar13;
      puStack_a8 = puVar9;
                    /* WARNING: Could not recover jumptable at 0x000140b4c3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14305a230 + *(int *)(&UNK_14305a230 + (ulonglong)*(uint *)(pcVar11 + 8) * 4)))
                (puVar9);
      return;
    }
    if (cVar6 == '\x05') goto LAB_140b4c5f3;
LAB_140b4c3aa:
    lVar13 = lStack_a0;
    uVar10 = uStack_90;
    if (cVar6 != '\0') {
      uVar7 = 0;
      goto LAB_140b4c5ff;
    }
    if (*(int *)(pcVar11 + 8) == 6) goto LAB_140b4c605;
  }
  uVar7 = 0;
  goto LAB_140b4c5ff;
  while( true ) {
    lVar13 = lStack_130 + 8;
    lStack_138 = lStack_138 + 1;
    if (lStack_138 == 0) break;
LAB_140b4cd62:
    uStack_1f8 = *(undefined8 *)(lStack_88 + lVar13);
    lStack_130 = lVar13;
    cVar6 = pdb_1417b1cb0(uVar1,&uStack_1f8);
    if (cVar6 != '\0') {
      *(undefined8 *)(lStack_88 + lStack_d8 * 8) = *(undefined8 *)(lStack_88 + lStack_130);
      lStack_d8 = lStack_d8 + 1;
      lVar13 = lStack_130 + 8;
      lStack_138 = lStack_138 + 1;
      if (lStack_138 == 0) goto LAB_140b4d241;
      goto LAB_140b4cd62;
    }
  }
  lStack_138 = 0;
LAB_140b4d241:
  *(longlong *)(lStack_b0 + 0x10) = lStack_d8;
  lVar13 = lStack_d8;
  uVar12 = uStack_d0;
  param_3 = plStack_c8;
  param_2 = puStack_c0;
  puVar9 = puStack_a8;
joined_r0x000140b4d25d:
  uStack_d0 = uVar12;
  plStack_c8 = param_3;
  puStack_c0 = param_2;
  puStack_a8 = puVar9;
  if (lVar13 == 0) {
LAB_140b4c596:
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar13 = *param_5;
    lVar14 = *(longlong *)(lVar13 + 0x30);
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    if (lVar14 == *(longlong *)(lVar13 + 0x20)) {
      pdb_142d7e6e0(lVar13 + 0x20);
    }
    lVar4 = *(longlong *)(lVar13 + 0x28);
    lVar8 = lVar14 * 0x20;
    *(undefined1 *)(lVar4 + lVar8) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar8) = 0;
    *(undefined8 *)(lVar4 + 0x18 + lVar8) = uVar12;
    *(longlong *)(lVar13 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
    return;
  }
  if (lVar13 == 1) {
    uVar12 = **(undefined8 **)(lStack_b0 + 8);
    *puVar2 = uVar10;
    *(undefined8 *)(lStack_b0 + 0x10) = 0;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar13 = *param_5;
    lVar14 = *(longlong *)(lVar13 + 0x30);
    uVar1 = *(undefined8 *)(lVar13 + 0x40);
    if (lVar14 == *(longlong *)(lVar13 + 0x20)) {
      pdb_142d7e6e0(lVar13 + 0x20);
    }
    lVar4 = *(longlong *)(lVar13 + 0x28);
    lVar8 = lVar14 * 0x20;
    *(undefined1 *)(lVar4 + lVar8) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar8) = 1;
    *(undefined8 *)(lVar4 + 0x10 + lVar8) = uVar12;
    *(undefined8 *)(lVar4 + 0x18 + lVar8) = uVar1;
    *(longlong *)(lVar13 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
    return;
  }
  cVar6 = *pcVar11;
  if (cVar6 != '\x05') goto LAB_140b4c3aa;
LAB_140b4c5f3:
  uVar7 = 1;
  lVar13 = lStack_a0;
  uVar10 = uStack_90;
LAB_140b4c5ff:
  *puVar9 = uVar10;
  *puStack_140 = uVar7;
LAB_140b4c605:
  if (*(longlong *)(*param_3 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b4c62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14305a24c + *(int *)(&UNK_14305a24c + (ulonglong)*(uint *)(lVar13 + 0xa0) * 4)))
              ();
    return;
  }
  if (*pcVar11 == '\0') {
    uStack_1f8 = 0;
    uStack_1f0 = 8;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_170 = 5;
    uStack_16c = 0x7f7fffff;
    uStack_150 = 0x100;
    uStack_d0 = uVar12;
    pdb_140900b80(*param_2,&UNK_1430596a8,0x11,&uStack_1f8);
    puVar5 = (undefined8 *)*param_8;
    uStack_e8 = puVar5[2];
    uStack_f8 = *puVar5;
    uStack_f0 = puVar5[1];
                    /* WARNING: Could not recover jumptable at 0x000140b4c7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14305a274 + *(int *)(&UNK_14305a274 + (ulonglong)*(uint *)(lVar13 + 8) * 4)))();
    return;
  }
  if (*pcVar11 != '\x05') {
                    /* WARNING: Could not recover jumptable at 0x000140b4c676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14305a328 + *(int *)(&UNK_14305a328 + (ulonglong)*(uint *)(lVar13 + 8) * 4)))
              (&UNK_14305a328 + *(int *)(&UNK_14305a328 + (ulonglong)*(uint *)(lVar13 + 8) * 4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b4c64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14305a260 + *(int *)(&UNK_14305a260 + (ulonglong)*(uint *)(lVar13 + 8) * 4)))();
  return;
}

