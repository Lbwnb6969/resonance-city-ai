// VA 0x1414d0570, PDB extent 5303 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storages<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storages<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 5303 */

void pdb_1414d0570(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong **pplVar18;
  longlong **pplVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  longlong lVar23;
  ushort uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar37;
  undefined1 unaff_XMM6_Bb;
  char cVar38;
  undefined1 unaff_XMM6_Bc;
  char cVar39;
  undefined1 unaff_XMM6_Bd;
  char cVar40;
  undefined1 unaff_XMM6_Be;
  char cVar41;
  undefined1 unaff_XMM6_Bf;
  char cVar42;
  undefined1 unaff_XMM6_Bg;
  char cVar43;
  undefined1 unaff_XMM6_Bh;
  char cVar44;
  undefined1 unaff_XMM6_Bi;
  char cVar45;
  undefined1 unaff_XMM6_Bj;
  char cVar46;
  undefined1 unaff_XMM6_Bk;
  char cVar47;
  undefined1 unaff_XMM6_Bl;
  char cVar48;
  undefined1 unaff_XMM6_Bm;
  char cVar49;
  undefined1 unaff_XMM6_Bn;
  char cVar50;
  undefined1 unaff_XMM6_Bo;
  char cVar51;
  undefined1 unaff_XMM6_Bp;
  char cVar52;
  longlong *plStack_2a8;
  byte *pbStack_2a0;
  longlong *plStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  undefined8 uStack_278;
  ulonglong uStack_270;
  ulonglong *puStack_268;
  longlong *plStack_260;
  undefined1 auStack_258 [16];
  ulonglong uStack_248;
  longlong **pplStack_240;
  ulonglong *puStack_238;
  longlong *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  ulonglong *puStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  char cStack_1b0;
  undefined2 uStack_1af;
  undefined1 uStack_1ad;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  longlong **pplStack_170;
  ulonglong *puStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  ulonglong *puStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  int iStack_e8;
  int iStack_e4;
  longlong *plStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  ulonglong *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar28 = param_7 == (longlong *)0x0;
  lVar26 = param_3;
  if (-1 < (longlong)param_7) goto LAB_1414d05ce;
  param_1 = (longlong *)0x0;
  do {
    uVar28 = 1;
    param_2 = param_7;
    pdb_142dc7e2a();
    lVar26 = param_3;
LAB_1414d05ce:
    uStack_278 = param_4;
    plStack_e0 = param_2;
    plStack_98 = param_1;
    if ((bool)uVar28) {
      pbStack_2a0 = (byte *)0x1;
      goto LAB_1414d061d;
    }
    param_3 = lVar26;
    pdb_14007ee60();
    param_1 = (longlong *)0x1;
    pbStack_2a0 = pub_1406abab0((ulonglong)param_7,1);
  } while (pbStack_2a0 == (byte *)0x0);
  pub_142e32760(pbStack_2a0,param_6,param_7);
LAB_1414d061d:
  uVar8 = _UNK_142e47bfc;
  uVar7 = _UNK_142e47bf8;
  plStack_2a8 = param_7;
  plStack_298 = param_7;
  plStack_280 = plStack_e0 + lVar26 * 2;
  uStack_d0 = *param_5;
  plVar2 = (longlong *)param_5[4];
  plStack_100 = plStack_98 + 0x2a;
  plStack_f8 = plStack_98 + 0x18;
  plStack_290 = plStack_98 + 0xc;
  plStack_288 = plStack_98 + 0x12;
  plStack_f0 = plStack_98 + 4;
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar37 = (char)iVar6;
  cVar38 = (char)((uint)iVar6 >> 8);
  cVar39 = (char)((uint)iVar6 >> 0x10);
  cVar40 = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar41 = (char)iVar6;
  cVar42 = (char)((uint)iVar6 >> 8);
  cVar43 = (char)((uint)iVar6 >> 0x10);
  cVar44 = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar45 = (char)iVar6;
  cVar46 = (char)((uint)iVar6 >> 8);
  cVar47 = (char)((uint)iVar6 >> 0x10);
  cVar48 = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar49 = (char)iVar6;
  cVar50 = (char)((uint)iVar6 >> 8);
  cVar51 = (char)((uint)iVar6 >> 0x10);
  cVar52 = (char)((uint)iVar6 >> 0x18);
  pbStack_d8 = pbStack_2a0;
LAB_1414d0960:
  if (plStack_e0 == plStack_280) {
    if (param_7 != (longlong *)0x0) {
      pub_1406abac0(pbStack_d8,(ulonglong)param_7,1);
    }
    return;
  }
  pplVar18 = (longlong **)*plStack_e0;
  lVar26 = plStack_e0[1];
  pplVar19 = pplVar18;
  lVar11 = pdb_140c41030(uStack_278,pplVar18,lVar26);
  plStack_e0 = plStack_e0 + 2;
  if (lVar11 != 0) {
    if (pplVar18 == (longlong **)0x0) goto LAB_1414d0cb0;
    if ((int)pplVar18 == 1) {
      if (*plStack_f8 != 0) goto LAB_1414d0960;
      plVar12 = (longlong *)pdb_14008d710(0);
      if (plVar12 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414d13e3;
      }
      lStack_a8 = *plVar12;
      lStack_a0 = plVar12[1];
      *plVar12 = *plVar12 + 1;
      uVar10 = _UNK_143512188;
      uVar9 = _DAT_143512180;
      plVar12 = _UNK_143512178;
      puVar15 = _DAT_143512170;
      uStack_b8 = _DAT_143512180;
      uStack_b0 = _UNK_143512188;
      puStack_c8 = _DAT_143512170;
      pcStack_c0 = (code *)_UNK_143512178;
      puVar13 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar13[2] == '\x01') {
        uStack_248 = *puVar13;
        pplVar19 = (longlong **)puVar13[1];
      }
      else {
        uStack_248 = pdb_140f4fd10();
        *puVar13 = uStack_248;
        puVar13[1] = (ulonglong)pplVar19;
        *(undefined1 *)(puVar13 + 2) = 1;
      }
      *puVar13 = uStack_248 + 1;
      auStack_258._8_8_ = _UNK_143313e58;
      auStack_258._0_8_ = _DAT_143313e50;
      puStack_268 = _DAT_143313e40;
      plStack_260 = _UNK_143313e48;
      pplStack_240 = pplVar19;
      plVar14 = (longlong *)pdb_14008d710(0);
      if (plVar14 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414d13e3;
      }
      lStack_118 = *plVar14;
      lStack_110 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      lStack_148 = lStack_a8;
      lStack_140 = lStack_a0;
      uStack_158 = uStack_b8;
      uStack_150 = uStack_b0;
      puStack_168 = puStack_c8;
      plStack_160 = (longlong *)pcStack_c0;
      auStack_198._8_8_ = plStack_260;
      auStack_198._0_8_ = puStack_268;
      auStack_188 = auStack_258;
      uStack_178 = uStack_248;
      pplStack_170 = pplStack_240;
      uStack_128 = uVar9;
      uStack_120 = uVar10;
      puStack_138 = puVar15;
      plStack_130 = plVar12;
      pdb_1414fa150(auStack_198,lVar11);
      pub_142e32760(&puStack_268,auStack_198,0x90);
      plVar12 = plStack_f8;
    }
    else {
      if (*plStack_100 != 0) goto LAB_1414d0960;
      plVar12 = (longlong *)pdb_14008d710(0);
      if (plVar12 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414d13e3;
      }
      lStack_a8 = *plVar12;
      lStack_a0 = plVar12[1];
      *plVar12 = *plVar12 + 1;
      uVar10 = _UNK_143512188;
      uVar9 = _DAT_143512180;
      plVar12 = _UNK_143512178;
      puVar15 = _DAT_143512170;
      uStack_b8 = _DAT_143512180;
      uStack_b0 = _UNK_143512188;
      puStack_c8 = _DAT_143512170;
      pcStack_c0 = (code *)_UNK_143512178;
      puVar13 = (ulonglong *)pdb_140f3bda0();
      if ((char)puVar13[2] == '\x01') {
        uStack_248 = *puVar13;
        pplVar19 = (longlong **)puVar13[1];
      }
      else {
        uStack_248 = pdb_140f4fd10();
        *puVar13 = uStack_248;
        puVar13[1] = (ulonglong)pplVar19;
        *(undefined1 *)(puVar13 + 2) = 1;
      }
      *puVar13 = uStack_248 + 1;
      auStack_258._8_8_ = _UNK_143313e58;
      auStack_258._0_8_ = _DAT_143313e50;
      puStack_268 = _DAT_143313e40;
      plStack_260 = _UNK_143313e48;
      pplStack_240 = pplVar19;
      plVar14 = (longlong *)pdb_14008d710(0);
      if (plVar14 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
        goto LAB_1414d13e3;
      }
      lStack_118 = *plVar14;
      lStack_110 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      lStack_148 = lStack_a8;
      lStack_140 = lStack_a0;
      uStack_158 = uStack_b8;
      uStack_150 = uStack_b0;
      puStack_168 = puStack_c8;
      plStack_160 = (longlong *)pcStack_c0;
      auStack_198._8_8_ = plStack_260;
      auStack_198._0_8_ = puStack_268;
      auStack_188 = auStack_258;
      uStack_178 = uStack_248;
      pplStack_170 = pplStack_240;
      uStack_128 = uVar9;
      uStack_120 = uVar10;
      puStack_138 = puVar15;
      plStack_130 = plVar12;
      pdb_1414fa150(auStack_198,lVar11);
      pub_142e32760(&puStack_268,auStack_198,0x90);
      plVar12 = plStack_100;
    }
    pub_142e32760(plVar12,&puStack_268,0x90);
    goto LAB_1414d0e46;
  }
  pplVar19 = &plStack_2a8;
  pdb_140f60be0(&uStack_1d8);
  plVar12 = (longlong *)pdb_14008d710(0);
  if (plVar12 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_14330e598);
    goto LAB_1414d13e3;
  }
  lStack_a8 = *plVar12;
  lStack_a0 = plVar12[1];
  *plVar12 = *plVar12 + 1;
  uVar10 = _UNK_143512188;
  uVar9 = _DAT_143512180;
  plVar12 = _UNK_143512178;
  puVar15 = _DAT_143512170;
  uStack_b8 = _DAT_143512180;
  uStack_b0 = _UNK_143512188;
  puStack_c8 = _DAT_143512170;
  pcStack_c0 = (code *)_UNK_143512178;
  puVar13 = (ulonglong *)pdb_140f3bda0();
  if ((char)puVar13[2] == '\x01') {
    uStack_248 = *puVar13;
    pplVar19 = (longlong **)puVar13[1];
  }
  else {
    uStack_248 = pdb_140f4fd10();
    *puVar13 = uStack_248;
    puVar13[1] = (ulonglong)pplVar19;
    *(undefined1 *)(puVar13 + 2) = 1;
  }
  *puVar13 = uStack_248 + 1;
  auStack_258._8_8_ = _UNK_143313e58;
  auStack_258._0_8_ = _DAT_143313e50;
  puStack_268 = _DAT_143313e40;
  plStack_260 = _UNK_143313e48;
  pplStack_240 = pplVar19;
  plVar14 = (longlong *)pdb_14008d710(0);
  if (plVar14 != (longlong *)0x0) {
    lStack_118 = *plVar14;
    lStack_110 = plVar14[1];
    *plVar14 = *plVar14 + 1;
    lStack_148 = lStack_a8;
    lStack_140 = lStack_a0;
    uStack_158 = uStack_b8;
    uStack_150 = uStack_b0;
    puStack_168 = puStack_c8;
    plStack_160 = (longlong *)pcStack_c0;
    auStack_198._8_8_ = plStack_260;
    auStack_198._0_8_ = puStack_268;
    auStack_188 = auStack_258;
    uStack_178 = uStack_248;
    pplStack_170 = pplStack_240;
    uStack_128 = uVar9;
    uStack_120 = uVar10;
    puStack_138 = puVar15;
    plStack_130 = plVar12;
    puStack_c8 = &uStack_1d8;
    pcStack_c0 = pdb_140001020;
    pdb_140f60760(&puStack_268,&UNK_143313e18,&puStack_c8);
    puStack_c8 = puStack_268;
    pcStack_c0 = (code *)plStack_260;
    uStack_b8 = auStack_258._0_8_;
    pdb_1414cf0c0(plStack_98,pplVar18,lVar26,auStack_198,uStack_d0,plVar2,&puStack_c8);
    pdb_1404d6920(auStack_198);
    if (uStack_1d8 != 0) {
      pub_1406abac0(pbStack_1d0,uStack_1d8,1);
    }
    goto LAB_1414d0960;
  }
  pdb_142dc7890(&UNK_14330e598);
LAB_1414d13e3:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_1414d0cb0:
  auStack_198._0_8_ = lVar26;
  uVar25 = pdb_1400af0a0(plStack_f0);
  bVar29 = (byte)(uVar25 >> 0x39);
  auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
  auVar30 = pshuflw(auVar30,auVar30,0);
  pplVar18 = (longlong **)0x0;
  uVar16 = uVar25;
  while( true ) {
    uVar16 = uVar16 & plStack_98[1];
    auVar1 = *(undefined1 (*) [16])(*plStack_98 + uVar16);
    auVar34[0] = -(auVar1[0] == auVar30[0]);
    auVar34[1] = -(auVar1[1] == auVar30[1]);
    auVar34[2] = -(auVar1[2] == auVar30[2]);
    auVar34[3] = -(auVar1[3] == auVar30[3]);
    auVar34[4] = -(auVar1[4] == auVar30[4]);
    auVar34[5] = -(auVar1[5] == auVar30[5]);
    auVar34[6] = -(auVar1[6] == auVar30[6]);
    auVar34[7] = -(auVar1[7] == auVar30[7]);
    auVar34[8] = -(auVar1[8] == auVar30[0]);
    auVar34[9] = -(auVar1[9] == auVar30[1]);
    auVar34[10] = -(auVar1[10] == auVar30[2]);
    auVar34[0xb] = -(auVar1[0xb] == auVar30[3]);
    auVar34[0xc] = -(auVar1[0xc] == auVar30[4]);
    auVar34[0xd] = -(auVar1[0xd] == auVar30[5]);
    auVar34[0xe] = -(auVar1[0xe] == auVar30[6]);
    auVar34[0xf] = -(auVar1[0xf] == auVar30[7]);
    uVar24 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
    uVar27 = (uint)uVar24;
    while (uVar24 != 0) {
      uVar17 = 0;
      for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      if (*(longlong *)(*plStack_98 + -0x98 + (uVar17 + uVar16 & plStack_98[1]) * -0x98) == lVar26)
      goto LAB_1414d0960;
      uVar24 = (ushort)(uVar27 - 1) & (ushort)uVar27;
      uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar24);
    }
    auVar31[0] = -(auVar1[0] == cVar37);
    auVar31[1] = -(auVar1[1] == cVar38);
    auVar31[2] = -(auVar1[2] == cVar39);
    auVar31[3] = -(auVar1[3] == cVar40);
    auVar31[4] = -(auVar1[4] == cVar41);
    auVar31[5] = -(auVar1[5] == cVar42);
    auVar31[6] = -(auVar1[6] == cVar43);
    auVar31[7] = -(auVar1[7] == cVar44);
    auVar31[8] = -(auVar1[8] == cVar45);
    auVar31[9] = -(auVar1[9] == cVar46);
    auVar31[10] = -(auVar1[10] == cVar47);
    auVar31[0xb] = -(auVar1[0xb] == cVar48);
    auVar31[0xc] = -(auVar1[0xc] == cVar49);
    auVar31[0xd] = -(auVar1[0xd] == cVar50);
    auVar31[0xe] = -(auVar1[0xe] == cVar51);
    auVar31[0xf] = -(auVar1[0xf] == cVar52);
    uVar24 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar24 != 0) break;
    uVar16 = (longlong)pplVar18 + uVar16 + 0x10;
    pplVar18 = pplVar18 + 2;
  }
  if (plStack_98[2] == 0) {
    pplVar18 = (longlong **)0x1;
    pdb_142dadf10(plStack_98,1,plStack_f0,CONCAT71((uint7)(byte)(uVar24 >> 8),1));
  }
  plVar12 = (longlong *)pdb_14008d710(0);
  uStack_270 = uVar25 >> 0x39;
  if (plVar12 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_14330e598);
  }
  else {
    lStack_a8 = *plVar12;
    lStack_a0 = plVar12[1];
    *plVar12 = *plVar12 + 1;
    uVar10 = _UNK_143512188;
    uVar9 = _DAT_143512180;
    plVar12 = _UNK_143512178;
    puVar15 = _DAT_143512170;
    uStack_b8 = _DAT_143512180;
    uStack_b0 = _UNK_143512188;
    puStack_c8 = _DAT_143512170;
    pcStack_c0 = (code *)_UNK_143512178;
    puVar13 = (ulonglong *)pdb_140f3bda0();
    if ((char)puVar13[2] == '\x01') {
      uStack_178 = *puVar13;
      pplVar18 = (longlong **)puVar13[1];
    }
    else {
      uStack_178 = pdb_140f4fd10();
      *puVar13 = uStack_178;
      puVar13[1] = (ulonglong)pplVar18;
      *(undefined1 *)(puVar13 + 2) = 1;
    }
    *puVar13 = uStack_178 + 1;
    auStack_188._8_8_ = _UNK_143313e58;
    auStack_188._0_8_ = _DAT_143313e50;
    auStack_198._8_8_ = _UNK_143313e48;
    auStack_198._0_8_ = _DAT_143313e40;
    pplStack_170 = pplVar18;
    plVar14 = (longlong *)pdb_14008d710(0);
    if (plVar14 != (longlong *)0x0) {
      lStack_1e8 = *plVar14;
      lStack_1e0 = plVar14[1];
      *plVar14 = *plVar14 + 1;
      lStack_218 = lStack_a8;
      lStack_210 = lStack_a0;
      uStack_228 = uStack_b8;
      uStack_220 = uStack_b0;
      puStack_238 = puStack_c8;
      plStack_230 = (longlong *)pcStack_c0;
      puStack_268 = (ulonglong *)auStack_198._0_8_;
      plStack_260 = (longlong *)auStack_198._8_8_;
      auStack_258 = auStack_188;
      uStack_248 = uStack_178;
      pplStack_240 = pplStack_170;
      uStack_1f8 = uVar9;
      uStack_1f0 = uVar10;
      puStack_208 = puVar15;
      plStack_200 = plVar12;
      pdb_1414fa150(&puStack_268,lVar11);
      pub_142e32760(auStack_198,&puStack_268,0x90);
      pauVar20 = (undefined1 (*) [16])*plStack_98;
      uVar16 = plStack_98[1];
      uVar25 = uVar25 & uVar16;
      auVar30 = *(undefined1 (*) [16])(*pauVar20 + uVar25);
      uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar24;
      if (uVar24 == 0) {
        lVar23 = 0x10;
        do {
          uVar25 = uVar25 + lVar23 & uVar16;
          auVar30 = *(undefined1 (*) [16])(*pauVar20 + uVar25);
          lVar23 = lVar23 + 0x10;
          uVar27 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
        } while (uVar27 == 0);
      }
      uVar17 = 0;
      for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
        uVar17 = uVar17 + 1;
      }
      uVar25 = uVar17 + uVar25 & uVar16;
      bVar29 = (*pauVar20)[uVar25];
      if (-1 < (char)bVar29) {
        auVar30 = *pauVar20;
        uVar27 = 0;
        for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
            uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        uVar25 = (ulonglong)uVar27;
        bVar29 = (*pauVar20)[uVar25];
      }
      (*pauVar20)[uVar25] = (char)uStack_270;
      pauVar20[1][uVar25 - 0x10 & uVar16] = (char)uStack_270;
      *(longlong *)((longlong)pauVar20 + uVar25 * -0x98 + -0x98) = lVar26;
      pub_142e32760((longlong)pauVar20 + uVar25 * -0x98 + -0x90,auStack_198,0x90);
      auVar30._0_8_ = CONCAT71(0,bVar29 & 1);
      auVar30._8_4_ = uVar7;
      auVar30._12_4_ = uVar8;
      plStack_98[2] = plStack_98[2] - auVar30._0_8_;
      plStack_98[3] = plStack_98[3] - auVar30._8_8_;
LAB_1414d0e46:
      pauVar21 = *(undefined1 (**) [16])(lVar11 + 0x30);
      lVar26 = *(longlong *)(lVar11 + 0x48);
      auVar30 = *pauVar21;
      pauVar20 = pauVar21 + 1;
      uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
LAB_1414d0fe0:
      if (lVar26 != 0) {
        if ((short)uVar27 == 0) {
          do {
            auVar30 = *pauVar20;
            pauVar21 = pauVar21 + -0x68;
            pauVar20 = pauVar20 + 1;
            uVar27 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar27 == 0);
        }
        uVar17 = 0;
        for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        uVar27 = uVar27 - 1 & uVar27;
        lVar26 = lVar26 + -1;
        iVar6 = *(int *)((longlong)pauVar21 + (ulonglong)uVar17 * -0x68 + -0x68);
        iStack_e4 = iVar6;
        if (plVar2[3] != 0) {
          uVar16 = pdb_1400aede0(plVar2 + 4,&iStack_e4);
          lVar23 = *plVar2;
          bVar29 = (byte)(uVar16 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar22 = 0;
          while( true ) {
            uVar16 = uVar16 & plVar2[1];
            auVar1 = *(undefined1 (*) [16])(lVar23 + uVar16);
            auVar35[0] = -(auVar1[0] == auVar30[0]);
            auVar35[1] = -(auVar1[1] == auVar30[1]);
            auVar35[2] = -(auVar1[2] == auVar30[2]);
            auVar35[3] = -(auVar1[3] == auVar30[3]);
            auVar35[4] = -(auVar1[4] == auVar30[4]);
            auVar35[5] = -(auVar1[5] == auVar30[5]);
            auVar35[6] = -(auVar1[6] == auVar30[6]);
            auVar35[7] = -(auVar1[7] == auVar30[7]);
            auVar35[8] = -(auVar1[8] == auVar30[0]);
            auVar35[9] = -(auVar1[9] == auVar30[1]);
            auVar35[10] = -(auVar1[10] == auVar30[2]);
            auVar35[0xb] = -(auVar1[0xb] == auVar30[3]);
            auVar35[0xc] = -(auVar1[0xc] == auVar30[4]);
            auVar35[0xd] = -(auVar1[0xd] == auVar30[5]);
            auVar35[0xe] = -(auVar1[0xe] == auVar30[6]);
            auVar35[0xf] = -(auVar1[0xf] == auVar30[7]);
            uVar24 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar35[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar24;
            while (uVar24 != 0) {
              uVar5 = 0;
              for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar25 = uVar5 + uVar16 & plVar2[1];
              if (iVar6 == *(int *)(lVar23 + -0x18 + uVar25 * -0x18)) {
                lVar23 = lVar23 + uVar25 * -0x18;
                if (*(char *)(lVar23 + -4) == '\x11') goto LAB_1414d0fe0;
                uStack_1a8 = *(undefined8 *)(lVar23 + -0xc);
                uStack_19d = *(undefined1 *)(lVar23 + -1);
                uStack_19f = *(undefined2 *)(lVar23 + -3);
                cStack_1a0 = *(char *)(lVar23 + -4);
                pdb_1409ed9b0(auStack_198,uStack_d0,&uStack_1a8);
                if ((int)uStack_178 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313e00);
                }
                uStack_1c8 = auStack_188._0_8_;
                uStack_1c0 = auStack_188._8_8_;
                uStack_1d8 = auStack_198._0_8_;
                pbStack_1d0 = (byte *)auStack_198._8_8_;
                puVar15 = (ulonglong *)
                          pdb_1409ef0f0(uStack_d0,uStack_178 & 0xffffffff,uStack_178._4_4_);
                plVar12 = (longlong *)puVar15[3];
                LOCK();
                lVar23 = *plVar12;
                *plVar12 = *plVar12 + 1;
                UNLOCK();
                if (*plVar12 == 0 || SCARRY8(lVar23,1) != *plVar12 < 0) goto LAB_1414d13e3;
                puStack_168 = (ulonglong *)puVar15[2];
                uStack_178 = *puVar15;
                pplStack_170 = (longlong **)puVar15[1];
                auStack_188._8_8_ = uStack_1c0;
                auStack_188._0_8_ = uStack_1c8;
                auStack_198._8_8_ = pbStack_1d0;
                auStack_198._0_8_ = uStack_1d8;
                plStack_160 = plVar12;
                pdb_141408060(&puStack_268,plStack_290,iVar6,auStack_198);
                if ((char)uStack_248 != '\x11') {
                  LOCK();
                  *plStack_230 = *plStack_230 + -1;
                  UNLOCK();
                  if (*plStack_230 == 0) {
                    pdb_140c7b7a0(&plStack_230);
                  }
                }
                goto LAB_1414d0fe0;
              }
              uVar24 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar24);
            }
            auVar32[0] = -(auVar1[0] == cVar37);
            auVar32[1] = -(auVar1[1] == cVar38);
            auVar32[2] = -(auVar1[2] == cVar39);
            auVar32[3] = -(auVar1[3] == cVar40);
            auVar32[4] = -(auVar1[4] == cVar41);
            auVar32[5] = -(auVar1[5] == cVar42);
            auVar32[6] = -(auVar1[6] == cVar43);
            auVar32[7] = -(auVar1[7] == cVar44);
            auVar32[8] = -(auVar1[8] == cVar45);
            auVar32[9] = -(auVar1[9] == cVar46);
            auVar32[10] = -(auVar1[10] == cVar47);
            auVar32[0xb] = -(auVar1[0xb] == cVar48);
            auVar32[0xc] = -(auVar1[0xc] == cVar49);
            auVar32[0xd] = -(auVar1[0xd] == cVar50);
            auVar32[0xe] = -(auVar1[0xe] == cVar51);
            auVar32[0xf] = -(auVar1[0xf] == cVar52);
            if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
            uVar16 = uVar16 + lVar22 + 0x10;
            lVar22 = lVar22 + 0x10;
          }
        }
        goto LAB_1414d0fe0;
      }
      pauVar21 = *(undefined1 (**) [16])(lVar11 + 0x30);
      lVar26 = *(longlong *)(lVar11 + 0x48);
      auVar30 = *pauVar21;
      pauVar20 = pauVar21 + 1;
      uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
LAB_1414d1210:
      if (lVar26 != 0) {
        if ((short)uVar27 == 0) {
          do {
            auVar30 = *pauVar20;
            pauVar21 = pauVar21 + -0x68;
            pauVar20 = pauVar20 + 1;
            uVar27 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar27 == 0);
        }
        uVar17 = 0;
        for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        uVar27 = uVar27 - 1 & uVar27;
        lVar26 = lVar26 + -1;
        iVar6 = *(int *)((longlong)pauVar21 + (ulonglong)uVar17 * -0x68 + -0x68);
        iStack_e8 = iVar6;
        if (plVar2[9] != 0) {
          uVar16 = pdb_1400aede0(plVar2 + 10,&iStack_e8);
          lVar11 = plVar2[6];
          bVar29 = (byte)(uVar16 >> 0x39);
          auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar30 = pshuflw(auVar30,auVar30,0);
          lVar23 = 0;
          while( true ) {
            uVar16 = uVar16 & plVar2[7];
            auVar1 = *(undefined1 (*) [16])(lVar11 + uVar16);
            auVar36[0] = -(auVar1[0] == auVar30[0]);
            auVar36[1] = -(auVar1[1] == auVar30[1]);
            auVar36[2] = -(auVar1[2] == auVar30[2]);
            auVar36[3] = -(auVar1[3] == auVar30[3]);
            auVar36[4] = -(auVar1[4] == auVar30[4]);
            auVar36[5] = -(auVar1[5] == auVar30[5]);
            auVar36[6] = -(auVar1[6] == auVar30[6]);
            auVar36[7] = -(auVar1[7] == auVar30[7]);
            auVar36[8] = -(auVar1[8] == auVar30[0]);
            auVar36[9] = -(auVar1[9] == auVar30[1]);
            auVar36[10] = -(auVar1[10] == auVar30[2]);
            auVar36[0xb] = -(auVar1[0xb] == auVar30[3]);
            auVar36[0xc] = -(auVar1[0xc] == auVar30[4]);
            auVar36[0xd] = -(auVar1[0xd] == auVar30[5]);
            auVar36[0xe] = -(auVar1[0xe] == auVar30[6]);
            auVar36[0xf] = -(auVar1[0xf] == auVar30[7]);
            uVar24 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
            uVar17 = (uint)uVar24;
            while (uVar24 != 0) {
              uVar5 = 0;
              for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              uVar25 = uVar5 + uVar16 & plVar2[7];
              if (iVar6 == *(int *)(lVar11 + -0x18 + uVar25 * -0x18)) {
                lVar11 = lVar11 + uVar25 * -0x18;
                if (*(char *)(lVar11 + -4) == '\x11') goto LAB_1414d1210;
                uStack_1b8 = *(undefined8 *)(lVar11 + -0xc);
                uStack_1ad = *(undefined1 *)(lVar11 + -1);
                uStack_1af = *(undefined2 *)(lVar11 + -3);
                cStack_1b0 = *(char *)(lVar11 + -4);
                pdb_1409ed9b0(auStack_198,uStack_d0,&uStack_1b8);
                if ((int)uStack_178 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_143313d71,99,&UNK_143313de8);
                }
                uStack_b8 = auStack_188._0_8_;
                uStack_b0 = auStack_188._8_8_;
                puStack_c8 = (ulonglong *)auStack_198._0_8_;
                pcStack_c0 = (code *)auStack_198._8_8_;
                puVar15 = (ulonglong *)
                          pdb_1409ef0f0(uStack_d0,uStack_178 & 0xffffffff,uStack_178._4_4_);
                plVar12 = (longlong *)puVar15[3];
                LOCK();
                lVar11 = *plVar12;
                *plVar12 = *plVar12 + 1;
                UNLOCK();
                if (*plVar12 == 0 || SCARRY8(lVar11,1) != *plVar12 < 0) goto LAB_1414d13e3;
                puStack_168 = (ulonglong *)puVar15[2];
                uStack_178 = *puVar15;
                pplStack_170 = (longlong **)puVar15[1];
                auStack_188._8_8_ = uStack_b0;
                auStack_188._0_8_ = uStack_b8;
                auStack_198._8_8_ = pcStack_c0;
                auStack_198._0_8_ = puStack_c8;
                plStack_160 = plVar12;
                pdb_141408060(&puStack_268,plStack_288,iVar6,auStack_198);
                if ((char)uStack_248 != '\x11') {
                  LOCK();
                  *plStack_230 = *plStack_230 + -1;
                  UNLOCK();
                  if (*plStack_230 == 0) {
                    pdb_140c7b7a0(&plStack_230);
                  }
                }
                goto LAB_1414d1210;
              }
              uVar24 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar24);
            }
            auVar33[0] = -(auVar1[0] == cVar37);
            auVar33[1] = -(auVar1[1] == cVar38);
            auVar33[2] = -(auVar1[2] == cVar39);
            auVar33[3] = -(auVar1[3] == cVar40);
            auVar33[4] = -(auVar1[4] == cVar41);
            auVar33[5] = -(auVar1[5] == cVar42);
            auVar33[6] = -(auVar1[6] == cVar43);
            auVar33[7] = -(auVar1[7] == cVar44);
            auVar33[8] = -(auVar1[8] == cVar45);
            auVar33[9] = -(auVar1[9] == cVar46);
            auVar33[10] = -(auVar1[10] == cVar47);
            auVar33[0xb] = -(auVar1[0xb] == cVar48);
            auVar33[0xc] = -(auVar1[0xc] == cVar49);
            auVar33[0xd] = -(auVar1[0xd] == cVar50);
            auVar33[0xe] = -(auVar1[0xe] == cVar51);
            auVar33[0xf] = -(auVar1[0xf] == cVar52);
            if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
            uVar16 = uVar16 + lVar23 + 0x10;
            lVar23 = lVar23 + 0x10;
          }
        }
        goto LAB_1414d1210;
      }
      goto LAB_1414d0960;
    }
    pdb_142dc7890(&UNK_14330e598);
  }
  goto LAB_1414d13e3;
}

