// VA 0x140c58880, PDB extent 6100 bytes
// country_core::startup::load_prefabs::load_prefabs_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_prefabs::load_prefabs_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 6100 */

void pdb_140c58880(char param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong *puVar10;
  char cVar11;
  longlong *plVar12;
  undefined1 (*pauVar13) [16];
  undefined8 extraout_RAX;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  undefined *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  longlong *unaff_RSI;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  undefined8 uVar27;
  bool bVar28;
  longlong lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 (*pauStack_368) [16];
  undefined1 (*pauStack_360) [16];
  undefined1 (*pauStack_358) [16];
  undefined1 (*pauStack_350) [16];
  undefined1 (*pauStack_348) [16];
  undefined8 uStack_340;
  undefined8 uStack_338;
  char *pcStack_330;
  undefined1 (*pauStack_328) [16];
  undefined1 (**ppauStack_320) [16];
  undefined1 (*pauStack_318) [16];
  longlong lStack_310;
  undefined8 uStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  byte *pbStack_2f0;
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined1 (*pauStack_2d0) [16];
  undefined1 (*pauStack_2c8) [16];
  longlong lStack_2c0;
  ulonglong uStack_2b0;
  byte *pbStack_2a8;
  undefined8 uStack_2a0;
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  longlong lStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  longlong lStack_268;
  undefined *puStack_260;
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined1 (*pauStack_210) [16];
  longlong lStack_208;
  undefined8 uStack_200;
  undefined1 (*pauStack_1f8) [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  longlong lStack_1c8;
  longlong *plStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined *puStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  char **appcStack_160 [2];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined1 (*pauStack_140) [16];
  longlong lStack_138;
  undefined8 uStack_130;
  undefined1 (*pauStack_128) [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined1 *puStack_e0;
  undefined2 uStack_d8;
  longlong lStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined4 uStack_9c;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  uint uStack_84;
  undefined1 (*pauStack_80) [16];
  char cStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar18 = &UNK_14306eb00;
  pauStack_90 = param_4;
  pauStack_80 = param_2;
  cStack_76 = param_1;
  pdb_140f60120(&uStack_2b0,&UNK_14306eb00,0xe);
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lStack_268 = *plVar12;
    puVar18 = (undefined *)plVar12[1];
  }
  else {
    lStack_268 = pdb_140f4fd10();
    *plVar12 = lStack_268;
    plVar12[1] = (longlong)puVar18;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lStack_268 + 1;
  lVar26 = _UNK_14306f548;
  uVar14 = _DAT_14306f540;
  lVar22 = _UNK_14306f538;
  pauVar17 = _DAT_14306f530;
  uStack_278 = _DAT_14306f540;
  lStack_270 = _UNK_14306f548;
  pauStack_288 = _DAT_14306f530;
  lStack_280 = _UNK_14306f538;
  puStack_260 = puVar18;
  if (param_1 == '\0') {
    uStack_1a8 = _DAT_14306f540;
    lStack_1a0 = _UNK_14306f548;
    pauStack_1b8 = _DAT_14306f530;
    lStack_1b0 = _UNK_14306f538;
    uVar21 = 0;
    lStack_198 = lStack_268;
    puStack_190 = puVar18;
  }
  else if (param_3 == (undefined1 (*) [16])0x0) {
    cStack_71 = '\x01';
    plVar12 = (longlong *)pdb_140f3bda0();
    if ((char)plVar12[2] == '\x01') {
      lStack_198 = *plVar12;
      puVar18 = (undefined *)plVar12[1];
    }
    else {
      cStack_71 = '\x01';
      lStack_198 = pdb_140f4fd10();
      *plVar12 = lStack_198;
      plVar12[1] = (longlong)puVar18;
      *(undefined1 *)(plVar12 + 2) = 1;
      unaff_RSI = plVar12;
    }
    *plVar12 = lStack_198 + 1;
    uStack_1a8 = uVar14;
    lStack_1a0 = lVar26;
    pauStack_1b8 = pauVar17;
    lStack_1b0 = lVar22;
    uVar21 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    puStack_190 = puVar18;
  }
  else {
    lVar4 = *(longlong *)param_3[3];
    pauVar13 = (undefined1 (*) [16])(lVar4 + 0x10);
    LOCK();
    bVar28 = *(char *)(lVar4 + 0x10) == '\0';
    if (bVar28) {
      *(char *)(lVar4 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar28) {
      cStack_71 = '\x01';
      pdb_142dc6be0(pauVar13);
    }
    puVar10 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_84 = 0;
      cVar11 = *(char *)(lVar4 + 0x11);
    }
    else {
      cStack_71 = '\x01';
      uStack_84 = pdb_142dc79e0();
      uStack_84 = uStack_84 ^ 1;
      cVar11 = *(char *)(lVar4 + 0x11);
    }
    if (cVar11 != '\0') {
      uVar23 = (ulonglong)pauStack_180 >> 8;
      pauStack_180 = (undefined1 (*) [16])CONCAT71((int7)uVar23,(char)uStack_84);
      pauStack_188 = pauVar13;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306f5b0,0x2b,&pauStack_188,&UNK_14306f600,&UNK_14306eb58);
    }
    pauStack_a8 = pauVar13;
    plVar12 = (longlong *)pdb_140f3bda0();
    if ((char)plVar12[2] == '\x01') {
      lVar15 = *plVar12;
      puVar18 = (undefined *)plVar12[1];
    }
    else {
      lVar15 = pdb_140f4fd10();
      *plVar12 = lVar15;
      plVar12[1] = (longlong)puVar18;
      *(undefined1 *)(plVar12 + 2) = 1;
    }
    *plVar12 = lVar15 + 1;
    pauStack_1b8 = *(undefined1 (**) [16])(lVar4 + 0x18);
    lStack_1b0 = *(longlong *)(lVar4 + 0x20);
    uStack_1a8 = *(undefined8 *)(lVar4 + 0x28);
    lStack_1a0 = *(longlong *)(lVar4 + 0x30);
    lStack_198 = *(longlong *)(lVar4 + 0x38);
    puStack_190 = *(undefined **)(lVar4 + 0x40);
    *(undefined1 (**) [16])(lVar4 + 0x18) = pauVar17;
    *(longlong *)(lVar4 + 0x20) = lVar22;
    *(undefined8 *)(lVar4 + 0x28) = uVar14;
    *(longlong *)(lVar4 + 0x30) = lVar26;
    *(longlong *)(lVar4 + 0x38) = lVar15;
    *(undefined **)(lVar4 + 0x40) = puVar18;
    pcVar1 = (char *)(lVar4 + 0x10);
    if (((char)uStack_84 == '\0') && ((*puVar10 & 0x7fffffffffffffff) != 0)) {
      cStack_71 = '\x01';
      cVar11 = pdb_142dc79e0();
      if (cVar11 == '\0') {
        *(undefined1 *)(lVar4 + 0x11) = 1;
      }
    }
    LOCK();
    cVar11 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    uVar21 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (cVar11 == '\x02') {
      cStack_71 = '\x01';
      pdb_142dc6ca0(pcVar1);
    }
  }
  pcStack_330 = &cStack_76;
  pauStack_328 = pauStack_80;
  ppauStack_320 = &pauStack_1b8;
  pbVar19 = pbStack_2a8;
  uStack_9c = uVar21;
  pdb_141c86910(&pauStack_188,pbStack_2a8,uStack_2a0,1,&UNK_14306eb10);
  if (SBORROW8(0,(longlong)pauStack_188)) {
    pauStack_258 = pauStack_180;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&pauStack_258,&UNK_14306f570,&UNK_14306eb40);
  }
  uStack_1e8 = uStack_118;
  pauStack_1f8 = pauStack_128;
  uStack_1f0 = uStack_120;
  lStack_208 = lStack_138;
  uStack_200 = uStack_130;
  uStack_218 = uStack_148;
  pauStack_210 = pauStack_140;
  uStack_228 = appcStack_160[1]._0_4_;
  uStack_224 = appcStack_160[1]._4_4_;
  uStack_220 = uStack_150;
  uStack_21c = uStack_14c;
  uStack_238 = (undefined4)uStack_168;
  uStack_234 = uStack_168._4_4_;
  uStack_230 = appcStack_160[0]._0_4_;
  uStack_22c = appcStack_160[0]._4_4_;
  uStack_248 = (undefined4)uStack_178;
  uStack_244 = uStack_178._4_4_;
  uStack_240 = (undefined4)uStack_170;
  uStack_23c = uStack_170._4_4_;
  pauStack_258 = pauStack_188;
  pauStack_250 = pauStack_180;
  uVar23 = (longlong)pauStack_128 * 0x28;
  if ((undefined1 (*) [16])0x333333333333333 < pauStack_128) {
    uVar27 = 0;
LAB_140c58b9f:
    uStack_75 = 1;
    pdb_142dc7e2a(uVar27,uVar23);
LAB_140c59777:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar23 == 0) {
    pauVar13 = (undefined1 (*) [16])0x8;
    pauStack_128 = (undefined1 (*) [16])0x0;
  }
  else {
    pdb_14007ee60();
    uVar27 = 8;
    pbVar19 = (byte *)0x8;
    pauVar13 = (undefined1 (*) [16])pub_1406abab0(uVar23,8);
    if (pauVar13 == (undefined1 (*) [16])0x0) goto LAB_140c58b9f;
  }
  pauStack_b8 = (undefined1 (*) [16])0x0;
  uStack_73 = 1;
  uStack_74 = 1;
  pauStack_c8 = pauStack_128;
  pauStack_c0 = pauVar13;
  plVar12 = (longlong *)pdb_140f3bda0();
  pauStack_a8 = param_3;
  if ((char)plVar12[2] == '\x01') {
    lStack_2f8 = *plVar12;
    pbVar19 = (byte *)plVar12[1];
  }
  else {
    uStack_73 = 1;
    uStack_74 = 1;
    lStack_2f8 = pdb_140f4fd10();
    *plVar12 = lStack_2f8;
    plVar12[1] = (longlong)pbVar19;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lStack_2f8 + 1;
  uStack_308 = uVar14;
  lStack_300 = lVar26;
  pauStack_318 = pauVar17;
  lStack_310 = lVar22;
  uStack_178 = (undefined1 (*) [16])(*pauStack_210 + lStack_208 + 1);
  auVar3 = *pauStack_210;
  pauStack_188 = pauStack_210;
  pauStack_180 = pauStack_210 + 1;
  uStack_170 = CONCAT62(uStack_170._2_6_,
                        ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar3[0xf] >> 7) << 0xf));
  uStack_168 = pauStack_1f8;
  appcStack_160[0] = &pcStack_330;
  pbStack_2f0 = pbVar19;
  pauVar17 = (undefined1 (*) [16])appcStack_160;
  while( true ) {
    pauStack_2e8 = pauVar17;
    uStack_84 = CONCAT31(uStack_84._1_3_,uStack_168 != (undefined1 (*) [16])0x0);
    if (uStack_168 == (undefined1 (*) [16])0x0) break;
    uVar16 = (uint)(ushort)uStack_170;
    if ((ushort)uStack_170 == 0) {
      do {
        auVar3 = *pauStack_180;
        pauStack_188 = pauStack_188 + -0x40;
        pauStack_180 = pauStack_180 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    pauVar13 = pauStack_188;
    uVar9 = (ushort)uVar16;
    iVar6 = 0;
    for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    uStack_170 = CONCAT62(uStack_170._2_6_,uVar9 - 1 & uVar9);
    uVar16 = iVar6 << 6;
    uStack_168 = (undefined1 (*) [16])(uStack_168[-1] + 0xf);
    pauStack_108 = (undefined1 (*) [16])((longlong)pauStack_188 + (-0x40 - (ulonglong)uVar16));
    pauVar25 = (undefined1 (*) [16])((longlong)pauStack_188 + (-0x30 - (ulonglong)uVar16));
    uStack_72 = 1;
    pauStack_100 = pauVar25;
    cVar11 = pdb_14182aa10(&pauStack_2e8,&pauStack_108);
    pauVar17 = pauStack_2e8;
    if (cVar11 != '\0') {
      pauVar17 = *(undefined1 (**) [16])((longlong)pauVar13 + (-0x40 - (ulonglong)uVar16));
      pauVar24 = *(undefined1 (**) [16])((longlong)pauVar13 + (-0x38 - (ulonglong)uVar16));
      LOCK();
      lVar22 = *(longlong *)*pauVar17;
      *(longlong *)*pauVar17 = *(longlong *)*pauVar17 + 1;
      UNLOCK();
      if (*(longlong *)*pauVar17 == 0 || SCARRY8(lVar22,1) != *(longlong *)*pauVar17 < 0)
      goto LAB_140c59777;
      pauStack_1d8 = pauVar17;
      pauStack_1d0 = pauVar24;
      pauStack_98 = pauVar17;
      pdb_140c53680(&pauStack_2e8,*(undefined8 *)((longlong)pauVar13 + (-0x40 - (ulonglong)uVar16)),
                    *(undefined8 *)((longlong)pauVar13 + (-0x38 - (ulonglong)uVar16)),pauVar25,
                    &pauStack_318,&pauStack_258);
      pauVar17 = pauStack_b8;
      pauStack_108 = pauStack_98;
      pauStack_e8 = pauStack_2d8;
      uStack_f8 = pauStack_2e8;
      uStack_f0 = pauStack_2e0;
      pauStack_100 = pauVar24;
      if (pauStack_b8 == pauStack_c8) {
        pdb_142d7ede0(&pauStack_c8);
      }
      pauStack_b8 = (undefined1 (*) [16])(*pauVar17 + 1);
      *(undefined1 (**) [16])((longlong)pauStack_c0 + (longlong)pauVar17 * 0x28 + 0x20) =
           pauStack_e8;
      auVar3._8_8_ = pauStack_100;
      auVar3._0_8_ = pauStack_108;
      puVar2 = (undefined4 *)((longlong)pauStack_c0 + (longlong)pauVar17 * 0x28 + 0x10);
      *puVar2 = (undefined4)uStack_f8;
      puVar2[1] = uStack_f8._4_4_;
      puVar2[2] = (undefined4)uStack_f0;
      puVar2[3] = uStack_f0._4_4_;
      *(undefined1 (*) [16])((longlong)pauStack_c0 + (longlong)pauVar17 * 0x28) = auVar3;
      pauVar17 = (undefined1 (*) [16])appcStack_160;
      if (pauStack_90 != (undefined1 (*) [16])0x0) {
        plVar12 = *(longlong **)((longlong)pauVar13 + (-0x40 - (ulonglong)uVar16));
        uVar14 = *(undefined8 *)((longlong)pauVar13 + (-0x38 - (ulonglong)uVar16));
        LOCK();
        lVar22 = *plVar12;
        *plVar12 = *plVar12 + 1;
        UNLOCK();
        if (*plVar12 == 0 || SCARRY8(lVar22,1) != *plVar12 < 0) goto LAB_140c59777;
        uStack_72 = 1;
        pdb_1417b6840(pauStack_90,plVar12,uVar14);
      }
    }
  }
  lVar26 = (longlong)pauStack_b8 * 0x28;
  lVar22 = (longlong)pauStack_c0 + lVar26;
  pauStack_188 = pauStack_c0;
  pauStack_180 = pauStack_c0;
  pauStack_b0 = pauStack_c8;
  uStack_178 = pauStack_c8;
  pauStack_98 = pauStack_c0;
  pauVar17 = pauStack_c0;
  uStack_170 = lVar22;
  if (pauStack_b8 != (undefined1 (*) [16])0x0) {
    pauVar13 = pauStack_c0;
    do {
      pauVar17 = (undefined1 (*) [16])(pauVar13[2] + 8);
      pauStack_180 = pauVar17;
      if (SBORROW8(0,*(longlong *)pauVar13[1])) break;
      uStack_378 = *(undefined8 *)(pauVar13[1] + 8);
      uStack_370 = *(undefined8 *)pauVar13[2];
      lStack_380 = *(longlong *)pauVar13[1];
      pdb_1417bc420(&pauStack_108,pauStack_80,*(undefined8 *)*pauVar13,
                    *(undefined8 *)(*pauVar13 + 8),&lStack_380);
      if (!SBORROW8(0,(longlong)pauStack_108)) {
        pdb_14098e520(&pauStack_108);
      }
      lVar26 = lVar26 + -0x28;
      pauVar13 = pauVar17;
    } while (lVar26 != 0);
  }
  pauVar25 = pauStack_a8;
  pauStack_90 = (undefined1 (*) [16])
                (((ulonglong)(lVar22 - (longlong)pauVar17) >> 3) * -0x3333333333333333);
  pauStack_80 = (undefined1 (*) [16])0x0;
  pauVar13 = pauVar17;
  pauStack_290 = pauVar17;
  while (pauStack_90 != pauStack_80) {
    pauStack_80 = (undefined1 (*) [16])(*pauStack_80 + 1);
    pauVar17 = (undefined1 (*) [16])(pauVar17[2] + 8);
    pdb_1409a33a0();
  }
  uVar14 = 0;
  if (pauStack_b0 != (undefined1 (*) [16])0x0) {
    pauVar13 = (undefined1 (*) [16])((longlong)pauStack_b0 * 0x28);
    pauVar17 = pauStack_98;
    pub_1406abac0((byte *)pauStack_98,(ulonglong)pauVar13,8);
    uVar14 = extraout_RAX;
  }
  if (pauVar25 == (undefined1 (*) [16])0x0) {
    uVar21 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    goto LAB_140c59362;
  }
  uStack_148 = uStack_218;
  appcStack_160[1]._0_4_ = uStack_228;
  appcStack_160[1]._4_4_ = uStack_224;
  uStack_150 = uStack_220;
  uStack_14c = uStack_21c;
  uStack_168 = (undefined1 (*) [16])CONCAT44(uStack_234,uStack_238);
  appcStack_160[0] = (char **)CONCAT44(uStack_22c,uStack_230);
  uStack_178 = (undefined1 (*) [16])CONCAT44(uStack_244,uStack_248);
  uStack_170 = CONCAT44(uStack_23c,uStack_240);
  pauStack_188 = pauStack_258;
  pauStack_180 = pauStack_250;
  if (*(int *)*pauVar25 != 3) {
    pauVar25 = (undefined1 (*) [16])CONCAT44(uStack_23c,uStack_240);
    lVar22 = CONCAT44(uStack_234,uStack_238);
    lVar26 = CONCAT44(uStack_224,uStack_228);
    auVar3 = *pauVar25;
    if (lVar22 == 0) {
      pauStack_108 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar23 = lVar22 * 0x38 + 0x47U & 0xfffffffffffffff0;
      pauVar17 = (undefined1 (*) [16])(lVar22 + uVar23 + 0x11);
      pauVar13 = (undefined1 (*) [16])((longlong)pauVar25 - uVar23);
      pauStack_108 = (undefined1 (*) [16])0x10;
    }
    pauVar24 = pauVar25 + 1;
    puStack_e0 = *pauVar25 + lVar22 + 1;
    uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
    uStack_d8 = (undefined2)uVar16;
    pauStack_100 = pauVar17;
    uStack_f8 = pauVar13;
    uStack_f0 = pauVar25;
    pauStack_e8 = pauVar24;
    lStack_d0 = lVar26;
    pauStack_90 = pauStack_108;
    while (pauVar17 = pauStack_90, lVar26 != 0) {
      if ((short)uVar16 == 0) {
        do {
          auVar3 = *pauVar24;
          pauVar25 = pauVar25 + -0x38;
          pauVar24 = pauVar24 + 1;
          uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          uStack_f0 = pauVar25;
          pauStack_e8 = pauVar24;
        } while (uVar16 == 0);
      }
      uVar8 = 0;
      for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar16 = uVar16 - 1 & uVar16;
      uStack_d8 = (undefined2)uVar16;
      lVar22 = (ulonglong)uVar8 * -0x38;
      lVar26 = lVar26 + -1;
      pauVar13 = *(undefined1 (**) [16])((longlong)pauVar25 + lVar22 + -0x38);
      plVar12 = (longlong *)((longlong)pauVar25 + lVar22 + -0x10);
      pauStack_2c8 = (undefined1 (*) [16])*plVar12;
      lStack_2c0 = plVar12[1];
      plVar12 = (longlong *)((longlong)pauVar25 + lVar22 + -0x20);
      pauStack_2d8 = (undefined1 (*) [16])*plVar12;
      pauStack_2d0 = (undefined1 (*) [16])plVar12[1];
      plVar12 = (longlong *)((longlong)pauVar25 + lVar22 + -0x30);
      pauStack_2e8 = (undefined1 (*) [16])*plVar12;
      pauStack_2e0 = (undefined1 (*) [16])plVar12[1];
      lStack_d0 = lVar26;
      if (SBORROW8(0,(longlong)pauVar13)) goto joined_r0x000140c5924a;
      plVar12 = *(longlong **)pauStack_a8[3];
      LOCK();
      lVar22 = *plVar12;
      *plVar12 = *plVar12 + 1;
      UNLOCK();
      pauStack_368 = pauVar13;
      pauStack_360 = pauStack_2e8;
      pauStack_358 = pauStack_2e0;
      pauStack_350 = pauStack_2d8;
      pauStack_80 = pauVar13;
      if (*plVar12 == 0 || SCARRY8(lVar22,1) != *plVar12 < 0) goto LAB_140c59777;
      pauStack_1d8 = pauStack_2d0;
      pauStack_1d0 = pauStack_2c8;
      lStack_1c8 = lStack_2c0;
      plStack_1c0 = plVar12;
      pdb_140c29080(&pauStack_348,pauStack_a8,&pauStack_368,&pauStack_1d8);
      if (pauStack_348 != (undefined1 (*) [16])0x8000000000000004) {
        lStack_1c8 = uStack_338;
        pauStack_1d8 = pauStack_348;
        pauStack_1d0 = (undefined1 (*) [16])uStack_340;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306e978,0x1e,&pauStack_1d8,&UNK_14306f550,&UNK_14306e9b0);
      }
      if (pauStack_80 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_360,(ulonglong)pauStack_80,1);
      }
    }
    goto LAB_140c592e6;
  }
  pdb_140ca50c0(&uStack_170,&uStack_150,0x38,0x10);
LAB_140c59303:
  pauVar17 = pauStack_180;
  if (uStack_178 != (undefined1 (*) [16])0x0) {
    puVar20 = (undefined8 *)(*pauStack_180 + 8);
    pauVar13 = uStack_178;
    do {
      if (*(ulonglong *)*(undefined1 (*) [16])(puVar20 + -1) != 0) {
        pub_1406abac0((byte *)*puVar20,*(ulonglong *)*(undefined1 (*) [16])(puVar20 + -1),1);
      }
      puVar20 = puVar20 + 4;
      pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 0xf);
    } while (pauVar13 != (undefined1 (*) [16])0x0);
  }
  if (pauStack_188 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar17,(longlong)pauStack_188 << 5,8);
  }
  uVar21 = 0;
LAB_140c59362:
  pauStack_80 = (undefined1 (*) [16])CONCAT44(pauStack_80._4_4_,uVar21);
  uStack_73 = (undefined1)uVar21;
  uStack_74 = 0;
  pdb_140ca6e20(&pauStack_318,&lStack_2f8,0x38,0x10);
  pdb_140ca51e0(&pauStack_210,&uStack_1f0,0x40,0x10);
  if ((char)pauStack_80 != '\0') {
    pdb_140ca50c0(&uStack_240,&uStack_220,0x38,0x10);
    lVar22 = CONCAT44(uStack_244,uStack_248);
    if (lVar22 != 0) {
      puVar20 = (undefined8 *)(*pauStack_250 + 8);
      do {
        if (*(ulonglong *)*(undefined1 (*) [16])(puVar20 + -1) != 0) {
          pub_1406abac0((byte *)*puVar20,*(ulonglong *)*(undefined1 (*) [16])(puVar20 + -1),1);
        }
        puVar20 = puVar20 + 4;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (pauStack_258 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_250,(longlong)pauStack_258 << 5,8);
    }
  }
  lVar22 = lStack_1b0;
  cVar11 = (char)uStack_9c;
  if (lStack_1b0 != 0) {
    if (lStack_1a0 != 0) {
      auVar3 = *pauStack_1b8;
      pauVar17 = pauStack_1b8 + 1;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar13 = pauStack_1b8;
      lVar26 = lStack_1a0;
      do {
        if ((short)uVar16 == 0) {
          do {
            auVar3 = *pauVar17;
            pauVar13 = pauVar13 + -0x10;
            pauVar17 = pauVar17 + 1;
            uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar16 == 0);
        }
        iVar6 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        plVar12 = *(longlong **)((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar6 << 4)));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          cStack_71 = cVar11;
          pdb_1406ed6a0((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar6 << 4)));
        }
        uVar16 = uVar16 - 1 & uVar16;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    lVar26 = lVar22 * 0x10 + 0x10;
    uVar23 = lVar22 + lVar26 + 0x11;
    if (uVar23 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_1b8 - lVar26),uVar23,0x10);
    }
  }
  lVar22 = lStack_280;
  if ((cVar11 != '\0') && (lStack_280 != 0)) {
    if (lStack_270 != 0) {
      auVar3 = *pauStack_288;
      pauVar17 = pauStack_288 + 1;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar13 = pauStack_288;
      lVar26 = lStack_270;
      do {
        if ((short)uVar16 == 0) {
          do {
            auVar3 = *pauVar17;
            pauVar13 = pauVar13 + -0x10;
            pauVar17 = pauVar17 + 1;
            uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar16 == 0);
        }
        iVar6 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        plVar12 = *(longlong **)((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar6 << 4)));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          pdb_1406ed6a0((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar6 << 4)));
        }
        uVar16 = uVar16 - 1 & uVar16;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    lVar26 = lVar22 * 0x10 + 0x10;
    uVar23 = lVar22 + lVar26 + 0x11;
    if (uVar23 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_288 - lVar26),uVar23,0x10);
    }
  }
  if (uStack_2b0 != 0) {
    pub_1406abac0(pbStack_2a8,uStack_2b0,1);
  }
  return;
joined_r0x000140c5924a:
  while (lVar26 != 0) {
    if ((short)uVar16 == 0) {
      do {
        auVar3 = *pauVar24;
        pauVar25 = pauVar25 + -0x38;
        pauVar24 = pauVar24 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        uStack_f0 = pauVar25;
        pauStack_e8 = pauVar24;
      } while (uVar16 == 0);
    }
    uVar8 = 0;
    for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar16 = uVar16 - 1 & uVar16;
    uStack_d8 = (undefined2)uVar16;
    lVar22 = (ulonglong)uVar8 * -0x38;
    lVar26 = lVar26 + -1;
    uVar23 = *(ulonglong *)((longlong)pauVar25 + lVar22 + -0x38);
    lStack_d0 = lVar26;
    if (uVar23 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar25 + lVar22 + -0x30),uVar23,1);
    }
    pdb_140992f50((longlong)pauVar25 + lVar22 + -0x18);
    pauVar17 = pauStack_108;
  }
LAB_140c592e6:
  if ((pauVar17 != (undefined1 (*) [16])0x0) && (pauStack_100 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)uStack_f8,(ulonglong)pauStack_100,(ulonglong)pauVar17);
  }
  goto LAB_140c59303;
}

