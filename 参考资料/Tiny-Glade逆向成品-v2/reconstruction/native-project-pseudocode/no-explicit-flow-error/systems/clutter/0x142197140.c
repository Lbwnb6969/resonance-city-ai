// VA 0x142197140, PDB extent 7488 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 7488 */

void pdb_142197140(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  undefined8 *puVar20;
  undefined1 (*unaff_RSI) [16];
  bool bVar21;
  undefined *puVar22;
  int *piVar23;
  byte bVar24;
  ushort uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined8 *puVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  float fVar54;
  float fVar55;
  char unaff_XMM14_Ba;
  char unaff_XMM14_Bb;
  char unaff_XMM14_Bc;
  char unaff_XMM14_Bd;
  char unaff_XMM14_Be;
  char unaff_XMM14_Bf;
  char unaff_XMM14_Bg;
  char unaff_XMM14_Bh;
  char unaff_XMM14_Bi;
  char unaff_XMM14_Bj;
  char unaff_XMM14_Bk;
  char unaff_XMM14_Bl;
  char unaff_XMM14_Bm;
  char unaff_XMM14_Bn;
  char unaff_XMM14_Bo;
  char unaff_XMM14_Bp;
  float unaff_XMM15_Da;
  byte *pbStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [12];
  byte *pbStack_354;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  longlong lStack_310;
  byte *pbStack_308;
  undefined1 *puStack_300;
  byte *pbStack_2f8;
  undefined4 *puStack_2f0;
  undefined4 *puStack_2e8;
  longlong lStack_2e0;
  undefined1 **ppuStack_2d8;
  undefined1 **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulonglong *puStack_258;
  undefined8 uStack_250;
  longlong lStack_248;
  undefined1 *puStack_240;
  undefined1 (*pauStack_238) [16];
  ulonglong uStack_230;
  longlong *plStack_220;
  undefined1 auStack_218 [16];
  float fStack_208;
  undefined4 uStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  longlong lStack_1d8;
  undefined4 uStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  longlong lStack_1c0;
  longlong lStack_1b8;
  byte *pbStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 *puStack_198;
  ulonglong *puStack_190;
  uint *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 *puStack_130;
  ulonglong uStack_128;
  longlong *plStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  byte bStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb_03;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar16 = param_2;
  uStack_250 = param_3;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lVar10 = 0;
  }
  else {
    pauVar19 = (undefined1 (*) [16])0x5c;
    lVar10 = pdb_1421991c0(0x5c);
    puVar34 = (undefined8 *)&UNK_14346b833;
    if (lVar10 == 1) {
      if ((ulonglong *)0x5c < puVar16) {
LAB_142197633:
        uVar11 = 0;
        pdb_142dc8070(&UNK_14346b833,0x5c);
LAB_142197653:
        puVar22 = &UNK_14346b833;
        lVar10 = 0x5c;
        uVar18 = pdb_142dc8070();
        auVar42._8_8_ = extraout_XMM0_Qb;
        auVar42._0_8_ = extraout_XMM0_Qa;
        goto LAB_142197680;
      }
      uVar11 = pdb_1421991c0(puVar16);
      if ((uVar11 & 1) != 0) {
        uVar11 = (longlong)puVar16 + 2;
        if (0x5c < uVar11) goto LAB_142197653;
        pauVar19 = (undefined1 (*) [16])(0x5a - (longlong)puVar16);
        puVar34 = (undefined8 *)((longlong)puVar16 + 0x14346b835);
      }
    }
    puVar22 = &UNK_14346b73b;
    puVar31 = &UNK_14346b6ee;
    do {
      bVar24 = puVar22[-1];
      uVar9 = (uint)(char)bVar24;
      if ((char)bVar24 < '\0') {
        bVar1 = puVar22[-2];
        if ((char)bVar1 < -0x40) {
          bVar2 = puVar22[-3];
          if ((char)bVar2 < -0x40) {
            pbVar13 = puVar22 + -4;
            puVar22 = puVar22 + -4;
            uVar9 = bVar2 & 0x3f | (*pbVar13 & 7) << 6;
          }
          else {
            puVar22 = puVar22 + -3;
            uVar9 = bVar2 & 0xf;
          }
          uVar9 = bVar1 & 0x3f | uVar9 << 6;
        }
        else {
          puVar22 = puVar22 + -2;
          uVar9 = bVar1 & 0x1f;
        }
        uVar9 = (uint)(bVar24 & 0x3f) | uVar9 << 6;
        if (uVar9 != 0x5c) goto LAB_1421972b4;
LAB_1421972cc:
        puVar31 = puVar22 + -0x14346b6ed;
        if (puVar31 < (undefined *)0x4e) {
          lVar10 = 0x4d - (longlong)puVar31;
          puVar31 = puVar22 + 1;
          goto LAB_1421972ee;
        }
        pdb_142dc8070(&UNK_14346b6ee,0x4d,puVar31,0x4d,&UNK_14346b8f8);
        goto LAB_142197633;
      }
      puVar22 = puVar22 + -1;
      if (uVar9 == 0x5c) goto LAB_1421972cc;
LAB_1421972b4:
      if (uVar9 == 0x2f) goto LAB_1421972cc;
    } while (puVar22 != &UNK_14346b6ee);
    lVar10 = 0x4d;
LAB_1421972ee:
    plVar12 = (longlong *)pdb_140e97000();
    if ((char)plVar12[0xd] != '\x01') {
      uVar11 = 0;
      plVar12 = (longlong *)pdb_142e16b00(plVar12);
      if (plVar12 == (longlong *)0x0) goto LAB_142198957;
    }
    if (*plVar12 != 0) goto LAB_142198938;
    *plVar12 = -1;
    plStack_120 = plVar12;
    uStack_1e8 = pdb_140e94f10(plVar12 + 1,puVar34,pauVar19,puVar31,lVar10,1,0);
    *plStack_120 = *plStack_120 + 1;
    lVar10 = 1;
  }
  lStack_1f8 = lVar10;
  lStack_1f0 = lVar10;
  pdb_142196ce0(&pauStack_238,param_4);
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_1d8 = *param_8;
  lStack_1a0 = lVar10;
  pdb_1421a8350(lStack_1d8,&pauStack_238);
  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
  puVar34 = (undefined8 *)*param_9;
  lStack_1a0 = lVar10;
  pdb_14219cb70(puVar34,&pauStack_238);
  lStack_1a0 = lVar10;
  pdb_1421a7b70(param_7,&pauStack_238);
  puVar16 = (ulonglong *)*param_5;
  lVar10 = param_5[1];
  uVar11 = *puVar16;
  uVar30 = 0;
  uVar18 = uVar11 - *(ulonglong *)(lVar10 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar10 + 0x18)) {
    uVar18 = uVar30;
  }
  uVar17 = uVar11 - *(ulonglong *)(lVar10 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar10 + 0x38)) {
    uVar17 = uVar30;
  }
  uVar11 = *(ulonglong *)(lVar10 + 0x30);
  uVar27 = uVar11 - uVar17;
  if (uVar11 < uVar17) {
    uVar27 = uVar30;
  }
  uVar3 = *(ulonglong *)(lVar10 + 0x10);
  uVar29 = uVar3 - uVar18;
  if (uVar3 < uVar18) {
    uVar29 = uVar30;
  }
  uVar30 = *(ulonglong *)(lVar10 + 0x40);
  *puVar16 = uVar30 - (uVar29 + uVar27);
  if (uVar3 >= uVar18 && uVar3 - uVar18 != 0 || uVar11 >= uVar17 && uVar11 - uVar17 != 0) {
    *puVar16 = uVar30;
    *(undefined8 *)(lStack_1d8 + 0x10) = 0;
    lVar10 = puVar34[3];
    if (lVar10 != 0) {
      pauVar32 = (undefined1 (*) [16])*puVar34;
      auVar42 = *pauVar32;
      pauVar19 = pauVar32 + 1;
      uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
      pauVar33 = pauVar32;
      puStack_198 = puVar34;
      do {
        if ((short)uVar9 == 0) {
          do {
            auVar42 = *pauVar19;
            pauVar33 = pauVar33 + -0x28;
            pauVar19 = pauVar19 + 1;
            uVar9 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar9 == 0);
        }
        uVar26 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        lVar28 = *(longlong *)((longlong)pauVar33 + (ulonglong)uVar26 * -0x28 + -0x18);
        if (lVar28 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar33 + (ulonglong)uVar26 * -0x28 + -0x10),
                        lVar28 << 3,4);
        }
        puVar34 = puStack_198;
        uVar9 = uVar9 - 1 & uVar9;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar11 = puStack_198[1];
      if (uVar11 == 0) {
        uVar18 = 0;
      }
      else {
        pub_142e32780(pauVar32,0xff,uVar11 + 0x11);
        uVar18 = (uVar11 + 1 & 0xfffffffffffffff8) - (uVar11 + 1 >> 3);
        if (uVar11 < 8) {
          uVar18 = uVar11;
        }
      }
      puVar34[3] = 0;
      puVar34[2] = uVar18;
    }
    param_7[2] = 0;
  }
  lStack_1b8 = 0;
  pbStack_1b0 = (byte *)0x4;
  lStack_1a8 = 0;
  auVar42 = *pauStack_238;
  unaff_RSI = pauStack_238 + 1;
  puStack_190 = (ulonglong *)*param_1;
  puStack_258 = puStack_190 + 4;
  uStack_128 = *param_2;
  uStack_118 = param_2[1];
  iVar15 = -(uint)(CONCAT13(unaff_XMM14_Bd,
                            CONCAT12(unaff_XMM14_Bc,CONCAT11(unaff_XMM14_Bb,unaff_XMM14_Ba))) ==
                  CONCAT13(unaff_XMM14_Bd,
                           CONCAT12(unaff_XMM14_Bc,CONCAT11(unaff_XMM14_Bb,unaff_XMM14_Ba))));
  unaff_XMM14_Ba = (char)iVar15;
  unaff_XMM14_Bb = (char)((uint)iVar15 >> 8);
  unaff_XMM14_Bc = (char)((uint)iVar15 >> 0x10);
  unaff_XMM14_Bd = (char)((uint)iVar15 >> 0x18);
  iVar15 = -(uint)(CONCAT13(unaff_XMM14_Bh,
                            CONCAT12(unaff_XMM14_Bg,CONCAT11(unaff_XMM14_Bf,unaff_XMM14_Be))) ==
                  CONCAT13(unaff_XMM14_Bh,
                           CONCAT12(unaff_XMM14_Bg,CONCAT11(unaff_XMM14_Bf,unaff_XMM14_Be))));
  unaff_XMM14_Be = (char)iVar15;
  unaff_XMM14_Bf = (char)((uint)iVar15 >> 8);
  unaff_XMM14_Bg = (char)((uint)iVar15 >> 0x10);
  unaff_XMM14_Bh = (char)((uint)iVar15 >> 0x18);
  iVar15 = -(uint)(CONCAT13(unaff_XMM14_Bl,
                            CONCAT12(unaff_XMM14_Bk,CONCAT11(unaff_XMM14_Bj,unaff_XMM14_Bi))) ==
                  CONCAT13(unaff_XMM14_Bl,
                           CONCAT12(unaff_XMM14_Bk,CONCAT11(unaff_XMM14_Bj,unaff_XMM14_Bi))));
  unaff_XMM14_Bi = (char)iVar15;
  unaff_XMM14_Bj = (char)((uint)iVar15 >> 8);
  unaff_XMM14_Bk = (char)((uint)iVar15 >> 0x10);
  unaff_XMM14_Bl = (char)((uint)iVar15 >> 0x18);
  iVar15 = -(uint)(CONCAT13(unaff_XMM14_Bp,
                            CONCAT12(unaff_XMM14_Bo,CONCAT11(unaff_XMM14_Bn,unaff_XMM14_Bm))) ==
                  CONCAT13(unaff_XMM14_Bp,
                           CONCAT12(unaff_XMM14_Bo,CONCAT11(unaff_XMM14_Bn,unaff_XMM14_Bm))));
  unaff_XMM14_Bm = (char)iVar15;
  unaff_XMM14_Bn = (char)((uint)iVar15 >> 8);
  unaff_XMM14_Bo = (char)((uint)iVar15 >> 0x10);
  unaff_XMM14_Bp = (char)((uint)iVar15 >> 0x18);
  param_2 = puStack_190;
  param_1 = (undefined8 *)
            (ulonglong)
            ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
  unaff_XMM7_Da = _DAT_142e377e0;
  unaff_XMM6_Da = _DAT_142e37830;
  unaff_XMM15_Da = _DAT_14300b368;
  pauVar19 = pauStack_238;
  pbVar13 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  plStack_120 = plStack_220;
joined_r0x0001421975ed:
  if (plStack_120 != (longlong *)0x0) {
LAB_142197716:
    uVar9 = (uint)param_1;
    if ((short)param_1 == 0) {
      do {
        auVar42 = *unaff_RSI;
        pauVar19 = pauVar19 + -8;
        unaff_RSI = unaff_RSI + 1;
        uVar9 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                        (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar9 == 0);
    }
    iVar15 = 0;
    for (uVar26 = uVar9; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
      iVar15 = iVar15 + 1;
    }
    param_1 = (undefined8 *)(ulonglong)(uVar9 - 1 & uVar9);
    plStack_120 = (longlong *)((longlong)plStack_120 + -1);
    param_4 = *(undefined1 **)((longlong)pauVar19 + (-8 - (ulonglong)(uint)(iVar15 << 3)));
    puStack_130 = param_4;
    if (param_2[3] != 0) {
      uStack_160 = pbVar13;
      uVar18 = pdb_14216e010(puStack_258,&puStack_130);
      uVar11 = *param_2;
      puVar22 = (undefined *)param_2[1];
      bVar24 = (byte)(uVar18 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar41 = pshuflw(auVar42,auVar42,0);
      auVar42._0_8_ = auVar41._0_8_;
      auVar42._8_4_ = auVar41._0_4_;
      auVar42._12_4_ = auVar41._4_4_;
      lVar10 = 0;
LAB_142197680:
      do {
        uVar18 = uVar18 & (ulonglong)puVar22;
        auVar41 = *(undefined1 (*) [16])(uVar11 + uVar18);
        auVar52[0] = -(auVar41[0] == auVar42[0]);
        auVar52[1] = -(auVar41[1] == auVar42[1]);
        auVar52[2] = -(auVar41[2] == auVar42[2]);
        auVar52[3] = -(auVar41[3] == auVar42[3]);
        auVar52[4] = -(auVar41[4] == auVar42[4]);
        auVar52[5] = -(auVar41[5] == auVar42[5]);
        auVar52[6] = -(auVar41[6] == auVar42[6]);
        auVar52[7] = -(auVar41[7] == auVar42[7]);
        auVar52[8] = -(auVar41[8] == auVar42[8]);
        auVar52[9] = -(auVar41[9] == auVar42[9]);
        auVar52[10] = -(auVar41[10] == auVar42[10]);
        auVar52[0xb] = -(auVar41[0xb] == auVar42[0xb]);
        auVar52[0xc] = -(auVar41[0xc] == auVar42[0xc]);
        auVar52[0xd] = -(auVar41[0xd] == auVar42[0xd]);
        auVar52[0xe] = -(auVar41[0xe] == auVar42[0xe]);
        auVar52[0xf] = -(auVar41[0xf] == auVar42[0xf]);
        uVar25 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar25;
        while (pbVar13 = uStack_160, uVar25 != 0) {
          uVar26 = 0;
          for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar26 = uVar26 + 1;
          }
          lVar28 = (uVar26 + uVar18 & (ulonglong)puVar22) * -0x2b0;
          if (param_4 == *(undefined1 **)((uVar11 - 0x2b0) + lVar28)) {
            lStack_110 = uVar11 + lVar28;
            if (1 < *(uint *)(lStack_110 + -0x50)) goto joined_r0x0001421975ed;
            puStack_198 = puVar34;
            uVar11 = pdb_140b54b40(param_2,param_4);
            if ((uVar11 & 0xffffffff) == 0) {
              bStack_f1 = 0;
            }
            else {
              uVar18 = uVar11 & 0xffffffff ^ 0xffffffff;
              uVar37 = 1;
              iVar15 = (int)(uVar11 >> 0x20);
              if (*(ulonglong *)(uStack_118 + 0x10) <= uVar18) {
LAB_1421989a4:
                uStack_168 = (byte *)CONCAT44((int)uVar18,uVar37);
                uStack_160._0_4_ = (undefined4)uVar11;
                uStack_160._4_4_ = iVar15;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_14346b808,0x2b,&uStack_168,&UNK_14346b7e8,&UNK_14346b740);
              }
              piVar23 = (int *)(uVar18 * 0x18 + *(longlong *)(uStack_118 + 8));
              uVar18 = uVar11 >> 0x20;
              if ((piVar23[4] != iVar15) || (*piVar23 == 0)) goto LAB_1421989a4;
              uVar18 = *(ulonglong *)(piVar23 + 2);
              uVar37 = 0;
              if ((*(ulonglong *)(uStack_128 + 0x38) <= (uVar18 & 0xffffffff)) ||
                 ((*(ulonglong *)(*(longlong *)(uStack_128 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8)
                   >> (uVar18 & 0x3f) & 1) == 0)) goto LAB_1421989a4;
              bStack_f1 = pdb_140b77990((ulonglong)(uint)~piVar23[1] * 0x58 +
                                        *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(uStack_118 + 0x1a0) + 0x18 +
                                           (uVar18 >> 0x20) * 0x48) + 0x10 +
                                         ~*(ulonglong *)
                                           (*(longlong *)
                                             (*(longlong *)(uStack_118 + 0x1a0) + 0x38 +
                                             (uVar18 >> 0x20) * 0x48) +
                                           *(longlong *)(uStack_128 + 0x110) * 8) * 0x30));
              bStack_f1 = bStack_f1 ^ 1;
            }
            lStack_1c0 = lStack_110 + -0x2a8;
            uVar37 = *(undefined4 *)(lStack_110 + -0x24);
            fVar35 = (float)pdb_14092f8b0();
            puStack_188 = (uint *)(lStack_110 + -0x50);
            fVar35 = fVar35 + (float)(int)(char)bStack_f1 * _DAT_143288b1c;
            pauVar33 = (undefined1 (*) [16])*puStack_190;
            uStack_1e0 = puStack_190[3];
            auVar42 = *pauVar33;
            pauVar32 = pauVar33 + 1;
            uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
            lStack_248 = lStack_110 + -5;
            uStack_1c8 = uVar37;
            fStack_1c4 = fVar35;
            pbVar13 = uStack_160;
            goto LAB_1421979a0;
          }
          uVar25 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar25);
        }
        auVar46[0] = -(auVar41[0] == unaff_XMM14_Ba);
        auVar46[1] = -(auVar41[1] == unaff_XMM14_Bb);
        auVar46[2] = -(auVar41[2] == unaff_XMM14_Bc);
        auVar46[3] = -(auVar41[3] == unaff_XMM14_Bd);
        auVar46[4] = -(auVar41[4] == unaff_XMM14_Be);
        auVar46[5] = -(auVar41[5] == unaff_XMM14_Bf);
        auVar46[6] = -(auVar41[6] == unaff_XMM14_Bg);
        auVar46[7] = -(auVar41[7] == unaff_XMM14_Bh);
        auVar46[8] = -(auVar41[8] == unaff_XMM14_Bi);
        auVar46[9] = -(auVar41[9] == unaff_XMM14_Bj);
        auVar46[10] = -(auVar41[10] == unaff_XMM14_Bk);
        auVar46[0xb] = -(auVar41[0xb] == unaff_XMM14_Bl);
        auVar46[0xc] = -(auVar41[0xc] == unaff_XMM14_Bm);
        auVar46[0xd] = -(auVar41[0xd] == unaff_XMM14_Bn);
        auVar46[0xe] = -(auVar41[0xe] == unaff_XMM14_Bo);
        auVar46[0xf] = -(auVar41[0xf] == unaff_XMM14_Bp);
        if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x1f,0) & 1) != 0) || (SUB161(auVar46 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
        uVar18 = uVar18 + lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while( true );
    }
    goto joined_r0x0001421975ed;
  }
LAB_1421987c9:
  puVar20 = (undefined8 *)param_7[1];
  puVar34 = puVar20 + param_7[2] * 5;
  uVar37 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uVar39 = *param_6;
  puVar5 = (undefined4 *)param_6[2];
  uStack_160 = pbVar13;
  for (; puVar20 != puVar34; puVar20 = puVar20 + 5) {
    *puVar5 = uVar37;
    uStack_168 = (byte *)puVar20[2];
    uStack_160._0_4_ = (undefined4)puVar20[3];
    uStack_160._4_4_ = (int)((ulonglong)puVar20[3] >> 0x20);
    pdb_140c2bb20(uVar39,*puVar20,&uStack_168,*(undefined1 *)(puVar20 + 4));
  }
  if (lStack_1b8 != 0) {
    pub_1406abac0(pbStack_1b0,lStack_1b8 * 0xc,4);
  }
  if (uStack_230 != 0) {
    uVar11 = uStack_230 * 8 + 0x17 & 0xfffffffffffffff0;
    uVar18 = uStack_230 + uVar11 + 0x11;
    if (uVar18 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_238 - uVar11),uVar18,0x10);
    }
  }
  if (lStack_1f0 == 0) {
    return;
  }
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_142198944;
  do {
    if (*plVar12 == 0) {
      *plVar12 = -1;
      plStack_120 = plVar12;
      pdb_140e95370(plVar12 + 1,uStack_1e8);
      *plStack_120 = *plStack_120 + 1;
      return;
    }
LAB_142198938:
    plVar12 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_142198944:
    uVar11 = 0;
    plVar12 = (longlong *)pdb_142e16b00(plVar12);
  } while (plVar12 != (longlong *)0x0);
LAB_142198957:
  uVar37 = 0x4328b3f8;
  uVar18 = pdb_142dc7890();
LAB_142198963:
  uStack_168 = (byte *)CONCAT44((int)uVar11,uVar37);
  uStack_160._0_4_ = (undefined4)uVar18;
  uStack_160._4_4_ = (int)(uVar18 >> 0x20);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14346b808,0x2b,&uStack_168,&UNK_14346b7e8,&UNK_14346b758);
LAB_1421979a0:
  if (uStack_1e0 != 0) {
    if ((short)uVar9 == 0) {
      do {
        auVar42 = *pauVar32;
        pauVar33 = pauVar33 + -0x2b0;
        pauVar32 = pauVar32 + 1;
        uVar9 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                        (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar9 == 0);
    }
    uVar26 = 0;
    for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar26 = uVar26 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9;
    puStack_100 = (undefined1 *)((ulonglong)uVar26 * -0x2b0);
    uStack_1e0 = uStack_1e0 - 1;
    puVar4 = *(undefined1 **)pauVar33[(ulonglong)uVar26 * -0x2b + -0x2b];
    puStack_180 = puVar4;
    if (puStack_130 != puVar4) {
      uStack_160 = pbVar13;
      if ((puVar4 < puStack_130) && (plStack_220 != (longlong *)0x0)) {
        uVar11 = pdb_14216e010(auStack_218,&puStack_180);
        bVar24 = (byte)(uVar11 >> 0x39);
        auVar42 = ZEXT216(CONCAT11(bVar24,bVar24));
        auVar42 = pshuflw(auVar42,auVar42,0);
        lVar10 = 0;
        while( true ) {
          uVar11 = uVar11 & uStack_230;
          auVar41 = *(undefined1 (*) [16])(*pauStack_238 + uVar11);
          auVar53[0] = -(auVar41[0] == auVar42[0]);
          auVar53[1] = -(auVar41[1] == auVar42[1]);
          auVar53[2] = -(auVar41[2] == auVar42[2]);
          auVar53[3] = -(auVar41[3] == auVar42[3]);
          auVar53[4] = -(auVar41[4] == auVar42[4]);
          auVar53[5] = -(auVar41[5] == auVar42[5]);
          auVar53[6] = -(auVar41[6] == auVar42[6]);
          auVar53[7] = -(auVar41[7] == auVar42[7]);
          auVar53[8] = -(auVar41[8] == auVar42[0]);
          auVar53[9] = -(auVar41[9] == auVar42[1]);
          auVar53[10] = -(auVar41[10] == auVar42[2]);
          auVar53[0xb] = -(auVar41[0xb] == auVar42[3]);
          auVar53[0xc] = -(auVar41[0xc] == auVar42[4]);
          auVar53[0xd] = -(auVar41[0xd] == auVar42[5]);
          auVar53[0xe] = -(auVar41[0xe] == auVar42[6]);
          auVar53[0xf] = -(auVar41[0xf] == auVar42[7]);
          uVar25 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar53[0xf] >> 7) << 0xf;
          uVar26 = (uint)uVar25;
          while (uVar25 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar26; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            pbVar13 = uStack_160;
            if (puVar4 == *(undefined1 **)
                           ((longlong)pauStack_238 + (uVar6 + uVar11 & uStack_230) * -8 + -8))
            goto LAB_1421979a0;
            uVar25 = (ushort)(uVar26 - 1) & (ushort)uVar26;
            uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar25);
          }
          auVar47[0] = -(auVar41[0] == unaff_XMM14_Ba);
          auVar47[1] = -(auVar41[1] == unaff_XMM14_Bb);
          auVar47[2] = -(auVar41[2] == unaff_XMM14_Bc);
          auVar47[3] = -(auVar41[3] == unaff_XMM14_Bd);
          auVar47[4] = -(auVar41[4] == unaff_XMM14_Be);
          auVar47[5] = -(auVar41[5] == unaff_XMM14_Bf);
          auVar47[6] = -(auVar41[6] == unaff_XMM14_Bg);
          auVar47[7] = -(auVar41[7] == unaff_XMM14_Bh);
          auVar47[8] = -(auVar41[8] == unaff_XMM14_Bi);
          auVar47[9] = -(auVar41[9] == unaff_XMM14_Bj);
          auVar47[10] = -(auVar41[10] == unaff_XMM14_Bk);
          auVar47[0xb] = -(auVar41[0xb] == unaff_XMM14_Bl);
          auVar47[0xc] = -(auVar41[0xc] == unaff_XMM14_Bm);
          auVar47[0xd] = -(auVar41[0xd] == unaff_XMM14_Bn);
          auVar47[0xe] = -(auVar41[0xe] == unaff_XMM14_Bo);
          auVar47[0xf] = -(auVar41[0xf] == unaff_XMM14_Bp);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
          uVar11 = uVar11 + lVar10 + 0x10;
          lVar10 = lVar10 + 0x10;
        }
      }
      puStack_108 = *pauVar33 + (longlong)puStack_100;
      uVar26 = *(uint *)(puStack_108 + -0x50);
      pbVar13 = uStack_160;
      if (uVar26 < 2) {
        if (*puStack_188 == uVar26) {
          if (uVar26 == 1) {
            if ((*(float *)(lStack_110 + -0x3c) ==
                 *(float *)(pauVar33[-4] + (longlong)(puStack_100 + 4))) &&
               (!NAN(*(float *)(lStack_110 + -0x3c)) &&
                !NAN(*(float *)(pauVar33[-4] + (longlong)(puStack_100 + 4))))) {
              if ((*(float *)(lStack_110 + -0x38) ==
                   *(float *)(pauVar33[-4] + (longlong)(puStack_100 + 8))) &&
                 (!NAN(*(float *)(lStack_110 + -0x38)) &&
                  !NAN(*(float *)(pauVar33[-4] + (longlong)(puStack_100 + 8))))) {
                if ((*(float *)(lStack_110 + -0x4c) ==
                     *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 4))) &&
                   (!NAN(*(float *)(lStack_110 + -0x4c)) &&
                    !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 4))))) {
                  if ((*(float *)(lStack_110 + -0x48) ==
                       *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 8))) &&
                     (!NAN(*(float *)(lStack_110 + -0x48)) &&
                      !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 8))))) {
                    if ((*(float *)(lStack_110 + -0x44) ==
                         *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 0xc))) &&
                       (!NAN(*(float *)(lStack_110 + -0x44)) &&
                        !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 0xc)))))
                    goto LAB_142197bcb;
                  }
                }
              }
            }
          }
          else if ((*(float *)(lStack_110 + -0x44) ==
                    *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 0xc))) &&
                  (!NAN(*(float *)(lStack_110 + -0x44)) &&
                   !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 0xc))))) {
            if ((*(float *)(lStack_110 + -0x4c) ==
                 *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 4))) &&
               (!NAN(*(float *)(lStack_110 + -0x4c)) &&
                !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 4))))) {
              if ((*(float *)(lStack_110 + -0x48) ==
                   *(float *)(pauVar33[-5] + (longlong)(puStack_100 + 8))) &&
                 (!NAN(*(float *)(lStack_110 + -0x48)) &&
                  !NAN(*(float *)(pauVar33[-5] + (longlong)(puStack_100 + 8))))) {
LAB_142197bcb:
                if ((*(float *)(lStack_110 + -0x40) ==
                     *(float *)(pauVar33[-4] + (longlong)puStack_100)) &&
                   (!NAN(*(float *)(lStack_110 + -0x40)) &&
                    !NAN(*(float *)(pauVar33[-4] + (longlong)puStack_100)))) goto LAB_1421979a0;
              }
            }
          }
        }
        uVar18 = pdb_140b54b40(puStack_190,puVar4);
        if ((uVar18 & 0xffffffff) == 0) {
          bStack_f2 = 0;
        }
        else {
          uVar11 = uVar18 & 0xffffffff ^ 0xffffffff;
          uVar37 = 1;
          if (*(ulonglong *)(uStack_118 + 0x10) <= uVar11) goto LAB_142198963;
          piVar23 = (int *)(uVar11 * 0x18 + *(longlong *)(uStack_118 + 8));
          uVar11 = uVar18 >> 0x20;
          if ((piVar23[4] != (int)(uVar18 >> 0x20)) || (*piVar23 == 0)) goto LAB_142198963;
          uVar11 = *(ulonglong *)(piVar23 + 2);
          uVar37 = 0;
          if ((*(ulonglong *)(uStack_128 + 0x38) <= (uVar11 & 0xffffffff)) ||
             ((*(ulonglong *)(*(longlong *)(uStack_128 + 0x28) + (uVar11 >> 6 & 0x3ffffff) * 8) >>
               (uVar11 & 0x3f) & 1) == 0)) goto LAB_142198963;
          bStack_f2 = pdb_140b77990((ulonglong)(uint)~piVar23[1] * 0x58 +
                                    *(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(uStack_118 + 0x1a0) + 0x18 +
                                       (uVar11 >> 0x20) * 0x48) + 0x10 +
                                     ~*(ulonglong *)
                                       (*(longlong *)
                                         (*(longlong *)(uStack_118 + 0x1a0) + 0x38 +
                                         (uVar11 >> 0x20) * 0x48) +
                                       *(longlong *)(uStack_128 + 0x110) * 8) * 0x30));
          bStack_f2 = bStack_f2 ^ 1;
        }
        puStack_100 = pauVar33[-0x2b] + (longlong)(puStack_100 + 8);
        uVar37 = *(undefined4 *)(puStack_108 + -0x24);
        fVar36 = (float)pdb_14092f8b0();
        fVar36 = fVar36 + (float)(int)(char)bStack_f2 * _DAT_143288b1c;
        uStack_1d0 = uVar37;
        fStack_1cc = fVar36;
        cVar8 = pdb_1419ba130(&uStack_1c8,&uStack_1d0);
        pbVar13 = uStack_160;
        if (cVar8 != '\0') {
          puStack_178 = (undefined1 *)
                        CONCAT71(puStack_178._1_7_,
                                 (float)((uint)(fVar35 - fVar36) & unaff_XMM7_Da) <= unaff_XMM6_Da);
          puStack_170 = (undefined1 *)CONCAT71(puStack_170._1_7_,bStack_f2 & bStack_f1);
          uVar39 = pdb_140930390(lStack_1c0);
          uVar11 = pdb_140b54b40(puStack_190,puStack_130);
          if ((((((uVar11 & 0xffffffff) == 0) ||
                (uVar18 = uVar11 & 0xffffffff ^ 0xffffffff,
                *(ulonglong *)(uStack_118 + 0x10) <= uVar18)) ||
               (piVar23 = (int *)(uVar18 * 0x18 + *(longlong *)(uStack_118 + 8)),
               piVar23[4] != (int)(uVar11 >> 0x20))) ||
              ((*piVar23 == 0 ||
               (uVar11 = *(ulonglong *)(piVar23 + 2),
               *(ulonglong *)(uStack_128 + 0x38) <= (uVar11 & 0xffffffff))))) ||
             ((*(ulonglong *)(*(longlong *)(uStack_128 + 0x28) + (uVar11 >> 6 & 0x3ffffff) * 8) >>
               (uVar11 & 0x3f) & 1) == 0)) {
LAB_142197e90:
            cVar8 = pdb_1408ff990(lStack_248);
            fVar36 = 0.0;
            if (cVar8 != '\0') {
LAB_142197ea5:
              fVar36 = _DAT_142e3b1d8;
            }
          }
          else {
            lVar10 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(uStack_118 + 0x1a0) + 0x18 + (uVar11 >> 0x20) * 0x48) + 0x10
                      + ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(uStack_118 + 0x1a0) + 0x38 + (uVar11 >> 0x20) * 0x48) +
                          *(longlong *)(uStack_128 + 0x110) * 8) * 0x30);
            cVar8 = (char)*(undefined4 *)(lVar10 + 0x40 + (ulonglong)(uint)~piVar23[1] * 0x58);
            if (cVar8 == '\x03') {
              cVar8 = '\0';
            }
            if (cVar8 == '\0') goto LAB_142197e90;
            fVar36 = 0.0;
            if ((cVar8 != '\x01') &&
               (*(char *)(lVar10 + (ulonglong)(uint)~piVar23[1] * 0x58 + 0x41) == '\x01'))
            goto LAB_142197ea5;
          }
          fVar55 = (float)uVar39 + unaff_XMM15_Da + _DAT_14346b5e0 + _DAT_142e37848;
          uVar40 = pdb_140930390(puStack_100);
          uVar11 = pdb_140b54b40(puStack_190,puStack_180);
          if (((((uVar11 & 0xffffffff) == 0) ||
               (uVar18 = uVar11 & 0xffffffff ^ 0xffffffff,
               *(ulonglong *)(uStack_118 + 0x10) <= uVar18)) ||
              (piVar23 = (int *)(uVar18 * 0x18 + *(longlong *)(uStack_118 + 8)),
              piVar23[4] != (int)(uVar11 >> 0x20))) ||
             (((*piVar23 == 0 ||
               (uVar11 = *(ulonglong *)(piVar23 + 2),
               *(ulonglong *)(uStack_128 + 0x38) <= (uVar11 & 0xffffffff))) ||
              ((*(ulonglong *)(*(longlong *)(uStack_128 + 0x28) + (uVar11 >> 6 & 0x3ffffff) * 8) >>
                (uVar11 & 0x3f) & 1) == 0)))) {
LAB_142197fd8:
            cVar8 = pdb_1408ff990(puStack_108 + -5);
            fVar54 = 0.0;
            if (cVar8 != '\0') {
LAB_142197ff0:
              fVar54 = _DAT_142e3b1d8;
            }
          }
          else {
            lVar10 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(uStack_118 + 0x1a0) + 0x18 + (uVar11 >> 0x20) * 0x48) + 0x10
                      + ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(uStack_118 + 0x1a0) + 0x38 + (uVar11 >> 0x20) * 0x48) +
                          *(longlong *)(uStack_128 + 0x110) * 8) * 0x30);
            cVar8 = (char)*(undefined4 *)(lVar10 + 0x40 + (ulonglong)(uint)~piVar23[1] * 0x58);
            if (cVar8 == '\x03') {
              cVar8 = '\0';
            }
            if (cVar8 == '\0') goto LAB_142197fd8;
            fVar54 = 0.0;
            if ((cVar8 != '\x01') &&
               (*(char *)(lVar10 + (ulonglong)(uint)~piVar23[1] * 0x58 + 0x41) == '\x01'))
            goto LAB_142197ff0;
          }
          fVar55 = fVar55 - fVar36;
          fVar54 = ((float)uVar40 + unaff_XMM15_Da + _DAT_14346b5e0 + _DAT_142e37848) - fVar54;
          uStack_1fc = 0x461c4000;
          uStack_204 = 0x461c4000;
          uStack_318 = uStack_250;
          lStack_310 = lStack_1c0;
          pbStack_308 = &bStack_f1;
          puStack_300 = puStack_100;
          pbStack_2f8 = &bStack_f2;
          puStack_2f0 = &uStack_1c8;
          puStack_2e8 = &uStack_1d0;
          lStack_2e0 = lStack_1d8;
          ppuStack_2d8 = &puStack_130;
          ppuStack_2d0 = &puStack_180;
          puStack_2c8 = puStack_198;
          uStack_2c0 = param_10;
          lStack_1a8 = 0;
          fStack_208 = fVar54;
          fStack_200 = fVar55;
          pdb_140a85120(&uStack_288,puStack_188);
          puStack_108 = puStack_108 + -0x50;
          pdb_140a85120(&uStack_168,puStack_108,_DAT_14300b140);
          bVar24 = (byte)puStack_178 & (byte)puStack_170;
          pdb_1410c7970(&uStack_288,&uStack_168,&uStack_318,bVar24,&lStack_1b8);
          pbVar13 = uStack_160;
          if (bVar24 != 0) {
            pdb_140a85120(&pbStack_354,puStack_108);
            uStack_158._0_4_ = uStack_344;
            uStack_158._4_4_ = (undefined4)uStack_340;
            uStack_150._0_4_ = (undefined4)((ulonglong)uStack_340 >> 0x20);
            uStack_168 = pbStack_354;
            uStack_160._0_4_ = uStack_34c;
            uStack_160._4_4_ = uStack_348;
            cVar8 = pdb_140a84e00(&uStack_168,puStack_188);
            pbVar13 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
            if (cVar8 == '\0') {
              pbVar14 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
              uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
              uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
              if (lStack_1a8 != 0) {
                uStack_160 = pbStack_1b0 + lStack_1a8 * 0xc;
                lVar28 = 0;
                lVar10 = 0;
                do {
                  if (*(int *)(pbStack_1b0 + lVar28) == 0) {
                    uStack_168 = pbStack_1b0;
                    lVar28 = lStack_1a8;
                    lStack_148 = lVar10;
                    bVar21 = false;
                    uStack_158 = pbStack_1b0;
                    pbVar14 = uStack_160;
                    uStack_150 = uStack_160;
                    if (lStack_1a8 != 0) goto LAB_1421984b7;
                    break;
                  }
                  lVar10 = lVar10 + 1;
                  lVar28 = lVar28 + 0xc;
                  pbVar14 = pbVar13;
                  uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
                  uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
                } while (lStack_1a8 * 0xc != lVar28);
              }
            }
            else {
              auVar41._0_8_ = pdb_140a85220(puStack_188);
              auVar41._8_8_ = extraout_XMM0_Qb_02;
              auVar48._4_4_ = (int)((ulonglong)uVar39 >> 0x20);
              auVar48._0_4_ = fVar55;
              auVar48._8_4_ = (int)extraout_XMM0_Qb_00;
              auVar48._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
              auVar49._4_12_ = auVar48._4_12_;
              auVar49._0_4_ = (fVar55 + _DAT_14300c7a0) * _DAT_142e36f50;
              auVar43._4_12_ = auVar41._4_12_;
              auVar43._0_4_ = (float)auVar41._0_8_ * _DAT_142e36f50;
              uVar37 = pdb_14007ee60(auVar43._0_8_);
              uVar38 = pdb_140a85220(puStack_188);
              puStack_178 = puStack_130;
              puStack_170 = puStack_180;
              lVar10 = param_7[2];
              if (lVar10 == *param_7) {
                pdb_142d7ede0(param_7);
              }
              fVar55 = _DAT_14300c7a0 - fVar55;
              lVar28 = param_7[1];
              *(undefined1 **)(lVar28 + lVar10 * 0x28) = puStack_178;
              *(undefined1 **)(lVar28 + 8 + lVar10 * 0x28) = puStack_170;
              *(undefined4 *)(lVar28 + 0x10 + lVar10 * 0x28) = uVar37;
              *(int *)(lVar28 + 0x14 + lVar10 * 0x28) = auVar49._0_4_;
              *(undefined4 *)(lVar28 + 0x18 + lVar10 * 0x28) = uVar38;
              *(float *)(lVar28 + 0x1c + lVar10 * 0x28) = fVar55;
              *(undefined1 *)(lVar28 + 0x20 + lVar10 * 0x28) = 1;
              param_7[2] = lVar10 + 1;
              pbVar14 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
              uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
              uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
            }
            goto LAB_1421982b8;
          }
        }
      }
    }
    goto LAB_1421979a0;
  }
  param_2 = puStack_190;
  puVar34 = puStack_198;
  if (plStack_120 == (longlong *)0x0) goto LAB_1421987c9;
  goto LAB_142197716;
  while( true ) {
    iVar15 = *(int *)pbVar13;
    lVar28 = lStack_140;
    if (iVar15 == 0) {
      uStack_328 = *(undefined8 *)(pbVar13 + 4);
      uStack_320 = 0;
    }
    else if (bVar21) {
      uStack_280 = *(undefined8 *)(pbVar13 + 4);
      uStack_288 = uStack_328;
      pdb_142198fd0(&uStack_2a0,lStack_1c0,&uStack_288,&fStack_200);
      lVar28 = lStack_140;
      if ((char)uStack_290 != '\x05') {
        puStack_170 = puStack_130;
        puStack_240 = puStack_180;
        puStack_178 = (undefined1 *)param_7[2];
        if (puStack_178 == (undefined1 *)*param_7) {
          pdb_142d7ede0(param_7);
        }
        lVar10 = param_7[1];
        *(undefined1 **)(lVar10 + (longlong)puStack_178 * 0x28) = puStack_170;
        *(undefined1 **)(lVar10 + 8 + (longlong)puStack_178 * 0x28) = puStack_240;
        puVar34 = (undefined8 *)(lVar10 + 0x10 + (longlong)puStack_178 * 0x28);
        *puVar34 = uStack_2a0;
        puVar34[1] = uStack_298;
        *(undefined4 *)(lVar10 + 0x20 + (longlong)puStack_178 * 0x28) = uStack_290;
        param_7[2] = (longlong)(puStack_178 + 1);
        lVar28 = lStack_140;
      }
    }
    lStack_140 = lVar28;
    bVar21 = iVar15 == 0;
    pbVar14 = uStack_160;
    if (lVar28 == 0) break;
LAB_1421984b7:
    lStack_140 = lVar28 + -1;
    if (lStack_148 == 0) {
      pbVar13 = uStack_158;
      if ((uStack_158 == uStack_150) &&
         (pbVar13 = uStack_168, pbVar14 = uStack_160, uStack_150 = uStack_160,
         uStack_168 == uStack_160)) break;
      uStack_158 = pbVar13 + 0xc;
    }
    else {
      lStack_148 = 0;
      pbVar13 = (byte *)pdb_1421995e0(&uStack_168);
      pbVar14 = uStack_160;
      uStack_150 = uStack_150;
      if (pbVar13 == (byte *)0x0) break;
    }
  }
LAB_1421982b8:
  uStack_160 = pbVar14;
  pdb_140a85120(&pbStack_370,puStack_188,_DAT_142e37ad4);
  uStack_158._0_4_ = auStack_360._0_4_;
  uStack_158._4_4_ = auStack_360._4_4_;
  uStack_150._0_4_ = auStack_360._8_4_;
  uStack_168 = pbStack_370;
  uStack_160._0_4_ = uStack_368;
  uStack_160._4_4_ = uStack_364;
  cVar8 = pdb_140a84e00(&uStack_168,puStack_108);
  pbVar14 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  if (cVar8 == '\0') {
    pbVar13 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
    uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
    if (lStack_1a8 != 0) {
      uStack_160 = pbStack_1b0 + lStack_1a8 * 0xc;
      lVar28 = 0;
      lVar10 = 0;
      do {
        if (*(int *)(pbStack_1b0 + lVar28) == 1) {
          uStack_168 = pbStack_1b0;
          lVar28 = lStack_1a8;
          lStack_148 = lVar10;
          bVar21 = false;
          uStack_158 = pbStack_1b0;
          pbVar13 = uStack_160;
          uStack_150 = uStack_160;
          if (lStack_1a8 != 0) goto LAB_142198639;
          break;
        }
        lVar10 = lVar10 + 1;
        lVar28 = lVar28 + 0xc;
        pbVar13 = pbVar14;
        uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
        uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      } while (lStack_1a8 * 0xc != lVar28);
    }
  }
  else {
    auVar44._0_8_ = pdb_140a85220(puStack_108);
    auVar44._8_8_ = extraout_XMM0_Qb_03;
    auVar50._4_4_ = (int)((ulonglong)uVar40 >> 0x20);
    auVar50._0_4_ = fVar54;
    auVar50._8_4_ = (int)extraout_XMM0_Qb_01;
    auVar50._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar51._4_12_ = auVar50._4_12_;
    auVar51._0_4_ = (fVar54 + _DAT_14300c7a0) * _DAT_142e36f50;
    auVar45._4_12_ = auVar44._4_12_;
    auVar45._0_4_ = (float)auVar44._0_8_ * _DAT_142e36f50;
    uVar37 = pdb_14007ee60(auVar45._0_8_);
    uVar38 = pdb_140a85220(puStack_108);
    puStack_100 = puStack_180;
    puStack_108 = puStack_130;
    lVar10 = param_7[2];
    if (lVar10 == *param_7) {
      pdb_142d7ede0(param_7);
    }
    fVar54 = _DAT_14300c7a0 - fVar54;
    lVar28 = param_7[1];
    *(undefined1 **)(lVar28 + lVar10 * 0x28) = puStack_100;
    *(undefined1 **)(lVar28 + 8 + lVar10 * 0x28) = puStack_108;
    *(undefined4 *)(lVar28 + 0x10 + lVar10 * 0x28) = uVar37;
    *(int *)(lVar28 + 0x14 + lVar10 * 0x28) = auVar51._0_4_;
    *(undefined4 *)(lVar28 + 0x18 + lVar10 * 0x28) = uVar38;
    *(float *)(lVar28 + 0x1c + lVar10 * 0x28) = fVar54;
    *(undefined1 *)(lVar28 + 0x20 + lVar10 * 0x28) = 1;
    param_7[2] = lVar10 + 1;
    pbVar13 = (byte *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    uStack_158 = (byte *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
    uStack_150 = (byte *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
  }
  goto LAB_1421979a0;
  while( true ) {
    iVar15 = *(int *)pbVar14;
    lVar28 = lStack_140;
    if (iVar15 == 1) {
      auStack_338._8_8_ = 0;
      auStack_338._0_8_ = *(ulonglong *)(pbVar14 + 4);
    }
    else if (bVar21) {
      uStack_280 = *(undefined8 *)(pbVar14 + 4);
      uStack_288 = auStack_338._0_8_;
      pdb_142198fd0(auStack_2b8,puStack_100,&uStack_288,&fStack_208);
      lVar28 = lStack_140;
      if ((char)uStack_2a8 != '\x05') {
        puStack_178 = puStack_180;
        puStack_170 = puStack_130;
        puStack_108 = (undefined1 *)param_7[2];
        if (puStack_108 == (undefined1 *)*param_7) {
          pdb_142d7ede0(param_7);
        }
        lVar10 = param_7[1];
        *(undefined1 **)(lVar10 + (longlong)puStack_108 * 0x28) = puStack_178;
        *(undefined1 **)(lVar10 + 8 + (longlong)puStack_108 * 0x28) = puStack_170;
        *(undefined1 (*) [16])(lVar10 + 0x10 + (longlong)puStack_108 * 0x28) = auStack_2b8;
        *(undefined4 *)(lVar10 + 0x20 + (longlong)puStack_108 * 0x28) = uStack_2a8;
        param_7[2] = (longlong)(puStack_108 + 1);
        lVar28 = lStack_140;
      }
    }
    lStack_140 = lVar28;
    bVar21 = iVar15 == 1;
    pbVar13 = uStack_160;
    if (lVar28 == 0) break;
LAB_142198639:
    lStack_140 = lVar28 + -1;
    if (lStack_148 == 0) {
      pbVar14 = uStack_158;
      if ((uStack_158 == uStack_150) &&
         (pbVar14 = uStack_168, pbVar13 = uStack_160, uStack_150 = uStack_160,
         uStack_168 == uStack_160)) break;
      uStack_158 = pbVar14 + 0xc;
    }
    else {
      lStack_148 = 0;
      pbVar14 = (byte *)pdb_1421995e0(&uStack_168);
      pbVar13 = uStack_160;
      if (pbVar14 == (byte *)0x0) break;
    }
  }
  goto LAB_1421979a0;
}

