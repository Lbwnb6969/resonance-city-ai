// VA 0x140926600, PDB extent 1992 bytes
// country_core::resources::history::terrain_edit::TerrainEdit::update_terrain_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::TerrainEdit::update_terrain_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 1992 */

void pdb_140926600(uint param_1,undefined8 param_2,byte **param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte **ppbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong arg0;
  undefined8 uVar15;
  byte **ppbVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  longlong lVar20;
  byte **ppbVar21;
  byte bVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  byte **ppbStack_160;
  byte *pbStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte **ppbStack_128;
  code *pcStack_120;
  byte **ppbStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte **ppbStack_d0;
  undefined8 uStack_c8;
  byte **ppbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_7c;
  byte **ppbStack_78;
  byte *pbStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppbStack_128 = (byte **)CONCAT44(ppbStack_128._4_4_,param_1);
  uStack_7c = param_1;
  if (*(longlong *)(param_5 + 0x20) == 0) {
LAB_140926754:
    ppbStack_128 = (byte **)&uStack_7c;
    pcStack_120 = pdb_140927dd0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143021488,&ppbStack_128,&UNK_1430214b8);
  }
  arg0 = (ulonglong)param_1;
  uVar12 = pdb_1400aede0(param_5 + 0x28,&ppbStack_128);
  lVar20 = *(longlong *)(param_5 + 8);
  bVar22 = (byte)(uVar12 >> 0x39);
  auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar24 = pshuflw(auVar24,auVar24,0);
  lVar14 = 0;
  iVar7 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                 CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
  iVar8 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                 CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
  iVar9 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                 CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
  iVar10 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                  CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
  do {
    uVar12 = uVar12 & *(ulonglong *)(param_5 + 0x10);
    auVar1 = *(undefined1 (*) [16])(lVar20 + uVar12);
    auVar27[0] = -(auVar1[0] == auVar24[0]);
    auVar27[1] = -(auVar1[1] == auVar24[1]);
    auVar27[2] = -(auVar1[2] == auVar24[2]);
    auVar27[3] = -(auVar1[3] == auVar24[3]);
    auVar27[4] = -(auVar1[4] == auVar24[4]);
    auVar27[5] = -(auVar1[5] == auVar24[5]);
    auVar27[6] = -(auVar1[6] == auVar24[6]);
    auVar27[7] = -(auVar1[7] == auVar24[7]);
    auVar27[8] = -(auVar1[8] == auVar24[0]);
    auVar27[9] = -(auVar1[9] == auVar24[1]);
    auVar27[10] = -(auVar1[10] == auVar24[2]);
    auVar27[0xb] = -(auVar1[0xb] == auVar24[3]);
    auVar27[0xc] = -(auVar1[0xc] == auVar24[4]);
    auVar27[0xd] = -(auVar1[0xd] == auVar24[5]);
    auVar27[0xe] = -(auVar1[0xe] == auVar24[6]);
    auVar27[0xf] = -(auVar1[0xf] == auVar24[7]);
    uVar18 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar18;
    while (uVar18 != 0) {
      uVar5 = 0;
      for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar19 = (uVar5 + uVar12 & *(ulonglong *)(param_5 + 0x10)) * -0x30;
      if (param_1 == *(uint *)(lVar20 + -0x30 + lVar19)) {
        lVar20 = lVar20 + lVar19;
        if (*(ulonglong *)(lVar20 + -0x18) < 2) {
          if (*(ulonglong *)(lVar20 + -0x18) != 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1430213fc,0x28,&UNK_143021428);
          }
          puVar2 = *(undefined8 **)(lVar20 + -0x20);
          pdb_14007ee60();
          pbStack_70 = pub_1406abab0(0xc,4);
          if (pbStack_70 == (byte *)0x0) {
            pdb_142dc7e2a(4,0xc);
LAB_140926bbe:
            pdb_142dc7e2a(4,arg0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)(pbStack_70 + 8) = *(undefined4 *)(puVar2 + 1);
          *(undefined8 *)pbStack_70 = *puVar2;
          pdb_140dedcd0(&UNK_1430213f4);
          ppbVar16 = (byte **)0x1;
          ppbVar21 = (byte **)0x1;
          lVar14 = *(longlong *)(lVar20 + -0x28);
          pcVar4 = (code *)pbStack_70;
          goto joined_r0x000140926ada;
        }
        if (param_3 == (byte **)0x0) {
          ppbStack_b8 = (byte **)0x0;
          pbStack_b0 = (byte *)0x4;
          uStack_a8 = (byte **)0x0;
        }
        else {
          arg0 = (longlong)param_3 * 0xc;
          pdb_14007ee60();
          pbStack_b0 = pub_1406abab0(arg0,4);
          if (pbStack_b0 == (byte *)0x0) goto LAB_140926bbe;
          ppbStack_b8 = param_3;
          pub_142e32760(pbStack_b0,param_2,arg0);
          uStack_a8 = param_3;
        }
        pbStack_d8 = (byte *)((ulonglong)pbStack_d8 & 0xffffffff00000000);
        uStack_62 = 1;
        ppbVar16 = &pbStack_d8;
        pdb_1415e17b0(&ppbStack_b8,ppbVar16);
        ppbStack_118 = uStack_a8;
        ppbStack_128 = ppbStack_b8;
        pcStack_120 = (code *)pbStack_b0;
        uStack_62 = 0;
        pdb_1419aa3f0(&ppbStack_160,&ppbStack_128);
        if (SBORROW8(0,(longlong)ppbStack_160)) {
          ppbVar21 = *(byte ***)(lVar20 + -0x18);
          ppbVar16 = (byte **)((longlong)ppbVar21 * 0xc);
          if (ppbVar21 < (byte **)0xaaaaaaaaaaaaaab) {
            uVar3 = *(undefined8 *)(lVar20 + -0x20);
            if (ppbVar16 == (byte **)0x0) {
              pbVar13 = (byte *)0x4;
              ppbStack_78 = (byte **)0x0;
              ppbVar11 = ppbStack_78;
            }
            else {
              pdb_14007ee60();
              uVar15 = 4;
              pbVar13 = pub_1406abab0((ulonglong)ppbVar16,4);
              ppbVar11 = ppbVar21;
              if (pbVar13 == (byte *)0x0) goto LAB_14092687e;
            }
            ppbStack_78 = ppbVar11;
            if (ppbVar21 != (byte **)0x0) {
              pub_142e32760(pbVar13,uVar3,ppbVar16);
            }
            pbStack_70 = pbVar13;
            pdb_140dedcd0(&UNK_1430213f4);
            lVar14 = *(longlong *)(lVar20 + -0x28);
            ppbVar16 = ppbStack_78;
            pcVar4 = (code *)pbStack_70;
            goto joined_r0x000140926ada;
          }
          uVar15 = 0;
LAB_14092687e:
          pdb_142dc7e2a(uVar15,ppbVar16);
        }
        uStack_88 = uStack_130;
        uVar3 = uStack_88;
        pbStack_98 = pbStack_140;
        uStack_90 = uStack_138;
        uStack_a8 = (byte **)CONCAT17(uStack_149,
                                      CONCAT16(uStack_14a,
                                               CONCAT15(uStack_14b,
                                                        CONCAT14(uStack_14c,
                                                                 CONCAT13(uStack_14d,
                                                                          CONCAT12(uStack_14e,
                                                                                   CONCAT11(
                                                  uStack_14f,uStack_150)))))));
        uStack_a0 = uStack_148;
        uStack_9f = uStack_147;
        uStack_9e = uStack_146;
        uStack_9d = uStack_145;
        uStack_9c = uStack_144;
        uStack_9b = uStack_143;
        uStack_9a = uStack_142;
        uStack_99 = uStack_141;
        ppbStack_b8 = ppbStack_160;
        pbStack_b0 = pbStack_158;
        uStack_88._0_4_ = (float)uStack_130;
        fVar28 = _DAT_142e3b1d8 / (float)uStack_88;
        uStack_88 = uVar3;
        if (NAN(fVar28)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_143021440);
        }
        if (ABS(fVar28) == INFINITY) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_143021440);
        }
        fVar23 = (float)pdb_140dedcd0(&UNK_1430213f4);
        fVar26 = 0.0;
        if (0.0 <= fVar28) {
          fVar26 = fVar28;
        }
        fVar28 = _DAT_142e36f28;
        if (fVar26 <= _DAT_142e36f28) {
          fVar28 = fVar26;
        }
        fVar23 = (_DAT_142e36f28 - fVar23) * fVar28 + fVar23;
        pbStack_d8 = (byte *)CONCAT44(pbStack_d8._4_4_,fVar23);
        if ((fVar23 < 0.0) || (_DAT_142e36f28 < fVar23)) {
          pcStack_120 = pdb_140f70fc0;
          ppbStack_128 = ppbVar16;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,&ppbStack_128,&UNK_143021458);
        }
        pdb_140dedcd0(&UNK_1430213f4);
        pbStack_f0 = (byte *)0x0;
        uStack_e8 = 4;
        uStack_e0 = 0;
        uStack_61 = 1;
        pdb_1419a6a90(&ppbStack_160);
        uStack_c8 = uStack_e0;
        pbStack_d8 = pbStack_f0;
        ppbStack_d0 = (byte **)uStack_e8;
        uStack_61 = 0;
        pdb_1419aa3f0(&ppbStack_128,&pbStack_d8);
        ppbVar21 = ppbStack_118;
        pcVar4 = pcStack_120;
        ppbVar16 = ppbStack_128;
        if (SBORROW8(0,(longlong)ppbStack_128)) {
          pbStack_d8 = (byte *)pcStack_120;
          ppbStack_d0 = ppbStack_118;
          uStack_61 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14335e278,0x2b,&pbStack_d8,&UNK_14335e258,&UNK_143021470);
        }
        if (lStack_110 != 0) {
          pub_1406abac0(pbStack_108,lStack_110 << 2,4);
        }
        if (ppbStack_b8 != (byte **)0x0) {
          pub_1406abac0(pbStack_b0,(longlong)ppbStack_b8 * 0xc,4);
        }
        lVar14 = CONCAT17(uStack_99,
                          CONCAT16(uStack_9a,
                                   CONCAT15(uStack_9b,
                                            CONCAT14(uStack_9c,
                                                     CONCAT13(uStack_9d,
                                                              CONCAT12(uStack_9e,
                                                                       CONCAT11(uStack_9f,uStack_a0)
                                                                      ))))));
        if (lVar14 != 0) {
          pub_1406abac0(pbStack_98,lVar14 << 2,4);
        }
        lVar14 = *(longlong *)(lVar20 + -0x28);
joined_r0x000140926ada:
        if (lVar14 != 0) {
          pub_1406abac0(*(byte **)(lVar20 + -0x20),lVar14 * 0xc,4);
        }
        *(byte ***)(lVar20 + -0x28) = ppbVar16;
        *(code **)(lVar20 + -0x20) = pcVar4;
        *(byte ***)(lVar20 + -0x18) = ppbVar21;
        return;
      }
      uVar18 = (ushort)(uVar17 - 1) & (ushort)uVar17;
      uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar18);
    }
    auVar25[0] = -(auVar1[0] == (char)iVar7);
    auVar25[1] = -(auVar1[1] == (char)((uint)iVar7 >> 8));
    auVar25[2] = -(auVar1[2] == (char)((uint)iVar7 >> 0x10));
    auVar25[3] = -(auVar1[3] == (char)((uint)iVar7 >> 0x18));
    auVar25[4] = -(auVar1[4] == (char)iVar8);
    auVar25[5] = -(auVar1[5] == (char)((uint)iVar8 >> 8));
    auVar25[6] = -(auVar1[6] == (char)((uint)iVar8 >> 0x10));
    auVar25[7] = -(auVar1[7] == (char)((uint)iVar8 >> 0x18));
    auVar25[8] = -(auVar1[8] == (char)iVar9);
    auVar25[9] = -(auVar1[9] == (char)((uint)iVar9 >> 8));
    auVar25[10] = -(auVar1[10] == (char)((uint)iVar9 >> 0x10));
    auVar25[0xb] = -(auVar1[0xb] == (char)((uint)iVar9 >> 0x18));
    auVar25[0xc] = -(auVar1[0xc] == (char)iVar10);
    auVar25[0xd] = -(auVar1[0xd] == (char)((uint)iVar10 >> 8));
    auVar25[0xe] = -(auVar1[0xe] == (char)((uint)iVar10 >> 0x10));
    auVar25[0xf] = -(auVar1[0xf] == (char)((uint)iVar10 >> 0x18));
    if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') goto LAB_140926754;
    uVar12 = uVar12 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  } while( true );
}

