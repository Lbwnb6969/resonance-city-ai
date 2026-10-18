// VA 0x1408a8040, PDB extent 18736 bytes
// system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/calculate_distortion_from_structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/calculate_distortion_from_structural_graph.rs
   Extent: 18736 */

void pdb_1408a8040(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3,
                  longlong *param_4,undefined8 *param_5,longlong *param_6)

{
  byte *pbVar1;
  char *pcVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  char cVar23;
  uint uVar24;
  undefined4 uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  undefined8 uVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  undefined4 uVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined8 *puVar41;
  byte bVar42;
  undefined1 (*pauVar43) [16];
  longlong *plVar44;
  undefined1 (**ppauVar45) [16];
  ulonglong uVar46;
  undefined *puVar47;
  undefined *puVar48;
  ulonglong uVar49;
  longlong lVar50;
  ulonglong uVar51;
  ushort uVar52;
  ulonglong uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined *puVar56;
  undefined8 *puVar57;
  undefined *puVar58;
  undefined1 (*pauVar59) [16];
  byte bVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  int iVar80;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  int iVar107;
  int iVar108;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 (*pauVar109) [16];
  undefined1 (*pauVar110) [16];
  float fVar111;
  undefined1 (*pauStack_330) [16];
  char cStack_328;
  undefined2 uStack_327;
  undefined1 uStack_325;
  undefined1 (*pauStack_320) [16];
  uint uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined1 (**ppauStack_300) [16];
  undefined1 (**ppauStack_2f8) [16];
  uint uStack_2f0;
  undefined8 uStack_2e8;
  uint uStack_2e0;
  undefined1 (*pauStack_2d8) [16];
  char cStack_2d0;
  undefined2 uStack_2cf;
  undefined1 uStack_2cd;
  undefined8 *puStack_2c8;
  undefined1 (*pauStack_2c0) [16];
  undefined1 (**ppauStack_2b8) [16];
  undefined8 uStack_2b0;
  undefined1 (*pauStack_2a8) [16];
  undefined8 uStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  longlong lStack_288;
  undefined1 (*pauStack_280) [16];
  longlong lStack_260;
  byte *pbStack_258;
  longlong lStack_248;
  byte *pbStack_240;
  undefined1 (*pauStack_228) [16];
  uint uStack_220;
  undefined1 (*pauStack_218) [16];
  uint uStack_210;
  undefined8 uStack_208;
  undefined1 (*pauStack_200) [16];
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined2 uStack_1d8;
  undefined1 uStack_1d6;
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  longlong lStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  undefined8 uStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  undefined4 uStack_198;
  undefined8 *puStack_190;
  undefined1 (*pauStack_188) [16];
  undefined8 uStack_180;
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  char cStack_109;
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar30 = (undefined4 *)param_6[2];
  *puVar30 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_1b8 = *param_6;
  cStack_109 = pdb_140e94b40();
  if (cStack_109 == '\0') goto LAB_1408a8265;
  pauVar43 = (undefined1 (*) [16])0x8d;
  lVar26 = pdb_1408ac970(0x8d);
  puVar56 = &UNK_143014a30;
  if (lVar26 == 1) {
    if ((undefined4 *)0x8d < puVar30) {
      pdb_142dc8070(&UNK_143014a30,0x8d,0,puVar30,&UNK_143014b40);
LAB_1408ab522:
      pdb_142dc8070(&UNK_143014840,0x6d);
LAB_1408ab546:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar27 = pdb_1408ac970(puVar30);
    if ((uVar27 & 1) != 0) {
      if (0x8d < (longlong)puVar30 + 2U) {
        pdb_142dc8070(&UNK_143014a30,0x8d,(longlong)puVar30 + 2U,0x8d,&UNK_143014b58);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pauVar43 = (undefined1 (*) [16])(0x8b - (longlong)puVar30);
      puVar56 = &UNK_143014a32 + (longlong)puVar30;
    }
  }
  puVar47 = &UNK_1430148ad;
  puVar58 = &UNK_143014840;
  do {
    bVar42 = puVar47[-1];
    uVar24 = (uint)(char)bVar42;
    if ((char)bVar42 < '\0') {
      bVar60 = puVar47[-2];
      if ((char)bVar60 < -0x40) {
        bVar7 = puVar47[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar47 + -4;
          puVar47 = puVar47 + -4;
          uVar24 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar47 = puVar47 + -3;
          uVar24 = bVar7 & 0xf;
        }
        uVar24 = bVar60 & 0x3f | uVar24 << 6;
      }
      else {
        puVar47 = puVar47 + -2;
        uVar24 = bVar60 & 0x1f;
      }
      uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
      if (uVar24 != 0x5c) goto LAB_1408a81d4;
LAB_1408a81e5:
      puVar58 = puVar47 + -0x14301483f;
      if ((undefined *)0x6d < puVar58) {
        pdb_142dc8070(&UNK_143014840,0x6d,puVar58,0x6d,&UNK_143014b20);
LAB_1408ab48c:
        pdb_142dc8070(&UNK_143014840,0x6d);
        goto LAB_1408ab546;
      }
      plVar44 = (longlong *)(0x6d - (longlong)puVar58);
      puVar58 = puVar47 + 1;
      goto LAB_1408a8207;
    }
    puVar47 = puVar47 + -1;
    if (uVar24 == 0x5c) goto LAB_1408a81e5;
LAB_1408a81d4:
    if (uVar24 == 0x2f) goto LAB_1408a81e5;
  } while (puVar47 != &UNK_143014840);
  plVar44 = (undefined8 *)0x6d;
LAB_1408a8207:
  plVar28 = (longlong *)pdb_140e97000();
  if ((char)plVar28[0xd] != '\x01') goto LAB_1408ab1fb;
LAB_1408a8216:
  if (*plVar28 != 0) goto LAB_1408ab1ef;
  *plVar28 = -1;
  plStack_f8 = plVar28;
  uStack_2b0 = pdb_140e94f10(plVar28 + 1,puVar56,pauVar43,puVar58,plVar44,1,0);
  *plStack_f8 = *plStack_f8 + 1;
LAB_1408a8265:
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  plStack_f8 = (longlong *)*param_5;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  pauVar38 = (undefined1 (*) [16])*param_4;
  pdb_1409c5ff0(&uStack_208);
  if (uStack_208 != (undefined1 (**) [16])0x0) {
    lStack_118 = lStack_1f8;
    uStack_128 = uStack_208;
    uStack_120 = pauStack_200;
    cVar23 = pdb_140e94b40();
    pauStack_108 = (undefined1 (*) [16])CONCAT71(pauStack_108._1_7_,cVar23);
    pauStack_148 = param_1;
    if (cVar23 == '\0') {
      pauStack_1b0 = (undefined1 (*) [16])0x0;
    }
    else {
      puVar58 = &UNK_1430148ad;
      puVar56 = &UNK_143014840;
      do {
        bVar42 = puVar58[-1];
        uVar24 = (uint)(char)bVar42;
        if ((char)bVar42 < '\0') {
          bVar60 = puVar58[-2];
          if ((char)bVar60 < -0x40) {
            bVar7 = puVar58[-3];
            if ((char)bVar7 < -0x40) {
              pbVar1 = puVar58 + -4;
              puVar58 = puVar58 + -4;
              uVar24 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar58 = puVar58 + -3;
              uVar24 = bVar7 & 0xf;
            }
            uVar24 = bVar60 & 0x3f | uVar24 << 6;
          }
          else {
            puVar58 = puVar58 + -2;
            uVar24 = bVar60 & 0x1f;
          }
          uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
          if (uVar24 != 0x5c) goto LAB_1408a8364;
LAB_1408a837c:
          if ((undefined *)0x6d < puVar58 + -0x14301483f) goto LAB_1408ab522;
          lVar26 = 0x6d - (longlong)(puVar58 + -0x14301483f);
          puVar56 = puVar58 + 1;
          goto LAB_1408a839e;
        }
        puVar58 = puVar58 + -1;
        if (uVar24 == 0x5c) goto LAB_1408a837c;
LAB_1408a8364:
        if (uVar24 == 0x2f) goto LAB_1408a837c;
      } while (puVar58 != &UNK_143014840);
      lVar26 = 0x6d;
LAB_1408a839e:
      plVar44 = (longlong *)pdb_140e97000();
      if (((char)plVar44[0xd] != '\x01') &&
         (plVar44 = (longlong *)pdb_142dde6e0(plVar44,0), plVar44 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*plVar44 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *plVar44 = -1;
      pauVar38 = (undefined1 (*) [16])&UNK_1430148ad;
      pauStack_100 = (undefined1 (*) [16])plVar44;
      uStack_1a8 = (undefined1 (*) [16])
                   pdb_140e94f10(plVar44 + 1,&UNK_1430148ad,9,puVar56,lVar26,1,0);
      *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
      pauStack_1b0 = (undefined1 (*) [16])0x1;
      pauStack_140 = uStack_1a8;
    }
    pauVar33 = *(undefined1 (**) [16])uStack_120[3];
    pauStack_100 = uStack_120;
    lVar26 = *(longlong *)((longlong)uStack_120[4] + 8);
    auVar62 = *pauVar33;
    pauVar43 = pauVar33 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    while (lVar26 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar43;
          pauVar33 = pauVar33 + -0xc;
          pauVar43 = pauVar43 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar27 = (ulonglong)uVar54;
      uVar24 = uVar24 - 1 & uVar24;
      lVar26 = lVar26 + -1;
      uVar54 = *(uint *)((longlong)pauVar33 + uVar27 * -0xc + -4);
      if ((0x1a203U >> (uVar54 & 0x1f) & 1) != 0) {
        pauStack_2a8 = *(undefined1 (**) [16])((longlong)pauVar33 + uVar27 * -0xc + -0xc);
        uStack_2a0._0_3_ =
             CONCAT21(*(undefined2 *)((longlong)pauVar33 + uVar27 * -0xc + -3),(char)uVar54);
        uStack_2a0 = (undefined1 (*) [16])
                     CONCAT53(CONCAT41(uStack_2a0._4_4_,
                                       *(undefined1 *)((longlong)pauVar33 + uVar27 * -0xc + -1)),
                              (undefined3)uStack_2a0);
        pauVar38 = (undefined1 (*) [16])&pauStack_2a8;
        pdb_140c46780(plStack_f8);
      }
    }
    pauVar33 = *(undefined1 (**) [16])*pauStack_100;
    lVar26 = *(longlong *)((longlong)pauStack_100[1] + 8);
    auVar62 = *pauVar33;
    pauVar43 = pauVar33 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    while (lVar26 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar43;
          pauVar33 = pauVar33 + -0xc;
          pauVar43 = pauVar43 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar27 = (ulonglong)uVar54;
      uVar24 = uVar24 - 1 & uVar24;
      lVar26 = lVar26 + -1;
      uVar54 = *(uint *)((longlong)pauVar33 + uVar27 * -0xc + -4);
      if ((0x1a203U >> (uVar54 & 0x1f) & 1) != 0) {
        pauStack_2a8 = *(undefined1 (**) [16])((longlong)pauVar33 + uVar27 * -0xc + -0xc);
        uStack_2a0._0_3_ =
             CONCAT21(*(undefined2 *)((longlong)pauVar33 + uVar27 * -0xc + -3),(char)uVar54);
        uStack_2a0 = (undefined1 (*) [16])
                     CONCAT53(CONCAT41(uStack_2a0._4_4_,
                                       *(undefined1 *)((longlong)pauVar33 + uVar27 * -0xc + -1)),
                              (undefined3)uStack_2a0);
        pauVar38 = (undefined1 (*) [16])&pauStack_2a8;
        pdb_140c469d0(plStack_f8);
      }
    }
    pauVar33 = *(undefined1 (**) [16])*pauStack_100;
    lVar26 = *(longlong *)((longlong)pauStack_100[1] + 8);
    auVar62 = *pauVar33;
    pauVar43 = pauVar33 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    uVar8 = *(undefined8 *)*pauStack_148;
    while (lVar26 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar43;
          pauVar33 = pauVar33 + -0xc;
          pauVar43 = pauVar43 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar27 = (ulonglong)uVar54;
      uVar24 = uVar24 - 1 & uVar24;
      lVar26 = lVar26 + -1;
      puVar29 = (undefined8 *)((longlong)pauVar33 + uVar27 * -0xc + -0xc);
      uStack_318 = *(uint *)((longlong)pauVar33 + uVar27 * -0xc + -4);
      pauStack_320 = *(undefined1 (**) [16])((longlong)pauVar33 + uVar27 * -0xc + -0xc);
      if ((0xa203U >> (uStack_318 & 0x1f) & 1) == 0) {
        pauVar38 = pauStack_320;
        if ((char)uStack_318 == '\x10') {
          uStack_2a0._0_4_ = *(undefined4 *)((longlong)pauVar33 + uVar27 * -0xc + -4);
          pauStack_2a8 = (undefined1 (*) [16])*puVar29;
          puVar30 = (undefined4 *)pdb_1409f93a0(uVar8,&pauStack_2a8);
          if (puVar30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430148b8);
          }
          uVar37 = *puVar30;
          uVar25 = pdb_1409012c0(puVar30[1] | 1,uVar37);
          uVar31 = pdb_1409ef0f0(uVar8,uVar25,uVar37);
          pdb_1406ccf20(&pauStack_188,uVar31);
          if ((char)pauStack_188 != '\x10') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1430148d0,0x28,&UNK_1430148f8);
          }
          pauStack_1d0 = uStack_180;
          pauStack_2a8 = (undefined1 (*) [16])&pauStack_1d0;
          pauStack_298 = pauStack_100;
          uStack_220 = uStack_318;
          pauStack_228 = pauStack_320;
          pauVar38 = (undefined1 (*) [16])&pauStack_228;
          uStack_2a0 = (undefined1 (*) [16])&pauStack_320;
          pdb_1414e9eb0(uVar8,pauVar38,0x1a203,&pauStack_2a8,plStack_f8,
                        (undefined1 (*) [16])&pauStack_320);
        }
      }
      else {
        uStack_2a0 = (undefined1 (*) [16])
                     CONCAT44(uStack_2a0._4_4_,
                              *(undefined4 *)((longlong)pauVar33 + uVar27 * -0xc + -4));
        pauStack_2a8 = (undefined1 (*) [16])*puVar29;
        pauVar38 = (undefined1 (*) [16])&pauStack_2a8;
        pdb_1414e9b90(uVar8,pauVar38,0x10000,(undefined1 (*) [16])&pauStack_320,pauStack_100,
                      plStack_f8,(undefined1 (*) [16])&pauStack_320);
      }
    }
    if ((char)pauStack_108 != '\0') {
      pauVar43 = (undefined1 (*) [16])pdb_140e97000();
      if ((*(char *)((longlong)pauVar43[6] + 8) != '\x01') &&
         (pauVar43 = (undefined1 (*) [16])pdb_142dde6e0(pauVar43,0),
         pauVar43 == (undefined1 (*) [16])0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*(longlong *)*pauVar43 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *(undefined8 *)*pauVar43 = 0xffffffffffffffff;
      pauVar38 = pauStack_140;
      pauStack_100 = pauVar43;
      pdb_140e95370((undefined8 *)((longlong)*pauVar43 + 8));
      *(longlong *)*pauStack_100 = *(longlong *)*pauStack_100 + 1;
    }
    ppauVar45 = uStack_128;
    pdb_140e9a350(uStack_128);
    pdb_140e9a350((ulonglong)ppauVar45 | 1);
    LOCK();
    pauVar43 = *ppauVar45;
    *ppauVar45 = *ppauVar45 + -1;
    UNLOCK();
    if (((ulonglong)pauVar43 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(ppauVar45);
    }
    lVar26 = lStack_118;
    lStack_118 = 0;
    pauStack_2a8 = (undefined1 (*) [16])(lVar26 + -0x10);
    LOCK();
    plVar44 = (longlong *)(lVar26 + -0x10);
    *plVar44 = *plVar44 + -1;
    UNLOCK();
    if (*plVar44 == 0) {
      pdb_140c7af60(&pauStack_2a8);
    }
  }
  pauStack_1c0 = (undefined1 (*) [16])(plStack_f8 + 0x2a);
  lVar26 = plStack_f8[0x2d];
  if (lVar26 != 0) {
    pauVar33 = *(undefined1 (**) [16])*pauStack_1c0;
    auVar62 = *pauVar33;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    pauVar43 = pauVar33 + 1;
    do {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar43;
          pauVar33 = pauVar33 + -0xc;
          pauVar43 = pauVar43 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      pauVar39 = (undefined1 (*) [16])((longlong)pauVar33 + (ulonglong)uVar54 * -0xc);
      if (*(char *)((longlong)pauVar33 + (ulonglong)uVar54 * -0xc + -4) == '\x10') {
        uStack_2a0 = (undefined1 (*) [16])
                     CONCAT44(uStack_2a0._4_4_,*(undefined4 *)((longlong)pauVar39[-1] + 0xc));
        pauStack_2a8 = *(undefined1 (**) [16])((longlong)pauVar39[-1] + 4);
        pauVar38 = (undefined1 (*) [16])&pauStack_2a8;
        lVar32 = pdb_1414b7a60(plStack_f8);
        if (lVar32 != 1) goto LAB_1408a8820;
      }
      else {
LAB_1408a8820:
        pdb_1414ae960(pauStack_1c0);
        pauVar38 = pauVar39;
      }
      uVar24 = uVar24 - 1 & uVar24;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  cVar23 = pdb_140e94b40();
  if (cVar23 == '\0') {
    ppauVar45 = (undefined1 (**) [16])0x0;
    plVar28 = plStack_f8;
    goto LAB_1408a89fb;
  }
  puVar56 = &UNK_1430148ad;
  plVar44 = (longlong *)&UNK_143014840;
  do {
    bVar42 = puVar56[-1];
    uVar24 = (uint)(char)bVar42;
    if ((char)bVar42 < '\0') {
      bVar60 = puVar56[-2];
      if ((char)bVar60 < -0x40) {
        bVar7 = puVar56[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar56 + -4;
          puVar56 = puVar56 + -4;
          uVar24 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar56 = puVar56 + -3;
          uVar24 = bVar7 & 0xf;
        }
        uVar24 = bVar60 & 0x3f | uVar24 << 6;
      }
      else {
        puVar56 = puVar56 + -2;
        uVar24 = bVar60 & 0x1f;
      }
      uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
      if (uVar24 != 0x5c) goto LAB_1408a8944;
LAB_1408a8963:
      if ((undefined *)0x6d < puVar56 + -0x14301483f) goto LAB_1408ab48c;
      pauVar43 = (undefined1 (*) [16])(0x6d - (longlong)(puVar56 + -0x14301483f));
      plVar44 = (longlong *)(puVar56 + 1);
      goto LAB_1408a8985;
    }
    puVar56 = puVar56 + -1;
    if (uVar24 == 0x5c) goto LAB_1408a8963;
LAB_1408a8944:
    if (uVar24 == 0x2f) goto LAB_1408a8963;
  } while (puVar56 != &UNK_143014840);
  pauVar43 = (undefined1 (*) [16])0x6d;
LAB_1408a8985:
  pauVar33 = (undefined1 (*) [16])pdb_140e97000();
  if (*(char *)((longlong)pauVar33[6] + 8) != '\x01') goto LAB_1408ab21b;
  do {
    plVar28 = plStack_f8;
    if (*(longlong *)*pauVar33 != 0) {
      pdb_142dc8090(&UNK_14330e608);
      goto LAB_1408ab546;
    }
    *(undefined8 *)*pauVar33 = 0xffffffffffffffff;
    pauVar38 = (undefined1 (*) [16])&UNK_143014910;
    pauStack_100 = pauVar33;
    uStack_120 = (undefined1 (*) [16])
                 pdb_140e94f10((undefined8 *)((longlong)*pauVar33 + 8),&UNK_143014910,0xf,plVar44,
                               pauVar43,1,0);
    *(longlong *)*pauStack_100 = *(longlong *)*pauStack_100 + 1;
    ppauVar45 = (undefined1 (**) [16])0x1;
LAB_1408a89fb:
    ppauStack_300 = ppauVar45;
    uStack_128 = ppauVar45;
    plVar44 = (longlong *)pdb_140f3bda0();
    if ((char)plVar44[2] == '\x01') {
      lVar26 = *plVar44;
      pauVar43 = (undefined1 (*) [16])plVar44[1];
    }
    else {
      ppauStack_300 = ppauVar45;
      lVar26 = pdb_140f4fd10();
      *plVar44 = lVar26;
      plVar44[1] = (longlong)pauVar38;
      *(undefined1 *)(plVar44 + 2) = 1;
      pauVar43 = pauVar38;
    }
    *plVar44 = lVar26 + 1;
    pauStack_100 = (undefined1 (*) [16])&UNK_1430149a0;
    puStack_308 = &UNK_1430149a0;
    uStack_310 = 0;
    ppauStack_2b8 = ppauVar45;
    plVar44 = (longlong *)pdb_140f3bda0();
    if ((char)plVar44[2] == '\x01') {
      lStack_288 = *plVar44;
      pauVar38 = (undefined1 (*) [16])plVar44[1];
    }
    else {
      puStack_308 = &UNK_1430149a0;
      uStack_310 = 0;
      lStack_288 = pdb_140f4fd10();
      *plVar44 = lStack_288;
      plVar44[1] = (longlong)pauVar38;
      *(undefined1 *)(plVar44 + 2) = 1;
    }
    *plVar44 = lStack_288 + 1;
    pauVar20 = _UNK_1430149c8;
    pauVar19 = _DAT_1430149c0;
    pauVar39 = _UNK_1430149b8;
    pauVar33 = _DAT_1430149b0;
    fVar14 = _DAT_143014724;
    fVar13 = _DAT_142e36f28;
    pauStack_298 = _DAT_1430149c0;
    pauStack_290 = _UNK_1430149c8;
    pauStack_2a8 = _DAT_1430149b0;
    uStack_2a0 = _UNK_1430149b8;
    puStack_2c8 = plVar28 + 0x1e;
    puVar29 = plVar28 + 0x24;
    pauStack_150 = (undefined1 (*) [16])(plVar28 + 0x28);
    puStack_190 = plVar28 + 7;
    pauStack_140 = (undefined1 (*) [16])(plVar28 + 0x2e);
    pauVar36 = (undefined1 (*) [16])0x0;
    pauStack_108 = (undefined1 (*) [16])0x0;
    pauVar40 = (undefined1 (*) [16])&UNK_1430149a0;
    pauVar55 = (undefined1 (*) [16])plVar28[0x2a];
    pauVar59 = (undefined1 (*) [16])plVar28[0x2d];
    pauVar109 = (undefined1 (*) [16])0x0;
    pauVar110 = (undefined1 (*) [16])0x0;
    pauStack_280 = pauVar38;
LAB_1408a8b5c:
    auVar62 = *pauVar55;
    pauVar38 = pauVar55 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    pauStack_2c0 = pauVar43;
    lStack_1f0 = lVar26;
    pauStack_1e8 = pauVar36;
LAB_1408a8b9e:
    while (pauVar43 = pauStack_280, lVar26 = lStack_288, pauVar36 = pauStack_290,
          pauVar22 = pauStack_298, pauVar21 = uStack_2a0, ppauVar45 = ppauStack_2b8,
          pauVar59 != (undefined1 (*) [16])0x0) {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar38;
          pauVar55 = pauVar55 + -0xc;
          pauVar38 = pauVar38 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar27 = (ulonglong)uVar54;
      uStack_210 = *(uint *)((longlong)pauVar55 + uVar27 * -0xc + -4);
      pauStack_218 = *(undefined1 (**) [16])((longlong)pauVar55 + uVar27 * -0xc + -0xc);
      if ((char)uStack_210 == '\x10') {
        uStack_180 = (undefined1 (*) [16])
                     CONCAT44(uStack_180._4_4_,
                              *(undefined4 *)((longlong)pauVar55 + uVar27 * -0xc + -4));
        pauStack_188 = *(undefined1 (**) [16])((longlong)pauVar55 + uVar27 * -0xc + -0xc);
        pauStack_130 = pauStack_100;
        pauStack_138 = pauStack_108;
        pdb_1414b4250(puStack_2c8,&pauStack_188);
        plVar28 = plStack_f8;
      }
      uVar24 = uVar24 - 1 & uVar24;
      pauVar43 = pauVar59 + -1;
      pauVar59 = (undefined1 (*) [16])(*pauVar43 + 0xf);
      if (plVar28[0x27] != 0) {
        pauStack_130 = pauStack_100;
        pauStack_138 = pauStack_108;
        pauStack_1c8 = (undefined1 (*) [16])(*pauVar43 + 0xf);
        uVar27 = pdb_14148b1b0(pauStack_150,&pauStack_218);
        bVar42 = (byte)(uVar27 >> 0x39);
        auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar62 = pshuflw(auVar62,auVar62,0);
        lVar26 = 0;
        while( true ) {
          uVar27 = uVar27 & plStack_f8[0x25];
          auVar82 = *(undefined1 (*) [16])(plStack_f8[0x24] + uVar27);
          auVar101[0] = -(auVar82[0] == auVar62[0]);
          auVar101[1] = -(auVar82[1] == auVar62[1]);
          auVar101[2] = -(auVar82[2] == auVar62[2]);
          auVar101[3] = -(auVar82[3] == auVar62[3]);
          auVar101[4] = -(auVar82[4] == auVar62[4]);
          auVar101[5] = -(auVar82[5] == auVar62[5]);
          auVar101[6] = -(auVar82[6] == auVar62[6]);
          auVar101[7] = -(auVar82[7] == auVar62[7]);
          auVar101[8] = -(auVar82[8] == auVar62[0]);
          auVar101[9] = -(auVar82[9] == auVar62[1]);
          auVar101[10] = -(auVar82[10] == auVar62[2]);
          auVar101[0xb] = -(auVar82[0xb] == auVar62[3]);
          auVar101[0xc] = -(auVar82[0xc] == auVar62[4]);
          auVar101[0xd] = -(auVar82[0xd] == auVar62[5]);
          auVar101[0xe] = -(auVar82[0xe] == auVar62[6]);
          auVar101[0xf] = -(auVar82[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar101 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar101 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar101 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar101 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar101 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar101 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar101 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar101 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar101 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar101 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar101 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar101 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar101 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar101 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar101 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar101[0xf] >> 7) << 0xf;
          uVar54 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar46 = uVar10 + uVar27 & plStack_f8[0x25];
            lVar32 = plStack_f8[0x24] + uVar46 * -0x10;
            if ((char)uStack_210 == *(char *)(lVar32 + -8)) {
              auVar102._0_4_ = -(uint)((int)*(undefined8 *)(lVar32 + -0x10) == (int)pauStack_218);
              iVar80 = (int)((ulonglong)pauStack_218 >> 0x20);
              iVar107 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar32 + -0x10) >> 0x20) == iVar80)
              ;
              auVar102._4_4_ = auVar102._0_4_;
              auVar102._8_4_ = iVar107;
              auVar102._12_4_ = iVar107;
              iVar107 = movmskpd((int)uVar46 * 0x10,auVar102);
              if (iVar107 == 3) {
                fVar111 = *(float *)(lVar32 + -4) + fVar14;
                if (fVar13 <= fVar111) {
                  fVar111 = fVar13;
                }
                uStack_180 = (undefined1 (*) [16])CONCAT44(uStack_180._4_4_,uStack_210);
                pauStack_188 = pauStack_218;
                uVar27 = plStack_f8[2];
                pauStack_148 = (undefined1 (*) [16])0x4;
                if (uVar27 == 0) {
                  pauVar43 = (undefined1 (*) [16])0x4;
                  goto LAB_1408a8f50;
                }
                if (uVar27 == 1) {
                  lVar26 = plStack_f8[1];
                  if ((char)uStack_210 != *(char *)(lVar26 + 0x28)) {
                    pauVar43 = (undefined1 (*) [16])0x4;
                    goto LAB_1408a8f50;
                  }
                  iVar107 = -(uint)((int)*(undefined8 *)(lVar26 + 0x20) == (int)pauStack_218);
                  iVar80 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) ==
                                  iVar80);
                  auVar62._4_4_ = iVar107;
                  auVar62._0_4_ = iVar107;
                  auVar62._8_4_ = iVar80;
                  auVar62._12_4_ = iVar80;
                  iVar107 = movmskpd(uStack_210 & 0xff,auVar62);
                  pauVar43 = (undefined1 (*) [16])0x4;
                  if (iVar107 != 3) goto LAB_1408a8f50;
                  uVar46 = 0;
                }
                else {
                  pauStack_130 = pauStack_100;
                  pauStack_138 = pauStack_108;
                  uVar46 = pdb_14148b1b0(puStack_190,&pauStack_188);
                  pauStack_130 = pauStack_100;
                  pauStack_138 = pauStack_108;
                  uVar34 = pdb_1414af820(plStack_f8,uVar46,&pauStack_188);
                  if ((uVar34 & 1) == 0) {
                    pauVar43 = (undefined1 (*) [16])0x4;
                    goto LAB_1408a8f50;
                  }
                  if (uVar27 <= uVar46) {
                    pauStack_130 = pauStack_100;
                    pauStack_138 = pauStack_108;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar46,uVar27,&UNK_143311df8);
                  }
                  lVar26 = plStack_f8[1];
                  pauVar43 = (undefined1 (*) [16])0x4;
                  if (lVar26 == 0) goto LAB_1408a8f50;
                }
                pauVar43 = *(undefined1 (**) [16])(lVar26 + 8 + uVar46 * 0x30);
                pauStack_148 = pauVar43 + *(longlong *)(lVar26 + 0x10 + uVar46 * 0x30);
                goto LAB_1408a8f50;
              }
            }
            uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
            uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
          }
          auVar81[0] = -(auVar82[0] == -1);
          auVar81[1] = -(auVar82[1] == -1);
          auVar81[2] = -(auVar82[2] == -1);
          auVar81[3] = -(auVar82[3] == -1);
          auVar81[4] = -(auVar82[4] == -1);
          auVar81[5] = -(auVar82[5] == -1);
          auVar81[6] = -(auVar82[6] == -1);
          auVar81[7] = -(auVar82[7] == -1);
          auVar81[8] = -(auVar82[8] == -1);
          auVar81[9] = -(auVar82[9] == -1);
          auVar81[10] = -(auVar82[10] == -1);
          auVar81[0xb] = -(auVar82[0xb] == -1);
          auVar81[0xc] = -(auVar82[0xc] == -1);
          auVar81[0xd] = -(auVar82[0xd] == -1);
          auVar81[0xe] = -(auVar82[0xe] == -1);
          auVar81[0xf] = -(auVar82[0xf] == -1);
          plVar28 = plStack_f8;
          pauVar59 = pauStack_1c8;
          if ((((((((((((((((SUB161(auVar81 >> 7,0) & 1) != 0 || (SUB161(auVar81 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar81 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar81 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar81 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar81 >> 0x2f,0) & 1) != 0) || (SUB161(auVar81 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar81 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar81 >> 0x47,0) & 1) != 0) || (SUB161(auVar81 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar81 >> 0x57,0) & 1) != 0) || (SUB161(auVar81 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar81 >> 0x67,0) & 1) != 0) || (SUB161(auVar81 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar81 >> 0x77,0) & 1) != 0) || auVar81[0xf] < '\0') break;
          uVar27 = lVar26 + 0x10 + uVar27;
          lVar26 = lVar26 + 0x10;
        }
      }
    }
    if (pauStack_290 != (undefined1 (*) [16])0x0) {
      pauStack_108 = uStack_2a0;
      pauStack_290 = pauStack_1e8;
      lStack_288 = lStack_1f0;
      pauStack_280 = pauStack_2c0;
      pauStack_100 = pauStack_2a8;
      auVar62 = *pauStack_2a8;
      pauVar38 = (undefined1 (*) [16])((ulonglong)(*pauVar36 + 1) >> 1);
      if (plVar28[0x2d] == 0) {
        pauVar38 = pauVar36;
      }
      pauStack_298 = pauVar110;
      if ((undefined1 (*) [16])plVar28[0x2c] < pauVar38) {
        pauStack_130 = pauStack_2a8;
        pauStack_138 = uStack_2a0;
        pauStack_2a8 = pauVar40;
        uStack_2a0 = pauVar109;
        pdb_142d9f280(pauStack_1c0,pauVar38,pauStack_140,1);
        pauVar40 = pauStack_2a8;
        pauVar109 = uStack_2a0;
      }
      uStack_2a0 = pauVar109;
      pauStack_2a8 = pauVar40;
      pauStack_178 = (undefined1 (*) [16])
                     ((longlong)*pauStack_108 + (longlong)((longlong)*pauStack_100 + 1));
      uStack_180 = pauStack_100 + 1;
      pauStack_1b0 = pauStack_1c0;
      uStack_208 = &pauStack_1b0;
      pauStack_188 = pauStack_100;
      pauStack_170 = (undefined1 (*) [16])
                     CONCAT62(pauStack_170._2_6_,
                              ~((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar62[0xf] >> 7) << 0xf));
      pauStack_130 = pauStack_100;
      pauStack_138 = pauStack_108;
      pdb_1414adc50(&pauStack_188,pauVar36,&uStack_208);
      plVar28 = plStack_f8;
      pauVar38 = uStack_2a0;
      pauVar40 = pauStack_100;
      pauVar55 = pauStack_100;
      pauVar59 = pauVar36;
      pauVar109 = pauVar21;
      pauVar110 = pauVar22;
      if (pauStack_290 != (undefined1 (*) [16])0x0) {
        if (uStack_2a0 == (undefined1 (*) [16])0x0) {
          pauStack_298 = (undefined1 (*) [16])0x0;
        }
        else {
          pub_142e32780(pauStack_2a8,0xff,(undefined *)((longlong)uStack_2a0[1] + 1));
          puVar56 = (undefined *)((longlong)*pauVar38 + 1);
          pauStack_298 = (undefined1 (*) [16])
                         (((ulonglong)puVar56 & 0xfffffffffffffff8) - ((ulonglong)puVar56 >> 3));
          if (pauVar38 < (undefined1 (*) [16])0x8) {
            pauStack_298 = pauVar38;
          }
        }
        pauStack_290 = (undefined1 (*) [16])0x0;
        pauVar40 = pauStack_100;
        pauVar55 = pauStack_100;
      }
      goto LAB_1408a8b5c;
    }
    if (uStack_2a0 != (undefined1 (*) [16])0x0) {
      uVar27 = (longlong)uStack_2a0 * 0xc + 0x1bU & 0xfffffffffffffff0;
      puVar56 = (undefined *)((longlong)uStack_2a0[1] + uVar27 + 1);
      if (puVar56 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_2a8 - uVar27),(ulonglong)puVar56,0x10);
      }
    }
    if (pauStack_108 != (undefined1 (*) [16])0x0) {
      uVar27 = (longlong)pauStack_108 * 0xc + 0x1bU & 0xfffffffffffffff0;
      puVar56 = (undefined *)((longlong)pauStack_108[1] + uVar27 + 1);
      if (puVar56 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_100 - uVar27),(ulonglong)puVar56,0x10);
        ppauVar45 = uStack_128;
      }
    }
    if (ppauVar45 != (undefined1 (**) [16])0x0) {
      pauVar43 = (undefined1 (*) [16])pdb_140e97000();
      if ((*(char *)((longlong)pauVar43[6] + 8) != '\x01') &&
         (pauVar43 = (undefined1 (*) [16])pdb_142dde6e0(pauVar43,0),
         pauVar43 == (undefined1 (*) [16])0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*(longlong *)*pauVar43 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *(undefined8 *)*pauVar43 = 0xffffffffffffffff;
      pauStack_100 = pauVar43;
      pdb_140e95370((undefined8 *)((longlong)*pauVar43 + 8),uStack_120);
      *(longlong *)*pauStack_100 = *(longlong *)*pauStack_100 + 1;
    }
    plVar44 = (longlong *)pdb_14008d710(0);
    if (plVar44 == (longlong *)0x0) {
      pdb_142dc7890(&UNK_14330e598);
      goto LAB_1408ab546;
    }
    lVar26 = *plVar44;
    *plVar44 = lVar26 + 1;
    pdb_1414ed520(&pauStack_2a8,0,lVar26,plVar44[1]);
    uVar27 = _DAT_142e37820;
    pauVar38 = (undefined1 (*) [16])plStack_f8[0x2a];
    auVar62 = *pauVar38;
    pauVar43 = pauVar38 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    pauStack_100 = (undefined1 (*) [16])(plStack_f8 + 0x22);
    pauVar36 = (undefined1 (*) [16])plStack_f8[0x2d];
LAB_1408a952e:
    pauVar40 = (undefined1 (*) [16])((longlong)pauVar36[-1] + 0xf);
    if (pauVar36 != (undefined1 (*) [16])0x0) {
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar43;
          pauVar38 = pauVar38 + -0xc;
          pauVar43 = pauVar43 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uStack_2e0 = *(uint *)((longlong)pauVar38 + (ulonglong)uVar54 * -0xc + -4);
      uStack_2e8 = *(undefined8 *)((longlong)pauVar38 + (ulonglong)uVar54 * -0xc + -0xc);
      uVar46 = plStack_f8[2];
      puVar41 = (undefined8 *)0x4;
      pauStack_108 = pauVar40;
      if (uVar46 == 0) {
LAB_1408a9650:
        puVar57 = (undefined8 *)0x4;
      }
      else if (uVar46 == 1) {
        lVar26 = plStack_f8[1];
        if ((char)uStack_2e0 != *(char *)(lVar26 + 0x28)) goto LAB_1408a9650;
        iVar107 = -(uint)((int)*(undefined8 *)(lVar26 + 0x20) == (int)uStack_2e8);
        iVar80 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) ==
                        (int)((ulonglong)uStack_2e8 >> 0x20));
        auVar63._4_4_ = iVar107;
        auVar63._0_4_ = iVar107;
        auVar63._8_4_ = iVar80;
        auVar63._12_4_ = iVar80;
        iVar107 = movmskpd(uStack_2e0 & 0xff,auVar63);
        puVar57 = (undefined8 *)0x4;
        if (iVar107 == 3) {
          uVar34 = 0;
LAB_1408a9628:
          puVar57 = *(undefined8 **)(lVar26 + 8 + uVar34 * 0x30);
          puVar41 = puVar57 + *(longlong *)(lVar26 + 0x10 + uVar34 * 0x30) * 2;
        }
      }
      else {
        uVar34 = pdb_14148b1b0(puStack_190,&uStack_2e8);
        uVar35 = pdb_1414af820(plStack_f8);
        if ((uVar35 & 1) == 0) goto LAB_1408a9650;
        if (uVar46 <= uVar34) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar34,uVar46,&UNK_143311df8);
        }
        lVar26 = plStack_f8[1];
        puVar57 = (undefined8 *)0x4;
        if (lVar26 != 0) goto LAB_1408a9628;
      }
      uVar24 = uVar24 - 1 & uVar24;
      for (; pauVar36 = pauStack_108, puVar57 != puVar41; puVar57 = puVar57 + 2) {
        pauVar40 = (undefined1 (*) [16])*puVar57;
        cVar23 = *(char *)(puVar57 + 1);
        uStack_128 = (undefined1 (**) [16])
                     CONCAT62(CONCAT51(uStack_128._3_5_,*(undefined1 *)((longlong)puVar57 + 0xb)),
                              *(undefined2 *)((longlong)puVar57 + 9));
        if (cVar23 == '\x11') break;
        uStack_327 = *(undefined2 *)((longlong)puVar57 + 9);
        uStack_325 = *(undefined1 *)((longlong)puVar57 + 0xb);
        pauStack_330 = pauVar40;
        cStack_328 = cVar23;
        if (cVar23 == '\x10') {
          iVar107 = (int)((ulonglong)pauVar40 >> 0x20);
          if (plStack_f8[0x2d] != 0) {
            uVar46 = pdb_14148b1b0(pauStack_140,&pauStack_330);
            lVar26 = plStack_f8[0x2a];
            bVar42 = (byte)(uVar46 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar62 = pshuflw(auVar62,auVar62,0);
            lVar32 = 0;
            while( true ) {
              uVar46 = uVar46 & plStack_f8[0x2b];
              pcVar2 = (char *)(lVar26 + uVar46);
              auVar85[0] = -(*pcVar2 == auVar62[0]);
              auVar85[1] = -(pcVar2[1] == auVar62[1]);
              auVar85[2] = -(pcVar2[2] == auVar62[2]);
              auVar85[3] = -(pcVar2[3] == auVar62[3]);
              auVar85[4] = -(pcVar2[4] == auVar62[4]);
              auVar85[5] = -(pcVar2[5] == auVar62[5]);
              auVar85[6] = -(pcVar2[6] == auVar62[6]);
              auVar85[7] = -(pcVar2[7] == auVar62[7]);
              auVar85[8] = -(pcVar2[8] == auVar62[0]);
              auVar85[9] = -(pcVar2[9] == auVar62[1]);
              auVar85[10] = -(pcVar2[10] == auVar62[2]);
              auVar85[0xb] = -(pcVar2[0xb] == auVar62[3]);
              auVar85[0xc] = -(pcVar2[0xc] == auVar62[4]);
              auVar85[0xd] = -(pcVar2[0xd] == auVar62[5]);
              auVar85[0xe] = -(pcVar2[0xe] == auVar62[6]);
              auVar85[0xf] = -(pcVar2[0xf] == auVar62[7]);
              uVar52 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar85[0xf] >> 7) << 0xf;
              uVar54 = (uint)uVar52;
              while (uVar52 != 0) {
                uVar10 = 0;
                for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                  uVar10 = uVar10 + 1;
                }
                uVar34 = uVar10 + uVar46 & plStack_f8[0x2b];
                if (((*(char *)(lVar26 + -4 + uVar34 * -0xc) == '\x10') &&
                    (lVar50 = lVar26 + uVar34 * -0xc, *(int *)(lVar50 + -0xc) == (int)pauVar40)) &&
                   (*(int *)(lVar50 + -8) == iVar107)) goto LAB_1408a969c;
                uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
                uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
              }
              auVar69[0] = -(*pcVar2 == -1);
              auVar69[1] = -(pcVar2[1] == -1);
              auVar69[2] = -(pcVar2[2] == -1);
              auVar69[3] = -(pcVar2[3] == -1);
              auVar69[4] = -(pcVar2[4] == -1);
              auVar69[5] = -(pcVar2[5] == -1);
              auVar69[6] = -(pcVar2[6] == -1);
              auVar69[7] = -(pcVar2[7] == -1);
              auVar69[8] = -(pcVar2[8] == -1);
              auVar69[9] = -(pcVar2[9] == -1);
              auVar69[10] = -(pcVar2[10] == -1);
              auVar69[0xb] = -(pcVar2[0xb] == -1);
              auVar69[0xc] = -(pcVar2[0xc] == -1);
              auVar69[0xd] = -(pcVar2[0xd] == -1);
              auVar69[0xe] = -(pcVar2[0xe] == -1);
              auVar69[0xf] = -(pcVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar69 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x4f,0) & 1) != 0) || (SUB161(auVar69 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar69 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar69 >> 0x67,0) & 1) != 0) || (SUB161(auVar69 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0') break;
              uVar46 = uVar46 + lVar32 + 0x10;
              lVar32 = lVar32 + 0x10;
            }
          }
          if (plStack_f8[0x21] != 0) {
            uVar46 = pdb_14148b1b0(pauStack_100,&pauStack_330);
            bVar42 = (byte)(uVar46 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar62 = pshuflw(auVar62,auVar62,0);
            lVar26 = 0;
            while( true ) {
              uVar46 = uVar46 & plStack_f8[0x1f];
              auVar82 = *(undefined1 (*) [16])(plStack_f8[0x1e] + uVar46);
              auVar86[0] = -(auVar82[0] == auVar62[0]);
              auVar86[1] = -(auVar82[1] == auVar62[1]);
              auVar86[2] = -(auVar82[2] == auVar62[2]);
              auVar86[3] = -(auVar82[3] == auVar62[3]);
              auVar86[4] = -(auVar82[4] == auVar62[4]);
              auVar86[5] = -(auVar82[5] == auVar62[5]);
              auVar86[6] = -(auVar82[6] == auVar62[6]);
              auVar86[7] = -(auVar82[7] == auVar62[7]);
              auVar86[8] = -(auVar82[8] == auVar62[0]);
              auVar86[9] = -(auVar82[9] == auVar62[1]);
              auVar86[10] = -(auVar82[10] == auVar62[2]);
              auVar86[0xb] = -(auVar82[0xb] == auVar62[3]);
              auVar86[0xc] = -(auVar82[0xc] == auVar62[4]);
              auVar86[0xd] = -(auVar82[0xd] == auVar62[5]);
              auVar86[0xe] = -(auVar82[0xe] == auVar62[6]);
              auVar86[0xf] = -(auVar82[0xf] == auVar62[7]);
              uVar52 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar86[0xf] >> 7) << 0xf;
              uVar54 = (uint)uVar52;
              while (uVar52 != 0) {
                uVar10 = 0;
                for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                  uVar10 = uVar10 + 1;
                }
                lVar32 = plStack_f8[0x1e] + (uVar10 + uVar46 & plStack_f8[0x1f]) * -0x10;
                if (((*(char *)(lVar32 + -8) == '\x10') &&
                    (*(int *)(lVar32 + -0x10) == (int)pauVar40)) &&
                   (*(int *)(lVar32 + -0xc) == iVar107)) {
                  uStack_180._0_3_ = CONCAT21((undefined2)uStack_128,0x10);
                  uStack_180 = (undefined1 (*) [16])
                               CONCAT53(CONCAT41(uStack_180._4_4_,uStack_128._2_1_),
                                        (undefined3)uStack_180);
                  pauStack_188 = pauVar40;
                  pdb_1414ed100(&pauStack_2a8,&pauStack_188,*(uint *)(lVar32 + -4) ^ uVar27);
                  goto LAB_1408a969c;
                }
                uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
                uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
              }
              auVar70[0] = -(auVar82[0] == -1);
              auVar70[1] = -(auVar82[1] == -1);
              auVar70[2] = -(auVar82[2] == -1);
              auVar70[3] = -(auVar82[3] == -1);
              auVar70[4] = -(auVar82[4] == -1);
              auVar70[5] = -(auVar82[5] == -1);
              auVar70[6] = -(auVar82[6] == -1);
              auVar70[7] = -(auVar82[7] == -1);
              auVar70[8] = -(auVar82[8] == -1);
              auVar70[9] = -(auVar82[9] == -1);
              auVar70[10] = -(auVar82[10] == -1);
              auVar70[0xb] = -(auVar82[0xb] == -1);
              auVar70[0xc] = -(auVar82[0xc] == -1);
              auVar70[0xd] = -(auVar82[0xd] == -1);
              auVar70[0xe] = -(auVar82[0xe] == -1);
              auVar70[0xf] = -(auVar82[0xf] == -1);
              if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar70 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar70 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar70 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar70 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar70 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x4f,0) & 1) != 0) || (SUB161(auVar70 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
              uVar46 = uVar46 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x10;
            }
          }
        }
        else {
          uStack_180 = (undefined1 (*) [16])
                       CONCAT53(CONCAT41(uStack_180._4_4_,*(undefined1 *)((longlong)puVar57 + 0xb)),
                                *(undefined3 *)(puVar57 + 1));
          pauStack_188 = pauVar40;
          pdb_1414ed100(&pauStack_2a8,&pauStack_188);
        }
LAB_1408a969c:
      }
      goto LAB_1408a952e;
    }
    plVar44 = plStack_f8;
    plVar28 = (longlong *)pdb_140f3bda0();
    if ((char)plVar28[2] == '\x01') {
      lStack_168 = *plVar28;
      plVar44 = (longlong *)plVar28[1];
    }
    else {
      lStack_168 = pdb_140f4fd10();
      *plVar28 = lStack_168;
      plVar28[1] = (longlong)plVar44;
      *(undefined1 *)(plVar28 + 2) = 1;
    }
    *plVar28 = lStack_168 + 1;
    pauStack_178 = pauVar19;
    pauStack_170 = pauVar20;
    pauStack_188 = pauVar33;
    uStack_180 = pauVar39;
    pauVar43 = (undefined1 (*) [16])plStack_f8[0x2a];
    lVar26 = plStack_f8[0x2d];
    auVar62 = *pauVar43;
    pauVar38 = pauVar43 + 1;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
    pauStack_148 = (undefined1 (*) [16])(plStack_f8 + 0x16);
    puStack_160 = plVar44;
LAB_1408a9a15:
    if (lVar26 != 0) {
      uVar54 = uVar24;
      if ((short)uVar24 == 0) {
        do {
          auVar62 = *pauVar38;
          pauVar43 = pauVar43 + -0xc;
          pauVar38 = pauVar38 + 1;
          uVar54 = (ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar62[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar54 == 0);
      }
      uVar24 = uVar54 - 1 & uVar54;
      lVar26 = lVar26 + -1;
      if (plStack_f8[0x15] != 0) {
        uVar10 = 0;
        for (; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        puVar41 = (undefined8 *)((longlong)pauVar43 + (ulonglong)uVar10 * -0xc + -0xc);
        uVar27 = pdb_14148b1b0(pauStack_148,puVar41);
        lVar32 = plStack_f8[0x12];
        bVar42 = (byte)(uVar27 >> 0x39);
        auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar62 = pshuflw(auVar62,auVar62,0);
        lVar50 = 0;
        while( true ) {
          uVar27 = uVar27 & plStack_f8[0x13];
          auVar82 = *(undefined1 (*) [16])(lVar32 + uVar27);
          auVar87[0] = -(auVar82[0] == auVar62[0]);
          auVar87[1] = -(auVar82[1] == auVar62[1]);
          auVar87[2] = -(auVar82[2] == auVar62[2]);
          auVar87[3] = -(auVar82[3] == auVar62[3]);
          auVar87[4] = -(auVar82[4] == auVar62[4]);
          auVar87[5] = -(auVar82[5] == auVar62[5]);
          auVar87[6] = -(auVar82[6] == auVar62[6]);
          auVar87[7] = -(auVar82[7] == auVar62[7]);
          auVar87[8] = -(auVar82[8] == auVar62[0]);
          auVar87[9] = -(auVar82[9] == auVar62[1]);
          auVar87[10] = -(auVar82[10] == auVar62[2]);
          auVar87[0xb] = -(auVar82[0xb] == auVar62[3]);
          auVar87[0xc] = -(auVar82[0xc] == auVar62[4]);
          auVar87[0xd] = -(auVar82[0xd] == auVar62[5]);
          auVar87[0xe] = -(auVar82[0xe] == auVar62[6]);
          auVar87[0xf] = -(auVar82[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar87 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar87[0xf] >> 7) << 0xf;
          uVar54 = (uint)uVar52;
          if (uVar52 != 0) {
            do {
              uVar11 = 0;
              for (uVar12 = uVar54; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              uVar46 = uVar11 + uVar27 & plStack_f8[0x13];
              if ((*(char *)((longlong)pauVar43 + (ulonglong)uVar10 * -0xc + -4) ==
                   *(char *)(lVar32 + -0x10 + uVar46 * -0x18)) &&
                 (uVar8 = *puVar41, uVar31 = *(undefined8 *)(lVar32 + uVar46 * -0x18 + -0x18),
                 iVar107 = -(uint)((int)uVar31 == (int)uVar8),
                 iVar80 = -(uint)((int)((ulonglong)uVar31 >> 0x20) ==
                                 (int)((ulonglong)uVar8 >> 0x20)), auVar88._4_4_ = iVar107,
                 auVar88._0_4_ = iVar107, auVar88._8_4_ = iVar80, auVar88._12_4_ = iVar80,
                 iVar107 = movmskpd((int)plVar28,auVar88), iVar107 == 3)) {
                pdb_1403afce0(&pauStack_188);
                plVar28 = (longlong *)0x3;
                goto LAB_1408a9a15;
              }
              uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
              uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
              plVar28 = (longlong *)(ulonglong)uVar54;
            } while (uVar52 != 0);
          }
          auVar71[0] = -(auVar82[0] == -1);
          auVar71[1] = -(auVar82[1] == -1);
          auVar71[2] = -(auVar82[2] == -1);
          auVar71[3] = -(auVar82[3] == -1);
          auVar71[4] = -(auVar82[4] == -1);
          auVar71[5] = -(auVar82[5] == -1);
          auVar71[6] = -(auVar82[6] == -1);
          auVar71[7] = -(auVar82[7] == -1);
          auVar71[8] = -(auVar82[8] == -1);
          auVar71[9] = -(auVar82[9] == -1);
          auVar71[10] = -(auVar82[10] == -1);
          auVar71[0xb] = -(auVar82[0xb] == -1);
          auVar71[0xc] = -(auVar82[0xc] == -1);
          auVar71[0xd] = -(auVar82[0xd] == -1);
          auVar71[0xe] = -(auVar82[0xe] == -1);
          auVar71[0xf] = -(auVar82[0xf] == -1);
          if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x2f,0) & 1) != 0) || (SUB161(auVar71 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
          uVar27 = uVar27 + lVar50 + 0x10;
          lVar50 = lVar50 + 0x10;
        }
      }
      goto LAB_1408a9a15;
    }
    cVar23 = pdb_140e94b40();
    pauStack_150 = (undefined1 (*) [16])CONCAT71(pauStack_150._1_7_,cVar23);
    if (cVar23 == '\0') {
      uStack_208 = (undefined1 (**) [16])0x0;
    }
    else {
      puVar58 = &UNK_1430148ad;
      puVar56 = &UNK_143014840;
      do {
        bVar42 = puVar58[-1];
        uVar24 = (uint)(char)bVar42;
        if ((char)bVar42 < '\0') {
          bVar60 = puVar58[-2];
          if ((char)bVar60 < -0x40) {
            bVar7 = puVar58[-3];
            if ((char)bVar7 < -0x40) {
              pbVar1 = puVar58 + -4;
              puVar58 = puVar58 + -4;
              uVar24 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar58 = puVar58 + -3;
              uVar24 = bVar7 & 0xf;
            }
            uVar24 = bVar60 & 0x3f | uVar24 << 6;
          }
          else {
            puVar58 = puVar58 + -2;
            uVar24 = bVar60 & 0x1f;
          }
          uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
          if (uVar24 != 0x5c) goto LAB_1408a9b64;
LAB_1408a9b7c:
          puVar56 = puVar58 + -0x14301483f;
          if ((undefined *)0x6d < puVar56) {
            pdb_142dc8070(&UNK_143014840,0x6d,puVar56,0x6d,&UNK_143014b20);
            goto LAB_1408ab546;
          }
          pauVar43 = (undefined1 (*) [16])(0x6d - (longlong)puVar56);
          puVar56 = puVar58 + 1;
          goto LAB_1408a9b9e;
        }
        puVar58 = puVar58 + -1;
        if (uVar24 == 0x5c) goto LAB_1408a9b7c;
LAB_1408a9b64:
        if (uVar24 == 0x2f) goto LAB_1408a9b7c;
      } while (puVar58 != &UNK_143014840);
      pauVar43 = (undefined1 (*) [16])0x6d;
LAB_1408a9b9e:
      pauVar38 = (undefined1 (*) [16])pdb_140e97000();
      if ((*(char *)((longlong)pauVar38[6] + 8) != '\x01') &&
         (pauVar38 = (undefined1 (*) [16])pdb_142dde6e0(pauVar38,0),
         pauVar38 == (undefined1 (*) [16])0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*(longlong *)*pauVar38 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *(undefined8 *)*pauVar38 = 0xffffffffffffffff;
      pauStack_108 = pauVar38;
      pauStack_200 = (undefined1 (*) [16])
                     pdb_140e94f10((undefined8 *)((longlong)*pauVar38 + 8),&UNK_14301491f,9,puVar56,
                                   pauVar43,1,0);
      *(longlong *)*pauStack_108 = *(longlong *)*pauStack_108 + 1;
      uStack_208 = (undefined1 (**) [16])0x1;
    }
    puVar58 = (undefined *)((longlong)&uStack_1a8 + 1);
LAB_1408a9c30:
    pdb_1414ecff0(&uStack_128);
    cVar23 = (char)uStack_120;
    if ((char)uStack_120 != '\x11') {
      uStack_2f0 = (uint)uStack_120;
      ppauStack_2f8 = uStack_128;
      fVar111 = uStack_120._4_4_;
      uVar27 = plStack_f8[2];
      pauStack_108 = (undefined1 (*) [16])0x4;
      if (uVar27 == 0) {
LAB_1408a9d40:
        pauVar38 = (undefined1 (*) [16])0x4;
      }
      else if (uVar27 == 1) {
        lVar26 = plStack_f8[1];
        if (cVar23 != *(char *)(lVar26 + 0x28)) goto LAB_1408a9d40;
        iVar107 = -(uint)((int)*(undefined8 *)(lVar26 + 0x20) == (int)uStack_128);
        iVar80 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) ==
                        (int)((ulonglong)uStack_128 >> 0x20));
        auVar64._4_4_ = iVar107;
        auVar64._0_4_ = iVar107;
        auVar64._8_4_ = iVar80;
        auVar64._12_4_ = iVar80;
        iVar107 = movmskpd((uint)uStack_120 & 0xff,auVar64);
        pauVar38 = (undefined1 (*) [16])0x4;
        if (iVar107 == 3) {
          uVar46 = 0;
LAB_1408a9d18:
          pauVar38 = *(undefined1 (**) [16])(lVar26 + 8 + uVar46 * 0x30);
          pauStack_108 = pauVar38 + *(longlong *)(lVar26 + 0x10 + uVar46 * 0x30);
        }
      }
      else {
        uVar46 = pdb_14148b1b0(puStack_190,&ppauStack_2f8);
        uVar34 = pdb_1414af820(plStack_f8);
        if ((uVar34 & 1) == 0) goto LAB_1408a9d40;
        if (uVar27 <= uVar46) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar46,uVar27,&UNK_143311df8);
        }
        lVar26 = plStack_f8[1];
        pauVar38 = (undefined1 (*) [16])0x4;
        if (lVar26 != 0) goto LAB_1408a9d18;
      }
      fVar111 = fVar14 - fVar111;
      if (fVar13 <= fVar111) {
        fVar111 = fVar13;
      }
LAB_1408a9e05:
      if (pauVar38 != pauStack_108) {
        pauVar33 = *(undefined1 (**) [16])*pauVar38;
        cVar23 = *(char *)((longlong)*pauVar38 + 8);
        uVar6 = *(undefined *)((longlong)*pauVar38 + 0xb);
        pauStack_1d0 = (undefined1 (*) [16])
                       CONCAT62(CONCAT51(pauStack_1d0._3_5_,uVar6),
                                *(undefined2 *)((longlong)*pauVar38 + 9));
        if (cVar23 == '\x11') goto LAB_1408a9c30;
        uStack_198 = CONCAT13(*(undefined *)((longlong)*pauVar38 + 0xb),
                              CONCAT21(*(undefined2 *)((longlong)*pauVar38 + 9),cVar23));
        uStack_1a8 = (undefined1 (*) [16])
                     CONCAT53(CONCAT41(uStack_1a8._4_4_,uVar6),
                              *(undefined3 *)((longlong)*pauVar38 + 8));
        pauStack_1b0 = pauVar33;
        pauStack_1a0 = pauVar33;
        puVar47 = (undefined *)pdb_14148b1b0(pauStack_100,&pauStack_1b0);
        pauVar38 = pauVar38 + 1;
        pauVar43 = (undefined1 (*) [16])((ulonglong)puVar47 >> 0x39);
        bVar42 = (byte)((ulonglong)puVar47 >> 0x38);
        bVar60 = bVar42 >> 1;
        auVar62 = ZEXT216(CONCAT11(bVar60,bVar60));
        auVar62 = pshuflw(auVar62,auVar62,0);
        pauVar39 = (undefined1 (*) [16])0x0;
        puVar56 = puVar47;
        while( true ) {
          uVar27 = (ulonglong)puVar56 & plStack_f8[0x1f];
          auVar82 = *(undefined1 (*) [16])(plStack_f8[0x1e] + uVar27);
          auVar90[0] = -(auVar82[0] == auVar62[0]);
          auVar90[1] = -(auVar82[1] == auVar62[1]);
          auVar90[2] = -(auVar82[2] == auVar62[2]);
          auVar90[3] = -(auVar82[3] == auVar62[3]);
          auVar90[4] = -(auVar82[4] == auVar62[4]);
          auVar90[5] = -(auVar82[5] == auVar62[5]);
          auVar90[6] = -(auVar82[6] == auVar62[6]);
          auVar90[7] = -(auVar82[7] == auVar62[7]);
          auVar90[8] = -(auVar82[8] == auVar62[0]);
          auVar90[9] = -(auVar82[9] == auVar62[1]);
          auVar90[10] = -(auVar82[10] == auVar62[2]);
          auVar90[0xb] = -(auVar82[0xb] == auVar62[3]);
          auVar90[0xc] = -(auVar82[0xc] == auVar62[4]);
          auVar90[0xd] = -(auVar82[0xd] == auVar62[5]);
          auVar90[0xe] = -(auVar82[0xe] == auVar62[6]);
          auVar90[0xf] = -(auVar82[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar90 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar90 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar90 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar90 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar90 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar90 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar90 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar90 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar90 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar90 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar90 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar90 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar90 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar90 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar90 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar90[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar54 = 0;
            for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar54 = uVar54 + 1;
            }
            lVar26 = plStack_f8[0x1e] + (uVar54 + uVar27 & plStack_f8[0x1f]) * -0x10;
            pauStack_140 = pauVar39;
            if (((*(char *)(lVar26 + -8) == cVar23) && (*(int *)(lVar26 + -0x10) == (int)pauVar33))
               && (*(int *)(lVar26 + -0xc) == (int)((ulonglong)pauVar33 >> 0x20))) {
              if (fVar111 < *(float *)(lVar26 + -4)) {
                *(float *)(lVar26 + -4) = fVar111;
                uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_1a8._4_4_,uStack_198);
                pauStack_1b0 = pauStack_1a0;
                pdb_1414ed100(&pauStack_2a8,&pauStack_1b0);
              }
              lVar26 = plStack_f8[0x15];
              goto joined_r0x0001408a9fd8;
            }
            uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
          }
          auVar72[0] = -(auVar82[0] == -1);
          auVar72[1] = -(auVar82[1] == -1);
          auVar72[2] = -(auVar82[2] == -1);
          auVar72[3] = -(auVar82[3] == -1);
          auVar72[4] = -(auVar82[4] == -1);
          auVar72[5] = -(auVar82[5] == -1);
          auVar72[6] = -(auVar82[6] == -1);
          auVar72[7] = -(auVar82[7] == -1);
          auVar72[8] = -(auVar82[8] == -1);
          auVar72[9] = -(auVar82[9] == -1);
          auVar72[10] = -(auVar82[10] == -1);
          auVar72[0xb] = -(auVar82[0xb] == -1);
          auVar72[0xc] = -(auVar82[0xc] == -1);
          auVar72[0xd] = -(auVar82[0xd] == -1);
          auVar72[0xe] = -(auVar82[0xe] == -1);
          auVar72[0xf] = -(auVar82[0xf] == -1);
          if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x2f,0) & 1) != 0) || (SUB161(auVar72 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x47,0) & 1) != 0) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') break;
          puVar56 = (undefined *)((longlong)pauVar39[1] + uVar27);
          pauVar39 = pauVar39 + 1;
        }
        if (plStack_f8[0x20] == 0) {
          pdb_142d93bd0(puStack_2c8,1,pauStack_100,CONCAT71((int7)(uVar27 >> 8),1));
        }
        uStack_1d6 = uStack_1a8._3_1_;
        uStack_1d8 = uStack_1a8._1_2_;
        uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_1a8._4_4_,uStack_198);
        pauStack_1b0 = pauStack_1a0;
        pdb_1414ed100(&pauStack_2a8,&pauStack_1b0);
        pauVar39 = (undefined1 (*) [16])plStack_f8[0x1e];
        uVar27 = plStack_f8[0x1f];
        uVar46 = (ulonglong)puVar47 & uVar27;
        auVar62 = *(undefined1 (*) [16])(*pauVar39 + uVar46);
        uVar52 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar62[0xf] >> 7) << 0xf;
        uVar24 = (uint)uVar52;
        if (uVar52 == 0) {
          lVar26 = 0x10;
          do {
            uVar46 = uVar46 + lVar26 & uVar27;
            auVar62 = *(undefined1 (*) [16])(*pauVar39 + uVar46);
            lVar26 = lVar26 + 0x10;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar62[0xf] >> 7) << 0xf);
          } while (uVar24 == 0);
        }
        uVar54 = 0;
        for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
          uVar54 = uVar54 + 1;
        }
        uVar46 = uVar54 + uVar46 & uVar27;
        bVar60 = (*pauVar39)[uVar46];
        if (-1 < (char)bVar60) {
          auVar62 = *pauVar39;
          uVar24 = 0;
          for (uVar54 = (uint)(ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar62[0xf] >> 7) << 0xf); (uVar54 & 1) == 0;
              uVar54 = uVar54 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          uVar46 = (ulonglong)uVar24;
          bVar60 = (*pauVar39)[uVar46];
        }
        bVar42 = bVar42 >> 1;
        (*pauVar39)[uVar46] = bVar42;
        pauVar39[1][uVar46 - 0x10 & uVar27] = bVar42;
        plStack_f8[0x20] = plStack_f8[0x20] - (ulonglong)(bVar60 & 1);
        *(undefined1 (**) [16])pauVar39[-1 - uVar46] = pauVar33;
        pauVar39[-1 - uVar46][8] = cVar23;
        *(undefined2 *)(pauVar39[-1 - uVar46] + 9) = uStack_1d8;
        pauVar39[-1 - uVar46][0xb] = uStack_1d6;
        *(float *)(pauVar39[-1 - uVar46] + 0xc) = fVar111;
        plStack_f8[0x21] = plStack_f8[0x21] + 1;
        lVar26 = plStack_f8[0x15];
joined_r0x0001408a9fd8:
        if (lVar26 != 0) {
          uVar27 = pdb_14148b1b0(pauStack_148,&pauStack_1a0);
          lVar26 = plStack_f8[0x12];
          bVar42 = (byte)(uVar27 >> 0x39);
          auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
          auVar62 = pshuflw(auVar62,auVar62,0);
          lVar32 = 0;
          while( true ) {
            uVar27 = uVar27 & plStack_f8[0x13];
            auVar82 = *(undefined1 (*) [16])(lVar26 + uVar27);
            auVar103[0] = -(auVar82[0] == auVar62[0]);
            auVar103[1] = -(auVar82[1] == auVar62[1]);
            auVar103[2] = -(auVar82[2] == auVar62[2]);
            auVar103[3] = -(auVar82[3] == auVar62[3]);
            auVar103[4] = -(auVar82[4] == auVar62[4]);
            auVar103[5] = -(auVar82[5] == auVar62[5]);
            auVar103[6] = -(auVar82[6] == auVar62[6]);
            auVar103[7] = -(auVar82[7] == auVar62[7]);
            auVar103[8] = -(auVar82[8] == auVar62[0]);
            auVar103[9] = -(auVar82[9] == auVar62[1]);
            auVar103[10] = -(auVar82[10] == auVar62[2]);
            auVar103[0xb] = -(auVar82[0xb] == auVar62[3]);
            auVar103[0xc] = -(auVar82[0xc] == auVar62[4]);
            auVar103[0xd] = -(auVar82[0xd] == auVar62[5]);
            auVar103[0xe] = -(auVar82[0xe] == auVar62[6]);
            auVar103[0xf] = -(auVar82[0xf] == auVar62[7]);
            uVar52 = (ushort)(SUB161(auVar103 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar103 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar103 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar103 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar103 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar103 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar103 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar103 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar103 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar103 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar103 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar103 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar103 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar103 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar103 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar103[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar52;
            while (uVar52 != 0) {
              uVar54 = 0;
              for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar54 = uVar54 + 1;
              }
              uVar46 = uVar54 + uVar27 & plStack_f8[0x13];
              if ((char)uStack_198 == *(char *)(lVar26 + -0x10 + uVar46 * -0x18)) {
                lVar50 = lVar26 + uVar46 * -0x18;
                uVar8 = *(undefined8 *)(lVar50 + -0x18);
                auVar104._0_4_ = -(uint)((int)uVar8 == (int)pauStack_1a0);
                iVar107 = -(uint)((int)((ulonglong)uVar8 >> 0x20) ==
                                 (int)((ulonglong)pauStack_1a0 >> 0x20));
                auVar104._4_4_ = auVar104._0_4_;
                auVar104._8_4_ = iVar107;
                auVar104._12_4_ = iVar107;
                uVar54 = movmskpd((int)pauVar43,auVar104);
                pauVar43 = (undefined1 (*) [16])(ulonglong)uVar54;
                if (uVar54 == 3) {
                  pdb_1403afce0(&pauStack_188,*(undefined4 *)(lVar50 + -0xc));
                  goto LAB_1408a9e05;
                }
              }
              uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
              uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
            }
            auVar89[0] = -(auVar82[0] == -1);
            auVar89[1] = -(auVar82[1] == -1);
            auVar89[2] = -(auVar82[2] == -1);
            auVar89[3] = -(auVar82[3] == -1);
            auVar89[4] = -(auVar82[4] == -1);
            auVar89[5] = -(auVar82[5] == -1);
            auVar89[6] = -(auVar82[6] == -1);
            auVar89[7] = -(auVar82[7] == -1);
            auVar89[8] = -(auVar82[8] == -1);
            auVar89[9] = -(auVar82[9] == -1);
            auVar89[10] = -(auVar82[10] == -1);
            auVar89[0xb] = -(auVar82[0xb] == -1);
            auVar89[0xc] = -(auVar82[0xc] == -1);
            auVar89[0xd] = -(auVar82[0xd] == -1);
            auVar89[0xe] = -(auVar82[0xe] == -1);
            auVar89[0xf] = -(auVar82[0xf] == -1);
            if ((((((((((((((((SUB161(auVar89 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar89 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar89 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar89 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar89 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar89 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar89 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar89 >> 0x3f,0) & 1) != 0) || (SUB161(auVar89 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar89 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar89 >> 0x57,0) & 1) != 0) || (SUB161(auVar89 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar89 >> 0x67,0) & 1) != 0) || (SUB161(auVar89 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar89 >> 0x77,0) & 1) != 0) || auVar89[0xf] < '\0') break;
            uVar27 = uVar27 + lVar32 + 0x10;
            lVar32 = lVar32 + 0x10;
          }
        }
        goto LAB_1408a9e05;
      }
      goto LAB_1408a9c30;
    }
    if ((char)pauStack_150 != '\0') {
      pauVar38 = (undefined1 (*) [16])pdb_140e97000();
      if ((*(char *)((longlong)pauVar38[6] + 8) != '\x01') &&
         (pauVar38 = (undefined1 (*) [16])pdb_142dde6e0(pauVar38,0),
         pauVar38 == (undefined1 (*) [16])0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*(longlong *)*pauVar38 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *(undefined8 *)*pauVar38 = 0xffffffffffffffff;
      pauStack_108 = pauVar38;
      pdb_140e95370((undefined8 *)((longlong)*pauVar38 + 8),pauStack_200);
      *(longlong *)*pauStack_108 = *(longlong *)*pauStack_108 + 1;
    }
    uVar24 = pdb_140e94b40();
    puVar56 = (undefined *)(ulonglong)uVar24;
    param_4 = plStack_f8;
    if ((char)uVar24 != '\0') {
      puVar48 = &UNK_1430148ad;
      puVar47 = &UNK_143014840;
      do {
        bVar42 = puVar48[-1];
        uVar54 = (uint)(char)bVar42;
        if ((char)bVar42 < '\0') {
          bVar60 = puVar48[-2];
          if ((char)bVar60 < -0x40) {
            bVar7 = puVar48[-3];
            if ((char)bVar7 < -0x40) {
              pbVar1 = puVar48 + -4;
              puVar48 = puVar48 + -4;
              uVar54 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar48 = puVar48 + -3;
              uVar54 = bVar7 & 0xf;
            }
            uVar54 = bVar60 & 0x3f | uVar54 << 6;
          }
          else {
            puVar48 = puVar48 + -2;
            uVar54 = bVar60 & 0x1f;
          }
          uVar54 = (uint)(bVar42 & 0x3f) | uVar54 << 6;
          if (uVar54 != 0x5c) goto LAB_1408aa294;
LAB_1408aa2a5:
          puVar47 = puVar48 + -0x14301483f;
          if ((undefined *)0x6d < puVar47) {
            pdb_142dc8070(&UNK_143014840,0x6d,puVar47,0x6d,&UNK_143014b20);
            goto LAB_1408ab546;
          }
          pauVar43 = (undefined1 (*) [16])(0x6d - (longlong)puVar47);
          puVar47 = puVar48 + 1;
          goto LAB_1408aa2c7;
        }
        puVar48 = puVar48 + -1;
        if (uVar54 == 0x5c) goto LAB_1408aa2a5;
LAB_1408aa294:
        if (uVar54 == 0x2f) goto LAB_1408aa2a5;
      } while (puVar48 != &UNK_143014840);
      pauVar43 = (undefined1 (*) [16])0x6d;
LAB_1408aa2c7:
      plVar44 = (longlong *)pdb_140e97000();
      if (((char)plVar44[0xd] != '\x01') &&
         (plVar44 = (longlong *)pdb_142dde6e0(plVar44,0), plVar44 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      param_4 = plStack_f8;
      if (*plVar44 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *plVar44 = -1;
      pauStack_108 = (undefined1 (*) [16])plVar44;
      pauStack_1e8 = (undefined1 (*) [16])
                     pdb_140e94f10(plVar44 + 1,&UNK_143014928,0xe,puVar47,pauVar43,1,0);
      *(longlong *)pauStack_108 = *(longlong *)pauStack_108 + 1;
    }
    fVar18 = _DAT_143014728;
    fVar17 = _DAT_14300c284;
    fVar16 = _DAT_14300a334;
    uVar31 = _UNK_142e3c648;
    uVar8 = _DAT_142e3c640;
    fVar15 = _DAT_142e37988;
    fVar111 = _DAT_142e3788c;
    fVar14 = _DAT_142e3783c;
    lStack_1f0 = CONCAT71(lStack_1f0._1_7_,(char)uVar24);
    pauStack_140 = *(undefined1 (**) [16])(lStack_1b8 + 8);
    pauStack_150 = pauStack_140 + *(longlong *)(lStack_1b8 + 0x10) * 0x15;
    pauStack_1c8 = (undefined1 (*) [16])*param_2;
    pauStack_108 = (undefined1 (*) [16])(param_4 + 0x1c);
    pauStack_2c0 = pauStack_1c8 + 2;
    puStack_190 = (undefined8 *)(lStack_1b8 + 0x158);
LAB_1408aa3db:
    param_1 = pauStack_140;
    if (pauStack_140 != pauStack_150) {
      pauVar38 = pauStack_140 + 0x15;
      puVar41 = (undefined8 *)((longlong)pauStack_140[0x12] + 8);
      pauStack_140 = pauVar38;
      if (pauStack_170 != (undefined1 (*) [16])0x0) {
        uVar27 = pdb_1400af680(&lStack_168,puVar41);
        bVar42 = (byte)(uVar27 >> 0x39);
        auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar62 = pshuflw(auVar62,auVar62,0);
        lVar26 = 0;
        while( true ) {
          uVar27 = uVar27 & (ulonglong)uStack_180;
          auVar82 = *(undefined1 (*) [16])((longlong)*pauStack_188 + uVar27);
          auVar105[0] = -(auVar82[0] == auVar62[0]);
          auVar105[1] = -(auVar82[1] == auVar62[1]);
          auVar105[2] = -(auVar82[2] == auVar62[2]);
          auVar105[3] = -(auVar82[3] == auVar62[3]);
          auVar105[4] = -(auVar82[4] == auVar62[4]);
          auVar105[5] = -(auVar82[5] == auVar62[5]);
          auVar105[6] = -(auVar82[6] == auVar62[6]);
          auVar105[7] = -(auVar82[7] == auVar62[7]);
          auVar105[8] = -(auVar82[8] == auVar62[0]);
          auVar105[9] = -(auVar82[9] == auVar62[1]);
          auVar105[10] = -(auVar82[10] == auVar62[2]);
          auVar105[0xb] = -(auVar82[0xb] == auVar62[3]);
          auVar105[0xc] = -(auVar82[0xc] == auVar62[4]);
          auVar105[0xd] = -(auVar82[0xd] == auVar62[5]);
          auVar105[0xe] = -(auVar82[0xe] == auVar62[6]);
          auVar105[0xf] = -(auVar82[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar105 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar105 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar105 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar105 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar105 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar105 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar105 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar105 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar105 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar105 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar105 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar105 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar105 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar105 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar105 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar105[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar54 = 0;
            for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar54 = uVar54 + 1;
            }
            uVar46 = uVar54 + uVar27 & (ulonglong)uStack_180;
            uVar5 = *(undefined8 *)((longlong)pauStack_188 + uVar46 * -8 + -8);
            auVar106._0_4_ = -(uint)((int)uVar5 == (int)*puVar41);
            iVar107 = -(uint)((int)((ulonglong)uVar5 >> 0x20) == (int)((ulonglong)*puVar41 >> 0x20))
            ;
            auVar106._4_4_ = auVar106._0_4_;
            auVar106._8_4_ = iVar107;
            auVar106._12_4_ = iVar107;
            iVar107 = movmskpd((int)uVar46 * 8,auVar106);
            if (iVar107 == 3) goto LAB_1408aa590;
            uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
          }
          auVar91[0] = -(auVar82[0] == -1);
          auVar91[1] = -(auVar82[1] == -1);
          auVar91[2] = -(auVar82[2] == -1);
          auVar91[3] = -(auVar82[3] == -1);
          auVar91[4] = -(auVar82[4] == -1);
          auVar91[5] = -(auVar82[5] == -1);
          auVar91[6] = -(auVar82[6] == -1);
          auVar91[7] = -(auVar82[7] == -1);
          auVar91[8] = -(auVar82[8] == -1);
          auVar91[9] = -(auVar82[9] == -1);
          auVar91[10] = -(auVar82[10] == -1);
          auVar91[0xb] = -(auVar82[0xb] == -1);
          auVar91[0xc] = -(auVar82[0xc] == -1);
          auVar91[0xd] = -(auVar82[0xd] == -1);
          auVar91[0xe] = -(auVar82[0xe] == -1);
          auVar91[0xf] = -(auVar82[0xf] == -1);
          if ((((((((((((((((SUB161(auVar91 >> 7,0) & 1) != 0 || (SUB161(auVar91 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar91 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar91 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar91 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar91 >> 0x2f,0) & 1) != 0) || (SUB161(auVar91 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar91 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar91 >> 0x47,0) & 1) != 0) || (SUB161(auVar91 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar91 >> 0x57,0) & 1) != 0) || (SUB161(auVar91 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar91 >> 0x67,0) & 1) != 0) || (SUB161(auVar91 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar91 >> 0x77,0) & 1) != 0) || auVar91[0xf] < '\0') break;
          uVar27 = uVar27 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
      if (*(longlong *)(pauStack_1c8[1] + 8) == 0) {
        iVar107 = *(int *)((longlong)param_1[0x12] + 8);
      }
      else {
        uVar27 = pdb_1400af680(pauStack_2c0,puVar41);
        bVar42 = (byte)(uVar27 >> 0x39);
        auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar62 = pshuflw(auVar62,auVar62,0);
        iVar107 = *(int *)((longlong)param_1[0x12] + 8);
        lVar26 = 0;
        while( true ) {
          uVar27 = uVar27 & *(ulonglong *)(*pauStack_1c8 + 8);
          auVar82 = *(undefined1 (*) [16])(*(longlong *)*pauStack_1c8 + uVar27);
          auVar92[0] = -(auVar82[0] == auVar62[0]);
          auVar92[1] = -(auVar82[1] == auVar62[1]);
          auVar92[2] = -(auVar82[2] == auVar62[2]);
          auVar92[3] = -(auVar82[3] == auVar62[3]);
          auVar92[4] = -(auVar82[4] == auVar62[4]);
          auVar92[5] = -(auVar82[5] == auVar62[5]);
          auVar92[6] = -(auVar82[6] == auVar62[6]);
          auVar92[7] = -(auVar82[7] == auVar62[7]);
          auVar92[8] = -(auVar82[8] == auVar62[0]);
          auVar92[9] = -(auVar82[9] == auVar62[1]);
          auVar92[10] = -(auVar82[10] == auVar62[2]);
          auVar92[0xb] = -(auVar82[0xb] == auVar62[3]);
          auVar92[0xc] = -(auVar82[0xc] == auVar62[4]);
          auVar92[0xd] = -(auVar82[0xd] == auVar62[5]);
          auVar92[0xe] = -(auVar82[0xe] == auVar62[6]);
          auVar92[0xf] = -(auVar82[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar92 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar92 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar92 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar92 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar92 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar92 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar92 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar92 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar92 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar92 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar92 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar92 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar92 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar92 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar92 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar92[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar54 = 0;
            for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar54 = uVar54 + 1;
            }
            lVar32 = *(longlong *)*pauStack_1c8 +
                     (uVar54 + uVar27 & *(ulonglong *)(*pauStack_1c8 + 8)) * -8;
            if ((iVar107 == *(int *)(lVar32 + -8)) &&
               (*(int *)((longlong)param_1[0x12] + 0xc) == *(int *)(lVar32 + -4)))
            goto LAB_1408aa590;
            uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
            pauVar43 = (undefined1 (*) [16])(ulonglong)uVar24;
          }
          auVar73[0] = -(auVar82[0] == -1);
          auVar73[1] = -(auVar82[1] == -1);
          auVar73[2] = -(auVar82[2] == -1);
          auVar73[3] = -(auVar82[3] == -1);
          auVar73[4] = -(auVar82[4] == -1);
          auVar73[5] = -(auVar82[5] == -1);
          auVar73[6] = -(auVar82[6] == -1);
          auVar73[7] = -(auVar82[7] == -1);
          auVar73[8] = -(auVar82[8] == -1);
          auVar73[9] = -(auVar82[9] == -1);
          auVar73[10] = -(auVar82[10] == -1);
          auVar73[0xb] = -(auVar82[0xb] == -1);
          auVar73[0xc] = -(auVar82[0xc] == -1);
          auVar73[0xd] = -(auVar82[0xd] == -1);
          auVar73[0xe] = -(auVar82[0xe] == -1);
          auVar73[0xf] = -(auVar82[0xf] == -1);
          if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar73 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar73 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar73 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar73 >> 0x2f,0) & 1) != 0) || (SUB161(auVar73 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') break;
          uVar27 = uVar27 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
      ppauVar45 = (undefined1 (**) [16])pdb_140c017b0(iVar107);
      uStack_128 = ppauVar45;
      if (*(longlong *)(lStack_1b8 + 0x150) != 0) {
        uVar27 = pdb_1400af0a0(puStack_190,&uStack_128);
        lVar26 = *(longlong *)(lStack_1b8 + 0x138);
        bVar42 = (byte)(uVar27 >> 0x39);
        auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar62 = pshuflw(auVar62,auVar62,0);
        lVar32 = 0;
        while( true ) {
          uVar27 = uVar27 & *(ulonglong *)(lStack_1b8 + 0x140);
          pcVar2 = (char *)(lVar26 + uVar27);
          auVar100[0] = -(*pcVar2 == auVar62[0]);
          auVar100[1] = -(pcVar2[1] == auVar62[1]);
          auVar100[2] = -(pcVar2[2] == auVar62[2]);
          auVar100[3] = -(pcVar2[3] == auVar62[3]);
          auVar100[4] = -(pcVar2[4] == auVar62[4]);
          auVar100[5] = -(pcVar2[5] == auVar62[5]);
          auVar100[6] = -(pcVar2[6] == auVar62[6]);
          auVar100[7] = -(pcVar2[7] == auVar62[7]);
          auVar100[8] = -(pcVar2[8] == auVar62[0]);
          auVar100[9] = -(pcVar2[9] == auVar62[1]);
          auVar100[10] = -(pcVar2[10] == auVar62[2]);
          auVar100[0xb] = -(pcVar2[0xb] == auVar62[3]);
          auVar100[0xc] = -(pcVar2[0xc] == auVar62[4]);
          auVar100[0xd] = -(pcVar2[0xd] == auVar62[5]);
          auVar100[0xe] = -(pcVar2[0xe] == auVar62[6]);
          auVar100[0xf] = -(pcVar2[0xf] == auVar62[7]);
          uVar52 = (ushort)(SUB161(auVar100 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar100 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar100 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar100 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar100 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar100 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar100 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar100 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar100 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar100 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar100 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar100 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar100 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar100 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar100 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar100[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar52;
          while (uVar52 != 0) {
            uVar54 = 0;
            for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar54 = uVar54 + 1;
            }
            lVar50 = (uVar54 + uVar27 & *(ulonglong *)(lStack_1b8 + 0x140)) * -0x98;
            if (ppauVar45 == *(undefined1 (***) [16])(lVar26 + -0x98 + lVar50)) {
              *(undefined8 *)(lVar26 + lVar50 + -0x38) = 0;
              goto LAB_1408aa3db;
            }
            uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
          }
          auVar79[0] = -(*pcVar2 == -1);
          auVar79[1] = -(pcVar2[1] == -1);
          auVar79[2] = -(pcVar2[2] == -1);
          auVar79[3] = -(pcVar2[3] == -1);
          auVar79[4] = -(pcVar2[4] == -1);
          auVar79[5] = -(pcVar2[5] == -1);
          auVar79[6] = -(pcVar2[6] == -1);
          auVar79[7] = -(pcVar2[7] == -1);
          auVar79[8] = -(pcVar2[8] == -1);
          auVar79[9] = -(pcVar2[9] == -1);
          auVar79[10] = -(pcVar2[10] == -1);
          auVar79[0xb] = -(pcVar2[0xb] == -1);
          auVar79[0xc] = -(pcVar2[0xc] == -1);
          auVar79[0xd] = -(pcVar2[0xd] == -1);
          auVar79[0xe] = -(pcVar2[0xe] == -1);
          auVar79[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar79 >> 7,0) & 1) != 0 || (SUB161(auVar79 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar79 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar79 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar79 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar79 >> 0x2f,0) & 1) != 0) || (SUB161(auVar79 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar79 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar79 >> 0x47,0) & 1) != 0) || (SUB161(auVar79 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar79 >> 0x57,0) & 1) != 0) || (SUB161(auVar79 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar79 >> 0x67,0) & 1) != 0) || (SUB161(auVar79 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar79 >> 0x77,0) & 1) != 0) || auVar79[0xf] < '\0') break;
          uVar27 = uVar27 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
      goto LAB_1408aa3db;
    }
    if ((char)lStack_1f0 != '\0') {
      pauVar38 = (undefined1 (*) [16])pdb_140e97000();
      pauVar43 = pauStack_1e8;
      if ((*(char *)((longlong)pauVar38[6] + 8) != '\x01') &&
         (pauVar38 = (undefined1 (*) [16])pdb_142dde6e0(pauVar38,0),
         pauVar38 == (undefined1 (*) [16])0x0)) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1408ab546;
      }
      if (*(longlong *)*pauVar38 != 0) {
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_1408ab546;
      }
      *(undefined8 *)*pauVar38 = 0xffffffffffffffff;
      pauStack_100 = pauVar38;
      pdb_140e95370((undefined8 *)((longlong)*pauVar38 + 8),pauVar43);
      *(longlong *)*pauStack_100 = *(longlong *)*pauStack_100 + 1;
    }
    pdb_1414ad170(puVar29,puStack_2c8);
    plVar44 = plStack_f8;
    plStack_f8[0x28] = plStack_f8[0x22];
    plStack_f8[0x29] = plStack_f8[0x23];
    if (plStack_f8[0x2d] != 0) {
      pauVar43 = (undefined1 (*) [16])plStack_f8[0x2b];
      if (pauVar43 == (undefined1 (*) [16])0x0) {
        pauVar38 = (undefined1 (*) [16])0x0;
      }
      else {
        pub_142e32780(*(undefined8 *)*pauStack_1c0,0xff,pauVar43[1] + 1);
        pauVar38 = (undefined1 (*) [16])
                   (((ulonglong)(*pauVar43 + 1) & 0xfffffffffffffff8) -
                   ((ulonglong)(*pauVar43 + 1) >> 3));
        if (pauVar43 < (undefined1 (*) [16])0x8) {
          pauVar38 = pauVar43;
        }
      }
      plVar44[0x2d] = 0;
      plVar44[0x2c] = (longlong)pauVar38;
    }
    if (uStack_180 != (undefined1 (*) [16])0x0) {
      uVar27 = (longlong)uStack_180 * 8 + 0x17U & 0xfffffffffffffff0;
      puVar47 = (undefined *)((longlong)uStack_180[1] + uVar27 + 1);
      if (puVar47 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_188 - uVar27),(ulonglong)puVar47,0x10);
      }
    }
    if (lStack_288 != 0) {
      uVar27 = lStack_288 * 8 + 0x17U & 0xfffffffffffffff0;
      pub_1406abac0((byte *)((longlong)pauStack_290 - uVar27),lStack_288 + uVar27 + 0x11,0x10);
    }
    if (pauStack_2a8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)uStack_2a0,(longlong)pauStack_2a8 * 0x18,8);
    }
    if (lStack_260 != 0) {
      pub_1406abac0(pbStack_258,lStack_260 << 3,8);
    }
    if (lStack_248 != 0) {
      pub_1406abac0(pbStack_240,lStack_248 << 3,8);
    }
    if (cStack_109 == '\0') {
      return;
    }
    plVar28 = (longlong *)pdb_140e97000();
    if (((char)plVar28[0xd] == '\x01') ||
       (plVar28 = (longlong *)pdb_142dde6e0(plVar28,0), plVar28 != (longlong *)0x0)) {
      if (*plVar28 == 0) {
        *plVar28 = -1;
        plStack_f8 = plVar28;
        pdb_140e95370(plVar28 + 1);
        *plStack_f8 = *plStack_f8 + 1;
        return;
      }
LAB_1408ab1ef:
      plVar28 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408ab1fb:
      plVar28 = (longlong *)pdb_142dde6e0(plVar28,0);
      if (plVar28 != (longlong *)0x0) goto LAB_1408a8216;
    }
    pauVar33 = (undefined1 (*) [16])pdb_142dc7890(&UNK_14330e598);
LAB_1408ab21b:
    pauVar33 = (undefined1 (*) [16])pdb_142dde6e0(pauVar33,0);
    if (pauVar33 == (undefined1 (*) [16])0x0) {
      pdb_142dc7890(&UNK_14330e598);
      goto LAB_1408ab546;
    }
  } while( true );
LAB_1408a8f50:
  plVar28 = plStack_f8;
  pauVar59 = pauStack_1c8;
  if (pauVar43 == pauStack_148) goto LAB_1408a8b9e;
  pauVar36 = *(undefined1 (**) [16])*pauVar43;
  cVar23 = *(char *)((longlong)*pauVar43 + 8);
  uStack_208 = (undefined1 (**) [16])
               CONCAT62(CONCAT51(uStack_208._3_5_,*(undefined *)((longlong)*pauVar43 + 0xb)),
                        *(undefined2 *)((longlong)*pauVar43 + 9));
  if (cVar23 == '\x11') goto LAB_1408a8b9e;
  uStack_2cf = *(undefined2 *)((longlong)*pauVar43 + 9);
  uStack_2cd = *(undefined *)((longlong)*pauVar43 + 0xb);
  iVar107 = (int)pauVar36;
  iVar80 = (int)((ulonglong)pauVar36 >> 0x20);
  pauStack_2d8 = pauVar36;
  cStack_2d0 = cVar23;
  if (plStack_f8[0x2d] != 0) {
    pauStack_130 = pauStack_100;
    pauStack_138 = pauStack_108;
    uVar27 = pdb_14148b1b0(pauStack_140,&pauStack_2d8);
    lVar26 = plStack_f8[0x2a];
    bVar42 = (byte)(uVar27 >> 0x39);
    auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
    auVar62 = pshuflw(auVar62,auVar62,0);
    lVar32 = 0;
    while( true ) {
      uVar27 = uVar27 & plStack_f8[0x2b];
      pcVar2 = (char *)(lVar26 + uVar27);
      auVar82[0] = -(*pcVar2 == auVar62[0]);
      auVar82[1] = -(pcVar2[1] == auVar62[1]);
      auVar82[2] = -(pcVar2[2] == auVar62[2]);
      auVar82[3] = -(pcVar2[3] == auVar62[3]);
      auVar82[4] = -(pcVar2[4] == auVar62[4]);
      auVar82[5] = -(pcVar2[5] == auVar62[5]);
      auVar82[6] = -(pcVar2[6] == auVar62[6]);
      auVar82[7] = -(pcVar2[7] == auVar62[7]);
      auVar82[8] = -(pcVar2[8] == auVar62[0]);
      auVar82[9] = -(pcVar2[9] == auVar62[1]);
      auVar82[10] = -(pcVar2[10] == auVar62[2]);
      auVar82[0xb] = -(pcVar2[0xb] == auVar62[3]);
      auVar82[0xc] = -(pcVar2[0xc] == auVar62[4]);
      auVar82[0xd] = -(pcVar2[0xd] == auVar62[5]);
      auVar82[0xe] = -(pcVar2[0xe] == auVar62[6]);
      auVar82[0xf] = -(pcVar2[0xf] == auVar62[7]);
      uVar52 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf;
      uVar54 = (uint)uVar52;
      while (uVar52 != 0) {
        uVar10 = 0;
        for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar46 = uVar10 + uVar27 & plStack_f8[0x2b];
        if (((cVar23 == *(char *)(lVar26 + -4 + uVar46 * -0xc)) &&
            (lVar50 = lVar26 + uVar46 * -0xc, *(int *)(lVar50 + -0xc) == iVar107)) &&
           (*(int *)(lVar50 + -8) == iVar80)) goto LAB_1408a9250;
        uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
        uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
      }
      auVar66[0] = -(*pcVar2 == -1);
      auVar66[1] = -(pcVar2[1] == -1);
      auVar66[2] = -(pcVar2[2] == -1);
      auVar66[3] = -(pcVar2[3] == -1);
      auVar66[4] = -(pcVar2[4] == -1);
      auVar66[5] = -(pcVar2[5] == -1);
      auVar66[6] = -(pcVar2[6] == -1);
      auVar66[7] = -(pcVar2[7] == -1);
      auVar66[8] = -(pcVar2[8] == -1);
      auVar66[9] = -(pcVar2[9] == -1);
      auVar66[10] = -(pcVar2[10] == -1);
      auVar66[0xb] = -(pcVar2[0xb] == -1);
      auVar66[0xc] = -(pcVar2[0xc] == -1);
      auVar66[0xd] = -(pcVar2[0xd] == -1);
      auVar66[0xe] = -(pcVar2[0xe] == -1);
      auVar66[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar66 >> 0x3f,0) & 1) != 0) || (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar66 >> 0x4f,0) & 1) != 0) || (SUB161(auVar66 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || (SUB161(auVar66 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar66 >> 0x6f,0) & 1) != 0) || (SUB161(auVar66 >> 0x77,0) & 1) != 0) ||
          auVar66[0xf] < '\0') break;
      uVar27 = uVar27 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    }
  }
  if (pauStack_290 != (undefined1 (*) [16])0x0) {
    pauStack_130 = pauStack_100;
    pauStack_138 = pauStack_108;
    uVar27 = pdb_14148b1b0(&lStack_288,&pauStack_2d8);
    bVar42 = (byte)(uVar27 >> 0x39);
    auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
    auVar62 = pshuflw(auVar62,auVar62,0);
    lVar26 = 0;
    while( true ) {
      uVar27 = uVar27 & (ulonglong)uStack_2a0;
      pcVar2 = (char *)((longlong)*pauStack_2a8 + uVar27);
      auVar83[0] = -(*pcVar2 == auVar62[0]);
      auVar83[1] = -(pcVar2[1] == auVar62[1]);
      auVar83[2] = -(pcVar2[2] == auVar62[2]);
      auVar83[3] = -(pcVar2[3] == auVar62[3]);
      auVar83[4] = -(pcVar2[4] == auVar62[4]);
      auVar83[5] = -(pcVar2[5] == auVar62[5]);
      auVar83[6] = -(pcVar2[6] == auVar62[6]);
      auVar83[7] = -(pcVar2[7] == auVar62[7]);
      auVar83[8] = -(pcVar2[8] == auVar62[0]);
      auVar83[9] = -(pcVar2[9] == auVar62[1]);
      auVar83[10] = -(pcVar2[10] == auVar62[2]);
      auVar83[0xb] = -(pcVar2[0xb] == auVar62[3]);
      auVar83[0xc] = -(pcVar2[0xc] == auVar62[4]);
      auVar83[0xd] = -(pcVar2[0xd] == auVar62[5]);
      auVar83[0xe] = -(pcVar2[0xe] == auVar62[6]);
      auVar83[0xf] = -(pcVar2[0xf] == auVar62[7]);
      uVar52 = (ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe | (ushort)(auVar83[0xf] >> 7) << 0xf;
      uVar54 = (uint)uVar52;
      while (uVar52 != 0) {
        uVar10 = 0;
        for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar46 = uVar10 + uVar27 & (ulonglong)uStack_2a0;
        if (((cVar23 == *(char *)((longlong)pauStack_2a8 + uVar46 * -0xc + -4)) &&
            (*(int *)((longlong)pauStack_2a8 + uVar46 * -0xc + -0xc) == iVar107)) &&
           (*(int *)((longlong)pauStack_2a8 + uVar46 * -0xc + -8) == iVar80)) goto LAB_1408a9250;
        uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
        uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
      }
      auVar67[0] = -(*pcVar2 == -1);
      auVar67[1] = -(pcVar2[1] == -1);
      auVar67[2] = -(pcVar2[2] == -1);
      auVar67[3] = -(pcVar2[3] == -1);
      auVar67[4] = -(pcVar2[4] == -1);
      auVar67[5] = -(pcVar2[5] == -1);
      auVar67[6] = -(pcVar2[6] == -1);
      auVar67[7] = -(pcVar2[7] == -1);
      auVar67[8] = -(pcVar2[8] == -1);
      auVar67[9] = -(pcVar2[9] == -1);
      auVar67[10] = -(pcVar2[10] == -1);
      auVar67[0xb] = -(pcVar2[0xb] == -1);
      auVar67[0xc] = -(pcVar2[0xc] == -1);
      auVar67[0xd] = -(pcVar2[0xd] == -1);
      auVar67[0xe] = -(pcVar2[0xe] == -1);
      auVar67[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 || (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar67 >> 0x17,0) & 1) != 0) || (SUB161(auVar67 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar67 >> 0x27,0) & 1) != 0) || (SUB161(auVar67 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar67 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar67 >> 0x3f,0) & 1) != 0) || (SUB161(auVar67 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar67 >> 0x4f,0) & 1) != 0) || (SUB161(auVar67 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar67 >> 0x5f,0) & 1) != 0) || (SUB161(auVar67 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar67 >> 0x6f,0) & 1) != 0) || (SUB161(auVar67 >> 0x77,0) & 1) != 0) ||
          auVar67[0xf] < '\0') break;
      uVar27 = uVar27 + lVar26 + 0x10;
      lVar26 = lVar26 + 0x10;
    }
  }
  if (plStack_f8[0x27] != 0) {
    pauStack_130 = pauStack_100;
    pauStack_138 = pauStack_108;
    uVar27 = pdb_14148b1b0(pauStack_150,&pauStack_2d8);
    bVar42 = (byte)(uVar27 >> 0x39);
    auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
    auVar62 = pshuflw(auVar62,auVar62,0);
    lVar26 = 0;
    while( true ) {
      uVar27 = uVar27 & plStack_f8[0x25];
      auVar82 = *(undefined1 (*) [16])(plStack_f8[0x24] + uVar27);
      auVar84[0] = -(auVar82[0] == auVar62[0]);
      auVar84[1] = -(auVar82[1] == auVar62[1]);
      auVar84[2] = -(auVar82[2] == auVar62[2]);
      auVar84[3] = -(auVar82[3] == auVar62[3]);
      auVar84[4] = -(auVar82[4] == auVar62[4]);
      auVar84[5] = -(auVar82[5] == auVar62[5]);
      auVar84[6] = -(auVar82[6] == auVar62[6]);
      auVar84[7] = -(auVar82[7] == auVar62[7]);
      auVar84[8] = -(auVar82[8] == auVar62[0]);
      auVar84[9] = -(auVar82[9] == auVar62[1]);
      auVar84[10] = -(auVar82[10] == auVar62[2]);
      auVar84[0xb] = -(auVar82[0xb] == auVar62[3]);
      auVar84[0xc] = -(auVar82[0xc] == auVar62[4]);
      auVar84[0xd] = -(auVar82[0xd] == auVar62[5]);
      auVar84[0xe] = -(auVar82[0xe] == auVar62[6]);
      auVar84[0xf] = -(auVar82[0xf] == auVar62[7]);
      uVar52 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe | (ushort)(auVar84[0xf] >> 7) << 0xf;
      uVar54 = (uint)uVar52;
      while (uVar52 != 0) {
        uVar10 = 0;
        for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        lVar32 = plStack_f8[0x24] + (uVar10 + uVar27 & plStack_f8[0x25]) * -0x10;
        if (((cVar23 == *(char *)(lVar32 + -8)) && (*(int *)(lVar32 + -0x10) == iVar107)) &&
           (*(int *)(lVar32 + -0xc) == iVar80)) {
          if ((*(float *)(lVar32 + -4) == fVar111) &&
             (!NAN(*(float *)(lVar32 + -4)) && !NAN(fVar111))) {
            uStack_180._0_3_ = CONCAT21((undefined2)uStack_208,cVar23);
            uStack_180 = (undefined1 (*) [16])
                         CONCAT53(CONCAT41(uStack_180._4_4_,uStack_208._2_1_),(undefined3)uStack_180
                                 );
            pauStack_130 = pauStack_100;
            pauStack_138 = pauStack_108;
            pauStack_188 = pauVar36;
            pdb_1414b4b30(&pauStack_2a8,&pauStack_188);
          }
          goto LAB_1408a9250;
        }
        uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
        uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
      }
      auVar68[0] = -(auVar82[0] == -1);
      auVar68[1] = -(auVar82[1] == -1);
      auVar68[2] = -(auVar82[2] == -1);
      auVar68[3] = -(auVar82[3] == -1);
      auVar68[4] = -(auVar82[4] == -1);
      auVar68[5] = -(auVar82[5] == -1);
      auVar68[6] = -(auVar82[6] == -1);
      auVar68[7] = -(auVar82[7] == -1);
      auVar68[8] = -(auVar82[8] == -1);
      auVar68[9] = -(auVar82[9] == -1);
      auVar68[10] = -(auVar82[10] == -1);
      auVar68[0xb] = -(auVar82[0xb] == -1);
      auVar68[0xc] = -(auVar82[0xc] == -1);
      auVar68[0xd] = -(auVar82[0xd] == -1);
      auVar68[0xe] = -(auVar82[0xe] == -1);
      auVar68[0xf] = -(auVar82[0xf] == -1);
      if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar68 >> 0x17,0) & 1) != 0) || (SUB161(auVar68 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar68 >> 0x27,0) & 1) != 0) || (SUB161(auVar68 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar68 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar68 >> 0x3f,0) & 1) != 0) || (SUB161(auVar68 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar68 >> 0x4f,0) & 1) != 0) || (SUB161(auVar68 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar68 >> 0x5f,0) & 1) != 0) || (SUB161(auVar68 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar68 >> 0x6f,0) & 1) != 0) || (SUB161(auVar68 >> 0x77,0) & 1) != 0) ||
          auVar68[0xf] < '\0') break;
      uVar27 = uVar27 + lVar26 + 0x10;
      lVar26 = lVar26 + 0x10;
    }
  }
LAB_1408a9250:
  pauVar43 = pauVar43 + 1;
  goto LAB_1408a8f50;
LAB_1408aa7db:
  uVar27 = uVar27 & plStack_f8[0x1f];
  pcVar2 = (char *)(plStack_f8[0x1e] + uVar27);
  auVar94[0] = -(*pcVar2 == auVar62[0]);
  auVar94[1] = -(pcVar2[1] == auVar62[1]);
  auVar94[2] = -(pcVar2[2] == auVar62[2]);
  auVar94[3] = -(pcVar2[3] == auVar62[3]);
  auVar94[4] = -(pcVar2[4] == auVar62[4]);
  auVar94[5] = -(pcVar2[5] == auVar62[5]);
  auVar94[6] = -(pcVar2[6] == auVar62[6]);
  auVar94[7] = -(pcVar2[7] == auVar62[7]);
  auVar94[8] = -(pcVar2[8] == auVar62[0]);
  auVar94[9] = -(pcVar2[9] == auVar62[1]);
  auVar94[10] = -(pcVar2[10] == auVar62[2]);
  auVar94[0xb] = -(pcVar2[0xb] == auVar62[3]);
  auVar94[0xc] = -(pcVar2[0xc] == auVar62[4]);
  auVar94[0xd] = -(pcVar2[0xd] == auVar62[5]);
  auVar94[0xe] = -(pcVar2[0xe] == auVar62[6]);
  auVar94[0xf] = -(pcVar2[0xf] == auVar62[7]);
  uVar52 = (ushort)(SUB161(auVar94 >> 7,0) & 1) | (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe | (ushort)(auVar94[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar52;
  if (uVar52 != 0) {
    do {
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar46 = uVar54 + uVar27 & plStack_f8[0x1f];
      lVar32 = plStack_f8[0x1e] + uVar46 * -0x10;
      if ((*(char *)(lVar50 + -4) == *(char *)(lVar32 + -8)) &&
         (uVar5 = *(undefined8 *)(lVar50 + -0xc),
         iVar80 = -(uint)((int)*(undefined8 *)(lVar32 + -0x10) == (int)uVar5),
         iVar108 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar32 + -0x10) >> 0x20) ==
                          (int)((ulonglong)uVar5 >> 0x20)), auVar95._4_4_ = iVar80,
         auVar95._0_4_ = iVar80, auVar95._8_4_ = iVar108, auVar95._12_4_ = iVar108,
         iVar80 = movmskpd((int)uVar46 * 0x10,auVar95), iVar80 == 3)) {
        fVar61 = *(float *)(lVar32 + -4);
        fVar65 = *(float *)*pauVar43;
        fVar4 = fVar61;
        if (fVar65 <= fVar61) {
          fVar4 = fVar65;
        }
        *(uint *)*pauVar43 = ~-(uint)NAN(fVar65) & (uint)fVar4 | -(uint)NAN(fVar65) & (uint)fVar61;
        goto LAB_1408aa890;
      }
      uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
      uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
    } while (uVar52 != 0);
  }
  auVar75[0] = -(*pcVar2 == -1);
  auVar75[1] = -(pcVar2[1] == -1);
  auVar75[2] = -(pcVar2[2] == -1);
  auVar75[3] = -(pcVar2[3] == -1);
  auVar75[4] = -(pcVar2[4] == -1);
  auVar75[5] = -(pcVar2[5] == -1);
  auVar75[6] = -(pcVar2[6] == -1);
  auVar75[7] = -(pcVar2[7] == -1);
  auVar75[8] = -(pcVar2[8] == -1);
  auVar75[9] = -(pcVar2[9] == -1);
  auVar75[10] = -(pcVar2[10] == -1);
  auVar75[0xb] = -(pcVar2[0xb] == -1);
  auVar75[0xc] = -(pcVar2[0xc] == -1);
  auVar75[0xd] = -(pcVar2[0xd] == -1);
  auVar75[0xe] = -(pcVar2[0xe] == -1);
  auVar75[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar75 >> 7,0) & 1) != 0 || (SUB161(auVar75 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar75 >> 0x17,0) & 1) != 0) || (SUB161(auVar75 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar75 >> 0x27,0) & 1) != 0) || (SUB161(auVar75 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar75 >> 0x37,0) & 1) != 0) || (SUB161(auVar75 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar75 >> 0x47,0) & 1) != 0) || (SUB161(auVar75 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar75 >> 0x57,0) & 1) != 0) || (SUB161(auVar75 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar75 >> 0x67,0) & 1) != 0) || (SUB161(auVar75 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar75 >> 0x77,0) & 1) != 0) || auVar75[0xf] < '\0') goto LAB_1408aa890;
  uVar27 = uVar27 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_1408aa7db;
LAB_1408aa9eb:
  uVar27 = uVar27 & plStack_f8[0x1f];
  pcVar2 = (char *)(plStack_f8[0x1e] + uVar27);
  auVar97[0] = -(*pcVar2 == auVar62[0]);
  auVar97[1] = -(pcVar2[1] == auVar62[1]);
  auVar97[2] = -(pcVar2[2] == auVar62[2]);
  auVar97[3] = -(pcVar2[3] == auVar62[3]);
  auVar97[4] = -(pcVar2[4] == auVar62[4]);
  auVar97[5] = -(pcVar2[5] == auVar62[5]);
  auVar97[6] = -(pcVar2[6] == auVar62[6]);
  auVar97[7] = -(pcVar2[7] == auVar62[7]);
  auVar97[8] = -(pcVar2[8] == auVar62[0]);
  auVar97[9] = -(pcVar2[9] == auVar62[1]);
  auVar97[10] = -(pcVar2[10] == auVar62[2]);
  auVar97[0xb] = -(pcVar2[0xb] == auVar62[3]);
  auVar97[0xc] = -(pcVar2[0xc] == auVar62[4]);
  auVar97[0xd] = -(pcVar2[0xd] == auVar62[5]);
  auVar97[0xe] = -(pcVar2[0xe] == auVar62[6]);
  auVar97[0xf] = -(pcVar2[0xf] == auVar62[7]);
  uVar52 = (ushort)(SUB161(auVar97 >> 7,0) & 1) | (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe | (ushort)(auVar97[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar52;
  if (uVar52 != 0) {
    do {
      uVar54 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar54 = uVar54 + 1;
      }
      uVar46 = uVar54 + uVar27 & plStack_f8[0x1f];
      lVar32 = plStack_f8[0x1e] + uVar46 * -0x10;
      if ((*(char *)(lVar50 + -4) == *(char *)(lVar32 + -8)) &&
         (uVar5 = *(undefined8 *)(lVar50 + -0xc),
         iVar80 = -(uint)((int)*(undefined8 *)(lVar32 + -0x10) == (int)uVar5),
         iVar108 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar32 + -0x10) >> 0x20) ==
                          (int)((ulonglong)uVar5 >> 0x20)), auVar98._4_4_ = iVar80,
         auVar98._0_4_ = iVar80, auVar98._8_4_ = iVar108, auVar98._12_4_ = iVar108,
         iVar80 = movmskpd((int)uVar46 * 0x10,auVar98), iVar80 == 3)) {
        fVar61 = *(float *)(lVar32 + -4);
        fVar65 = *(float *)*pauVar43;
        fVar4 = fVar61;
        if (fVar65 <= fVar61) {
          fVar4 = fVar65;
        }
        *(uint *)*pauVar43 = ~-(uint)NAN(fVar65) & (uint)fVar4 | -(uint)NAN(fVar65) & (uint)fVar61;
        goto LAB_1408aaaa0;
      }
      uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
      uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
    } while (uVar52 != 0);
  }
  auVar77[0] = -(*pcVar2 == -1);
  auVar77[1] = -(pcVar2[1] == -1);
  auVar77[2] = -(pcVar2[2] == -1);
  auVar77[3] = -(pcVar2[3] == -1);
  auVar77[4] = -(pcVar2[4] == -1);
  auVar77[5] = -(pcVar2[5] == -1);
  auVar77[6] = -(pcVar2[6] == -1);
  auVar77[7] = -(pcVar2[7] == -1);
  auVar77[8] = -(pcVar2[8] == -1);
  auVar77[9] = -(pcVar2[9] == -1);
  auVar77[10] = -(pcVar2[10] == -1);
  auVar77[0xb] = -(pcVar2[0xb] == -1);
  auVar77[0xc] = -(pcVar2[0xc] == -1);
  auVar77[0xd] = -(pcVar2[0xd] == -1);
  auVar77[0xe] = -(pcVar2[0xe] == -1);
  auVar77[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 || (SUB161(auVar77 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar77 >> 0x17,0) & 1) != 0) || (SUB161(auVar77 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar77 >> 0x27,0) & 1) != 0) || (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar77 >> 0x37,0) & 1) != 0) || (SUB161(auVar77 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar77 >> 0x47,0) & 1) != 0) || (SUB161(auVar77 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar77 >> 0x57,0) & 1) != 0) || (SUB161(auVar77 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar77 >> 0x67,0) & 1) != 0) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') goto LAB_1408aaaa0;
  uVar27 = uVar27 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_1408aa9eb;
  while (uVar46 = uVar46 + 1, uVar27 != uVar46) {
LAB_1408aacc0:
    pfVar3 = (float *)(*(longlong *)pauVar43[-4] + uVar46 * 4);
    if ((*(float *)(puVar56 + uVar46 * 4) != *pfVar3) ||
       (NAN(*(float *)(puVar56 + uVar46 * 4)) || NAN(*pfVar3))) goto LAB_1408aace0;
  }
  goto LAB_1408aa3db;
LAB_1408aace0:
  *(undefined1 *)((longlong)param_1[0x14] + 8) = 1;
  *(undefined8 *)(pauVar43[-4] + 8) = 0;
  if (*(ulonglong *)(pauVar43[-5] + 8) < uVar27) {
    pdb_142d7f1b0(pauVar43[-5] + 8,0,uVar27,4,4);
    param_4 = *(longlong **)(pauVar43[-4] + 8);
  }
  else {
    param_4 = (undefined8 *)0x0;
    if (uVar27 == 0) goto LAB_1408aad29;
  }
  pub_142e32760((longlong)param_4 * 4 + *(longlong *)pauVar43[-4],puVar56,uVar27 * 4);
LAB_1408aad29:
  *(undefined **)(pauVar43[-4] + 8) = (undefined *)((longlong)param_4 + uVar27);
  goto LAB_1408aa3db;
LAB_1408aa590:
  uVar27 = *(ulonglong *)param_1[1];
  uVar46 = *(ulonglong *)param_1[9];
  uVar34 = uVar27 - uVar46;
  if (uVar27 < uVar46 || uVar34 == 0) goto LAB_1408aa651;
  if (*(longlong *)param_1[8] - uVar46 < uVar34) {
    pdb_142d7f1b0(param_1 + 8,uVar46,uVar34,4,4);
    lVar26 = *(longlong *)((longlong)param_1[8] + 8);
    puVar30 = (undefined4 *)(lVar26 + *(ulonglong *)param_1[9] * 4);
    uVar35 = *(ulonglong *)param_1[9];
  }
  else {
    lVar26 = *(longlong *)((longlong)param_1[8] + 8);
    puVar30 = (undefined4 *)(lVar26 + uVar46 * 4);
    uVar35 = uVar46;
  }
  if (1 < uVar34) {
    uVar49 = ~uVar46 + uVar27;
    lVar32 = 1;
    if (uVar49 < 8) {
LAB_1408aa629:
      lVar26 = (lVar32 + uVar46) - uVar27;
      do {
        *puVar30 = 0x3f800000;
        puVar30 = puVar30 + 1;
        lVar26 = lVar26 + 1;
      } while (lVar26 != 0);
    }
    else {
      uVar51 = uVar49 & 0xfffffffffffffff8;
      puVar30 = puVar30 + uVar51;
      lVar32 = uVar51 + 1;
      lVar26 = lVar26 + uVar35 * 4;
      uVar53 = 0;
      do {
        puVar41 = (undefined8 *)(lVar26 + uVar53 * 4);
        *puVar41 = uVar8;
        puVar41[1] = uVar31;
        puVar41 = (undefined8 *)(lVar26 + 0x10 + uVar53 * 4);
        *puVar41 = uVar8;
        puVar41[1] = uVar31;
        uVar53 = uVar53 + 8;
      } while (uVar51 != uVar53);
      if (uVar49 != uVar51) goto LAB_1408aa629;
    }
    uVar35 = (uVar35 + uVar34) - 1;
  }
  *puVar30 = 0x3f800000;
  uVar27 = uVar35 + 1;
LAB_1408aa651:
  *(ulonglong *)param_1[9] = uVar27;
  pauVar43 = *(undefined1 (**) [16])((longlong)param_1[8] + 8);
  pauStack_148 = (undefined1 (*) [16])((longlong)*pauVar43 + uVar27 * 4);
  param_4 = (undefined8 *)0x0;
  for (; iVar107 = (int)param_4, pauVar43 != pauStack_148;
      pauVar43 = (undefined1 (*) [16])((longlong)*pauVar43 + 4)) {
    iVar80 = *(int *)((longlong)param_1[0x12] + 8);
    iVar108 = *(int *)((longlong)param_1[0x12] + 0xc);
    uStack_128 = *(undefined1 (***) [16])((longlong)param_1[0x12] + 8);
    if (plStack_f8[0x1b] != 0) {
      uStack_120._0_4_ = iVar107;
      uVar27 = pdb_14148b010(pauStack_108,&uStack_128);
      lVar26 = plStack_f8[0x18];
      bVar42 = (byte)(uVar27 >> 0x39);
      auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar62 = pshuflw(auVar62,auVar62,0);
      lVar32 = 0;
      while( true ) {
        uVar27 = uVar27 & plStack_f8[0x19];
        auVar82 = *(undefined1 (*) [16])(lVar26 + uVar27);
        auVar93[0] = -(auVar82[0] == auVar62[0]);
        auVar93[1] = -(auVar82[1] == auVar62[1]);
        auVar93[2] = -(auVar82[2] == auVar62[2]);
        auVar93[3] = -(auVar82[3] == auVar62[3]);
        auVar93[4] = -(auVar82[4] == auVar62[4]);
        auVar93[5] = -(auVar82[5] == auVar62[5]);
        auVar93[6] = -(auVar82[6] == auVar62[6]);
        auVar93[7] = -(auVar82[7] == auVar62[7]);
        auVar93[8] = -(auVar82[8] == auVar62[0]);
        auVar93[9] = -(auVar82[9] == auVar62[1]);
        auVar93[10] = -(auVar82[10] == auVar62[2]);
        auVar93[0xb] = -(auVar82[0xb] == auVar62[3]);
        auVar93[0xc] = -(auVar82[0xc] == auVar62[4]);
        auVar93[0xd] = -(auVar82[0xd] == auVar62[5]);
        auVar93[0xe] = -(auVar82[0xe] == auVar62[6]);
        auVar93[0xf] = -(auVar82[0xf] == auVar62[7]);
        uVar52 = (ushort)(SUB161(auVar93 >> 7,0) & 1) | (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar93 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar93 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar93 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar93 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar93 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar93 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar93 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar93 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar93 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar93 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe | (ushort)(auVar93[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar52;
        while (uVar52 != 0) {
          uVar54 = 0;
          for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar54 = uVar54 + 1;
          }
          uVar46 = uVar54 + uVar27 & plStack_f8[0x19];
          if (((iVar80 == *(int *)(lVar26 + -0x18 + uVar46 * -0x18)) &&
              (iVar108 == *(int *)(lVar26 + -0x14 + uVar46 * -0x18))) &&
             (lVar50 = lVar26 + uVar46 * -0x18, iVar107 == *(int *)(lVar50 + -0x10))) {
            if (plStack_f8[0x21] == 0) goto LAB_1408aa890;
            uVar27 = pdb_14148b1b0(pauStack_100,(undefined8 *)(lVar50 + -0xc));
            bVar42 = (byte)(uVar27 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar62 = pshuflw(auVar62,auVar62,0);
            lVar26 = 0;
            goto LAB_1408aa7db;
          }
          uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
        }
        auVar74[0] = -(auVar82[0] == -1);
        auVar74[1] = -(auVar82[1] == -1);
        auVar74[2] = -(auVar82[2] == -1);
        auVar74[3] = -(auVar82[3] == -1);
        auVar74[4] = -(auVar82[4] == -1);
        auVar74[5] = -(auVar82[5] == -1);
        auVar74[6] = -(auVar82[6] == -1);
        auVar74[7] = -(auVar82[7] == -1);
        auVar74[8] = -(auVar82[8] == -1);
        auVar74[9] = -(auVar82[9] == -1);
        auVar74[10] = -(auVar82[10] == -1);
        auVar74[0xb] = -(auVar82[0xb] == -1);
        auVar74[0xc] = -(auVar82[0xc] == -1);
        auVar74[0xd] = -(auVar82[0xd] == -1);
        auVar74[0xe] = -(auVar82[0xe] == -1);
        auVar74[0xf] = -(auVar82[0xf] == -1);
        if ((((((((((((((((SUB161(auVar74 >> 7,0) & 1) != 0 || (SUB161(auVar74 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar74 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar74 >> 0x1f,0) & 1) != 0) || (SUB161(auVar74 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar74 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar74 >> 0x37,0) & 1) != 0) || (SUB161(auVar74 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar74 >> 0x47,0) & 1) != 0) || (SUB161(auVar74 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar74 >> 0x57,0) & 1) != 0) || (SUB161(auVar74 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar74 >> 0x67,0) & 1) != 0) || (SUB161(auVar74 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar74 >> 0x77,0) & 1) != 0) || auVar74[0xf] < '\0') break;
        uVar27 = uVar27 + lVar32 + 0x10;
        lVar32 = lVar32 + 0x10;
      }
    }
LAB_1408aa890:
    iVar80 = *(int *)((longlong)param_1[0x12] + 8);
    uVar24 = *(uint *)((longlong)param_1[0x12] + 0xc);
    uStack_128 = *(undefined1 (***) [16])((longlong)param_1[0x12] + 8);
    puVar58 = (undefined *)(ulonglong)uVar24;
    uStack_120 = (undefined1 (*) [16])CONCAT44(uStack_120._4_4_,iVar107 + -1);
    if (plStack_f8[0x1b] != 0) {
      uVar27 = pdb_14148b010(pauStack_108,&uStack_128);
      lVar26 = plStack_f8[0x18];
      bVar42 = (byte)(uVar27 >> 0x39);
      auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar62 = pshuflw(auVar62,auVar62,0);
      lVar32 = 0;
      while( true ) {
        uVar27 = uVar27 & plStack_f8[0x19];
        auVar82 = *(undefined1 (*) [16])(lVar26 + uVar27);
        auVar96[0] = -(auVar82[0] == auVar62[0]);
        auVar96[1] = -(auVar82[1] == auVar62[1]);
        auVar96[2] = -(auVar82[2] == auVar62[2]);
        auVar96[3] = -(auVar82[3] == auVar62[3]);
        auVar96[4] = -(auVar82[4] == auVar62[4]);
        auVar96[5] = -(auVar82[5] == auVar62[5]);
        auVar96[6] = -(auVar82[6] == auVar62[6]);
        auVar96[7] = -(auVar82[7] == auVar62[7]);
        auVar96[8] = -(auVar82[8] == auVar62[0]);
        auVar96[9] = -(auVar82[9] == auVar62[1]);
        auVar96[10] = -(auVar82[10] == auVar62[2]);
        auVar96[0xb] = -(auVar82[0xb] == auVar62[3]);
        auVar96[0xc] = -(auVar82[0xc] == auVar62[4]);
        auVar96[0xd] = -(auVar82[0xd] == auVar62[5]);
        auVar96[0xe] = -(auVar82[0xe] == auVar62[6]);
        auVar96[0xf] = -(auVar82[0xf] == auVar62[7]);
        uVar52 = (ushort)(SUB161(auVar96 >> 7,0) & 1) | (ushort)(SUB161(auVar96 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar96 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar96 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar96 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar96 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar96 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar96 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar96 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar96 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar96 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar96 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar96 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar96 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar96 >> 0x77,0) & 1) << 0xe | (ushort)(auVar96[0xf] >> 7) << 0xf
        ;
        uVar54 = (uint)uVar52;
        while (uVar52 != 0) {
          uVar10 = 0;
          for (uVar11 = uVar54; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar46 = uVar10 + uVar27 & plStack_f8[0x19];
          if (((iVar80 == *(int *)(lVar26 + -0x18 + uVar46 * -0x18)) &&
              (uVar24 == *(uint *)(lVar26 + -0x14 + uVar46 * -0x18))) &&
             (lVar50 = lVar26 + uVar46 * -0x18, iVar107 + -1 == *(int *)(lVar50 + -0x10))) {
            if (plStack_f8[0x21] == 0) goto LAB_1408aaaa0;
            uVar27 = pdb_14148b1b0(pauStack_100,(undefined8 *)(lVar50 + -0xc));
            bVar42 = (byte)(uVar27 >> 0x39);
            auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
            auVar62 = pshuflw(auVar62,auVar62,0);
            lVar26 = 0;
            goto LAB_1408aa9eb;
          }
          uVar52 = (ushort)(uVar54 - 1) & (ushort)uVar54;
          uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar52);
        }
        auVar76[0] = -(auVar82[0] == -1);
        auVar76[1] = -(auVar82[1] == -1);
        auVar76[2] = -(auVar82[2] == -1);
        auVar76[3] = -(auVar82[3] == -1);
        auVar76[4] = -(auVar82[4] == -1);
        auVar76[5] = -(auVar82[5] == -1);
        auVar76[6] = -(auVar82[6] == -1);
        auVar76[7] = -(auVar82[7] == -1);
        auVar76[8] = -(auVar82[8] == -1);
        auVar76[9] = -(auVar82[9] == -1);
        auVar76[10] = -(auVar82[10] == -1);
        auVar76[0xb] = -(auVar82[0xb] == -1);
        auVar76[0xc] = -(auVar82[0xc] == -1);
        auVar76[0xd] = -(auVar82[0xd] == -1);
        auVar76[0xe] = -(auVar82[0xe] == -1);
        auVar76[0xf] = -(auVar82[0xf] == -1);
        if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar76 >> 0x1f,0) & 1) != 0) || (SUB161(auVar76 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar76 >> 0x37,0) & 1) != 0) || (SUB161(auVar76 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar76 >> 0x47,0) & 1) != 0) || (SUB161(auVar76 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar76 >> 0x57,0) & 1) != 0) || (SUB161(auVar76 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar76 >> 0x67,0) & 1) != 0) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
        uVar27 = uVar27 + lVar32 + 0x10;
        lVar32 = lVar32 + 0x10;
      }
    }
LAB_1408aaaa0:
    fVar61 = 0.0;
    if (fVar16 <= *(float *)*pauVar43) {
      fVar65 = (*(float *)*pauVar43 + fVar17) / fVar18;
      fVar61 = 0.0;
      if (0.0 <= fVar65) {
        fVar61 = fVar65;
      }
      fVar65 = fVar13;
      if (fVar61 <= fVar13) {
        fVar65 = fVar61;
      }
      fVar61 = (fVar111 - (fVar65 + fVar65)) * fVar65 * fVar65 * fVar15 + fVar14;
    }
    param_4 = (longlong *)(ulonglong)(iVar107 + 1);
    *(float *)*pauVar43 = fVar61;
  }
  uVar27 = *(ulonglong *)param_1[0x14];
  pauVar43 = param_1 + 0x13;
  if (1 < uVar27) {
    pauVar43 = *(undefined1 (**) [16])param_1[0x13];
    uVar27 = *(ulonglong *)((longlong)param_1[0x13] + 8);
  }
  if (uVar27 != 0) {
    param_4 = (longlong *)0x0;
    uVar46 = 0;
    do {
      uVar34 = *(ushort *)((undefined *)((longlong)*pauVar43 + 2) + (longlong)param_4) + uVar46;
      if (*(char *)((longlong)param_4 + (longlong)*pauVar43) == '\x05') {
        uVar35 = *(ulonglong *)param_1[9];
        if (uVar35 <= uVar46) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar46,uVar35,&UNK_143014950);
        }
        lVar26 = *(longlong *)((longlong)param_1[8] + 8);
        fVar61 = *(float *)(lVar26 + uVar46 * 4);
        if ((fVar61 == 0.0) && (!NAN(fVar61))) {
          if (uVar35 <= uVar34) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar34,uVar35,&UNK_143014968);
          }
          fVar61 = *(float *)(lVar26 + uVar34 * 4);
          if ((fVar61 == 0.0) && (!NAN(fVar61))) {
            if (uVar34 + 1 < uVar46) {
              pdb_142dc8420();
              goto LAB_1408ab546;
            }
            pub_142e32780(lVar26 + uVar46 * 4,0,((uVar34 + 1) - uVar46) * 4);
          }
        }
      }
      param_4 = (longlong *)((longlong)param_4 + 4);
      uVar46 = uVar34;
    } while ((longlong *)(uVar27 * 4) != param_4);
  }
  ppauVar45 = (undefined1 (**) [16])
              pdb_140c017b0(*(undefined4 *)((longlong)param_1[0x12] + 8),
                            *(undefined4 *)((longlong)param_1[0x12] + 0xc));
  uStack_128 = ppauVar45;
  if (*(longlong *)(lStack_1b8 + 0x150) != 0) {
    uVar27 = pdb_1400af0a0(puStack_190,&uStack_128);
    lVar26 = *(longlong *)(lStack_1b8 + 0x138);
    bVar42 = (byte)(uVar27 >> 0x39);
    auVar62 = ZEXT216(CONCAT11(bVar42,bVar42));
    auVar62 = pshuflw(auVar62,auVar62,0);
    lVar32 = 0;
    while( true ) {
      uVar27 = uVar27 & *(ulonglong *)(lStack_1b8 + 0x140);
      auVar82 = *(undefined1 (*) [16])(lVar26 + uVar27);
      auVar99[0] = -(auVar82[0] == auVar62[0]);
      auVar99[1] = -(auVar82[1] == auVar62[1]);
      auVar99[2] = -(auVar82[2] == auVar62[2]);
      auVar99[3] = -(auVar82[3] == auVar62[3]);
      auVar99[4] = -(auVar82[4] == auVar62[4]);
      auVar99[5] = -(auVar82[5] == auVar62[5]);
      auVar99[6] = -(auVar82[6] == auVar62[6]);
      auVar99[7] = -(auVar82[7] == auVar62[7]);
      auVar99[8] = -(auVar82[8] == auVar62[0]);
      auVar99[9] = -(auVar82[9] == auVar62[1]);
      auVar99[10] = -(auVar82[10] == auVar62[2]);
      auVar99[0xb] = -(auVar82[0xb] == auVar62[3]);
      auVar99[0xc] = -(auVar82[0xc] == auVar62[4]);
      auVar99[0xd] = -(auVar82[0xd] == auVar62[5]);
      auVar99[0xe] = -(auVar82[0xe] == auVar62[6]);
      auVar99[0xf] = -(auVar82[0xf] == auVar62[7]);
      uVar52 = (ushort)(SUB161(auVar99 >> 7,0) & 1) | (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar99 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar99 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe | (ushort)(auVar99[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar52;
      while (uVar52 != 0) {
        uVar54 = 0;
        for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar54 = uVar54 + 1;
        }
        lVar50 = (uVar54 + uVar27 & *(ulonglong *)(lStack_1b8 + 0x140)) * -0x98;
        if (ppauVar45 == *(undefined1 (***) [16])(lVar26 + -0x98 + lVar50)) {
          pauVar43 = (undefined1 (*) [16])(lVar26 + lVar50);
          puVar56 = *(undefined **)((longlong)param_1[8] + 8);
          uVar27 = *(ulonglong *)param_1[9];
          if (uVar27 != *(ulonglong *)(pauVar43[-4] + 8)) goto LAB_1408aace0;
          if (uVar27 == 0) goto LAB_1408aa3db;
          uVar46 = 0;
          goto LAB_1408aacc0;
        }
        uVar52 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar52);
      }
      auVar78[0] = -(auVar82[0] == -1);
      auVar78[1] = -(auVar82[1] == -1);
      auVar78[2] = -(auVar82[2] == -1);
      auVar78[3] = -(auVar82[3] == -1);
      auVar78[4] = -(auVar82[4] == -1);
      auVar78[5] = -(auVar82[5] == -1);
      auVar78[6] = -(auVar82[6] == -1);
      auVar78[7] = -(auVar82[7] == -1);
      auVar78[8] = -(auVar82[8] == -1);
      auVar78[9] = -(auVar82[9] == -1);
      auVar78[10] = -(auVar82[10] == -1);
      auVar78[0xb] = -(auVar82[0xb] == -1);
      auVar78[0xc] = -(auVar82[0xc] == -1);
      auVar78[0xd] = -(auVar82[0xd] == -1);
      auVar78[0xe] = -(auVar82[0xe] == -1);
      auVar78[0xf] = -(auVar82[0xf] == -1);
      if ((((((((((((((((SUB161(auVar78 >> 7,0) & 1) != 0 || (SUB161(auVar78 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar78 >> 0x17,0) & 1) != 0) || (SUB161(auVar78 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar78 >> 0x27,0) & 1) != 0) || (SUB161(auVar78 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar78 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar78 >> 0x3f,0) & 1) != 0) || (SUB161(auVar78 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar78 >> 0x4f,0) & 1) != 0) || (SUB161(auVar78 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar78 >> 0x5f,0) & 1) != 0) || (SUB161(auVar78 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar78 >> 0x6f,0) & 1) != 0) || (SUB161(auVar78 >> 0x77,0) & 1) != 0) ||
          auVar78[0xf] < '\0') break;
      uVar27 = uVar27 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143014938);
}

