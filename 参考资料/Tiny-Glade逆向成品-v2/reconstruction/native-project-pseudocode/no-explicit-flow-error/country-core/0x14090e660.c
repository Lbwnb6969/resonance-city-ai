// VA 0x14090e660, PDB extent 3758 bytes
// country_core::systems::prefab::spawn_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::spawn_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 3758 */

void pdb_14090e660(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ushort uVar24;
  undefined4 *puVar25;
  ulonglong unaff_R13;
  ulonglong *puVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  undefined8 uStack_238;
  ulonglong uStack_230;
  ulonglong *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  ulonglong *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 *puStack_1d8;
  ulonglong *puStack_1d0;
  undefined8 *puStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  ulonglong *puStack_188;
  code *pcStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined4 *puStack_158;
  undefined *puStack_150;
  undefined4 *puStack_148;
  longlong *plStack_140;
  undefined *puStack_138;
  ulonglong **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 *puStack_c8;
  undefined *puStack_c0;
  undefined4 *puStack_b8;
  longlong *plStack_b0;
  ulonglong *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  ulonglong *puStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_1b8 = param_4;
  cStack_71 = pdb_140e94b40();
  if (cStack_71 == '\0') goto LAB_14090e83a;
  puVar26 = (ulonglong *)&UNK_14301f638;
  puVar20 = (undefined8 *)0x2c;
  uVar18 = 0x2c;
  lVar13 = pdb_1409135d0(&UNK_14301f638);
  if (lVar13 != 1) goto LAB_14090e71a;
  if (uVar18 < 0x2d) {
    puVar26 = (ulonglong *)&UNK_14301f638;
    uVar14 = pdb_1409135d0(&UNK_14301f638);
    if ((uVar14 & 1) == 0) {
LAB_14090e71a:
      puVar21 = &UNK_14301f36b;
      puVar25 = (undefined4 *)&UNK_14301f342;
      do {
        bVar27 = puVar21[-1];
        uVar12 = (uint)(char)bVar27;
        if ((char)bVar27 < '\0') {
          bVar4 = puVar21[-2];
          if ((char)bVar4 < -0x40) {
            bVar5 = puVar21[-3];
            if ((char)bVar5 < -0x40) {
              pbVar1 = puVar21 + -4;
              puVar21 = puVar21 + -4;
              uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar21 = puVar21 + -3;
              uVar12 = bVar5 & 0xf;
            }
            uVar12 = bVar4 & 0x3f | uVar12 << 6;
          }
          else {
            puVar21 = puVar21 + -2;
            uVar12 = bVar4 & 0x1f;
          }
          uVar12 = (uint)(bVar27 & 0x3f) | uVar12 << 6;
          if (uVar12 != 0x5c) goto LAB_14090e7a4;
LAB_14090e7b6:
          if ((undefined *)0x29 < puVar21 + -0x14301f341) goto LAB_14090f195;
          unaff_R13 = 0x29 - (longlong)(puVar21 + -0x14301f341);
          puVar25 = (undefined4 *)(puVar21 + 1);
          goto LAB_14090e7d9;
        }
        puVar21 = puVar21 + -1;
        if (uVar12 == 0x5c) goto LAB_14090e7b6;
LAB_14090e7a4:
        if (uVar12 == 0x2f) goto LAB_14090e7b6;
      } while (puVar21 != &UNK_14301f342);
      unaff_R13 = 0x29;
LAB_14090e7d9:
      plVar15 = (longlong *)pdb_140e97000();
      if ((char)plVar15[0xd] != '\x01') goto LAB_14090f15a;
LAB_14090e7e8:
      if (*plVar15 == 0) {
        *plVar15 = -1;
        puStack_80 = (ulonglong *)plVar15;
        uStack_90 = pdb_140e94f10(plVar15 + 1,puVar26,puVar20,puVar25,unaff_R13,1,0);
        *puStack_80 = *puStack_80 + 1;
LAB_14090e83a:
        uVar6 = *(undefined4 *)((longlong)param_10 + 0x1c);
        puVar25 = (undefined4 *)param_10[2];
        *puVar25 = uVar6;
        plVar15 = (longlong *)*param_10;
        puStack_80 = param_3;
        if (plVar15[3] != 0) {
          unaff_R13 = plVar15[1];
          if (unaff_R13 == 0) {
            uVar18 = 0;
          }
          else {
            pub_142e32780(*plVar15,0xff,unaff_R13 + 0x11);
            uVar18 = (unaff_R13 + 1 & 0xfffffffffffffff8) - (unaff_R13 + 1 >> 3);
            if (unaff_R13 < 8) {
              uVar18 = unaff_R13;
            }
          }
          plVar15[3] = 0;
          plVar15[2] = uVar18;
        }
        *puVar25 = uVar6;
        puStack_188 = (ulonglong *)*param_9;
        lVar13 = param_9[1];
        uVar18 = *puStack_188;
        uVar23 = 0;
        uVar14 = uVar18 - *(ulonglong *)(lVar13 + 0x18);
        if (uVar18 < *(ulonglong *)(lVar13 + 0x18)) {
          uVar14 = uVar23;
        }
        uVar22 = uVar18 - *(ulonglong *)(lVar13 + 0x38);
        if (uVar18 < *(ulonglong *)(lVar13 + 0x38)) {
          uVar22 = uVar23;
        }
        pcStack_180 = (code *)(uVar14 * 0x10 + *(longlong *)(lVar13 + 8));
        uVar18 = *(ulonglong *)(lVar13 + 0x10) - uVar14;
        if (*(ulonglong *)(lVar13 + 0x10) < uVar14) {
          pcStack_180 = (code *)0x8;
          uVar18 = uVar23;
        }
        auStack_178._8_8_ = uVar22 * 0x10 + *(longlong *)(lVar13 + 0x28);
        uVar14 = *(ulonglong *)(lVar13 + 0x30) - uVar22;
        if (*(ulonglong *)(lVar13 + 0x30) < uVar22) {
          auStack_178._8_8_ = 8;
          uVar14 = uVar23;
        }
        *puStack_188 = *(longlong *)(lVar13 + 0x40) - (uVar14 + uVar18);
        auStack_178._0_8_ = pcStack_180 + uVar18 * 0x10;
        auStack_168._8_8_ = uVar14 + uVar18;
        auStack_168._0_8_ = uVar14 * 0x10 + auStack_178._8_8_;
        plStack_b0 = plVar15;
        pdb_1417a83b0(plVar15,&puStack_188);
        param_3 = (ulonglong *)*param_7;
        lVar13 = param_7[1];
        uVar18 = *param_3;
        uVar23 = 0;
        uVar14 = uVar18 - *(ulonglong *)(lVar13 + 0x18);
        if (uVar18 < *(ulonglong *)(lVar13 + 0x18)) {
          uVar14 = uVar23;
        }
        uVar22 = uVar18 - *(ulonglong *)(lVar13 + 0x38);
        if (uVar18 < *(ulonglong *)(lVar13 + 0x38)) {
          uVar22 = uVar23;
        }
        puVar20 = (undefined8 *)(uVar14 * 0x50 + *(longlong *)(lVar13 + 8));
        uVar18 = *(ulonglong *)(lVar13 + 0x10) - uVar14;
        if (*(ulonglong *)(lVar13 + 0x10) < uVar14) {
          puVar20 = (undefined8 *)0x8;
          uVar18 = uVar23;
        }
        puVar16 = (undefined8 *)(uVar22 * 0x50 + *(longlong *)(lVar13 + 0x28));
        uVar14 = *(ulonglong *)(lVar13 + 0x30) - uVar22;
        if (*(ulonglong *)(lVar13 + 0x30) < uVar22) {
          puVar16 = (undefined8 *)0x8;
          uVar14 = uVar23;
        }
        *param_3 = (*(longlong *)(lVar13 + 0x40) - uVar14) - uVar18;
        puStack_1c8 = puVar20 + uVar18 * 10;
        puStack_190 = puVar16 + uVar14 * 10;
        uStack_1b0 = *param_1;
        uStack_1a8 = *param_2;
        uStack_1a0 = param_8[3];
        uStack_198 = param_8[2];
        pcVar7 = (code *)*param_8;
        uVar10 = param_8[1];
        uStack_cc = *(undefined4 *)((longlong)param_5 + 0x1c);
        puVar26 = (ulonglong *)*param_5;
        puStack_1d8 = (undefined4 *)param_5[2];
        param_2 = (ulonglong *)*puStack_80;
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                       CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        unaff_XMM7_Ba = (char)iVar9;
        unaff_XMM7_Bb = (char)((uint)iVar9 >> 8);
        unaff_XMM7_Bc = (char)((uint)iVar9 >> 0x10);
        unaff_XMM7_Bd = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                       CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        unaff_XMM7_Be = (char)iVar9;
        unaff_XMM7_Bf = (char)((uint)iVar9 >> 8);
        unaff_XMM7_Bg = (char)((uint)iVar9 >> 0x10);
        unaff_XMM7_Bh = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                       CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        unaff_XMM7_Bi = (char)iVar9;
        unaff_XMM7_Bj = (char)((uint)iVar9 >> 8);
        unaff_XMM7_Bk = (char)((uint)iVar9 >> 0x10);
        unaff_XMM7_Bl = (char)((uint)iVar9 >> 0x18);
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                       CONCAT13(unaff_XMM7_Bp,
                                CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        unaff_XMM7_Bm = (char)iVar9;
        unaff_XMM7_Bn = (char)((uint)iVar9 >> 8);
        unaff_XMM7_Bo = (char)((uint)iVar9 >> 0x10);
        unaff_XMM7_Bp = (char)((uint)iVar9 >> 0x18);
        plStack_1c0 = plStack_b0 + 4;
        puStack_1d0 = param_3;
LAB_14090eb28:
        do {
          if ((puVar20 == (undefined8 *)0x0) || (puVar20 == puStack_1c8)) {
            if ((puVar16 == (undefined8 *)0x0) || (puVar16 == puStack_190)) goto LAB_14090f077;
            puStack_a0 = puVar16 + 10;
            puStack_98 = (undefined8 *)0x0;
            puVar20 = puVar16;
          }
          else {
            puStack_98 = puVar20 + 10;
            puStack_a0 = puVar16;
          }
          *puStack_1d0 = *puStack_1d0 + 1;
          if (plStack_b0[3] != 0) {
            param_1 = puVar20 + 2;
            uVar18 = pdb_1400af0a0(plStack_1c0,param_1);
            bVar27 = (byte)(uVar18 >> 0x39);
            auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
            auVar28 = pshuflw(auVar28,auVar28,0);
            lVar13 = 0;
            while( true ) {
              uVar18 = uVar18 & plStack_b0[1];
              auVar3 = *(undefined1 (*) [16])(*plStack_b0 + uVar18);
              auVar30[0] = -(auVar3[0] == auVar28[0]);
              auVar30[1] = -(auVar3[1] == auVar28[1]);
              auVar30[2] = -(auVar3[2] == auVar28[2]);
              auVar30[3] = -(auVar3[3] == auVar28[3]);
              auVar30[4] = -(auVar3[4] == auVar28[4]);
              auVar30[5] = -(auVar3[5] == auVar28[5]);
              auVar30[6] = -(auVar3[6] == auVar28[6]);
              auVar30[7] = -(auVar3[7] == auVar28[7]);
              auVar30[8] = -(auVar3[8] == auVar28[0]);
              auVar30[9] = -(auVar3[9] == auVar28[1]);
              auVar30[10] = -(auVar3[10] == auVar28[2]);
              auVar30[0xb] = -(auVar3[0xb] == auVar28[3]);
              auVar30[0xc] = -(auVar3[0xc] == auVar28[4]);
              auVar30[0xd] = -(auVar3[0xd] == auVar28[5]);
              auVar30[0xe] = -(auVar3[0xe] == auVar28[6]);
              auVar30[0xf] = -(auVar3[0xf] == auVar28[7]);
              uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar30[0xf] >> 7) << 0xf;
              uVar12 = (uint)uVar24;
              while (uVar24 != 0) {
                uVar19 = 0;
                for (uVar8 = uVar12; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar19 = uVar19 + 1;
                }
                param_3 = (ulonglong *)(*plStack_b0 + (uVar19 + uVar18 & plStack_b0[1]) * -8);
                if (*param_1 == param_3[-1]) {
                  puVar16 = puStack_a0;
                  puVar20 = puStack_98;
                  if (1 < *_DAT_143ca8e90) {
                    pcStack_208 = pdb_140ed4b80;
                    puStack_188 = (ulonglong *)0x0;
                    pcStack_180 = (code *)&UNK_14301f3d3;
                    auStack_178 = ZEXT816(0x1d);
                    auStack_168._8_8_ = 0x29;
                    auStack_168._0_8_ = &UNK_14301f318;
                    puStack_158 = (undefined4 *)0x2;
                    puStack_150 = &UNK_14301f3d3;
                    puStack_148 = (undefined4 *)0x1d;
                    plStack_140 = (longlong *)0x5c00000001;
                    puStack_138 = &UNK_14301f388;
                    ppuStack_130 = &puStack_210;
                    puStack_210 = param_1;
                    pdb_140f332f0(&uStack_81);
                    puVar16 = puStack_a0;
                    puVar20 = puStack_98;
                  }
                  goto LAB_14090eb28;
                }
                uVar24 = (ushort)(uVar12 - 1) & (ushort)uVar12;
                uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar24);
              }
              auVar29[0] = -(auVar3[0] == unaff_XMM7_Ba);
              auVar29[1] = -(auVar3[1] == unaff_XMM7_Bb);
              auVar29[2] = -(auVar3[2] == unaff_XMM7_Bc);
              auVar29[3] = -(auVar3[3] == unaff_XMM7_Bd);
              auVar29[4] = -(auVar3[4] == unaff_XMM7_Be);
              auVar29[5] = -(auVar3[5] == unaff_XMM7_Bf);
              auVar29[6] = -(auVar3[6] == unaff_XMM7_Bg);
              auVar29[7] = -(auVar3[7] == unaff_XMM7_Bh);
              auVar29[8] = -(auVar3[8] == unaff_XMM7_Bi);
              auVar29[9] = -(auVar3[9] == unaff_XMM7_Bj);
              auVar29[10] = -(auVar3[10] == unaff_XMM7_Bk);
              auVar29[0xb] = -(auVar3[0xb] == unaff_XMM7_Bl);
              auVar29[0xc] = -(auVar3[0xc] == unaff_XMM7_Bm);
              auVar29[0xd] = -(auVar3[0xd] == unaff_XMM7_Bn);
              auVar29[0xe] = -(auVar3[0xe] == unaff_XMM7_Bo);
              auVar29[0xf] = -(auVar3[0xf] == unaff_XMM7_Bp);
              if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
              uVar18 = uVar18 + lVar13 + 0x10;
              lVar13 = lVar13 + 0x10;
            }
          }
          puVar16 = puVar20;
          puVar25 = (undefined4 *)pdb_14091cf50(uStack_1b0);
          uVar17 = pdb_1418bded0(puVar20);
          param_1 = puVar20 + 3;
          uVar18 = uStack_1a8;
          pdb_140912250(&puStack_228,uStack_1a8,uVar17,puVar16,param_1,uStack_1b8);
          uStack_100 = 0;
          uStack_f8 = 8;
          uStack_f0 = 0;
          puStack_c8 = (undefined4 *)0x0;
          puStack_c0 = (undefined *)0x8;
          puStack_b8 = (undefined4 *)0x0;
          puStack_210 = (ulonglong *)puVar20[2];
          uStack_1f8 = uStack_198;
          uStack_1f0 = uStack_1a0;
          param_3 = *(ulonglong **)(puVar25 + 2);
          puStack_a8 = param_3 + *(longlong *)(puVar25 + 4) * 0x13;
          pcStack_208 = pcVar7;
          uStack_200 = uVar10;
          while (puStack_80 = param_3, param_3 != puStack_a8) {
            uStack_238 = pdb_1418bded0(puVar20);
            puVar11 = puStack_80;
            uStack_230 = uVar18;
            if (!SBORROW8(0,puStack_80[3])) {
              if ((puStack_80[5] != 4) || (*(int *)puStack_80[4] != 0x65657254)) {
                puStack_188 = puStack_80 + 3;
                pcStack_180 = pdb_140094770;
                auStack_178._8_8_ = pdb_1418c1610;
                auStack_178._0_8_ = &uStack_238;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14301f420,&puStack_188,&UNK_14301f450);
              }
              puVar2 = puStack_80 + 6;
              uStack_e4 = *(undefined4 *)((longlong)puVar20 + 0x24);
              uStack_e0 = uStack_e4;
              uStack_dc = uStack_e4;
              pdb_140def100(&puStack_188,puVar2,&uStack_e4);
              uStack_1e0 = *(undefined4 *)(puVar20 + 4);
              uStack_1e8 = puVar20[3];
              pdb_140deecf0(&uStack_e4,&puStack_188,&uStack_1e8);
              auStack_178._0_8_ = puVar11[8];
              puStack_188 = (ulonglong *)*puVar2;
              pcStack_180 = (code *)puVar11[7];
              *puStack_1d8 = uStack_cc;
              uVar18 = puVar26[2];
              unaff_R13 = (ulonglong)(uint)puVar26[3];
              if (unaff_R13 < uVar18) {
                uVar18 = puVar26[1];
                lVar13 = unaff_R13 * 0x1c;
                uVar19 = *(uint *)(uVar18 + 0x18 + lVar13) | 1;
                *(undefined4 *)(puVar26 + 3) = *(undefined4 *)(uVar18 + lVar13);
                *(undefined8 *)(uVar18 + 0x10 + lVar13) = uStack_d4;
                *(undefined8 *)(uVar18 + lVar13) = CONCAT44(uStack_e0,uStack_e4);
                ((undefined8 *)(uVar18 + lVar13))[1] = CONCAT44(uStack_d8,uStack_dc);
                *(uint *)(uVar18 + 0x18 + lVar13) = uVar19;
                *(int *)((longlong)puVar26 + 0x1c) = *(int *)((longlong)puVar26 + 0x1c) + 1;
                uVar12 = uVar19;
                if (puStack_b8 == puStack_c8) {
LAB_14090ef4f:
                  uVar19 = uVar12;
                  puVar25 = puStack_b8;
                  pdb_142d7ede0(&puStack_c8);
                  puStack_b8 = puVar25;
                }
              }
              else {
                if (0xfffffffe < uVar18) {
                  pdb_142dc664f(&UNK_143076da8,0xf,&UNK_143076e10);
                  goto LAB_14090f14c;
                }
                if (uVar18 == *puVar26) {
                  pdb_142d8dbe0(puVar26);
                }
                uVar14 = puVar26[1];
                lVar13 = uVar18 * 0x1c;
                *(undefined8 *)(uVar14 + 0x10 + lVar13) = uStack_d4;
                *(undefined8 *)(uVar14 + lVar13) = CONCAT44(uStack_e0,uStack_e4);
                ((undefined8 *)(uVar14 + lVar13))[1] = CONCAT44(uStack_d8,uStack_dc);
                *(undefined4 *)(uVar14 + 0x18 + lVar13) = 1;
                puVar26[2] = uVar18 + 1;
                *(int *)(puVar26 + 3) = (int)uVar18 + 1;
                uVar19 = 1;
                unaff_R13 = uVar18 & 0xffffffff;
                *(int *)((longlong)puVar26 + 0x1c) = *(int *)((longlong)puVar26 + 0x1c) + 1;
                uVar12 = 1;
                if (puStack_b8 == puStack_c8) goto LAB_14090ef4f;
              }
              *(undefined8 *)(puStack_c0 + (longlong)puStack_b8 * 0x28 + 0x10) = auStack_178._0_8_;
              *(ulonglong **)(puStack_c0 + (longlong)puStack_b8 * 0x28) = puStack_188;
              *(code **)((longlong)(puStack_c0 + (longlong)puStack_b8 * 0x28) + 8) = pcStack_180;
              *(undefined8 *)(puStack_c0 + (longlong)puStack_b8 * 0x28 + 0x18) = 0;
              *(uint *)(puStack_c0 + (longlong)puStack_b8 * 0x28 + 0x20) = uVar19;
              *(int *)(puStack_c0 + (longlong)puStack_b8 * 0x28 + 0x24) = (int)unaff_R13;
              puVar25 = (undefined4 *)((longlong)puStack_b8 + 1);
              puStack_b8 = puVar25;
            }
            param_3 = puStack_80 + 0x13;
            uVar18 = (ulonglong)(byte)param_2[0x13];
            pdb_1409109b0(puStack_80,uVar18,param_6,param_1,&uStack_100,&puStack_210);
          }
          plVar15 = (longlong *)*puVar20;
          puVar21 = (undefined *)puVar20[1];
          LOCK();
          lVar13 = *plVar15;
          *plVar15 = *plVar15 + 1;
          UNLOCK();
          if (*plVar15 == 0 || SCARRY8(lVar13,1) != *plVar15 < 0) {
LAB_14090f14c:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          ppuStack_130 = (ulonglong **)*param_1;
          uStack_128 = puVar20[4];
          uStack_120 = puVar20[5];
          uStack_118 = puVar20[6];
          uStack_110 = puVar20[7];
          uStack_108 = puVar20[8];
          puStack_148 = puStack_b8;
          auStack_178._8_8_ = uStack_100;
          auStack_178._0_8_ = uStack_218;
          auStack_168._8_8_ = uStack_f0;
          auStack_168._0_8_ = uStack_f8;
          puStack_158 = puStack_c8;
          puStack_150 = puStack_c0;
          puStack_188 = puStack_228;
          pcStack_180 = (code *)puStack_220;
          plStack_140 = plVar15;
          puStack_138 = puVar21;
          pdb_141616fb0(&puStack_210);
          puVar16 = puStack_a0;
          puVar20 = puStack_98;
        } while( true );
      }
      goto LAB_14090f14e;
    }
    if (uVar18 + 2 < 0x2d) {
      puVar20 = (undefined8 *)(0x2a - uVar18);
      puVar26 = (ulonglong *)(&UNK_14301f63a + uVar18);
      goto LAB_14090e71a;
    }
    goto LAB_14090f1d8;
  }
  goto LAB_14090f1b8;
LAB_14090f077:
  if (cStack_71 != '\0') {
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_14090f189;
    if (*plVar15 != 0) {
LAB_14090f14e:
      plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_14090f15a:
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
      if (plVar15 == (longlong *)0x0) goto LAB_14090f189;
      goto LAB_14090e7e8;
    }
    *plVar15 = -1;
    puStack_80 = (ulonglong *)plVar15;
    pdb_140e95370(plVar15 + 1);
    *puStack_80 = *puStack_80 + 1;
  }
  return;
LAB_14090f189:
  pdb_142dc7890(&UNK_143326860);
LAB_14090f195:
  pdb_142dc8070(&UNK_14301f342,0x29);
LAB_14090f1b8:
  pdb_142dc8070(&UNK_14301f638,0x2c,0);
LAB_14090f1d8:
  pdb_142dc8070(&UNK_14301f638,0x2c);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

