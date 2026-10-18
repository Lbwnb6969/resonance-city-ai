// VA 0x140818c60, PDB extent 3885 bytes
// system_wall_constructor::curved_halftimber::curved_halftimber_maintain_entities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/curved_halftimber/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::curved_halftimber::curved_halftimber_maintain_entities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/curved_halftimber/mod.rs
   Extent: 3885 */

void pdb_140818c60(byte *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  undefined4 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  ushort uVar30;
  longlong lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  ulonglong *puStack_198;
  longlong lStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  longlong lStack_178;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined3 uStack_138;
  undefined4 uStack_135;
  undefined4 uStack_131;
  undefined4 uStack_12d;
  undefined1 uStack_129;
  undefined7 uStack_128;
  longlong lStack_121;
  ulonglong *puStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined4 *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined4 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar7 = (ulonglong *)*param_2;
  lVar27 = param_2[1];
  uVar21 = *puVar7;
  uVar23 = 0;
  uVar22 = uVar21 - *(ulonglong *)(lVar27 + 0x18);
  if (uVar21 < *(ulonglong *)(lVar27 + 0x18)) {
    uVar22 = uVar23;
  }
  uVar28 = uVar21 - *(ulonglong *)(lVar27 + 0x38);
  if (uVar21 < *(ulonglong *)(lVar27 + 0x38)) {
    uVar28 = uVar23;
  }
  lVar19 = uVar22 * 0x10 + *(longlong *)(lVar27 + 8);
  uVar21 = *(ulonglong *)(lVar27 + 0x10) - uVar22;
  if (*(ulonglong *)(lVar27 + 0x10) < uVar22) {
    lVar19 = 8;
    uVar21 = uVar23;
  }
  lVar31 = uVar28 * 0x10 + *(longlong *)(lVar27 + 0x28);
  uVar22 = *(ulonglong *)(lVar27 + 0x30) - uVar28;
  if (*(ulonglong *)(lVar27 + 0x30) < uVar28) {
    lVar31 = 8;
    uVar22 = uVar23;
  }
  *puVar7 = (*(longlong *)(lVar27 + 0x40) - uVar22) - uVar21;
  lVar24 = uVar22 * 0x10 + lVar31;
  uStack_78 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_90 = *param_4;
  puStack_b0 = (undefined4 *)param_4[2];
  lVar27 = lVar19;
  pbStack_80 = param_1;
  do {
    if ((lVar27 == 0) || (lVar27 == uVar21 * 0x10 + lVar19)) {
      if ((lVar31 == 0) || (lVar31 == lVar24)) {
        puVar7 = (ulonglong *)*param_3;
        lVar27 = param_3[1];
        uVar21 = *puVar7;
        uVar23 = 0;
        uVar22 = uVar21 - *(ulonglong *)(lVar27 + 0x18);
        if (uVar21 < *(ulonglong *)(lVar27 + 0x18)) {
          uVar22 = uVar23;
        }
        uVar28 = uVar21 - *(ulonglong *)(lVar27 + 0x38);
        if (uVar21 < *(ulonglong *)(lVar27 + 0x38)) {
          uVar28 = uVar23;
        }
        lVar19 = uVar22 * 0x18 + *(longlong *)(lVar27 + 8);
        uVar21 = *(ulonglong *)(lVar27 + 0x10) - uVar22;
        if (*(ulonglong *)(lVar27 + 0x10) < uVar22) {
          lVar19 = 8;
          uVar21 = uVar23;
        }
        lVar31 = uVar28 * 0x18 + *(longlong *)(lVar27 + 0x28);
        uVar22 = *(ulonglong *)(lVar27 + 0x30) - uVar28;
        if (*(ulonglong *)(lVar27 + 0x30) < uVar28) {
          lVar31 = 8;
          uVar22 = uVar23;
        }
        *puVar7 = (*(longlong *)(lVar27 + 0x40) - uVar22) - uVar21;
        lVar27 = lVar31 + uVar22 * 0x18;
        lVar24 = lVar19;
        do {
          if ((lVar24 == 0) || (lVar24 == lVar19 + uVar21 * 0x18)) {
            if ((lVar31 == 0) || (lVar31 == lVar27)) {
              puStack_198 = (ulonglong *)*param_6;
              lVar27 = param_6[1];
              uVar21 = *puStack_198;
              uVar23 = 0;
              uVar22 = uVar21 - *(ulonglong *)(lVar27 + 0x18);
              if (uVar21 < *(ulonglong *)(lVar27 + 0x18)) {
                uVar22 = uVar23;
              }
              uVar28 = uVar21 - *(ulonglong *)(lVar27 + 0x38);
              if (uVar21 < *(ulonglong *)(lVar27 + 0x38)) {
                uVar28 = uVar23;
              }
              plStack_c0 = (longlong *)(uVar22 * 0x28 + *(longlong *)(lVar27 + 8));
              uVar21 = *(ulonglong *)(lVar27 + 0x10) - uVar22;
              if (*(ulonglong *)(lVar27 + 0x10) < uVar22) {
                plStack_c0 = (longlong *)0x8;
                uVar21 = uVar23;
              }
              lStack_c8 = uVar28 * 0x28 + *(longlong *)(lVar27 + 0x28);
              uVar22 = *(ulonglong *)(lVar27 + 0x30) - uVar28;
              if (*(ulonglong *)(lVar27 + 0x30) < uVar28) {
                lStack_c8 = 8;
                uVar22 = uVar23;
              }
              *puStack_198 = (*(longlong *)(lVar27 + 0x40) - uVar22) - uVar21;
              uVar16 = _UNK_142e4e658;
              uVar15 = _DAT_142e4e650;
              plStack_100 = (longlong *)((longlong)plStack_c0 + uVar21 * 0x28);
              lStack_190 = lStack_c8 + uVar22 * 0x28;
              plStack_b8 = *(longlong **)pbStack_80;
              plStack_108 = plStack_b8 + 4;
              plStack_f8 = (longlong *)*param_8;
              puStack_110 = (ulonglong *)(lStack_90 + 0x20);
              iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                        CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba)
                                                )) ==
                              CONCAT13(unaff_XMM7_Bd,
                                       CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))
                                      ));
              iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                        CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be)
                                                )) ==
                              CONCAT13(unaff_XMM7_Bh,
                                       CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))
                                      ));
              iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                        CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi)
                                                )) ==
                              CONCAT13(unaff_XMM7_Bl,
                                       CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))
                                      ));
              iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                        CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm)
                                                )) ==
                              CONCAT13(unaff_XMM7_Bp,
                                       CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))
                                      ));
              do {
                plVar25 = plStack_b8;
                if ((plStack_c0 == (longlong *)0x0) || (plStack_c0 == plStack_100)) {
                  if ((lStack_c8 == 0) || (lStack_c8 == lStack_190)) {
                    puStack_110 = (ulonglong *)*param_7;
                    lVar27 = param_7[1];
                    uVar21 = *puStack_110;
                    uVar23 = 0;
                    uVar22 = uVar21 - *(ulonglong *)(lVar27 + 0x18);
                    if (uVar21 < *(ulonglong *)(lVar27 + 0x18)) {
                      uVar22 = uVar23;
                    }
                    uVar28 = uVar21 - *(ulonglong *)(lVar27 + 0x38);
                    if (uVar21 < *(ulonglong *)(lVar27 + 0x38)) {
                      uVar28 = uVar23;
                    }
                    plStack_b8 = (longlong *)(uVar22 * 0x28 + *(longlong *)(lVar27 + 8));
                    uVar21 = *(ulonglong *)(lVar27 + 0x10) - uVar22;
                    if (*(ulonglong *)(lVar27 + 0x10) < uVar22) {
                      plStack_b8 = (longlong *)0x8;
                      uVar21 = uVar23;
                    }
                    plStack_c0 = (longlong *)(uVar28 * 0x28 + *(longlong *)(lVar27 + 0x28));
                    uVar22 = *(ulonglong *)(lVar27 + 0x30) - uVar28;
                    if (*(ulonglong *)(lVar27 + 0x30) < uVar28) {
                      plStack_c0 = (longlong *)0x8;
                      uVar22 = uVar23;
                    }
                    *puStack_110 = (*(longlong *)(lVar27 + 0x40) - uVar22) - uVar21;
                    plStack_100 = plStack_b8 + uVar21 * 5;
                    plStack_f8 = plStack_c0 + uVar22 * 5;
                    lStack_c8 = lStack_90 + 0x30;
                    lStack_90 = lStack_90 + 0x50;
                    do {
                      if ((plStack_b8 == (longlong *)0x0) || (plStack_b8 == plStack_100)) {
                        if ((plStack_c0 == (longlong *)0x0) || (plStack_c0 == plStack_f8)) {
                          return;
                        }
                        plStack_b8 = (longlong *)0x0;
                        plVar25 = plStack_c0;
                        plStack_c0 = plStack_c0 + 5;
                      }
                      else {
                        plVar25 = plStack_b8;
                        plStack_b8 = plStack_b8 + 5;
                      }
                      *puStack_110 = *puStack_110 + 1;
                      plVar3 = plVar25 + 3;
                      *puStack_b0 = uStack_78;
                      uVar20 = pdb_1400af0a0(lStack_90,plVar3);
                      pdb_140269750(&lStack_e8,lStack_c8,uVar20,plVar3);
                      if (!SBORROW8(0,(longlong)pbStack_e0)) {
                        pbStack_88 = pbStack_e0;
                        pbStack_80 = pbStack_d8;
                        plStack_108 = plVar25;
                        if (lStack_d0 != 0) {
                          lVar27 = lStack_d0 << 3;
                          lVar19 = 0;
                          do {
                            lVar31 = *(longlong *)(pbStack_80 + lVar19);
                            if ((int)lVar31 == 0) break;
                            uVar20 = *param_5;
                            cVar17 = pdb_140ed63a0(uVar20,lVar31);
                            if (cVar17 != '\0') {
                              uStack_170 = (undefined7)uVar20;
                              uStack_169 = (undefined1)((ulonglong)uVar20 >> 0x38);
                              uStack_168 = (undefined7)param_5[1];
                              uStack_161 = (undefined1)((ulonglong)param_5[1] >> 0x38);
                              uStack_160 = (undefined7)param_5[2];
                              uStack_159 = (undefined1)((ulonglong)param_5[2] >> 0x38);
                              uStack_158 = (undefined7)param_5[3];
                              uStack_151 = (undefined1)((ulonglong)param_5[3] >> 0x38);
                              lStack_178 = lVar31;
                              pdb_140f04aa0(&lStack_178,&UNK_1430090f8);
                            }
                            lVar19 = lVar19 + 8;
                          } while (lVar27 != lVar19);
                        }
                        plVar25 = plStack_108;
                        if (pbStack_88 != (byte *)0x0) {
                          pub_1406abac0(pbStack_80,(longlong)pbStack_88 << 3,8);
                        }
                      }
                      lStack_a8 = 0;
                      lStack_a0 = 8;
                      lStack_98 = 0;
                      pbStack_80 = (byte *)plVar25[1];
                      pbStack_88 = pbStack_80 + plVar25[2] * 0x50;
                      while (pbStack_80 != pbStack_88) {
                        uVar18 = pdb_1409012c0(*(undefined4 *)(pbStack_80 + 0x30));
                        pdb_1408fd550(&pbStack_1a8,uVar18);
                        pbStack_188 = pbStack_1a8;
                        pbStack_180 = pbStack_1a0;
                        pdb_14007ee60();
                        pbStack_e0 = pbStack_188;
                        pbStack_d8 = pbStack_180;
                        lStack_121 = *(longlong *)(pbStack_80 + 0x48);
                        uStack_129 = (undefined1)*(longlong *)(pbStack_80 + 0x40);
                        uStack_128 = (undefined7)((ulonglong)*(longlong *)(pbStack_80 + 0x40) >> 8);
                        lVar27 = *(longlong *)(pbStack_80 + 0x20);
                        lVar19 = *(longlong *)(pbStack_80 + 0x28);
                        uStack_135 = *(undefined4 *)(pbStack_80 + 0x34);
                        uStack_131 = *(undefined4 *)(pbStack_80 + 0x38);
                        uStack_12d = *(undefined4 *)(pbStack_80 + 0x3c);
                        uStack_138 = (undefined3)((uint)*(undefined4 *)(pbStack_80 + 0x30) >> 8);
                        uStack_149 = (undefined1)lVar27;
                        uStack_148 = (undefined4)((ulonglong)lVar27 >> 8);
                        uStack_144._0_3_ = (undefined3)((ulonglong)lVar27 >> 0x28);
                        uStack_144._3_1_ = (undefined1)lVar19;
                        uStack_140 = (undefined4)((ulonglong)lVar19 >> 8);
                        uStack_13c._0_3_ = (undefined3)((ulonglong)lVar19 >> 0x28);
                        uStack_13c = CONCAT13((char)*(undefined4 *)(pbStack_80 + 0x30),
                                              (undefined3)uStack_13c);
                        uStack_159 = (undefined1)*(longlong *)(pbStack_80 + 0x10);
                        uStack_158 = (undefined7)((ulonglong)*(longlong *)(pbStack_80 + 0x10) >> 8);
                        uStack_151 = (undefined1)*(longlong *)(pbStack_80 + 0x18);
                        uStack_150 = (undefined7)((ulonglong)*(longlong *)(pbStack_80 + 0x18) >> 8);
                        uStack_169 = (undefined1)*(longlong *)pbStack_80;
                        uStack_168 = (undefined7)((ulonglong)*(longlong *)pbStack_80 >> 8);
                        uStack_161 = (undefined1)*(longlong *)(pbStack_80 + 8);
                        uStack_160 = (undefined7)((ulonglong)*(longlong *)(pbStack_80 + 8) >> 8);
                        lVar27 = *plVar3;
                        uVar20 = pdb_140ed5970(*param_5);
                        plVar25 = (longlong *)param_5[1];
                        if (plVar25 == (longlong *)0x0) {
                          plVar25 = (longlong *)param_5[2];
                        }
                        lVar19 = plVar25[2];
                        if ((ulonglong)(*plVar25 - lVar19) < 200) {
                          pdb_142d7f1b0(plVar25,lVar19,200,1,1);
                        }
                        lVar24 = lStack_98;
                        lVar31 = plVar25[1];
                        *(code **)(lVar31 + lVar19) = pdb_141414080;
                        puVar33 = (undefined8 *)(lVar31 + 8 + lVar19);
                        *puVar33 = uVar15;
                        puVar33[1] = uVar16;
                        *(undefined8 *)(lVar31 + 0x18 + lVar19) = 0;
                        *(undefined4 *)(lVar31 + 0x20 + lVar19) = 0;
                        *(undefined8 *)(lVar31 + 0x24 + lVar19) = 0x3f8000003f800000;
                        *(undefined4 *)(lVar31 + 0x2c + lVar19) = 0x3f800000;
                        plVar5 = (longlong *)(lVar31 + 0x30 + lVar19);
                        *plVar5 = lStack_e8;
                        plVar5[1] = (longlong)pbStack_e0;
                        *(byte **)(lVar31 + 0x40 + lVar19) = pbStack_d8;
                        *(undefined1 *)(lVar31 + 0x48 + lVar19) = 0x16;
                        plVar5 = (longlong *)(lVar31 + 0x49 + lVar19);
                        *plVar5 = lStack_178;
                        plVar5[1] = CONCAT17(uStack_169,uStack_170);
                        puVar33 = (undefined8 *)(lVar31 + 0x59 + lVar19);
                        *puVar33 = CONCAT17(uStack_161,uStack_168);
                        puVar33[1] = CONCAT17(uStack_159,uStack_160);
                        puVar33 = (undefined8 *)(lVar31 + 0x69 + lVar19);
                        *puVar33 = CONCAT17(uStack_151,uStack_158);
                        puVar33[1] = CONCAT17(uStack_149,uStack_150);
                        puVar4 = (undefined4 *)(lVar31 + 0x79 + lVar19);
                        *puVar4 = uStack_148;
                        puVar4[1] = uStack_144;
                        puVar4[2] = uStack_140;
                        puVar4[3] = uStack_13c;
                        puVar33 = (undefined8 *)(lVar31 + 0x89 + lVar19);
                        *puVar33 = CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138));
                        puVar33[1] = CONCAT17(uStack_129,CONCAT43(uStack_12d,uStack_131._1_3_));
                        puVar33 = (undefined8 *)(lVar31 + 0x98 + lVar19);
                        *puVar33 = CONCAT71(uStack_128,uStack_129);
                        puVar33[1] = lStack_121;
                        *(longlong *)(lVar31 + 0xa8 + lVar19) = lVar27;
                        *(undefined1 *)(lVar31 + 0xb0 + lVar19) = 2;
                        *(undefined8 *)(lVar31 + 0xb8 + lVar19) = uVar20;
                        plVar25[2] = lVar19 + 200;
                        if (lStack_98 == lStack_a8) {
                          pdb_142db0920(&lStack_a8);
                        }
                        pbStack_80 = pbStack_80 + 0x50;
                        *(undefined8 *)(lStack_a0 + lVar24 * 8) = uVar20;
                        lStack_98 = lVar24 + 1;
                      }
                      *puStack_b0 = uStack_78;
                      uStack_168 = (undefined7)lStack_98;
                      uStack_161 = (undefined1)((ulonglong)lStack_98 >> 0x38);
                      lStack_178 = lStack_a8;
                      uStack_170 = (undefined7)lStack_a0;
                      uStack_169 = (undefined1)((ulonglong)lStack_a0 >> 0x38);
                      pdb_1414070f0(&lStack_e8,lStack_c8,*plVar3,&lStack_178);
                      if ((!SBORROW8(0,lStack_e8)) && (lStack_e8 != 0)) {
                        pub_1406abac0(pbStack_e0,lStack_e8 << 3,8);
                      }
                    } while( true );
                  }
                  plStack_c0 = (longlong *)0x0;
                  lVar27 = lStack_c8;
                  lStack_c8 = lStack_c8 + 0x28;
                }
                else {
                  lVar27 = (longlong)plStack_c0;
                  plStack_c0 = (longlong *)((longlong)plStack_c0 + 0x28);
                }
                *puStack_198 = *puStack_198 + 1;
                pbVar1 = (byte *)(lVar27 + 0x18);
                *puStack_b0 = uStack_78;
                uVar20 = pdb_1400af0a0(puStack_110,pbVar1);
                pbStack_80 = pbVar1;
                pdb_140269750(&lStack_e8,lStack_90,uVar20,pbVar1);
                if (!SBORROW8(0,(longlong)pbStack_e0)) {
                  pbStack_f0 = pbStack_e0;
                  pbStack_88 = pbStack_d8;
                  if (lStack_d0 != 0) {
                    lVar19 = lStack_d0 << 3;
                    lVar31 = 0;
                    do {
                      lVar24 = *(longlong *)(pbStack_88 + lVar31);
                      if ((int)lVar24 == 0) break;
                      uVar20 = *param_5;
                      cVar17 = pdb_140ed63a0(uVar20,lVar24);
                      if (cVar17 != '\0') {
                        uStack_170 = (undefined7)uVar20;
                        uStack_169 = (undefined1)((ulonglong)uVar20 >> 0x38);
                        uStack_168 = (undefined7)param_5[1];
                        uStack_161 = (undefined1)((ulonglong)param_5[1] >> 0x38);
                        uStack_160 = (undefined7)param_5[2];
                        uStack_159 = (undefined1)((ulonglong)param_5[2] >> 0x38);
                        uStack_158 = (undefined7)param_5[3];
                        uStack_151 = (undefined1)((ulonglong)param_5[3] >> 0x38);
                        lStack_178 = lVar24;
                        pdb_140f04aa0(&lStack_178,&UNK_143009110);
                      }
                      lVar31 = lVar31 + 8;
                    } while (lVar19 != lVar31);
                  }
                  plVar25 = plStack_b8;
                  if (pbStack_f0 != (byte *)0x0) {
                    pub_1406abac0(pbStack_88,(longlong)pbStack_f0 << 3,8);
                  }
                }
                if (plVar25[3] == 0) {
LAB_1408194a4:
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143009128);
                }
                uVar21 = pdb_1400af0a0(plStack_108,lVar27 + 0x18);
                lVar19 = *plVar25;
                bVar34 = (byte)(uVar21 >> 0x39);
                auVar35 = ZEXT216(CONCAT11(bVar34,bVar34));
                auVar35 = pshuflw(auVar35,auVar35,0);
                lVar31 = 0;
                while( true ) {
                  uVar21 = uVar21 & plVar25[1];
                  auVar6 = *(undefined1 (*) [16])(lVar19 + uVar21);
                  auVar37[0] = -(auVar6[0] == auVar35[0]);
                  auVar37[1] = -(auVar6[1] == auVar35[1]);
                  auVar37[2] = -(auVar6[2] == auVar35[2]);
                  auVar37[3] = -(auVar6[3] == auVar35[3]);
                  auVar37[4] = -(auVar6[4] == auVar35[4]);
                  auVar37[5] = -(auVar6[5] == auVar35[5]);
                  auVar37[6] = -(auVar6[6] == auVar35[6]);
                  auVar37[7] = -(auVar6[7] == auVar35[7]);
                  auVar37[8] = -(auVar6[8] == auVar35[0]);
                  auVar37[9] = -(auVar6[9] == auVar35[1]);
                  auVar37[10] = -(auVar6[10] == auVar35[2]);
                  auVar37[0xb] = -(auVar6[0xb] == auVar35[3]);
                  auVar37[0xc] = -(auVar6[0xc] == auVar35[4]);
                  auVar37[0xd] = -(auVar6[0xd] == auVar35[5]);
                  auVar37[0xe] = -(auVar6[0xe] == auVar35[6]);
                  auVar37[0xf] = -(auVar6[0xf] == auVar35[7]);
                  uVar30 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar37[0xf] >> 7) << 0xf;
                  uVar29 = (uint)uVar30;
                  if (uVar30 != 0) break;
LAB_140819170:
                  auVar36[0] = -(auVar6[0] == (char)iVar10);
                  auVar36[1] = -(auVar6[1] == (char)((uint)iVar10 >> 8));
                  auVar36[2] = -(auVar6[2] == (char)((uint)iVar10 >> 0x10));
                  auVar36[3] = -(auVar6[3] == (char)((uint)iVar10 >> 0x18));
                  auVar36[4] = -(auVar6[4] == (char)iVar11);
                  auVar36[5] = -(auVar6[5] == (char)((uint)iVar11 >> 8));
                  auVar36[6] = -(auVar6[6] == (char)((uint)iVar11 >> 0x10));
                  auVar36[7] = -(auVar6[7] == (char)((uint)iVar11 >> 0x18));
                  auVar36[8] = -(auVar6[8] == (char)iVar12);
                  auVar36[9] = -(auVar6[9] == (char)((uint)iVar12 >> 8));
                  auVar36[10] = -(auVar6[10] == (char)((uint)iVar12 >> 0x10));
                  auVar36[0xb] = -(auVar6[0xb] == (char)((uint)iVar12 >> 0x18));
                  auVar36[0xc] = -(auVar6[0xc] == (char)iVar13);
                  auVar36[0xd] = -(auVar6[0xd] == (char)((uint)iVar13 >> 8));
                  auVar36[0xe] = -(auVar6[0xe] == (char)((uint)iVar13 >> 0x10));
                  auVar36[0xf] = -(auVar6[0xf] == (char)((uint)iVar13 >> 0x18));
                  if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0
                      ) || auVar36[0xf] < '\0') goto LAB_1408194a4;
                  uVar21 = uVar21 + lVar31 + 0x10;
                  lVar31 = lVar31 + 0x10;
                }
                while( true ) {
                  uVar8 = 0;
                  for (uVar9 = uVar29; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                    uVar8 = uVar8 + 1;
                  }
                  lVar24 = (uVar8 + uVar21 & plVar25[1]) * -0x2b0;
                  if (*(longlong *)(lVar27 + 0x18) == *(longlong *)(lVar19 + -0x2b0 + lVar24))
                  break;
                  uVar30 = (ushort)(uVar29 - 1) & (ushort)uVar29;
                  uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar30);
                  if (uVar30 == 0) goto LAB_140819170;
                }
                lStack_a8 = 0;
                lStack_a0 = 8;
                lStack_98 = 0;
                uStack_71 = 1;
                pdb_14146f1d0(lVar27 + 0x18,lVar19 + lVar24 + -0x2a8,plVar25,plStack_f8,param_10,
                              param_5,&lStack_a8);
                puVar33 = *(undefined8 **)(lVar27 + 8);
                puVar32 = puVar33 + *(longlong *)(lVar27 + 0x10) * 10;
                for (; puVar33 != puVar32; puVar33 = puVar33 + 10) {
                  uStack_71 = 1;
                  uVar18 = pdb_1409012c0(*(undefined4 *)(puVar33 + 6));
                  uStack_71 = 1;
                  pdb_1408fd550(&pbStack_1a8,uVar18);
                  pbStack_188 = pbStack_1a8;
                  pbStack_180 = pbStack_1a0;
                  uStack_71 = 1;
                  pdb_14007ee60();
                  pbStack_e0 = pbStack_188;
                  pbStack_d8 = pbStack_180;
                  lStack_121 = puVar33[9];
                  uStack_129 = (undefined1)puVar33[8];
                  uStack_128 = (undefined7)((ulonglong)puVar33[8] >> 8);
                  uVar20 = puVar33[4];
                  uVar14 = puVar33[5];
                  uStack_135 = *(undefined4 *)((longlong)puVar33 + 0x34);
                  uStack_131 = *(undefined4 *)(puVar33 + 7);
                  uStack_12d = *(undefined4 *)((longlong)puVar33 + 0x3c);
                  uStack_138 = (undefined3)((uint)*(undefined4 *)(puVar33 + 6) >> 8);
                  uStack_149 = (undefined1)uVar20;
                  uStack_148 = (undefined4)((ulonglong)uVar20 >> 8);
                  uStack_144._0_3_ = (undefined3)((ulonglong)uVar20 >> 0x28);
                  uStack_144._3_1_ = (undefined1)uVar14;
                  uStack_140 = (undefined4)((ulonglong)uVar14 >> 8);
                  uStack_13c._0_3_ = (undefined3)((ulonglong)uVar14 >> 0x28);
                  uStack_13c = CONCAT13((char)*(undefined4 *)(puVar33 + 6),(undefined3)uStack_13c);
                  uStack_159 = (undefined1)puVar33[2];
                  uStack_158 = (undefined7)((ulonglong)puVar33[2] >> 8);
                  uStack_151 = (undefined1)puVar33[3];
                  uStack_150 = (undefined7)((ulonglong)puVar33[3] >> 8);
                  uStack_169 = (undefined1)*puVar33;
                  uStack_168 = (undefined7)((ulonglong)*puVar33 >> 8);
                  uStack_161 = (undefined1)puVar33[1];
                  uStack_160 = (undefined7)((ulonglong)puVar33[1] >> 8);
                  lVar27 = *(longlong *)pbStack_80;
                  uStack_71 = 1;
                  uVar20 = pdb_140ed5970(*param_5);
                  plVar25 = (longlong *)param_5[1];
                  if (plVar25 == (longlong *)0x0) {
                    plVar25 = (longlong *)param_5[2];
                  }
                  lVar19 = plVar25[2];
                  if ((ulonglong)(*plVar25 - lVar19) < 200) {
                    uStack_71 = 1;
                    pdb_142d7f1b0(plVar25,lVar19,200,1,1);
                  }
                  lVar24 = lStack_98;
                  lVar31 = plVar25[1];
                  *(code **)(lVar31 + lVar19) = pdb_141414080;
                  puVar2 = (undefined8 *)(lVar31 + 8 + lVar19);
                  *puVar2 = uVar15;
                  puVar2[1] = uVar16;
                  *(undefined8 *)(lVar31 + 0x18 + lVar19) = 0;
                  *(undefined4 *)(lVar31 + 0x20 + lVar19) = 0;
                  *(undefined8 *)(lVar31 + 0x24 + lVar19) = 0x3f8000003f800000;
                  *(undefined4 *)(lVar31 + 0x2c + lVar19) = 0x3f800000;
                  plVar3 = (longlong *)(lVar31 + 0x30 + lVar19);
                  *plVar3 = lStack_e8;
                  plVar3[1] = (longlong)pbStack_e0;
                  *(byte **)(lVar31 + 0x40 + lVar19) = pbStack_d8;
                  *(undefined1 *)(lVar31 + 0x48 + lVar19) = 0x16;
                  plVar3 = (longlong *)(lVar31 + 0x49 + lVar19);
                  *plVar3 = lStack_178;
                  plVar3[1] = CONCAT17(uStack_169,uStack_170);
                  puVar2 = (undefined8 *)(lVar31 + 0x59 + lVar19);
                  *puVar2 = CONCAT17(uStack_161,uStack_168);
                  puVar2[1] = CONCAT17(uStack_159,uStack_160);
                  puVar2 = (undefined8 *)(lVar31 + 0x69 + lVar19);
                  *puVar2 = CONCAT17(uStack_151,uStack_158);
                  puVar2[1] = CONCAT17(uStack_149,uStack_150);
                  puVar4 = (undefined4 *)(lVar31 + 0x79 + lVar19);
                  *puVar4 = uStack_148;
                  puVar4[1] = uStack_144;
                  puVar4[2] = uStack_140;
                  puVar4[3] = uStack_13c;
                  puVar2 = (undefined8 *)(lVar31 + 0x89 + lVar19);
                  *puVar2 = CONCAT17((undefined1)uStack_131,CONCAT43(uStack_135,uStack_138));
                  puVar2[1] = CONCAT17(uStack_129,CONCAT43(uStack_12d,uStack_131._1_3_));
                  puVar2 = (undefined8 *)(lVar31 + 0x98 + lVar19);
                  *puVar2 = CONCAT71(uStack_128,uStack_129);
                  puVar2[1] = lStack_121;
                  *(longlong *)(lVar31 + 0xa8 + lVar19) = lVar27;
                  *(undefined1 *)(lVar31 + 0xb0 + lVar19) = 1;
                  *(undefined8 *)(lVar31 + 0xb8 + lVar19) = uVar20;
                  plVar25[2] = lVar19 + 200;
                  if (lStack_98 == lStack_a8) {
                    uStack_71 = 1;
                    pdb_142db0920(&lStack_a8);
                  }
                  *(undefined8 *)(lStack_a0 + lVar24 * 8) = uVar20;
                  lStack_98 = lVar24 + 1;
                }
                *puStack_b0 = uStack_78;
                uStack_168 = (undefined7)lStack_98;
                uStack_161 = (undefined1)((ulonglong)lStack_98 >> 0x38);
                lStack_178 = lStack_a8;
                uStack_170 = (undefined7)lStack_a0;
                uStack_169 = (undefined1)((ulonglong)lStack_a0 >> 0x38);
                uStack_71 = 0;
                pdb_1414070f0(&lStack_e8,lStack_90,*(longlong *)pbStack_80,&lStack_178);
                if ((!SBORROW8(0,lStack_e8)) && (lStack_e8 != 0)) {
                  pub_1406abac0(pbStack_e0,lStack_e8 << 3,8);
                }
              } while( true );
            }
            lVar26 = 0;
            lVar24 = lVar31;
            lVar31 = lVar31 + 0x18;
          }
          else {
            lVar26 = lVar24 + 0x18;
          }
          *puVar7 = *puVar7 + 1;
          *puStack_b0 = uStack_78;
          pdb_1409ec3a0(lStack_90,lVar24 + 8,param_5);
          lVar24 = lVar26;
        } while( true );
      }
      lVar26 = 0;
      lVar27 = lVar31;
      lVar31 = lVar31 + 0x10;
    }
    else {
      lVar26 = lVar27 + 0x10;
    }
    *puVar7 = *puVar7 + 1;
    lStack_178 = *(longlong *)(lVar27 + 8);
    *puStack_b0 = uStack_78;
    pdb_1409ec3a0(lStack_90,&lStack_178,param_5);
    lVar27 = lVar26;
  } while( true );
}

