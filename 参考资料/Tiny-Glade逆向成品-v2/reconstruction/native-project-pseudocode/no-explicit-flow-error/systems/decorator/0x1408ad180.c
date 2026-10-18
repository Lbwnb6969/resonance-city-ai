// VA 0x1408ad180, PDB extent 7814 bytes
// system_decorator::decorator_visual::playermade_stairs::create_structural_colliders_and_initial_graph::create_structural_colliders_and_initial_graph
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/create_structural_colliders_and_initial_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::create_structural_colliders_and_initial_graph::create_structural_colliders_and_initial_graph
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/create_structural_colliders_and_initial_graph.rs
   Extent: 7814 */

void pdb_1408ad180(uint *param_1,uint *param_2,uint *param_3,uint *param_4,longlong *param_5,
                  undefined8 *param_6)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  byte *pbVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined *puVar23;
  undefined *puVar24;
  uint uVar25;
  ushort uVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong lVar29;
  uint *unaff_R12;
  undefined8 *unaff_R13;
  byte *unaff_R14;
  bool bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  uint *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  longlong lStack_390;
  uint uStack_388;
  undefined1 auStack_384 [12];
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  uint *puStack_330;
  longlong lStack_328;
  longlong lStack_320;
  uint *puStack_318;
  undefined8 *puStack_310;
  longlong *plStack_308;
  longlong lStack_300;
  undefined8 uStack_2f8;
  uint *puStack_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  uint *puStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  uint *puStack_1b8;
  uint *puStack_1b0;
  ulonglong *puStack_1a8;
  uint *puStack_1a0;
  longlong *plStack_198;
  uint *puStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  longlong lStack_170;
  uint uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  longlong lStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint *puStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  ulonglong uStack_c8;
  uint *puStack_c0;
  undefined4 uStack_b4;
  uint *puStack_b0;
  uint *puStack_a8;
  uint uStack_9c;
  longlong *plStack_98;
  uint *puStack_90;
  undefined1 uStack_85;
  undefined1 uStack_84;
  char cStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar19 = param_2;
  cStack_83 = pdb_140e94b40();
  if (cStack_83 == '\0') goto LAB_1408ad35f;
  unaff_R12 = (uint *)0x93;
  lVar14 = pdb_1408af010(0x93);
  unaff_R14 = &UNK_143014ed0;
  if (lVar14 == 1) {
    if ((uint *)0x93 < puVar19) {
      pdb_142dc8070(&UNK_143014ed0,0x93,0,puVar19,&UNK_143014fe0);
LAB_1408ae968:
      pdb_142dc8070(&UNK_143014ed0,0x93);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar15 = pdb_1408af010(puVar19);
    if ((uVar15 & 1) != 0) {
      if ((undefined *)0x93 < (undefined *)((longlong)puVar19 + 2)) goto LAB_1408ae968;
      unaff_R12 = (uint *)(0x91 - (longlong)puVar19);
      unaff_R14 = (byte *)((longlong)puVar19 + 0x143014ed2);
    }
  }
  puVar23 = &UNK_143014d99;
  unaff_R13 = (undefined8 *)&UNK_143014d29;
  do {
    bVar31 = puVar23[-1];
    uVar12 = (uint)(char)bVar31;
    puStack_90 = param_4;
    if ((char)bVar31 < '\0') {
      bVar5 = puVar23[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar23[-3];
        if ((char)bVar6 < -0x40) {
          pbVar18 = puVar23 + -4;
          puVar23 = puVar23 + -4;
          uVar12 = bVar6 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          puVar23 = puVar23 + -3;
          uVar12 = bVar6 & 0xf;
        }
        uVar12 = bVar5 & 0x3f | uVar12 << 6;
      }
      else {
        puVar23 = puVar23 + -2;
        uVar12 = bVar5 & 0x1f;
      }
      uVar12 = (uint)(bVar31 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_1408ad2c4;
LAB_1408ad2d5:
      puVar24 = puVar23 + -0x143014d28;
      if ((undefined *)0x70 < puVar24) {
        pdb_142dc8070(&UNK_143014d29,0x70,puVar24,0x70,&UNK_143014fc0);
LAB_1408ae922:
        pdb_142dc8070(&UNK_143014d29,0x70);
LAB_1408ae946:
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      param_4 = (uint *)(0x70 - (longlong)puVar24);
      unaff_R13 = (undefined8 *)(puVar23 + 1);
      goto LAB_1408ad2f7;
    }
    puVar23 = puVar23 + -1;
    if (uVar12 == 0x5c) goto LAB_1408ad2d5;
LAB_1408ad2c4:
    if (uVar12 == 0x2f) goto LAB_1408ad2d5;
  } while (puVar23 != &UNK_143014d29);
  param_4 = (uint *)0x70;
LAB_1408ad2f7:
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_1408ae753;
LAB_1408ad306:
  if (*plVar16 != 0) goto LAB_1408ae747;
  *plVar16 = -1;
  plStack_98 = plVar16;
  uStack_188 = pdb_140e94f10(plVar16 + 1,unaff_R14,unaff_R12,unaff_R13,param_4,1,0);
  *plStack_98 = *plStack_98 + 1;
  param_4 = puStack_90;
LAB_1408ad35f:
  uVar11 = _DAT_142f6e3c0;
  lVar14 = *(longlong *)param_4;
  lStack_328 = lVar14 + 0x198;
  plStack_198 = (longlong *)*param_5;
  puStack_a8 = (uint *)CONCAT44(puStack_a8._4_4_,param_1[7]);
  lStack_e8 = *(longlong *)param_1;
  puStack_f8 = *(uint **)(param_1 + 4);
  puStack_108 = (uint *)CONCAT44(puStack_108._4_4_,param_2[7]);
  puStack_f0 = *(undefined4 **)(param_2 + 4);
  lStack_1c0 = *(longlong *)param_2 + 0x90;
  uStack_9c = param_3[7];
  plStack_98 = *(longlong **)param_3;
  puStack_100 = *(uint **)(param_3 + 4);
  uStack_138 = *param_6;
  iVar40 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  unaff_XMM8_Ba = (char)iVar40;
  unaff_XMM8_Bb = (char)((uint)iVar40 >> 8);
  unaff_XMM8_Bc = (char)((uint)iVar40 >> 0x10);
  unaff_XMM8_Bd = (char)((uint)iVar40 >> 0x18);
  iVar40 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  unaff_XMM8_Be = (char)iVar40;
  unaff_XMM8_Bf = (char)((uint)iVar40 >> 8);
  unaff_XMM8_Bg = (char)((uint)iVar40 >> 0x10);
  unaff_XMM8_Bh = (char)((uint)iVar40 >> 0x18);
  iVar40 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  unaff_XMM8_Bi = (char)iVar40;
  unaff_XMM8_Bj = (char)((uint)iVar40 >> 8);
  unaff_XMM8_Bk = (char)((uint)iVar40 >> 0x10);
  unaff_XMM8_Bl = (char)((uint)iVar40 >> 0x18);
  iVar40 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  unaff_XMM8_Bm = (char)iVar40;
  unaff_XMM8_Bn = (char)((uint)iVar40 >> 8);
  unaff_XMM8_Bo = (char)((uint)iVar40 >> 0x10);
  unaff_XMM8_Bp = (char)((uint)iVar40 >> 0x18);
  lStack_300 = (longlong)plStack_98 + 0x180;
  plStack_308 = plStack_198 + 4;
  puVar19 = *(uint **)(lVar14 + 8) + *(longlong *)(lVar14 + 0x10) * 0x54;
  param_2 = *(uint **)(lVar14 + 8);
  while (param_2 != puVar19) {
    param_2 = param_2 + 0x54;
    while (((char)param_2[-2] != '\x01' || (SBORROW8(0,*(longlong *)(param_2 + -0x2e))))) {
      bVar30 = param_2 == puVar19;
      param_2 = param_2 + 0x54;
      if (bVar30) goto LAB_1408adf33;
    }
    uStack_338 = *(ulonglong *)(param_2 + -0x3c);
    uStack_340 = *(ulonglong *)(param_2 + -0xe) >> 3;
    puStack_190 = puVar19;
    if (uStack_338 != uStack_340) {
      pdb_142dc7fb4(0,&uStack_338,&uStack_340,0);
      goto LAB_1408ae946;
    }
    puStack_b0 = param_2 + -10;
    lStack_320 = *(longlong *)(param_2 + -0x2c);
    puStack_e0 = *(uint **)(param_2 + -0x2a);
    puStack_c0 = param_2;
    if (plStack_198[3] == 0) {
      uStack_b4 = 0;
LAB_1408ad5ae:
      uVar15 = *(ulonglong *)(puStack_c0 + -4);
      if (uVar15 < 2) goto LAB_1408ad5dd;
LAB_1408ad5b8:
      puVar19 = *(uint **)(puStack_c0 + -8);
      uVar15 = *(ulonglong *)(puStack_c0 + -6);
    }
    else {
      uVar15 = pdb_1400af680(plStack_308);
      bVar31 = (byte)(uVar15 >> 0x39);
      auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
      auVar32 = pshuflw(auVar32,auVar32,0);
      lVar14 = 0;
      while( true ) {
        uVar15 = uVar15 & plStack_198[1];
        pcVar1 = (char *)(*plStack_198 + uVar15);
        auVar38[0] = -(*pcVar1 == auVar32[0]);
        auVar38[1] = -(pcVar1[1] == auVar32[1]);
        auVar38[2] = -(pcVar1[2] == auVar32[2]);
        auVar38[3] = -(pcVar1[3] == auVar32[3]);
        auVar38[4] = -(pcVar1[4] == auVar32[4]);
        auVar38[5] = -(pcVar1[5] == auVar32[5]);
        auVar38[6] = -(pcVar1[6] == auVar32[6]);
        auVar38[7] = -(pcVar1[7] == auVar32[7]);
        auVar38[8] = -(pcVar1[8] == auVar32[0]);
        auVar38[9] = -(pcVar1[9] == auVar32[1]);
        auVar38[10] = -(pcVar1[10] == auVar32[2]);
        auVar38[0xb] = -(pcVar1[0xb] == auVar32[3]);
        auVar38[0xc] = -(pcVar1[0xc] == auVar32[4]);
        auVar38[0xd] = -(pcVar1[0xd] == auVar32[5]);
        auVar38[0xe] = -(pcVar1[0xe] == auVar32[6]);
        auVar38[0xf] = -(pcVar1[0xf] == auVar32[7]);
        uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
        ;
        uVar12 = (uint)uVar26;
        while (uVar26 != 0) {
          uVar22 = 0;
          for (uVar13 = uVar12; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar22 = uVar22 + 1;
          }
          uVar27 = uVar22 + uVar15 & plStack_198[1];
          lVar29 = *plStack_198 + uVar27 * -8;
          uVar17 = *(undefined8 *)(lVar29 + -8);
          auVar39._0_4_ = -(uint)((int)uVar17 == (int)*(longlong *)puStack_b0);
          iVar40 = -(uint)((int)((ulonglong)uVar17 >> 0x20) ==
                          (int)((ulonglong)*(longlong *)puStack_b0 >> 0x20));
          auVar39._4_4_ = auVar39._0_4_;
          auVar39._8_4_ = iVar40;
          auVar39._12_4_ = iVar40;
          iVar40 = movmskpd((int)uVar27 * 8,auVar39);
          uStack_b4 = (undefined4)CONCAT71((int7)((ulonglong)lVar29 >> 8),1);
          if (iVar40 == 3) goto LAB_1408ad5ae;
          uVar26 = (ushort)(uVar12 - 1) & (ushort)uVar12;
          uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar26);
        }
        auVar35[0] = -(*pcVar1 == unaff_XMM8_Ba);
        auVar35[1] = -(pcVar1[1] == unaff_XMM8_Bb);
        auVar35[2] = -(pcVar1[2] == unaff_XMM8_Bc);
        auVar35[3] = -(pcVar1[3] == unaff_XMM8_Bd);
        auVar35[4] = -(pcVar1[4] == unaff_XMM8_Be);
        auVar35[5] = -(pcVar1[5] == unaff_XMM8_Bf);
        auVar35[6] = -(pcVar1[6] == unaff_XMM8_Bg);
        auVar35[7] = -(pcVar1[7] == unaff_XMM8_Bh);
        auVar35[8] = -(pcVar1[8] == unaff_XMM8_Bi);
        auVar35[9] = -(pcVar1[9] == unaff_XMM8_Bj);
        auVar35[10] = -(pcVar1[10] == unaff_XMM8_Bk);
        auVar35[0xb] = -(pcVar1[0xb] == unaff_XMM8_Bl);
        auVar35[0xc] = -(pcVar1[0xc] == unaff_XMM8_Bm);
        auVar35[0xd] = -(pcVar1[0xd] == unaff_XMM8_Bn);
        auVar35[0xe] = -(pcVar1[0xe] == unaff_XMM8_Bo);
        auVar35[0xf] = -(pcVar1[0xf] == unaff_XMM8_Bp);
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        uVar15 = uVar15 + lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      }
      uStack_b4 = 0;
      uVar15 = *(ulonglong *)(puStack_c0 + -4);
      if (1 < uVar15) goto LAB_1408ad5b8;
LAB_1408ad5dd:
      puVar19 = puStack_c0 + -8;
    }
    puStack_318 = puStack_c0 + -0x20;
    puStack_330 = puVar19 + uVar15;
    puVar28 = (uint *)0x0;
    param_2 = puStack_c0;
    if (puVar19 != puStack_330) {
LAB_1408ad600:
      do {
        uVar15 = (ulonglong)*(ushort *)((longlong)puVar19 + 2);
        puVar2 = (uint *)((longlong)puVar28 + uVar15);
        puVar20 = puVar2;
        if (puStack_e0 <= puVar2) {
LAB_1408ae6b7:
          pdb_142dc8420(puVar28,puVar20,puStack_e0,&UNK_143014df0);
          goto LAB_1408ae946;
        }
        puVar20 = (uint *)((longlong)puVar2 + 1);
        param_3 = (uint *)((longlong)puVar20 - (longlong)puVar28);
        if (puVar20 < puVar28) goto LAB_1408ae6b7;
        if (*(uint **)(param_2 + -0x36) <= puVar2) {
          pdb_142dc8420(puVar28,puVar2,*(uint **)(param_2 + -0x36),&UNK_143014e08);
          goto LAB_1408ae946;
        }
        if (*(uint **)(param_2 + -0x3c) <= puVar2) {
          pdb_142dc8420(puVar28,puVar2,*(uint **)(param_2 + -0x3c),&UNK_143014e20);
          goto LAB_1408ae946;
        }
        uStack_c8 = CONCAT62(uStack_c8._2_6_,*(ushort *)((longlong)puVar19 + 2));
        unaff_R14 = (byte *)((longlong)puVar28 * 8 + *(longlong *)(param_2 + -0x38));
        puVar21 = (undefined8 *)((longlong)puVar28 * 4 + *(longlong *)(param_2 + -0x3e));
        uStack_2e8 = 0;
        uStack_128 = (uint *)(*(ulonglong *)(param_2 + -0xe) >> 3);
        uStack_2f8 = puVar28;
        puStack_2f0 = puVar2;
        if (((puVar2 < puVar28) || (uStack_128 <= puVar28)) || (uStack_128 <= puVar2)) {
          uStack_278 = (uint *)&uStack_2f8;
          pcStack_270 = pdb_1414ed7e0;
          puStack_268 = (uint *)&uStack_128;
          pcStack_260 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143014c28,&uStack_278,&UNK_143014ca0);
        }
        puStack_d0 = puVar19 + 1;
        puVar3 = (undefined8 *)(lStack_320 + (longlong)puVar28 * 0xc);
        puVar23 = (undefined *)
                  ((ulonglong)((uint)*(ulonglong *)(param_2 + -0xe) & 7) +
                   (ulonglong)((uint)*(ulonglong *)(param_2 + -0x10) & 7) * 8 + (longlong)puVar28);
        puVar4 = (ulonglong *)
                 ((*(ulonglong *)(param_2 + -0x10) & 0xfffffffffffffff8) +
                 ((ulonglong)puVar23 >> 6) * 8);
        unaff_R13 = (undefined8 *)
                    ((ulonglong)((uint)((ulonglong)puVar23 >> 3) & 7) | (ulonglong)puVar4);
        puVar20 = (uint *)(ulonglong)((uint)puVar23 & 7);
        puStack_130 = puVar20 + uVar15 * 2 + 2;
        puStack_d8 = puVar2;
        puStack_90 = puVar28;
        if ((char)*puVar19 != '\x03') {
          puStack_1b0 = (uint *)(uVar15 * 8 + 8 >> 3);
          unaff_R13 = (undefined8 *)(ulonglong)((uint)unaff_R13 & 7);
          puStack_1a0 = puVar20 + (longlong)unaff_R13 * 2;
          param_4 = (uint *)0x0;
          bVar30 = false;
          puStack_310 = puVar3;
          puStack_1a8 = puVar4;
          if (param_3 != (uint *)0x0) {
            do {
              puVar19 = (uint *)((longlong)param_4 + 1);
              puVar28 = param_4;
              puVar2 = puStack_1b8;
              if (!bVar30) {
                if (param_3 <= puVar19) break;
                puVar28 = puVar19;
                puVar19 = (uint *)((longlong)param_4 + 2);
                puVar2 = param_4;
              }
              param_4 = puVar19;
              if (param_3 <= puVar2) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(puVar2,param_3,&UNK_143014e58);
              }
              uStack_140 = *(undefined4 *)((longlong)puStack_310 + (longlong)puVar2 * 0xc + 8);
              lStack_148 = *(longlong *)((longlong)puStack_310 + (longlong)puVar2 * 0xc);
              uStack_1e0 = *(undefined4 *)((longlong)puStack_310 + (longlong)puVar28 * 0xc + 8);
              uStack_1e8 = *(undefined8 *)((longlong)puStack_310 + (longlong)puVar28 * 0xc);
              pbVar18 = unaff_R14 + (longlong)puVar28 * 8;
              lVar14 = (longlong)puVar21 + (longlong)puVar2 * 4;
              lVar29 = (longlong)puVar21 + (longlong)puVar28 * 4;
              uVar15 = (ulonglong)*(uint *)(unaff_R14 + (longlong)puVar2 * 8 + 4);
              puStack_1b8 = puVar28;
              uVar17 = pdb_1408acd90(&uStack_2f8,&lStack_148,&uStack_1e8);
              uStack_c8 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
              if ((char)uStack_b4 != '\0') {
                if (puStack_1b0 <= puVar2) {
                  uStack_81 = 1;
                  uStack_278 = puVar2;
                  pdb_142d8dd10(&uStack_278,puStack_130);
                  goto LAB_1408ae946;
                }
                if ((puStack_1a8[(ulonglong)((longlong)puStack_1a0 + (longlong)puVar2) >> 6] >>
                     ((ulonglong)((longlong)puStack_1a0 + (longlong)puVar2) & 0x3f) & 1) == 0) {
                  uStack_278 = puStack_1b8;
                  if (puStack_1b0 <= puStack_1b8) {
                    uStack_81 = 1;
                    pdb_142d8dd10(&uStack_278,puStack_130);
                    goto LAB_1408ae946;
                  }
                  uStack_c8 = puStack_1a8
                              [(ulonglong)((longlong)puStack_1a0 + (longlong)puStack_1b8) >> 6] >>
                              ((byte)(undefined *)((longlong)puStack_1a0 + (longlong)puStack_1b8) &
                              0x3f);
                }
              }
              uStack_1f8 = uStack_288;
              uStack_1f0 = uStack_280;
              uStack_208 = uStack_298;
              uStack_200 = uStack_290;
              uStack_218 = uStack_2a8;
              uStack_210 = uStack_2a0;
              uStack_228 = uStack_2b8;
              uStack_220 = uStack_2b0;
              uStack_258 = CONCAT71(uStack_2e7,uStack_2e8);
              uStack_238 = uStack_2c8;
              uStack_230 = uStack_2c0;
              uStack_248 = uStack_2d8;
              uStack_240 = uStack_2d0;
              uStack_250 = uStack_2e0;
              puStack_268 = uStack_2f8;
              pcStack_260 = (code *)puStack_2f0;
              uStack_278 = (uint *)0x1;
              pcStack_270 = (code *)0x1;
              pdb_14007ee60(uStack_2f8,uStack_258,uStack_2d8,uStack_2c8,uVar15,pbVar18,lVar14,lVar29
                           );
              pbVar18 = pub_1406abab0(0x90,0x10);
              if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(0x10,0x90);
              }
              uVar12 = (int)puVar2 + (uint)puStack_90;
              puVar20 = (uint *)(ulonglong)uVar12;
              pub_142e32760(pbVar18,&uStack_278,0x90);
              pcStack_270 = *(code **)puStack_b0;
              uStack_278 = (uint *)CONCAT44(uVar12,(undefined4)uStack_278);
              uStack_278 = (uint *)CONCAT71(uStack_278._1_7_,'\x10' - ((byte)uStack_c8 & 1));
              uStack_81 = 0;
              pdb_1409ed410(&puStack_3c0,pbVar18,&uStack_278);
              unaff_R13 = &uStack_160;
              *puStack_f8 = (uint)puStack_a8;
              *puStack_f0 = puStack_108._0_4_;
              lStack_170 = *(longlong *)puStack_b0;
              uStack_118 = uStack_3b0;
              uStack_110 = uStack_3a8;
              uStack_128 = puStack_3c0;
              uStack_120 = uStack_3b8;
              uStack_160 = uVar11;
              uStack_158 = 0;
              uStack_85 = 1;
              uStack_168 = uVar12;
              pdb_140de80d0(&uStack_278,unaff_R13);
              uStack_388 = uStack_168;
              lStack_390 = lStack_170;
              uStack_85 = 0;
              pdb_1414e5340(unaff_R13,lStack_e8,lStack_1c0,&lStack_390,&uStack_128,&uStack_278);
              uStack_350 = uStack_160;
              uStack_348 = uStack_158;
              *puStack_100 = uStack_9c;
              uStack_81 = 0;
              pdb_140c460b0(plStack_98,&lStack_170,&uStack_350);
              bVar30 = true;
              param_2 = puStack_c0;
            } while (param_4 < param_3);
          }
          puVar19 = puStack_d0;
          puVar28 = puStack_d8;
          unaff_R12 = puVar20;
          if (puStack_d0 == puStack_330) break;
          goto LAB_1408ad600;
        }
        puStack_358 = param_3;
        if (param_3 != (uint *)0x2) {
          pdb_142dc7fb4(0,&puStack_358,&UNK_143014e38,0);
          goto LAB_1408ae946;
        }
        uStack_360 = *(undefined4 *)(puVar3 + 1);
        uStack_368 = *puVar3;
        uStack_378 = *(undefined8 *)((longlong)puVar3 + 0xc);
        uStack_370 = *(undefined4 *)((longlong)puVar3 + 0x14);
        pdb_1408a7b10(&lStack_390,puStack_318,&uStack_368,&uStack_378,uStack_138,lStack_328,
                      param_2[-10],param_2[-9]);
        uStack_1e8 = *(undefined8 *)unaff_R14;
        uStack_1e0 = *(undefined4 *)(unaff_R14 + 8);
        uStack_1dc = *(undefined4 *)(unaff_R14 + 0xc);
        uStack_1c8 = *puVar21;
        pdb_1408acd90(&uStack_2f8,&lStack_390,auStack_384);
        unaff_R12 = puStack_90;
        param_3 = puStack_b0;
        bVar31 = 1;
        if ((char)uStack_b4 != '\0') {
          unaff_R13 = (undefined8 *)(ulonglong)((uint)unaff_R13 & 7);
          if ((*puVar4 >> (longlong)(puVar20 + (longlong)unaff_R13 * 2) & 1) == 0) {
            uStack_278 = (uint *)0x1;
            if ((short)uStack_c8 == 0) {
              uStack_82 = 1;
              pdb_142d8dd10(&uStack_278,puStack_130);
              goto LAB_1408ae946;
            }
            puVar23 = (undefined *)((longlong)(puVar20 + (longlong)unaff_R13 * 2) + 1);
            bVar31 = (byte)(puVar4[(ulonglong)puVar23 >> 6] >> ((byte)puVar23 & 0x3f));
          }
        }
        param_4 = (uint *)&uStack_160;
        uStack_1f8 = uStack_288;
        uStack_1f0 = uStack_280;
        uStack_208 = uStack_298;
        uStack_200 = uStack_290;
        uStack_218 = uStack_2a8;
        uStack_210 = uStack_2a0;
        uStack_228 = uStack_2b8;
        uStack_220 = uStack_2b0;
        uStack_258 = CONCAT71(uStack_2e7,uStack_2e8);
        uStack_238 = uStack_2c8;
        uStack_230 = uStack_2c0;
        uStack_248 = uStack_2d8;
        uStack_240 = uStack_2d0;
        uStack_250 = uStack_2e0;
        puStack_268 = uStack_2f8;
        pcStack_260 = (code *)puStack_2f0;
        uStack_278 = (uint *)0x1;
        pcStack_270 = (code *)0x1;
        pdb_14007ee60();
        unaff_R14 = pub_1406abab0(0x90,0x10);
        if (unaff_R14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x90);
        }
        pub_142e32760(unaff_R14,&uStack_278,0x90);
        pcStack_270 = *(code **)param_3;
        uStack_278 = (uint *)CONCAT44((int)unaff_R12,(undefined4)uStack_278);
        uStack_278 = (uint *)CONCAT71(uStack_278._1_7_,'\x10' - (bVar31 & 1));
        uStack_82 = 0;
        pdb_1409ed410(&puStack_3c0,unaff_R14,&uStack_278);
        *puStack_f8 = (uint)puStack_a8;
        *puStack_f0 = puStack_108._0_4_;
        lStack_180 = *(longlong *)param_3;
        uStack_118 = uStack_3b0;
        uStack_110 = uStack_3a8;
        uStack_128 = puStack_3c0;
        uStack_120 = uStack_3b8;
        uStack_160 = uVar11;
        uStack_158 = 0;
        uStack_84 = 1;
        uStack_178 = (int)unaff_R12;
        pdb_140de80d0(&uStack_278,param_4);
        uStack_140 = uStack_178;
        lStack_148 = lStack_180;
        uStack_84 = 0;
        pdb_1414e5340(param_4,lStack_e8,lStack_1c0,&lStack_148,&uStack_128,&uStack_278);
        uStack_3a0 = uStack_160;
        uStack_398 = uStack_158;
        *puStack_100 = uStack_9c;
        uStack_82 = 0;
        pdb_140c460b0(plStack_98,&lStack_180,&uStack_3a0);
        puVar19 = puStack_d0;
        puVar28 = puStack_d8;
        param_2 = puStack_c0;
      } while (puStack_d0 != puStack_330);
    }
    puVar28 = (uint *)((longlong)puStack_e0 + ((ulonglong)(puStack_e0 == (uint *)0x0) - 1));
    uVar12 = (uint)puVar28;
    puVar19 = puStack_190;
    if (uVar12 != 0) {
      *puStack_100 = uStack_9c;
      puVar20 = param_2 + -10;
      unaff_R14 = (byte *)(ulonglong)*puVar20;
      puVar2 = *(uint **)puVar20;
      puVar20 = *(uint **)puVar20;
      pdb_1414b63a0(lStack_300,unaff_R14,param_2[-9]);
      uVar22 = 0;
      while (puVar19 = puStack_190, param_2 = puStack_c0, param_4 = puVar28, uVar22 < uVar12) {
        *puStack_100 = uStack_9c;
        puStack_2f0 = (uint *)CONCAT44(puStack_2f0._4_4_,uVar22);
        uVar22 = uVar22 + 1;
        pcStack_270 = (code *)CONCAT44(pcStack_270._4_4_,uVar22);
        uStack_2f8 = puVar20;
        uStack_278 = puVar2;
        pdb_140c46480(plStack_98,&uStack_2f8,&uStack_278);
      }
    }
  }
LAB_1408adf33:
  uVar12 = pdb_140e94b40();
  param_1 = (uint *)(ulonglong)uVar12;
  if ((char)uVar12 == '\0') goto LAB_1408ae070;
  puVar23 = &UNK_143014d99;
  param_4 = (uint *)&UNK_143014d29;
  do {
    bVar31 = puVar23[-1];
    uVar12 = (uint)(char)bVar31;
    if ((char)bVar31 < '\0') {
      bVar5 = puVar23[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar23[-3];
        if ((char)bVar6 < -0x40) {
          pbVar18 = puVar23 + -4;
          puVar23 = puVar23 + -4;
          uVar12 = bVar6 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          puVar23 = puVar23 + -3;
          uVar12 = bVar6 & 0xf;
        }
        uVar12 = bVar5 & 0x3f | uVar12 << 6;
      }
      else {
        puVar23 = puVar23 + -2;
        uVar12 = bVar5 & 0x1f;
      }
      uVar12 = (uint)(bVar31 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_1408adfd4;
LAB_1408adfe5:
      if ((undefined *)0x70 < puVar23 + -0x143014d28) goto LAB_1408ae922;
      param_2 = (uint *)(0x70 - (longlong)(puVar23 + -0x143014d28));
      param_4 = (uint *)(puVar23 + 1);
      goto LAB_1408ae007;
    }
    puVar23 = puVar23 + -1;
    if (uVar12 == 0x5c) goto LAB_1408adfe5;
LAB_1408adfd4:
    if (uVar12 == 0x2f) goto LAB_1408adfe5;
  } while (puVar23 != &UNK_143014d29);
  param_2 = (uint *)0x70;
LAB_1408ae007:
  puVar19 = (uint *)pdb_140e97000();
  if ((char)puVar19[0x1a] != '\x01') goto LAB_1408ae773;
  do {
    if (*(longlong *)puVar19 != 0) {
      pdb_142dc8090(&UNK_14330e608);
      goto LAB_1408ae946;
    }
    puVar19[0] = 0xffffffff;
    puVar19[1] = 0xffffffff;
    puStack_90 = puVar19;
    lStack_e8 = pdb_140e94f10(puVar19 + 2,&UNK_143014d99,0xd,param_4,param_2,1,0);
    *(longlong *)puStack_90 = *(longlong *)puStack_90 + 1;
LAB_1408ae070:
    puStack_f0 = (undefined4 *)CONCAT71(puStack_f0._1_7_,(char)param_1);
    uStack_278 = (uint *)0x0;
    pcStack_270 = (code *)0x4;
    puStack_268 = (uint *)0x0;
    lVar14 = pdb_140a61160(uStack_138);
    puStack_108 = *(uint **)(lVar14 + 8) + *(longlong *)(lVar14 + 0x10) * 10;
    puStack_d8 = (uint *)((longlong)plStack_98 + 0x1a0);
    puStack_a8 = (uint *)0x4;
    puVar19 = *(uint **)(lVar14 + 8);
    while (puVar19 != puStack_108) {
      puStack_90 = (uint *)CONCAT44(puStack_90._4_4_,puVar19[8]);
      puStack_268 = (uint *)0x0;
      lVar14 = pdb_140a61160(uStack_138);
      uStack_2f8 = (uint *)CONCAT44(uStack_2f8._4_4_,(uint)puStack_90);
      param_1 = *(uint **)(lVar14 + 0x10);
      if (param_1 == (uint *)0x0) {
LAB_1408ae240:
        param_4 = (uint *)0x0;
      }
      else {
        if (param_1 != (uint *)0x1) {
          puVar28 = (uint *)pdb_1400aede0(lVar14 + 0x38,&uStack_2f8);
          uVar15 = pdb_1414af660(lVar14,puVar28,&uStack_2f8);
          if ((uVar15 & 1) != 0) {
            if (param_1 <= puVar28) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(puVar28,param_1,&UNK_143311df8);
            }
            lVar14 = *(longlong *)(lVar14 + 8);
            if (lVar14 != 0) goto LAB_1408ae1a5;
          }
          goto LAB_1408ae240;
        }
        lVar14 = *(longlong *)(lVar14 + 8);
        if ((uint)puStack_90 != *(int *)(lVar14 + 0x20)) goto LAB_1408ae240;
        puVar28 = (uint *)0x0;
LAB_1408ae1a5:
        lVar29 = *(longlong *)(lVar14 + 0x10 + (longlong)puVar28 * 0x28);
        if (lVar29 == 0) goto LAB_1408ae240;
        param_2 = *(uint **)(lVar14 + 8 + (longlong)puVar28 * 0x28);
        param_1 = param_2 + lVar29 * 2;
        param_4 = (uint *)0x0;
        do {
          uVar12 = *param_2;
          unaff_R14 = (byte *)(ulonglong)uVar12;
          param_2 = param_2 + 2;
          if (param_4 == uStack_278) {
            pdb_142d7f1b0(&uStack_278,param_4,
                          ((ulonglong)((longlong)param_1 - (longlong)param_2) >> 3) + 1,4,4);
            puStack_a8 = (uint *)pcStack_270;
          }
          puStack_a8[(longlong)param_4] = uVar12;
          param_4 = (uint *)((longlong)param_4 + 1);
          puStack_268 = param_4;
        } while (param_2 != param_1);
        puStack_a8 = (uint *)pcStack_270;
      }
      puStack_f8 = puVar19 + 10;
      puStack_b0 = puStack_a8 + (longlong)param_4;
      puStack_d0 = (uint *)0x0;
      puVar28 = puStack_a8;
      param_3 = puVar19;
LAB_1408ae27e:
      puVar19 = puStack_f8;
      if (puVar28 != puStack_b0) {
        puVar19 = (uint *)((longlong)puStack_d0 + 1);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,*puVar28);
        puStack_c0 = puVar28 + 1;
        param_2 = puStack_a8;
        puStack_d0 = puVar19;
LAB_1408ae350:
        puVar28 = puStack_c0;
        if (puVar19 == (uint *)0x0) {
          if (param_2 == puStack_b0) goto LAB_1408ae27e;
        }
        else {
          uVar15 = (longlong)puStack_b0 - (longlong)param_2;
          param_2 = param_2 + (longlong)puVar19;
          if ((uint *)(uVar15 >> 2) <= puVar19) goto LAB_1408ae27e;
        }
        uVar12 = *param_2;
        uVar22 = (uint)uStack_c8;
        uVar13 = pdb_140a61520((ulonglong)puStack_90 & 0xffffffff);
        unaff_R12 = (uint *)(ulonglong)uVar13;
        param_1 = (uint *)(ulonglong)uVar22;
        uVar15 = (ulonglong)uVar12;
        uStack_1d0 = uVar13;
        uStack_1cc = uVar22;
        uVar12 = pdb_140a61520((ulonglong)puStack_90 & 0xffffffff);
        unaff_R14 = (byte *)(ulonglong)uVar12;
        iVar40 = (int)uVar15;
        param_4 = (uint *)(uVar15 & 0xffffffff);
        param_2 = param_2 + 1;
        param_3 = (uint *)0x0;
        unaff_R13 = (undefined8 *)0x0;
        uStack_1d8 = uVar12;
        iStack_1d4 = iVar40;
        if (uVar13 == (uint)puStack_90) {
LAB_1408ae3c6:
          if (uVar12 == (uint)puStack_90) {
LAB_1408ae517:
            *puStack_100 = uStack_9c;
            uStack_128 = (uint *)CONCAT44(uVar22,uVar13);
            uStack_120 = CONCAT44(uStack_120._4_4_,(int)unaff_R13);
            uStack_2f8 = (uint *)CONCAT44(iVar40,uVar12);
            puStack_2f0 = (uint *)CONCAT44(puStack_2f0._4_4_,(int)param_3);
            pdb_140c46480(plStack_98,&uStack_128,&uStack_2f8,0);
            puVar19 = (uint *)0x0;
          }
          else {
            puVar19 = (uint *)0x0;
            if (*(longlong *)((longlong)plStack_98 + 0x198) != 0) {
              uVar15 = pdb_1400af680(puStack_d8,&uStack_1d8);
              lVar14 = *(longlong *)((longlong)plStack_98 + 0x180);
              bVar31 = (byte)(uVar15 >> 0x39);
              auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
              auVar32 = pshuflw(auVar32,auVar32,0);
              lVar29 = 0;
              while( true ) {
                uVar15 = uVar15 & *(ulonglong *)((longlong)plStack_98 + 0x188);
                auVar38 = *(undefined1 (*) [16])(lVar14 + uVar15);
                auVar37[0] = -(auVar38[0] == auVar32[0]);
                auVar37[1] = -(auVar38[1] == auVar32[1]);
                auVar37[2] = -(auVar38[2] == auVar32[2]);
                auVar37[3] = -(auVar38[3] == auVar32[3]);
                auVar37[4] = -(auVar38[4] == auVar32[4]);
                auVar37[5] = -(auVar38[5] == auVar32[5]);
                auVar37[6] = -(auVar38[6] == auVar32[6]);
                auVar37[7] = -(auVar38[7] == auVar32[7]);
                auVar37[8] = -(auVar38[8] == auVar32[0]);
                auVar37[9] = -(auVar38[9] == auVar32[1]);
                auVar37[10] = -(auVar38[10] == auVar32[2]);
                auVar37[0xb] = -(auVar38[0xb] == auVar32[3]);
                auVar37[0xc] = -(auVar38[0xc] == auVar32[4]);
                auVar37[0xd] = -(auVar38[0xd] == auVar32[5]);
                auVar37[0xe] = -(auVar38[0xe] == auVar32[6]);
                auVar37[0xf] = -(auVar38[0xf] == auVar32[7]);
                uVar26 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
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
                uVar25 = (uint)uVar26;
                while (uVar26 != 0) {
                  uVar9 = 0;
                  for (uVar10 = uVar25; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar27 = uVar9 + uVar15 & *(ulonglong *)((longlong)plStack_98 + 0x188);
                  if ((uVar12 == *(uint *)(lVar14 + -0xc + uVar27 * -0xc)) &&
                     (iVar40 == *(int *)(lVar14 + -8 + uVar27 * -0xc))) {
                    iVar7 = *(int *)(lVar14 + uVar27 * -0xc + -4);
                    param_3 = (uint *)(ulonglong)(iVar7 - 1);
                    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_143014dc0);
                    }
                    goto LAB_1408ae517;
                  }
                  uVar26 = (ushort)(uVar25 - 1) & (ushort)uVar25;
                  uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar26);
                }
                auVar34[0] = -(auVar38[0] == -1);
                auVar34[1] = -(auVar38[1] == -1);
                auVar34[2] = -(auVar38[2] == -1);
                auVar34[3] = -(auVar38[3] == -1);
                auVar34[4] = -(auVar38[4] == -1);
                auVar34[5] = -(auVar38[5] == -1);
                auVar34[6] = -(auVar38[6] == -1);
                auVar34[7] = -(auVar38[7] == -1);
                auVar34[8] = -(auVar38[8] == -1);
                auVar34[9] = -(auVar38[9] == -1);
                auVar34[10] = -(auVar38[10] == -1);
                auVar34[0xb] = -(auVar38[0xb] == -1);
                auVar34[0xc] = -(auVar38[0xc] == -1);
                auVar34[0xd] = -(auVar38[0xd] == -1);
                auVar34[0xe] = -(auVar38[0xe] == -1);
                auVar34[0xf] = -(auVar38[0xf] == -1);
                if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
                uVar15 = uVar15 + lVar29 + 0x10;
                lVar29 = lVar29 + 0x10;
              }
              puVar19 = (uint *)0x0;
            }
          }
        }
        else {
          puVar19 = (uint *)0x0;
          if (*(longlong *)((longlong)plStack_98 + 0x198) != 0) {
            uVar15 = pdb_1400af680(puStack_d8,&uStack_1d0);
            lVar14 = *(longlong *)((longlong)plStack_98 + 0x180);
            bVar31 = (byte)(uVar15 >> 0x39);
            auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
            auVar32 = pshuflw(auVar32,auVar32,0);
            lVar29 = 0;
            while( true ) {
              uVar15 = uVar15 & *(ulonglong *)((longlong)plStack_98 + 0x188);
              auVar38 = *(undefined1 (*) [16])(lVar14 + uVar15);
              auVar36[0] = -(auVar38[0] == auVar32[0]);
              auVar36[1] = -(auVar38[1] == auVar32[1]);
              auVar36[2] = -(auVar38[2] == auVar32[2]);
              auVar36[3] = -(auVar38[3] == auVar32[3]);
              auVar36[4] = -(auVar38[4] == auVar32[4]);
              auVar36[5] = -(auVar38[5] == auVar32[5]);
              auVar36[6] = -(auVar38[6] == auVar32[6]);
              auVar36[7] = -(auVar38[7] == auVar32[7]);
              auVar36[8] = -(auVar38[8] == auVar32[0]);
              auVar36[9] = -(auVar38[9] == auVar32[1]);
              auVar36[10] = -(auVar38[10] == auVar32[2]);
              auVar36[0xb] = -(auVar38[0xb] == auVar32[3]);
              auVar36[0xc] = -(auVar38[0xc] == auVar32[4]);
              auVar36[0xd] = -(auVar38[0xd] == auVar32[5]);
              auVar36[0xe] = -(auVar38[0xe] == auVar32[6]);
              auVar36[0xf] = -(auVar38[0xf] == auVar32[7]);
              uVar26 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar36[0xf] >> 7) << 0xf;
              uVar25 = (uint)uVar26;
              while (uVar26 != 0) {
                uVar9 = 0;
                for (uVar10 = uVar25; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar27 = uVar9 + uVar15 & *(ulonglong *)((longlong)plStack_98 + 0x188);
                if ((uVar13 == *(uint *)(lVar14 + -0xc + uVar27 * -0xc)) &&
                   (uVar22 == *(uint *)(lVar14 + -8 + uVar27 * -0xc))) {
                  iVar7 = *(int *)(lVar14 + uVar27 * -0xc + -4);
                  unaff_R13 = (undefined8 *)(ulonglong)(iVar7 - 1);
                  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143014da8);
                  }
                  goto LAB_1408ae3c6;
                }
                uVar26 = (ushort)(uVar25 - 1) & (ushort)uVar25;
                uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar26);
              }
              auVar33[0] = -(auVar38[0] == -1);
              auVar33[1] = -(auVar38[1] == -1);
              auVar33[2] = -(auVar38[2] == -1);
              auVar33[3] = -(auVar38[3] == -1);
              auVar33[4] = -(auVar38[4] == -1);
              auVar33[5] = -(auVar38[5] == -1);
              auVar33[6] = -(auVar38[6] == -1);
              auVar33[7] = -(auVar38[7] == -1);
              auVar33[8] = -(auVar38[8] == -1);
              auVar33[9] = -(auVar38[9] == -1);
              auVar33[10] = -(auVar38[10] == -1);
              auVar33[0xb] = -(auVar38[0xb] == -1);
              auVar33[0xc] = -(auVar38[0xc] == -1);
              auVar33[0xd] = -(auVar38[0xd] == -1);
              auVar33[0xe] = -(auVar38[0xe] == -1);
              auVar33[0xf] = -(auVar38[0xf] == -1);
              if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
              uVar15 = uVar15 + lVar29 + 0x10;
              lVar29 = lVar29 + 0x10;
            }
            puVar19 = (uint *)0x0;
            param_3 = (uint *)0x0;
          }
        }
        goto LAB_1408ae350;
      }
    }
    if (uStack_278 != (uint *)0x0) {
      pub_1406abac0((byte *)puStack_a8,(longlong)uStack_278 << 2,4);
    }
    if ((char)puStack_f0 != '\0') {
      puVar19 = (uint *)pdb_140e97000();
      if (((char)puVar19[0x1a] != '\x01') &&
         (puVar19 = (uint *)pdb_142dde6e0(puVar19,0), puVar19 == (uint *)0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ae946;
      }
      if (*(longlong *)puVar19 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ae946;
      }
      puVar19[0] = 0xffffffff;
      puVar19[1] = 0xffffffff;
      puStack_90 = puVar19;
      pdb_140e95370(puVar19 + 2,lStack_e8);
      *(longlong *)puStack_90 = *(longlong *)puStack_90 + 1;
    }
    if (cStack_83 == '\0') {
      return;
    }
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] == '\x01') ||
       (plVar16 = (longlong *)pdb_142dde6e0(plVar16,0), plVar16 != (longlong *)0x0)) {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        puStack_90 = (uint *)plVar16;
        pdb_140e95370(plVar16 + 1,uStack_188);
        *(longlong *)puStack_90 = *(longlong *)puStack_90 + 1;
        return;
      }
LAB_1408ae747:
      plVar16 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408ae753:
      plVar16 = (longlong *)pdb_142dde6e0(plVar16,0);
      if (plVar16 != (longlong *)0x0) goto LAB_1408ad306;
    }
    puVar19 = (uint *)pdb_142dc7890(&UNK_14330e598);
LAB_1408ae773:
    puVar19 = (uint *)pdb_142dde6e0(puVar19,0);
    if (puVar19 == (uint *)0x0) {
      pdb_142dc7890(&UNK_14330e598);
      goto LAB_1408ae946;
    }
  } while( true );
}

