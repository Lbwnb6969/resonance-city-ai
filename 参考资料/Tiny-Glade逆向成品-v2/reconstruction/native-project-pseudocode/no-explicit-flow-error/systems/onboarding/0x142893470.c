// VA 0x142893470, PDB extent 1936 bytes
// system_onboarding::hint_wall_group_selection::hint_wall_group_selection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_wall_group_selection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_wall_group_selection::hint_wall_group_selection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_wall_group_selection.rs
   Extent: 1936 */

void pdb_142893470(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,longlong *param_12,
                  longlong *param_13)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar24 = *param_8;
  plVar22 = (longlong *)param_8[4];
  lVar18 = param_10[1];
  uVar15 = *(ulonglong *)*param_10;
  uVar12 = 0;
  uVar27 = uVar15 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar15 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar27 = uVar12;
  }
  uVar23 = *(ulonglong *)(lVar18 + 0x38);
  uVar26 = *(ulonglong *)(lVar18 + 0x38);
  uVar2 = *(ulonglong *)(lVar18 + 0x10);
  uVar3 = *(ulonglong *)(lVar18 + 0x30);
  *(ulonglong *)*param_10 = *(ulonglong *)(lVar18 + 0x40);
  uVar26 = uVar15 - uVar26;
  if (uVar15 < uVar23) {
    uVar26 = uVar12;
  }
  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
  uVar15 = uVar2 - uVar27;
  if (uVar2 < uVar27) {
    uVar15 = uVar12;
  }
  uVar27 = uVar3 - uVar26;
  if (uVar3 < uVar26) {
    uVar27 = uVar12;
  }
  puVar4 = (ulonglong *)*param_9;
  *puVar4 = *puVar4 + uVar27 + uVar15;
  pcVar5 = (char *)*param_1;
  if (*pcVar5 != '\0') {
    return;
  }
  uStack_70 = *(int *)(pcVar5 + 8) - 1;
  if (2 < uStack_70) {
    return;
  }
  plStack_e0 = *(longlong **)(pcVar5 + 0x10);
  uVar17 = *(undefined8 *)(pcVar5 + 8);
  uVar8 = *(undefined8 *)(pcVar5 + 0x10);
  uVar14 = *param_3;
  plStack_68 = param_4;
  uVar13 = pdb_1408ffdc0(uVar14);
  cVar9 = pdb_1408ff990(uVar13);
  if (cVar9 != '\0') {
    return;
  }
  uStack_b8 = *(undefined8 *)(pcVar5 + 0x10);
  uStack_c8 = *(undefined8 *)pcVar5;
  uStack_c0 = *(undefined8 *)(pcVar5 + 8);
  uVar15 = *param_2;
  uStack_d8 = uVar15;
  cVar9 = pdb_140b44150(&uStack_c8,uVar15,uVar14);
  if (uStack_70 == 2) {
    uVar14 = pdb_14043b7e0(*param_5);
    uStack_6c = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1 < uVar15);
    if (cVar9 != '\0') goto LAB_142893685;
LAB_1428935b4:
    plVar25 = plStack_68;
    uVar24 = *param_7;
    puVar6 = (undefined4 *)param_13[2];
    *puVar6 = *(undefined4 *)((longlong)param_13 + 0x1c);
    plVar21 = (longlong *)*param_13;
    uVar11 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar6 >> 8),0x10));
    uStack_c8 = CONCAT44(CONCAT22(uStack_c8._6_2_,uVar11),0xca);
    pdb_1420c0500(&uStack_110,&uStack_c8);
    uStack_a8 = CONCAT44(uStack_ec,uStack_f0);
    uStack_a0 = CONCAT44(uStack_e4,uStack_e8);
    uStack_b8 = CONCAT44(uStack_fc,uStack_100);
    uStack_b0 = uStack_f8;
    uStack_ac = uStack_f4;
    uStack_c8 = CONCAT44(uStack_10c,uStack_110);
    uStack_c0 = CONCAT44(uStack_104,uStack_108);
    plStack_98 = (longlong *)CONCAT71(plStack_98._1_7_,0x14);
    lVar18 = plVar21[2];
    if (lVar18 == *plVar21) {
      pdb_142d7f080(plVar21);
    }
    lVar16 = plVar21[1];
    lVar19 = lVar18 * 0x38;
    *(longlong **)(lVar16 + 0x30 + lVar19) = plStack_98;
    puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar19);
    *puVar1 = uStack_a8;
    puVar1[1] = uStack_a0;
    puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar19);
    *puVar1 = uStack_b8;
    puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar6 = (undefined4 *)(lVar16 + lVar19);
    *puVar6 = (undefined4)uStack_c8;
    puVar6[1] = uStack_c8._4_4_;
    puVar6[2] = (undefined4)uStack_c0;
    puVar6[3] = uStack_c0._4_4_;
    plVar21[2] = lVar18 + 1;
LAB_1428937a6:
    lVar18 = *plVar25;
    bVar7 = 0;
    cVar10 = *(char *)(lVar18 + 0x417);
  }
  else {
    uStack_6c = 0;
    if (cVar9 == '\0') goto LAB_1428935b4;
LAB_142893685:
    plVar21 = plVar22;
    uVar15 = pdb_140b4d760(uVar24);
    uVar24 = *param_7;
    if ((uVar15 & 1) == 0) {
      cVar10 = pdb_140ae2d10(uStack_d8);
      plVar25 = plStack_68;
      plVar21 = plVar22;
      if (cVar10 != '\0') {
        bVar28 = false;
        uStack_d0 = uVar24;
        goto LAB_1428936e4;
      }
      goto LAB_1428937a6;
    }
    plVar22 = plVar21;
    uStack_d0 = uVar24;
    lVar18 = pdb_140b54f80(uVar24);
    bVar28 = lVar18 != 0;
    cVar10 = pdb_140ae2d10(uStack_d8);
    if (cVar10 == '\0') {
      plVar25 = plStack_68;
      uVar24 = uStack_d0;
      if (lVar18 == 0) goto LAB_1428937a6;
    }
    else {
LAB_1428936e4:
      puVar6 = (undefined4 *)param_13[2];
      *puVar6 = *(undefined4 *)((longlong)param_13 + 0x1c);
      plVar22 = (longlong *)*param_13;
      uVar11 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar6 >> 8),0x10));
      uStack_c8 = CONCAT44(CONCAT22(uStack_c8._6_2_,uVar11),0xca);
      pdb_1420c0500(&uStack_110,&uStack_c8);
      uStack_a8 = CONCAT44(uStack_ec,uStack_f0);
      uStack_a0 = CONCAT44(uStack_e4,uStack_e8);
      uStack_b8 = CONCAT44(uStack_fc,uStack_100);
      uStack_b0 = uStack_f8;
      uStack_ac = uStack_f4;
      uStack_c8 = CONCAT44(uStack_10c,uStack_110);
      uStack_c0 = CONCAT44(uStack_104,uStack_108);
      plStack_98 = (longlong *)CONCAT71(plStack_98._1_7_,0x19);
      lVar18 = plVar22[2];
      if (lVar18 == *plVar22) {
        pdb_142d7f080(plVar22);
      }
      lVar16 = plVar22[1];
      lVar19 = lVar18 * 0x38;
      *(longlong **)(lVar16 + 0x30 + lVar19) = plStack_98;
      puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar19);
      *puVar1 = uStack_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar19);
      *puVar1 = uStack_b8;
      puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
      puVar6 = (undefined4 *)(lVar16 + lVar19);
      *puVar6 = (undefined4)uStack_c8;
      puVar6[1] = uStack_c8._4_4_;
      puVar6[2] = (undefined4)uStack_c0;
      puVar6[3] = uStack_c0._4_4_;
      plVar22[2] = lVar18 + 1;
      plVar22 = plStack_98;
      plVar25 = plStack_68;
      uVar24 = uStack_d0;
      if (!bVar28) goto LAB_1428937a6;
    }
    plVar25 = plStack_68;
    if (uStack_70 == 2) {
      lVar16 = pdb_14043b7e0();
      lVar18 = 0;
      do {
        if ((longlong)plVar22 * 8 == lVar18) {
          cVar10 = '\x15';
          goto LAB_142893812;
        }
        puVar1 = (undefined8 *)(lVar16 + lVar18);
        lVar18 = lVar18 + 8;
      } while ((longlong *)*puVar1 != plVar21);
      cVar10 = '\x16';
    }
    else {
      cVar10 = (plStack_e0 == plVar21) + '\x15';
    }
LAB_142893812:
    puVar6 = (undefined4 *)param_13[2];
    *puVar6 = *(undefined4 *)((longlong)param_13 + 0x1c);
    plVar22 = (longlong *)*param_13;
    lVar18 = *plVar25;
    uVar11 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar6 >> 8),1));
    uStack_c8 = CONCAT44(CONCAT22(uStack_c8._6_2_,uVar11),0xca);
    pdb_1420c0500(&uStack_110,&uStack_c8);
    uStack_a8 = CONCAT44(uStack_ec,uStack_f0);
    uStack_a0 = CONCAT44(uStack_e4,uStack_e8);
    uStack_b8 = CONCAT44(uStack_fc,uStack_100);
    uStack_b0 = uStack_f8;
    uStack_ac = uStack_f4;
    uStack_c8 = CONCAT44(uStack_10c,uStack_110);
    uStack_c0 = CONCAT44(uStack_104,uStack_108);
    plStack_98 = (longlong *)CONCAT71(plStack_98._1_7_,cVar10);
    lVar16 = plVar22[2];
    if (lVar16 == *plVar22) {
      pdb_142d7f080(plVar22);
    }
    lVar19 = plVar22[1];
    lVar20 = lVar16 * 0x38;
    *(longlong **)(lVar19 + 0x30 + lVar20) = plStack_98;
    puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar20);
    *puVar1 = uStack_a8;
    puVar1[1] = uStack_a0;
    puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar20);
    *puVar1 = uStack_b8;
    puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar6 = (undefined4 *)(lVar19 + lVar20);
    *puVar6 = (undefined4)uStack_c8;
    puVar6[1] = uStack_c8._4_4_;
    puVar6[2] = (undefined4)uStack_c0;
    puVar6[3] = uStack_c0._4_4_;
    plVar22[2] = lVar16 + 1;
    bVar7 = 1;
    cVar10 = *(char *)(lVar18 + 0x417);
    uVar24 = uStack_d0;
  }
  if (cVar10 == '\0') {
    if ((char)uStack_6c == '\0') {
      if (uStack_70 != 2) {
        pdb_140b55220(&uStack_c8,uVar24);
        lVar16 = pdb_142b2bdc0(&uStack_c8,1);
        if (cVar9 == '\0') {
          if ((lVar16 == 0) || (*puVar4 < 3)) goto LAB_1428939d0;
          *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
          lVar16 = *param_13;
          pdb_14289c330(&uStack_b0,lVar18);
          uStack_80 = 0x1400;
          uStack_b8 = CONCAT62(uStack_b8._2_6_,1);
          uStack_c8 = uVar17;
          uStack_c0 = uVar8;
        }
        else {
          if ((lVar16 == 0) || ((bool)(bVar7 & plVar21 == plStack_e0))) goto LAB_1428939d0;
          *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
          lVar16 = *param_13;
          pdb_14289c440(&uStack_b0,lVar18);
          uStack_80 = 0x1500;
          uStack_c8 = CONCAT44(uStack_c8._4_4_,7);
        }
        pdb_1420bf2d0(lVar16,&uStack_c8);
      }
    }
    else {
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar16 = *param_12;
      lVar19 = *(longlong *)(lVar16 + 0x30);
      uVar24 = *(undefined8 *)(lVar16 + 0x40);
      if (lVar19 == *(longlong *)(lVar16 + 0x20)) {
        pdb_142d7e980(lVar16 + 0x20);
      }
      lVar20 = *(longlong *)(lVar16 + 0x28);
      *(undefined8 *)(lVar20 + lVar19 * 0x10) = uVar24;
      *(undefined1 *)(lVar20 + 8 + lVar19 * 0x10) = 0x14;
      *(longlong *)(lVar16 + 0x30) = lVar19 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
    }
  }
LAB_1428939d0:
  if (*(char *)(lVar18 + 0x418) == '\0') {
    puVar4 = (ulonglong *)*param_11;
    lVar18 = param_11[1];
    uVar15 = *puVar4;
    uVar12 = 0;
    uVar27 = uVar15 - *(ulonglong *)(lVar18 + 0x18);
    if (uVar15 < *(ulonglong *)(lVar18 + 0x18)) {
      uVar27 = uVar12;
    }
    uVar23 = uVar15 - *(ulonglong *)(lVar18 + 0x38);
    if (uVar15 < *(ulonglong *)(lVar18 + 0x38)) {
      uVar23 = uVar12;
    }
    uVar15 = *(ulonglong *)(lVar18 + 0x30);
    uVar26 = uVar15 - uVar23;
    if (uVar23 > uVar15) {
      uVar26 = uVar12;
    }
    bVar28 = uVar23 <= uVar15 && uVar15 - uVar23 != 0;
    uVar24 = CONCAT71((int7)(uVar23 >> 8),bVar28);
    uVar15 = *(ulonglong *)(lVar18 + 0x10);
    uVar23 = uVar15 - uVar27;
    if (uVar27 > uVar15) {
      uVar23 = uVar12;
    }
    uVar12 = *(ulonglong *)(lVar18 + 0x40);
    *puVar4 = uVar12 - (uVar23 + uVar26);
    if (uVar27 <= uVar15 && uVar15 - uVar27 != 0 || bVar28) {
      *puVar4 = uVar12;
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar18 = *param_12;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar24 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e980(lVar18 + 0x20);
      }
      lVar19 = *(longlong *)(lVar18 + 0x28);
      *(undefined8 *)(lVar19 + lVar16 * 0x10) = uVar24;
      *(undefined1 *)(lVar19 + 8 + lVar16 * 0x10) = 0x18;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    }
    else if ((char)uStack_6c != '\0') {
      uVar14 = *param_6;
      uVar17 = pdb_14043b7e0(*param_5);
      lVar18 = pdb_140b43550(uVar14,uVar17,uVar24);
      if (cVar9 == '\0' && lVar18 == 0) {
        *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
        uStack_b0 = 0xc6;
        uStack_a8 = 0x8000000000000000;
        uStack_a0 = 0x8000000000000000;
        plStack_98 = (longlong *)&UNK_1435ac3bb;
        uStack_90 = 0xd;
        uStack_88 = 0x42480000;
        uStack_80 = 0x1800;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,7);
        pdb_1420bf2d0(*param_13,&uStack_c8);
      }
    }
  }
  return;
}

