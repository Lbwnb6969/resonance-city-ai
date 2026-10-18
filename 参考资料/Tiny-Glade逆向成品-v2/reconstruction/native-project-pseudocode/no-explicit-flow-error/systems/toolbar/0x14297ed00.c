// VA 0x14297ed00, PDB extent 2675 bytes
// toolbar::ui_interaction::ui_focus_parent_if_self_in_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_focus_parent_if_self_in_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 2675 */

void pdb_14297ed00(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  int *piVar19;
  longlong lVar20;
  longlong *arg1;
  ulonglong uVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined *puVar25;
  longlong lVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined *puVar30;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong *plStack_d0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined4 uStack_94;
  longlong *plStack_90;
  longlong lStack_88;
  ulonglong *puStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  ulonglong *puStack_60;
  longlong lStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar28 = param_2;
  bStack_49 = pdb_140e94b40();
  plStack_b8 = param_2;
  if (bStack_49 == 0) goto LAB_14297eec0;
  plVar28 = (longlong *)&UNK_143607559;
  lVar23 = 0x39;
  arg1 = (longlong *)0x39;
  lVar12 = pdb_142978b70(&UNK_143607559);
  if (lVar12 == 1) {
    if (arg1 < (longlong *)0x3a) {
      plVar28 = (longlong *)&UNK_143607559;
      uVar13 = pdb_142978b70(&UNK_143607559);
      if ((uVar13 & 1) != 0) {
        if ((undefined *)0x39 < (undefined *)((longlong)arg1 + 2)) goto LAB_14297f5c8;
        lVar23 = 0x37 - (longlong)arg1;
        plVar28 = (longlong *)((longlong)arg1 + 0x14360755b);
      }
      goto LAB_14297eda2;
    }
LAB_14297f5a8:
    pdb_142dc8070(&UNK_143607559,0x39,0);
LAB_14297f5c8:
    pdb_142dc8070(&UNK_143607559,0x39);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14297eda2:
  puVar25 = &UNK_143607874;
  puVar30 = &UNK_143607848;
  do {
    bVar4 = puVar25[-1];
    uVar11 = (uint)(char)bVar4;
    if ((char)bVar4 < '\0') {
      bVar5 = puVar25[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar25[-3];
        if ((char)bVar6 < -0x40) {
          pbVar1 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar11 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar11 = bVar6 & 0xf;
        }
        arg1 = (longlong *)(ulonglong)(uVar11 << 6);
        uVar11 = bVar5 & 0x3f | uVar11 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar11 = bVar5 & 0x1f;
      }
      uVar11 = (uint)(bVar4 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_14297ee24;
LAB_14297ee3c:
      if ((undefined *)0x2c < puVar25 + -0x143607847) goto LAB_14297f585;
      lVar12 = 0x2c - (longlong)(puVar25 + -0x143607847);
      puVar30 = puVar25 + 1;
      goto LAB_14297ee5e;
    }
    puVar25 = puVar25 + -1;
    if (uVar11 == 0x5c) goto LAB_14297ee3c;
LAB_14297ee24:
    if (uVar11 == 0x2f) goto LAB_14297ee3c;
  } while (puVar25 != &UNK_143607848);
  lVar12 = 0x2c;
LAB_14297ee5e:
  puVar14 = (ulonglong *)pdb_140e97000();
  if ((char)puVar14[0xd] != '\x01') {
    arg1 = (longlong *)0x0;
    puVar14 = (ulonglong *)pdb_142dcf3a0(puVar14);
    if (puVar14 == (ulonglong *)0x0) {
LAB_14297f579:
      pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297f585:
      pdb_142dc8070(&UNK_143607848,0x2c);
      goto LAB_14297f5a8;
    }
  }
  if (*puVar14 != 0) goto LAB_14297f52d;
  *puVar14 = 0xffffffffffffffff;
  puStack_60 = puVar14;
  uStack_b0 = pdb_140e94f10(puVar14 + 1,plVar28,lVar23,puVar30,lVar12,1,0);
  *puStack_60 = *puStack_60 + 1;
LAB_14297eec0:
  plVar15 = (longlong *)pdb_140f3bda0();
  arg1 = plVar28;
  plVar28 = plVar15;
  if ((char)plVar15[2] != '\x01') goto LAB_14297f53a;
  lStack_d8 = *plVar15;
  arg1 = (longlong *)plVar15[1];
LAB_14297eede:
  *plVar28 = lStack_d8 + 1;
  uStack_e8 = _DAT_1436072d0;
  uStack_e0 = _UNK_1436072d8;
  uStack_f8 = _DAT_1436072c0;
  uStack_f4 = _UNK_1436072c4;
  uStack_f0 = _UNK_1436072c8;
  uStack_ec = _UNK_1436072cc;
  lStack_88 = 0;
  puStack_80 = (ulonglong *)0x8;
  lStack_78 = 0;
  lVar12 = *param_1;
  lVar23 = param_1[1];
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar22 = *(uint **)(lVar12 + 0xf8);
  puVar2 = puVar22 + *(longlong *)(lVar12 + 0x100);
  puStack_60 = (ulonglong *)CONCAT71(puStack_60._1_7_,*(undefined1 *)(lVar12 + 0x108));
  lVar29 = 0;
  uStack_70 = 8;
  lStack_a8 = 8;
  lStack_68 = 0;
  lStack_58 = 0;
  lVar24 = 0;
  uVar13 = 0;
  plStack_d0 = arg1;
  do {
    if ((char)puStack_60 == '\0') {
      if ((int)uVar13 == (int)lVar24) {
        do {
          if (puVar22 == puVar2) goto LAB_14297f1d3;
          uVar11 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar24 = *(longlong *)(*(longlong *)(lVar23 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
        } while (lVar24 == 0);
        lVar16 = *(longlong *)(lVar23 + 0x100) + (ulonglong)uVar11 * 0xa0;
        uVar13 = (ulonglong)*(uint *)(lVar16 + 0x94);
        lVar3 = *(longlong *)(lVar23 + 0x1a0) + uVar13 * 0x48;
        uVar13 = *(ulonglong *)(*(longlong *)(lVar23 + 0x1a0) + 0x40 + uVar13 * 0x48);
        if ((*(ulonglong *)(lVar12 + 0x110) < uVar13) &&
           (uVar21 = *(ulonglong *)
                      (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lVar12 + 0x110) * 8),
           uVar21 != 0)) {
          lStack_68 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar21 * 0x30);
          uVar21 = *(ulonglong *)(lVar12 + 0x118);
          if (uVar13 <= uVar21) goto LAB_14297f13f;
LAB_14297f0f8:
          uVar13 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar21 * 8);
          if (uVar13 == 0) goto LAB_14297f13f;
          lStack_58 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
          lStack_68 = 0;
          uVar21 = *(ulonglong *)(lVar12 + 0x118);
          if (uVar21 < uVar13) goto LAB_14297f0f8;
LAB_14297f13f:
          lStack_58 = 0;
        }
        lStack_a8 = *(longlong *)(lVar16 + 0x50);
        uVar13 = 0;
      }
      iVar27 = (int)uVar13;
      puVar17 = (undefined8 *)(lStack_a8 + uVar13 * 0x10);
      uVar13 = (ulonglong)~*(uint *)(lStack_a8 + 8 + uVar13 * 0x10);
    }
    else {
      if ((int)uVar13 == (int)lVar24) {
        do {
          if (puVar22 == puVar2) goto LAB_14297f1d3;
          uVar11 = *puVar22;
          puVar22 = puVar22 + 1;
          lVar24 = *(longlong *)(*(longlong *)(lVar23 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
        } while (lVar24 == 0);
        lVar3 = *(longlong *)(lVar23 + 0x1a0) + (ulonglong)uVar11 * 0x48;
        uVar13 = *(ulonglong *)(lVar3 + 0x40);
        if ((*(ulonglong *)(lVar12 + 0x110) < uVar13) &&
           (uVar21 = *(ulonglong *)
                      (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lVar12 + 0x110) * 8),
           uVar21 != 0)) {
          lStack_68 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar21 * 0x30);
          uVar21 = *(ulonglong *)(lVar12 + 0x118);
          if (uVar13 <= uVar21) goto LAB_14297f11f;
LAB_14297f0bd:
          uVar13 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar21 * 8);
          if (uVar13 == 0) goto LAB_14297f11f;
          lStack_58 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
          lStack_68 = 0;
          uVar21 = *(ulonglong *)(lVar12 + 0x118);
          if (uVar21 < uVar13) goto LAB_14297f0bd;
LAB_14297f11f:
          lStack_58 = 0;
        }
        uStack_70 = *(ulonglong *)(lVar3 + 8);
        uVar13 = 0;
      }
      iVar27 = (int)uVar13;
      puVar17 = (undefined8 *)(uStack_70 + uVar13 * 8);
    }
    plStack_90 = (longlong *)(lStack_68 + uVar13 * 8);
    lVar3 = uVar13 * 3;
    if ((int)*puVar17 == 0) break;
    uVar13 = (ulonglong)(iVar27 + 1);
    if (*(char *)(lVar3 + lStack_58 + 1) != '\0') {
      pdb_1403b05d0(&uStack_f8);
      lVar29 = lStack_78;
      plStack_90 = (longlong *)*plStack_90;
      if (lStack_78 == lStack_88) {
        pdb_142db0920(&lStack_88);
      }
      puStack_80[lVar29] = (ulonglong)plStack_90;
      lVar29 = lVar29 + 1;
      lStack_78 = lVar29;
    }
  } while( true );
LAB_14297f1d3:
  if (lVar29 != 0) {
    lVar24 = *plStack_b8;
    lVar3 = plStack_b8[1];
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)((longlong)plStack_b8 + 0x14));
LAB_14297f20d:
    lVar8 = lStack_78;
    puVar14 = puStack_80;
    lVar16 = lStack_88;
    puVar18 = puStack_80;
LAB_14297f215:
    do {
      uVar13 = (ulonglong)~(uint)*puVar18;
      if (((uVar13 < *(ulonglong *)(lVar3 + 0x10)) &&
          (piVar19 = (int *)(*(longlong *)(lVar3 + 8) + uVar13 * 0x18),
          piVar19[4] == (int)(*puVar18 >> 0x20))) && (*piVar19 != 0)) {
        uVar11 = piVar19[2];
        if (((ulonglong)uVar11 < *(ulonglong *)(lVar24 + 0x38)) &&
           ((*(ulonglong *)(*(longlong *)(lVar24 + 0x28) + (ulonglong)(uVar11 >> 6) * 8) >>
             ((ulonglong)uVar11 & 0x3f) & 1) != 0)) goto code_r0x00014297f271;
      }
      puVar18 = puVar18 + 1;
      if (puVar18 == puStack_80 + lVar29) goto LAB_14297f2d0;
    } while( true );
  }
LAB_14297f494:
  plVar28 = (longlong *)0x0;
  if (lStack_88 != 0) {
    pub_1406abac0((byte *)puStack_80,lStack_88 << 3,8);
  }
  bVar4 = bStack_49;
  lVar12 = CONCAT44(uStack_ec,uStack_f0);
  param_1 = (longlong *)(ulonglong)bStack_49;
  arg1 = (longlong *)0x0;
  if (lVar12 != 0) {
    uVar13 = lVar12 * 8 + 0x17U & 0xfffffffffffffff0;
    arg1 = (longlong *)(lVar12 + uVar13 + 0x11);
    if (arg1 != (longlong *)0x0) {
      pub_1406abac0((byte *)(CONCAT44(uStack_f4,uStack_f8) - uVar13),(ulonglong)arg1,0x10);
    }
  }
  if (bVar4 == 0) {
    return;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') {
    arg1 = (longlong *)0x0;
    plVar15 = (longlong *)pdb_142dcf3a0(plVar15);
    if (plVar15 == (longlong *)0x0) goto LAB_14297f579;
  }
  if (*plVar15 == 0) {
    *plVar15 = -1;
    puStack_60 = (ulonglong *)plVar15;
    pdb_140e95370(plVar15 + 1,uStack_b0);
    *puStack_60 = *puStack_60 + 1;
    return;
  }
LAB_14297f52d:
  pdb_142dc8090(&UNK_1432a7f58);
LAB_14297f53a:
  lStack_d8 = pdb_140f4fd10();
  *plVar28 = lStack_d8;
  plVar28[1] = (longlong)arg1;
  *(undefined1 *)(plVar28 + 2) = 1;
  goto LAB_14297eede;
code_r0x00014297f271:
  uVar11 = piVar19[1];
  lVar20 = *(longlong *)(*(longlong *)(lVar3 + 0x1a0) + 0x18 + (ulonglong)(uint)piVar19[3] * 0x48);
  lVar26 = ~*(ulonglong *)
             (*(longlong *)
               (*(longlong *)(lVar3 + 0x1a0) + 0x38 + (ulonglong)(uint)piVar19[3] * 0x48) +
             *(longlong *)(lVar24 + 0x110) * 8) * 0x30;
  lVar7 = *(longlong *)(lVar20 + 0x10 + lVar26);
  *(undefined4 *)(*(longlong *)(lVar20 + 0x28 + lVar26) + (ulonglong)~uVar11 * 4) =
       (undefined4)lStack_68;
  *(undefined1 *)(lVar7 + 1 + (ulonglong)~uVar11 * 3) = 1;
  puVar18 = puVar18 + 1;
  if (puVar18 == puStack_80 + lVar29) goto LAB_14297f2d0;
  goto LAB_14297f215;
LAB_14297f2d0:
  puStack_60 = puStack_80;
  lStack_88 = 0;
  puStack_80 = (ulonglong *)0x8;
  lStack_78 = 0;
  if (lVar8 != 0) {
    puVar18 = puVar14 + lVar8;
    do {
      while( true ) {
        uVar13 = *puVar14 & 0xffffffff;
        if (uVar13 == 0) goto LAB_14297f470;
        uVar13 = uVar13 ^ 0xffffffff;
        if (((uVar13 < *(ulonglong *)(lVar23 + 0x10)) &&
            (piVar19 = (int *)(uVar13 * 0x18 + *(longlong *)(lVar23 + 8)),
            piVar19[4] == (int)(*puVar14 >> 0x20))) && (*piVar19 != 0)) break;
LAB_14297f310:
        puVar14 = puVar14 + 1;
        if (puVar14 == puVar18) goto LAB_14297f470;
      }
      uVar11 = piVar19[2];
      if ((*(ulonglong *)(lVar12 + 0x38) <= (ulonglong)uVar11) ||
         ((*(ulonglong *)(*(longlong *)(lVar12 + 0x28) + (ulonglong)(uVar11 >> 6) * 8) >>
           ((ulonglong)uVar11 & 0x3f) & 1) == 0)) goto LAB_14297f310;
      uVar13 = (ulonglong)(uint)piVar19[3];
      lVar8 = *(longlong *)(lVar23 + 0x1a0);
      lVar29 = lVar8 + uVar13 * 0x48;
      lVar20 = *(longlong *)(lVar8 + 0x38 + uVar13 * 0x48);
      if (*(ulonglong *)(lVar12 + 0x110) < *(ulonglong *)(lVar8 + 0x40 + uVar13 * 0x48)) {
        uVar13 = *(ulonglong *)(lVar20 + *(ulonglong *)(lVar12 + 0x110) * 8);
        lVar29 = *(longlong *)(lVar29 + 0x18);
        if (uVar13 == 0) goto LAB_14297f3c7;
        uStack_70 = *(ulonglong *)(lVar29 + 0x10 + ~uVar13 * 0x30);
      }
      else {
        lVar29 = *(longlong *)(lVar29 + 0x18);
LAB_14297f3c7:
        uStack_70 = 0;
      }
      lVar20 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar12 + 0x118) * 8) * 0x30;
      lVar8 = *(longlong *)(lVar29 + 0x10 + lVar20);
      uVar13 = (ulonglong)(uint)~piVar19[1];
      *(undefined4 *)(*(longlong *)(lVar29 + 0x28 + lVar20) + uVar13 * 4) = uStack_94;
      *(undefined1 *)(lVar8 + 1 + uVar13 * 3) = 1;
      lStack_a0 = lVar12;
      lStack_58 = lVar16;
      cVar10 = pdb_1403b05d0(&uStack_f8);
      lVar12 = lStack_78;
      if (cVar10 == '\0') {
        uStack_70 = *(ulonglong *)(uStack_70 + uVar13 * 8);
        if (lStack_78 == lStack_88) {
          pdb_142db0920(&lStack_88);
        }
        puStack_80[lVar12] = uStack_70;
        lStack_78 = lVar12 + 1;
      }
      puVar14 = puVar14 + 1;
      lVar16 = lStack_58;
      lVar12 = lStack_a0;
    } while (puVar14 != puVar18);
  }
LAB_14297f470:
  if (lVar16 != 0) {
    pub_1406abac0((byte *)puStack_60,lVar16 << 3,8);
  }
  lVar29 = lStack_78;
  if (lStack_78 == 0) goto LAB_14297f494;
  goto LAB_14297f20d;
}

