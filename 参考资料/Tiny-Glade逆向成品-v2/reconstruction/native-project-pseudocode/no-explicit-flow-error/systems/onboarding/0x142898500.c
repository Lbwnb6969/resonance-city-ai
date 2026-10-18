// VA 0x142898500, PDB extent 2479 bytes
// system_onboarding::hint_orchestrator::hint_orchestrator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_orchestrator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_orchestrator::hint_orchestrator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_orchestrator.rs
   Extent: 2479 */

void pdb_142898500(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uVar10;
  byte bVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbVar16;
  longlong *plVar17;
  longlong lVar18;
  byte *pbVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong unaff_R12;
  byte *pbVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  byte bStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar15 = *(longlong *)(*param_2 + 0x28);
  if (lVar15 == 0) {
    pbVar12 = (byte *)0x0;
  }
  else {
    pbVar19 = *(byte **)(*param_2 + 0x20);
    pbVar12 = pbVar19;
    if (lVar15 != 1) {
      bVar11 = pbVar19[0x49];
      pbVar16 = pbVar19;
      if (lVar15 == 2) {
        uVar23 = 0;
      }
      else {
        uVar27 = (lVar15 * 0x50 - 0x50U >> 4) * -0x3333333333333333;
        pbVar12 = pbVar19 + 0x99;
        uVar23 = 0;
        do {
          bVar4 = *pbVar12;
          pbVar25 = pbVar12 + -0x49;
          if (bVar4 > bVar11 || bVar11 == bVar4) {
            pbVar25 = pbVar16;
          }
          if (bVar4 <= bVar11) {
            bVar11 = bVar4;
          }
          bVar4 = pbVar12[0x50];
          pbVar16 = pbVar12 + 7;
          if (bVar4 > bVar11 || bVar11 == bVar4) {
            pbVar16 = pbVar25;
          }
          if (bVar4 <= bVar11) {
            bVar11 = bVar4;
          }
          uVar23 = uVar23 + 2;
          pbVar12 = pbVar12 + 0xa0;
        } while ((uVar27 & 0x3fffffffffffffe) != uVar23);
        pbVar12 = pbVar16;
        if ((uVar27 & 1) == 0) goto LAB_1428985fc;
      }
      pbVar12 = pbVar19 + uVar23 * 0x50 + 0x50;
      if (bVar11 <= pbVar19[uVar23 * 0x50 + 0x99]) {
        pbVar12 = pbVar16;
      }
    }
  }
LAB_1428985fc:
  lVar15 = *param_4;
  lVar18 = param_4[1];
  lVar6 = *(longlong *)(lVar15 + 0x100);
  if (*(char *)(lVar15 + 0x108) == '\0') {
    lVar21 = 0;
    do {
      if (lVar6 << 2 == lVar21) goto LAB_14289873f;
      lVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar15 + 0xf8) + lVar21) * 0xa0;
      lVar21 = lVar21 + 4;
    } while (*(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + lVar26) == 0);
    lVar26 = *(longlong *)(lVar18 + 0x100) + lVar26;
    lVar6 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)*(uint *)(lVar26 + 0x94) * 0x48;
    uVar23 = *(ulonglong *)
              (*(longlong *)(lVar18 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar26 + 0x94) * 0x48);
    if ((*(ulonglong *)(lVar15 + 0x110) < uVar23) &&
       (uVar27 = *(ulonglong *)(*(longlong *)(lVar6 + 0x38) + *(ulonglong *)(lVar15 + 0x110) * 8),
       uVar27 != 0)) {
      lVar18 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar27 * 0x30);
      uVar27 = *(ulonglong *)(lVar15 + 0x118);
      uVar28 = *(ulonglong *)(lVar26 + 0x88);
      if (uVar28 <= uVar27) goto LAB_142898836;
LAB_1428987a9:
      if (*(longlong *)(*(longlong *)(lVar26 + 0x80) + uVar27 * 8) == 0) goto LAB_142898836;
      bVar9 = true;
      if ((uVar23 <= uVar27) ||
         (uVar27 = *(ulonglong *)(*(longlong *)(lVar6 + 0x38) + uVar27 * 8), uVar27 == 0))
      goto LAB_142898839;
      lVar21 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar27 * 0x30);
      uVar27 = *(ulonglong *)(lVar15 + 0x120);
      if (uVar27 < uVar28) goto LAB_142898848;
LAB_142898885:
      uStack_68 = 0;
    }
    else {
      lVar18 = 0;
      uVar27 = *(ulonglong *)(lVar15 + 0x118);
      uVar28 = *(ulonglong *)(lVar26 + 0x88);
      if (uVar27 < uVar28) goto LAB_1428987a9;
LAB_142898836:
      bVar9 = false;
LAB_142898839:
      lVar21 = 0;
      uVar27 = *(ulonglong *)(lVar15 + 0x120);
      if (uVar28 <= uVar27) goto LAB_142898885;
LAB_142898848:
      if (((*(longlong *)(*(longlong *)(lVar26 + 0x80) + uVar27 * 8) == 0) || (uVar23 <= uVar27)) ||
         (uVar23 = *(ulonglong *)(*(longlong *)(lVar6 + 0x38) + uVar27 * 8), uVar23 == 0))
      goto LAB_142898885;
      uStack_68 = *(ulonglong *)(*(longlong *)(lVar6 + 0x18) + 0x10 + ~uVar23 * 0x30);
    }
    uVar23 = **(ulonglong **)(lVar26 + 0x50);
    uVar27 = (ulonglong)~(uint)(*(ulonglong **)(lVar26 + 0x50))[1];
    pbVar19 = (byte *)(lVar18 + uVar27);
    unaff_R12 = 0;
    if (bVar9) {
      unaff_R12 = lVar21 + uVar27 * 4;
    }
  }
  else {
    lVar21 = 0;
    do {
      if (lVar6 << 2 == lVar21) goto LAB_14289873f;
      uVar23 = (ulonglong)*(uint *)(*(longlong *)(lVar15 + 0xf8) + lVar21);
      lVar21 = lVar21 + 4;
    } while (*(longlong *)(*(longlong *)(lVar18 + 0x1a0) + 0x10 + uVar23 * 0x48) == 0);
    lVar18 = *(longlong *)(lVar18 + 0x1a0) + uVar23 * 0x48;
    uVar23 = *(ulonglong *)(lVar18 + 0x40);
    if ((*(ulonglong *)(lVar15 + 0x110) < uVar23) &&
       (uVar27 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + *(ulonglong *)(lVar15 + 0x110) * 8),
       uVar27 != 0)) {
      pbVar19 = *(byte **)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar27 * 0x30);
      uVar27 = *(ulonglong *)(lVar15 + 0x118);
      if (uVar23 <= uVar27) goto LAB_1428987f2;
LAB_142898759:
      uVar27 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + uVar27 * 8);
      if (uVar27 == 0) goto LAB_1428987f2;
      unaff_R12 = *(ulonglong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar27 * 0x30);
      uVar27 = *(ulonglong *)(lVar15 + 0x120);
      if (uVar27 < uVar23) goto LAB_142898805;
LAB_1428988af:
      uStack_68 = 0;
    }
    else {
      pbVar19 = (byte *)0x0;
      uVar27 = *(ulonglong *)(lVar15 + 0x118);
      if (uVar27 < uVar23) goto LAB_142898759;
LAB_1428987f2:
      unaff_R12 = 0;
      uVar27 = *(ulonglong *)(lVar15 + 0x120);
      if (uVar23 <= uVar27) goto LAB_1428988af;
LAB_142898805:
      uVar23 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + uVar27 * 8);
      if (uVar23 == 0) goto LAB_1428988af;
      uStack_68 = *(ulonglong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar23 * 0x30);
    }
    uVar23 = **(ulonglong **)(lVar18 + 8);
  }
  uVar27 = uVar23 & 0xffffffff00000000;
  goto LAB_1428988ce;
LAB_14289873f:
  uVar23 = 0;
  pbVar19 = (byte *)(lVar6 << 2);
  uVar27 = 0;
LAB_1428988ce:
  puVar7 = (ulonglong *)*param_5;
  lVar15 = param_5[1];
  uVar28 = *puVar7;
  uVar22 = 0;
  uVar24 = uVar28 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar24 = uVar22;
  }
  uVar20 = uVar28 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar20 = uVar22;
  }
  uVar28 = *(ulonglong *)(lVar15 + 0x30);
  uVar13 = uVar28 - uVar20;
  if (uVar20 > uVar28) {
    uVar13 = uVar22;
  }
  uVar8 = *(ulonglong *)(lVar15 + 0x10);
  uVar14 = uVar8 - uVar24;
  if (uVar24 > uVar8) {
    uVar14 = uVar22;
  }
  uVar22 = *(ulonglong *)(lVar15 + 0x40);
  *puVar7 = uVar22 - (uVar14 + uVar13);
  if (uVar24 <= uVar8 && uVar8 - uVar24 != 0 || uVar20 <= uVar28 && uVar28 - uVar20 != 0) {
    *puVar7 = uVar22;
    bVar11 = 1;
  }
  else {
    cVar3 = *(char *)*param_1;
    bVar11 = 1;
    if (cVar3 != '\t') {
      bVar11 = pdb_140a00340(*param_6);
      bVar11 = bVar11 | cVar3 == '\x10';
    }
  }
  puVar7 = (ulonglong *)*param_3;
  lVar15 = param_3[1];
  uVar28 = *puVar7;
  uVar22 = 0;
  uVar24 = uVar28 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar24 = uVar22;
  }
  uVar20 = uVar28 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar20 = uVar22;
  }
  uVar28 = *(ulonglong *)(lVar15 + 0x30);
  uVar13 = uVar28 - uVar20;
  if (uVar28 < uVar20) {
    uVar13 = uVar22;
  }
  uVar8 = *(ulonglong *)(lVar15 + 0x10);
  uVar14 = uVar8 - uVar24;
  if (uVar8 < uVar24) {
    uVar14 = uVar22;
  }
  uVar22 = *(ulonglong *)(lVar15 + 0x40);
  *puVar7 = uVar22 - (uVar14 + uVar13);
  if ((uVar8 >= uVar24 && uVar8 - uVar24 != 0 || uVar28 >= uVar20 && uVar28 - uVar20 != 0) &&
     (*puVar7 = uVar22, bVar11 == 0)) {
    return;
  }
  if ((int)uVar23 == 0) {
    if (pbVar12 == (byte *)0x0) {
      return;
    }
    bVar4 = pbVar12[0x49];
    if ((bVar4 != 0x12 & bVar11) != 0) {
      return;
    }
    pdb_1420bf960(&uStack_b0,bVar4);
    iVar5 = *(int *)pbVar12;
    uStack_b8 = *(undefined4 *)(pbVar12 + 0x14);
    uStack_c8 = *(undefined4 *)(pbVar12 + 4);
    uStack_c4 = *(undefined4 *)(pbVar12 + 8);
    uStack_c0 = *(undefined4 *)(pbVar12 + 0xc);
    uStack_bc = *(undefined4 *)(pbVar12 + 0x10);
    pdb_142898eb0(&uStack_98,pbVar12 + 0x18);
    uStack_10c = 0;
    uStack_104 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11f = 0;
    uStack_118 = 0;
    uStack_117 = 0;
    uStack_168 = uStack_b0;
    uStack_160 = uStack_a8;
    uStack_158 = uStack_a0;
    uStack_14c = CONCAT44(uStack_c4,uStack_c8);
    uStack_144 = CONCAT44(uStack_bc,uStack_c0);
    uStack_13c = uStack_b8;
    uStack_f8 = (undefined4)uStack_98;
    uStack_f4 = uStack_98._4_4_;
    uStack_f0 = (undefined4)uStack_90;
    uStack_ec = uStack_90._4_4_;
    uStack_e8 = (undefined4)uStack_88;
    uStack_e4 = uStack_88._4_4_;
    uStack_e0 = (undefined4)uStack_80;
    uStack_dc = uStack_80._4_4_;
    uStack_d8 = (undefined4)uStack_78;
    uStack_d4 = uStack_78._4_4_;
    uStack_d0 = uStack_70;
    uStack_cc = uStack_6c;
    iStack_150 = iVar5;
    bStack_100 = bVar4;
    pdb_14289dee0(&uStack_98,param_7,&uStack_168,&UNK_1435ac6a8);
    uVar10 = uStack_98;
    if (iVar5 == 0xb) {
      plVar17 = uStack_88;
      if (uStack_88 == (longlong *)0x0) {
        plVar17 = uStack_80;
      }
      lVar15 = plVar17[2];
      if ((ulonglong)(*plVar17 - lVar15) < 0x18) {
        pdb_142d7f1b0(plVar17,lVar15,0x18,1,1);
      }
      lVar18 = plVar17[1];
      *(code **)(lVar18 + lVar15) = pdb_14289cc40;
      *(undefined8 *)(lVar18 + 8 + lVar15) = uVar10;
      *(undefined1 *)(lVar18 + 0x10 + lVar15) = 0;
      plVar17[2] = lVar15 + 0x18;
    }
    if (pbVar12[0x48] == 0) {
      return;
    }
    plVar17 = uStack_88;
    if (uStack_88 == (longlong *)0x0) {
      plVar17 = uStack_80;
    }
    lVar15 = plVar17[2];
    if ((ulonglong)(*plVar17 - lVar15) < 0x20) {
      pdb_142d7f1b0(plVar17,lVar15,0x20,1,1);
    }
    lVar18 = plVar17[1];
    *(code **)(lVar18 + lVar15) = pdb_14289c920;
    *(ulonglong *)(lVar18 + 8 + lVar15) = uStack_98;
    *(undefined8 *)(lVar18 + 0x10 + lVar15) = 0;
    *(undefined1 *)(lVar18 + 0x18 + lVar15) = 0;
    plVar17[2] = lVar15 + 0x20;
    return;
  }
  uVar27 = uVar27 | uVar23 & 0xffffffff;
  bVar4 = *pbVar19;
  if (((ulonglong)bVar4 != 0x12 & bVar11) == 0) {
    if (pbVar12 == (byte *)0x0) {
      uStack_68 = uStack_68 | unaff_R12;
      if (uStack_68 != 0) {
        return;
      }
      plVar17 = (longlong *)param_7[1];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)param_7[2];
      }
      uVar2 = *(undefined4 *)(&UNK_1435ac6d8 + (ulonglong)bVar4 * 4);
      lVar15 = plVar17[2];
      if ((ulonglong)(*plVar17 - lVar15) < 0x18) {
        pdb_142d7f1b0(plVar17,lVar15,0x18,1,1);
      }
      lVar18 = plVar17[1];
      *(code **)(lVar18 + lVar15) = pdb_14289d090;
      *(ulonglong *)(lVar18 + 8 + lVar15) = uVar27;
      *(undefined4 *)(lVar18 + 0x10 + lVar15) = uVar2;
      *(undefined1 *)(lVar18 + 0x14 + lVar15) = 0;
      goto LAB_142898b53;
    }
    if (bVar4 == pbVar12[0x49]) {
      uStack_80 = (longlong *)param_7[2];
      uStack_78 = param_7[3];
      uStack_90 = *param_7;
      uStack_88 = (longlong *)param_7[1];
      uStack_158 = *(undefined8 *)(pbVar12 + 0x10);
      uStack_168._0_4_ = *(undefined4 *)pbVar12;
      uStack_168._4_4_ = *(undefined4 *)(pbVar12 + 4);
      uStack_160._0_4_ = *(undefined4 *)(pbVar12 + 8);
      uStack_160._4_4_ = *(undefined4 *)(pbVar12 + 0xc);
      plVar17 = (longlong *)param_7[1];
      if ((longlong *)param_7[1] == (longlong *)0x0) {
        plVar17 = uStack_80;
      }
      lVar15 = plVar17[2];
      uStack_98 = uVar27;
      if ((ulonglong)(*plVar17 - lVar15) < 0x30) {
        pdb_142d7f1b0(plVar17,lVar15,0x30,1,1);
      }
      lVar18 = plVar17[1];
      *(code **)(lVar18 + lVar15) = pdb_14289d1a0;
      puVar1 = (undefined4 *)(lVar18 + 8 + lVar15);
      *puVar1 = (undefined4)uStack_168;
      puVar1[1] = uStack_168._4_4_;
      puVar1[2] = (undefined4)uStack_160;
      puVar1[3] = uStack_160._4_4_;
      *(undefined8 *)(lVar18 + 0x18 + lVar15) = uStack_158;
      *(undefined1 *)(lVar18 + 0x20 + lVar15) = 0;
      *(ulonglong *)(lVar18 + 0x28 + lVar15) = uVar27;
      lVar15 = lVar15 + 0x30;
      plVar17[2] = lVar15;
      if (*(int *)(pbVar12 + 0x18) != 0xc5) {
        pdb_142898eb0(&uStack_168,pbVar12 + 0x18);
        pdb_14289dd50(&uStack_98,&uStack_168,&UNK_1435ac6c0);
        lVar15 = plVar17[2];
      }
      if ((ulonglong)(*plVar17 - lVar15) < 0x18) {
        pdb_142d7f1b0(plVar17,lVar15,0x18,1,1);
      }
      lVar18 = plVar17[1];
      *(code **)(lVar18 + lVar15) = pdb_14289cad0;
      *(ulonglong *)(lVar18 + 8 + lVar15) = uVar27;
      *(code **)(lVar18 + 0x10 + lVar15) = pdb_14289d710;
      lVar18 = lVar15 + 0x18;
      plVar17[2] = lVar18;
      if ((ulonglong)(*plVar17 - lVar18) < 0x18) {
        pdb_142d7f1b0(plVar17,lVar18,0x18,1,1);
      }
      lVar18 = plVar17[1];
      *(code **)(lVar18 + 0x18 + lVar15) = pdb_14289d0e0;
      *(ulonglong *)(lVar18 + 0x20 + lVar15) = uVar27;
      *(code **)(lVar18 + 0x28 + lVar15) = pdb_14289d710;
      plVar17[2] = lVar15 + 0x30;
      return;
    }
  }
  plVar17 = (longlong *)param_7[1];
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)param_7[2];
  }
  lVar15 = plVar17[2];
  if ((ulonglong)(*plVar17 - lVar15) < 0x18) {
    pdb_142d7f1b0(plVar17,lVar15,0x18,1,1);
  }
  lVar18 = plVar17[1];
  *(code **)(lVar18 + lVar15) = pdb_14289d040;
  *(ulonglong *)(lVar18 + 8 + lVar15) = uVar27;
  *(undefined1 *)(lVar18 + 0x10 + lVar15) = 0;
LAB_142898b53:
  plVar17[2] = lVar15 + 0x18;
  return;
}

