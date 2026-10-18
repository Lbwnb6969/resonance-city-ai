// VA 0x14088b1a0, PDB extent 13778 bytes
// system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
   Extent: 13778 */

void pdb_14088b1a0(undefined1 (*param_1) [16],longlong *param_2,byte *param_3,ulonglong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  char cVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  byte *pbVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined4 *puVar34;
  int *piVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined1 (*pauVar38) [16];
  longlong *plVar39;
  byte *pbVar40;
  undefined1 (*pauVar41) [16];
  byte bVar42;
  ulonglong uVar43;
  char *pcVar44;
  longlong lVar45;
  undefined *puVar46;
  undefined *puVar47;
  uint uVar48;
  undefined1 (*pauVar49) [16];
  undefined1 *puVar50;
  ulonglong uVar51;
  ulonglong *puVar52;
  ushort uVar53;
  uint uVar54;
  ulonglong *puVar55;
  undefined1 (*unaff_R13) [16];
  longlong *plVar56;
  bool bVar57;
  byte bVar58;
  undefined4 uVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
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
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 (*in_stack_fffffffffffffb88) [16];
  longlong in_stack_fffffffffffffb90;
  longlong **pplVar90;
  undefined8 *in_stack_fffffffffffffb98;
  undefined4 uVar91;
  undefined8 in_stack_fffffffffffffba8;
  undefined4 uVar92;
  undefined8 uStack_428;
  longlong lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 (*pauStack_408) [16];
  undefined1 auStack_400 [16];
  longlong lStack_3f0;
  longlong lStack_3e8;
  undefined1 auStack_3e0 [16];
  int iStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 uStack_3a8;
  undefined1 (*pauStack_398) [16];
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined8 uStack_380;
  undefined8 uStack_378;
  longlong *plStack_370;
  undefined8 uStack_368;
  longlong *plStack_360;
  undefined4 uStack_358;
  undefined1 auStack_350 [8];
  undefined4 uStack_348;
  undefined1 (*pauStack_340) [16];
  undefined4 uStack_338;
  undefined1 (*pauStack_330) [16];
  undefined8 uStack_328;
  longlong *plStack_320;
  undefined4 *puStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong *plStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 (*pauStack_2e8) [16];
  undefined8 uStack_2e0;
  longlong *plStack_2d8;
  ulonglong *puStack_2d0;
  undefined1 (*pauStack_2c8) [16];
  ulonglong *puStack_2c0;
  longlong *plStack_2b8;
  longlong *plStack_2b0;
  undefined1 (*pauStack_2a8) [16];
  undefined1 (*pauStack_2a0) [16];
  undefined4 uStack_298;
  undefined4 uStack_294;
  ushort uStack_290;
  undefined2 uStack_28e;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined4 uStack_234;
  longlong lStack_230;
  byte *pbStack_228;
  undefined1 (*pauStack_220) [16];
  undefined8 uStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  longlong *plStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  byte *pbStack_1b8;
  undefined1 (*pauStack_1b0) [16];
  longlong *plStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  longlong lStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined1 uStack_141;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  ulonglong uStack_130;
  byte *pbStack_128;
  undefined1 (*pauStack_120) [16];
  ulonglong *puStack_118;
  undefined1 (*pauStack_110) [16];
  ulonglong uStack_108;
  undefined1 (*pauStack_100) [16];
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar39 = param_2;
  pbStack_128 = param_3;
  cStack_f3 = pdb_140e94b40();
  if (cStack_f3 == '\0') goto LAB_14088b3aa;
  uVar43 = 0x66;
  lVar25 = pdb_14088e810(0x66);
  plVar56 = (longlong *)&UNK_1430122f0;
  if (lVar25 == 1) {
    if ((longlong *)0x66 < plVar39) {
      pdb_142dc8070(&UNK_1430122f0,0x66,0,plVar39,&UNK_1430123e0);
LAB_14088d6d6:
      pdb_142dc8070(&UNK_1430122f0,0x66);
LAB_14088d6f9:
      uStack_208 = (undefined1 (*) [16])&uStack_198;
      uStack_200 = pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_208,&UNK_14330e310);
    }
    uVar26 = pdb_14088e810(plVar39);
    if ((uVar26 & 1) != 0) {
      if ((undefined *)0x66 < (undefined *)((longlong)plVar39 + 2)) goto LAB_14088d6d6;
      uVar43 = 100 - (longlong)plVar39;
      plVar56 = (longlong *)((longlong)plVar39 + 0x1430122f2);
    }
  }
  puVar46 = &UNK_14301210b;
  puVar55 = (ulonglong *)&UNK_1430120b0;
  do {
    bVar42 = puVar46[-1];
    uVar24 = (uint)(char)bVar42;
    if ((char)bVar42 < '\0') {
      bVar58 = puVar46[-2];
      if ((char)bVar58 < -0x40) {
        bVar6 = puVar46[-3];
        if ((char)bVar6 < -0x40) {
          pbVar28 = puVar46 + -4;
          puVar46 = puVar46 + -4;
          uVar24 = bVar6 & 0x3f | (*pbVar28 & 7) << 6;
        }
        else {
          puVar46 = puVar46 + -3;
          uVar24 = bVar6 & 0xf;
        }
        uVar24 = bVar58 & 0x3f | uVar24 << 6;
      }
      else {
        puVar46 = puVar46 + -2;
        uVar24 = bVar58 & 0x1f;
      }
      uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
      if (uVar24 != 0x5c) goto LAB_14088b314;
LAB_14088b326:
      puVar47 = puVar46 + -0x1430120af;
      if ((undefined *)0x5b < puVar47) {
        pdb_142dc8070(&UNK_1430120b0,0x5b,puVar47,0x5b,&UNK_1430123c0);
LAB_14088d5b0:
        uStack_f1 = 1;
        pdb_142dc8070(&UNK_1430120b0,0x5b);
        goto LAB_14088d730;
      }
      unaff_R13 = (undefined1 (*) [16])(0x5b - (longlong)puVar47);
      puVar55 = (ulonglong *)(puVar46 + 1);
      goto LAB_14088b349;
    }
    puVar46 = puVar46 + -1;
    if (uVar24 == 0x5c) goto LAB_14088b326;
LAB_14088b314:
    if (uVar24 == 0x2f) goto LAB_14088b326;
  } while (puVar46 != &UNK_1430120b0);
  unaff_R13 = (undefined1 (*) [16])0x5b;
LAB_14088b349:
  plVar27 = (longlong *)pdb_140e97000();
  plVar39 = plVar56;
  if ((char)plVar27[0xd] != '\x01') goto LAB_14088d36a;
LAB_14088b358:
  if (*plVar27 != 0) goto LAB_14088d35e;
  *plVar27 = -1;
  in_stack_fffffffffffffb98 = (undefined8 *)0x0;
  in_stack_fffffffffffffb90 = 0;
  in_stack_fffffffffffffb88 = unaff_R13;
  pauStack_100 = (undefined1 (*) [16])plVar27;
  plStack_2b0 = (longlong *)pdb_140e94f10(plVar27 + 1,plVar39,uVar43,puVar55,unaff_R13,1,0);
  *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
LAB_14088b3aa:
  uStack_328 = pdb_140c47770(param_1);
  pauStack_120 = (undefined1 (*) [16])0x0;
  puStack_118 = (ulonglong *)0x8;
  pauStack_110 = (undefined1 (*) [16])0x0;
  uStack_f1 = 1;
  plStack_320 = plVar39;
  uStack_2e0 = uStack_328;
  plStack_2d8 = plVar39;
  cVar21 = pdb_140e94b40();
  pauStack_1c0 = (undefined1 (*) [16])CONCAT71(pauStack_1c0._1_7_,cVar21);
  if (cVar21 == '\0') {
    pauStack_398 = (undefined1 (*) [16])0x0;
  }
  else {
    puVar47 = &UNK_14301210b;
    puVar46 = &UNK_1430120b0;
    do {
      bVar42 = puVar47[-1];
      uVar24 = (uint)(char)bVar42;
      if ((char)bVar42 < '\0') {
        bVar58 = puVar47[-2];
        if ((char)bVar58 < -0x40) {
          bVar6 = puVar47[-3];
          if ((char)bVar6 < -0x40) {
            pbVar28 = puVar47 + -4;
            puVar47 = puVar47 + -4;
            uVar24 = bVar6 & 0x3f | (*pbVar28 & 7) << 6;
          }
          else {
            puVar47 = puVar47 + -3;
            uVar24 = bVar6 & 0xf;
          }
          uVar24 = bVar58 & 0x3f | uVar24 << 6;
        }
        else {
          puVar47 = puVar47 + -2;
          uVar24 = bVar58 & 0x1f;
        }
        uVar24 = (uint)(bVar42 & 0x3f) | uVar24 << 6;
        if (uVar24 != 0x5c) goto LAB_14088b494;
LAB_14088b4ac:
        if ((undefined *)0x5b < puVar47 + -0x1430120af) goto LAB_14088d5b0;
        in_stack_fffffffffffffb88 = (undefined1 (*) [16])(0x5b - (longlong)(puVar47 + -0x1430120af))
        ;
        puVar46 = puVar47 + 1;
        goto LAB_14088b4ce;
      }
      puVar47 = puVar47 + -1;
      if (uVar24 == 0x5c) goto LAB_14088b4ac;
LAB_14088b494:
      if (uVar24 == 0x2f) goto LAB_14088b4ac;
    } while (puVar47 != &UNK_1430120b0);
    in_stack_fffffffffffffb88 = (undefined1 (*) [16])0x5b;
LAB_14088b4ce:
    uStack_f1 = 1;
    plVar56 = (longlong *)pdb_140e97000();
    if ((char)plVar56[0xd] != '\x01') {
      uStack_f1 = 1;
      plVar56 = (longlong *)pdb_142dde6e0(plVar56,0);
      if (plVar56 == (longlong *)0x0) {
        uStack_f1 = 1;
        pdb_142dc7890(&UNK_14330e598);
LAB_14088d730:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
    }
    if (*plVar56 != 0) {
      uStack_f1 = 1;
      pdb_142dc8090(&UNK_14330e608);
      goto LAB_14088d730;
    }
    *plVar56 = -1;
    in_stack_fffffffffffffb98 = (undefined8 *)0x0;
    in_stack_fffffffffffffb90 = 0;
    plVar39 = (longlong *)&UNK_14301210b;
    pauStack_100 = (undefined1 (*) [16])plVar56;
    pauStack_390 = (undefined1 (*) [16])
                   pdb_140e94f10(plVar56 + 1,&UNK_14301210b,0x10,puVar46,in_stack_fffffffffffffb88,1
                                 ,0);
    *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
    pauStack_398 = (undefined1 (*) [16])0x1;
    pauStack_140 = pauStack_390;
  }
  plVar56 = (longlong *)pdb_140f3bda0();
  if ((char)plVar56[2] == '\x01') {
    lStack_178 = *plVar56;
    plVar39 = (longlong *)plVar56[1];
  }
  else {
    lStack_178 = pdb_140f4fd10();
    *plVar56 = lStack_178;
    plVar56[1] = (longlong)plVar39;
    *(undefined1 *)(plVar56 + 2) = 1;
  }
  *plVar56 = lStack_178 + 1;
  pauStack_188 = _DAT_143012280;
  lStack_180 = _UNK_143012288;
  uStack_198 = _DAT_143012270;
  pauStack_190 = _UNK_143012278;
  lStack_310 = *param_2;
  plStack_170 = plVar39;
  pdb_140a2fb40(&pauStack_2a8);
  uVar24 = (uint)uStack_290;
  plStack_160 = (longlong *)*param_5;
  lStack_150 = *param_6;
  lStack_158 = param_6[1];
  pauStack_1b0 = (undefined1 (*) [16])*param_4;
  pauVar41 = pauStack_2a8;
  pauStack_138 = pauStack_2a0;
  uVar43 = CONCAT44(uStack_284,uStack_288);
  while (uVar43 != 0) {
    if ((short)uVar24 == 0) {
      do {
        auVar60 = *pauStack_138;
        pauVar41 = pauVar41 + -0x98;
        pauStack_138 = pauStack_138 + 1;
        uVar24 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar24 == 0);
    }
    uVar54 = 0;
    for (uVar48 = uVar24; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
      uVar54 = uVar54 + 1;
    }
    uVar24 = uVar24 - 1 & uVar24;
    lVar25 = (ulonglong)uVar54 * -0x98;
    pauStack_100 = *(undefined1 (**) [16])((longlong)pauVar41 + lVar25 + -0x98);
    pauVar38 = *(undefined1 (**) [16])((longlong)pauVar41 + lVar25 + -0x60);
    auVar60 = *pauVar38;
    pauVar33 = pauVar38 + 1;
    lVar25 = *(longlong *)((longlong)pauVar41 + lVar25 + -0x48);
    uVar54 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
    pauStack_1c8 = pauVar41;
    uStack_108 = uVar43 - 1;
    while (lVar25 != 0) {
      if ((short)uVar54 == 0) {
        do {
          auVar60 = *pauVar33;
          pauVar38 = pauVar38 + -0x68;
          pauVar33 = pauVar33 + 1;
          uVar54 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar54 == 0);
      }
      uVar48 = 0;
      for (uVar9 = uVar54; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar48 = uVar48 + 1;
      }
      uVar59 = *(undefined4 *)((longlong)pauVar38 + (ulonglong)uVar48 * -0x68 + -0x68);
      pbVar28 = (byte *)pdb_140c45840(&uStack_328,uVar59);
      uVar54 = uVar54 - 1 & uVar54;
      lVar25 = lVar25 + -1;
      if (pbVar28 != (byte *)0x0) {
        bVar42 = *pbVar28;
        if (((bVar42 < 0x18) && ((0x800186U >> (bVar42 & 0x1f) & 1) != 0)) ||
           ((bVar42 == 0 &&
            (*(char *)((longlong)pauVar38 + (ulonglong)uVar48 * -0x68 + -7) == '\x03')))) {
          uVar43 = pdb_140b54b40(plStack_160,pauStack_100);
          if ((((((uVar43 & 0xffffffff) != 0) &&
                (uVar26 = uVar43 & 0xffffffff ^ 0xffffffff,
                uVar26 < *(ulonglong *)(lStack_158 + 0x10))) &&
               (piVar35 = (int *)(uVar26 * 0x18 + *(longlong *)(lStack_158 + 8)),
               piVar35[4] == (int)(uVar43 >> 0x20))) &&
              ((*piVar35 != 0 &&
               (uVar43 = *(ulonglong *)(piVar35 + 2),
               (uVar43 & 0xffffffff) < *(ulonglong *)(lStack_150 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_150 + 0x28) + (uVar43 >> 6 & 0x3ffffff) * 8) >>
               (uVar43 & 0x3f) & 1) != 0)) {
            if (*(ulonglong *)(lStack_150 + 0x110) <
                *(ulonglong *)(*(longlong *)(lStack_158 + 0x1a0) + 0x40 + (uVar43 >> 0x20) * 0x48))
            {
              lVar29 = *(longlong *)(lStack_158 + 0x1a0) + (uVar43 >> 0x20) * 0x48;
              uVar43 = *(ulonglong *)
                        (*(longlong *)(lVar29 + 0x38) + *(ulonglong *)(lStack_150 + 0x110) * 8);
              if (uVar43 == 0) goto LAB_14088b843;
              uStack_130 = *(ulonglong *)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar43 * 0x30);
            }
            else {
LAB_14088b843:
              uStack_130 = 0;
            }
            uVar48 = piVar35[1];
            pdb_140c45ec0(&uStack_208,pauStack_1b0,uVar59,&UNK_143012240);
            lVar29 = (ulonglong)~uVar48 * 0x58;
            uStack_298 = uStack_1f0;
            pauStack_2a0 = uStack_1f8;
            puVar31 = (undefined8 *)(uStack_130 + 0x24 + lVar29);
            uVar30 = *puVar31;
            uVar15 = puVar31[1];
            auVar60 = *(undefined1 (*) [16])(uStack_130 + 0x30 + lVar29);
            uStack_27c = auVar60._4_4_;
            uStack_278 = auVar60._8_4_;
            uStack_274 = auVar60._12_4_;
            uStack_28c = (undefined4)uVar30;
            uStack_288 = (undefined4)((ulonglong)uVar30 >> 0x20);
            uStack_284 = (undefined4)uVar15;
            uStack_280 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uStack_294 = *(undefined4 *)(uStack_130 + 0x4c + lVar29);
            uVar91 = *(undefined4 *)(uStack_130 + 0x50 + lVar29);
            pauStack_2a8 = pauStack_100;
            uStack_290 = (ushort)uVar91;
            uStack_28e = (undefined2)((uint)uVar91 >> 0x10);
            pdb_1414b5780(&uStack_428,&uStack_198,uVar59,&pauStack_2a8);
          }
        }
      }
    }
    unaff_R13 = (undefined1 (*) [16])0x0;
    pauVar41 = pauStack_1c8;
    uVar43 = uStack_108;
  }
  auVar60 = *uStack_198;
  pauVar41 = uStack_198 + 1;
  uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
  pauStack_100 = (undefined1 (*) [16])(param_10 + 4);
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar14 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  pauVar33 = uStack_198;
  lVar25 = lStack_180;
  while (lVar25 != 0) {
    lVar25 = lVar25 + -1;
    if ((short)uVar24 == 0) {
      do {
        auVar60 = *pauVar41;
        pauVar33 = pauVar33 + -0x40;
        pauVar41 = pauVar41 + 1;
        uVar24 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar24 == 0);
    }
    iVar8 = 0;
    for (uVar54 = uVar24; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
      iVar8 = iVar8 + 1;
    }
    unaff_R13 = (undefined1 (*) [16])((longlong)pauVar33 - (ulonglong)(uint)(iVar8 << 6));
    pauVar38 = unaff_R13 + -4;
    if (param_10[3] != 0) {
      uVar43 = pdb_1400aede0(pauStack_100,pauVar38);
      pauVar32 = pauStack_110;
      bVar42 = (byte)(uVar43 >> 0x39);
      auVar60 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar60 = pshuflw(auVar60,auVar60,0);
      lVar29 = 0;
      while( true ) {
        uVar43 = uVar43 & param_10[1];
        auVar5 = *(undefined1 (*) [16])(*param_10 + uVar43);
        auVar70[0] = -(auVar5[0] == auVar60[0]);
        auVar70[1] = -(auVar5[1] == auVar60[1]);
        auVar70[2] = -(auVar5[2] == auVar60[2]);
        auVar70[3] = -(auVar5[3] == auVar60[3]);
        auVar70[4] = -(auVar5[4] == auVar60[4]);
        auVar70[5] = -(auVar5[5] == auVar60[5]);
        auVar70[6] = -(auVar5[6] == auVar60[6]);
        auVar70[7] = -(auVar5[7] == auVar60[7]);
        auVar70[8] = -(auVar5[8] == auVar60[0]);
        auVar70[9] = -(auVar5[9] == auVar60[1]);
        auVar70[10] = -(auVar5[10] == auVar60[2]);
        auVar70[0xb] = -(auVar5[0xb] == auVar60[3]);
        auVar70[0xc] = -(auVar5[0xc] == auVar60[4]);
        auVar70[0xd] = -(auVar5[0xd] == auVar60[5]);
        auVar70[0xe] = -(auVar5[0xe] == auVar60[6]);
        auVar70[0xf] = -(auVar5[0xf] == auVar60[7]);
        uVar53 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf
        ;
        uVar54 = (uint)uVar53;
        if (uVar53 != 0) {
          do {
            uVar48 = 0;
            for (uVar9 = uVar54; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar48 = uVar48 + 1;
            }
            lVar45 = *param_10 + (uVar48 + uVar43 & param_10[1]) * -0x40;
            if (*(int *)*pauVar38 == *(int *)(lVar45 + -0x40)) {
              pauStack_138 = *(undefined1 (**) [16])(unaff_R13[-4] + 8);
              if (pauStack_138 != *(undefined1 (**) [16])(lVar45 + -0x38)) {
                if (pauStack_110 == pauStack_120) {
                  pdb_142d7e8a0(&pauStack_120);
                }
                puStack_118[(longlong)pauVar32] = (ulonglong)pauStack_138;
                pauStack_110 = (undefined1 (*) [16])(*pauVar32 + 1);
                uVar43 = *(ulonglong *)(lVar45 + -0x38);
                if (pauStack_110 == pauStack_120) {
                  pdb_142d7e8a0(&pauStack_120);
                }
                puStack_118[(longlong)(*pauVar32 + 1)] = uVar43;
                unaff_R13 = (undefined1 (*) [16])(*pauVar32 + 2);
                pauStack_110 = unaff_R13;
                goto LAB_14088bc07;
              }
              if ((*(float *)(unaff_R13[-3] + 0xc) == *(float *)(lVar45 + -0x24)) &&
                 (!NAN(*(float *)(unaff_R13[-3] + 0xc)) && !NAN(*(float *)(lVar45 + -0x24)))) {
                if ((*(float *)unaff_R13[-3] == *(float *)(lVar45 + -0x30)) &&
                   (!NAN(*(float *)unaff_R13[-3]) && !NAN(*(float *)(lVar45 + -0x30)))) {
                  if ((*(float *)(unaff_R13[-3] + 4) == *(float *)(lVar45 + -0x2c)) &&
                     (!NAN(*(float *)(unaff_R13[-3] + 4)) && !NAN(*(float *)(lVar45 + -0x2c)))) {
                    if ((*(float *)(unaff_R13[-3] + 8) == *(float *)(lVar45 + -0x28)) &&
                       (!NAN(*(float *)(unaff_R13[-3] + 8)) && !NAN(*(float *)(lVar45 + -0x28)))) {
                      if ((*(float *)(unaff_R13[-2] + 0xc) == *(float *)(lVar45 + -0x14)) &&
                         (!NAN(*(float *)(unaff_R13[-2] + 0xc)) && !NAN(*(float *)(lVar45 + -0x14)))
                         ) {
                        if ((*(float *)unaff_R13[-1] == *(float *)(lVar45 + -0x10)) &&
                           (!NAN(*(float *)unaff_R13[-1]) && !NAN(*(float *)(lVar45 + -0x10)))) {
                          if ((*(float *)(unaff_R13[-1] + 4) == *(float *)(lVar45 + -0xc)) &&
                             (!NAN(*(float *)(unaff_R13[-1] + 4)) && !NAN(*(float *)(lVar45 + -0xc))
                             )) {
                            if ((*(float *)(unaff_R13[-1] + 8) == *(float *)(lVar45 + -8)) &&
                               (!NAN(*(float *)(unaff_R13[-1] + 8)) && !NAN(*(float *)(lVar45 + -8))
                               )) {
                              if ((*(float *)(unaff_R13[-2] + 4) == *(float *)(lVar45 + -0x1c)) &&
                                 (!NAN(*(float *)(unaff_R13[-2] + 4)) &&
                                  !NAN(*(float *)(lVar45 + -0x1c)))) {
                                if (((*(float *)(unaff_R13[-2] + 8) == *(float *)(lVar45 + -0x18))
                                    && (((!NAN(*(float *)(unaff_R13[-2] + 8)) &&
                                          !NAN(*(float *)(lVar45 + -0x18)) &&
                                         (unaff_R13[-1][0xc] == *(char *)(lVar45 + -4))) &&
                                        (unaff_R13[-1][0xd] == *(char *)(lVar45 + -3))))) &&
                                   (*(int *)unaff_R13[-2] == *(int *)(lVar45 + -0x20)))
                                goto LAB_14088bc07;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (pauStack_110 == pauStack_120) {
                pdb_142d7e8a0(&pauStack_120);
              }
              puStack_118[(longlong)pauVar32] = (ulonglong)pauStack_138;
              unaff_R13 = (undefined1 (*) [16])(*pauVar32 + 1);
              pauStack_110 = unaff_R13;
              goto LAB_14088bc07;
            }
            uVar53 = (ushort)(uVar54 - 1) & (ushort)uVar54;
            uVar54 = CONCAT22((short)(uVar54 - 1 >> 0x10),uVar53);
          } while (uVar53 != 0);
        }
        auVar62[0] = -(auVar5[0] == (char)iVar11);
        auVar62[1] = -(auVar5[1] == (char)((uint)iVar11 >> 8));
        auVar62[2] = -(auVar5[2] == (char)((uint)iVar11 >> 0x10));
        auVar62[3] = -(auVar5[3] == (char)((uint)iVar11 >> 0x18));
        auVar62[4] = -(auVar5[4] == (char)iVar12);
        auVar62[5] = -(auVar5[5] == (char)((uint)iVar12 >> 8));
        auVar62[6] = -(auVar5[6] == (char)((uint)iVar12 >> 0x10));
        auVar62[7] = -(auVar5[7] == (char)((uint)iVar12 >> 0x18));
        auVar62[8] = -(auVar5[8] == (char)iVar13);
        auVar62[9] = -(auVar5[9] == (char)((uint)iVar13 >> 8));
        auVar62[10] = -(auVar5[10] == (char)((uint)iVar13 >> 0x10));
        auVar62[0xb] = -(auVar5[0xb] == (char)((uint)iVar13 >> 0x18));
        auVar62[0xc] = -(auVar5[0xc] == (char)iVar14);
        auVar62[0xd] = -(auVar5[0xd] == (char)((uint)iVar14 >> 8));
        auVar62[0xe] = -(auVar5[0xe] == (char)((uint)iVar14 >> 0x10));
        auVar62[0xf] = -(auVar5[0xf] == (char)((uint)iVar14 >> 0x18));
        if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x1f,0) & 1) != 0) || (SUB161(auVar62 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x37,0) & 1) != 0) || (SUB161(auVar62 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x47,0) & 1) != 0) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
        uVar43 = uVar43 + lVar29 + 0x10;
        lVar29 = lVar29 + 0x10;
      }
    }
    pauVar32 = pauStack_110;
    uVar43 = *(ulonglong *)(unaff_R13[-4] + 8);
    if (pauStack_110 == pauStack_120) {
      pdb_142d7e8a0(&pauStack_120);
    }
    puStack_118[(longlong)pauVar32] = uVar43;
    unaff_R13 = (undefined1 (*) [16])(*pauVar32 + 1);
    pauStack_110 = unaff_R13;
LAB_14088bc07:
    uVar30 = pdb_1400aede0(pauStack_100,pauVar38);
    pdb_1414ae320(&pauStack_2a8,param_10,uVar30);
    uVar24 = uVar24 - 1 & uVar24;
  }
  pauVar33 = (undefined1 (*) [16])*param_10;
  lVar25 = param_10[3];
  auVar60 = *pauVar33;
  pauVar41 = pauVar33 + 1;
  uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
  param_1 = (undefined1 (*) [16])&pauStack_120;
  while (pauVar38 = pauStack_110, bVar57 = lVar25 != 0, lVar25 = lVar25 + -1, bVar57) {
    if ((short)uVar24 == 0) {
      do {
        auVar60 = *pauVar41;
        pauVar33 = pauVar33 + -0x40;
        pauVar41 = pauVar41 + 1;
        uVar24 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar24 == 0);
    }
    iVar11 = 0;
    for (uVar54 = uVar24; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
      iVar11 = iVar11 + 1;
    }
    unaff_R13 = *(undefined1 (**) [16])
                 ((longlong)pauVar33 + (-0x38 - (ulonglong)(uint)(iVar11 << 6)));
    if (pauStack_110 == pauStack_120) {
      pdb_142d7e8a0(param_1);
    }
    uVar24 = uVar24 - 1 & uVar24;
    puStack_118[(longlong)pauVar38] = (ulonglong)unaff_R13;
    pauStack_110 = (undefined1 (*) [16])(*pauVar38 + 1);
  }
  uStack_288 = (undefined4)lStack_178;
  uStack_284 = (undefined4)((ulonglong)lStack_178 >> 0x20);
  uStack_280 = SUB84(plStack_170,0);
  uStack_27c = (undefined4)((ulonglong)plStack_170 >> 0x20);
  uStack_298 = SUB84(pauStack_188,0);
  uStack_294 = (undefined4)((ulonglong)pauStack_188 >> 0x20);
  uStack_290 = (ushort)lStack_180;
  uStack_28e = (undefined2)((ulonglong)lStack_180 >> 0x10);
  uStack_28c = (undefined4)((ulonglong)lStack_180 >> 0x20);
  pauStack_2a8 = uStack_198;
  pauStack_2a0 = pauStack_190;
  lVar25 = param_10[1];
  if (lVar25 != 0) {
    lVar29 = lVar25 * 0x40 + 0x40;
    uVar43 = lVar25 + lVar29 + 0x11;
    if (uVar43 != 0) {
      pub_1406abac0((byte *)(*param_10 - lVar29),uVar43,0x10);
    }
  }
  plVar39 = plStack_160;
  auVar60._4_4_ = uStack_294;
  auVar60._0_4_ = uStack_298;
  auVar60._8_2_ = uStack_290;
  auVar60._10_2_ = uStack_28e;
  auVar60._12_4_ = uStack_28c;
  auVar5._4_4_ = uStack_284;
  auVar5._0_4_ = uStack_288;
  auVar5._8_4_ = uStack_280;
  auVar5._12_4_ = uStack_27c;
  *(undefined1 (*) [16])(param_10 + 4) = auVar5;
  *(undefined1 (*) [16])(param_10 + 2) = auVar60;
  *param_10 = (longlong)pauStack_2a8;
  param_10[1] = (longlong)pauStack_2a0;
  if ((char)pauStack_1c0 != '\0') {
    uStack_f1 = 1;
    plVar56 = (longlong *)pdb_140e97000();
    if ((char)plVar56[0xd] != '\x01') {
      uStack_f1 = 1;
      plVar56 = (longlong *)pdb_142dde6e0(plVar56,0);
      if (plVar56 == (longlong *)0x0) {
        uStack_f1 = 1;
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_14088d730;
      }
    }
    if (*plVar56 != 0) {
      uStack_f1 = 1;
      pdb_142dc8090(&UNK_14330e608);
      goto LAB_14088d730;
    }
    *plVar56 = -1;
    pauStack_100 = (undefined1 (*) [16])plVar56;
    pdb_140e95370(plVar56 + 1,pauStack_140);
    *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
  }
  pauVar41 = pauStack_110;
  if ((undefined1 (*) [16])0x1 < pauStack_110) {
    if (pauStack_110 < (undefined1 (*) [16])0x15) {
      puVar55 = puStack_118 + 1;
      lVar25 = 8;
      do {
        uVar26 = puVar55[-1];
        uVar43 = *puVar55;
        lVar29 = lVar25;
        if (uVar43 < uVar26) {
          do {
            *(ulonglong *)((longlong)puStack_118 + lVar29) = uVar26;
            puVar52 = puStack_118;
            if (lVar29 == 8) goto LAB_14088d31e;
            uVar26 = *(ulonglong *)((longlong)puStack_118 + lVar29 + -0x10);
            lVar29 = lVar29 + -8;
          } while (uVar43 < uVar26);
          puVar52 = (ulonglong *)(lVar29 + (longlong)puStack_118);
LAB_14088d31e:
          *puVar52 = uVar43;
        }
        puVar55 = puVar55 + 1;
        lVar25 = lVar25 + 8;
      } while (puVar55 != puStack_118 + (longlong)pauStack_110);
    }
    else {
      uStack_f1 = 1;
      pdb_1414e0c50(puStack_118,pauStack_110,&uStack_141);
    }
    pauVar41 = pauStack_110;
    if ((undefined1 (*) [16])0x1 < pauStack_110) {
      puVar50 = (undefined1 *)0x0;
      do {
        if (puStack_118[(longlong)puVar50 + 1] == puStack_118[(longlong)puVar50]) {
          pauVar33 = (undefined1 (*) [16])(puVar50 + 2);
          pauVar41 = (undefined1 (*) [16])(puVar50 + 1);
          if (pauVar33 < pauStack_110) {
            if (((int)pauStack_110 - (int)puVar50 & 1U) != 0) {
              if (puStack_118[(longlong)puVar50 + 2] != puStack_118[(longlong)puVar50]) {
                puStack_118[(longlong)puVar50 + 1] = puStack_118[(longlong)puVar50 + 2];
                pauVar41 = (undefined1 (*) [16])(puVar50 + 2);
              }
              pauVar33 = (undefined1 (*) [16])(puVar50 + 3);
            }
            plVar39 = plStack_160;
            if (pauStack_110[-1] + 0xd != puVar50) goto LAB_14088d681;
          }
          break;
        }
        puVar50 = puVar50 + 1;
      } while (pauStack_110[-1] + 0xf != puVar50);
    }
  }
  goto LAB_14088bddf;
LAB_14088c72e:
  uVar26 = uVar26 & uVar43;
  auVar5 = *(undefined1 (*) [16])(lVar25 + uVar26);
  auVar73[0] = -(auVar5[0] == auVar60[0]);
  auVar73[1] = -(auVar5[1] == auVar60[1]);
  auVar73[2] = -(auVar5[2] == auVar60[2]);
  auVar73[3] = -(auVar5[3] == auVar60[3]);
  auVar73[4] = -(auVar5[4] == auVar60[4]);
  auVar73[5] = -(auVar5[5] == auVar60[5]);
  auVar73[6] = -(auVar5[6] == auVar60[6]);
  auVar73[7] = -(auVar5[7] == auVar60[7]);
  auVar73[8] = -(auVar5[8] == auVar60[0]);
  auVar73[9] = -(auVar5[9] == auVar60[1]);
  auVar73[10] = -(auVar5[10] == auVar60[2]);
  auVar73[0xb] = -(auVar5[0xb] == auVar60[3]);
  auVar73[0xc] = -(auVar5[0xc] == auVar60[4]);
  auVar73[0xd] = -(auVar5[0xd] == auVar60[5]);
  auVar73[0xe] = -(auVar5[0xe] == auVar60[6]);
  auVar73[0xf] = -(auVar5[0xf] == auVar60[7]);
  uVar53 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe | (ushort)(auVar73[0xf] >> 7) << 0xf;
  uVar48 = (uint)uVar53;
  while( true ) {
    if (uVar53 == 0) goto LAB_14088c774;
    uVar9 = 0;
    for (uVar10 = uVar48; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar45 = (uVar9 + uVar26 & uVar43) * -0x2b0;
    if (unaff_R13 == *(undefined1 (**) [16])(lVar25 + -0x2b0 + lVar45)) break;
    uVar53 = (ushort)(uVar48 - 1) & (ushort)uVar48;
    uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar53);
  }
  goto LAB_14088c797;
LAB_14088c774:
  auVar66[0] = -(auVar5[0] == -1);
  auVar66[1] = -(auVar5[1] == -1);
  auVar66[2] = -(auVar5[2] == -1);
  auVar66[3] = -(auVar5[3] == -1);
  auVar66[4] = -(auVar5[4] == -1);
  auVar66[5] = -(auVar5[5] == -1);
  auVar66[6] = -(auVar5[6] == -1);
  auVar66[7] = -(auVar5[7] == -1);
  auVar66[8] = -(auVar5[8] == -1);
  auVar66[9] = -(auVar5[9] == -1);
  auVar66[10] = -(auVar5[10] == -1);
  auVar66[0xb] = -(auVar5[0xb] == -1);
  auVar66[0xc] = -(auVar5[0xc] == -1);
  auVar66[0xd] = -(auVar5[0xd] == -1);
  auVar66[0xe] = -(auVar5[0xe] == -1);
  auVar66[0xf] = -(auVar5[0xf] == -1);
  if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_14088d276;
  uVar26 = uVar26 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_14088c72e;
LAB_14088d276:
  uStack_f2 = 1;
  pdb_142dc8110(&UNK_143011ff8,0x16,&UNK_1430121b0);
  goto LAB_14088d730;
LAB_14088c797:
  if ((byte)uStack_108 == '\b') {
    cVar21 = *(char *)(lStack_1a0 + -7);
    fVar84 = _DAT_143011430;
    if (cVar21 != '\x03') {
      puVar46 = &UNK_143011428;
      goto LAB_14088c7f6;
    }
  }
  else {
    fVar84 = fVar83;
    if ((bVar42 != 0x17) &&
       (cVar21 = *(char *)(lStack_1a0 + -7), fVar84 = _DAT_143011f50, cVar21 != '\x03')) {
      puVar46 = &UNK_143011f58;
LAB_14088c7f6:
      fVar84 = *(float *)(puVar46 + (ulonglong)(cVar21 == '\x02') * 4);
    }
  }
  lVar25 = lVar25 + lVar45 + -0x2a8;
  uStack_f2 = 1;
  pdb_1408c2be0(&uStack_208,lVar25,pbStack_128,uVar1,CONCAT44(uVar59,uVar2),CONCAT44(uVar54,fVar84))
  ;
  uStack_338 = uStack_1f0;
  pauStack_340 = uStack_1f8;
  uVar59 = (undefined4)uStack_208;
  uVar1 = uStack_208._4_4_;
  uStack_348 = uStack_1e4;
  uVar2 = (undefined4)uStack_200;
  uVar20 = uStack_200._4_4_;
  plStack_360 = plStack_1e0;
  uStack_358 = uStack_1d8;
  uStack_1f8 = pauStack_188;
  uStack_208 = uStack_198;
  uStack_200 = (code *)pauStack_190;
  uStack_f2 = 0;
  in_stack_fffffffffffffba8 = CONCAT44(uVar92,uStack_1d4);
  pplVar90 = &plStack_360;
  pdb_1408c5ad0(&pauStack_2a8,*(undefined1 *)(lStack_1a0 + -7),uStack_108,&uStack_208,auStack_350,
                pplVar90,CONCAT44(uVar91,uVar2),uVar20,in_stack_fffffffffffffba8,uStack_1d0,
                &pauStack_340,uVar59,uVar1,lVar25);
  uVar54 = (uint)((ulonglong)pplVar90 >> 0x20);
  uVar48 = (uint)uStack_130;
LAB_14088cda9:
  uVar43 = (ulonglong)uVar48;
  in_stack_fffffffffffffb98 = &uStack_428;
  in_stack_fffffffffffffb90 = CONCAT44(uVar54,uVar48);
  in_stack_fffffffffffffb88 = pauStack_1b0;
  pdb_1414df380(&pauStack_2a8,pauStack_140,(ulonglong)pauStack_100 & 0xffffffff,uStack_218,
                pauStack_1b0,in_stack_fffffffffffffb90,in_stack_fffffffffffffb98);
  if (pauStack_2a8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_2a0,(longlong)pauStack_2a8 * 0xc,4);
  }
  lVar25 = CONCAT44(uStack_28c,CONCAT22(uStack_28e,uStack_290));
  if (lVar25 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_284,uStack_288),lVar25 << 2,4);
  }
  if (pauStack_270 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_268,(longlong)pauStack_270 * 0xc,4);
  }
  if (uStack_258 != 0) {
    pub_1406abac0((byte *)auStack_250._0_8_,uStack_258 << 2,4);
  }
  uVar54 = (uint)((ulonglong)in_stack_fffffffffffffb90 >> 0x20);
  lVar25 = lStack_1a0;
  if ((byte)((char)uStack_108 - 1U) < 2) {
LAB_14088ce8c:
    pdb_140c45ec0(&pauStack_2a8,pauStack_1b0,uStack_130 & 0xffffffff,&UNK_1430121e0);
    uVar43 = (ulonglong)*(byte *)(lVar25 + -7);
    bVar42 = *(byte *)(lVar25 + -7) - 1;
    if (2 < bVar42) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
    }
    if ((byte)uStack_108 == '\x01') {
      lVar25 = pdb_140b54f80(plStack_160,unaff_R13,&UNK_1430121f8);
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143012210);
      }
      uVar59 = pdb_140930390(lVar25);
      uVar22 = pdb_1409012c0(1,uStack_2e0);
      uVar23 = pdb_140c44ba0(uVar43);
      uStack_198._0_2_ = CONCAT11(uVar22,uVar23);
      lVar25 = pdb_141494370(plStack_2d8);
      if (lVar25 == 0) goto LAB_14088d6f9;
      fVar84 = *(float *)(lVar25 + 0x30);
      uStack_294 = uVar59;
    }
    else {
      fVar84 = *(float *)(&UNK_143012410 + (ulonglong)bVar42 * 4);
    }
    in_stack_fffffffffffffb98 = &uStack_428;
    in_stack_fffffffffffffb90 = (ulonglong)uVar54 << 0x20;
    in_stack_fffffffffffffb88 = pauStack_140;
    in_stack_fffffffffffffba8 = uStack_218;
    pdb_1414d64f0(&pauStack_2a8,fVar84 + _DAT_142e3787c);
  }
  goto LAB_14088d000;
LAB_14088d681:
  do {
    if (puStack_118[(longlong)pauVar33] == puStack_118[(longlong)(pauVar41[-1] + 0xf)]) {
      uVar43 = puStack_118[(longlong)(*pauVar33 + 1)];
      if (uVar43 != puStack_118[(longlong)(pauVar41[-1] + 0xf)]) {
LAB_14088d6ad:
        puStack_118[(longlong)pauVar41] = uVar43;
        pauVar41 = (undefined1 (*) [16])(*pauVar41 + 1);
      }
    }
    else {
      puStack_118[(longlong)pauVar41] = puStack_118[(longlong)pauVar33];
      pauVar41 = (undefined1 (*) [16])(*pauVar41 + 1);
      uVar43 = puStack_118[(longlong)(*pauVar33 + 1)];
      if (uVar43 != puStack_118[(longlong)(pauVar41[-1] + 0xf)]) goto LAB_14088d6ad;
    }
    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 2);
  } while (pauStack_110 != pauVar33);
LAB_14088bddf:
  pauStack_110 = pauVar41;
  uStack_f1 = 1;
  puVar31 = (undefined8 *)pdb_14149ba00(*param_7,&UNK_14330e770);
  if (puVar31 != (undefined8 *)0x0) {
    uStack_f1 = 1;
    lVar25 = (**(code **)(puVar31[1] + 0x18))(*puVar31);
    uVar16 = _DAT_143011f60;
    uVar15 = _UNK_1430102b8;
    uVar30 = _DAT_1430102b0;
    if (lVar25 != 0) {
      pauStack_2c8 = pauStack_120;
      puVar55 = puStack_118 + (longlong)pauStack_110;
      uStack_234 = *(undefined4 *)((longlong)param_9 + 0x1c);
      plStack_1a8 = (longlong *)*param_9;
      puStack_318 = (undefined4 *)param_9[2];
      pauStack_1c8 = *(undefined1 (**) [16])pbStack_128;
      uStack_218 = *param_8;
      plStack_2b8 = plStack_1a8 + 4;
      lStack_308 = lVar25 + 0x78;
      lStack_300 = lVar25 + 0x58;
      pauStack_1c0 = pauStack_1c8 + 2;
      puStack_2c0 = puStack_118;
      uVar43 = 0xffffffffffffffff;
      param_4 = puStack_118;
      unaff_XMM6_Ba = DAT_142e47bf0;
      unaff_XMM6_Bb = UNK_142e47bf1;
      unaff_XMM6_Bc = UNK_142e47bf2;
      unaff_XMM6_Bd = UNK_142e47bf3;
      unaff_XMM6_Be = UNK_142e47bf4;
      unaff_XMM6_Bf = UNK_142e47bf5;
      unaff_XMM6_Bg = UNK_142e47bf6;
      unaff_XMM6_Bh = UNK_142e47bf7;
      unaff_XMM6_Bi = UNK_142e47bf8;
      unaff_XMM6_Bj = UNK_142e47bf9;
      unaff_XMM6_Bk = UNK_142e47bfa;
      unaff_XMM6_Bl = UNK_142e47bfb;
      unaff_XMM6_Bm = UNK_142e47bfc;
      unaff_XMM6_Bn = UNK_142e47bfd;
      unaff_XMM6_Bo = UNK_142e47bfe;
      unaff_XMM6_Bp = UNK_142e47bff;
      lStack_210 = lVar25;
      fVar83 = _DAT_142e3c670;
      while (param_4 != puVar55) {
        unaff_R13 = (undefined1 (*) [16])*param_4;
        pauStack_330 = unaff_R13;
        lVar25 = pdb_140b54f80(plVar39,unaff_R13,&UNK_143012138);
        param_4 = param_4 + 1;
        if (lVar25 != 0) {
          pauStack_100 = (undefined1 (*) [16])
                         CONCAT44(pauStack_100._4_4_,*(undefined4 *)(lVar25 + 0x274));
          uVar26 = pdb_140b54b40(plVar39,unaff_R13);
          if (((((uVar26 & 0xffffffff) != 0) &&
               (uVar36 = uVar26 & 0xffffffff ^ 0xffffffff,
               uVar36 < *(ulonglong *)(lStack_158 + 0x10))) &&
              ((piVar35 = (int *)(uVar36 * 0x18 + *(longlong *)(lStack_158 + 8)),
               piVar35[4] == (int)(uVar26 >> 0x20) &&
               ((*piVar35 != 0 &&
                (uVar26 = *(ulonglong *)(piVar35 + 2),
                (uVar26 & 0xffffffff) < *(ulonglong *)(lStack_150 + 0x38))))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_150 + 0x28) + (uVar26 >> 6 & 0x3ffffff) * 8) >>
               (uVar26 & 0x3f) & 1) != 0)) {
            if (*(ulonglong *)(lStack_150 + 0x110) <
                *(ulonglong *)(*(longlong *)(lStack_158 + 0x1a0) + 0x40 + (uVar26 >> 0x20) * 0x48))
            {
              lVar25 = *(longlong *)(lStack_158 + 0x1a0) + (uVar26 >> 0x20) * 0x48;
              uVar43 = *(ulonglong *)
                        (*(longlong *)(lVar25 + 0x38) + *(ulonglong *)(lStack_150 + 0x110) * 8);
              if (uVar43 == 0) goto LAB_14088c00e;
              lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar43 * 0x30);
            }
            else {
LAB_14088c00e:
              lVar25 = 0;
            }
            uVar24 = piVar35[1];
            pauStack_140 = (undefined1 (*) [16])(lVar25 + (ulonglong)~uVar24 * 0x58);
            *puStack_318 = uStack_234;
            pauVar41 = *(undefined1 (**) [16])(lVar25 + (ulonglong)~uVar24 * 0x58);
            pauStack_2a8 = pauVar41;
            uVar36 = pdb_1400af0a0(plStack_2b8);
            uVar43 = uVar36 >> 0x39;
            lVar25 = *plStack_1a8;
            bVar42 = (byte)(uVar36 >> 0x38);
            bVar58 = bVar42 >> 1;
            auVar60 = ZEXT216(CONCAT11(bVar58,bVar58));
            auVar60 = pshuflw(auVar60,auVar60,0);
            lVar29 = 0;
            uVar26 = uVar36;
            while( true ) {
              uVar26 = uVar26 & plStack_1a8[1];
              pcVar44 = (char *)(lVar25 + uVar26);
              auVar71[0] = -(*pcVar44 == auVar60[0]);
              auVar71[1] = -(pcVar44[1] == auVar60[1]);
              auVar71[2] = -(pcVar44[2] == auVar60[2]);
              auVar71[3] = -(pcVar44[3] == auVar60[3]);
              auVar71[4] = -(pcVar44[4] == auVar60[4]);
              auVar71[5] = -(pcVar44[5] == auVar60[5]);
              auVar71[6] = -(pcVar44[6] == auVar60[6]);
              auVar71[7] = -(pcVar44[7] == auVar60[7]);
              auVar71[8] = -(pcVar44[8] == auVar60[0]);
              auVar71[9] = -(pcVar44[9] == auVar60[1]);
              auVar71[10] = -(pcVar44[10] == auVar60[2]);
              auVar71[0xb] = -(pcVar44[0xb] == auVar60[3]);
              auVar71[0xc] = -(pcVar44[0xc] == auVar60[4]);
              auVar71[0xd] = -(pcVar44[0xd] == auVar60[5]);
              auVar71[0xe] = -(pcVar44[0xe] == auVar60[6]);
              auVar71[0xf] = -(pcVar44[0xf] == auVar60[7]);
              uVar53 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar71[0xf] >> 7) << 0xf;
              uVar24 = (uint)uVar53;
              while (uVar53 != 0) {
                uVar54 = 0;
                for (uVar48 = uVar24; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
                  uVar54 = uVar54 + 1;
                }
                uVar51 = uVar54 + uVar26 & plStack_1a8[1];
                if (*(undefined1 (**) [16])(lVar25 + -0x18 + uVar51 * -0x18) == pauVar41) {
                  param_1 = *(undefined1 (**) [16])(lVar25 + uVar51 * -0x18 + -8);
                  goto joined_r0x00014088c0ec;
                }
                uVar53 = (ushort)(uVar24 - 1) & (ushort)uVar24;
                uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar53);
              }
              auVar63[0] = -(*pcVar44 == -1);
              auVar63[1] = -(pcVar44[1] == -1);
              auVar63[2] = -(pcVar44[2] == -1);
              auVar63[3] = -(pcVar44[3] == -1);
              auVar63[4] = -(pcVar44[4] == -1);
              auVar63[5] = -(pcVar44[5] == -1);
              auVar63[6] = -(pcVar44[6] == -1);
              auVar63[7] = -(pcVar44[7] == -1);
              auVar63[8] = -(pcVar44[8] == -1);
              auVar63[9] = -(pcVar44[9] == -1);
              auVar63[10] = -(pcVar44[10] == -1);
              auVar63[0xb] = -(pcVar44[0xb] == -1);
              auVar63[0xc] = -(pcVar44[0xc] == -1);
              auVar63[0xd] = -(pcVar44[0xd] == -1);
              auVar63[0xe] = -(pcVar44[0xe] == -1);
              auVar63[0xf] = -(pcVar44[0xf] == -1);
              uVar53 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar63[0xf] >> 7) << 0xf;
              if (uVar53 != 0) break;
              uVar26 = uVar26 + lVar29 + 0x10;
              lVar29 = lVar29 + 0x10;
            }
            if (plStack_1a8[2] == 0) {
              pdb_142dd97b0(plStack_1a8,1,plStack_2b8,CONCAT71((uint7)(byte)(uVar53 >> 8),1));
            }
            pdb_14007ee60();
            pbVar28 = pub_1406abab0(0x20,8);
            if (pbVar28 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x20);
            }
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 4;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28[0x10] = 0;
            pbVar28[0x11] = 0;
            pbVar28[0x12] = 0;
            pbVar28[0x13] = 0;
            pbVar28[0x14] = 0;
            pbVar28[0x15] = 0;
            pbVar28[0x16] = 0;
            pbVar28[0x17] = 0;
            pbVar28[0x18] = 0;
            lVar29 = *(longlong *)(lStack_210 + 0x48);
LAB_14088c153:
            lVar25 = *(longlong *)(lVar29 + 8);
            do {
              if (lVar25 == -1) goto LAB_14088c153;
              if (lVar25 < 0) {
                pauStack_2a8 = (undefined1 (*) [16])&UNK_14301d3b8;
                pauStack_2a0 = (undefined1 (*) [16])pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14301d3c8,&pauStack_2a8,&UNK_14301d450);
              }
              LOCK();
              lVar45 = *(longlong *)(lVar29 + 8);
              bVar57 = lVar25 == lVar45;
              if (bVar57) {
                *(longlong *)(lVar29 + 8) = lVar25 + 1;
                lVar45 = lVar25;
              }
              UNLOCK();
              lVar25 = lVar45;
            } while (!bVar57);
            pauVar33 = (undefined1 (*) [16])*plStack_1a8;
            uVar26 = plStack_1a8[1];
            uVar36 = uVar36 & uVar26;
            auVar60 = *(undefined1 (*) [16])(*pauVar33 + uVar36);
            uVar53 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar53;
            if (uVar53 == 0) {
              lVar25 = 0x10;
              do {
                uVar36 = uVar36 + lVar25 & uVar26;
                auVar60 = *(undefined1 (*) [16])(*pauVar33 + uVar36);
                lVar25 = lVar25 + 0x10;
                uVar24 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
              } while (uVar24 == 0);
            }
            uVar54 = 0;
            for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
              uVar54 = uVar54 + 1;
            }
            uVar36 = uVar54 + uVar36 & uVar26;
            bVar58 = (*pauVar33)[uVar36];
            if (-1 < (char)bVar58) {
              auVar60 = *pauVar33;
              uVar24 = 0;
              for (uVar54 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
                  (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
                uVar24 = uVar24 + 1;
              }
              uVar36 = (ulonglong)uVar24;
              bVar58 = (*pauVar33)[uVar36];
            }
            bVar42 = bVar42 >> 1;
            (*pauVar33)[uVar36] = bVar42;
            pauVar33[1][uVar36 - 0x10 & uVar26] = bVar42;
            *(undefined1 (**) [16])((longlong)pauVar33 + uVar36 * -0x18 + -0x18) = pauVar41;
            *(longlong *)((longlong)pauVar33 + uVar36 * -0x18 + -0x10) = lVar29;
            *(byte **)((longlong)pauVar33 + uVar36 * -0x18 + -8) = pbVar28;
            auVar64[9] = unaff_XMM6_Bj;
            auVar64[8] = unaff_XMM6_Bi;
            auVar64[10] = unaff_XMM6_Bk;
            auVar64[0xb] = unaff_XMM6_Bl;
            auVar64[0xd] = unaff_XMM6_Bn;
            auVar64[0xc] = unaff_XMM6_Bm;
            auVar64[0xe] = unaff_XMM6_Bo;
            auVar64[0xf] = unaff_XMM6_Bp;
            auVar64._0_8_ = (ulonglong)bVar58 & 0xffffffffffffff01;
            plStack_1a8[2] = plStack_1a8[2] - ((ulonglong)bVar58 & 0xffffffffffffff01);
            plStack_1a8[3] = plStack_1a8[3] - auVar64._8_8_;
            param_1 = *(undefined1 (**) [16])((longlong)pauVar33 + uVar36 * -0x18 + -8);
joined_r0x00014088c0ec:
            if (param_1 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143310ca8);
            }
            LOCK();
            bVar57 = param_1[1][8] == '\0';
            if (bVar57) {
              param_1[1][8] = '\x01';
            }
            UNLOCK();
            if (!bVar57) {
              pdb_142dbd1a0(param_1[1] + 8,CONCAT71((int7)((ulonglong)lVar29 >> 8),1),1000000000);
            }
            pdb_140e9a150(param_1[1] + 8);
            if ((*(longlong *)param_1[1] == 0) ||
               (piVar35 = (int *)(*(longlong *)(*param_1 + 8) + *(longlong *)param_1[1] * 4 + -4),
               piVar35 == (int *)0x0)) {
              lVar25 = *(longlong *)(lStack_210 + 0x10);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143310cc0);
              }
              iStack_3d0 = (int)lVar25 + -1;
            }
            else {
              iStack_3d0 = *piVar35;
              lVar25 = *(longlong *)(lStack_210 + 0x10);
            }
            uStack_428 = *(undefined8 *)(lStack_210 + 8);
            uStack_418 = *(undefined8 *)(lStack_210 + 0x18);
            uStack_410 = *(undefined8 *)(lStack_210 + 0x20);
            auStack_400 = *(undefined1 (*) [16])(lStack_210 + 0x28);
            auStack_3e0 = *(undefined1 (*) [16])(lStack_210 + 0x38);
            lStack_3f0 = lStack_308;
            lStack_3e8 = lStack_300;
            lStack_420 = lVar25;
            pauStack_408 = param_1;
            puStack_2d0 = puVar55;
            pdb_1414ab470(&uStack_428);
            lVar25 = pdb_140c3e440(lStack_310,unaff_R13);
            if (lVar25 != 0) {
              param_1 = *(undefined1 (**) [16])(lVar25 + 0x30);
              pauStack_138 = *(undefined1 (**) [16])(lVar25 + 0x48);
              auVar60 = *param_1;
              pauVar41 = param_1 + 1;
              uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
              plStack_2f8 = (longlong *)(*pauStack_140 + 8);
              puStack_2f0 = (undefined8 *)(pauStack_140[2] + 4);
              pauStack_2e8 = pauStack_140 + 4;
LAB_14088d000:
              if (pauStack_138 != (undefined1 (*) [16])0x0) {
                if ((short)uVar24 == 0) {
                  do {
                    auVar60 = *pauVar41;
                    param_1 = param_1 + -0x68;
                    pauVar41 = pauVar41 + 1;
                    uVar24 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar24 == 0);
                }
                uVar54 = 0;
                for (uVar48 = uVar24; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
                  uVar54 = uVar54 + 1;
                }
                uVar43 = (ulonglong)uVar54 * -0x68;
                uVar59 = *(undefined4 *)((longlong)param_1 + (uVar43 - 0x68));
                uStack_108 = pdb_140c45920(&uStack_328);
                uVar24 = uVar24 - 1 & uVar24;
                pauStack_138 = (undefined1 (*) [16])(pauStack_138[-1] + 0xf);
                uStack_130 = CONCAT44(uStack_130._4_4_,uVar59);
                pauStack_2a8 = (undefined1 (*) [16])CONCAT44(pauStack_2a8._4_4_,uVar59);
                if (*(longlong *)(pauStack_1c8[1] + 8) != 0) {
                  lVar25 = (longlong)param_1 + uVar43;
                  pbStack_128 = (byte *)((longlong)param_1 + (uVar43 - 0x60));
                  uVar26 = pdb_1400aede0(pauStack_1c0,&pauStack_2a8);
                  uVar54 = (uint)((ulonglong)in_stack_fffffffffffffb90 >> 0x20);
                  bVar42 = (byte)(uVar26 >> 0x39);
                  auVar60 = ZEXT216(CONCAT11(bVar42,bVar42));
                  auVar60 = pshuflw(auVar60,auVar60,0);
                  uVar43 = 0;
                  do {
                    uVar26 = uVar26 & *(ulonglong *)(*pauStack_1c8 + 8);
                    auVar5 = *(undefined1 (*) [16])(*(longlong *)*pauStack_1c8 + uVar26);
                    auVar72[0] = -(auVar5[0] == auVar60[0]);
                    auVar72[1] = -(auVar5[1] == auVar60[1]);
                    auVar72[2] = -(auVar5[2] == auVar60[2]);
                    auVar72[3] = -(auVar5[3] == auVar60[3]);
                    auVar72[4] = -(auVar5[4] == auVar60[4]);
                    auVar72[5] = -(auVar5[5] == auVar60[5]);
                    auVar72[6] = -(auVar5[6] == auVar60[6]);
                    auVar72[7] = -(auVar5[7] == auVar60[7]);
                    auVar72[8] = -(auVar5[8] == auVar60[0]);
                    auVar72[9] = -(auVar5[9] == auVar60[1]);
                    auVar72[10] = -(auVar5[10] == auVar60[2]);
                    auVar72[0xb] = -(auVar5[0xb] == auVar60[3]);
                    auVar72[0xc] = -(auVar5[0xc] == auVar60[4]);
                    auVar72[0xd] = -(auVar5[0xd] == auVar60[5]);
                    auVar72[0xe] = -(auVar5[0xe] == auVar60[6]);
                    auVar72[0xf] = -(auVar5[0xf] == auVar60[7]);
                    uVar53 = (ushort)(SUB161(auVar72 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar72[0xf] >> 7) << 0xf;
                    uVar48 = (uint)uVar53;
                    while (uVar53 != 0) {
                      uVar9 = 0;
                      for (uVar10 = uVar48; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                        uVar9 = uVar9 + 1;
                      }
                      if ((uint)uStack_130 ==
                          *(int *)(*(longlong *)*pauStack_1c8 +
                                   (uVar9 + uVar26 & *(ulonglong *)(*pauStack_1c8 + 8)) * -0x10 +
                                  -0x10)) {
                        if (((byte)uStack_108 == '\0') && (*(char *)(lVar25 + -7) == '\x03')) {
                          pdb_140c45ec0(&uStack_208,pauStack_1b0,uStack_130 & 0xffffffff,
                                        &UNK_143012228);
                          auVar60 = _auStack_260;
                          if (2 < (byte)(*(char *)(lVar25 + -7) - 1U)) goto LAB_14088d44e;
                          uVar43 = (ulonglong)*(uint *)(*pauStack_140 + 8);
                          fVar84 = uStack_1f8._4_4_ + fVar83;
                          uStack_1f8 = (undefined1 (*) [16])CONCAT44(fVar84,(undefined4)uStack_1f8);
                          pauStack_2a8 = *(undefined1 (**) [16])*pauStack_140;
                          pauStack_270 = *(undefined1 (**) [16])((longlong)puStack_2f0 + 0x14);
                          uStack_274 = (undefined4)
                                       ((ulonglong)*(undefined8 *)((longlong)puStack_2f0 + 0xc) >>
                                       0x20);
                          uStack_284 = (undefined4)*puStack_2f0;
                          uStack_280 = (undefined4)((ulonglong)*puStack_2f0 >> 0x20);
                          pauStack_2a0 = (undefined1 (*) [16])*plStack_2f8;
                          uStack_290 = (ushort)((ulonglong)
                                                *(undefined8 *)((longlong)plStack_2f8 + 0xc) >> 0x20
                                               );
                          uStack_28e = (undefined2)
                                       ((ulonglong)*(undefined8 *)((longlong)plStack_2f8 + 0xc) >>
                                       0x30);
                          uStack_28c = (undefined4)*(undefined8 *)((longlong)plStack_2f8 + 0x14);
                          uStack_288 = (undefined4)
                                       ((ulonglong)*(undefined8 *)((longlong)plStack_2f8 + 0x14) >>
                                       0x20);
                          uStack_298 = (undefined4)plStack_2f8[1];
                          uStack_294 = (undefined4)((ulonglong)plStack_2f8[1] >> 0x20);
                          pauStack_268 = *(undefined1 (**) [16])*pauStack_2e8;
                          auStack_260._4_4_ = *(undefined4 *)(pauStack_140[4] + 0xc);
                          auStack_260._0_4_ = *(undefined4 *)(*pauStack_2e8 + 8);
                          uStack_258._0_4_ = *(undefined4 *)pauStack_140[5];
                          uStack_258._5_3_ = auVar60._13_3_;
                          uStack_258._4_1_ = pauStack_140[5][4];
                          uStack_27c = (undefined4)uVar16;
                          uStack_278 = (undefined4)((ulonglong)uVar16 >> 0x20);
                          pdb_140a85120(&uStack_198,&pauStack_2a0,_DAT_142e37830);
                          auStack_260._4_4_ = fVar84 + _DAT_142e3787c;
                          in_stack_fffffffffffffb98 = &uStack_428;
                          in_stack_fffffffffffffb90 = (ulonglong)uVar54 << 0x20;
                          in_stack_fffffffffffffb88 = (undefined1 (*) [16])&pauStack_2a8;
                          in_stack_fffffffffffffba8 = uStack_218;
                          pdb_1414d64f0(&uStack_208);
                          goto LAB_14088d000;
                        }
                        cVar21 = pdb_140b77b50(pauStack_140);
                        uVar54 = (uint)((ulonglong)in_stack_fffffffffffffb90 >> 0x20);
                        uVar91 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
                        uVar59 = (undefined4)((ulonglong)in_stack_fffffffffffffb88 >> 0x20);
                        if ((cVar21 != '\0') || (bVar42 = (byte)uStack_108, 0x17 < (byte)uStack_108)
                           ) goto LAB_14088d000;
                        uVar43 = uStack_108 & 0xff;
                        if ((0x800180U >> ((byte)uStack_108 & 0x1f) & 1) == 0) {
                          if ((6U >> ((byte)uStack_108 & 0x1f) & 1) != 0) goto LAB_14088ce8c;
                          goto LAB_14088d000;
                        }
                        pdb_140c45ec0(&fStack_3c8,pauStack_1b0,uStack_130 & 0xffffffff,
                                      &UNK_143012150);
                        fVar4 = fStack_3ac;
                        fVar19 = fStack_3b0;
                        fVar18 = fStack_3b4;
                        fVar17 = fStack_3b8;
                        fVar86 = fStack_3bc;
                        fVar81 = fStack_3c0;
                        fVar85 = fStack_3c4;
                        fVar84 = fStack_3c8;
                        uVar92 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
                        if ((byte)uStack_108 == '\b') {
                          fVar83 = (float)uStack_3a8;
                          fVar61 = (float)((ulonglong)uStack_3a8 >> 0x20);
                          pdb_140887990(&lStack_230,pbStack_128);
                          pauVar33 = pauStack_220;
                          pbStack_1b8 = pbStack_228;
                          uVar43 = (longlong)pauStack_220 * 0xc;
                          if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauStack_220) {
                            uVar37 = 0;
LAB_14088d26b:
                            pdb_142dc7e2a(uVar37);
                            goto LAB_14088d730;
                          }
                          if (uVar43 == 0) {
                            pauVar32 = (undefined1 (*) [16])0x4;
                            pauVar38 = (undefined1 (*) [16])0x0;
                            lStack_1a0 = lVar25;
                          }
                          else {
                            lStack_1a0 = lVar25;
                            pdb_14007ee60();
                            pauVar32 = (undefined1 (*) [16])pub_1406abab0(uVar43,4);
                            uVar37 = 4;
                            pauVar38 = pauVar33;
                            if (pauVar32 == (undefined1 (*) [16])0x0) goto LAB_14088d26b;
                          }
                          fVar78 = fVar81 + fVar81;
                          fVar67 = fVar85 + fVar85;
                          auVar74._0_4_ = fVar84 * (fVar84 + fVar84);
                          auVar74._4_4_ = fVar85 * fVar67;
                          auVar74._8_4_ = fVar81 * (fVar81 + fVar81);
                          auVar74._12_4_ = fVar86 * (fVar86 + fVar86);
                          fVar68 = (fVar84 + fVar84) * fVar86;
                          fVar79 = fVar78 * fVar84 - fVar67 * fVar86;
                          fVar69 = fVar68 + fVar78 * fVar85;
                          auVar75._4_12_ = auVar74._4_12_;
                          auVar75._0_4_ = auVar74._0_4_ + auVar74._4_4_;
                          uVar37 = auVar75._0_8_;
                          fVar87 = fVar4 * (_DAT_142e36f28 - (auVar74._4_4_ + fVar81 * fVar78));
                          fVar88 = fVar4 * (fVar67 * fVar84 + fVar86 * fVar78);
                          fVar89 = fVar4 * fVar79;
                          fVar79 = fVar4 * fVar79;
                          fVar80 = fVar83 * (fVar67 * fVar84 - fVar86 * fVar78);
                          fVar81 = fVar83 * (_DAT_142e36f28 - (fVar81 * fVar78 + auVar74._0_4_));
                          fVar82 = fVar83 * fVar69;
                          fVar83 = fVar83 * fVar69;
                          fVar84 = fVar61 * (fVar67 * fVar86 + fVar78 * fVar84);
                          fVar85 = fVar61 * (fVar78 * fVar85 - fVar68);
                          fVar86 = fVar61 * (_DAT_142e36f28 - auVar75._0_4_);
                          if (pauVar33 == (undefined1 (*) [16])0x0) goto LAB_14088cb18;
                          fVar67 = fVar84 * 0.0;
                          fVar68 = fVar85 * 0.0;
                          fVar69 = fVar86 * 0.0;
                          fVar61 = fVar61 * (_DAT_142e36f28 - auVar75._0_4_) * 0.0;
                          if (pauVar33 != (undefined1 (*) [16])0x1) {
                            uVar43 = 0;
                            pauVar49 = pauVar32;
                            do {
                              fVar78 = *(float *)(pbStack_1b8 + uVar43 * 8);
                              fVar3 = *(float *)(pbStack_1b8 + uVar43 * 8 + 4);
                              *(ulonglong *)*pauVar49 =
                                   CONCAT44(fVar3 * fVar81 + fVar78 * fVar88 + fVar68 + fVar18,
                                            fVar3 * fVar80 + fVar78 * fVar87 + fVar67 + fVar17);
                              *(float *)(*pauVar49 + 8) =
                                   fVar3 * fVar82 + fVar78 * fVar89 + fVar69 + fVar19;
                              fVar78 = *(float *)(pbStack_1b8 + uVar43 * 8 + 8);
                              fVar3 = *(float *)(pbStack_1b8 + uVar43 * 8 + 0xc);
                              auVar76._0_8_ =
                                   CONCAT44(fVar3 * fVar81 + fVar78 * fVar88 + fVar68 + fVar18,
                                            fVar3 * fVar80 + fVar78 * fVar87 + fVar67 + fVar17);
                              auVar76._8_4_ = fVar3 * fVar82 + fVar78 * fVar89 + fVar69 + fVar19;
                              auVar76._12_4_ = fVar3 * fVar83 + fVar78 * fVar79 + fVar61 + fVar4;
                              *(undefined8 *)(*pauVar49 + 0xc) = auVar76._0_8_;
                              uVar37 = auVar76._8_8_;
                              *(float *)(pauVar49[1] + 4) = auVar76._8_4_;
                              uVar43 = uVar43 + 2;
                              pauVar49 = (undefined1 (*) [16])(pauVar49[1] + 8);
                            } while (((ulonglong)pauVar33 & 0xffffffffffffffe) != uVar43);
                            if (((ulonglong)pauVar33 & 1) != 0) {
LAB_14088cada:
                              fVar78 = *(float *)(pbStack_1b8 + uVar43 * 8);
                              fVar3 = *(float *)(pbStack_1b8 + uVar43 * 8 + 4);
                              auVar77._0_8_ =
                                   CONCAT44(fVar3 * fVar81 + fVar78 * fVar88 + fVar68 + fVar18,
                                            fVar3 * fVar80 + fVar78 * fVar87 + fVar67 + fVar17);
                              auVar77._8_4_ = fVar3 * fVar82 + fVar78 * fVar89 + fVar69 + fVar19;
                              auVar77._12_4_ = fVar3 * fVar83 + fVar78 * fVar79 + fVar61 + fVar4;
                              *(undefined8 *)(*pauVar32 + uVar43 * 0xc) = auVar77._0_8_;
                              uVar37 = auVar77._8_8_;
                              *(float *)(*pauVar32 + uVar43 * 0xc + 8) = auVar77._8_4_;
                            }
LAB_14088cb18:
                            pauStack_188 = pauVar33;
                            uStack_198 = pauVar38;
                            pauStack_190 = pauVar32;
                            pdb_140080930(&uStack_208,&uStack_198,uVar37);
                            unaff_XMM6_Bp = UNK_142e47bff;
                            unaff_XMM6_Bo = UNK_142e47bfe;
                            unaff_XMM6_Bn = UNK_142e47bfd;
                            unaff_XMM6_Bm = UNK_142e47bfc;
                            unaff_XMM6_Bl = UNK_142e47bfb;
                            unaff_XMM6_Bk = UNK_142e47bfa;
                            unaff_XMM6_Bj = UNK_142e47bf9;
                            unaff_XMM6_Bi = UNK_142e47bf8;
                            unaff_XMM6_Bh = UNK_142e47bf7;
                            unaff_XMM6_Bg = UNK_142e47bf6;
                            unaff_XMM6_Bf = UNK_142e47bf5;
                            unaff_XMM6_Be = UNK_142e47bf4;
                            unaff_XMM6_Bd = UNK_142e47bf3;
                            unaff_XMM6_Bc = UNK_142e47bf2;
                            unaff_XMM6_Bb = UNK_142e47bf1;
                            unaff_XMM6_Ba = DAT_142e47bf0;
                            fVar83 = _DAT_142e3c670;
                            if (SBORROW8(0,(longlong)uStack_208)) {
                              uStack_198 = (undefined1 (*) [16])uStack_200;
                              pauStack_190 = uStack_1f8;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc8170(&UNK_14330d540,0x2b,&uStack_198,&UNK_14330d520,
                                            &UNK_143012168);
                            }
                            uStack_368 = CONCAT44(uStack_1d4,uStack_1d8);
                            uStack_380 = CONCAT44(uStack_1ec,uStack_1f0);
                            uStack_378 = CONCAT44(uStack_1e4,uStack_1e8);
                            plStack_370 = plStack_1e0;
                            pauStack_388 = uStack_1f8;
                            pauStack_398 = uStack_208;
                            pauStack_390 = (undefined1 (*) [16])uStack_200;
                            if (lStack_230 != 0) {
                              pub_1406abac0(pbStack_1b8,lStack_230 << 3,4);
                            }
                            pdb_140887990(&lStack_230,pbStack_128);
                            pauVar33 = pauStack_220;
                            pbStack_128 = pbStack_228;
                            uVar43 = (longlong)pauStack_220 * 0xc;
                            if ((undefined1 (*) [16])0xaaaaaaaaaaaaaaa < pauStack_220) {
                              uVar37 = 0;
LAB_14088d29d:
                              pdb_142dc7e2a(uVar37,uVar43);
                              goto LAB_14088d730;
                            }
                            if (uVar43 == 0) {
                              pbVar28 = (byte *)0x4;
                              pauVar38 = (undefined1 (*) [16])0x0;
                            }
                            else {
                              pdb_14007ee60();
                              pbVar28 = pub_1406abab0(uVar43,4);
                              uVar37 = 4;
                              pauVar38 = pauVar33;
                              if (pbVar28 == (byte *)0x0) goto LAB_14088d29d;
                            }
                            if (pauVar33 != (undefined1 (*) [16])0x0) {
                              pauVar32 = (undefined1 (*) [16])0x0;
                              pbVar40 = pbVar28;
                              do {
                                fVar4 = *(float *)(pbStack_128 + (longlong)pauVar32 * 8);
                                fVar61 = *(float *)(pbStack_128 + (longlong)pauVar32 * 8 + 4);
                                *(ulonglong *)pbVar40 =
                                     CONCAT44((fVar61 * fVar81 - fVar4 * fVar88) + fVar85 * 0.0 +
                                              fVar18,(fVar61 * fVar80 - fVar4 * fVar87) +
                                                     fVar84 * 0.0 + fVar17);
                                *(float *)(pbVar40 + 8) =
                                     (fVar61 * fVar82 - fVar4 * fVar89) + fVar86 * 0.0 + fVar19;
                                pauVar32 = (undefined1 (*) [16])(*pauVar32 + 1);
                                pbVar40 = pbVar40 + 0xc;
                              } while (pauVar33 != pauVar32);
                            }
                            pauStack_188 = pauVar33;
                            uStack_198 = pauVar38;
                            pauStack_190 = (undefined1 (*) [16])pbVar28;
                            pdb_140080930(&uStack_208,&uStack_198,0);
                            uVar48 = (uint)uStack_130;
                            if (SBORROW8(0,(longlong)uStack_208)) {
                              uStack_198 = (undefined1 (*) [16])uStack_200;
                              pauStack_190 = uStack_1f8;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc8170(&UNK_14330d540,0x2b,&uStack_198,&UNK_14330d520,
                                            &UNK_143012180);
                            }
                            uStack_168 = CONCAT44(uStack_1d4,uStack_1d8);
                            lStack_180 = CONCAT44(uStack_1ec,uStack_1f0);
                            lStack_178 = CONCAT44(uStack_1e4,uStack_1e8);
                            plStack_170 = plStack_1e0;
                            pauStack_188 = uStack_1f8;
                            uStack_198 = uStack_208;
                            pauStack_190 = (undefined1 (*) [16])uStack_200;
                            if (lStack_230 != 0) {
                              pub_1406abac0(pbStack_128,lStack_230 << 3,4);
                            }
                            pauStack_2a8 = pauStack_398;
                            pauStack_2a0 = pauStack_390;
                            uStack_298 = SUB84(pauStack_388,0);
                            uStack_294 = (undefined4)((ulonglong)pauStack_388 >> 0x20);
                            uStack_290 = (ushort)uStack_380;
                            uStack_28e = (undefined2)((ulonglong)uStack_380 >> 0x10);
                            uStack_28c = (undefined4)((ulonglong)uStack_380 >> 0x20);
                            uStack_288 = (undefined4)uStack_378;
                            uStack_284 = (undefined4)((ulonglong)uStack_378 >> 0x20);
                            uStack_280 = SUB84(plStack_370,0);
                            uStack_27c = (undefined4)((ulonglong)plStack_370 >> 0x20);
                            uStack_278 = (undefined4)uStack_368;
                            uStack_274 = (undefined4)((ulonglong)uStack_368 >> 0x20);
                            uStack_240 = uStack_168;
                            uStack_258 = lStack_180;
                            auStack_260 = (undefined1  [8])pauStack_188;
                            auStack_250._8_8_ = plStack_170;
                            auStack_250._0_8_ = lStack_178;
                            pauStack_270 = uStack_198;
                            pauStack_268 = pauStack_190;
                            goto LAB_14088cda9;
                          }
                          uVar43 = 0;
                          goto LAB_14088cada;
                        }
                        if ((bVar42 != 7) && (bVar42 != 0x17)) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc83b0(&UNK_14301200e,0x28,&UNK_1430121c8);
                        }
                        if ((byte)uStack_108 == '\x17') {
                          pdb_14007ee60();
                          pauVar33 = (undefined1 (*) [16])pub_1406abab0(0x10,4);
                          if (pauVar33 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc7e11(4,0x10);
                          }
                          *(undefined8 *)*pauVar33 = uVar30;
                          *(undefined8 *)(*pauVar33 + 8) = uVar15;
                          uStack_198 = (undefined1 (*) [16])0x2;
                          pauStack_188 = (undefined1 (*) [16])0x2;
                          pauStack_190 = pauVar33;
                        }
                        else {
                          pdb_1414dca40(&uStack_198,*(undefined1 *)(lVar25 + -7));
                        }
                        uStack_f2 = 1;
                        lStack_1a0 = lVar25;
                        puVar34 = (undefined4 *)pdb_140901130(pbStack_128,&UNK_143012198);
                        plVar39 = plStack_160;
                        if (plStack_160[3] == 0) goto LAB_14088d276;
                        uVar1 = *puVar34;
                        uVar2 = puVar34[1];
                        uVar26 = pdb_1400af0a0(plStack_160 + 4,&pauStack_330);
                        lVar25 = *plVar39;
                        uVar43 = plVar39[1];
                        bVar58 = (byte)(uVar26 >> 0x39);
                        auVar60 = ZEXT216(CONCAT11(bVar58,bVar58));
                        auVar60 = pshuflw(auVar60,auVar60,0);
                        lVar29 = 0;
                        goto LAB_14088c72e;
                      }
                      uVar53 = (ushort)(uVar48 - 1) & (ushort)uVar48;
                      uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar53);
                    }
                    auVar65[0] = -(auVar5[0] == -1);
                    auVar65[1] = -(auVar5[1] == -1);
                    auVar65[2] = -(auVar5[2] == -1);
                    auVar65[3] = -(auVar5[3] == -1);
                    auVar65[4] = -(auVar5[4] == -1);
                    auVar65[5] = -(auVar5[5] == -1);
                    auVar65[6] = -(auVar5[6] == -1);
                    auVar65[7] = -(auVar5[7] == -1);
                    auVar65[8] = -(auVar5[8] == -1);
                    auVar65[9] = -(auVar5[9] == -1);
                    auVar65[10] = -(auVar5[10] == -1);
                    auVar65[0xb] = -(auVar5[0xb] == -1);
                    auVar65[0xc] = -(auVar5[0xc] == -1);
                    auVar65[0xd] = -(auVar5[0xd] == -1);
                    auVar65[0xe] = -(auVar5[0xe] == -1);
                    auVar65[0xf] = -(auVar5[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar65 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
                    uVar26 = uVar26 + uVar43 + 0x10;
                    uVar43 = uVar43 + 0x10;
                  } while( true );
                }
                goto LAB_14088d000;
              }
            }
            pcVar44 = pauStack_408[1] + 8;
            pdb_140e9a350();
            plVar39 = plStack_160;
            puVar55 = puStack_2d0;
            LOCK();
            cVar21 = *pcVar44;
            if (cVar21 == '\x01') {
              *pcVar44 = '\0';
            }
            UNLOCK();
            if (cVar21 != '\x01') {
              pdb_142dbcef0(pcVar44,0);
            }
          }
        }
      }
      if (pauStack_2c8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)puStack_2c0,(longlong)pauStack_2c8 << 3,8);
      }
      param_2 = plStack_2b0;
      if (cStack_f3 != '\0') {
        plVar56 = (longlong *)pdb_140e97000();
        if (((char)plVar56[0xd] != '\x01') &&
           (plVar56 = (longlong *)pdb_142dde6e0(plVar56,0), plVar56 == (longlong *)0x0))
        goto LAB_14088d441;
        if (*plVar56 != 0) {
LAB_14088d35e:
          plVar27 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14088d36a:
          plVar27 = (longlong *)pdb_142dde6e0(plVar27,0);
          if (plVar27 == (longlong *)0x0) {
LAB_14088d441:
            pdb_142dc7890(&UNK_14330e598);
LAB_14088d44e:
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
          }
          goto LAB_14088b358;
        }
        *plVar56 = -1;
        pauStack_100 = (undefined1 (*) [16])plVar56;
        pdb_140e95370(plVar56 + 1,param_2);
        *(longlong *)pauStack_100 = *(longlong *)pauStack_100 + 1;
      }
      return;
    }
  }
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143012120);
}

