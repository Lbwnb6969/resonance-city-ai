// VA 0x1429b8060, PDB extent 6470 bytes
// toolbar::menu::import::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::import::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/import.rs
   Extent: 6470 */

void pdb_1429b8060(ulonglong ***param_1,ulonglong ***param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong *param_5,longlong *param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulonglong **ppuVar3;
  ulonglong **ppuVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong ***pppuVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined *puVar21;
  ulonglong *puVar22;
  undefined8 uVar23;
  ulonglong *puVar24;
  ulonglong ***pppuVar25;
  ulonglong ***pppuVar26;
  uint uVar27;
  ushort uVar28;
  ulonglong uVar29;
  ulonglong **ppuVar30;
  byte bVar31;
  ulonglong **ppuVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM10_Ba;
  undefined1 unaff_XMM10_Bb;
  undefined1 unaff_XMM10_Bc;
  undefined1 unaff_XMM10_Bd;
  undefined1 unaff_XMM10_Be;
  undefined1 unaff_XMM10_Bf;
  undefined1 unaff_XMM10_Bg;
  undefined1 unaff_XMM10_Bh;
  undefined1 unaff_XMM10_Bi;
  undefined1 unaff_XMM10_Bj;
  undefined1 unaff_XMM10_Bk;
  undefined1 unaff_XMM10_Bl;
  undefined1 unaff_XMM10_Bm;
  undefined1 unaff_XMM10_Bn;
  undefined1 unaff_XMM10_Bo;
  undefined1 unaff_XMM10_Bp;
  ulonglong **ppuStack_298;
  ulonglong **ppuStack_290;
  ulonglong *puStack_288;
  ulonglong ***pppuStack_278;
  ulonglong *puStack_270;
  ulonglong ***pppuStack_268;
  ulonglong ***pppuStack_260;
  ulonglong *puStack_258;
  ulonglong **ppuStack_250;
  ulonglong uStack_248;
  undefined8 uStack_240;
  ulonglong ***pppuStack_238;
  ulonglong ***pppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  ulonglong **ppuStack_218;
  ulonglong **ppuStack_210;
  ulonglong **ppuStack_208;
  ulonglong **ppuStack_200;
  ulonglong ***pppuStack_1f8;
  ulonglong ***pppuStack_1f0;
  ulonglong ***pppuStack_1e8;
  ulonglong ***pppuStack_1e0;
  ulonglong *puStack_1d8;
  ulonglong ***pppuStack_1d0;
  ulonglong *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  ulonglong ****ppppuStack_190;
  ulonglong ***pppuStack_188;
  ulonglong ***pppuStack_180;
  ulonglong *puStack_178;
  ulonglong ***pppuStack_168;
  ulonglong ***pppuStack_160;
  ulonglong *puStack_158;
  ulonglong ***pppuStack_150;
  ulonglong ***pppuStack_148;
  ulonglong ***pppuStack_140;
  ulonglong *puStack_138;
  undefined1 uStack_121;
  ulonglong **ppuStack_120;
  ulonglong ***pppuStack_118;
  ulonglong ***pppuStack_110;
  ulonglong **ppuStack_108;
  ulonglong ***pppuStack_100;
  ulonglong *puStack_f8;
  ulonglong ***pppuStack_f0;
  ulonglong ***pppuStack_e8;
  ulonglong ***pppuStack_e0;
  ulonglong *puStack_d8;
  ulonglong ***pppuStack_d0;
  ulonglong *puStack_c8;
  undefined1 uStack_b2;
  byte bStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (SBORROW8(0,(longlong)param_2[6])) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14360cb00);
  }
  ppuVar30 = param_2[8];
  pppuStack_1e8 = (ulonglong ***)&UNK_14360cb18;
  pppuStack_1e0 = (ulonglong ***)0xd;
  ppuStack_120 = (ulonglong **)param_3;
  uVar15 = pdb_140bbbcb0(&pppuStack_1e8);
  puVar24 = (ulonglong *)(uVar15 ^ 0xb1695320004fb443);
  puVar22 = puVar24;
  lVar16 = pdb_14072c2d0(param_1);
  *(undefined1 *)(lVar16 + 0x5e) = 0;
  *(undefined1 *)(lVar16 + 0xcb) = 1;
  if (((ulonglong)puVar22 & 1) == 0) {
    ppuVar3 = param_1[2];
    if (ppuVar3 == *param_1) {
      pdb_142d7f080(param_1);
    }
    ppuVar32 = param_1[1];
    *(undefined4 *)(ppuVar32 + (longlong)ppuVar3 * 7) = 0;
    ppuVar32[(longlong)ppuVar3 * 7 + 6] = puVar24;
    param_1[2] = (ulonglong **)((longlong)ppuVar3 + 1);
  }
  uStack_240 = 0;
  ppuVar3 = param_2[0xc];
  LOCK();
  puVar22 = *ppuVar3;
  *ppuVar3 = (ulonglong *)((longlong)*ppuVar3 + 1);
  UNLOCK();
  ppuStack_250 = (ulonglong **)param_1;
  uStack_248 = (ulonglong)puVar24;
  if (*ppuVar3 == (ulonglong *)0x0 || SCARRY8((longlong)puVar22,1) != (longlong)*ppuVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  pdb_14116b120(&pppuStack_1e8,&ppuStack_250,ppuVar30,ppuVar3,&UNK_14360cb25,7);
  pppuVar18 = pppuStack_1e8;
  if (pppuStack_1e8[0x39] != (ulonglong **)0x0) {
    uVar15 = pdb_1400af0a0(pppuStack_1e8 + 0x3a,&pppuStack_1e0);
    ppuVar32 = pppuVar18[0x36];
    ppuVar4 = pppuVar18[0x37];
    bVar20 = (byte)(uVar15 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar16 = 0;
    do {
      uVar15 = uVar15 & (ulonglong)ppuVar4;
      auVar37 = *(undefined1 (*) [16])((longlong)ppuVar32 + uVar15);
      auVar38[0] = -(auVar37[0] == auVar34[0]);
      auVar38[1] = -(auVar37[1] == auVar34[1]);
      auVar38[2] = -(auVar37[2] == auVar34[2]);
      auVar38[3] = -(auVar37[3] == auVar34[3]);
      auVar38[4] = -(auVar37[4] == auVar34[4]);
      auVar38[5] = -(auVar37[5] == auVar34[5]);
      auVar38[6] = -(auVar37[6] == auVar34[6]);
      auVar38[7] = -(auVar37[7] == auVar34[7]);
      auVar38[8] = -(auVar37[8] == auVar34[0]);
      auVar38[9] = -(auVar37[9] == auVar34[1]);
      auVar38[10] = -(auVar37[10] == auVar34[2]);
      auVar38[0xb] = -(auVar37[0xb] == auVar34[3]);
      auVar38[0xc] = -(auVar37[0xc] == auVar34[4]);
      auVar38[0xd] = -(auVar37[0xd] == auVar34[5]);
      auVar38[0xe] = -(auVar37[0xe] == auVar34[6]);
      auVar38[0xf] = -(auVar37[0xf] == auVar34[7]);
      uVar28 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar27 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar27; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar29 = uVar8 + uVar15 & (ulonglong)ppuVar4;
        if (pppuStack_1e0 == (ulonglong ***)ppuVar32[uVar29 * -0x1b + -0x1b]) {
          pbVar17 = (byte *)((longlong)ppuVar32 + uVar29 * -0xd8 + -5);
          *pbVar17 = *pbVar17 | 4;
          puStack_d8 = puStack_1d8;
          pppuStack_e8 = pppuStack_1e8;
          pppuStack_e0 = pppuStack_1e0;
          ppuStack_210 = (ulonglong **)param_1;
          pppuStack_1f0 = param_2 + 6;
          pppuStack_150 = (ulonglong ***)param_4;
          lVar16 = pdb_14116e9c0(&pppuStack_e8);
          if (*(char *)(lVar16 + 0x75) == '\0') {
            *(float *)(lVar16 + 0x5c) =
                 (*(float *)(lVar16 + 0x54) / *(float *)(lVar16 + 0x50) + _DAT_142e36f28) * 0.0;
          }
          puStack_1d8 = puStack_d8;
          pppuStack_1e8 = pppuStack_e8;
          pppuStack_1e0 = pppuStack_e0;
          lVar16 = pdb_14116e9c0(&pppuStack_1e8);
          *(undefined8 *)(lVar16 + 0x30) = 1;
          pppuStack_e8 = pppuStack_1e8;
          pppuStack_e0 = pppuStack_1e0;
          puStack_d8 = puStack_1d8;
          lVar16 = pdb_14116e9c0(&pppuStack_e8);
          *(undefined4 *)(lVar16 + 0x70) = 0x41200000;
          pppuStack_268 = pppuStack_e8;
          pppuStack_260 = pppuStack_e0;
          puStack_258 = puStack_d8;
          pbVar17 = (byte *)pdb_1411724f0(&pppuStack_268);
          ppuVar32 = *(ulonglong ***)(pbVar17 + 8);
          bVar20 = ppuVar32 < ppuVar30 & *pbVar17;
          bStack_b1 = bVar20;
          lVar16 = pdb_1411724f0(&pppuStack_268);
          ppuVar4 = *(ulonglong ***)(lVar16 + 0x18);
          bVar31 = ppuVar4 < ppuVar30 & *(byte *)(lVar16 + 0x10);
          ppuStack_208 = ppuVar30;
          lVar16 = pdb_1411724f0(&pppuStack_268);
          uStack_b2 = *(undefined1 *)(lVar16 + 0x77);
          ppuStack_200 = ppuVar32;
          if ((bVar20 == 1) && ((*param_2 != (ulonglong **)0x1 || (ppuVar32 != param_2[1])))) {
            *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
            lVar16 = *param_6;
            lVar5 = *(longlong *)(lVar16 + 0x30);
            uVar19 = *(undefined8 *)(lVar16 + 0x40);
            pppuStack_f0 = param_2;
            if (lVar5 == *(longlong *)(lVar16 + 0x20)) {
              pdb_142d7e980(lVar16 + 0x20);
            }
            lVar6 = *(longlong *)(lVar16 + 0x28);
            *(undefined8 *)(lVar6 + lVar5 * 0x10) = uVar19;
            *(undefined1 *)(lVar6 + 8 + lVar5 * 0x10) = 0;
            *(longlong *)(lVar16 + 0x30) = lVar5 + 1;
            *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
            uVar15 = *param_5;
            if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
              pub_1406abac0((byte *)param_5[1],uVar15,1);
            }
            *param_5 = 0x8000000000000000;
            *pppuStack_f0 = (ulonglong **)0x1;
            pppuStack_f0[1] = ppuStack_200;
            param_2 = pppuStack_f0;
            if (bVar31 == 0) goto LAB_1429b8820;
LAB_1429b83c5:
            if (param_2[0xb] <= ppuVar4) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(ppuVar4,param_2[0xb],&UNK_14360cb30);
            }
            ppuVar30 = param_2[10] + (longlong)ppuVar4 * 5;
            puVar22 = param_2[10][(longlong)ppuVar4 * 5];
            uVar15 = (longlong)puVar22 >> 0x3f & (longlong)puVar22 + 0x8000000000000001U;
            if (uVar15 == 0) {
              pppuStack_1d0 = (ulonglong ***)ppuVar30[3];
              puStack_1c8 = ppuVar30[4];
              pdb_140f60be0(&pppuStack_1e8,ppuVar30);
              puStack_f8 = puStack_1c8;
              ppuStack_108 = (ulonglong **)puStack_1d8;
              pppuStack_100 = pppuStack_1d0;
              pppuStack_118 = pppuStack_1e8;
              pppuStack_110 = pppuStack_1e0;
              if ((longlong)pppuStack_1e8 < 0) {
                if (pppuStack_1e8 == (ulonglong ***)0x8000000000000001) goto LAB_1429b885c;
                goto LAB_1429b88fc;
              }
              puStack_c8 = puStack_1c8;
              puStack_d8 = puStack_1d8;
              pppuStack_d0 = pppuStack_1d0;
              pppuStack_e8 = pppuStack_1e8;
              pppuStack_e0 = pppuStack_1e0;
              pdb_140a45790(&pppuStack_238);
              puVar1 = (undefined8 *)((longlong)param_2[7] + (longlong)ppuVar4 * 0x1c);
              pppuStack_1e8 = (ulonglong ***)*puVar1;
              pppuStack_1e0 = (ulonglong ***)puVar1[1];
              pdb_140c715b0(&pppuStack_148,&pppuStack_1e8);
              puVar22 = puStack_138;
              pppuStack_f0 = pppuStack_140;
              pdb_140a937d0(&pppuStack_1e8,&pppuStack_238);
              pppuStack_1f8 = pppuStack_1e0;
              pppuVar18 = (ulonglong ***)
                          pdb_140c70000(pppuStack_f0,puVar22,pppuStack_1e0,puStack_1d8,&pppuStack_e8
                                       );
              if (pppuStack_1e8 != (ulonglong ***)0x0) {
                pub_1406abac0((byte *)pppuStack_1f8,(ulonglong)pppuStack_1e8,1);
              }
              if (pppuVar18 == (ulonglong ***)0x0) {
                uVar15 = *param_5;
                if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
                  pub_1406abac0((byte *)param_5[1],uVar15,1);
                }
                pppuVar18 = pppuStack_150;
                *param_5 = 0x8000000000000000;
                pppuStack_1e8 = pppuStack_238;
                pppuStack_1e0 = pppuStack_230;
                puVar22 = *ppuVar30;
                uVar15 = (longlong)puVar22 >> 0x3f & (longlong)puVar22 + 0x8000000000000001U;
                if (uVar15 == 0) {
                  lVar16 = 8;
joined_r0x0001429b940f:
                  if (puVar22 != (ulonglong *)0x0) {
                    pub_1406abac0(*(byte **)((longlong)ppuVar30 + lVar16),(ulonglong)puVar22,1);
                  }
                }
                else if (uVar15 != 1) {
                  puVar22 = ppuVar30[1];
                  lVar16 = 0x10;
                  goto joined_r0x0001429b940f;
                }
                *ppuVar30 = (ulonglong *)0x8000000000000000;
                ppuVar30[1] = (ulonglong *)pppuStack_1e8;
                ppuVar30[2] = (ulonglong *)pppuStack_1e0;
                pdb_140a93570(ppuStack_120,pppuVar18);
                *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
                lVar16 = *param_6;
                lVar5 = *(longlong *)(lVar16 + 0x30);
                uVar19 = *(undefined8 *)(lVar16 + 0x40);
                if (lVar5 == *(longlong *)(lVar16 + 0x20)) {
                  pdb_142d7e980(lVar16 + 0x20);
                }
                lVar6 = *(longlong *)(lVar16 + 0x28);
                *(undefined8 *)(lVar6 + lVar5 * 0x10) = uVar19;
                *(undefined1 *)(lVar6 + 8 + lVar5 * 0x10) = 2;
                *(longlong *)(lVar16 + 0x30) = lVar5 + 1;
                *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
              }
              else {
                pppuStack_168 = pppuVar18;
                if (*_DAT_143ca8e90 != 0) {
                  pppuStack_188 = (ulonglong ***)&pppuStack_168;
                  pppuStack_180 = (ulonglong ***)pdb_140f36c30;
                  pppuStack_1e8 = (ulonglong ***)0x0;
                  pppuStack_1e0 = (ulonglong ***)&UNK_14360cb64;
                  puStack_1d8 = (ulonglong *)0x15;
                  pppuStack_1d0 = (ulonglong ***)0x0;
                  puStack_1c8 = (ulonglong *)&UNK_14360cad5;
                  uStack_1c0 = 0x29;
                  uStack_1b8 = 1;
                  puStack_1b0 = &UNK_14360cb64;
                  uStack_1a8 = 0x15;
                  uStack_1a0 = 0xd900000001;
                  puStack_198 = &UNK_14360cb48;
                  ppppuStack_190 = &pppuStack_188;
                  pdb_140f332f0(&uStack_121,&pppuStack_1e8);
                }
                pppuStack_188 = (ulonglong ***)&pppuStack_168;
                pppuStack_180 = (ulonglong ***)pdb_140f36c30;
                pdb_140f60760(&pppuStack_1e8,&UNK_14360cb79);
                pppuStack_188 = pppuStack_1e8;
                pppuStack_180 = pppuStack_1e0;
                puStack_178 = puStack_1d8;
                uVar15 = *param_5;
                if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
                  pub_1406abac0((byte *)param_5[1],uVar15,1);
                }
                param_5[2] = (ulonglong)puStack_178;
                *param_5 = (ulonglong)pppuStack_188;
                param_5[1] = (ulonglong)pppuStack_180;
                *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
                lVar16 = *param_6;
                lVar5 = *(longlong *)(lVar16 + 0x30);
                uVar19 = *(undefined8 *)(lVar16 + 0x40);
                if (lVar5 == *(longlong *)(lVar16 + 0x20)) {
                  pdb_142d7e980(lVar16 + 0x20);
                }
                lVar6 = *(longlong *)(lVar16 + 0x28);
                *(undefined8 *)(lVar6 + lVar5 * 0x10) = uVar19;
                *(undefined1 *)(lVar6 + 8 + lVar5 * 0x10) = 0xe;
                *(longlong *)(lVar16 + 0x30) = lVar5 + 1;
                *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
                pdb_140f36c40(&pppuStack_168);
              }
              if (pppuStack_148 != (ulonglong ***)0x0) {
                pub_1406abac0((byte *)pppuStack_f0,(ulonglong)pppuStack_148,1);
              }
              if (pppuStack_e8 != (ulonglong ***)0x0) {
                pub_1406abac0((byte *)pppuStack_e0,(ulonglong)pppuStack_e8,1);
              }
              goto LAB_1429b8820;
            }
            if (uVar15 == 1) {
              pppuStack_110 = (ulonglong ***)ppuVar30[1];
              ppuStack_108 = (ulonglong **)ppuVar30[2];
              pppuStack_118 = (ulonglong ***)0x8000000000000000;
LAB_1429b88fc:
              pppuStack_278 = pppuStack_110;
              puStack_270 = (ulonglong *)ppuStack_108;
              pppuStack_f0 = (ulonglong ***)
                             CONCAT44(pppuStack_f0._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)pppuStack_118 >> 8),1));
            }
            else {
              pdb_140f60be0(&pppuStack_110,ppuVar30 + 1);
              pppuStack_118 = (ulonglong ***)0x8000000000000001;
LAB_1429b885c:
              uVar15 = *param_5;
              if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
                pub_1406abac0((byte *)param_5[1],uVar15,1);
              }
              param_5[2] = (ulonglong)pppuStack_100;
              *param_5 = (ulonglong)pppuStack_110;
              param_5[1] = (ulonglong)ppuStack_108;
              *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
              lVar16 = *param_6;
              lVar5 = *(longlong *)(lVar16 + 0x30);
              uVar19 = *(undefined8 *)(lVar16 + 0x40);
              if (lVar5 == *(longlong *)(lVar16 + 0x20)) {
                pdb_142d7e980(lVar16 + 0x20);
              }
              lVar6 = *(longlong *)(lVar16 + 0x28);
              *(undefined8 *)(lVar6 + lVar5 * 0x10) = uVar19;
              *(undefined1 *)(lVar6 + 8 + lVar5 * 0x10) = 0xe;
              *(longlong *)(lVar16 + 0x30) = lVar5 + 1;
              *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
              pppuStack_f0 = (ulonglong ***)((ulonglong)pppuStack_f0 & 0xffffffff00000000);
            }
          }
          else {
            *param_2 = (ulonglong **)(ulonglong)bVar20;
            param_2[1] = ppuVar32;
            if (bVar31 != 0) goto LAB_1429b83c5;
LAB_1429b8820:
            pppuStack_f0 = (ulonglong ***)((ulonglong)pppuStack_f0 & 0xffffffff00000000);
          }
          ppuVar30 = ppuVar3 + 2;
          LOCK();
          bVar33 = *(char *)(ppuVar3 + 2) == '\0';
          if (bVar33) {
            *(char *)(ppuVar3 + 2) = '\x01';
          }
          UNLOCK();
          if (!bVar33) {
            pdb_142dbd1a0(ppuVar30);
          }
          pdb_140e9a150(ppuVar30);
          uStack_1b8 = CONCAT44(uStack_1b8._4_4_,*(undefined4 *)((longlong)ppuVar3 + 0x44));
          pppuStack_1e8 = *(ulonglong ****)((longlong)ppuVar3 + 0x14);
          pppuStack_1e0 = *(ulonglong ****)((longlong)ppuVar3 + 0x1c);
          puStack_1d8 = *(ulonglong **)((longlong)ppuVar3 + 0x24);
          pppuStack_1d0 = *(ulonglong ****)((longlong)ppuVar3 + 0x2c);
          puStack_1c8 = *(ulonglong **)((longlong)ppuVar3 + 0x34);
          uStack_1c0 = *(undefined8 *)((longlong)ppuVar3 + 0x3c);
          pdb_140e9a350();
          LOCK();
          bVar33 = *(char *)(ppuVar3 + 2) == '\x01';
          if (bVar33) {
            *(char *)(ppuVar3 + 2) = '\0';
          }
          UNLOCK();
          if (!bVar33) {
            pdb_142dbcef0(ppuVar30,0);
          }
          pdb_140a005d0(&pppuStack_e8,&pppuStack_1e8);
          pppuVar18 = pppuStack_d0;
          uVar14 = _DAT_142f95190;
          pppuStack_150 = pppuStack_e8;
          ppuStack_120 = (ulonglong **)puStack_d8;
          iVar10 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                                    CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))
                                   ) ==
                          CONCAT13(unaff_XMM10_Bd,
                                   CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba)))
                          );
          iVar11 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                                    CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))
                                   ) ==
                          CONCAT13(unaff_XMM10_Bh,
                                   CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be)))
                          );
          iVar12 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                                    CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))
                                   ) ==
                          CONCAT13(unaff_XMM10_Bl,
                                   CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi)))
                          );
          iVar13 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                                    CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))
                                   ) ==
                          CONCAT13(unaff_XMM10_Bp,
                                   CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm)))
                          );
          pppuVar25 = pppuStack_e0;
          ppuVar30 = ppuStack_208;
          ppuVar3 = (ulonglong **)0x0;
          goto LAB_1429b8a6a;
        }
        uVar28 = (ushort)(uVar27 - 1) & (ushort)uVar27;
        uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar28);
      }
      auVar36[0] = -(auVar37[0] == -1);
      auVar36[1] = -(auVar37[1] == -1);
      auVar36[2] = -(auVar37[2] == -1);
      auVar36[3] = -(auVar37[3] == -1);
      auVar36[4] = -(auVar37[4] == -1);
      auVar36[5] = -(auVar37[5] == -1);
      auVar36[6] = -(auVar37[6] == -1);
      auVar36[7] = -(auVar37[7] == -1);
      auVar36[8] = -(auVar37[8] == -1);
      auVar36[9] = -(auVar37[9] == -1);
      auVar36[10] = -(auVar37[10] == -1);
      auVar36[0xb] = -(auVar37[0xb] == -1);
      auVar36[0xc] = -(auVar37[0xc] == -1);
      auVar36[0xd] = -(auVar37[0xd] == -1);
      auVar36[0xe] = -(auVar37[0xe] == -1);
      auVar36[0xf] = -(auVar37[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar15 = uVar15 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1429b8a6a:
  ppuVar32 = ppuVar3;
  if ((ppuVar30 == (ulonglong **)0x0) || (pppuVar25 == pppuVar18)) goto LAB_1429b8cc0;
  ppuStack_218 = ppuVar32;
  if (param_2[0xb] <= ppuVar32) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(ppuVar32,param_2[0xb],&UNK_14360cc48);
  }
  ppuVar30 = (ulonglong **)((longlong)ppuVar30 - 1);
  pppuVar25 = pppuVar25 + 1;
  ppuVar3 = (ulonglong **)((longlong)ppuVar32 + 1);
  if (SBORROW8(0,(longlong)param_2[10][(longlong)ppuVar32 * 5])) {
    pppuStack_148 = &ppuStack_218;
    pppuStack_140 = (ulonglong ***)pdb_140f72a40;
    pdb_140f60760(&pppuStack_118,&UNK_14360cc60,&pppuStack_148);
    pppuStack_148 = pppuStack_118;
    pppuStack_140 = pppuStack_110;
    puStack_138 = (ulonglong *)ppuStack_108;
    pppuStack_118 = (ulonglong ***)((ulonglong)pppuStack_118 & 0xffffffff00000000);
    pdb_14116da10(&pppuStack_188,ppuStack_210,&pppuStack_148);
    puStack_228 = &UNK_14360cc6c;
    uStack_220 = 3;
    pppuStack_118 = (ulonglong ***)pdb_140bbbcb0(&puStack_228);
    pppuStack_110 = _DAT_14329c260;
    ppuStack_108 = (ulonglong **)_UNK_14329c268;
    pppuStack_110 = (ulonglong ***)pdb_1400affa0(&pppuStack_118);
    pppuStack_118 = pppuStack_180;
    uVar19 = pdb_1400b0130(&pppuStack_118);
    pdb_14072caa0(&pppuStack_118,&pppuStack_188,uVar19);
    uVar19 = pdb_14116ee90(&pppuStack_118,0);
    pdb_14119b6b0(uVar19,&UNK_14360cc6c,3);
    puStack_138 = (ulonglong *)ppuStack_108;
    pppuStack_148 = pppuStack_118;
    pppuStack_140 = pppuStack_110;
    uVar19 = pdb_14116e180(&pppuStack_148);
    pdb_14119b2b0(uVar19,uVar14);
    pppuVar26 = pppuStack_148;
    pppuStack_168 = pppuStack_148;
    pppuStack_160 = pppuStack_140;
    puStack_158 = puStack_138;
    if (pppuStack_148[0x39] != (ulonglong **)0x0) {
      uVar15 = pdb_1400af0a0(pppuStack_148 + 0x3a,&pppuStack_160);
      ppuVar32 = pppuVar26[0x36];
      ppuVar4 = pppuVar26[0x37];
      bVar20 = (byte)(uVar15 >> 0x39);
      auVar34 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar16 = 0;
      while( true ) {
        uVar15 = uVar15 & (ulonglong)ppuVar4;
        pcVar2 = (char *)((longlong)ppuVar32 + uVar15);
        auVar37[0] = -(*pcVar2 == auVar34[0]);
        auVar37[1] = -(pcVar2[1] == auVar34[1]);
        auVar37[2] = -(pcVar2[2] == auVar34[2]);
        auVar37[3] = -(pcVar2[3] == auVar34[3]);
        auVar37[4] = -(pcVar2[4] == auVar34[4]);
        auVar37[5] = -(pcVar2[5] == auVar34[5]);
        auVar37[6] = -(pcVar2[6] == auVar34[6]);
        auVar37[7] = -(pcVar2[7] == auVar34[7]);
        auVar37[8] = -(pcVar2[8] == auVar34[0]);
        auVar37[9] = -(pcVar2[9] == auVar34[1]);
        auVar37[10] = -(pcVar2[10] == auVar34[2]);
        auVar37[0xb] = -(pcVar2[0xb] == auVar34[3]);
        auVar37[0xc] = -(pcVar2[0xc] == auVar34[4]);
        auVar37[0xd] = -(pcVar2[0xd] == auVar34[5]);
        auVar37[0xe] = -(pcVar2[0xe] == auVar34[6]);
        auVar37[0xf] = -(pcVar2[0xf] == auVar34[7]);
        uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar28;
        while (uVar28 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar27; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar29 = uVar8 + uVar15 & (ulonglong)ppuVar4;
          if (pppuStack_160 == (ulonglong ***)ppuVar32[uVar29 * -0x1b + -0x1b]) {
            pbVar17 = (byte *)((longlong)ppuVar32 + uVar29 * -0xd8 + -5);
            *pbVar17 = *pbVar17 | 2;
            goto LAB_1429b8a6a;
          }
          uVar28 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar28);
        }
        auVar35[0] = -(*pcVar2 == (char)iVar10);
        auVar35[1] = -(pcVar2[1] == (char)((uint)iVar10 >> 8));
        auVar35[2] = -(pcVar2[2] == (char)((uint)iVar10 >> 0x10));
        auVar35[3] = -(pcVar2[3] == (char)((uint)iVar10 >> 0x18));
        auVar35[4] = -(pcVar2[4] == (char)iVar11);
        auVar35[5] = -(pcVar2[5] == (char)((uint)iVar11 >> 8));
        auVar35[6] = -(pcVar2[6] == (char)((uint)iVar11 >> 0x10));
        auVar35[7] = -(pcVar2[7] == (char)((uint)iVar11 >> 0x18));
        auVar35[8] = -(pcVar2[8] == (char)iVar12);
        auVar35[9] = -(pcVar2[9] == (char)((uint)iVar12 >> 8));
        auVar35[10] = -(pcVar2[10] == (char)((uint)iVar12 >> 0x10));
        auVar35[0xb] = -(pcVar2[0xb] == (char)((uint)iVar12 >> 0x18));
        auVar35[0xc] = -(pcVar2[0xc] == (char)iVar13);
        auVar35[0xd] = -(pcVar2[0xd] == (char)((uint)iVar13 >> 8));
        auVar35[0xe] = -(pcVar2[0xe] == (char)((uint)iVar13 >> 0x10));
        auVar35[0xf] = -(pcVar2[0xf] == (char)((uint)iVar13 >> 0x18));
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        uVar15 = uVar15 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  goto LAB_1429b8a6a;
LAB_1429b8cc0:
  if (ppuStack_120 != (ulonglong **)0x0) {
    pub_1406abac0((byte *)pppuStack_150,(longlong)ppuStack_120 << 3,4);
  }
  pppuStack_e8 = (ulonglong ***)&UNK_14360cb7f;
  pppuStack_e0 = (ulonglong ***)0xe;
  uVar15 = pdb_140bbbcb0(&pppuStack_e8);
  ppuVar30 = ppuStack_210;
  pppuVar25 = (ulonglong ***)(uVar15 ^ 0xb1695320004fb443);
  pppuVar18 = pppuVar25;
  lVar16 = pdb_14072c2d0(ppuStack_210);
  *(undefined1 *)(lVar16 + 0x5e) = 0;
  if (((ulonglong)pppuVar18 & 1) == 0) {
    ppuVar3 = (ulonglong **)ppuVar30[2];
    if (ppuVar3 == (ulonglong **)*ppuVar30) {
      pdb_142d7f080(ppuVar30);
    }
    ppuVar32 = (ulonglong **)ppuVar30[1];
    *(undefined4 *)(ppuVar32 + (longlong)ppuVar3 * 7) = 2;
    ppuVar32[(longlong)ppuVar3 * 7 + 6] = (ulonglong *)pppuVar25;
    ppuVar30[2] = (ulonglong *)((longlong)ppuVar3 + 1);
  }
  pppuStack_118 = (ulonglong ***)ppuVar30;
  ppuStack_108 = (ulonglong **)0x0;
  pppuStack_110 = pppuVar25;
  pdb_141174160(&pppuStack_e8,&pppuStack_118,&UNK_14360cb8d,0x12,0);
  pdb_141186520(&pppuStack_188,&pppuStack_e8,&UNK_14360cb9f,7);
  uVar23 = 0x14;
  uVar19 = pdb_140dc6290(&UNK_14360cba6,0x14);
  pdb_140f5f4f0(&pppuStack_118,uVar19,uVar23);
  ppuVar3 = ppuStack_108;
  ppuStack_120 = (ulonglong **)pppuStack_110;
  pppuStack_168 = pppuStack_110;
  pppuStack_160 = (ulonglong ***)ppuStack_108;
  pppuStack_e8 = (ulonglong ***)pdb_140bbbcb0(&pppuStack_168);
  puVar22 = _UNK_14329c268;
  pppuVar18 = _DAT_14329c260;
  pppuStack_e0 = _DAT_14329c260;
  puStack_d8 = _UNK_14329c268;
  pppuStack_e0 = (ulonglong ***)pdb_1400affa0(&pppuStack_e8);
  pppuStack_e8 = pppuStack_180;
  uVar19 = pdb_1400b0130(&pppuStack_e8);
  pdb_14072caa0(&pppuStack_e8,&pppuStack_188,uVar19);
  uVar19 = pdb_14116ee90(&pppuStack_e8,0);
  pdb_14119b6b0(uVar19,ppuStack_120,ppuVar3);
  puStack_138 = puStack_d8;
  pppuStack_148 = pppuStack_e8;
  pppuStack_140 = pppuStack_e0;
  lVar16 = pdb_14116e180(&pppuStack_148);
  *(undefined4 *)(lVar16 + 600) = 0xffffffa0;
  puStack_d8 = puStack_138;
  pppuStack_e8 = pppuStack_148;
  pppuStack_e0 = pppuStack_140;
  uVar19 = pdb_14116e180(&pppuStack_e8);
  pdb_14119b2b0(uVar19,_DAT_1435ae280);
  puStack_138 = puStack_d8;
  pppuStack_148 = pppuStack_e8;
  pppuStack_140 = pppuStack_e0;
  uVar19 = pdb_14116e180(&pppuStack_148);
  pdb_140cb5a70(uVar19,0);
  puStack_d8 = puStack_138;
  pppuStack_e8 = pppuStack_148;
  pppuStack_e0 = pppuStack_140;
  uVar19 = pdb_14116e180(&pppuStack_e8);
  pdb_140cb5c70(uVar19,800);
  if (pppuStack_118 != (ulonglong ***)0x0) {
    pub_1406abac0((byte *)ppuStack_120,(ulonglong)pppuStack_118,1);
  }
  pppuStack_e8 = (ulonglong ***)&UNK_14360cbba;
  pppuStack_e0 = (ulonglong ***)0xd;
  uVar15 = pdb_140bbbcb0(&pppuStack_e8);
  pppuVar26 = (ulonglong ***)(uVar15 ^ 0xb1695320004fb443);
  pppuVar25 = pppuVar26;
  lVar16 = pdb_14072c2d0(ppuVar30);
  *(undefined1 *)(lVar16 + 0x5e) = 0;
  if (((ulonglong)pppuVar25 & 1) == 0) {
    ppuVar3 = (ulonglong **)ppuVar30[2];
    if (ppuVar3 == (ulonglong **)*ppuVar30) {
      pdb_142d7f080(ppuVar30);
    }
    ppuVar32 = (ulonglong **)ppuVar30[1];
    *(undefined4 *)(ppuVar32 + (longlong)ppuVar3 * 7) = 2;
    ppuVar32[(longlong)ppuVar3 * 7 + 6] = (ulonglong *)pppuVar26;
    ppuVar30[2] = (ulonglong *)((longlong)ppuVar3 + 1);
  }
  pppuStack_118 = (ulonglong ***)ppuVar30;
  ppuStack_108 = (ulonglong **)0x0;
  pppuStack_110 = pppuVar26;
  pdb_141174160(&pppuStack_e8,&pppuStack_118,&UNK_14360cbc7,0x12,0);
  pdb_141186520(&pppuStack_148,&pppuStack_e8,&UNK_14360cb9f,7);
  uVar15 = *param_5;
  if (!SBORROW8(0,uVar15)) {
    puVar21 = &UNK_14360cc18;
    pppuVar25 = (ulonglong ***)0x11;
    goto LAB_1429b90bb;
  }
  if (bStack_b1 == 0) {
    if (ppuStack_208 == (ulonglong **)0x0) {
      puVar21 = &UNK_14360cbd9;
      pppuVar25 = (ulonglong ***)0x11;
      goto LAB_1429b90bb;
    }
LAB_1429b90af:
    puVar21 = &UNK_14360cbea;
  }
  else {
    if (param_2[0xb] <= ppuStack_200) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(ppuStack_200,param_2[0xb],&UNK_14360cc70);
    }
    if (!SBORROW8(0,(longlong)param_2[10][(longlong)ppuStack_200 * 5])) goto LAB_1429b90af;
    puVar21 = &UNK_14360cc01;
  }
  pppuVar25 = (ulonglong ***)0x17;
LAB_1429b90bb:
  pppuVar26 = (ulonglong ***)pdb_140dc6290(puVar21);
  pppuStack_168 = pppuVar26;
  pppuStack_160 = pppuVar25;
  pppuStack_e8 = (ulonglong ***)pdb_140bbbcb0(&pppuStack_168);
  pppuStack_e0 = pppuVar18;
  puStack_d8 = puVar22;
  pppuStack_e0 = (ulonglong ***)pdb_1400affa0(&pppuStack_e8);
  pppuStack_e8 = pppuStack_140;
  uVar19 = pdb_1400b0130(&pppuStack_e8);
  pdb_14072caa0(&pppuStack_e8,&pppuStack_148,uVar19);
  uVar19 = pdb_14116ee90(&pppuStack_e8,0);
  pdb_14119b6b0(uVar19,pppuVar26,pppuVar25);
  ppuStack_108 = (ulonglong **)puStack_d8;
  pppuStack_118 = pppuStack_e8;
  pppuStack_110 = pppuStack_e0;
  lVar16 = pdb_14116e180(&pppuStack_118);
  *(undefined4 *)(lVar16 + 600) = 0xffffffa0;
  pppuStack_e8 = pppuStack_118;
  pppuStack_e0 = pppuStack_110;
  puStack_d8 = (ulonglong *)ppuStack_108;
  uVar19 = pdb_14116e180(&pppuStack_e8);
  pdb_14119b2b0(uVar19);
  puStack_288 = puStack_d8;
  ppuStack_298 = (ulonglong **)pppuStack_e8;
  ppuStack_290 = (ulonglong **)pppuStack_e0;
  if (!SBORROW8(0,uVar15)) {
    pdb_140726690(&ppuStack_298,param_5[1],param_5[2]);
  }
  pppuStack_e8 = (ulonglong ***)&UNK_14360cc29;
  pppuStack_e0 = (ulonglong ***)0xb;
  uVar29 = pdb_140bbbcb0(&pppuStack_e8);
  pppuVar25 = (ulonglong ***)(uVar29 ^ 0xb1695320004fb443);
  pppuVar18 = pppuVar25;
  lVar16 = pdb_14072c2d0(ppuVar30);
  *(undefined1 *)(lVar16 + 0x5e) = 0;
  if (((ulonglong)pppuVar18 & 1) == 0) {
    ppuVar3 = (ulonglong **)ppuVar30[2];
    if (ppuVar3 == (ulonglong **)*ppuVar30) {
      pdb_142d7f080(ppuVar30);
    }
    ppuVar32 = (ulonglong **)ppuVar30[1];
    *(undefined4 *)(ppuVar32 + (longlong)ppuVar3 * 7) = 2;
    ppuVar32[(longlong)ppuVar3 * 7 + 6] = (ulonglong *)pppuVar25;
    ppuVar30[2] = (ulonglong *)((longlong)ppuVar3 + 1);
  }
  pppuStack_118 = (ulonglong ***)ppuVar30;
  ppuStack_108 = (ulonglong **)0x0;
  pppuStack_110 = pppuVar25;
  pdb_141174160(&pppuStack_e8,&pppuStack_118,&UNK_14360cc34,9,0);
  pdb_141189e30(&pppuStack_e8,&UNK_14360cc3d,6,&pppuStack_118,&uStack_b2);
  bVar20 = (byte)pppuStack_f0;
  if ((char)pppuStack_118 != '\0' || bVar20 != 0) {
    if (!SBORROW8(0,(longlong)*pppuStack_1f0)) {
      pdb_1411807b0(pppuStack_1f0);
    }
    param_2[6] = (ulonglong **)0x8000000000000000;
    *param_2 = (ulonglong **)0x0;
    *(byte *)(param_2 + 0xd) = bVar20;
    *(ulonglong ****)((longlong)param_2 + 0x69) = pppuStack_278;
    *(ulonglong **)((longlong)param_2 + 0x71) = puStack_270;
    if ((!SBORROW8(0,uVar15)) && (uVar15 != 0)) {
      pub_1406abac0((byte *)param_5[1],uVar15,1);
    }
    *param_5 = 0x8000000000000000;
    *(undefined1 *)(param_5 + 3) = 2;
  }
  return;
}

