// VA 0x140aa3450, PDB extent 5655 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storages<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storages<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 5655 */

void pdb_140aa3450(longlong *param_1,longlong *****param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,longlong *****param_7)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong ****pppplVar3;
  longlong ****pppplVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auVar9 [12];
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong *****ppppplVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ushort uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  undefined1 uVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar42;
  undefined1 unaff_XMM6_Bb;
  char cVar43;
  undefined1 unaff_XMM6_Bc;
  char cVar44;
  undefined1 unaff_XMM6_Bd;
  char cVar45;
  undefined1 unaff_XMM6_Be;
  char cVar46;
  undefined1 unaff_XMM6_Bf;
  char cVar47;
  undefined1 unaff_XMM6_Bg;
  char cVar48;
  undefined1 unaff_XMM6_Bh;
  char cVar49;
  undefined1 unaff_XMM6_Bi;
  char cVar50;
  undefined1 unaff_XMM6_Bj;
  char cVar51;
  undefined1 unaff_XMM6_Bk;
  char cVar52;
  undefined1 unaff_XMM6_Bl;
  char cVar53;
  undefined1 unaff_XMM6_Bm;
  char cVar54;
  undefined1 unaff_XMM6_Bn;
  char cVar55;
  undefined1 unaff_XMM6_Bo;
  char cVar56;
  undefined1 unaff_XMM6_Bp;
  char cVar57;
  longlong ****pppplStack_298;
  byte *pbStack_290;
  longlong ****pppplStack_288;
  longlong *plStack_280;
  longlong *plStack_278;
  longlong ****pppplStack_270;
  longlong *plStack_268;
  ulonglong uStack_260;
  int *piStack_258;
  longlong *plStack_250;
  undefined1 auStack_248 [16];
  longlong lStack_238;
  longlong ****pppplStack_230;
  int *piStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  int *piStack_1f8;
  longlong *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  longlong lStack_1a8;
  longlong ****pppplStack_1a0;
  int *piStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  longlong lStack_170;
  int *piStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  int iStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  longlong ****pppplStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  byte *pbStack_e8;
  int iStack_dc;
  longlong *plStack_d8;
  longlong *plStack_d0;
  int *piStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar31 = param_7 == (longlong *****)0x0;
  lVar24 = param_3;
  if (-1 < (longlong)param_7) goto LAB_140aa34ae;
  param_1 = (longlong *)0x0;
  do {
    uVar31 = 1;
    param_2 = param_7;
    pdb_142dc7e2a();
    lVar24 = param_3;
LAB_140aa34ae:
    plStack_d8 = param_4;
    plStack_98 = param_1;
    if ((bool)uVar31) {
      pbStack_290 = (byte *)0x1;
      goto LAB_140aa3503;
    }
    param_3 = lVar24;
    pdb_14007ee60();
    param_1 = (longlong *)0x1;
    pbStack_290 = pub_1406abab0((ulonglong)param_7,1);
  } while (pbStack_290 == (byte *)0x0);
  pub_142e32760(pbStack_290,param_6,param_7);
LAB_140aa3503:
  uVar11 = _UNK_142e47bfc;
  uVar10 = _UNK_142e47bf8;
  pppplStack_298 = (longlong ****)param_7;
  pppplStack_288 = (longlong ****)param_7;
  pppplStack_270 = (longlong ****)(param_2 + lVar24 * 2);
  lVar24 = *param_5;
  plVar2 = (longlong *)param_5[4];
  plStack_100 = plStack_98 + 0x2a;
  plStack_f8 = plStack_98 + 0x18;
  plStack_280 = plStack_98 + 0xc;
  plStack_278 = plStack_98 + 0x12;
  plStack_110 = plStack_d8 + 0x24;
  plStack_108 = plStack_d8 + 0x12;
  plStack_268 = plStack_d8 + 4;
  plStack_f0 = plStack_98 + 4;
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar42 = (char)iVar8;
  cVar43 = (char)((uint)iVar8 >> 8);
  cVar44 = (char)((uint)iVar8 >> 0x10);
  cVar45 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar46 = (char)iVar8;
  cVar47 = (char)((uint)iVar8 >> 8);
  cVar48 = (char)((uint)iVar8 >> 0x10);
  cVar49 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar50 = (char)iVar8;
  cVar51 = (char)((uint)iVar8 >> 8);
  cVar52 = (char)((uint)iVar8 >> 0x10);
  cVar53 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar54 = (char)iVar8;
  cVar55 = (char)((uint)iVar8 >> 8);
  cVar56 = (char)((uint)iVar8 >> 0x10);
  cVar57 = (char)((uint)iVar8 >> 0x18);
  pbStack_e8 = pbStack_290;
  if (param_2 == (longlong *****)pppplStack_270) {
LAB_140aa35b7:
    if (param_7 != (longlong *****)0x0) {
      pub_1406abac0(pbStack_e8,(ulonglong)param_7,1);
    }
    return;
  }
LAB_140aa38e0:
  pppplStack_118 = (longlong ****)(param_2 + 2);
  pppplVar3 = *param_2;
  pppplVar4 = param_2[1];
  if (pppplVar3 != (longlong ****)0x0) {
    if ((int)pppplVar3 != 1) {
      if (*plStack_110 == 0) goto LAB_140aa3a01;
      if (*plStack_100 != 0) goto LAB_140aa3d2d;
      plVar15 = (longlong *)pdb_14008d710(0);
      if (plVar15 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa442b;
      }
      lStack_a8 = *plVar15;
      lStack_a0 = plVar15[1];
      *plVar15 = *plVar15 + 1;
      uVar14 = _UNK_14306c4f8;
      uVar13 = _DAT_14306c4f0;
      plVar15 = _UNK_14306c4e8;
      piVar12 = _DAT_14306c4e0;
      uStack_b8 = _DAT_14306c4f0;
      uStack_b0 = _UNK_14306c4f8;
      piStack_c8 = _DAT_14306c4e0;
      pcStack_c0 = (code *)_UNK_14306c4e8;
      plVar16 = (longlong *)pdb_140f3bda0();
      if ((char)plVar16[2] == '\x01') {
        lStack_238 = *plVar16;
        param_2 = (longlong *****)plVar16[1];
      }
      else {
        lStack_238 = pdb_140f4fd10();
        *plVar16 = lStack_238;
        plVar16[1] = (longlong)param_2;
        *(undefined1 *)(plVar16 + 2) = 1;
      }
      *plVar16 = lStack_238 + 1;
      auStack_248._8_8_ = _UNK_143046aa8;
      auStack_248._0_8_ = _DAT_143046aa0;
      piStack_258 = _DAT_143046a90;
      plStack_250 = _UNK_143046a98;
      pppplStack_230 = (longlong ****)param_2;
      plVar17 = (longlong *)pdb_14008d710(0);
      plVar16 = plStack_110;
      if (plVar17 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa442b;
      }
      lStack_148 = *plVar17;
      lStack_140 = plVar17[1];
      *plVar17 = *plVar17 + 1;
      lStack_178 = lStack_a8;
      lStack_170 = lStack_a0;
      uStack_188 = uStack_b8;
      uStack_180 = uStack_b0;
      piStack_198 = piStack_c8;
      plStack_190 = (longlong *)pcStack_c0;
      auStack_1c8._8_8_ = plStack_250;
      auStack_1c8._0_8_ = piStack_258;
      auStack_1b8 = auStack_248;
      lStack_1a8 = lStack_238;
      pppplStack_1a0 = pppplStack_230;
      uStack_158 = uVar13;
      uStack_150 = uVar14;
      piStack_168 = piVar12;
      plStack_160 = plVar15;
      pdb_140c8eed0(auStack_1c8,plStack_110);
      pub_142e32760(&piStack_258,auStack_1c8,0x90);
      plVar15 = plStack_100;
LAB_140aa3ecb:
      pub_142e32760(plVar15,&piStack_258,0x90);
      plStack_d0 = plVar16;
      goto LAB_140aa3ed3;
    }
    if (*plStack_108 == 0) goto LAB_140aa3a01;
    if (*plStack_f8 == 0) {
      plVar15 = (longlong *)pdb_14008d710(0);
      if (plVar15 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa442b;
      }
      lStack_a8 = *plVar15;
      lStack_a0 = plVar15[1];
      *plVar15 = *plVar15 + 1;
      uVar14 = _UNK_14306c4f8;
      uVar13 = _DAT_14306c4f0;
      plVar15 = _UNK_14306c4e8;
      piVar12 = _DAT_14306c4e0;
      uStack_b8 = _DAT_14306c4f0;
      uStack_b0 = _UNK_14306c4f8;
      piStack_c8 = _DAT_14306c4e0;
      pcStack_c0 = (code *)_UNK_14306c4e8;
      plVar16 = (longlong *)pdb_140f3bda0();
      if ((char)plVar16[2] == '\x01') {
        lStack_238 = *plVar16;
        param_2 = (longlong *****)plVar16[1];
      }
      else {
        lStack_238 = pdb_140f4fd10();
        *plVar16 = lStack_238;
        plVar16[1] = (longlong)param_2;
        *(undefined1 *)(plVar16 + 2) = 1;
      }
      *plVar16 = lStack_238 + 1;
      auStack_248._8_8_ = _UNK_143046aa8;
      auStack_248._0_8_ = _DAT_143046aa0;
      piStack_258 = _DAT_143046a90;
      plStack_250 = _UNK_143046a98;
      pppplStack_230 = (longlong ****)param_2;
      plVar17 = (longlong *)pdb_14008d710(0);
      plVar16 = plStack_108;
      if (plVar17 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140aa442b;
      }
      lStack_148 = *plVar17;
      lStack_140 = plVar17[1];
      *plVar17 = *plVar17 + 1;
      lStack_178 = lStack_a8;
      lStack_170 = lStack_a0;
      uStack_188 = uStack_b8;
      uStack_180 = uStack_b0;
      piStack_198 = piStack_c8;
      plStack_190 = (longlong *)pcStack_c0;
      auStack_1c8._8_8_ = plStack_250;
      auStack_1c8._0_8_ = piStack_258;
      auStack_1b8 = auStack_248;
      lStack_1a8 = lStack_238;
      pppplStack_1a0 = pppplStack_230;
      uStack_158 = uVar13;
      uStack_150 = uVar14;
      piStack_168 = piVar12;
      plStack_160 = plVar15;
      pdb_140c8eed0(auStack_1c8,plStack_108);
      pub_142e32760(&piStack_258,auStack_1c8,0x90);
      plVar15 = plStack_f8;
      goto LAB_140aa3ecb;
    }
    goto LAB_140aa3d2d;
  }
  auStack_1c8._0_8_ = pppplVar4;
  if (plStack_d8[3] != 0) {
    uVar19 = pdb_1400af0a0(plStack_268,auStack_1c8);
    lVar29 = *plStack_d8;
    bVar32 = (byte)(uVar19 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar27 = 0;
    while( true ) {
      uVar19 = uVar19 & plStack_d8[1];
      auVar1 = *(undefined1 (*) [16])(lVar29 + uVar19);
      auVar39[0] = -(auVar1[0] == auVar33[0]);
      auVar39[1] = -(auVar1[1] == auVar33[1]);
      auVar39[2] = -(auVar1[2] == auVar33[2]);
      auVar39[3] = -(auVar1[3] == auVar33[3]);
      auVar39[4] = -(auVar1[4] == auVar33[4]);
      auVar39[5] = -(auVar1[5] == auVar33[5]);
      auVar39[6] = -(auVar1[6] == auVar33[6]);
      auVar39[7] = -(auVar1[7] == auVar33[7]);
      auVar39[8] = -(auVar1[8] == auVar33[0]);
      auVar39[9] = -(auVar1[9] == auVar33[1]);
      auVar39[10] = -(auVar1[10] == auVar33[2]);
      auVar39[0xb] = -(auVar1[0xb] == auVar33[3]);
      auVar39[0xc] = -(auVar1[0xc] == auVar33[4]);
      auVar39[0xd] = -(auVar1[0xd] == auVar33[5]);
      auVar39[0xe] = -(auVar1[0xe] == auVar33[6]);
      auVar39[0xf] = -(auVar1[0xf] == auVar33[7]);
      uVar26 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar23 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar20 = 0;
        for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        lVar25 = (uVar20 + uVar19 & plStack_d8[1]) * -0x98;
        if (pppplVar4 == *(longlong *****)(lVar29 + -0x98 + lVar25)) {
          uVar28 = pdb_1400af0a0(plStack_f0);
          plVar15 = (longlong *)(lVar29 + lVar25 + -0x90);
          bVar32 = (byte)(uVar28 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          ppppplVar21 = (longlong *****)0x0;
          uVar19 = uVar28;
          goto LAB_140aa3610;
        }
        uVar26 = (ushort)(uVar23 - 1) & (ushort)uVar23;
        uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar26);
      }
      auVar35[0] = -(auVar1[0] == cVar42);
      auVar35[1] = -(auVar1[1] == cVar43);
      auVar35[2] = -(auVar1[2] == cVar44);
      auVar35[3] = -(auVar1[3] == cVar45);
      auVar35[4] = -(auVar1[4] == cVar46);
      auVar35[5] = -(auVar1[5] == cVar47);
      auVar35[6] = -(auVar1[6] == cVar48);
      auVar35[7] = -(auVar1[7] == cVar49);
      auVar35[8] = -(auVar1[8] == cVar50);
      auVar35[9] = -(auVar1[9] == cVar51);
      auVar35[10] = -(auVar1[10] == cVar52);
      auVar35[0xb] = -(auVar1[0xb] == cVar53);
      auVar35[0xc] = -(auVar1[0xc] == cVar54);
      auVar35[0xd] = -(auVar1[0xd] == cVar55);
      auVar35[0xe] = -(auVar1[0xe] == cVar56);
      auVar35[0xf] = -(auVar1[0xf] == cVar57);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar19 = uVar19 + lVar27 + 0x10;
      lVar27 = lVar27 + 0x10;
    }
  }
LAB_140aa3a01:
  ppppplVar21 = &pppplStack_298;
  pdb_140f60be0(&iStack_130);
  plVar15 = (longlong *)pdb_14008d710(0);
  if (plVar15 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
    goto LAB_140aa442b;
  }
  lStack_a8 = *plVar15;
  lStack_a0 = plVar15[1];
  *plVar15 = *plVar15 + 1;
  uVar14 = _UNK_14306c4f8;
  uVar13 = _DAT_14306c4f0;
  plVar15 = _UNK_14306c4e8;
  piVar12 = _DAT_14306c4e0;
  uStack_b8 = _DAT_14306c4f0;
  uStack_b0 = _UNK_14306c4f8;
  piStack_c8 = _DAT_14306c4e0;
  pcStack_c0 = (code *)_UNK_14306c4e8;
  plVar16 = (longlong *)pdb_140f3bda0();
  if ((char)plVar16[2] == '\x01') {
    lStack_238 = *plVar16;
    ppppplVar21 = (longlong *****)plVar16[1];
  }
  else {
    lStack_238 = pdb_140f4fd10();
    *plVar16 = lStack_238;
    plVar16[1] = (longlong)ppppplVar21;
    *(undefined1 *)(plVar16 + 2) = 1;
  }
  *plVar16 = lStack_238 + 1;
  auStack_248._8_8_ = _UNK_143046aa8;
  auStack_248._0_8_ = _DAT_143046aa0;
  piStack_258 = _DAT_143046a90;
  plStack_250 = _UNK_143046a98;
  pppplStack_230 = (longlong ****)ppppplVar21;
  plVar16 = (longlong *)pdb_14008d710(0);
  if (plVar16 != (longlong *)0x0) {
    lStack_148 = *plVar16;
    lStack_140 = plVar16[1];
    *plVar16 = *plVar16 + 1;
    lStack_178 = lStack_a8;
    lStack_170 = lStack_a0;
    uStack_188 = uStack_b8;
    uStack_180 = uStack_b0;
    piStack_198 = piStack_c8;
    plStack_190 = (longlong *)pcStack_c0;
    auStack_1c8._8_8_ = plStack_250;
    auStack_1c8._0_8_ = piStack_258;
    auStack_1b8 = auStack_248;
    lStack_1a8 = lStack_238;
    pppplStack_1a0 = pppplStack_230;
    uStack_158 = uVar13;
    uStack_150 = uVar14;
    piStack_168 = piVar12;
    plStack_160 = plVar15;
    piStack_c8 = &iStack_130;
    pcStack_c0 = pdb_140001020;
    pdb_140f60760(&piStack_258,&UNK_1430469a0,&piStack_c8);
    piStack_c8 = piStack_258;
    pcStack_c0 = (code *)plStack_250;
    uStack_b8 = auStack_248._0_8_;
    pdb_140aa1110(plStack_98,pppplVar3,pppplVar4,auStack_1c8,lVar24,plVar2,&piStack_c8);
    pdb_1404d6920();
    if (CONCAT44(uStack_12c,iStack_130) != 0) {
      pub_1406abac0(pbStack_128,CONCAT44(uStack_12c,iStack_130),1);
    }
    param_2 = (longlong *****)pppplStack_118;
    if (pppplStack_118 == pppplStack_270) goto LAB_140aa35b7;
    goto LAB_140aa38e0;
  }
  pdb_142dc7890(&UNK_143326860);
  goto LAB_140aa442b;
LAB_140aa3610:
  uVar19 = uVar19 & plStack_98[1];
  auVar1 = *(undefined1 (*) [16])(*plStack_98 + uVar19);
  auVar38[0] = -(auVar1[0] == auVar33[0]);
  auVar38[1] = -(auVar1[1] == auVar33[1]);
  auVar38[2] = -(auVar1[2] == auVar33[2]);
  auVar38[3] = -(auVar1[3] == auVar33[3]);
  auVar38[4] = -(auVar1[4] == auVar33[4]);
  auVar38[5] = -(auVar1[5] == auVar33[5]);
  auVar38[6] = -(auVar1[6] == auVar33[6]);
  auVar38[7] = -(auVar1[7] == auVar33[7]);
  auVar38[8] = -(auVar1[8] == auVar33[0]);
  auVar38[9] = -(auVar1[9] == auVar33[1]);
  auVar38[10] = -(auVar1[10] == auVar33[2]);
  auVar38[0xb] = -(auVar1[0xb] == auVar33[3]);
  auVar38[0xc] = -(auVar1[0xc] == auVar33[4]);
  auVar38[0xd] = -(auVar1[0xd] == auVar33[5]);
  auVar38[0xe] = -(auVar1[0xe] == auVar33[6]);
  auVar38[0xf] = -(auVar1[0xf] == auVar33[7]);
  uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar23 = (uint)uVar26;
  while (uVar26 != 0) {
    uVar20 = 0;
    for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar20 = uVar20 + 1;
    }
    if (*(longlong *****)(*plStack_98 + -0x98 + (uVar20 + uVar19 & plStack_98[1]) * -0x98) ==
        pppplVar4) goto LAB_140aa3d2d;
    uVar26 = (ushort)(uVar23 - 1) & (ushort)uVar23;
    uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar26);
  }
  auVar34[0] = -(auVar1[0] == cVar42);
  auVar34[1] = -(auVar1[1] == cVar43);
  auVar34[2] = -(auVar1[2] == cVar44);
  auVar34[3] = -(auVar1[3] == cVar45);
  auVar34[4] = -(auVar1[4] == cVar46);
  auVar34[5] = -(auVar1[5] == cVar47);
  auVar34[6] = -(auVar1[6] == cVar48);
  auVar34[7] = -(auVar1[7] == cVar49);
  auVar34[8] = -(auVar1[8] == cVar50);
  auVar34[9] = -(auVar1[9] == cVar51);
  auVar34[10] = -(auVar1[10] == cVar52);
  auVar34[0xb] = -(auVar1[0xb] == cVar53);
  auVar34[0xc] = -(auVar1[0xc] == cVar54);
  auVar34[0xd] = -(auVar1[0xd] == cVar55);
  auVar34[0xe] = -(auVar1[0xe] == cVar56);
  auVar34[0xf] = -(auVar1[0xf] == cVar57);
  uVar26 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
  if (uVar26 != 0) goto LAB_140aa367b;
  uVar19 = (longlong)ppppplVar21 + uVar19 + 0x10;
  ppppplVar21 = ppppplVar21 + 2;
  goto LAB_140aa3610;
LAB_140aa367b:
  plStack_d0 = plVar15;
  if (plStack_98[2] == 0) {
    ppppplVar21 = (longlong *****)0x1;
    pdb_142dadf10(plStack_98,1,plStack_f0,CONCAT71((uint7)(byte)(uVar26 >> 8),1));
  }
  plVar15 = (longlong *)pdb_14008d710(0);
  if (plVar15 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
  }
  else {
    lStack_a8 = *plVar15;
    lStack_a0 = plVar15[1];
    *plVar15 = *plVar15 + 1;
    uVar14 = _UNK_14306c4f8;
    uVar13 = _DAT_14306c4f0;
    plVar15 = _UNK_14306c4e8;
    piVar12 = _DAT_14306c4e0;
    uStack_b8 = _DAT_14306c4f0;
    uStack_b0 = _UNK_14306c4f8;
    piStack_c8 = _DAT_14306c4e0;
    pcStack_c0 = (code *)_UNK_14306c4e8;
    plVar16 = (longlong *)pdb_140f3bda0();
    if ((char)plVar16[2] == '\x01') {
      lStack_1a8 = *plVar16;
      ppppplVar21 = (longlong *****)plVar16[1];
    }
    else {
      lStack_1a8 = pdb_140f4fd10();
      *plVar16 = lStack_1a8;
      plVar16[1] = (longlong)ppppplVar21;
      *(undefined1 *)(plVar16 + 2) = 1;
    }
    *plVar16 = lStack_1a8 + 1;
    auStack_1b8._8_8_ = _UNK_143046aa8;
    auStack_1b8._0_8_ = _DAT_143046aa0;
    auStack_1c8._8_8_ = _UNK_143046a98;
    auStack_1c8._0_8_ = _DAT_143046a90;
    uStack_260 = uVar28 >> 0x39;
    pppplStack_1a0 = (longlong ****)ppppplVar21;
    plVar16 = (longlong *)pdb_14008d710(0);
    if (plVar16 != (longlong *)0x0) {
      lStack_1d8 = *plVar16;
      lStack_1d0 = plVar16[1];
      *plVar16 = *plVar16 + 1;
      lStack_208 = lStack_a8;
      lStack_200 = lStack_a0;
      uStack_218 = uStack_b8;
      uStack_210 = uStack_b0;
      piStack_228 = piStack_c8;
      plStack_220 = (longlong *)pcStack_c0;
      piStack_258 = (int *)auStack_1c8._0_8_;
      plStack_250 = (longlong *)auStack_1c8._8_8_;
      auStack_248 = auStack_1b8;
      lStack_238 = lStack_1a8;
      pppplStack_230 = pppplStack_1a0;
      uStack_1e8 = uVar13;
      uStack_1e0 = uVar14;
      piStack_1f8 = piVar12;
      plStack_1f0 = plVar15;
      pdb_140c8eed0(&piStack_258,plStack_d0);
      pub_142e32760(auStack_1c8,&piStack_258,0x90);
      pauVar22 = (undefined1 (*) [16])*plStack_98;
      uVar19 = plStack_98[1];
      uVar28 = uVar28 & uVar19;
      auVar33 = *(undefined1 (*) [16])(*pauVar22 + uVar28);
      uVar26 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
      uVar23 = (uint)uVar26;
      if (uVar26 == 0) {
        lVar29 = 0x10;
        do {
          uVar28 = uVar28 + lVar29 & uVar19;
          auVar33 = *(undefined1 (*) [16])(*pauVar22 + uVar28);
          lVar29 = lVar29 + 0x10;
          uVar23 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
        } while (uVar23 == 0);
      }
      uVar20 = 0;
      for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        uVar20 = uVar20 + 1;
      }
      uVar28 = uVar20 + uVar28 & uVar19;
      bVar32 = (*pauVar22)[uVar28];
      if (-1 < (char)bVar32) {
        auVar33 = *pauVar22;
        uVar23 = 0;
        for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar28 = (ulonglong)uVar23;
        bVar32 = (*pauVar22)[uVar28];
      }
      (*pauVar22)[uVar28] = (char)uStack_260;
      pauVar22[1][uVar28 - 0x10 & uVar19] = (char)uStack_260;
      *(longlong *****)((longlong)pauVar22 + uVar28 * -0x98 + -0x98) = pppplVar4;
      pub_142e32760((longlong)pauVar22 + uVar28 * -0x98 + -0x90,auStack_1c8,0x90);
      auVar33._0_8_ = CONCAT71(0,bVar32 & 1);
      auVar33._8_4_ = uVar10;
      auVar33._12_4_ = uVar11;
      plStack_98[2] = plStack_98[2] - auVar33._0_8_;
      plStack_98[3] = plStack_98[3] - auVar33._8_8_;
LAB_140aa3ed3:
      pauVar30 = (undefined1 (*) [16])plStack_d0[6];
      lVar29 = plStack_d0[9];
      auVar33 = *pauVar30;
      pauVar22 = pauVar30 + 1;
      uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
LAB_140aa4060:
      if (lVar29 != 0) {
        if ((short)uVar23 == 0) {
          do {
            auVar33 = *pauVar22;
            pauVar30 = pauVar30 + -0x68;
            pauVar22 = pauVar22 + 1;
            uVar23 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar23 == 0);
        }
        uVar20 = 0;
        for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        uVar23 = uVar23 - 1 & uVar23;
        lVar29 = lVar29 + -1;
        iVar8 = *(int *)((longlong)pauVar30 + (ulonglong)uVar20 * -0x68 + -0x68);
        iStack_dc = iVar8;
        if (plVar2[3] != 0) {
          uVar19 = pdb_1400aede0(plVar2 + 4,&iStack_dc);
          lVar27 = *plVar2;
          bVar32 = (byte)(uVar19 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar25 = 0;
          while( true ) {
            uVar19 = uVar19 & plVar2[1];
            auVar1 = *(undefined1 (*) [16])(lVar27 + uVar19);
            auVar40[0] = -(auVar1[0] == auVar33[0]);
            auVar40[1] = -(auVar1[1] == auVar33[1]);
            auVar40[2] = -(auVar1[2] == auVar33[2]);
            auVar40[3] = -(auVar1[3] == auVar33[3]);
            auVar40[4] = -(auVar1[4] == auVar33[4]);
            auVar40[5] = -(auVar1[5] == auVar33[5]);
            auVar40[6] = -(auVar1[6] == auVar33[6]);
            auVar40[7] = -(auVar1[7] == auVar33[7]);
            auVar40[8] = -(auVar1[8] == auVar33[0]);
            auVar40[9] = -(auVar1[9] == auVar33[1]);
            auVar40[10] = -(auVar1[10] == auVar33[2]);
            auVar40[0xb] = -(auVar1[0xb] == auVar33[3]);
            auVar40[0xc] = -(auVar1[0xc] == auVar33[4]);
            auVar40[0xd] = -(auVar1[0xd] == auVar33[5]);
            auVar40[0xe] = -(auVar1[0xe] == auVar33[6]);
            auVar40[0xf] = -(auVar1[0xf] == auVar33[7]);
            uVar26 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar40[0xf] >> 7) << 0xf;
            uVar20 = (uint)uVar26;
            while (uVar26 != 0) {
              uVar7 = 0;
              for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar28 = uVar7 + uVar19 & plVar2[1];
              if (iVar8 == *(int *)(lVar27 + -0x18 + uVar28 * -0x18)) {
                lVar27 = lVar27 + uVar28 * -0x18;
                uVar19 = (ulonglong)*(byte *)(lVar27 + -4);
                if (uVar19 == 0x11) goto LAB_140aa4060;
                uVar28 = *(ulonglong *)(lVar27 + -0xc);
                puVar18 = (ulonglong *)
                          pdb_140cd4bd0(uVar19 * 0x390 + lVar24 + 0x20,uVar28,uVar28 >> 0x20);
                if (puVar18 == (ulonglong *)0x0) {
                  pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
                  goto LAB_140aa442b;
                }
                uVar19 = *puVar18 & 0xffffffff;
                if (((*(ulonglong *)(lVar24 + 0x10) <= uVar19) ||
                    (lVar27 = *(longlong *)(lVar24 + 8), lVar27 == 0)) ||
                   (*(uint *)(lVar27 + 0x20 + uVar19 * 0x28) != ((uint)(*puVar18 >> 0x20) | 1))) {
                  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
                  goto LAB_140aa442b;
                }
                auVar9 = *(undefined1 (*) [12])((longlong)puVar18 + 0x44);
                auVar33 = *(undefined1 (*) [16])((longlong)puVar18 + 0x34);
                plVar15 = (longlong *)(lVar27 + uVar19 * 0x28);
                plVar16 = (longlong *)plVar15[3];
                LOCK();
                lVar27 = *plVar16;
                *plVar16 = *plVar16 + 1;
                UNLOCK();
                if (*plVar16 == 0 || SCARRY8(lVar27,1) != *plVar16 < 0) goto LAB_140aa442b;
                piStack_198 = (int *)plVar15[2];
                lStack_1a8 = *plVar15;
                pppplStack_1a0 = (longlong ****)plVar15[1];
                auStack_1b8._0_12_ = auVar9;
                auStack_1c8 = auVar33;
                plStack_190 = plVar16;
                pdb_141408060(&piStack_258,plStack_280,iVar8,auStack_1c8);
                if ((char)lStack_238 != '\x11') {
                  LOCK();
                  *plStack_220 = *plStack_220 + -1;
                  UNLOCK();
                  if (*plStack_220 == 0) {
                    pdb_140c7b7a0();
                  }
                }
                goto LAB_140aa4060;
              }
              uVar26 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar26);
            }
            auVar36[0] = -(auVar1[0] == cVar42);
            auVar36[1] = -(auVar1[1] == cVar43);
            auVar36[2] = -(auVar1[2] == cVar44);
            auVar36[3] = -(auVar1[3] == cVar45);
            auVar36[4] = -(auVar1[4] == cVar46);
            auVar36[5] = -(auVar1[5] == cVar47);
            auVar36[6] = -(auVar1[6] == cVar48);
            auVar36[7] = -(auVar1[7] == cVar49);
            auVar36[8] = -(auVar1[8] == cVar50);
            auVar36[9] = -(auVar1[9] == cVar51);
            auVar36[10] = -(auVar1[10] == cVar52);
            auVar36[0xb] = -(auVar1[0xb] == cVar53);
            auVar36[0xc] = -(auVar1[0xc] == cVar54);
            auVar36[0xd] = -(auVar1[0xd] == cVar55);
            auVar36[0xe] = -(auVar1[0xe] == cVar56);
            auVar36[0xf] = -(auVar1[0xf] == cVar57);
            if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
            uVar19 = uVar19 + lVar25 + 0x10;
            lVar25 = lVar25 + 0x10;
          }
        }
        goto LAB_140aa4060;
      }
      pauVar30 = (undefined1 (*) [16])plStack_d0[6];
      lVar29 = plStack_d0[9];
      auVar33 = *pauVar30;
      pauVar22 = pauVar30 + 1;
      uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
LAB_140aa4280:
      if (lVar29 != 0) {
        if ((short)uVar23 == 0) {
          do {
            auVar33 = *pauVar22;
            pauVar30 = pauVar30 + -0x68;
            pauVar22 = pauVar22 + 1;
            uVar23 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar23 == 0);
        }
        uVar20 = 0;
        for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        uVar23 = uVar23 - 1 & uVar23;
        lVar29 = lVar29 + -1;
        iVar8 = *(int *)((longlong)pauVar30 + (ulonglong)uVar20 * -0x68 + -0x68);
        iStack_130 = iVar8;
        if (plVar2[9] != 0) {
          uVar19 = pdb_1400aede0(plVar2 + 10,&iStack_130);
          lVar27 = plVar2[6];
          bVar32 = (byte)(uVar19 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar25 = 0;
          while( true ) {
            uVar19 = uVar19 & plVar2[7];
            auVar1 = *(undefined1 (*) [16])(lVar27 + uVar19);
            auVar41[0] = -(auVar1[0] == auVar33[0]);
            auVar41[1] = -(auVar1[1] == auVar33[1]);
            auVar41[2] = -(auVar1[2] == auVar33[2]);
            auVar41[3] = -(auVar1[3] == auVar33[3]);
            auVar41[4] = -(auVar1[4] == auVar33[4]);
            auVar41[5] = -(auVar1[5] == auVar33[5]);
            auVar41[6] = -(auVar1[6] == auVar33[6]);
            auVar41[7] = -(auVar1[7] == auVar33[7]);
            auVar41[8] = -(auVar1[8] == auVar33[0]);
            auVar41[9] = -(auVar1[9] == auVar33[1]);
            auVar41[10] = -(auVar1[10] == auVar33[2]);
            auVar41[0xb] = -(auVar1[0xb] == auVar33[3]);
            auVar41[0xc] = -(auVar1[0xc] == auVar33[4]);
            auVar41[0xd] = -(auVar1[0xd] == auVar33[5]);
            auVar41[0xe] = -(auVar1[0xe] == auVar33[6]);
            auVar41[0xf] = -(auVar1[0xf] == auVar33[7]);
            uVar26 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
            uVar20 = (uint)uVar26;
            while (uVar26 != 0) {
              uVar7 = 0;
              for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar28 = uVar7 + uVar19 & plVar2[7];
              if (iVar8 == *(int *)(lVar27 + -0x18 + uVar28 * -0x18)) {
                lVar27 = lVar27 + uVar28 * -0x18;
                uVar19 = (ulonglong)*(byte *)(lVar27 + -4);
                if (uVar19 == 0x11) goto LAB_140aa4280;
                uVar28 = *(ulonglong *)(lVar27 + -0xc);
                puVar18 = (ulonglong *)
                          pdb_140cd4bd0(uVar19 * 0x390 + lVar24 + 0x20,uVar28,uVar28 >> 0x20);
                if (puVar18 == (ulonglong *)0x0) {
                  pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
                  goto LAB_140aa442b;
                }
                uVar19 = *puVar18 & 0xffffffff;
                if (((*(ulonglong *)(lVar24 + 0x10) <= uVar19) ||
                    (lVar27 = *(longlong *)(lVar24 + 8), lVar27 == 0)) ||
                   (*(uint *)(lVar27 + 0x20 + uVar19 * 0x28) != ((uint)(*puVar18 >> 0x20) | 1))) {
                  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
                  goto LAB_140aa442b;
                }
                auVar9 = *(undefined1 (*) [12])((longlong)puVar18 + 0x44);
                auVar33 = *(undefined1 (*) [16])((longlong)puVar18 + 0x34);
                plVar15 = (longlong *)(lVar27 + uVar19 * 0x28);
                plVar16 = (longlong *)plVar15[3];
                LOCK();
                lVar27 = *plVar16;
                *plVar16 = *plVar16 + 1;
                UNLOCK();
                if (*plVar16 == 0 || SCARRY8(lVar27,1) != *plVar16 < 0) goto LAB_140aa442b;
                piStack_198 = (int *)plVar15[2];
                lStack_1a8 = *plVar15;
                pppplStack_1a0 = (longlong ****)plVar15[1];
                auStack_1b8._0_12_ = auVar9;
                auStack_1c8 = auVar33;
                plStack_190 = plVar16;
                pdb_141408060(&piStack_258,plStack_278,iVar8,auStack_1c8);
                if ((char)lStack_238 != '\x11') {
                  LOCK();
                  *plStack_220 = *plStack_220 + -1;
                  UNLOCK();
                  if (*plStack_220 == 0) {
                    pdb_140c7b7a0();
                  }
                }
                goto LAB_140aa4280;
              }
              uVar26 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar26);
            }
            auVar37[0] = -(auVar1[0] == cVar42);
            auVar37[1] = -(auVar1[1] == cVar43);
            auVar37[2] = -(auVar1[2] == cVar44);
            auVar37[3] = -(auVar1[3] == cVar45);
            auVar37[4] = -(auVar1[4] == cVar46);
            auVar37[5] = -(auVar1[5] == cVar47);
            auVar37[6] = -(auVar1[6] == cVar48);
            auVar37[7] = -(auVar1[7] == cVar49);
            auVar37[8] = -(auVar1[8] == cVar50);
            auVar37[9] = -(auVar1[9] == cVar51);
            auVar37[10] = -(auVar1[10] == cVar52);
            auVar37[0xb] = -(auVar1[0xb] == cVar53);
            auVar37[0xc] = -(auVar1[0xc] == cVar54);
            auVar37[0xd] = -(auVar1[0xd] == cVar55);
            auVar37[0xe] = -(auVar1[0xe] == cVar56);
            auVar37[0xf] = -(auVar1[0xf] == cVar57);
            if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
            uVar19 = uVar19 + lVar25 + 0x10;
            lVar25 = lVar25 + 0x10;
          }
        }
        goto LAB_140aa4280;
      }
LAB_140aa3d2d:
      param_2 = (longlong *****)pppplStack_118;
      if (pppplStack_118 == pppplStack_270) goto LAB_140aa35b7;
      goto LAB_140aa38e0;
    }
    pdb_142dc7890(&UNK_143326860);
  }
LAB_140aa442b:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

