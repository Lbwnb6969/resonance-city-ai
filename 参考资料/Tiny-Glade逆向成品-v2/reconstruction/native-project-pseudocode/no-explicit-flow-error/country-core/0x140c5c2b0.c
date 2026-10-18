// VA 0x140c5c2b0, PDB extent 3055 bytes
// country_core::startup::startup_meadow::init_meadow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_meadow.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_meadow::init_meadow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_meadow.rs
   Extent: 3055 */

void pdb_140c5c2b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  ulonglong uVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  ulonglong *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  ulonglong *puStack_270;
  longlong lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulonglong *puStack_238;
  ulonglong *puStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  longlong lStack_1e0;
  byte *pbStack_1d8;
  longlong lStack_1c8;
  ulonglong *puStack_1c0;
  ulonglong *puStack_1b8;
  undefined8 uStack_1b0;
  ulonglong *puStack_198;
  ulonglong *puStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong *puStack_158;
  ulonglong *puStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong *puStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong *puStack_c0;
  ulonglong *puStack_b8;
  ulonglong *puStack_b0;
  undefined4 uStack_a4;
  longlong lStack_a0;
  ulonglong *puStack_98;
  ulonglong *puStack_90;
  ulonglong *puStack_88;
  ulonglong *puStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_a0 = *(longlong *)*param_1;
  lStack_110 = *param_4;
  lVar13 = (ulonglong)*(byte *)(lStack_110 + 0x98) * 8;
  pdb_140f3e9e0(&uStack_278,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14306f6d0 + lVar13),
                *(undefined8 *)(&UNK_14306f6a8 + lVar13));
  puStack_88 = puStack_270;
  pdb_140f3e9e0(&puStack_198,puStack_270,lStack_268,&UNK_14306f238,0xb);
  pdb_1416432f0(&puStack_1c0,&puStack_198);
  if (SBORROW8(0,(longlong)puStack_1c0)) {
    puStack_198 = puStack_1b8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f238,0xb,&puStack_198,&UNK_14306f570,&UNK_14306f278);
  }
  puStack_80 = puStack_1c0;
  puStack_90 = puStack_1b8;
  pdb_14164f5d0(&puStack_198,puStack_1b8,uStack_1b0);
  lVar13 = lStack_188;
  if (SBORROW8(0,(longlong)puStack_198)) {
    puStack_1c0 = puStack_190;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f290,0x12,&puStack_1c0,&UNK_14306f590,&UNK_14306f2a8);
  }
  puStack_b0 = puStack_198;
  puStack_98 = puStack_190;
  if (puStack_80 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_90,(ulonglong)puStack_80,1);
  }
  if (CONCAT44(uStack_274,uStack_278) != 0) {
    pub_1406abac0((byte *)puStack_88,CONCAT44(uStack_274,uStack_278),1);
  }
  uVar12 = _UNK_142e4e658;
  lVar11 = _DAT_142e4e650;
  lStack_a0 = lStack_a0 + 0x10;
  puStack_b8 = puStack_98 + lVar13 * 6;
  uStack_a4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  plVar2 = (longlong *)*param_8;
  puStack_108 = (undefined4 *)param_8[2];
  uStack_100 = *param_3;
  uStack_f8 = *param_2;
  uStack_f0 = *param_7;
  uStack_e8 = *param_5;
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
  puVar15 = puStack_98 + 10;
  puVar14 = puStack_98;
  uVar16 = lVar13 * 0x30;
  if (puStack_98 != puStack_b8) {
LAB_140c5c4c5:
    uVar21 = *puVar14;
    if (!SBORROW8(0,uVar21)) {
      puStack_80 = (ulonglong *)puVar14[1];
      uVar3 = puVar14[2];
      uStack_d8 = puVar14[3];
      puStack_88 = (ulonglong *)puVar14[4];
      uVar4 = puVar14[5];
      *puStack_108 = uStack_a4;
      lVar13 = (ulonglong)*(byte *)(lStack_110 + 0x98) * 8;
      puStack_e0 = puVar14 + 6;
      uStack_d0 = uVar21;
      uStack_c8 = uVar16 - 0x30;
      puStack_90 = puVar15;
      pdb_140f3e9e0(&uStack_278,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14306f6d0 + lVar13),
                    *(undefined8 *)(&UNK_14306f6a8 + lVar13));
      pdb_141b030b0(&puStack_198,puStack_88,uVar4,&uStack_278);
      pdb_141703bf0(&lStack_1e0,plVar2,lStack_a0,&puStack_198);
      pdb_141b033a0(&uStack_278,puStack_80,uVar3,&UNK_14306f2c0,0xd);
      puStack_c0 = puStack_270;
      pdb_140f3e750(&puStack_298,puStack_270,lStack_268,&UNK_14306f2cd,4);
      if (CONCAT44(uStack_274,uStack_278) != 0) {
        pub_1406abac0((byte *)puStack_c0,CONCAT44(uStack_274,uStack_278),1);
      }
      lStack_188 = uStack_288;
      uStack_180 = uStack_280;
      puStack_198 = puStack_298;
      puStack_190 = (ulonglong *)uStack_290;
      pdb_141b248b0(&uStack_278,&puStack_198);
      if (SBORROW8(0,CONCAT44(uStack_274,uStack_278))) {
        puStack_198 = puStack_270;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306f5b0,0x2b,&puStack_198,&UNK_14306f570,&UNK_14306f2d8);
      }
      uStack_128 = uStack_208;
      uStack_120 = uStack_200;
      uStack_138 = uStack_218;
      uStack_130 = uStack_210;
      lStack_148 = lStack_228;
      uStack_140 = uStack_220;
      puStack_158 = puStack_238;
      puStack_150 = puStack_230;
      puStack_198 = (ulonglong *)CONCAT44(uStack_274,uStack_278);
      uStack_170 = CONCAT44(uStack_24c,uStack_250);
      uStack_168 = uStack_248;
      uStack_164 = uStack_244;
      uStack_160 = uStack_240;
      uStack_15c = uStack_23c;
      uStack_178 = uStack_258;
      lStack_188 = lStack_268;
      uStack_180 = uStack_260;
      puStack_190 = puStack_270;
      puVar15 = (ulonglong *)pdb_140b08d00(&puStack_198,puStack_80,uVar3,uStack_100,uStack_f8);
      if (plVar2[3] != 0) {
        uVar16 = pdb_1400af0a0(plVar2 + 4,&lStack_1c8);
        lVar13 = *plVar2;
        bVar22 = (byte)(uVar16 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar18 = 0;
        while( true ) {
          uVar16 = uVar16 & plVar2[1];
          auVar1 = *(undefined1 (*) [16])(lVar13 + uVar16);
          auVar25[0] = -(auVar1[0] == auVar23[0]);
          auVar25[1] = -(auVar1[1] == auVar23[1]);
          auVar25[2] = -(auVar1[2] == auVar23[2]);
          auVar25[3] = -(auVar1[3] == auVar23[3]);
          auVar25[4] = -(auVar1[4] == auVar23[4]);
          auVar25[5] = -(auVar1[5] == auVar23[5]);
          auVar25[6] = -(auVar1[6] == auVar23[6]);
          auVar25[7] = -(auVar1[7] == auVar23[7]);
          auVar25[8] = -(auVar1[8] == auVar23[0]);
          auVar25[9] = -(auVar1[9] == auVar23[1]);
          auVar25[10] = -(auVar1[10] == auVar23[2]);
          auVar25[0xb] = -(auVar1[0xb] == auVar23[3]);
          auVar25[0xc] = -(auVar1[0xc] == auVar23[4]);
          auVar25[0xd] = -(auVar1[0xd] == auVar23[5]);
          auVar25[0xe] = -(auVar1[0xe] == auVar23[6]);
          auVar25[0xf] = -(auVar1[0xf] == auVar23[7]);
          uVar20 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar25[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar21 = uVar5 + uVar16 & plVar2[1];
            if (lStack_1c8 == *(longlong *)(lVar13 + -0x18 + uVar21 * -0x18)) {
              pdb_140a596f0(&puStack_198,uStack_f0,&UNK_14306f308,0x22,&UNK_14306f330);
              uStack_71 = 1;
              uVar17 = pdb_140df4400(&UNK_14306f348,0xe);
              uStack_71 = 1;
              uVar17 = pdb_140a2e580(uStack_e8,uVar17);
              lVar13 = lVar13 + uVar21 * -0x18;
              uStack_71 = 1;
              uStack_200 = pdb_141992180(&puStack_198,lStack_a0,lVar13 + -0x10,uVar17);
              uStack_208 = CONCAT44(uStack_164,uStack_168);
              uStack_218 = uStack_178;
              uStack_210 = uStack_170;
              lStack_228 = lStack_188;
              uStack_220 = uStack_180;
              puStack_238 = puStack_198;
              puStack_230 = puStack_190;
              uStack_278 = 0;
              uStack_250 = 0;
              uStack_258 = 0;
              uStack_1f8 = *(undefined4 *)(lVar13 + -8);
              lStack_268 = lVar11;
              uStack_260 = uVar12;
              uStack_24c = 0x3f800000;
              uStack_248 = 0x3f800000;
              uStack_244 = 0x3f800000;
              uStack_71 = 0;
              puStack_270 = puVar15;
              pdb_14161afe0(&puStack_1c0,param_6,&uStack_278,&UNK_14306f358);
              if (lStack_1e0 != 0) {
                pub_1406abac0(pbStack_1d8,lStack_1e0 * 0x30,4);
              }
              puVar15 = puStack_90;
              if (uStack_d0 != 0) {
                pub_1406abac0((byte *)puStack_80,uStack_d0,1);
              }
              if (uStack_d8 != 0) {
                pub_1406abac0((byte *)puStack_88,uStack_d8,1);
              }
              puVar15 = puVar15 + 6;
              puVar14 = puStack_e0;
              uVar16 = uStack_c8;
              if (puStack_e0 != puStack_b8) goto LAB_140c5c4c5;
              goto LAB_140c5c96a;
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
          }
          auVar24[0] = -(auVar1[0] == (char)iVar7);
          auVar24[1] = -(auVar1[1] == (char)((uint)iVar7 >> 8));
          auVar24[2] = -(auVar1[2] == (char)((uint)iVar7 >> 0x10));
          auVar24[3] = -(auVar1[3] == (char)((uint)iVar7 >> 0x18));
          auVar24[4] = -(auVar1[4] == (char)iVar8);
          auVar24[5] = -(auVar1[5] == (char)((uint)iVar8 >> 8));
          auVar24[6] = -(auVar1[6] == (char)((uint)iVar8 >> 0x10));
          auVar24[7] = -(auVar1[7] == (char)((uint)iVar8 >> 0x18));
          auVar24[8] = -(auVar1[8] == (char)iVar9);
          auVar24[9] = -(auVar1[9] == (char)((uint)iVar9 >> 8));
          auVar24[10] = -(auVar1[10] == (char)((uint)iVar9 >> 0x10));
          auVar24[0xb] = -(auVar1[0xb] == (char)((uint)iVar9 >> 0x18));
          auVar24[0xc] = -(auVar1[0xc] == (char)iVar10);
          auVar24[0xd] = -(auVar1[0xd] == (char)((uint)iVar10 >> 8));
          auVar24[0xe] = -(auVar1[0xe] == (char)((uint)iVar10 >> 0x10));
          auVar24[0xf] = -(auVar1[0xf] == (char)((uint)iVar10 >> 0x18));
          if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x2f,0) & 1) != 0) || (SUB161(auVar24 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
          uVar16 = uVar16 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14306f2f0);
    }
    if (puStack_b8 != puVar14 + 6) {
      uVar16 = (uVar16 - 0x30) / 0x30;
      do {
        if (puVar15[-4] != 0) {
          pub_1406abac0((byte *)puVar15[-3],puVar15[-4],1);
        }
        if (puVar15[-1] != 0) {
          pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
        }
        puVar15 = puVar15 + 6;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
LAB_140c5c96a:
  if (puStack_b0 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_98,(longlong)puStack_b0 * 0x30,8);
  }
  return;
}

