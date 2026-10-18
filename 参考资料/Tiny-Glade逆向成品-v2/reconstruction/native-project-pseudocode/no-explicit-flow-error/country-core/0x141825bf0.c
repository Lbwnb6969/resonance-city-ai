// VA 0x141825bf0, PDB extent 2644 bytes
// country_core::startup::load_mesh_atlases::load_nani_meshes<country_core::startup::load_mesh_atlases::reload_mesh_atlases::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_mesh_atlases::load_nani_meshes<country_core::startup::load_mesh_atlases::reload_mesh_atlases::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 2644 */

void pdb_141825bf0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong *arg0;
  char cVar11;
  longlong lVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong *puVar21;
  bool bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  ulonglong *puStack_268;
  ulonglong *puStack_260;
  ulonglong uStack_258;
  ulonglong *puStack_250;
  byte *pbStack_248;
  ulonglong uStack_240;
  ulonglong uStack_238;
  ulonglong *puStack_228;
  code *pcStack_220;
  byte *pbStack_218;
  ulonglong *puStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  ulonglong uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_148;
  ulonglong uStack_140;
  longlong *plStack_138;
  ulonglong uStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  byte *pbStack_118;
  ulonglong *puStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong *puStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_148 = param_1;
  lStack_78 = param_2;
  pdb_140d929f0(&uStack_108,&UNK_143340be8,0x16);
  uStack_1c8 = (byte *)((ulonglong)uStack_1c8._4_4_ << 0x20);
  pbStack_1c0 = (byte *)0x0;
  uStack_1b8 = 7;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 1;
  pbStack_70 = pbStack_100;
  lVar12 = pdb_140f4a2a0(&uStack_1c8,pbStack_100,puStack_f8);
  if (uStack_108 != 0) {
    pub_1406abac0(pbStack_70,uStack_108,1);
  }
  if (lVar12 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143340bfe,0x14,&uStack_1c8,&UNK_143341158,&UNK_143340c48);
  }
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x2000,1);
  if (pbVar13 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x2000);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pbStack_1c0 = (byte *)0x2000;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a7 = 0;
  uStack_208 = 0;
  pbStack_218 = (byte *)0x1;
  puStack_210 = (ulonglong *)0x80;
  uStack_1c8 = pbVar13;
  pdb_141741830(&uStack_108,&pbStack_218,&uStack_1c8);
  if ((char)uStack_108 != '2') {
    uStack_168 = uStack_a8;
    uStack_178 = uStack_b8;
    uStack_170 = uStack_b0;
    uStack_180 = uStack_c0;
    uStack_198 = (undefined4)uStack_d8;
    uStack_194 = uStack_d8._4_4_;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    uStack_1a8 = (undefined1)uStack_e8;
    uStack_1a7 = (undefined7)(uStack_e8 >> 8);
    uStack_1a0 = uStack_e0;
    uStack_1b8 = SUB84(puStack_f8,0);
    uStack_1b4 = (undefined4)((ulonglong)puStack_f8 >> 0x20);
    uStack_1b0 = (undefined4)uStack_f0;
    uStack_1ac = (undefined4)(uStack_f0 >> 0x20);
    uStack_1c8 = (byte *)uStack_108;
    pbStack_1c0 = pbStack_100;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143340c60,0x1b,&uStack_1c8,&UNK_143341178,&UNK_143340c80);
  }
  puStack_110 = puStack_f8 + uStack_f0 * 10;
  puStack_128 = puStack_f8;
  puStack_120 = puStack_f8;
  pbStack_118 = pbStack_100;
  lVar12 = param_3[3];
  plStack_138 = param_3 + 4;
  pbStack_70 = (byte *)*param_3;
  uStack_130 = param_3[1];
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  uVar19 = uStack_130;
  lStack_80 = lVar12;
LAB_141825e09:
  while (puStack_120 != puStack_110) {
    puVar21 = puStack_120 + 10;
    uVar14 = *puStack_120;
    uStack_1d8 = puStack_120[9];
    uStack_1e8 = puStack_120[7];
    uStack_1e0 = puStack_120[8];
    uStack_1f8 = puStack_120[5];
    uStack_1f0 = puStack_120[6];
    uStack_208 = puStack_120[3];
    uStack_200 = puStack_120[4];
    pbStack_218 = (byte *)puStack_120[1];
    puStack_210 = (ulonglong *)puStack_120[2];
    puStack_120 = puVar21;
    if (SBORROW8(0,uVar14)) break;
    uStack_1e8._4_4_ = (undefined4)(uStack_1e8 >> 0x20);
    uStack_1e0._4_4_ = (undefined4)(uStack_1e0 >> 0x20);
    uStack_d0 = (undefined4)uStack_1e8;
    uStack_cc = uStack_1e8._4_4_;
    uStack_c8 = (undefined4)uStack_1e0;
    uStack_c4 = uStack_1e0._4_4_;
    uStack_c0._0_1_ = (char)uStack_1d8;
    cVar11 = (char)uStack_c0;
    uStack_1c8 = (byte *)CONCAT71(uStack_1c8._1_7_,(char)uStack_c0);
    uStack_108 = uVar14;
    pbStack_100 = pbStack_218;
    puStack_f8 = puStack_210;
    uStack_f0 = uStack_208;
    uStack_e8 = uStack_200;
    uStack_e0 = uStack_1f8;
    uStack_d8 = uStack_1f0;
    uStack_c0 = uStack_1d8;
    if (lVar12 != 0) {
      uStack_61 = 1;
      uVar14 = pdb_1417c4b30(plStack_138,&uStack_1c8);
      bVar23 = (byte)(uVar14 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar16 = 0;
      while( true ) {
        uVar14 = uVar14 & uVar19;
        auVar3 = *(undefined1 (*) [16])((longlong)pbStack_70 + uVar14);
        auVar26[0] = -(auVar3[0] == auVar24[0]);
        auVar26[1] = -(auVar3[1] == auVar24[1]);
        auVar26[2] = -(auVar3[2] == auVar24[2]);
        auVar26[3] = -(auVar3[3] == auVar24[3]);
        auVar26[4] = -(auVar3[4] == auVar24[4]);
        auVar26[5] = -(auVar3[5] == auVar24[5]);
        auVar26[6] = -(auVar3[6] == auVar24[6]);
        auVar26[7] = -(auVar3[7] == auVar24[7]);
        auVar26[8] = -(auVar3[8] == auVar24[0]);
        auVar26[9] = -(auVar3[9] == auVar24[1]);
        auVar26[10] = -(auVar3[10] == auVar24[2]);
        auVar26[0xb] = -(auVar3[0xb] == auVar24[3]);
        auVar26[0xc] = -(auVar3[0xc] == auVar24[4]);
        auVar26[0xd] = -(auVar3[0xd] == auVar24[5]);
        auVar26[0xe] = -(auVar3[0xe] == auVar24[6]);
        auVar26[0xf] = -(auVar3[0xf] == auVar24[7]);
        uVar20 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (cVar11 == *(char *)(~(uVar5 + uVar14 & uVar19) + (longlong)pbStack_70)) {
            if ((char)uStack_c0 == '\a') {
              uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143340c98,99,&UNK_143340cd0);
            }
            arg0 = (ulonglong *)CONCAT44(uStack_cc,uStack_d0);
            uVar19 = CONCAT44(uStack_c4,uStack_c8) * 0x20;
            puVar2 = arg0 + CONCAT44(uStack_c4,uStack_c8) * 4;
            uStack_140 = uStack_d8;
            uStack_258 = uStack_d8;
            puVar21 = arg0 + 5;
            puVar15 = arg0;
            puStack_268 = arg0;
            puStack_250 = puVar2;
            goto LAB_14182603b;
          }
          uVar20 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar20);
        }
        auVar25[0] = -(auVar3[0] == (char)iVar7);
        auVar25[1] = -(auVar3[1] == (char)((uint)iVar7 >> 8));
        auVar25[2] = -(auVar3[2] == (char)((uint)iVar7 >> 0x10));
        auVar25[3] = -(auVar3[3] == (char)((uint)iVar7 >> 0x18));
        auVar25[4] = -(auVar3[4] == (char)iVar8);
        auVar25[5] = -(auVar3[5] == (char)((uint)iVar8 >> 8));
        auVar25[6] = -(auVar3[6] == (char)((uint)iVar8 >> 0x10));
        auVar25[7] = -(auVar3[7] == (char)((uint)iVar8 >> 0x18));
        auVar25[8] = -(auVar3[8] == (char)iVar9);
        auVar25[9] = -(auVar3[9] == (char)((uint)iVar9 >> 8));
        auVar25[10] = -(auVar3[10] == (char)((uint)iVar9 >> 0x10));
        auVar25[0xb] = -(auVar3[0xb] == (char)((uint)iVar9 >> 0x18));
        auVar25[0xc] = -(auVar3[0xc] == (char)iVar10);
        auVar25[0xd] = -(auVar3[0xd] == (char)((uint)iVar10 >> 8));
        auVar25[0xe] = -(auVar3[0xe] == (char)((uint)iVar10 >> 0x10));
        auVar25[0xf] = -(auVar3[0xf] == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x1f,0) & 1) != 0) || (SUB161(auVar25 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
        uVar14 = uVar14 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
    pdb_140999dd0(&uStack_108);
    lVar16 = CONCAT44(uStack_c4,uStack_c8);
    if (lVar16 != 0) {
      puVar18 = (undefined8 *)(CONCAT44(uStack_cc,uStack_d0) + 8);
      do {
        if (puVar18[-1] != 0) {
          pub_1406abac0((byte *)*puVar18,puVar18[-1],1);
        }
        puVar18 = puVar18 + 4;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (uStack_d8 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_cc,uStack_d0),uStack_d8 << 5,8);
    }
  }
  pdb_140971f40(&puStack_128);
  return;
LAB_14182603b:
  lVar12 = lStack_80;
  uVar19 = uVar19 - 0x20;
  if (puVar15 == puVar2) goto LAB_1418261c0;
  puVar1 = puVar15 + 4;
  uVar14 = *puVar15;
  uStack_238 = puVar15[3];
  pbStack_248 = (byte *)puVar15[1];
  uStack_240 = puVar15[2];
  puStack_260 = puVar1;
  if (SBORROW8(0,uVar14)) {
    if (puVar2 != puVar1) {
      uVar19 = uVar19 >> 5;
      do {
        if (puVar21[-1] != 0) {
          pub_1406abac0((byte *)*puVar21,puVar21[-1],1);
        }
        puVar21 = puVar21 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    goto LAB_1418261c0;
  }
  uStack_a0 = uVar14;
  pbStack_98 = pbStack_248;
  uStack_90 = uStack_240;
  uStack_88 = uStack_238;
  if ((DAT_143cb2d0c != '\x01') ||
     (uStack_88._0_1_ = (char)uStack_238, bVar22 = (char)uStack_88 == '\0', bVar22)) {
    pdb_140b1dec0(&uStack_1c8,pbStack_248,uStack_240,&uStack_108);
    if (lStack_78 != 0) {
      puStack_228 = &uStack_a0;
      pcStack_220 = pdb_140001020;
      pdb_140f60760(&uStack_2a0,&UNK_143340b70,&puStack_228);
      uStack_288 = uStack_2a0;
      uStack_280 = uStack_298;
      uStack_278 = uStack_290;
      uStack_270 = 1;
      pdb_140c58080(lStack_78,&uStack_288,uStack_c0 & 0xff);
    }
    pdb_140a58820(uStack_148,uStack_c0 & 0xff,pbStack_98,uStack_90,&uStack_1c8);
    pdb_14098a960(&uStack_1c8);
  }
  if (uStack_a0 != 0) {
    pub_1406abac0(pbStack_98,uStack_a0,1);
  }
  puVar21 = puVar21 + 4;
  puVar15 = puVar1;
  goto LAB_14182603b;
LAB_1418261c0:
  if (uStack_140 != 0) {
    pub_1406abac0((byte *)arg0,uStack_140 << 5,8);
  }
  pdb_140999dd0(&uStack_108);
  uVar19 = uStack_130;
  goto LAB_141825e09;
}

