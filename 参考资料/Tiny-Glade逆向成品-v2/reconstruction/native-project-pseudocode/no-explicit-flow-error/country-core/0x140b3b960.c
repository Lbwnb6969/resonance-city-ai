// VA 0x140b3b960, PDB extent 2753 bytes
// country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::ui_edit_rectangle_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140b3be7d) */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::ui_edit_rectangle_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_dims.rs
   Extent: 2753 */

void pdb_140b3b960(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined8 *param_5,undefined8 *param_6,
                  undefined8 *param_7,longlong *param_8,longlong param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  undefined1 uVar14;
  uint uVar15;
  char *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*unaff_RBX) [16];
  undefined1 (*unaff_RSI) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  byte bVar22;
  longlong unaff_R13;
  undefined1 (*pauVar23) [16];
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  undefined4 in_XMM1_Da;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 (*pauStack_208) [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  byte bStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 *puStack_178;
  ulonglong uStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  longlong lStack_140;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 *puStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined1 (*pauStack_70) [16];
  byte bStack_64;
  byte bStack_63;
  undefined1 uStack_62;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_90 = (undefined8 *)*param_5;
  uStack_190 = param_5[4];
  uStack_1c8 = param_5[10];
  uStack_1d8 = param_5[8];
  uStack_1d0 = param_5[9];
  cStack_61 = pdb_140e94b40();
  if (cStack_61 == '\0') {
    uStack_1b0 = 0;
    pcVar16 = (char *)*param_1;
    pauVar23 = param_3;
    if (*pcVar16 != '\0') goto LAB_140b3bbae;
    goto LAB_140b3bbf8;
  }
  unaff_RBX = (undefined1 (*) [16])&UNK_143058aa7;
  unaff_R13 = 0x5e;
  uVar18 = 0x5e;
  lVar10 = pdb_140b413c0(&UNK_143058aa7);
  if (lVar10 == 1) {
    if (uVar18 < 0x5f) {
      unaff_RBX = (undefined1 (*) [16])&UNK_143058aa7;
      uVar11 = pdb_140b413c0(&UNK_143058aa7);
      if ((uVar11 & 1) != 0) {
        if (0x5e < uVar18 + 2) goto LAB_140b3c2b6;
        unaff_R13 = 0x5c - uVar18;
        unaff_RBX = (undefined1 (*) [16])(&UNK_143058aa9 + uVar18);
      }
      goto LAB_140b3ba3b;
    }
  }
  else {
LAB_140b3ba3b:
    puVar12 = &UNK_1430584d7;
    pauVar23 = (undefined1 (*) [16])&UNK_143058488;
    do {
      pbVar1 = puVar12 + -1;
      uVar15 = (uint)(char)*pbVar1;
      pauStack_70 = param_4;
      if ((int)uVar15 < 0) {
        bVar8 = puVar12[-2];
        if ((char)bVar8 < -0x40) {
          bVar22 = puVar12[-3];
          if ((char)bVar22 < -0x40) {
            pbVar2 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar15 = bVar22 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar15 = bVar22 & 0xf;
          }
          uVar15 = bVar8 & 0x3f | uVar15 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar15 = bVar8 & 0x1f;
        }
        uVar15 = (uint)(*pbVar1 & 0x3f) | uVar15 << 6;
        if (uVar15 != 0x5c) goto LAB_140b3bad9;
LAB_140b3bb06:
        if ((undefined *)0x4f < puVar12 + -0x143058487) goto LAB_140b3c273;
        unaff_RSI = (undefined1 (*) [16])(0x4e - (longlong)(puVar12 + -0x143058488));
        pauVar23 = (undefined1 (*) [16])(puVar12 + 1);
        goto LAB_140b3bb29;
      }
      puVar12 = puVar12 + -1;
      if (uVar15 == 0x5c) goto LAB_140b3bb06;
LAB_140b3bad9:
      if (uVar15 == 0x2f) goto LAB_140b3bb06;
    } while (puVar12 != &UNK_143058488);
    unaff_RSI = (undefined1 (*) [16])0x4f;
LAB_140b3bb29:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_140b3c22a;
    do {
      param_4 = param_2;
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_78 = plVar13;
        uStack_1a8 = pdb_140e94f10(plVar13 + 1,unaff_RBX,unaff_R13,pauVar23,unaff_RSI,1,0);
        *plStack_78 = *plStack_78 + 1;
        uStack_1b0 = 1;
        pcVar16 = (char *)*param_1;
        pauVar23 = param_3;
        param_4 = pauStack_70;
        uStack_a8 = uStack_1a8;
        if (*pcVar16 == '\0') {
LAB_140b3bbf8:
          uVar15 = *(uint *)(pcVar16 + 8);
          uStack_b0 = (ulonglong)uVar15;
          lVar10 = param_6[1];
          uVar18 = *(ulonglong *)*param_6;
          pauVar19 = (undefined1 (*) [16])0x0;
          pauVar20 = (undefined1 (*) [16])(uVar18 - *(ulonglong *)(lVar10 + 0x18));
          if (uVar18 < *(ulonglong *)(lVar10 + 0x18)) {
            pauVar20 = pauVar19;
          }
          pauVar21 = (undefined1 (*) [16])(uVar18 - *(ulonglong *)(lVar10 + 0x38));
          if (uVar18 < *(ulonglong *)(lVar10 + 0x38)) {
            pauVar21 = pauVar19;
          }
          bVar24 = pauVar21 <= *(undefined1 (**) [16])(lVar10 + 0x30);
          pauVar21 = (undefined1 (*) [16])
                     ((longlong)*(undefined1 (**) [16])(lVar10 + 0x30) - (longlong)pauVar21);
          bVar26 = pauVar21 != (undefined1 (*) [16])0x0;
          if (!bVar24) {
            pauVar21 = pauVar19;
          }
          bVar25 = pauVar20 <= *(undefined1 (**) [16])(lVar10 + 0x10);
          pauVar20 = (undefined1 (*) [16])
                     ((longlong)*(undefined1 (**) [16])(lVar10 + 0x10) - (longlong)pauVar20);
          bVar27 = pauVar20 != (undefined1 (*) [16])0x0;
          if (!bVar25) {
            pauVar20 = pauVar19;
          }
          pauStack_150 = *(undefined1 (**) [16])(pcVar16 + 0x10);
          uStack_62 = bVar25 && bVar27 || bVar24 && bVar26;
          unaff_RSI = (undefined1 (*) [16])(*pauVar21 + (longlong)*pauVar20);
          if (bVar25 && bVar27 || bVar24 && bVar26) {
            unaff_RSI = pauVar19;
          }
          *(ulonglong *)*param_6 = *(longlong *)(lVar10 + 0x40) - (longlong)unaff_RSI;
          lStack_168 = puStack_90[3];
          if (lStack_168 != 0) {
            unaff_RSI = (undefined1 (*) [16])*puStack_90;
            auVar5 = *unaff_RSI;
            uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar5[0xf] >> 7) << 0xf);
            plStack_80 = *(longlong **)(param_9 + 8);
            if (plStack_80 == (longlong *)0x0) {
              plStack_80 = *(longlong **)(param_9 + 0x10);
            }
            uStack_148 = *(undefined8 *)*param_4;
            pauStack_70 = *(undefined1 (**) [16])*pauVar23;
            bStack_63 = (!bVar25 || !bVar27) && (!bVar24 || !bVar26);
            uStack_188 = *(undefined8 *)*param_2;
            uStack_9c = *(undefined4 *)((longlong)param_7 + 0x1c);
            uStack_180 = *param_7;
            puStack_178 = (undefined4 *)param_7[2];
            pauVar23 = unaff_RSI + 1;
            uStack_98 = *(undefined4 *)((longlong)param_8 + 0x1c);
            lStack_b8 = *param_8;
            puStack_158 = (undefined4 *)param_8[2];
            lStack_140 = lStack_b8 + 0x20;
            uStack_94 = uVar15 - 1;
            do {
              if ((short)uVar9 == 0) {
                do {
                  auVar5 = *pauVar23;
                  unaff_RSI = unaff_RSI + -0x2b0;
                  pauVar23 = pauVar23 + 1;
                  uVar9 = (ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar9 == 0);
              }
              uStack_170 = (ulonglong)uVar9;
              uVar15 = 0;
              for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar15 = uVar15 + 1;
              }
              uVar18 = (ulonglong)uVar15;
              if (*(int *)unaff_RSI[uVar18 * -0x2b + -5] == 1) {
                param_2 = *(undefined1 (**) [16])unaff_RSI[uVar18 * -0x2b + -0x2b];
                auStack_d8 = *(undefined1 (*) [16])(unaff_RSI[uVar18 * -0x2b + -5] + 4);
                uStack_c8 = *(undefined8 *)(unaff_RSI[uVar18 * -0x2b + -4] + 4);
                if (uStack_94 < 2) {
                  param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
                  if (pauStack_150 != param_2) goto LAB_140b3bd60;
                }
                else {
                  if ((int)uStack_b0 != 0) goto LAB_140b3bbae;
                  param_1 = (undefined8 *)0x0;
                }
                pdb_140df3450(&pauStack_138,auStack_d8);
                pdb_1409f1340(&uStack_238,uStack_148);
                uStack_f8 = pdb_140deea90(&pauStack_138,&uStack_238);
                uStack_f4 = in_XMM1_Da;
                bVar8 = pdb_140dee720(&uStack_f8);
                bVar22 = (byte)param_1;
                plStack_78 = (longlong *)CONCAT71(plStack_78._1_7_,bVar8 | bVar22);
                bStack_64 = bVar22 | bStack_63;
                param_4 = (undefined1 (*) [16])0x0;
                do {
                  while( true ) {
                    uStack_1f0 = uStack_c8;
                    uStack_200 = auStack_d8._0_8_;
                    uStack_1f8 = auStack_d8._8_8_;
                    uStack_238 = 0;
                    uStack_230 = 0;
                    pauStack_208 = param_2;
                    pauStack_1e8 = param_4;
                    bStack_1e0 = bVar22;
                    if ((((char)plStack_78 != '\0') ||
                        (((pauStack_138 = param_2, pauStack_130 = param_4,
                          uVar18 = pdb_1400b0130(&pauStack_138), pauStack_70[1][8] != '\0' &&
                          ((uVar18 ^ *(ulonglong *)(pauStack_70[3] + 8)) == 0x448d3066df154a46)) &&
                         (*(int *)(pauStack_70[2] + 8) != 2)))) &&
                       ((unaff_RBX = pauStack_70,
                        unaff_R13 = pdb_1409cb310(&uStack_238,pauStack_70,puStack_90,uStack_190,
                                                  &uStack_1d8,uStack_62), lStack_1c0 = unaff_R13,
                        pauStack_1b8 = unaff_RBX, bStack_64 != 0 ||
                        (((*(char *)(unaff_R13 + 0x18) == '\x02' &&
                          (*(undefined1 (**) [16])(unaff_R13 + 0x38) == unaff_RBX)) &&
                         (*(char *)(unaff_R13 + 0x19) != '\x02')))))) break;
LAB_140b3be90:
                    param_4 = (undefined1 (*) [16])(*param_4 + 1);
                    if ((undefined1 (*) [16])0x3 < param_4) goto LAB_140b3bd60;
                  }
                  *puStack_178 = uStack_9c;
                  pdb_1409cbc40(&uStack_238,&lStack_1c0,uStack_188,uStack_180);
                  if (((bVar22 == 0) && (*(char *)(unaff_R13 + 0x18) == '\x01')) &&
                     ((*(undefined1 (**) [16])(unaff_R13 + 0x38) == unaff_RBX &&
                      (*(char *)(unaff_R13 + 0x19) != '\0')))) {
                    lVar10 = plStack_80[2];
                    if ((ulonglong)(*plStack_80 - lVar10) < 0x18) {
                      lStack_88 = lVar10;
                      pdb_142d7f1b0(plStack_80,lVar10,0x18,1,1);
                      lVar10 = lStack_88;
                    }
                    lVar6 = plStack_80[1];
                    *(code **)(lVar6 + lVar10) = pdb_1416099f0;
                    *(undefined1 (**) [16])(lVar6 + 8 + lVar10) = param_2;
                    *(undefined1 *)(lVar6 + 0x10 + lVar10) = 2;
                    plStack_80[2] = lVar10 + 0x18;
                  }
                  if ((*(char *)(unaff_R13 + 0x18) == '\0') ||
                     (*(undefined1 (**) [16])(unaff_R13 + 0x38) != unaff_RBX)) goto LAB_140b3be90;
                  uVar15 = *(uint *)(unaff_R13 + 0x28);
                  unaff_RBX = (undefined1 (*) [16])(ulonglong)uVar15;
                  if (uVar15 == 2) goto LAB_140b3be90;
                  uVar14 = 2;
                  if (*(char *)(unaff_R13 + 0x18) == '\x02') {
                    uVar14 = *(undefined1 *)(unaff_R13 + 0x19);
                  }
                  lStack_88 = CONCAT71(lStack_88._1_7_,uVar14);
                  uStack_108 = *(undefined4 *)(unaff_R13 + 0x5c);
                  pauStack_138 = *(undefined1 (**) [16])(unaff_R13 + 0x2c);
                  pauStack_130 = *(undefined1 (**) [16])(unaff_R13 + 0x34);
                  uStack_128 = *(undefined4 *)(unaff_R13 + 0x3c);
                  uStack_124 = *(undefined4 *)(unaff_R13 + 0x40);
                  uStack_120 = *(undefined4 *)(unaff_R13 + 0x44);
                  uStack_11c = *(undefined4 *)(unaff_R13 + 0x48);
                  uStack_118 = *(undefined4 *)(unaff_R13 + 0x4c);
                  uStack_114 = *(undefined4 *)(unaff_R13 + 0x50);
                  uStack_110 = *(undefined4 *)(unaff_R13 + 0x54);
                  uStack_10c = *(undefined4 *)(unaff_R13 + 0x58);
                  uStack_f8 = auStack_d8._0_4_;
                  uStack_f4 = auStack_d8._4_4_;
                  uStack_f0 = auStack_d8._8_8_;
                  uStack_e8 = uStack_c8;
                  *puStack_158 = uStack_98;
                  lVar10 = *(longlong *)(lStack_b8 + 0x30);
                  uStack_160 = *(undefined8 *)(lStack_b8 + 0x40);
                  if (lVar10 == *(longlong *)(lStack_b8 + 0x20)) {
                    pdb_142d8a810(lStack_140);
                  }
                  lVar6 = *(longlong *)(lStack_b8 + 0x28);
                  lVar17 = lVar10 * 0x70;
                  *(uint *)(lVar6 + lVar17) = uVar15;
                  puVar3 = (undefined8 *)(lVar6 + 4 + lVar17);
                  *puVar3 = pauStack_138;
                  puVar3[1] = pauStack_130;
                  puVar4 = (undefined4 *)(lVar6 + 0x14 + lVar17);
                  *puVar4 = uStack_128;
                  puVar4[1] = uStack_124;
                  puVar4[2] = uStack_120;
                  puVar4[3] = uStack_11c;
                  puVar3 = (undefined8 *)(lVar6 + 0x24 + lVar17);
                  *puVar3 = CONCAT44(uStack_114,uStack_118);
                  puVar3[1] = CONCAT44(uStack_10c,uStack_110);
                  *(undefined4 *)(lVar6 + 0x34 + lVar17) = uStack_108;
                  *(undefined1 (**) [16])(lVar6 + 0x38 + lVar17) = param_2;
                  auVar5._4_4_ = uStack_f4;
                  auVar5._0_4_ = uStack_f8;
                  auVar5._8_8_ = uStack_f0;
                  *(undefined1 (*) [16])(lVar6 + 0x40 + lVar17) = auVar5;
                  *(undefined8 *)(lVar6 + 0x50 + lVar17) = uStack_e8;
                  *(undefined1 (**) [16])(lVar6 + 0x58 + lVar17) = param_4;
                  *(undefined1 *)(lVar6 + 0x60 + lVar17) = (undefined1)lStack_88;
                  *(undefined8 *)(lVar6 + 0x68 + lVar17) = uStack_160;
                  unaff_R13 = lVar10 + 1;
                  *(longlong *)(lStack_b8 + 0x30) = unaff_R13;
                  *(longlong *)(lStack_b8 + 0x40) = *(longlong *)(lStack_b8 + 0x40) + 1;
                  param_4 = (undefined1 (*) [16])(*param_4 + 1);
                  in_XMM1_Da = uStack_128;
                } while (param_4 < (undefined1 (*) [16])0x4);
              }
LAB_140b3bd60:
              uVar9 = (uint)uStack_170 - 1 & (uint)uStack_170;
              lStack_168 = lStack_168 + -1;
            } while (lStack_168 != 0);
          }
          if (cStack_61 == '\0') {
            return;
          }
          plVar13 = (longlong *)pdb_140e97000();
          if (((char)plVar13[0xd] != '\x01') &&
             (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) break;
          param_3 = param_2;
          if (*plVar13 == 0) {
            *plVar13 = -1;
            pauStack_70 = (undefined1 (*) [16])plVar13;
            pdb_140e95370(plVar13 + 1,uStack_a8);
            goto LAB_140b3c1f9;
          }
        }
        else {
LAB_140b3bbae:
          if (cStack_61 == '\0') {
            return;
          }
          plVar13 = (longlong *)pdb_140e97000();
          if (((char)plVar13[0xd] != '\x01') &&
             (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) break;
          param_3 = param_2;
          if (*plVar13 == 0) {
            *plVar13 = -1;
            pauStack_70 = (undefined1 (*) [16])plVar13;
            pdb_140e95370(plVar13 + 1,uStack_a8);
LAB_140b3c1f9:
            *(longlong *)pauStack_70 = *(longlong *)pauStack_70 + 1;
            return;
          }
        }
      }
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
      param_2 = param_4;
LAB_140b3c22a:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140b3c273:
    pdb_142dc8070(&UNK_143058488,0x4f);
  }
  pdb_142dc8070(&UNK_143058aa7,0x5e,0);
LAB_140b3c2b6:
  pdb_142dc8070(&UNK_143058aa7,0x5e);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

