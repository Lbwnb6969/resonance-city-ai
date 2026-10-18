// VA 0x1408d8b20, PDB extent 5666 bytes
// system_decorator::cull_oob_decorators::cull_oob_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::cull_oob_decorators::cull_oob_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 5666 */

void pdb_1408d8b20(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                  ulonglong *param_4,longlong *param_5,longlong *param_6,undefined8 *param_7,
                  undefined8 *param_8,undefined8 *param_9,undefined8 param_10,undefined8 *param_11,
                  undefined8 param_12,ulonglong *param_13,undefined8 *param_14,undefined8 *param_15)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  ulonglong *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 (**ppauVar13) [16];
  undefined1 (*pauVar14) [16];
  char cVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  byte *pbVar28;
  ulonglong uVar29;
  byte *pbVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  undefined1 (**ppauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined *puVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ushort uVar39;
  undefined *puVar40;
  undefined1 (*pauVar41) [16];
  undefined4 uVar42;
  undefined1 (*unaff_R13) [16];
  longlong lVar43;
  undefined1 (*pauVar44) [16];
  int *piVar45;
  longlong lVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  undefined1 unaff_XMM8_Bc;
  undefined1 unaff_XMM8_Bd;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  undefined1 unaff_XMM8_Bg;
  undefined1 unaff_XMM8_Bh;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  undefined1 unaff_XMM8_Bk;
  undefined1 unaff_XMM8_Bl;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  undefined1 unaff_XMM8_Bo;
  undefined1 unaff_XMM8_Bp;
  undefined8 uStack_2a8;
  ulonglong uStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined1 (**ppauStack_290) [16];
  ulonglong uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  byte *pbStack_270;
  undefined *puStack_268;
  byte *pbStack_260;
  undefined8 uStack_1e8;
  longlong *plStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (**ppauStack_1d0) [16];
  ulonglong uStack_1c8;
  undefined *puStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  undefined1 (**ppauStack_1a0) [16];
  ulonglong uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  undefined *puStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 *puStack_130;
  undefined1 (**ppauStack_128) [16];
  byte *pbStack_120;
  byte *pbStack_118;
  ulonglong uStack_110;
  undefined1 (*pauStack_108) [16];
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined *puStack_f0;
  undefined1 (**ppauStack_e8) [16];
  byte *pbStack_e0;
  undefined4 uStack_d4;
  longlong *plStack_d0;
  undefined4 *puStack_c8;
  ulonglong uStack_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  ulonglong *puStack_a8;
  undefined1 (*pauStack_a0) [16];
  byte *pbStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_130 = param_3;
  pauStack_b8 = param_1;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_158 = 0;
    goto LAB_1408d8d05;
  }
  pbVar30 = &UNK_14301a0c7;
  ppauVar33 = (undefined1 (**) [16])0x3a;
  pbVar28 = (byte *)0x3a;
  lVar18 = pdb_1408dd5e0(&UNK_14301a0c7);
  if (lVar18 == 1) {
    if (pbVar28 < (byte *)0x3b) {
      pbVar30 = &UNK_14301a0c7;
      uVar19 = pdb_1408dd5e0(&UNK_14301a0c7);
      if ((uVar19 & 1) != 0) {
        if ((byte *)0x3a < pbVar28 + 2) goto LAB_1408d9d18;
        ppauVar33 = (undefined1 (**) [16])(0x38 - (longlong)pbVar28);
        pbVar30 = pbVar28 + 0x14301a0c9;
      }
      goto LAB_1408d8be1;
    }
LAB_1408d9cf8:
    pdb_142dc8070(&UNK_14301a0c7,0x3a,0);
LAB_1408d9d18:
    pdb_142dc8070(&UNK_14301a0c7,0x3a);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1408d8be1:
  puVar35 = &UNK_143019d67;
  puVar40 = &UNK_143019d34;
  do {
    bVar47 = puVar35[-1];
    uVar17 = (uint)(char)bVar47;
    if ((char)bVar47 < '\0') {
      bVar2 = puVar35[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar35[-3];
        if ((char)bVar3 < -0x40) {
          pbVar28 = puVar35 + -4;
          puVar35 = puVar35 + -4;
          uVar17 = bVar3 & 0x3f | (*pbVar28 & 7) << 6;
        }
        else {
          puVar35 = puVar35 + -3;
          uVar17 = bVar3 & 0xf;
        }
        pbVar28 = (byte *)(ulonglong)(uVar17 << 6);
        uVar17 = bVar2 & 0x3f | uVar17 << 6;
      }
      else {
        puVar35 = puVar35 + -2;
        uVar17 = bVar2 & 0x1f;
      }
      uVar17 = (uint)(bVar47 & 0x3f) | uVar17 << 6;
      if (uVar17 != 0x5c) goto LAB_1408d8c64;
LAB_1408d8c7c:
      if ((undefined *)0x33 < puVar35 + -0x143019d33) goto LAB_1408d9cd5;
      lVar18 = 0x33 - (longlong)(puVar35 + -0x143019d33);
      puVar40 = puVar35 + 1;
      goto LAB_1408d8c9e;
    }
    puVar35 = puVar35 + -1;
    if (uVar17 == 0x5c) goto LAB_1408d8c7c;
LAB_1408d8c64:
    if (uVar17 == 0x2f) goto LAB_1408d8c7c;
  } while (puVar35 != &UNK_143019d34);
  lVar18 = 0x33;
LAB_1408d8c9e:
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') {
    pbVar28 = (byte *)0x0;
    plVar20 = (longlong *)pdb_142dde6e0(plVar20);
    if (plVar20 == (longlong *)0x0) {
LAB_1408d9cc9:
      pdb_142dc7890(&UNK_14330e598);
LAB_1408d9cd5:
      pdb_142dc8070(&UNK_143019d34,0x33);
      goto LAB_1408d9cf8;
    }
  }
  if (*plVar20 != 0) goto LAB_1408d9c56;
  *plVar20 = -1;
  pbStack_90 = (byte *)plVar20;
  uStack_150 = pdb_140e94f10(plVar20 + 1,pbVar30,ppauVar33,puVar40,lVar18,1,0);
  *(longlong *)pbStack_90 = *(longlong *)pbStack_90 + 1;
  lStack_158 = 1;
LAB_1408d8d05:
  pbVar28 = (byte *)*param_4;
  ppauVar33 = &pauStack_298;
  pbStack_90 = pbVar28;
  pdb_140b55220(ppauVar33);
  puVar40 = puStack_278;
  uStack_f8 = uStack_288;
  puStack_f0 = puStack_280;
  pauStack_108 = pauStack_298;
  uStack_100 = ppauStack_290;
  unaff_R13 = (undefined1 (*) [16])pdb_140f3bda0();
  if (unaff_R13[1][0] != '\x01') goto LAB_1408d9c63;
  puStack_278 = *(undefined **)*unaff_R13;
  pbVar28 = *(byte **)(*unaff_R13 + 8);
LAB_1408d8d5c:
  *(undefined **)*unaff_R13 = puStack_278 + 1;
  puVar35 = _UNK_143019cf8;
  uVar25 = _DAT_143019cf0;
  ppauVar13 = _UNK_143019ce8;
  pauVar31 = _DAT_143019ce0;
  uStack_288 = _DAT_143019cf0;
  puStack_280 = _UNK_143019cf8;
  pauStack_298 = _DAT_143019ce0;
  ppauStack_290 = _UNK_143019ce8;
  uStack_1c8 = uStack_f8;
  puStack_1c0 = puStack_f0;
  pauStack_1d8 = pauStack_108;
  ppauStack_1d0 = uStack_100;
  pauStack_1a8 = pauStack_b8;
  uStack_178 = &pauStack_1a8;
  pbStack_270 = pbVar28;
  ppauStack_1a0 = ppauVar33;
  puStack_a8 = param_4;
  pauStack_a0 = param_2;
  pdb_1414adeb0(&pauStack_1d8,puVar40);
  pauStack_1a8 = pauStack_298;
  ppauStack_1a0 = ppauStack_290;
  uStack_198 = uStack_288;
  puStack_190 = puStack_280;
  puStack_188 = puStack_278;
  pbStack_180 = pbStack_270;
  puVar4 = (ulonglong *)*param_7;
  lVar18 = param_7[1];
  uVar19 = *puVar4;
  uVar29 = 0;
  uVar23 = uVar19 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar23 = uVar29;
  }
  uVar38 = uVar19 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar38 = uVar29;
  }
  lVar26 = uVar23 * 0x30 + *(longlong *)(lVar18 + 8);
  uVar19 = *(ulonglong *)(lVar18 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar23) {
    lVar26 = 8;
    uVar19 = uVar29;
  }
  lVar21 = uVar38 * 0x30 + *(longlong *)(lVar18 + 0x28);
  uVar23 = *(ulonglong *)(lVar18 + 0x30) - uVar38;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar38) {
    lVar21 = 8;
    uVar23 = uVar29;
  }
  *puVar4 = (*(longlong *)(lVar18 + 0x40) - uVar23) - uVar19;
  lVar18 = uVar19 * 0x30 + lVar26;
  lVar46 = uVar23 * 0x30 + lVar21;
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                 CONCAT13(unaff_XMM8_Bd,
                          CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
LAB_1408d8f3a:
  do {
    if ((lVar26 == 0) || (lVar26 == lVar18)) {
      if ((lVar21 == 0) || (lVar21 == lVar46)) break;
      lVar26 = 0;
      lVar37 = lVar21 + 0x30;
      lVar43 = lVar21;
    }
    else {
      lVar37 = lVar21;
      lVar43 = lVar26;
      lVar26 = lVar26 + 0x30;
    }
    lVar21 = lVar37;
    *puVar4 = *puVar4 + 1;
    plVar20 = *(longlong **)*pauStack_b8;
    if (plVar20[3] != 0) {
      uStack_81 = 1;
      uVar19 = pdb_1400af0a0(plVar20 + 4,(longlong *)(lVar43 + 0x18));
      bVar47 = (byte)(uVar19 >> 0x39);
      auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
      auVar48 = pshuflw(auVar48,auVar48,0);
      lVar37 = 0;
      while( true ) {
        uVar19 = uVar19 & plVar20[1];
        auVar1 = *(undefined1 (*) [16])(*plVar20 + uVar19);
        auVar53[0] = -(auVar1[0] == auVar48[0]);
        auVar53[1] = -(auVar1[1] == auVar48[1]);
        auVar53[2] = -(auVar1[2] == auVar48[2]);
        auVar53[3] = -(auVar1[3] == auVar48[3]);
        auVar53[4] = -(auVar1[4] == auVar48[4]);
        auVar53[5] = -(auVar1[5] == auVar48[5]);
        auVar53[6] = -(auVar1[6] == auVar48[6]);
        auVar53[7] = -(auVar1[7] == auVar48[7]);
        auVar53[8] = -(auVar1[8] == auVar48[0]);
        auVar53[9] = -(auVar1[9] == auVar48[1]);
        auVar53[10] = -(auVar1[10] == auVar48[2]);
        auVar53[0xb] = -(auVar1[0xb] == auVar48[3]);
        auVar53[0xc] = -(auVar1[0xc] == auVar48[4]);
        auVar53[0xd] = -(auVar1[0xd] == auVar48[5]);
        auVar53[0xe] = -(auVar1[0xe] == auVar48[6]);
        auVar53[0xf] = -(auVar1[0xf] == auVar48[7]);
        uVar39 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar39;
        while (uVar39 != 0) {
          uVar32 = 0;
          for (uVar36 = uVar17; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
            uVar32 = uVar32 + 1;
          }
          if (*(longlong *)(lVar43 + 0x18) ==
              *(longlong *)(*plVar20 + -0x2b0 + (uVar32 + uVar19 & plVar20[1]) * -0x2b0)) {
            uStack_81 = 1;
            pdb_1403b05d0(&pauStack_1a8);
            goto LAB_1408d8f3a;
          }
          uVar39 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar39);
        }
        auVar49[0] = -(auVar1[0] == (char)iVar9);
        auVar49[1] = -(auVar1[1] == (char)((uint)iVar9 >> 8));
        auVar49[2] = -(auVar1[2] == (char)((uint)iVar9 >> 0x10));
        auVar49[3] = -(auVar1[3] == (char)((uint)iVar9 >> 0x18));
        auVar49[4] = -(auVar1[4] == (char)iVar10);
        auVar49[5] = -(auVar1[5] == (char)((uint)iVar10 >> 8));
        auVar49[6] = -(auVar1[6] == (char)((uint)iVar10 >> 0x10));
        auVar49[7] = -(auVar1[7] == (char)((uint)iVar10 >> 0x18));
        auVar49[8] = -(auVar1[8] == (char)iVar11);
        auVar49[9] = -(auVar1[9] == (char)((uint)iVar11 >> 8));
        auVar49[10] = -(auVar1[10] == (char)((uint)iVar11 >> 0x10));
        auVar49[0xb] = -(auVar1[0xb] == (char)((uint)iVar11 >> 0x18));
        auVar49[0xc] = -(auVar1[0xc] == (char)iVar12);
        auVar49[0xd] = -(auVar1[0xd] == (char)((uint)iVar12 >> 8));
        auVar49[0xe] = -(auVar1[0xe] == (char)((uint)iVar12 >> 0x10));
        auVar49[0xf] = -(auVar1[0xf] == (char)((uint)iVar12 >> 0x18));
        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) || (SUB161(auVar49 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
        uVar19 = uVar19 + lVar37 + 0x10;
        lVar37 = lVar37 + 0x10;
      }
    }
  } while( true );
  puVar4 = (ulonglong *)*param_8;
  lVar18 = param_8[1];
  uVar19 = *puVar4;
  uVar29 = 0;
  uVar23 = uVar19 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar23 = uVar29;
  }
  uVar38 = uVar19 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar38 = uVar29;
  }
  pauVar27 = (undefined1 (*) [16])(uVar23 * 0x10 + *(longlong *)(lVar18 + 8));
  uVar19 = *(ulonglong *)(lVar18 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar23) {
    pauVar27 = (undefined1 (*) [16])0x8;
    uVar19 = uVar29;
  }
  pauVar22 = (undefined1 (*) [16])(uVar38 * 0x10 + *(longlong *)(lVar18 + 0x28));
  uVar23 = *(ulonglong *)(lVar18 + 0x30) - uVar38;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar38) {
    pauVar22 = (undefined1 (*) [16])0x8;
    uVar23 = uVar29;
  }
  *puVar4 = (*(longlong *)(lVar18 + 0x40) - uVar23) - uVar19;
  pauVar41 = pauVar27 + uVar19;
  param_2 = pauVar22 + uVar23;
LAB_1408d90fa:
  do {
    if ((pauVar27 == (undefined1 (*) [16])0x0) || (pauVar27 == pauVar41)) {
      if ((pauVar22 == (undefined1 (*) [16])0x0) || (pauVar22 == param_2)) break;
      pauVar14 = pauVar22 + 1;
      pauVar34 = (undefined1 (*) [16])0x0;
      pauVar44 = pauVar22;
    }
    else {
      pauVar14 = pauVar22;
      pauVar34 = pauVar27 + 1;
      pauVar44 = pauVar27;
    }
    pauVar27 = pauVar34;
    pauVar22 = pauVar14;
    *puVar4 = *puVar4 + 1;
    plVar20 = *(longlong **)*pauStack_b8;
    if (plVar20[3] != 0) {
      uStack_81 = 1;
      uVar19 = pdb_1400af0a0(plVar20 + 4,*pauVar44 + 8);
      bVar47 = (byte)(uVar19 >> 0x39);
      auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
      auVar48 = pshuflw(auVar48,auVar48,0);
      lVar18 = 0;
      while( true ) {
        uVar19 = uVar19 & plVar20[1];
        auVar1 = *(undefined1 (*) [16])(*plVar20 + uVar19);
        auVar54[0] = -(auVar1[0] == auVar48[0]);
        auVar54[1] = -(auVar1[1] == auVar48[1]);
        auVar54[2] = -(auVar1[2] == auVar48[2]);
        auVar54[3] = -(auVar1[3] == auVar48[3]);
        auVar54[4] = -(auVar1[4] == auVar48[4]);
        auVar54[5] = -(auVar1[5] == auVar48[5]);
        auVar54[6] = -(auVar1[6] == auVar48[6]);
        auVar54[7] = -(auVar1[7] == auVar48[7]);
        auVar54[8] = -(auVar1[8] == auVar48[0]);
        auVar54[9] = -(auVar1[9] == auVar48[1]);
        auVar54[10] = -(auVar1[10] == auVar48[2]);
        auVar54[0xb] = -(auVar1[0xb] == auVar48[3]);
        auVar54[0xc] = -(auVar1[0xc] == auVar48[4]);
        auVar54[0xd] = -(auVar1[0xd] == auVar48[5]);
        auVar54[0xe] = -(auVar1[0xe] == auVar48[6]);
        auVar54[0xf] = -(auVar1[0xf] == auVar48[7]);
        uVar39 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar39;
        while (uVar39 != 0) {
          uVar32 = 0;
          for (uVar36 = uVar17; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
            uVar32 = uVar32 + 1;
          }
          if (*(longlong *)(*pauVar44 + 8) ==
              *(longlong *)(*plVar20 + -0x2b0 + (uVar32 + uVar19 & plVar20[1]) * -0x2b0)) {
            uStack_81 = 1;
            pdb_1403b05d0(&pauStack_1a8);
            goto LAB_1408d90fa;
          }
          uVar39 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar39);
        }
        auVar50[0] = -(auVar1[0] == -1);
        auVar50[1] = -(auVar1[1] == -1);
        auVar50[2] = -(auVar1[2] == -1);
        auVar50[3] = -(auVar1[3] == -1);
        auVar50[4] = -(auVar1[4] == -1);
        auVar50[5] = -(auVar1[5] == -1);
        auVar50[6] = -(auVar1[6] == -1);
        auVar50[7] = -(auVar1[7] == -1);
        auVar50[8] = -(auVar1[8] == -1);
        auVar50[9] = -(auVar1[9] == -1);
        auVar50[10] = -(auVar1[10] == -1);
        auVar50[0xb] = -(auVar1[0xb] == -1);
        auVar50[0xc] = -(auVar1[0xc] == -1);
        auVar50[0xd] = -(auVar1[0xd] == -1);
        auVar50[0xe] = -(auVar1[0xe] == -1);
        auVar50[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x1f,0) & 1) != 0) || (SUB161(auVar50 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') break;
        uVar19 = uVar19 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
  } while( true );
  puVar4 = (ulonglong *)*param_9;
  lVar18 = param_9[1];
  uVar19 = *puVar4;
  uVar29 = 0;
  uVar23 = uVar19 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar23 = uVar29;
  }
  uVar38 = uVar19 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar38 = uVar29;
  }
  pauVar27 = (undefined1 (*) [16])(uVar23 * 0x40 + *(longlong *)(lVar18 + 8));
  uVar19 = *(ulonglong *)(lVar18 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar23) {
    pauVar27 = (undefined1 (*) [16])0x8;
    uVar19 = uVar29;
  }
  pauVar22 = (undefined1 (*) [16])(uVar38 * 0x40 + *(longlong *)(lVar18 + 0x28));
  uVar23 = *(ulonglong *)(lVar18 + 0x30) - uVar38;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar38) {
    pauVar22 = (undefined1 (*) [16])0x8;
    uVar23 = uVar29;
  }
  uVar29 = (*(longlong *)(lVar18 + 0x40) - uVar23) - uVar19;
  *puVar4 = uVar29;
  pauVar41 = pauVar27 + uVar19 * 4;
  pauStack_b0 = pauVar22 + uVar23 * 4;
  unaff_XMM8_Ba = 0xff;
  unaff_XMM8_Bb = 0xff;
  unaff_XMM8_Bc = 0xff;
  unaff_XMM8_Bd = 0xff;
  unaff_XMM8_Be = 0xff;
  unaff_XMM8_Bf = 0xff;
  unaff_XMM8_Bg = 0xff;
  unaff_XMM8_Bh = 0xff;
  unaff_XMM8_Bi = 0xff;
  unaff_XMM8_Bj = 0xff;
  unaff_XMM8_Bk = 0xff;
  unaff_XMM8_Bl = 0xff;
  unaff_XMM8_Bm = 0xff;
  unaff_XMM8_Bn = 0xff;
  unaff_XMM8_Bo = 0xff;
  unaff_XMM8_Bp = 0xff;
LAB_1408d92d6:
  do {
    if ((pauVar27 == (undefined1 (*) [16])0x0) || (pauVar27 == pauVar41)) {
      if ((pauVar22 == (undefined1 (*) [16])0x0) || (pauVar22 == pauStack_b0)) break;
      pauVar27 = (undefined1 (*) [16])0x0;
      pauVar14 = pauVar22 + 4;
      pauVar34 = pauVar22;
    }
    else {
      pauVar14 = pauVar22;
      pauVar34 = pauVar27;
      pauVar27 = pauVar27 + 4;
    }
    pauVar22 = pauVar14;
    *puVar4 = *puVar4 + 1;
    plVar20 = *(longlong **)*pauStack_b8;
    param_2 = pauVar27;
    if (plVar20[3] != 0) {
      uStack_81 = 1;
      uVar19 = pdb_1400af0a0(plVar20 + 4,pauVar34 + 2);
      bVar47 = (byte)(uVar19 >> 0x39);
      auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
      auVar48 = pshuflw(auVar48,auVar48,0);
      uVar29 = *(ulonglong *)pauVar34[2];
      lVar18 = 0;
      while( true ) {
        uVar19 = uVar19 & plVar20[1];
        auVar1 = *(undefined1 (*) [16])(*plVar20 + uVar19);
        auVar55[0] = -(auVar1[0] == auVar48[0]);
        auVar55[1] = -(auVar1[1] == auVar48[1]);
        auVar55[2] = -(auVar1[2] == auVar48[2]);
        auVar55[3] = -(auVar1[3] == auVar48[3]);
        auVar55[4] = -(auVar1[4] == auVar48[4]);
        auVar55[5] = -(auVar1[5] == auVar48[5]);
        auVar55[6] = -(auVar1[6] == auVar48[6]);
        auVar55[7] = -(auVar1[7] == auVar48[7]);
        auVar55[8] = -(auVar1[8] == auVar48[0]);
        auVar55[9] = -(auVar1[9] == auVar48[1]);
        auVar55[10] = -(auVar1[10] == auVar48[2]);
        auVar55[0xb] = -(auVar1[0xb] == auVar48[3]);
        auVar55[0xc] = -(auVar1[0xc] == auVar48[4]);
        auVar55[0xd] = -(auVar1[0xd] == auVar48[5]);
        auVar55[0xe] = -(auVar1[0xe] == auVar48[6]);
        auVar55[0xf] = -(auVar1[0xf] == auVar48[7]);
        uVar39 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar39;
        while (uVar39 != 0) {
          uVar32 = 0;
          for (uVar36 = uVar17; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
            uVar32 = uVar32 + 1;
          }
          if (uVar29 == *(ulonglong *)(*plVar20 + -0x2b0 + (uVar32 + uVar19 & plVar20[1]) * -0x2b0))
          {
            if (*(int *)(*pauVar34 + 8) != 0) {
              uStack_81 = 1;
              pdb_1403b05d0(&pauStack_1a8);
            }
            goto LAB_1408d92d6;
          }
          uVar39 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar39);
        }
        auVar51[0] = -(auVar1[0] == -1);
        auVar51[1] = -(auVar1[1] == -1);
        auVar51[2] = -(auVar1[2] == -1);
        auVar51[3] = -(auVar1[3] == -1);
        auVar51[4] = -(auVar1[4] == -1);
        auVar51[5] = -(auVar1[5] == -1);
        auVar51[6] = -(auVar1[6] == -1);
        auVar51[7] = -(auVar1[7] == -1);
        auVar51[8] = -(auVar1[8] == -1);
        auVar51[9] = -(auVar1[9] == -1);
        auVar51[10] = -(auVar1[10] == -1);
        auVar51[0xb] = -(auVar1[0xb] == -1);
        auVar51[0xc] = -(auVar1[0xc] == -1);
        auVar51[0xd] = -(auVar1[0xd] == -1);
        auVar51[0xe] = -(auVar1[0xe] == -1);
        auVar51[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x1f,0) & 1) != 0) || (SUB161(auVar51 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
        uVar19 = uVar19 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
  } while( true );
  uStack_81 = 1;
  uStack_2a8 = pdb_140c47770(param_12);
  uStack_81 = 1;
  uStack_2a0 = uVar29;
  plVar20 = (longlong *)pdb_140f3bda0();
  if ((char)plVar20[2] == '\x01') {
    lStack_1b8 = *plVar20;
    uVar29 = plVar20[1];
  }
  else {
    uStack_81 = 1;
    lStack_1b8 = pdb_140f4fd10();
    *plVar20 = lStack_1b8;
    plVar20[1] = uVar29;
    *(undefined1 *)(plVar20 + 2) = 1;
  }
  *plVar20 = lStack_1b8 + 1;
  uStack_1c8 = uVar25;
  puStack_1c0 = puVar35;
  pauStack_1d8 = pauVar31;
  ppauStack_1d0 = ppauVar13;
  ppauStack_128 = ppauStack_1a0;
  if (ppauStack_1a0 == (undefined1 (**) [16])0x0) {
    uStack_110 = 0;
  }
  else {
    uVar19 = (longlong)ppauStack_1a0 * 8 + 0x17U & 0xfffffffffffffff0;
    pbStack_120 = (byte *)((longlong)ppauStack_1a0 + uVar19 + 0x11);
    pbStack_118 = (byte *)((longlong)pauStack_1a8 - uVar19);
    uStack_110 = 0x10;
  }
  uStack_148 = *puStack_130;
  plStack_d0 = (longlong *)*param_6;
  uStack_140 = *(undefined8 *)*pauStack_a0;
  uStack_d4 = *(undefined4 *)((longlong)puStack_a8 + 0x1c);
  puStack_138 = (undefined4 *)puStack_a8[2];
  ppauStack_e8 = (undefined1 (**) [16])puStack_190;
  uStack_1b0 = uVar29;
  if (puStack_190 != (undefined *)0x0) {
    auVar48 = *pauStack_1a8;
    uStack_c0 = *param_13;
    pbStack_e0 = (byte *)*param_14;
    uStack_1e8 = *param_15;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
    pauStack_a0 = pauStack_1a8;
    pauStack_b0 = pauStack_1a8 + 1;
    plStack_1e0 = plStack_d0 + 4;
    do {
      if ((short)uVar17 == 0) {
        do {
          auVar48 = *pauStack_b0;
          pauStack_a0 = pauStack_a0 + -8;
          pauStack_b0 = pauStack_b0 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      iVar9 = 0;
      for (uVar32 = uVar17; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      puStack_c8 = *(undefined4 **)((longlong)pauStack_a0 + (-8 - (ulonglong)(uint)(iVar9 << 3)));
      puStack_a8 = (ulonglong *)pdb_140c3e440(uStack_148);
      if (puStack_a8 != (ulonglong *)0x0) {
        pauVar27 = (undefined1 (*) [16])puStack_a8[6];
        uVar19 = puStack_a8[9];
        auVar48 = *pauVar27;
        pauVar31 = pauVar27 + 1;
        uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
        pbStack_98 = (byte *)((ulonglong)pbStack_98 & 0xffffffff00000000);
LAB_1408d95c0:
        if (uVar19 != 0) {
          if ((short)uVar32 == 0) {
            do {
              auVar48 = *pauVar31;
              pauVar27 = pauVar27 + -0x68;
              pauVar31 = pauVar31 + 1;
              uVar32 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar32 == 0);
          }
          uVar36 = 0;
          for (uVar7 = uVar32; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar36 = uVar36 + 1;
          }
          uVar7 = *(uint *)((longlong)pauVar27 + (ulonglong)uVar36 * -0x68 + -0x68);
          param_2 = (undefined1 (*) [16])(ulonglong)uVar7;
          pauVar22 = param_2;
          cVar15 = pdb_140c42080(pbStack_90);
          uVar19 = uVar19 - 1;
          uVar32 = uVar32 - 1 & uVar32;
          if ((cVar15 != '\0') &&
             (piVar45 = (int *)((longlong)pauVar27 + (ulonglong)uVar36 * -0x68 + -0x60),
             *piVar45 != 6)) {
            uVar24 = pdb_140947f90(puStack_c8);
            ppauVar33 = (undefined1 (**) [16])(ulonglong)uVar7;
            pdb_1408da940(&pauStack_298,ppauVar33,piVar45,uVar24,pauVar22,&uStack_2a8,
                          *(undefined8 *)*pauStack_b8,param_10,uStack_c0,pbStack_e0,uStack_1e8);
            if ((char)pauStack_298 == '\v') {
              pauStack_298 = (undefined1 (*) [16])CONCAT44(pauStack_298._4_4_,uVar7);
              if (plStack_d0[3] != 0) {
                uVar25 = pdb_1400aede0(plStack_1e0,&pauStack_298);
                bVar47 = (byte)(uVar25 >> 0x39);
                auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
                auVar48 = pshuflw(auVar48,auVar48,0);
                lVar18 = 0;
                while( true ) {
                  uVar25 = uVar25 & plStack_d0[1];
                  auVar1 = *(undefined1 (*) [16])(*plStack_d0 + uVar25);
                  auVar56[0] = -(auVar1[0] == auVar48[0]);
                  auVar56[1] = -(auVar1[1] == auVar48[1]);
                  auVar56[2] = -(auVar1[2] == auVar48[2]);
                  auVar56[3] = -(auVar1[3] == auVar48[3]);
                  auVar56[4] = -(auVar1[4] == auVar48[4]);
                  auVar56[5] = -(auVar1[5] == auVar48[5]);
                  auVar56[6] = -(auVar1[6] == auVar48[6]);
                  auVar56[7] = -(auVar1[7] == auVar48[7]);
                  auVar56[8] = -(auVar1[8] == auVar48[0]);
                  auVar56[9] = -(auVar1[9] == auVar48[1]);
                  auVar56[10] = -(auVar1[10] == auVar48[2]);
                  auVar56[0xb] = -(auVar1[0xb] == auVar48[3]);
                  auVar56[0xc] = -(auVar1[0xc] == auVar48[4]);
                  auVar56[0xd] = -(auVar1[0xd] == auVar48[5]);
                  auVar56[0xe] = -(auVar1[0xe] == auVar48[6]);
                  auVar56[0xf] = -(auVar1[0xf] == auVar48[7]);
                  uVar39 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar56[0xf] >> 7) << 0xf;
                  uVar36 = (uint)uVar39;
                  while (uVar39 != 0) {
                    uVar6 = 0;
                    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                      uVar6 = uVar6 + 1;
                    }
                    lVar26 = *plStack_d0 + (uVar6 + uVar25 & plStack_d0[1]) * -0x10;
                    if (uVar7 == *(uint *)(lVar26 + -0x10)) {
                      lVar18 = *(longlong *)(lVar26 + -8);
                      if (*(int *)(lVar18 + 0x60) != 0) goto LAB_1408d95c0;
                      uStack_100 = (undefined1 (**) [16])
                                   CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar18 + 0x6c));
                      pauStack_108 = *(undefined1 (**) [16])(lVar18 + 100);
                      uStack_f8 = *(ulonglong *)(lVar18 + 0x80);
                      puStack_f0 = *(undefined **)(lVar18 + 0x88);
                      pdb_140c614f0(&pauStack_298,&pauStack_108,*(longlong *)(lVar18 + 0x70) + 0x10)
                      ;
                      pbVar28 = pbStack_260;
                      puVar40 = puStack_268;
                      uStack_168 = uStack_288;
                      puStack_160 = puStack_280;
                      uStack_178._0_4_ = SUB84(pauStack_298,0);
                      uStack_178._4_4_ = (undefined4)((ulonglong)pauStack_298 >> 0x20);
                      uStack_170 = SUB84(ppauStack_290,0);
                      uStack_16c = (undefined4)((ulonglong)ppauStack_290 >> 0x20);
                      if (1 < (uint)puStack_278) {
                        pub_1406abac0(pbStack_270,0x2c,4);
                      }
                      pauStack_298 = (undefined1 (*) [16])
                                     CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
                      ppauStack_290 = (undefined1 (**) [16])CONCAT44(uStack_16c,uStack_170);
                      uStack_288 = uStack_168;
                      puStack_280 = puStack_160;
                      puStack_278 = puVar40;
                      pbStack_270 = pbVar28;
                      ppauVar33 = &pauStack_298;
                      lVar18 = pdb_1414ea1c0(*param_11,ppauVar33,uVar7,puStack_c8,1);
                      if (lVar18 != 0) goto LAB_1408d9828;
                      goto LAB_1408d95c0;
                    }
                    uVar39 = (ushort)(uVar36 - 1) & (ushort)uVar36;
                    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar39);
                  }
                  auVar52[0] = -(auVar1[0] == -1);
                  auVar52[1] = -(auVar1[1] == -1);
                  auVar52[2] = -(auVar1[2] == -1);
                  auVar52[3] = -(auVar1[3] == -1);
                  auVar52[4] = -(auVar1[4] == -1);
                  auVar52[5] = -(auVar1[5] == -1);
                  auVar52[6] = -(auVar1[6] == -1);
                  auVar52[7] = -(auVar1[7] == -1);
                  auVar52[8] = -(auVar1[8] == -1);
                  auVar52[9] = -(auVar1[9] == -1);
                  auVar52[10] = -(auVar1[10] == -1);
                  auVar52[0xb] = -(auVar1[0xb] == -1);
                  auVar52[0xc] = -(auVar1[0xc] == -1);
                  auVar52[0xd] = -(auVar1[0xd] == -1);
                  auVar52[0xe] = -(auVar1[0xe] == -1);
                  auVar52[0xf] = -(auVar1[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar52 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar52 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar52 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar52 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar52 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x6f,0) & 1) != 0) || (SUB161(auVar52 >> 0x77,0) & 1) != 0
                      ) || auVar52[0xf] < '\0') break;
                  uVar25 = uVar25 + lVar18 + 0x10;
                  lVar18 = lVar18 + 0x10;
                }
              }
            }
            else {
LAB_1408d9828:
              uVar42 = (undefined4)CONCAT71((int7)((ulonglong)piVar45 >> 8),1);
              if (((ulonglong)pbStack_98 & 1) == 0) {
                cVar15 = pdb_140ae3070(uStack_140);
                if (cVar15 == '\0') {
                  uVar42 = 0;
                }
                else {
                  *puStack_138 = uStack_d4;
                  ppauVar33 = (undefined1 (**) [16])0x0;
                  pdb_1414ce2b0(pbStack_90,0,puStack_c8,puStack_a8,param_11,&UNK_143019dd8,10);
                }
              }
              pauStack_298 = (undefined1 (*) [16])pdb_140947f90(puStack_c8);
              uStack_288 = CONCAT44(uStack_288._4_4_,uVar7);
              ppauStack_290 = ppauVar33;
              pdb_140c45db0(&pauStack_108,uStack_c0,uVar7,&UNK_143019de8);
              uStack_170 = (undefined4)uStack_100;
              uStack_178._0_4_ = SUB84(pauStack_108,0);
              uStack_178._4_4_ = (undefined4)((ulonglong)pauStack_108 >> 0x20);
              pdb_1414b5130(&pauStack_108,&pauStack_1d8,&pauStack_298,&uStack_178);
              pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,uVar42);
            }
          }
          goto LAB_1408d95c0;
        }
      }
      uVar17 = uVar17 - 1 & uVar17;
      ppauStack_e8 = (undefined1 (**) [16])((longlong)ppauStack_e8 + -1);
    } while (ppauStack_e8 != (undefined1 (**) [16])0x0);
  }
  pbVar28 = pbStack_120;
  if ((ppauStack_128 != (undefined1 (**) [16])0x0) && (pbStack_120 != (byte *)0x0)) {
    pub_1406abac0(pbStack_118,(ulonglong)pbStack_120,uStack_110);
  }
  auVar48 = *pauStack_1d8;
  if (ppauStack_1d0 == (undefined1 (**) [16])0x0) {
    uStack_c0 = 0;
  }
  else {
    uVar19 = (longlong)ppauStack_1d0 * 0x28 + 0x37U & 0xfffffffffffffff0;
    pbStack_98 = (byte *)((longlong)ppauStack_1d0 + uVar19 + 0x11);
    pbStack_e0 = (byte *)((longlong)pauStack_1d8 - uVar19);
    uStack_c0 = 0x10;
  }
  unaff_R13 = pauStack_1d8 + 1;
  uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
  pauStack_b8 = (undefined1 (*) [16])
                CONCAT44(pauStack_b8._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  pauStack_b0 = (undefined1 (*) [16])param_6[2];
  pauStack_a0 = (undefined1 (*) [16])
                CONCAT44(pauStack_a0._4_4_,*(undefined4 *)((longlong)puStack_130 + 0x1c));
  puStack_c8 = (undefined4 *)puStack_130[2];
  ppauVar33 = (undefined1 (**) [16])*param_5;
  puStack_a8 = (ulonglong *)(plStack_d0 + 4);
  ppauStack_e8 = ppauStack_1d0;
  pauVar31 = pauStack_1d8;
  pbVar30 = pbStack_98;
  puVar35 = puStack_1c0;
  while( true ) {
    param_4 = (ulonglong *)(ulonglong)uVar17;
    puVar40 = puVar35 + -1;
    pbStack_98 = pbVar30;
    if (puVar35 == (undefined *)0x0) break;
    if ((short)uVar17 == 0) {
      do {
        auVar48 = *unaff_R13;
        pauVar31 = pauVar31 + -0x28;
        unaff_R13 = unaff_R13 + 1;
        uVar17 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
        param_4 = (ulonglong *)(ulonglong)uVar17;
      } while (uVar17 == 0);
    }
    uVar32 = 0;
    uVar17 = (uint)param_4;
    for (uVar36 = uVar17; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
      uVar32 = uVar32 + 1;
    }
    uVar25 = (ulonglong)uVar32;
    puVar4 = (ulonglong *)((longlong)pauVar31 + uVar25 * -0x28 + -0x28);
    ppauVar13 = (undefined1 (**) [16])*puVar4;
    uVar19 = puVar4[1];
    uVar32 = *(uint *)((longlong)pauVar31 + uVar25 * -0x28 + -0x18);
    param_2 = (undefined1 (*) [16])(ulonglong)uVar32;
    plVar20 = (longlong *)((longlong)pauVar31 + uVar25 * -0x28 + -0x14);
    uStack_178 = (undefined1 (**) [16])*plVar20;
    lVar18 = plVar20[1];
    uStack_170 = (undefined4)lVar18;
    uStack_16c = (undefined4)((ulonglong)lVar18 >> 0x20);
    if (*(longlong *)((longlong)pauVar31 + uVar25 * -0x28 + -0x28) == 3) break;
    cVar15 = pdb_140c42080(pbStack_90,param_2);
    if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143019d67,0x52,&UNK_143019dc0);
    }
    *(undefined4 *)pauStack_b0 = pauStack_b8._0_4_;
    pauStack_108 = (undefined1 (*) [16])CONCAT44(pauStack_108._4_4_,uVar32);
    pauVar27 = (undefined1 (*) [16])pdb_1400aede0(puStack_a8,&pauStack_108);
    pdb_1414ae460(plStack_d0,pauVar27,&pauStack_108);
    if (pauVar27 != (undefined1 (*) [16])0x0) {
      LOCK();
      *(longlong *)*pauVar27 = *(longlong *)*pauVar27 + -1;
      UNLOCK();
      if (*(longlong *)*pauVar27 == 0) {
        pauStack_298 = pauVar27;
        pdb_1408f7f60(&pauStack_298);
      }
    }
    puStack_280 = (undefined *)CONCAT44(puStack_280._4_4_,uVar32);
    pauStack_298 = (undefined1 (*) [16])0x4;
    ppauStack_290 = ppauVar13;
    uStack_288 = uVar19;
    uVar16 = pdb_140ae3070(uStack_140);
    pauStack_108 = (undefined1 (*) [16])CONCAT44(uStack_170,uStack_178._4_4_);
    uStack_100 = (undefined1 (**) [16])
                 (CONCAT35(uStack_100._5_3_,CONCAT14(uVar16,uStack_16c)) ^ 0x100000000);
    *puStack_c8 = pauStack_a0._0_4_;
    *puStack_138 = uStack_d4;
    pbVar28 = (byte *)0x0;
    pdb_1414c40f0(&pauStack_298,0,&pauStack_108,uStack_148,pbStack_90,0,param_11,ppauVar33);
    uVar17 = uVar17 - 1 & uVar17;
    pbVar30 = pbStack_98;
    puVar35 = puVar40;
  }
  if ((ppauStack_e8 != (undefined1 (**) [16])0x0) && (pbVar30 != (byte *)0x0)) {
    pub_1406abac0(pbStack_e0,(ulonglong)pbVar30,uStack_c0);
    pbVar28 = pbVar30;
  }
  if (lStack_158 == 0) {
    return;
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') {
    pbVar28 = (byte *)0x0;
    plVar20 = (longlong *)pdb_142dde6e0(plVar20);
    if (plVar20 == (longlong *)0x0) goto LAB_1408d9cc9;
  }
  if (*plVar20 == 0) {
    *plVar20 = -1;
    pbStack_90 = (byte *)plVar20;
    pdb_140e95370(plVar20 + 1,uStack_150);
    *(longlong *)pbStack_90 = *(longlong *)pbStack_90 + 1;
    return;
  }
LAB_1408d9c56:
  pdb_142dc8090(&UNK_14330e608);
LAB_1408d9c63:
  puStack_278 = (undefined *)pdb_140f4fd10();
  *(undefined **)*unaff_R13 = puStack_278;
  *(byte **)(*unaff_R13 + 8) = pbVar28;
  unaff_R13[1][0] = 1;
  goto LAB_1408d8d5c;
}

