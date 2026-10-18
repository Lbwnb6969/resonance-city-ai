// VA 0x14147a430, PDB extent 11662 bytes
// system_wall_constructor::construct_elevation_supports::rectangle_small_brackets::construct_rectangle_small_brackets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_small_brackets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::rectangle_small_brackets::construct_rectangle_small_brackets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_small_brackets.rs
   Extent: 11662 */

void pdb_14147a430(undefined8 param_1,float *param_2,longlong param_3,float *param_4,
                  undefined8 param_5,float *param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,longlong *param_10)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  float *pfVar25;
  undefined *puVar26;
  undefined *puVar27;
  byte *pbVar28;
  longlong lVar29;
  ushort uVar30;
  float *pfVar31;
  undefined1 (*pauVar32) [16];
  float *unaff_R15;
  undefined8 uVar33;
  bool bVar34;
  byte bVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar40;
  float fVar43;
  undefined1 in_XMM1 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  ulonglong in_stack_fffffffffffffbd8;
  undefined1 auStack_408 [64];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 (*pauStack_3b8) [16];
  ulonglong uStack_3b0;
  undefined8 uStack_3a8;
  float *pfStack_3a0;
  longlong lStack_398;
  float *pfStack_390;
  longlong lStack_380;
  float *pfStack_378;
  float *pfStack_370;
  float *pfStack_368;
  float *pfStack_360;
  undefined1 (*pauStack_358) [16];
  ulonglong uStack_350;
  undefined8 uStack_348;
  float *pfStack_340;
  longlong lStack_338;
  float *pfStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int iStack_2dc;
  uint uStack_2d8;
  ulonglong uStack_2d4;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  float *pfStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  byte *pbStack_2a8;
  float *pfStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  float fStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  byte *pbStack_258;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  int iStack_220;
  undefined4 uStack_218;
  float fStack_214;
  float *pfStack_210;
  longlong lStack_208;
  float *pfStack_200;
  float *pfStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  float *pfStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  int *piStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  byte bStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1e0 = param_1;
  lStack_1b8 = param_3;
  pfStack_120 = param_2;
  uVar9 = pdb_140e94b40();
  pfVar17 = (float *)(ulonglong)uVar9;
  if ((char)uVar9 == '\0') goto LAB_14147a648;
  pfVar31 = (float *)0x73;
  lVar12 = pdb_14147d1c0(0x73);
  unaff_R15 = (float *)&UNK_14330c780;
  if (lVar12 == 1) {
    if ((float *)0x73 < param_2) {
LAB_14147c27d:
      pdb_142dc8070(&UNK_14330c780,0x73,0);
LAB_14147c29d:
      pdb_142dc8070(&UNK_14330c780,0x73);
LAB_14147c2c0:
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14330c678);
    }
    uVar13 = pdb_14147d1c0(param_2);
    if ((uVar13 & 1) != 0) {
      if ((undefined *)0x73 < (undefined *)((longlong)param_2 + 2)) goto LAB_14147c29d;
      pfVar31 = (float *)(0x71 - (longlong)param_2);
      unaff_R15 = (float *)((longlong)param_2 + 0x14330c782);
    }
  }
  puVar26 = &UNK_14330c659;
  pbVar23 = &UNK_14330c5fd;
  do {
    bVar35 = puVar26[-1];
    uVar9 = (uint)(char)bVar35;
    if ((char)bVar35 < '\0') {
      bVar1 = puVar26[-2];
      if ((char)bVar1 < -0x40) {
        bVar2 = puVar26[-3];
        if ((char)bVar2 < -0x40) {
          pbVar28 = puVar26 + -4;
          puVar26 = puVar26 + -4;
          uVar9 = bVar2 & 0x3f | (*pbVar28 & 7) << 6;
        }
        else {
          puVar26 = puVar26 + -3;
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = bVar1 & 0x3f | uVar9 << 6;
      }
      else {
        puVar26 = puVar26 + -2;
        uVar9 = bVar1 & 0x1f;
      }
      uVar9 = (uint)(bVar35 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_14147a5b4;
LAB_14147a5c5:
      puVar27 = puVar26 + -0x14330c5fc;
      if (puVar27 < (undefined *)0x5d) {
        in_stack_fffffffffffffbd8 = 0x5c - (longlong)puVar27;
        pbVar23 = puVar26 + 1;
        goto LAB_14147a5e7;
      }
      pdb_142dc8070(&UNK_14330c5fd,0x5c,puVar27,0x5c,&UNK_14330c850);
      goto LAB_14147c27d;
    }
    puVar26 = puVar26 + -1;
    if (uVar9 == 0x5c) goto LAB_14147a5c5;
LAB_14147a5b4:
    if (uVar9 == 0x2f) goto LAB_14147a5c5;
  } while (puVar26 != &UNK_14330c5fd);
  in_stack_fffffffffffffbd8 = 0x5c;
LAB_14147a5e7:
  pfVar14 = (float *)pdb_140e97000();
  if (*(char *)(pfVar14 + 0x1a) != '\x01') goto LAB_14147c167;
  do {
    if (*(ulonglong *)pfVar14 == 0) {
      pfVar14[0] = -NAN;
      pfVar14[1] = -NAN;
      param_2 = unaff_R15;
      pfStack_108 = pfVar14;
      uStack_1c8 = pdb_140e94f10(pfVar14 + 2,unaff_R15,pfVar31,pbVar23,in_stack_fffffffffffffbd8,1,0
                                );
      *(ulonglong *)pfStack_108 = *(ulonglong *)pfStack_108 + 1;
LAB_14147a648:
      bStack_f6 = (byte)pfVar17;
      pfStack_140 = (float *)0x0;
      pfStack_138 = (float *)0x10;
      pfStack_130 = (float *)0x0;
      uStack_f4 = 1;
      plVar15 = (longlong *)pdb_140f3bda0();
      if ((char)plVar15[2] == '\x01') {
        lStack_338 = *plVar15;
        param_2 = (float *)plVar15[1];
      }
      else {
        uStack_f4 = 1;
        lStack_338 = pdb_140f4fd10();
        *plVar15 = lStack_338;
        plVar15[1] = (longlong)param_2;
        *(undefined1 *)(plVar15 + 2) = 1;
      }
      *plVar15 = lStack_338 + 1;
      pfVar31 = _UNK_14330c718;
      uVar33 = _DAT_14330c710;
      uVar13 = _UNK_14330c708;
      pauVar32 = _DAT_14330c700;
      uStack_348 = _DAT_14330c710;
      pfStack_340 = _UNK_14330c718;
      pauStack_358 = _DAT_14330c700;
      uStack_350 = _UNK_14330c708;
      uStack_f5 = 1;
      pfStack_330 = param_2;
      plVar15 = (longlong *)pdb_140f3bda0();
      if ((char)plVar15[2] == '\x01') {
        lStack_398 = *plVar15;
        param_2 = (float *)plVar15[1];
      }
      else {
        uStack_f5 = 1;
        lStack_398 = pdb_140f4fd10();
        *plVar15 = lStack_398;
        plVar15[1] = (longlong)param_2;
        *(undefined1 *)(plVar15 + 2) = 1;
      }
      *plVar15 = lStack_398 + 1;
      uStack_3a8 = uVar33;
      pfStack_3a0 = pfVar31;
      pauStack_3b8 = pauVar32;
      uStack_3b0 = uVar13;
      pfStack_108 = param_6 + param_7 * 0x14;
      pfStack_390 = param_2;
      for (pfVar31 = param_6; pfVar31 != pfStack_108; pfVar31 = pfVar31 + 0x14) {
        uStack_f1 = 1;
        pdb_1403b05d0(&pauStack_3b8,*(ulonglong *)(pfVar31 + 0xe));
      }
      uStack_f1 = 1;
      cVar8 = pdb_1408ff980((undefined *)((longlong)pfStack_120 + 0x29f));
      cStack_f3 = '\x01';
      if (cVar8 == '\0') {
        uStack_f1 = 1;
        cStack_f3 = pdb_1408ff990((undefined *)((longlong)pfStack_120 + 0x2a3));
      }
      fVar7 = _DAT_142e36f28;
      uStack_3c8 = *(undefined8 *)(lStack_1b8 + 8);
      uStack_3c0 = 0;
      uStack_1f0 = *(undefined4 *)(lStack_1b8 + 0x10);
      uStack_1ec = *(undefined4 *)(lStack_1b8 + 0x14);
      pfVar31 = param_6;
      if (param_6 != pfStack_108) {
LAB_14147a7c8:
        pfStack_378 = pfVar31 + 0xe;
        uVar13 = *(ulonglong *)(pfVar31 + 0xe);
        uStack_f1 = 1;
        pfStack_1d0 = pfStack_378;
        pfStack_118 = pfVar31;
        lVar12 = pdb_140b54f80(param_4,uVar13);
        if (lVar12 == 0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330c6a8);
        }
        uStack_f1 = 1;
        piStack_1b0 = (int *)pdb_14092f900(lVar12);
        uStack_f1 = 1;
        lVar12 = pdb_140315970(pfStack_1d0);
        uStack_f1 = 1;
        lStack_380 = pdb_140315970(&uStack_1e0);
        lStack_380 = lStack_380 * lVar12;
        lStack_2c8 = 0;
        pfStack_2c0 = (float *)0x4;
        lStack_2b8 = 0;
        if (pfStack_340 != (float *)0x0) {
          uStack_f2 = 1;
          uVar16 = pdb_1413f0640(&lStack_338,&pfStack_378);
          bVar35 = (byte)(uVar16 >> 0x39);
          auVar39 = ZEXT216(CONCAT11(bVar35,bVar35));
          auVar39 = pshuflw(auVar39,auVar39,0);
          lVar12 = 0;
          while( true ) {
            uVar16 = uVar16 & uStack_350;
            in_XMM1 = *(undefined1 (*) [16])(*pauStack_358 + uVar16);
            auVar41[0] = -(in_XMM1[0] == auVar39[0]);
            cVar8 = in_XMM1[1];
            auVar41[1] = -(cVar8 == auVar39[1]);
            cVar48 = in_XMM1[2];
            auVar41[2] = -(cVar48 == auVar39[2]);
            cVar49 = in_XMM1[3];
            auVar41[3] = -(cVar49 == auVar39[3]);
            cVar50 = in_XMM1[4];
            auVar41[4] = -(cVar50 == auVar39[4]);
            cVar51 = in_XMM1[5];
            auVar41[5] = -(cVar51 == auVar39[5]);
            cVar52 = in_XMM1[6];
            auVar41[6] = -(cVar52 == auVar39[6]);
            cVar53 = in_XMM1[7];
            auVar41[7] = -(cVar53 == auVar39[7]);
            cVar54 = in_XMM1[8];
            auVar41[8] = -(cVar54 == auVar39[0]);
            cVar55 = in_XMM1[9];
            auVar41[9] = -(cVar55 == auVar39[1]);
            cVar56 = in_XMM1[10];
            auVar41[10] = -(cVar56 == auVar39[2]);
            cVar57 = in_XMM1[0xb];
            auVar41[0xb] = -(cVar57 == auVar39[3]);
            cVar58 = in_XMM1[0xc];
            auVar41[0xc] = -(cVar58 == auVar39[4]);
            cVar59 = in_XMM1[0xd];
            auVar41[0xd] = -(cVar59 == auVar39[5]);
            cVar60 = in_XMM1[0xe];
            cVar61 = in_XMM1[0xf];
            auVar41[0xe] = -(cVar60 == auVar39[6]);
            auVar41[0xf] = -(cVar61 == auVar39[7]);
            uVar30 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar41[0xf] >> 7) << 0xf;
            uVar9 = (uint)uVar30;
            while (uVar30 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              if (uVar13 == **(ulonglong **)
                              ((longlong)pauStack_358 + (uVar5 + uVar16 & uStack_350) * -8 + -8))
              goto LAB_14147aa58;
              uVar30 = (ushort)(uVar9 - 1) & (ushort)uVar9;
              uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar30);
            }
            in_XMM1[0] = -(in_XMM1[0] == -1);
            in_XMM1[1] = -(cVar8 == -1);
            in_XMM1[2] = -(cVar48 == -1);
            in_XMM1[3] = -(cVar49 == -1);
            in_XMM1[4] = -(cVar50 == -1);
            in_XMM1[5] = -(cVar51 == -1);
            in_XMM1[6] = -(cVar52 == -1);
            in_XMM1[7] = -(cVar53 == -1);
            in_XMM1[8] = -(cVar54 == -1);
            in_XMM1[9] = -(cVar55 == -1);
            in_XMM1[10] = -(cVar56 == -1);
            in_XMM1[0xb] = -(cVar57 == -1);
            in_XMM1[0xc] = -(cVar58 == -1);
            in_XMM1[0xd] = -(cVar59 == -1);
            in_XMM1[0xe] = -(cVar60 == -1);
            in_XMM1[0xf] = -(cVar61 == -1);
            if ((((((((((((((((SUB161(in_XMM1 >> 7,0) & 1) != 0 ||
                             (SUB161(in_XMM1 >> 0xf,0) & 1) != 0) ||
                            (SUB161(in_XMM1 >> 0x17,0) & 1) != 0) ||
                           (SUB161(in_XMM1 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(in_XMM1 >> 0x27,0) & 1) != 0) ||
                         (SUB161(in_XMM1 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(in_XMM1 >> 0x37,0) & 1) != 0) ||
                       (SUB161(in_XMM1 >> 0x3f,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x47,0) & 1) != 0
                      ) || (SUB161(in_XMM1 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(in_XMM1 >> 0x57,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x5f,0) & 1) != 0)
                  || (SUB161(in_XMM1 >> 0x67,0) & 1) != 0) || (SUB161(in_XMM1 >> 0x6f,0) & 1) != 0)
                || (SUB161(in_XMM1 >> 0x77,0) & 1) != 0) || in_XMM1[0xf] < '\0') break;
            uVar16 = uVar16 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
        if ((char)*piStack_1b0 != '\0') {
          piVar20 = piStack_1b0 + 1;
          uVar16 = 0;
          auVar39 = in_XMM1;
          while (in_XMM1 = auVar39, uVar18 = uVar16, uVar18 < 4) {
            uStack_f2 = 1;
            auVar42._0_8_ = pdb_140df3e10(piVar20,uVar18);
            auVar42._8_8_ = extraout_XMM0_Qb;
            uStack_f2 = 1;
            auVar39 = auVar42;
            cVar8 = pdb_140df1700(lStack_1b8,auVar42._0_8_,in_XMM1._0_8_);
            uVar16 = uVar18 + 1;
            if (cVar8 != '\0') {
              uStack_f2 = 1;
              fVar36 = (float)pdb_140df0700(piVar20,uVar18);
              uStack_f2 = 1;
              fVar37 = (float)pdb_140df1dc0(piVar20,uVar18);
              lVar12 = lStack_2b8;
              auVar41 = auVar39;
              if (lStack_2b8 == lStack_2c8) {
                uStack_f2 = 1;
                pdb_142d8d5c0(&lStack_2c8);
              }
              pfStack_2c0[lVar12 * 5] = (float)auVar42._0_8_;
              pfStack_2c0[lVar12 * 5 + 1] = in_XMM1._0_4_;
              pfStack_2c0[lVar12 * 5 + 2] = fVar36;
              pfStack_2c0[lVar12 * 5 + 3] = fVar37;
              pfStack_2c0[lVar12 * 5 + 4] = auVar39._0_4_;
              lStack_2b8 = lVar12 + 1;
              auVar39 = auVar41;
            }
          }
        }
        uStack_f2 = 1;
        pdb_1414078a0(&pauStack_358,pfStack_1d0);
LAB_14147aa58:
        if (*piStack_1b0 == 0) {
          pfVar31 = *(float **)(pfStack_118 + 4);
          uVar16 = (longlong)pfVar31 * 8;
          if (0x7ffffffffffffffc < uVar16 || (ulonglong)pfVar31 >> 0x3d != 0) {
            uVar33 = 0;
LAB_14147b86b:
            uStack_f2 = 1;
            pdb_142dc7e2a(uVar33,uVar16);
            goto LAB_14147c2ea;
          }
          uVar18 = *(ulonglong *)(pfStack_118 + 2);
          if (uVar16 == 0) {
            pfVar17 = (float *)0x4;
            pfVar14 = (float *)0x0;
          }
          else {
            pdb_14007ee60();
            uVar33 = 4;
            pfVar17 = (float *)pub_1406abab0(uVar16,4);
            pfVar14 = pfVar31;
            if (pfVar17 == (float *)0x0) goto LAB_14147b86b;
          }
          if (pfVar31 != (float *)0x0) {
            pub_142e32760(pfVar17,uVar18);
          }
          uVar16 = *(ulonglong *)(pfStack_118 + 10);
          pfVar25 = (float *)(uVar16 * 4);
          pfStack_100 = pfVar25;
          if ((float *)0x7ffffffffffffffc < pfVar25 || uVar16 >> 0x3e != 0) {
            uVar33 = 0;
            pfStack_128 = pfVar17;
            pfStack_110 = pfVar14;
LAB_14147b8b6:
            pdb_142dc7e2a(uVar33,pfStack_100);
            goto LAB_14147c2ea;
          }
          if (pfVar25 == (float *)0x0) {
            pbVar23 = (byte *)0x4;
          }
          else {
            puVar3 = *(undefined4 **)(pfStack_118 + 8);
            pfStack_128 = pfVar17;
            pfStack_110 = pfVar14;
            pdb_14007ee60();
            uVar33 = 4;
            pbVar23 = pub_1406abab0((ulonglong)pfVar25,4);
            if (pbVar23 == (byte *)0x0) goto LAB_14147b8b6;
            pfVar17 = pfStack_128;
            pfVar14 = pfStack_110;
            if (uVar16 != 0) {
              uVar18 = uVar16 - 1;
              if (uVar16 < uVar16 - 1) {
                uVar18 = uVar16;
              }
              if (uVar18 < 8) {
                lVar12 = 0;
                uVar18 = uVar16;
                puVar22 = puVar3;
              }
              else {
                uVar18 = uVar18 + 1;
                uVar21 = (ulonglong)((uint)uVar18 & 7);
                if ((uVar18 & 7) == 0) {
                  uVar21 = 8;
                }
                lVar12 = uVar18 - uVar21;
                uVar18 = uVar16 - lVar12;
                puVar22 = puVar3 + lVar12;
                lVar29 = 0;
                do {
                  uVar33 = *(undefined8 *)((longlong)(puVar3 + lVar29) + 8);
                  in_XMM1 = *(undefined1 (*) [16])(puVar3 + lVar29 + 4);
                  *(undefined8 *)(pbVar23 + lVar29 * 4) = *(undefined8 *)(puVar3 + lVar29);
                  *(undefined8 *)(pbVar23 + lVar29 * 4 + 8) = uVar33;
                  *(undefined1 (*) [16])(pbVar23 + lVar29 * 4 + 0x10) = in_XMM1;
                  lVar29 = lVar29 + 8;
                } while (lVar12 != lVar29);
              }
              pbVar28 = pbVar23 + lVar12 * 4;
              do {
                if (puVar22 == puVar3 + uVar16) break;
                uVar38 = *puVar22;
                puVar22 = puVar22 + 1;
                *(undefined4 *)pbVar28 = uVar38;
                pbVar28 = pbVar28 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          uStack_178._0_4_ = pfStack_118[0xc];
          auStack_180 = (undefined1  [8])uVar16;
          uStack_1a8 = pfVar14;
          uStack_1a0 = (code *)pfVar17;
          uStack_198 = pfVar31;
          uStack_190 = uVar16;
          uStack_188 = pbVar23;
          pdb_1413f9210(&uStack_328,&uStack_1a8,_DAT_1430124c0);
          unaff_R15 = (float *)0x0;
          if (pfVar14 != (float *)0x0) {
            unaff_R15 = (float *)((longlong)pfVar14 << 3);
            pub_1406abac0((byte *)pfVar17,(ulonglong)unaff_R15,4);
          }
          pfVar31 = pfStack_100;
          if (uVar16 == 0) goto LAB_14147af48;
        }
        else {
          pfVar31 = *(float **)(pfStack_118 + 4);
          uVar16 = (longlong)pfVar31 * 8;
          if (0x7ffffffffffffffc < uVar16 || (ulonglong)pfVar31 >> 0x3d != 0) {
            uVar33 = 0;
LAB_14147b850:
            uStack_f2 = 1;
            pdb_142dc7e2a(uVar33,uVar16);
            goto LAB_14147c2ea;
          }
          uVar18 = *(ulonglong *)(pfStack_118 + 2);
          if (uVar16 == 0) {
            pfVar17 = (float *)0x4;
            unaff_R15 = (float *)0x0;
          }
          else {
            pdb_14007ee60();
            uVar33 = 4;
            pfVar17 = (float *)pub_1406abab0(uVar16,4);
            unaff_R15 = pfVar31;
            if (pfVar17 == (float *)0x0) goto LAB_14147b850;
          }
          if (pfVar31 != (float *)0x0) {
            pub_142e32760(pfVar17,uVar18,uVar16);
          }
          uVar18 = *(ulonglong *)(pfStack_118 + 10);
          uVar16 = uVar18 * 4;
          if (0x7ffffffffffffffc < uVar16 || uVar18 >> 0x3e != 0) {
            uVar33 = 0;
            pfStack_110 = pfVar17;
            pfStack_100 = unaff_R15;
LAB_14147b894:
            pdb_142dc7e2a(uVar33,uVar16);
LAB_14147c2ea:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar16 == 0) {
            pbVar23 = (byte *)0x4;
          }
          else {
            puVar3 = *(undefined4 **)(pfStack_118 + 8);
            pfStack_110 = pfVar17;
            pfStack_100 = unaff_R15;
            pdb_14007ee60();
            uVar33 = 4;
            pbVar23 = pub_1406abab0(uVar16,4);
            if (pbVar23 == (byte *)0x0) goto LAB_14147b894;
            pfVar17 = pfStack_110;
            unaff_R15 = pfStack_100;
            if (uVar18 != 0) {
              uVar16 = uVar18 - 1;
              if (uVar18 < uVar18 - 1) {
                uVar16 = uVar18;
              }
              if (uVar16 < 8) {
                lVar12 = 0;
                uVar16 = uVar18;
                puVar22 = puVar3;
              }
              else {
                uVar16 = uVar16 + 1;
                uVar21 = (ulonglong)((uint)uVar16 & 7);
                if ((uVar16 & 7) == 0) {
                  uVar21 = 8;
                }
                lVar12 = uVar16 - uVar21;
                uVar16 = uVar18 - lVar12;
                puVar22 = puVar3 + lVar12;
                lVar29 = 0;
                do {
                  uVar33 = *(undefined8 *)((longlong)(puVar3 + lVar29) + 8);
                  in_XMM1 = *(undefined1 (*) [16])(puVar3 + lVar29 + 4);
                  *(undefined8 *)(pbVar23 + lVar29 * 4) = *(undefined8 *)(puVar3 + lVar29);
                  *(undefined8 *)(pbVar23 + lVar29 * 4 + 8) = uVar33;
                  *(undefined1 (*) [16])(pbVar23 + lVar29 * 4 + 0x10) = in_XMM1;
                  lVar29 = lVar29 + 8;
                } while (lVar12 != lVar29);
              }
              pbVar28 = pbVar23 + lVar12 * 4;
              do {
                if (puVar22 == puVar3 + uVar18) break;
                uVar38 = *puVar22;
                puVar22 = puVar22 + 1;
                *(undefined4 *)pbVar28 = uVar38;
                pbVar28 = pbVar28 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
          uStack_178._0_4_ = pfStack_118[0xc];
          auStack_180 = (undefined1  [8])uVar18;
          uStack_1a8 = unaff_R15;
          uStack_1a0 = (code *)pfVar17;
          uStack_198 = pfVar31;
          uStack_190 = uVar18;
          uStack_188 = pbVar23;
          pdb_1413fa460(&uStack_328,&uStack_1a8,_DAT_142e382c0);
          if (uStack_1a8 != (float *)0x0) {
            pub_1406abac0((byte *)uStack_1a0,(longlong)uStack_1a8 << 3,4);
          }
          if (uStack_190 == 0) goto LAB_14147af48;
          pbVar23 = uStack_188;
          pfVar31 = (float *)(uStack_190 << 2);
        }
        pub_1406abac0(pbVar23,(ulonglong)pfVar31,4);
LAB_14147af48:
        pfStack_360 = pfStack_118 + 0x14;
        pbStack_1d8 = uStack_308;
        pfStack_370 = (float *)auStack_318;
        if (uStack_300 < (ulonglong)auStack_318) {
          pfStack_370 = uStack_300;
        }
        lStack_208 = lStack_2c8;
        pfStack_368 = pfStack_2c0 + lStack_2b8 * 5;
        pfStack_110 = (float *)0x0;
        pfStack_128 = (float *)0x0;
        pfStack_200 = uStack_320;
        pfStack_100 = uStack_320;
        pfStack_1f8 = pfStack_2c0;
        pfStack_210 = pfStack_2c0;
LAB_14147b050:
        pfVar31 = pfStack_110;
        if ((pfStack_100 == (float *)0x0) || (pfStack_370 <= pfStack_128)) {
          if (pfStack_210 == pfStack_368) goto LAB_14147b71c;
          uVar16 = *(ulonglong *)pfStack_210;
          auVar39 = ZEXT416((uint)pfStack_210[2]);
          uStack_1c0 = *(undefined8 *)(pfStack_210 + 3);
          pfStack_210 = pfStack_210 + 5;
          pfStack_100 = (float *)0x0;
        }
        else {
          uVar16 = *(ulonglong *)(pfStack_100 + (longlong)pfStack_128 * 2);
          fVar36 = *(float *)(pbStack_1d8 + (longlong)pfStack_128 * 4);
          fVar37 = pfStack_118[0x10];
          fVar69 = pfStack_118[0x11];
          if (fVar37 <= fVar69) {
            if (NAN(fVar69 * fVar36 + (fVar7 - fVar36) * fVar37)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
          }
          else if (NAN((fVar69 + fVar7) * fVar36 + (fVar7 - fVar36) * fVar37)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          uVar33 = pub_142e32a70();
          fVar36 = (float)uVar33;
          auVar39._0_4_ = (uint)(fVar36 + fVar7) & -(uint)(fVar36 < 0.0);
          auVar39._4_4_ = (int)((ulonglong)uVar33 >> 0x20);
          auVar39._8_4_ = (int)extraout_XMM0_Qb_00;
          auVar39._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar39 = ZEXT416(~-(uint)(fVar36 < 0.0) & (uint)fVar36) | auVar39;
          fVar36 = auVar39._0_4_;
          uStack_278 = CONCAT44(uStack_278._4_4_,fVar36);
          if ((fVar36 < 0.0) || (fVar7 < fVar36)) {
            uStack_1a8 = (float *)&uStack_278;
            uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143307a98);
          }
          in_XMM1 = auVar39;
          uVar38 = pdb_140a850d0(piStack_1b0);
          pfStack_128 = (float *)((longlong)pfStack_128 + 1);
          uStack_1c0 = CONCAT44(in_XMM1._0_4_,uVar38);
        }
        fVar36 = (float)uStack_1c0;
        fVar37 = (float)((ulonglong)uStack_1c0 >> 0x20);
        pfStack_110 = (float *)(ulonglong)((int)pfVar31 + 1);
        auVar41 = *pauStack_3b8;
        pauVar32 = pauStack_3b8 + 1;
        unaff_R15 = (float *)(ulonglong)
                             ~(uint)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
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
                                             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar41[0xf] >> 7) << 0xf);
        pauVar24 = pauStack_3b8;
        pfVar17 = pfStack_3a0;
        uStack_1e8 = uVar16;
        do {
          do {
            uVar38 = (undefined4)(in_stack_fffffffffffffbd8 >> 0x20);
            if (pfVar17 == (float *)0x0) {
              pdb_140df4540(auStack_408,&uStack_1e8,pfStack_120[0xa1] + _DAT_142e37ae0);
              pdb_140df4520(&uStack_1a8,&uStack_1c0);
              fStack_270 = (float)auStack_408._8_4_;
              uStack_278 = auStack_408._0_8_;
              uStack_264 = (float)uStack_1a0;
              fStack_26c = SUB84(uStack_1a8,0);
              uStack_268 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
              in_stack_fffffffffffffbd8 = CONCAT44(uVar38,0xc);
              pdb_1409edd20(&uStack_1a8,param_5,&uStack_278,_DAT_142e37988,in_stack_fffffffffffffbd8
                           );
              uVar38 = (undefined4)(in_stack_fffffffffffffbd8 >> 0x20);
              pfVar17 = (float *)0x0;
              if ((char)uStack_1a8 == '\x11') {
                pdb_140de88f0(&uStack_1a8);
                pfVar25 = (float *)uStack_1a0;
                pfVar14 = uStack_1a8;
                pdb_140df1c10(&uStack_278,lStack_1b8);
                fVar66 = fStack_26c;
                fVar64 = fStack_270;
                fVar69 = (float)uStack_278;
                fVar72 = uStack_278._4_4_;
                pdb_140df1c10(&uStack_1a8,lStack_1b8);
                fVar40 = fVar66 * fVar69;
                fVar43 = fVar64 * fVar72;
                auVar44._0_4_ = fVar40 - fVar43;
                auVar44._4_4_ = fVar40 - fVar43;
                auVar44._8_4_ = fVar40 - fVar43;
                auVar44._12_4_ = fVar40 - fVar43;
                auVar41 = divps(_DAT_14301bc40,auVar44);
                fVar70 = (float)uVar16 - (float)uStack_3c8;
                fVar71 = (float)(uVar16 >> 0x20) - uStack_3c8._4_4_;
                fVar40 = uStack_1a0._4_4_ * (float)uStack_1a8;
                fVar43 = (float)uStack_1a0 * uStack_1a8._4_4_;
                auVar45._0_4_ = fVar40 - fVar43;
                auVar45._4_4_ = fVar40 - fVar43;
                auVar45._8_4_ = fVar40 - fVar43;
                auVar45._12_4_ = fVar40 - fVar43;
                auVar42 = divps(_DAT_14301bc40,auVar45);
                auStack_408._0_4_ =
                     fVar71 * auVar41._8_4_ * fVar64 + fVar70 * auVar41._0_4_ * fVar66;
                auStack_408._4_4_ =
                     fVar71 * auVar41._12_4_ * fVar69 + fVar70 * auVar41._4_4_ * fVar72;
                auStack_408._8_4_ =
                     fVar37 * (float)uStack_1a0 * auVar42._8_4_ +
                     fVar36 * uStack_1a0._4_4_ * auVar42._0_4_;
                auStack_408._12_4_ =
                     fVar37 * (float)uStack_1a8 * auVar42._12_4_ +
                     fVar36 * uStack_1a8._4_4_ * auVar42._4_4_;
                in_stack_fffffffffffffbd8 = CONCAT44(uVar38,uStack_1ec);
                in_XMM1 = ZEXT816(0);
                pdb_140deead0(&uStack_1a8);
                uStack_218 = pdb_140deea90(&uStack_1a8,auStack_408);
                fVar36 = in_XMM1._0_4_;
                fStack_214 = fVar36;
                cVar8 = pdb_140dee720(&uStack_218);
                if (cVar8 != '\0') {
                  uVar33 = pdb_140e02880(&lStack_380);
                  fVar72 = ((float)uVar33 * _DAT_142e36f50 -
                           (fVar7 - (float)uVar33) * _DAT_142e36f50) * _DAT_14330c50c +
                           _DAT_142e382c0;
                  iVar10 = pdb_140315970(&uStack_1e0);
                  iVar11 = pdb_140315970(pfStack_1d0);
                  fVar37 = (float)((int)pfVar31 + iVar11 + iVar10);
                  fVar69 = auVar39._0_4_;
                  if (cStack_f3 == '\0') {
                    auVar46._4_4_ = (int)((ulonglong)uVar33 >> 0x20);
                    auVar46._0_4_ = fVar72;
                    auVar46._8_4_ = (int)extraout_XMM0_Qb_01;
                    auVar46._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
                    auVar47._4_12_ = auVar46._4_12_;
                    auVar47._0_4_ = fVar72 * _DAT_142e36f38 + pfStack_120[0xa1];
                    pdb_140df4540(&uStack_278,&uStack_1e8,auVar47._0_8_);
                    pdb_140df4540(&uStack_1a8,&uStack_1c0);
                    pfVar31 = pfStack_130;
                    fVar66 = SUB84(uStack_1a8,0) * _DAT_14300b130;
                    fVar40 = (float)((ulonglong)uStack_1a8 >> 0x20) * _UNK_14300b134;
                    fVar70 = (float)uStack_278;
                    uVar16 = (ulonglong)uStack_278 >> 0x20;
                    fVar64 = (float)uStack_1a0 * _DAT_14300b140 + fStack_270;
                    fVar43 = fStack_2f8 * fVar69;
                    if (pfStack_130 == pfStack_140) {
                      pdb_142d8d860(&pfStack_140);
                    }
                    *(float **)(pfStack_138 + (longlong)pfVar31 * 0x10) = pfVar14;
                    *(float **)(pfStack_138 + (longlong)pfVar31 * 0x10 + 2) = pfVar25;
                    *(ulonglong *)(pfStack_138 + (longlong)pfVar31 * 0x10 + 4) =
                         CONCAT44(fVar40 + (float)uVar16,fVar66 + fVar70);
                    pfStack_138[(longlong)pfVar31 * 0x10 + 6] = fVar64;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 7] = 0.3;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 8] = fVar72;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 9] = 0.3;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 0xc] = fVar43;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 0xd] = fVar43;
                    pfStack_138[(longlong)pfVar31 * 0x10 + 0xe] = fVar37;
                    pfStack_130 = (float *)((longlong)pfVar31 + 1);
                  }
                  fVar72 = _DAT_142e3787c;
                  if (_DAT_142e3787c <= fVar36) {
                    fVar72 = fVar36;
                  }
                  in_XMM1 = ZEXT416((uint)fVar72);
                  fVar36 = _DAT_142e3783c;
                  if (fVar72 <= _DAT_142e3783c) {
                    fVar36 = fVar72;
                  }
                  fVar64 = fVar36 + _DAT_14330c510 + _DAT_142e36f50;
                  fVar72 = fVar64;
                  if (cStack_f3 == '\0') {
                    fVar72 = fVar36 + _DAT_14330c510;
                  }
                  pdb_140df4540(&uStack_278,&uStack_1e8,pfStack_120[0xa1] + _DAT_142f95158);
                  pdb_140df4540(&uStack_1a8,&uStack_1c0);
                  fVar40 = fVar72 * _DAT_142e36f50 + _DAT_14300b140 + _DAT_142e3c608;
                  fVar36 = SUB84(uStack_1a8,0);
                  uVar16 = (ulonglong)uStack_1a8 >> 0x20;
                  fVar66 = (float)uStack_278;
                  uVar18 = (ulonglong)uStack_278 >> 0x20;
                  fVar43 = (float)uStack_1a0 * fVar40 + fStack_270;
                  if (cStack_f3 == '\0') {
                    fVar70 = 0.0;
                    fVar71 = 0.0;
                    fVar64 = 0.0;
                    fVar69 = fVar69 * fStack_2f8;
                    if (pfStack_130 == pfStack_140) goto LAB_14147b70a;
                  }
                  else {
                    pdb_140df4540(&uStack_1a8,&uStack_1c0);
                    in_XMM1 = ZEXT416((uint)_DAT_142e36f38);
                    fVar70 = fVar64 * (float)uStack_1a8 * _DAT_142e36f38;
                    fVar71 = uStack_1a8._4_4_ * fVar64 * _DAT_142e36f38 + _DAT_142f95158;
                    fVar64 = (float)uStack_1a0 * fVar64 * _DAT_142e36f38;
                    fVar69 = fVar69 * fStack_2f8;
                    if (pfStack_130 == pfStack_140) {
LAB_14147b70a:
                      pfVar31 = pfStack_130;
                      pdb_142d8d860(&pfStack_140);
                      pfStack_130 = pfVar31;
                    }
                  }
                  *(float **)(pfStack_138 + (longlong)pfStack_130 * 0x10) = pfVar14;
                  *(float **)(pfStack_138 + (longlong)pfStack_130 * 0x10 + 2) = pfVar25;
                  *(ulonglong *)(pfStack_138 + (longlong)pfStack_130 * 0x10 + 4) =
                       CONCAT44(fVar40 * (float)uVar16 + (float)uVar18 + fVar71,
                                fVar40 * fVar36 + fVar66 + fVar70);
                  pfStack_138[(longlong)pfStack_130 * 0x10 + 6] = fVar43 + fVar64;
                  *(undefined8 *)(pfStack_138 + (longlong)pfStack_130 * 0x10 + 7) = _DAT_143009bd0;
                  pfStack_138[(longlong)pfStack_130 * 0x10 + 9] = fVar72;
                  pfStack_138[(longlong)pfStack_130 * 0x10 + 0xc] = fVar69;
                  pfStack_138[(longlong)pfStack_130 * 0x10 + 0xd] = fVar69;
                  pfStack_138[(longlong)pfStack_130 * 0x10 + 0xe] = fVar37;
                  pfStack_130 = (float *)((longlong)pfStack_130 + 1);
                  *param_10 = *param_10 + 1;
                }
              }
              goto LAB_14147b050;
            }
            if ((short)unaff_R15 == 0) {
              do {
                auVar41 = *pauVar32;
                pauVar24 = pauVar24 + -8;
                pauVar32 = pauVar32 + 1;
                uVar9 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
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
                                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
                unaff_R15 = (float *)(ulonglong)uVar9;
              } while (uVar9 == 0);
            }
            uVar5 = (uint)unaff_R15;
            iVar10 = 0;
            for (uVar9 = uVar5; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              iVar10 = iVar10 + 1;
            }
            unaff_R15 = (float *)(ulonglong)(uVar5 - 1 & uVar5);
            pfVar17 = (float *)((longlong)pfVar17 + -1);
            uVar18 = *(ulonglong *)((longlong)pauVar24 + (-8 - (ulonglong)(uint)(iVar10 << 3)));
          } while (uVar18 == uVar13);
          lVar12 = pdb_140b54f80(param_4,uVar18,&UNK_14330c6c0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14330c6d8);
          }
          uVar33 = pdb_14092f900(lVar12);
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = uVar16;
          cVar8 = pdb_140a84de0(uVar33);
        } while (cVar8 == '\0');
        goto LAB_14147b050;
      }
LAB_14147b797:
      if (cStack_f3 == '\0') {
        uStack_f1 = 1;
        puVar19 = (undefined8 *)pdb_1413e4400(param_8,&UNK_1433056c0);
        if (puVar19 == (undefined8 *)0x0) {
LAB_14147c2d6:
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330c660);
        }
        uStack_f1 = 1;
        lVar12 = (**(code **)(puVar19[1] + 0x18))(*puVar19);
        if (lVar12 == 0) goto LAB_14147c2d6;
        pbVar23 = *(byte **)(pfStack_120 + 0x54);
        if (pbVar23 == (byte *)0x0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b70);
        }
        pfVar17 = (float *)(pbVar23 + 0x18);
        LOCK();
        bVar34 = pbVar23[0x18] == 0;
        if (bVar34) {
          pbVar23[0x18] = 1;
        }
        UNLOCK();
        if (!bVar34) {
          uStack_f1 = 1;
          pdb_142dbd1a0(pfVar17,1,1000000000);
          param_4 = pfVar17;
        }
        uStack_f1 = 1;
        pdb_140e9a150(pfVar17);
        if ((*(longlong *)(pbVar23 + 0x10) == 0) ||
           (piVar20 = (int *)(*(longlong *)(pbVar23 + 8) + *(longlong *)(pbVar23 + 0x10) * 4 + -4),
           piVar20 == (int *)0x0)) {
          lVar29 = *(longlong *)(lVar12 + 0x10);
          if (lVar29 == 0) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b88);
          }
          iStack_220 = (int)lVar29 + -1;
        }
        else {
          iStack_220 = *piVar20;
          lVar29 = *(longlong *)(lVar12 + 0x10);
        }
        uStack_278 = *(longlong *)(lVar12 + 8);
        uStack_260 = *(undefined8 *)(lVar12 + 0x20);
        in_XMM1 = *(undefined1 (*) [16])(lVar12 + 0x28);
        uStack_240 = lVar12 + 0x78;
        lStack_238 = lVar12 + 0x58;
        uStack_230 = *(undefined8 *)(lVar12 + 0x38);
        uStack_228 = *(undefined8 *)(lVar12 + 0x40);
        fStack_270 = (float)lVar29;
        fStack_26c = (float)((ulonglong)lVar29 >> 0x20);
        uStack_268 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
        uStack_264 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x18) >> 0x20);
        pfStack_100 = pfStack_140;
        pfStack_108 = pfStack_138;
        pfVar17 = (float *)0x0;
        pbStack_258 = pbVar23;
        auStack_250 = in_XMM1;
        if (pfStack_130 != (float *)0x0) {
          pfVar17 = pfStack_138 + (longlong)pfStack_130 * 0x10;
          pfVar31 = (float *)&uStack_298;
          param_4 = pfStack_138;
          do {
            fVar72 = *param_4;
            fVar64 = param_4[1];
            fVar66 = param_4[3];
            uVar13 = *(ulonglong *)(param_4 + 0xc);
            fVar69 = param_4[0xe];
            fVar36 = param_4[2];
            fVar37 = param_4[7];
            fVar68 = fVar36 + fVar36;
            fVar70 = fVar64 + fVar64;
            fVar65 = fVar72 * (fVar72 + fVar72);
            fVar71 = (fVar72 + fVar72) * fVar66;
            fVar67 = fVar68 * fVar72 - fVar70 * fVar66;
            fVar62 = fVar71 + fVar68 * fVar64;
            fVar63 = fVar7 - (fVar65 + fVar64 * fVar70);
            fVar40 = (float)*(ulonglong *)(param_4 + 8);
            fVar43 = (float)(*(ulonglong *)(param_4 + 8) >> 0x20);
            uStack_1a8 = (float *)CONCAT44(fVar37 * (fVar70 * fVar72 + fVar66 * fVar68),
                                           fVar37 * (fVar7 - (fVar64 * fVar70 + fVar36 * fVar68)));
            uStack_1a0 = (code *)CONCAT44(fVar37 * fVar67,fVar37 * fVar67);
            uStack_198 = (float *)CONCAT44(fVar40 * (fVar7 - (fVar36 * fVar68 + fVar65)),
                                           fVar40 * (fVar70 * fVar72 - fVar66 * fVar68));
            uStack_190 = CONCAT44(fVar40 * fVar62,fVar40 * fVar62);
            uStack_188 = (byte *)CONCAT44(fVar43 * (fVar68 * fVar64 - fVar71),
                                          fVar43 * (fVar70 * fVar66 + fVar68 * fVar72));
            auStack_180._4_4_ = fVar43 * fVar63;
            auStack_180._0_4_ = fVar43 * fVar63;
            uStack_178._0_4_ = param_4[4];
            uStack_178._4_4_ = param_4[5];
            uStack_170 = CONCAT44(param_4[6],param_4[6]);
            pdb_140e07fe0(&uStack_328,&uStack_1a8);
            uVar9 = pdb_1409012c0(pfStack_120[0x9d]);
            unaff_R15 = (float *)(ulonglong)uVar9;
            pdb_140951920(&uStack_1a8);
            iStack_2dc = (int)fVar69 + 100;
            pbStack_2a8 = uStack_308;
            pfStack_2a0 = uStack_300;
            lStack_2b8 = (longlong)auStack_318;
            uStack_2b0 = uStack_310;
            lStack_2c8 = uStack_328;
            pfStack_2c0 = uStack_320;
            uStack_298 = uStack_178;
            uVar33 = uStack_298;
            fStack_290 = (float)uStack_170;
            fStack_28c = (float)((ulonglong)uStack_170 >> 0x20);
            uStack_280 = (undefined4)uStack_160;
            uStack_288 = (undefined4)lStack_168;
            uStack_284 = (undefined4)((ulonglong)lStack_168 >> 0x20);
            uStack_298._0_4_ = auStack_180._8_4_;
            uStack_298._4_4_ = auStack_180._12_4_;
            fStack_2f8 = (float)uStack_298;
            fStack_2f4 = uStack_298._4_4_;
            fStack_2f0 = fStack_290;
            fStack_2ec = fStack_28c;
            uStack_2e8 = uStack_288;
            uStack_2e4 = uStack_284;
            uStack_2e0 = (undefined4)uStack_160;
            uStack_2cc = uStack_14c;
            in_XMM1 = _auStack_318;
            uStack_2d8 = uVar9;
            uStack_2d4 = uVar13;
            uStack_298 = uVar33;
            pdb_14094c790(auStack_408,&uStack_328);
            pdb_1413f66a0(&uStack_278,auStack_408);
            param_4 = param_4 + 0x10;
          } while (param_4 != pfVar17);
        }
        if (pfStack_100 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_108,(longlong)pfStack_100 << 6,0x10);
        }
        pbVar23 = pbStack_258 + 0x18;
        uStack_f1 = 0;
        pdb_140e9a350();
        LOCK();
        bVar35 = *pbVar23;
        if (bVar35 == 1) {
          *pbVar23 = 0;
        }
        UNLOCK();
        if (bVar35 != 1) {
          uStack_f1 = 0;
          pdb_142dbcef0(pbVar23,0);
        }
      }
      else {
        uStack_f1 = 1;
        puVar19 = (undefined8 *)pdb_1413e4400(param_8,&UNK_1433056b0);
        if (puVar19 == (undefined8 *)0x0) goto LAB_14147c2c0;
        uStack_f1 = 1;
        lVar12 = (**(code **)(puVar19[1] + 0x18))(*puVar19);
        if (lVar12 == 0) goto LAB_14147c2c0;
        pbVar23 = *(byte **)(pfStack_120 + 0x50);
        if (pbVar23 == (byte *)0x0) goto LAB_14147c186;
        pfVar14 = (float *)(pbVar23 + 0x18);
        LOCK();
        bVar34 = pbVar23[0x18] == 0;
        if (bVar34) {
          pbVar23[0x18] = 1;
        }
        UNLOCK();
        if (!bVar34) {
          uStack_f1 = 1;
          pdb_142dbd1a0(pfVar14,1,1000000000);
          param_4 = pfVar14;
        }
        uStack_f1 = 1;
        pdb_140e9a150(pfVar14);
        if ((*(longlong *)(pbVar23 + 0x10) == 0) ||
           (piVar20 = (int *)(*(longlong *)(pbVar23 + 8) + *(longlong *)(pbVar23 + 0x10) * 4 + -4),
           piVar20 == (int *)0x0)) {
          pfVar14 = *(float **)(lVar12 + 0x10);
          if (pfVar14 == (float *)0x0) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b88);
          }
          iStack_150 = (int)pfVar14 + -1;
        }
        else {
          iStack_150 = *piVar20;
          pfVar14 = *(float **)(lVar12 + 0x10);
        }
        uStack_1a8 = *(float **)(lVar12 + 8);
        uStack_198 = *(float **)(lVar12 + 0x18);
        uStack_190 = *(ulonglong *)(lVar12 + 0x20);
        in_XMM1 = *(undefined1 (*) [16])(lVar12 + 0x28);
        uStack_170 = lVar12 + 0x78;
        lStack_168 = lVar12 + 0x58;
        uStack_160 = *(undefined8 *)(lVar12 + 0x38);
        uStack_158 = *(undefined8 *)(lVar12 + 0x40);
        pfStack_100 = pfStack_140;
        pfStack_108 = pfStack_138;
        uStack_1a0 = (code *)pfVar14;
        uStack_188 = pbVar23;
        _auStack_180 = in_XMM1;
        if (pfStack_130 != (float *)0x0) {
          pfVar25 = pfStack_138 + (longlong)pfStack_130 * 0x10;
          param_4 = (float *)&uStack_328;
          unaff_R15 = (float *)&uStack_278;
          pfVar14 = pfStack_138;
          do {
            fVar72 = *pfVar14;
            fVar64 = pfVar14[1];
            fVar66 = pfVar14[3];
            fStack_2f8 = pfVar14[4];
            fStack_2f4 = pfVar14[5];
            fStack_2f0 = pfVar14[6];
            fVar69 = pfVar14[0xe];
            fVar36 = pfVar14[2];
            fVar37 = pfVar14[7];
            fVar68 = fVar36 + fVar36;
            fVar70 = fVar64 + fVar64;
            fVar65 = fVar72 * (fVar72 + fVar72);
            fVar71 = (fVar72 + fVar72) * fVar66;
            fVar67 = fVar68 * fVar72 - fVar70 * fVar66;
            fVar62 = fVar71 + fVar68 * fVar64;
            fVar63 = fVar7 - (fVar65 + fVar64 * fVar70);
            fVar40 = (float)*(ulonglong *)(pfVar14 + 8);
            fVar43 = (float)(*(ulonglong *)(pfVar14 + 8) >> 0x20);
            uStack_328 = CONCAT44(fVar37 * (fVar70 * fVar72 + fVar66 * fVar68),
                                  fVar37 * (fVar7 - (fVar64 * fVar70 + fVar36 * fVar68)));
            uStack_320 = (float *)CONCAT44(fVar37 * fVar67,fVar37 * fVar67);
            auStack_318._4_4_ = fVar40 * (fVar7 - (fVar36 * fVar68 + fVar65));
            auStack_318._0_4_ = fVar40 * (fVar70 * fVar72 - fVar66 * fVar68);
            uStack_310._0_4_ = fVar40 * fVar62;
            uStack_310._4_4_ = fVar40 * fVar62;
            uStack_308 = (byte *)CONCAT44(fVar43 * (fVar68 * fVar64 - fVar71),
                                          fVar43 * (fVar70 * fVar66 + fVar68 * fVar72));
            uStack_300 = (float *)CONCAT44(fVar43 * fVar63,fVar43 * fVar63);
            fStack_2ec = fStack_2f0;
            pdb_140e07fe0(&lStack_2c8,param_4);
            iVar10 = pdb_140315970(&uStack_1e0);
            uVar9 = pdb_1409012c0(pfStack_120[0x9d]);
            pfVar17 = (float *)(ulonglong)uVar9;
            pdb_140a77410(param_4);
            pfVar31 = (float *)(ulonglong)(uint)((int)fVar69 + iVar10);
            in_XMM1._8_8_ = uStack_2b0;
            in_XMM1._0_8_ = lStack_2b8;
            pbStack_258 = pbStack_2a8;
            uStack_268 = (undefined4)lStack_2b8;
            uStack_264 = (undefined4)((ulonglong)lStack_2b8 >> 0x20);
            uStack_260 = uStack_2b0;
            uStack_278 = lStack_2c8;
            fStack_270 = SUB84(pfStack_2c0,0);
            fStack_26c = (float)((ulonglong)pfStack_2c0 >> 0x20);
            lStack_238 = CONCAT44(uStack_2e4,uStack_2e8);
            uStack_230 = CONCAT44(iStack_2dc,uStack_2e0);
            auStack_250._8_4_ = 0;
            auStack_250._0_8_ = pfStack_2a0;
            auStack_250._12_4_ = (int)fVar69 + iVar10;
            uStack_240 = CONCAT44(1,uVar9);
            pdb_1413f6d90(&uStack_1a8,unaff_R15);
            pfVar14 = pfVar14 + 0x10;
          } while (pfVar14 != pfVar25);
        }
        if (pfStack_100 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_108,(longlong)pfStack_100 << 6,0x10);
        }
        pbVar23 = uStack_188 + 0x18;
        uStack_f1 = 0;
        pdb_140e9a350();
        LOCK();
        bVar35 = *pbVar23;
        if (bVar35 == 1) {
          *pbVar23 = 0;
        }
        UNLOCK();
        if (bVar35 != 1) {
          uStack_f1 = 0;
          pdb_142dbcef0(pbVar23,0);
        }
      }
      bVar35 = bStack_f6;
      in_stack_fffffffffffffbd8 = (ulonglong)bStack_f6;
      if (uStack_3b0 != 0) {
        uVar13 = uStack_3b0 * 8 + 0x17 & 0xfffffffffffffff0;
        uVar16 = uStack_3b0 + uVar13 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_3b8 - uVar13),uVar16,0x10);
        }
      }
      if (uStack_350 != 0) {
        uVar13 = uStack_350 * 8 + 0x17 & 0xfffffffffffffff0;
        uVar16 = uStack_350 + uVar13 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_358 - uVar13),uVar16,0x10);
        }
      }
      if (bVar35 == 0) {
        return;
      }
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] != '\x01') &&
         (plVar15 = (longlong *)pdb_142dd9610(plVar15,0), plVar15 == (longlong *)0x0)) break;
      if (*plVar15 == 0) {
        *plVar15 = -1;
        pfStack_108 = (float *)plVar15;
        pdb_140e95370(plVar15 + 1);
        *(longlong *)pfStack_108 = *(longlong *)pfStack_108 + 1;
        return;
      }
    }
    pfVar14 = (float *)pdb_142dc8090(&UNK_1433079b0);
LAB_14147c167:
    pfVar14 = (float *)pdb_142dd9610(pfVar14,0);
  } while (pfVar14 != (float *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_14147c186:
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143305b70);
LAB_14147b71c:
  if (lStack_208 != 0) {
    pub_1406abac0((byte *)pfStack_1f8,lStack_208 * 0x14,4);
  }
  if (uStack_328 != 0) {
    pub_1406abac0((byte *)pfStack_200,uStack_328 << 3,4);
  }
  if (uStack_310 != 0) {
    pub_1406abac0(pbStack_1d8,uStack_310 << 2,4);
  }
  pfVar31 = pfStack_360;
  if (pfStack_360 == pfStack_108) goto LAB_14147b797;
  goto LAB_14147a7c8;
}

