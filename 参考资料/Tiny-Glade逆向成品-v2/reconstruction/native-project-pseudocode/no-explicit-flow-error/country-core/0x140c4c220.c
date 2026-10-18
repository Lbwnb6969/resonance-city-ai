// VA 0x140c4c220, PDB extent 7397 bytes
// country_core::systems::wall::set_wall_style::set_wall_style
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/set_wall_style.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::set_wall_style::set_wall_style
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/set_wall_style.rs
   Extent: 7397 */

void pdb_140c4c220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  float fVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 uVar32;
  ushort uVar33;
  longlong lVar34;
  longlong lVar35;
  byte bVar36;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  undefined1 unaff_XMM8_Bc;
  undefined1 unaff_XMM8_Bd;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  undefined1 unaff_XMM8_Bg;
  undefined1 unaff_XMM8_Bh;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  undefined1 unaff_XMM8_Bk;
  undefined1 unaff_XMM8_Bl;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  undefined1 unaff_XMM8_Bo;
  undefined1 unaff_XMM8_Bp;
  float fVar44;
  float fVar45;
  float fVar46;
  longlong lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  longlong **pplStack_1f0;
  ulonglong *puStack_148;
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined4 *puStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined4 uStack_104;
  ulonglong *puStack_100;
  longlong *plStack_f8;
  undefined4 uStack_ec;
  longlong *plStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  puVar8 = (ulonglong *)*param_1;
  lVar25 = param_1[1];
  uVar24 = *puVar8;
  uVar26 = 0;
  uVar28 = uVar24 - *(ulonglong *)(lVar25 + 0x18);
  if (uVar24 < *(ulonglong *)(lVar25 + 0x18)) {
    uVar28 = uVar26;
  }
  uVar31 = uVar24 - *(ulonglong *)(lVar25 + 0x38);
  if (uVar24 < *(ulonglong *)(lVar25 + 0x38)) {
    uVar31 = uVar26;
  }
  lVar22 = uVar28 * 0x18 + *(longlong *)(lVar25 + 8);
  uVar24 = *(ulonglong *)(lVar25 + 0x10) - uVar28;
  if (*(ulonglong *)(lVar25 + 0x10) < uVar28) {
    lVar22 = 8;
    uVar24 = uVar26;
  }
  puVar27 = (ulonglong *)(uVar31 * 0x18 + *(longlong *)(lVar25 + 0x28));
  uVar28 = *(ulonglong *)(lVar25 + 0x30) - uVar31;
  if (*(ulonglong *)(lVar25 + 0x30) < uVar31) {
    puVar27 = (ulonglong *)0x8;
    uVar28 = uVar26;
  }
  *puVar8 = (*(longlong *)(lVar25 + 0x40) - uVar28) - uVar24;
  uVar2 = _DAT_142e36f50;
  fVar20 = _DAT_142e36f28;
  lVar29 = lVar22 + uVar24 * 0x18;
  lVar35 = (longlong)puVar27 + uVar28 * 0x18;
  uStack_ec = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_128 = *param_6;
  puStack_120 = (undefined4 *)param_6[2];
  uStack_104 = *(undefined4 *)((longlong)param_8 + 0x1c);
  uStack_130 = *param_8;
  puStack_138 = (undefined4 *)param_8[2];
  plStack_f8 = (longlong *)*param_7;
  uStack_13c = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_110 = *param_9;
  puVar9 = (undefined4 *)param_9[2];
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  iVar15 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  iVar16 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  iVar17 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  lStack_118 = lStack_128 + 0x60;
  plVar1 = plStack_f8 + 4;
  lVar25 = lStack_110 + 0x20;
  do {
    do {
      if ((lVar22 == 0) || (lVar22 == lVar29)) {
        if ((puVar27 == (ulonglong *)0x0) || (puVar27 == (ulonglong *)lVar35)) {
          puStack_148 = (ulonglong *)*param_2;
          lVar22 = param_2[1];
          uVar24 = *puStack_148;
          uVar26 = 0;
          uVar28 = uVar24 - *(ulonglong *)(lVar22 + 0x18);
          if (uVar24 < *(ulonglong *)(lVar22 + 0x18)) {
            uVar28 = uVar26;
          }
          uVar31 = uVar24 - *(ulonglong *)(lVar22 + 0x38);
          if (uVar24 < *(ulonglong *)(lVar22 + 0x38)) {
            uVar31 = uVar26;
          }
          puStack_100 = (ulonglong *)(uVar28 * 0x18 + *(longlong *)(lVar22 + 8));
          uVar24 = *(ulonglong *)(lVar22 + 0x10) - uVar28;
          if (*(ulonglong *)(lVar22 + 0x10) < uVar28) {
            puStack_100 = (ulonglong *)0x8;
            uVar24 = uVar26;
          }
          lVar29 = uVar31 * 0x18 + *(longlong *)(lVar22 + 0x28);
          uVar28 = *(ulonglong *)(lVar22 + 0x30) - uVar31;
          if (*(ulonglong *)(lVar22 + 0x30) < uVar31) {
            lVar29 = 8;
            uVar28 = uVar26;
          }
          *puStack_148 = (*(longlong *)(lVar22 + 0x40) - uVar28) - uVar24;
          uVar2 = _DAT_142e36f50;
          lVar22 = (longlong)puStack_100 + uVar24 * 0x18;
          lVar35 = lVar29 + uVar28 * 0x18;
          do {
            do {
              if ((puStack_100 == (ulonglong *)0x0) || (puStack_100 == (ulonglong *)lVar22)) {
                if ((lVar29 == 0) || (lVar29 == lVar35)) {
                  puVar8 = (ulonglong *)*param_5;
                  lVar25 = param_5[1];
                  uVar24 = *puVar8;
                  uVar26 = 0;
                  uVar28 = uVar24 - *(ulonglong *)(lVar25 + 0x18);
                  if (uVar24 < *(ulonglong *)(lVar25 + 0x18)) {
                    uVar28 = uVar26;
                  }
                  uVar31 = uVar24 - *(ulonglong *)(lVar25 + 0x38);
                  if (uVar24 < *(ulonglong *)(lVar25 + 0x38)) {
                    uVar31 = uVar26;
                  }
                  lVar22 = uVar28 * 0x20 + *(longlong *)(lVar25 + 8);
                  uVar24 = *(ulonglong *)(lVar25 + 0x10) - uVar28;
                  if (*(ulonglong *)(lVar25 + 0x10) < uVar28) {
                    lVar22 = 8;
                    uVar24 = uVar26;
                  }
                  lVar29 = uVar31 * 0x20 + *(longlong *)(lVar25 + 0x28);
                  uVar28 = *(ulonglong *)(lVar25 + 0x30) - uVar31;
                  if (*(ulonglong *)(lVar25 + 0x30) < uVar31) {
                    lVar29 = 8;
                    uVar28 = uVar26;
                  }
                  *puVar8 = (*(longlong *)(lVar25 + 0x40) - uVar28) - uVar24;
                  puStack_100 = (ulonglong *)(uVar24 * 0x20 + lVar22);
                  plStack_f8 = (longlong *)(uVar28 * 0x20 + lVar29);
                  do {
                    if ((lVar22 == 0) || ((ulonglong *)lVar22 == puStack_100)) {
                      if ((lVar29 == 0) || ((longlong *)lVar29 == plStack_f8)) {
                        puStack_100 = (ulonglong *)*param_3;
                        lVar25 = param_3[1];
                        uVar24 = *puStack_100;
                        uVar26 = 0;
                        uVar28 = uVar24 - *(ulonglong *)(lVar25 + 0x18);
                        if (uVar24 < *(ulonglong *)(lVar25 + 0x18)) {
                          uVar28 = uVar26;
                        }
                        uVar31 = uVar24 - *(ulonglong *)(lVar25 + 0x38);
                        if (uVar24 < *(ulonglong *)(lVar25 + 0x38)) {
                          uVar31 = uVar26;
                        }
                        lVar22 = uVar28 * 0x18 + *(longlong *)(lVar25 + 8);
                        uVar24 = *(ulonglong *)(lVar25 + 0x10) - uVar28;
                        if (*(ulonglong *)(lVar25 + 0x10) < uVar28) {
                          lVar22 = 8;
                          uVar24 = uVar26;
                        }
                        lVar29 = uVar31 * 0x18 + *(longlong *)(lVar25 + 0x28);
                        uVar28 = *(ulonglong *)(lVar25 + 0x30) - uVar31;
                        if (*(ulonglong *)(lVar25 + 0x30) < uVar31) {
                          lVar29 = 8;
                          uVar28 = uVar26;
                        }
                        *puStack_100 = (*(longlong *)(lVar25 + 0x40) - uVar28) - uVar24;
                        plStack_f8 = (longlong *)(lVar22 + uVar24 * 0x18);
                        lStack_110 = lVar29 + uVar28 * 0x18;
                        do {
                          if ((lVar22 == 0) || ((longlong *)lVar22 == plStack_f8)) {
                            if ((lVar29 == 0) || (lVar29 == lStack_110)) {
                              puStack_100 = (ulonglong *)*param_4;
                              lVar25 = param_4[1];
                              uVar24 = *puStack_100;
                              uVar26 = 0;
                              uVar28 = uVar24 - *(ulonglong *)(lVar25 + 0x18);
                              if (uVar24 < *(ulonglong *)(lVar25 + 0x18)) {
                                uVar28 = uVar26;
                              }
                              uVar31 = uVar24 - *(ulonglong *)(lVar25 + 0x38);
                              if (uVar24 < *(ulonglong *)(lVar25 + 0x38)) {
                                uVar31 = uVar26;
                              }
                              lVar22 = uVar28 * 0x18 + *(longlong *)(lVar25 + 8);
                              uVar24 = *(ulonglong *)(lVar25 + 0x10) - uVar28;
                              if (*(ulonglong *)(lVar25 + 0x10) < uVar28) {
                                lVar22 = 8;
                                uVar24 = uVar26;
                              }
                              lVar29 = uVar31 * 0x18 + *(longlong *)(lVar25 + 0x28);
                              uVar28 = *(ulonglong *)(lVar25 + 0x30) - uVar31;
                              if (*(ulonglong *)(lVar25 + 0x30) < uVar31) {
                                lVar29 = 8;
                                uVar28 = uVar26;
                              }
                              *puStack_100 = (*(longlong *)(lVar25 + 0x40) - uVar28) - uVar24;
                              plStack_f8 = (longlong *)(lVar22 + uVar24 * 0x18);
                              lStack_110 = lVar29 + uVar28 * 0x18;
                              do {
                                if ((lVar22 == 0) || ((longlong *)lVar22 == plStack_f8)) {
                                  if ((lVar29 == 0) || (lVar29 == lStack_110)) {
                                    return;
                                  }
                                  lVar35 = lVar29 + 0x18;
                                  lVar25 = 0;
                                }
                                else {
                                  lVar25 = lVar22 + 0x18;
                                  lVar35 = lVar29;
                                  lVar29 = lVar22;
                                }
                                *puStack_100 = *puStack_100 + 1;
                                uVar32 = *(undefined1 *)(lVar29 + 0x11);
                                uVar18 = *(undefined2 *)(lVar29 + 0x10);
                                lVar23 = *(longlong *)(lVar29 + 8);
                                cVar6 = *(char *)(lVar29 + 0x12);
                                *puStack_120 = uStack_ec;
                                lStack_d0 = lVar23;
                                lVar22 = pdb_1417bd890(lStack_128,&lStack_d0);
                                if (lVar22 == 0) {
                                  if (1 < *_DAT_143ca8e90) {
                                    plStack_e8 = &lStack_d0;
                                    pcStack_e0 = pdb_140c04ef0;
                                    lStack_248 = 0;
                                    puStack_240 = &UNK_143021dde;
                                    uStack_238 = 0x2b;
                                    lStack_230 = 0;
                                    puStack_228 = &UNK_143021da7;
                                    uStack_220 = 0x36;
                                    uStack_218 = 2;
                                    puStack_210 = &UNK_143021dde;
                                    uStack_208 = 0x2b;
                                    uStack_200 = 0xfd00000001;
                                    puStack_1f8 = &UNK_143021d78;
                                    pplStack_1f0 = &plStack_e8;
                                    pdb_140f332f0(&uStack_b1,&lStack_248);
                                  }
                                }
                                else {
                                  pdb_1403b05d0(lStack_118,lVar23);
                                  *(undefined1 *)(lVar22 + 0x6c) = uVar32;
                                }
                                lVar29 = lVar35;
                                lVar22 = lVar25;
                                if (cVar6 != '\0') {
                                  lStack_d0 = 0;
                                  lStack_c8 = 8;
                                  lStack_c0 = 0;
                                  uStack_238 = CONCAT62(uStack_238._2_6_,uVar18);
                                  lStack_248 = -0x7ffffffffffffff3;
                                  uStack_b3 = 1;
                                  puStack_240 = (undefined *)lVar23;
                                  pdb_140a1aa80(&lStack_d0,&lStack_248);
                                  *puStack_138 = uStack_104;
                                  plStack_e8 = (longlong *)0x0;
                                  pcStack_e0 = (code *)0x8;
                                  uStack_d8 = 0;
                                  lStack_230 = lStack_c8 + lStack_c0 * 0x18;
                                  lStack_248 = lStack_c8;
                                  puStack_240 = (undefined *)lStack_c8;
                                  uStack_238 = lStack_d0;
                                  lVar25 = lStack_c8;
                                  puStack_240 = (undefined *)pdb_140c69b60(&lStack_248);
                                  lStack_248 = 7;
                                  uStack_b3 = 0;
                                  uStack_238 = lVar25;
                                  pdb_140ae5180(uStack_130,&lStack_248,&UNK_14306e270);
                                }
                              } while( true );
                            }
                            lVar35 = lVar29 + 0x18;
                            lVar25 = 0;
                          }
                          else {
                            lVar25 = lVar22 + 0x18;
                            lVar35 = lVar29;
                            lVar29 = lVar22;
                          }
                          *puStack_100 = *puStack_100 + 1;
                          uVar32 = *(undefined1 *)(lVar29 + 0x11);
                          uVar19 = *(undefined2 *)(lVar29 + 0x10);
                          uVar18 = *(undefined2 *)(lVar29 + 0x10);
                          lVar23 = *(longlong *)(lVar29 + 8);
                          cVar6 = *(char *)(lVar29 + 0x12);
                          *puStack_120 = uStack_ec;
                          lStack_d0 = lVar23;
                          lVar22 = pdb_1417bd890(lStack_128,&lStack_d0);
                          if (lVar22 == 0) {
                            if (1 < *_DAT_143ca8e90) {
                              plStack_e8 = &lStack_d0;
                              pcStack_e0 = pdb_140c04ef0;
                              lStack_248 = 0;
                              puStack_240 = &UNK_143021dde;
                              uStack_238 = 0x2b;
                              lStack_230 = 0;
                              puStack_228 = &UNK_143021da7;
                              uStack_220 = 0x36;
                              uStack_218 = 2;
                              puStack_210 = &UNK_143021dde;
                              uStack_208 = 0x2b;
                              uStack_200 = 0xfd00000001;
                              puStack_1f8 = &UNK_143021d78;
                              pplStack_1f0 = &plStack_e8;
                              pdb_140f332f0(&uStack_b1,&lStack_248);
                            }
                          }
                          else {
                            pdb_1403b05d0(lStack_118,lVar23);
                            *(undefined1 *)(lVar22 + 0x6b) = uVar32;
                          }
                          *puStack_120 = uStack_ec;
                          lStack_d0 = lVar23;
                          lVar22 = pdb_1417bd890(lStack_128,&lStack_d0);
                          if (lVar22 == 0) {
                            if (1 < *_DAT_143ca8e90) {
                              plStack_e8 = &lStack_d0;
                              pcStack_e0 = pdb_140c04ef0;
                              lStack_248 = 0;
                              puStack_240 = &UNK_143021dde;
                              uStack_238 = 0x2b;
                              lStack_230 = 0;
                              puStack_228 = &UNK_143021da7;
                              uStack_220 = 0x36;
                              uStack_218 = 2;
                              puStack_210 = &UNK_143021dde;
                              uStack_208 = 0x2b;
                              uStack_200 = 0xfd00000001;
                              puStack_1f8 = &UNK_143021d78;
                              pplStack_1f0 = &plStack_e8;
                              pdb_140f332f0(&uStack_b1,&lStack_248);
                            }
                          }
                          else {
                            pdb_1403b05d0(lStack_118,lVar23);
                            *(undefined1 *)(lVar22 + 0x68) = uVar32;
                          }
                          lVar29 = lVar35;
                          lVar22 = lVar25;
                          if (cVar6 != '\0') {
                            lStack_d0 = 0;
                            lStack_c8 = 8;
                            lStack_c0 = 0;
                            lStack_248 = -0x7ffffffffffffff4;
                            uStack_b2 = 1;
                            puStack_240 = (undefined *)lVar23;
                            uStack_238._0_2_ = uVar18;
                            pdb_140a1aa80(&lStack_d0,&lStack_248);
                            uStack_238 = CONCAT62(uStack_238._2_6_,uVar19);
                            lStack_248 = -0x7ffffffffffffff9;
                            uStack_b2 = 1;
                            puStack_240 = (undefined *)lVar23;
                            pdb_140a1aa80(&lStack_d0,&lStack_248);
                            *puStack_138 = uStack_104;
                            plStack_e8 = (longlong *)0x0;
                            pcStack_e0 = (code *)0x8;
                            uStack_d8 = 0;
                            lStack_230 = lStack_c8 + lStack_c0 * 0x18;
                            lStack_248 = lStack_c8;
                            puStack_240 = (undefined *)lStack_c8;
                            uStack_238 = lStack_d0;
                            lVar25 = lStack_c8;
                            puStack_240 = (undefined *)pdb_140c69b60(&lStack_248);
                            lStack_248 = 7;
                            uStack_b2 = 0;
                            uStack_238 = lVar25;
                            pdb_140ae5180(uStack_130,&lStack_248,&UNK_14306e288);
                          }
                        } while( true );
                      }
                      lVar35 = lVar29 + 0x20;
                      lVar25 = 0;
                      lVar22 = lVar29;
                    }
                    else {
                      lVar25 = lVar22 + 0x20;
                      lVar35 = lVar29;
                    }
                    *puVar8 = *puVar8 + 1;
                    uVar2 = *(undefined4 *)(lVar22 + 0x14);
                    uVar11 = *(undefined8 *)(lVar22 + 0x10);
                    lVar23 = *(longlong *)(lVar22 + 8);
                    cVar6 = *(char *)(lVar22 + 0x18);
                    *puStack_120 = uStack_ec;
                    lStack_d0 = lVar23;
                    lVar22 = pdb_1417bd890(lStack_128,&lStack_d0);
                    if (lVar22 == 0) {
                      if (1 < *_DAT_143ca8e90) {
                        plStack_e8 = &lStack_d0;
                        pcStack_e0 = pdb_140c04ef0;
                        lStack_248 = 0;
                        puStack_240 = &UNK_143021dde;
                        uStack_238 = 0x2b;
                        lStack_230 = 0;
                        puStack_228 = &UNK_143021da7;
                        uStack_220 = 0x36;
                        uStack_218 = 2;
                        puStack_210 = &UNK_143021dde;
                        uStack_208 = 0x2b;
                        uStack_200 = 0xfd00000001;
                        puStack_1f8 = &UNK_143021d78;
                        pplStack_1f0 = &plStack_e8;
                        pdb_140f332f0(&uStack_b1,&lStack_248);
                      }
                    }
                    else {
                      pdb_1403b05d0(lStack_118,lVar23);
                      *(undefined4 *)(lVar22 + 0x60) = uVar2;
                    }
                    lVar22 = lVar25;
                    lVar29 = lVar35;
                    if (cVar6 != '\0') {
                      lStack_d0 = 0;
                      lStack_c8 = 8;
                      lStack_c0 = 0;
                      lStack_248 = -0x7ffffffffffffff5;
                      uStack_b4 = 1;
                      puStack_240 = (undefined *)lVar23;
                      uStack_238 = uVar11;
                      pdb_140a1aa80(&lStack_d0,&lStack_248);
                      *puStack_138 = uStack_104;
                      plStack_e8 = (longlong *)0x0;
                      pcStack_e0 = (code *)0x8;
                      uStack_d8 = 0;
                      lStack_230 = lStack_c8 + lStack_c0 * 0x18;
                      lStack_248 = lStack_c8;
                      puStack_240 = (undefined *)lStack_c8;
                      uStack_238 = lStack_d0;
                      lVar25 = lStack_c8;
                      puStack_240 = (undefined *)pdb_140c69b60(&lStack_248);
                      lStack_248 = 7;
                      uStack_b4 = 0;
                      uStack_238 = lVar25;
                      pdb_140ae5180(uStack_130,&lStack_248,&UNK_14306e2a0);
                    }
                  } while( true );
                }
                puStack_100 = (ulonglong *)0x0;
                lVar23 = lVar29;
                lVar29 = lVar29 + 0x18;
              }
              else {
                lVar23 = (longlong)puStack_100;
                puStack_100 = (ulonglong *)((longlong)puStack_100 + 0x18);
              }
              *puStack_148 = *puStack_148 + 1;
              uVar32 = *(undefined1 *)(lVar23 + 0x11);
              uVar18 = *(undefined2 *)(lVar23 + 0x10);
              lVar10 = *(longlong *)(lVar23 + 8);
              cVar6 = *(char *)(lVar23 + 0x12);
              cVar7 = *(char *)(lVar23 + 0x13);
              *puStack_120 = uStack_ec;
              lStack_d0 = lVar10;
              lVar23 = pdb_1417bd890(lStack_128,&lStack_d0);
              if (lVar23 == 0) {
                if (1 < *_DAT_143ca8e90) {
                  plStack_e8 = &lStack_d0;
                  pcStack_e0 = pdb_140c04ef0;
                  lStack_248 = 0;
                  puStack_240 = &UNK_143021dde;
                  uStack_238 = 0x2b;
                  lStack_230 = 0;
                  puStack_228 = &UNK_143021da7;
                  uStack_220 = 0x36;
                  uStack_218 = 2;
                  puStack_210 = &UNK_143021dde;
                  uStack_208 = 0x2b;
                  uStack_200 = 0xfd00000001;
                  puStack_1f8 = &UNK_143021d78;
                  pplStack_1f0 = &plStack_e8;
                  pdb_140f332f0(&uStack_b1,&lStack_248);
                }
              }
              else {
                pdb_1403b05d0(lStack_118,lVar10);
                *(undefined1 *)(lVar23 + 0x69) = uVar32;
              }
              if (cVar6 != '\0') {
                lStack_d0 = 0;
                lStack_c8 = 8;
                lStack_c0 = 0;
                uStack_238 = CONCAT62(uStack_238._2_6_,uVar18);
                lStack_248 = -0x7ffffffffffffff7;
                uStack_b5 = 1;
                puStack_240 = (undefined *)lVar10;
                pdb_140a1aa80(&lStack_d0,&lStack_248);
                *puStack_138 = uStack_104;
                plStack_e8 = (longlong *)0x0;
                pcStack_e0 = (code *)0x8;
                uStack_d8 = 0;
                lStack_230 = lStack_c8 + lStack_c0 * 0x18;
                lStack_248 = lStack_c8;
                puStack_240 = (undefined *)lStack_c8;
                uStack_238 = lStack_d0;
                lVar23 = lStack_c8;
                puStack_240 = (undefined *)pdb_140c69b60(&lStack_248);
                lStack_248 = 7;
                uStack_b5 = 0;
                uStack_238 = lVar23;
                pdb_140ae5180(uStack_130,&lStack_248,&UNK_14306e2b8);
              }
            } while (cVar7 == '\0');
            if (plStack_f8[3] != 0) {
              lStack_248 = lVar10;
              uVar24 = pdb_1400af0a0(plVar1,&lStack_248);
              lVar23 = *plStack_f8;
              bVar36 = (byte)(uVar24 >> 0x39);
              auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
              auVar37 = pshuflw(auVar37,auVar37,0);
              lVar30 = 0;
              while( true ) {
                uVar24 = uVar24 & plStack_f8[1];
                auVar4 = *(undefined1 (*) [16])(lVar23 + uVar24);
                auVar42[0] = -(auVar4[0] == auVar37[0]);
                auVar42[1] = -(auVar4[1] == auVar37[1]);
                auVar42[2] = -(auVar4[2] == auVar37[2]);
                auVar42[3] = -(auVar4[3] == auVar37[3]);
                auVar42[4] = -(auVar4[4] == auVar37[4]);
                auVar42[5] = -(auVar4[5] == auVar37[5]);
                auVar42[6] = -(auVar4[6] == auVar37[6]);
                auVar42[7] = -(auVar4[7] == auVar37[7]);
                auVar42[8] = -(auVar4[8] == auVar37[0]);
                auVar42[9] = -(auVar4[9] == auVar37[1]);
                auVar42[10] = -(auVar4[10] == auVar37[2]);
                auVar42[0xb] = -(auVar4[0xb] == auVar37[3]);
                auVar42[0xc] = -(auVar4[0xc] == auVar37[4]);
                auVar42[0xd] = -(auVar4[0xd] == auVar37[5]);
                auVar42[0xe] = -(auVar4[0xe] == auVar37[6]);
                auVar42[0xf] = -(auVar4[0xf] == auVar37[7]);
                uVar33 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar42[0xf] >> 7) << 0xf;
                uVar21 = (uint)uVar33;
                while (uVar33 != 0) {
                  uVar12 = 0;
                  for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                    uVar12 = uVar12 + 1;
                  }
                  lVar34 = (uVar12 + uVar24 & plStack_f8[1]) * -0x2b0;
                  if (lVar10 == *(longlong *)(lVar23 + -0x2b0 + lVar34)) {
                    lVar23 = lVar23 + lVar34;
                    if ((*(ulonglong *)(lVar23 + -0x298) < 2) ||
                       (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14306e2d0);
                    }
                    uVar32 = *(undefined1 *)(lVar23 + -5);
                    lStack_248 = lVar10;
                    if (plStack_f8[3] == 0) goto LAB_140c4cd60;
                    goto LAB_140c4ccb6;
                  }
                  uVar33 = (ushort)(uVar21 - 1) & (ushort)uVar21;
                  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar33);
                }
                auVar39[0] = -(auVar4[0] == -1);
                auVar39[1] = -(auVar4[1] == -1);
                auVar39[2] = -(auVar4[2] == -1);
                auVar39[3] = -(auVar4[3] == -1);
                auVar39[4] = -(auVar4[4] == -1);
                auVar39[5] = -(auVar4[5] == -1);
                auVar39[6] = -(auVar4[6] == -1);
                auVar39[7] = -(auVar4[7] == -1);
                auVar39[8] = -(auVar4[8] == -1);
                auVar39[9] = -(auVar4[9] == -1);
                auVar39[10] = -(auVar4[10] == -1);
                auVar39[0xb] = -(auVar4[0xb] == -1);
                auVar39[0xc] = -(auVar4[0xc] == -1);
                auVar39[0xd] = -(auVar4[0xd] == -1);
                auVar39[0xe] = -(auVar4[0xe] == -1);
                auVar39[0xf] = -(auVar4[0xf] == -1);
                if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
                uVar24 = uVar24 + lVar30 + 0x10;
                lVar30 = lVar30 + 0x10;
              }
            }
            uVar32 = 0;
            lStack_248 = lVar10;
            if (plStack_f8[3] != 0) {
LAB_140c4ccb6:
              lStack_248 = lVar10;
              uVar24 = pdb_1400af0a0(plVar1,&lStack_248);
              lVar23 = *plStack_f8;
              bVar36 = (byte)(uVar24 >> 0x39);
              auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
              auVar37 = pshuflw(auVar37,auVar37,0);
              lVar30 = 0;
              while( true ) {
                uVar24 = uVar24 & plStack_f8[1];
                auVar4 = *(undefined1 (*) [16])(lVar23 + uVar24);
                auVar43[0] = -(auVar4[0] == auVar37[0]);
                auVar43[1] = -(auVar4[1] == auVar37[1]);
                auVar43[2] = -(auVar4[2] == auVar37[2]);
                auVar43[3] = -(auVar4[3] == auVar37[3]);
                auVar43[4] = -(auVar4[4] == auVar37[4]);
                auVar43[5] = -(auVar4[5] == auVar37[5]);
                auVar43[6] = -(auVar4[6] == auVar37[6]);
                auVar43[7] = -(auVar4[7] == auVar37[7]);
                auVar43[8] = -(auVar4[8] == auVar37[0]);
                auVar43[9] = -(auVar4[9] == auVar37[1]);
                auVar43[10] = -(auVar4[10] == auVar37[2]);
                auVar43[0xb] = -(auVar4[0xb] == auVar37[3]);
                auVar43[0xc] = -(auVar4[0xc] == auVar37[4]);
                auVar43[0xd] = -(auVar4[0xd] == auVar37[5]);
                auVar43[0xe] = -(auVar4[0xe] == auVar37[6]);
                auVar43[0xf] = -(auVar4[0xf] == auVar37[7]);
                uVar33 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar43[0xf] >> 7) << 0xf;
                uVar21 = (uint)uVar33;
                while (uVar33 != 0) {
                  uVar12 = 0;
                  for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                    uVar12 = uVar12 + 1;
                  }
                  lVar34 = (uVar12 + uVar24 & plStack_f8[1]) * -0x2b0;
                  if (lVar10 == *(longlong *)(lVar23 + -0x2b0 + lVar34)) {
                    lVar23 = lVar23 + lVar34;
                    if ((*(ulonglong *)(lVar23 + -0x298) < 2) ||
                       (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14306e2e8);
                    }
                    uVar21 = pdb_1419a9060(lVar23 + -0x270,uVar2);
                    uVar28 = (ulonglong)uVar21;
                    uVar24 = *(ulonglong *)(lVar23 + -0x260);
                    if (uVar24 <= uVar28) goto LAB_140c4d911;
                    uVar26 = uVar28 + 1;
                    if (uVar24 <= uVar26) goto LAB_140c4d902;
                    lVar23 = *(longlong *)(lVar23 + -0x268);
                    fVar46 = fVar20 - extraout_XMM0_Da_00;
                    uVar11 = *(undefined8 *)(lVar23 + uVar28 * 0xc);
                    uVar3 = *(undefined8 *)(lVar23 + uVar26 * 0xc);
                    fVar44 = extraout_XMM0_Da_00 * (float)uVar3 + (float)uVar11 * fVar46;
                    fVar45 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar3 >> 0x20) +
                             (float)((ulonglong)uVar11 >> 0x20) * fVar46;
                    fVar46 = *(float *)(lVar23 + 8 + uVar26 * 0xc) * extraout_XMM0_Da_00 +
                             fVar46 * *(float *)(lVar23 + 8 + uVar28 * 0xc);
                    goto LAB_140c4ce0a;
                  }
                  uVar33 = (ushort)(uVar21 - 1) & (ushort)uVar21;
                  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar33);
                }
                auVar40[0] = -(auVar4[0] == -1);
                auVar40[1] = -(auVar4[1] == -1);
                auVar40[2] = -(auVar4[2] == -1);
                auVar40[3] = -(auVar4[3] == -1);
                auVar40[4] = -(auVar4[4] == -1);
                auVar40[5] = -(auVar4[5] == -1);
                auVar40[6] = -(auVar4[6] == -1);
                auVar40[7] = -(auVar4[7] == -1);
                auVar40[8] = -(auVar4[8] == -1);
                auVar40[9] = -(auVar4[9] == -1);
                auVar40[10] = -(auVar4[10] == -1);
                auVar40[0xb] = -(auVar4[0xb] == -1);
                auVar40[0xc] = -(auVar4[0xc] == -1);
                auVar40[0xd] = -(auVar4[0xd] == -1);
                auVar40[0xe] = -(auVar4[0xe] == -1);
                auVar40[0xf] = -(auVar4[0xf] == -1);
                if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
                uVar24 = uVar24 + lVar30 + 0x10;
                lVar30 = lVar30 + 0x10;
              }
            }
LAB_140c4cd60:
            fVar44 = 0.0;
            fVar45 = 0.0;
            fVar46 = 0.0;
LAB_140c4ce0a:
            *puVar9 = uStack_13c;
            lVar23 = *(longlong *)(lStack_110 + 0x30);
            uVar11 = *(undefined8 *)(lStack_110 + 0x40);
            if (lVar23 == *(longlong *)(lStack_110 + 0x20)) {
              pdb_142d7e6e0(lVar25);
            }
            lVar10 = *(longlong *)(lStack_110 + 0x28);
            lVar30 = lVar23 * 0x20;
            *(undefined8 *)(lVar10 + lVar30) = uVar11;
            *(undefined1 *)(lVar10 + 8 + lVar30) = 0x10;
            *(undefined1 *)(lVar10 + 9 + lVar30) = uVar32;
            *(ulonglong *)(lVar10 + 0x10 + lVar30) = CONCAT44(fVar45,fVar44);
            *(float *)(lVar10 + 0x18 + lVar30) = fVar46;
            *(longlong *)(lStack_110 + 0x30) = lVar23 + 1;
            *(longlong *)(lStack_110 + 0x40) = *(longlong *)(lStack_110 + 0x40) + 1;
          } while( true );
        }
        puStack_100 = (ulonglong *)((longlong)puVar27 + 0x18);
        lVar22 = 0;
        lVar23 = (longlong)puVar27;
      }
      else {
        lVar23 = lVar22;
        lVar22 = lVar22 + 0x18;
        puStack_100 = puVar27;
      }
      *puVar8 = *puVar8 + 1;
      uVar32 = *(undefined1 *)(lVar23 + 0x10);
      uVar5 = *(undefined1 *)(lVar23 + 0x11);
      lVar10 = *(longlong *)(lVar23 + 8);
      cVar6 = *(char *)(lVar23 + 0x12);
      cVar7 = *(char *)(lVar23 + 0x13);
      *puStack_120 = uStack_ec;
      lStack_d0 = lVar10;
      lVar23 = pdb_1417bd890(lStack_128,&lStack_d0);
      puStack_148 = (ulonglong *)CONCAT71(puStack_148._1_7_,uVar5);
      if (lVar23 == 0) {
        if (1 < *_DAT_143ca8e90) {
          plStack_e8 = &lStack_d0;
          pcStack_e0 = pdb_140c04ef0;
          lStack_248 = 0;
          puStack_240 = &UNK_143021dde;
          uStack_238 = 0x2b;
          lStack_230 = 0;
          puStack_228 = &UNK_143021da7;
          uStack_220 = 0x36;
          uStack_218 = 2;
          puStack_210 = &UNK_143021dde;
          uStack_208 = 0x2b;
          uStack_200 = 0xfd00000001;
          puStack_1f8 = &UNK_143021d78;
          pplStack_1f0 = &plStack_e8;
          pdb_140f332f0(&uStack_b1,&lStack_248);
        }
      }
      else {
        pdb_1403b05d0(lStack_118,lVar10);
        *(undefined1 *)(lVar23 + 0x6e) = uVar5;
      }
      if (cVar6 != '\0') {
        lStack_d0 = 0;
        lStack_c8 = 8;
        lStack_c0 = 0;
        uStack_238._0_2_ = CONCAT11(puStack_148._0_1_,uVar32);
        lStack_248 = -0x7ffffffffffffff8;
        uStack_b6 = 1;
        puStack_240 = (undefined *)lVar10;
        pdb_140a1aa80(&lStack_d0,&lStack_248);
        *puStack_138 = uStack_104;
        plStack_e8 = (longlong *)0x0;
        pcStack_e0 = (code *)0x8;
        uStack_d8 = 0;
        lStack_230 = lStack_c8 + lStack_c0 * 0x18;
        lStack_248 = lStack_c8;
        puStack_240 = (undefined *)lStack_c8;
        uStack_238 = lStack_d0;
        lVar23 = lStack_c8;
        puStack_240 = (undefined *)pdb_140c69b60(&lStack_248);
        lStack_248 = 7;
        uStack_b6 = 0;
        uStack_238 = lVar23;
        pdb_140ae5180(uStack_130,&lStack_248);
      }
      puVar27 = puStack_100;
    } while (cVar7 == '\0');
    lStack_248 = lVar10;
    if (plStack_f8[3] != 0) {
      uVar24 = pdb_1400af0a0(plVar1,&lStack_248);
      lVar23 = *plStack_f8;
      bVar36 = (byte)(uVar24 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar30 = 0;
      do {
        uVar24 = uVar24 & plStack_f8[1];
        auVar4 = *(undefined1 (*) [16])(lVar23 + uVar24);
        auVar41[0] = -(auVar4[0] == auVar37[0]);
        auVar41[1] = -(auVar4[1] == auVar37[1]);
        auVar41[2] = -(auVar4[2] == auVar37[2]);
        auVar41[3] = -(auVar4[3] == auVar37[3]);
        auVar41[4] = -(auVar4[4] == auVar37[4]);
        auVar41[5] = -(auVar4[5] == auVar37[5]);
        auVar41[6] = -(auVar4[6] == auVar37[6]);
        auVar41[7] = -(auVar4[7] == auVar37[7]);
        auVar41[8] = -(auVar4[8] == auVar37[0]);
        auVar41[9] = -(auVar4[9] == auVar37[1]);
        auVar41[10] = -(auVar4[10] == auVar37[2]);
        auVar41[0xb] = -(auVar4[0xb] == auVar37[3]);
        auVar41[0xc] = -(auVar4[0xc] == auVar37[4]);
        auVar41[0xd] = -(auVar4[0xd] == auVar37[5]);
        auVar41[0xe] = -(auVar4[0xe] == auVar37[6]);
        auVar41[0xf] = -(auVar4[0xf] == auVar37[7]);
        uVar33 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar33;
        while (uVar33 != 0) {
          uVar12 = 0;
          for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar34 = (uVar12 + uVar24 & plStack_f8[1]) * -0x2b0;
          if (lVar10 == *(longlong *)(lVar23 + -0x2b0 + lVar34)) {
            lVar23 = lVar23 + lVar34;
            if ((*(ulonglong *)(lVar23 + -0x298) < 2) || (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14306e318);
            }
            uVar21 = pdb_1419a9060(lVar23 + -0x270,uVar2);
            uVar28 = (ulonglong)uVar21;
            uVar24 = *(ulonglong *)(lVar23 + -0x260);
            if (uVar24 <= uVar28) {
LAB_140c4d911:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar28,uVar24,&UNK_14335e4e0);
            }
            uVar26 = uVar28 + 1;
            if (uVar24 <= uVar26) {
LAB_140c4d902:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar26,uVar24,&UNK_14335e4f8);
            }
            lVar23 = *(longlong *)(lVar23 + -0x268);
            fVar46 = fVar20 - extraout_XMM0_Da;
            uVar11 = *(undefined8 *)(lVar23 + uVar28 * 0xc);
            uVar3 = *(undefined8 *)(lVar23 + uVar26 * 0xc);
            fVar44 = extraout_XMM0_Da * (float)uVar3 + (float)uVar11 * fVar46;
            fVar45 = extraout_XMM0_Da * (float)((ulonglong)uVar3 >> 0x20) +
                     (float)((ulonglong)uVar11 >> 0x20) * fVar46;
            fVar46 = *(float *)(lVar23 + 8 + uVar26 * 0xc) * extraout_XMM0_Da +
                     fVar46 * *(float *)(lVar23 + 8 + uVar28 * 0xc);
            goto LAB_140c4c7fa;
          }
          uVar33 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar33);
        }
        auVar38[0] = -(auVar4[0] == (char)iVar14);
        auVar38[1] = -(auVar4[1] == (char)((uint)iVar14 >> 8));
        auVar38[2] = -(auVar4[2] == (char)((uint)iVar14 >> 0x10));
        auVar38[3] = -(auVar4[3] == (char)((uint)iVar14 >> 0x18));
        auVar38[4] = -(auVar4[4] == (char)iVar15);
        auVar38[5] = -(auVar4[5] == (char)((uint)iVar15 >> 8));
        auVar38[6] = -(auVar4[6] == (char)((uint)iVar15 >> 0x10));
        auVar38[7] = -(auVar4[7] == (char)((uint)iVar15 >> 0x18));
        auVar38[8] = -(auVar4[8] == (char)iVar16);
        auVar38[9] = -(auVar4[9] == (char)((uint)iVar16 >> 8));
        auVar38[10] = -(auVar4[10] == (char)((uint)iVar16 >> 0x10));
        auVar38[0xb] = -(auVar4[0xb] == (char)((uint)iVar16 >> 0x18));
        auVar38[0xc] = -(auVar4[0xc] == (char)iVar17);
        auVar38[0xd] = -(auVar4[0xd] == (char)((uint)iVar17 >> 8));
        auVar38[0xe] = -(auVar4[0xe] == (char)((uint)iVar17 >> 0x10));
        auVar38[0xf] = -(auVar4[0xf] == (char)((uint)iVar17 >> 0x18));
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
        uVar24 = uVar24 + lVar30 + 0x10;
        lVar30 = lVar30 + 0x10;
      } while( true );
    }
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar46 = 0.0;
LAB_140c4c7fa:
    *puVar9 = uStack_13c;
    lVar23 = *(longlong *)(lStack_110 + 0x30);
    uVar11 = *(undefined8 *)(lStack_110 + 0x40);
    if (lVar23 == *(longlong *)(lStack_110 + 0x20)) {
      pdb_142d7e6e0(lVar25);
    }
    lVar10 = *(longlong *)(lStack_110 + 0x28);
    lVar30 = lVar23 * 0x20;
    *(undefined8 *)(lVar10 + lVar30) = uVar11;
    *(undefined1 *)(lVar10 + 8 + lVar30) = 0x10;
    *(undefined1 *)(lVar10 + 9 + lVar30) = puStack_148._0_1_;
    *(ulonglong *)(lVar10 + 0x10 + lVar30) = CONCAT44(fVar45,fVar44);
    *(float *)(lVar10 + 0x18 + lVar30) = fVar46;
    *(longlong *)(lStack_110 + 0x30) = lVar23 + 1;
    *(longlong *)(lStack_110 + 0x40) = *(longlong *)(lStack_110 + 0x40) + 1;
  } while( true );
}

