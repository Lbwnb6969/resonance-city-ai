// VA 0x14089f5c0, PDB extent 8357 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 8357 */

void pdb_14089f5c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  int iVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  undefined *puVar28;
  ushort uVar29;
  undefined *puVar30;
  longlong **pplVar31;
  undefined *unaff_R13;
  undefined *puVar32;
  undefined1 (*pauVar33) [16];
  byte bVar34;
  longlong lVar35;
  float fVar37;
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
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
  float fVar46;
  longlong *plStack_378;
  char *pcStack_370;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  longlong lStack_2e8;
  float fStack_2e0;
  undefined4 uStack_2dc;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined1 (*pauStack_2a8) [16];
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  undefined4 *puStack_288;
  longlong **pplStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong **pplStack_258;
  undefined1 (*pauStack_250) [16];
  undefined1 *puStack_248;
  ushort uStack_240;
  undefined2 uStack_23e;
  undefined4 uStack_23c;
  longlong *plStack_238;
  undefined1 (*pauStack_230) [16];
  ushort uStack_220;
  longlong lStack_218;
  longlong lStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  longlong lStack_1a0;
  float fStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined4 uStack_17c;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined1 (*pauStack_150) [16];
  undefined1 *puStack_148;
  ulonglong uStack_140;
  undefined1 (*pauStack_138) [16];
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong *plStack_118;
  undefined1 (*pauStack_110) [16];
  byte bStack_101;
  longlong *plStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar14 = pdb_140e94b40();
  plVar19 = param_1;
  if (cVar14 == '\0') {
    lStack_190 = 0;
    if (*_DAT_143ca4500 != '\0') {
      return;
    }
LAB_14089f8d9:
    pdb_140c41140(&pplStack_258,*plVar19);
    fVar37 = _DAT_142e36f50;
    bStack_101 = (byte)pplStack_258;
    pauVar33 = (undefined1 (*) [16])CONCAT44(uStack_23c,CONCAT22(uStack_23e,uStack_240));
    plStack_130 = plStack_238;
    lStack_298 = *param_2;
    uStack_17c = *(undefined4 *)((longlong)param_4 + 0x1c);
    lStack_290 = *param_4;
    puStack_288 = (undefined4 *)param_4[2];
    lStack_170 = *param_3;
    uStack_160 = *param_5;
    uStack_120 = *param_6;
    uStack_128 = param_6[1];
    iVar24 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    uStack_140 = (ulonglong)uStack_220;
    lStack_168 = lStack_218;
    lStack_278 = lStack_170 + 0x18;
    lStack_270 = lStack_170 + 0x50;
    pplStack_280 = (longlong **)(lStack_170 + 0x60);
    pauStack_110 = pauStack_230;
    puVar26 = puStack_248;
    plVar19 = plStack_238;
    pauVar21 = pauStack_250;
    pauVar23 = pauStack_250;
    pauVar22 = pauVar33;
    if (puStack_248 == (undefined1 *)0x2) goto LAB_14089fb95;
LAB_14089fa05:
    if (plStack_130 != (longlong *)0x0) {
      if (lStack_168 == 0) {
        lStack_168 = 0;
      }
      else {
        if ((short)uStack_140 == 0) {
          do {
            auVar36 = *pauStack_110;
            plStack_130 = plStack_130 + -0x130;
            pauStack_110 = pauStack_110 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
            uStack_140 = (ulonglong)uVar15;
          } while (uVar15 == 0);
        }
        uVar15 = 0;
        for (uVar27 = (uint)uStack_140; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        pauVar22 = pauVar21;
        puStack_148 = puVar26;
        lVar16 = pdb_140c44590(plStack_130 + (ulonglong)uVar15 * -0x13 + -0x13);
        uStack_140 = (ulonglong)((uint)uStack_140 - 1 & (uint)uStack_140);
        lStack_168 = lStack_168 + -1;
        puVar26 = puStack_148;
        if (lVar16 != 3) {
          pauVar23 = (undefined1 (*) [16])(plStack_130 + (ulonglong)uVar15 * -0x13 + -0x12);
          pauStack_1a8 = pauVar22;
          pauStack_150 = pauVar21;
          pauStack_138 = pauVar33;
          goto LAB_14089fbce;
        }
      }
    }
    pauVar23 = pauVar21;
    if (puVar26 != (undefined1 *)0x1) {
      plVar19 = (longlong *)0x0;
      pauVar22 = pauVar33;
      goto LAB_14089fb95;
    }
    pauStack_138 = (undefined1 (*) [16])0x0;
    plVar19 = (longlong *)0x0;
    pauVar22 = pauStack_138;
    if (pauVar33 == (undefined1 (*) [16])0x0) goto LAB_14089fb95;
    puStack_148 = (undefined1 *)0x1;
    plStack_130 = (longlong *)0x0;
    pauStack_138 = (undefined1 (*) [16])0x0;
    lVar16 = 1;
    pauVar23 = pauVar33;
    pauStack_150 = pauVar21;
LAB_14089fbce:
    do {
      pauStack_1b8 = pauStack_1a8;
      lStack_2a0 = lVar16;
      lStack_1c0 = lVar16;
      pdb_140c3ba10(&pplStack_258,pauVar23);
      uVar15 = (uint)uStack_240;
      pauStack_2a8 = pauStack_230 + 5;
      pauStack_1b0 = pauStack_230;
      plVar19 = plStack_238;
      pplVar31 = pplStack_258;
      pauVar33 = pauStack_250;
LAB_14089fc2f:
      if (plVar19 != (longlong *)0x0) {
        if ((short)uVar15 == 0) {
          do {
            auVar36 = *pauVar33;
            pplVar31 = pplVar31 + -8;
            pauVar33 = pauVar33 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar15 == 0);
        }
        iVar6 = 0;
        for (uVar27 = uVar15; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        iVar6 = *(int *)((longlong)pplVar31 + (-4 - (ulonglong)(uint)(iVar6 << 2)));
        pplStack_258 = (longlong **)CONCAT44(pplStack_258._4_4_,iVar6);
        if (*(longlong *)(pauStack_1b0[4] + 8) != 0) {
          uVar15 = uVar15 - 1 & uVar15;
          plStack_118 = (longlong *)((longlong)plVar19 + -1);
          uVar20 = pdb_1400aede0(pauStack_2a8,&pplStack_258);
          lStack_178 = *(longlong *)pauStack_1b0[3];
          bVar34 = (byte)(uVar20 >> 0x39);
          auVar36 = ZEXT216(CONCAT11(bVar34,bVar34));
          auVar36 = pshuflw(auVar36,auVar36,0);
          lVar16 = 0;
          do {
            uVar20 = uVar20 & *(ulonglong *)(pauStack_1b0[3] + 8);
            auVar2 = *(undefined1 (*) [16])(lStack_178 + uVar20);
            auVar43[0] = -(auVar2[0] == auVar36[0]);
            auVar43[1] = -(auVar2[1] == auVar36[1]);
            auVar43[2] = -(auVar2[2] == auVar36[2]);
            auVar43[3] = -(auVar2[3] == auVar36[3]);
            auVar43[4] = -(auVar2[4] == auVar36[4]);
            auVar43[5] = -(auVar2[5] == auVar36[5]);
            auVar43[6] = -(auVar2[6] == auVar36[6]);
            auVar43[7] = -(auVar2[7] == auVar36[7]);
            auVar43[8] = -(auVar2[8] == auVar36[0]);
            auVar43[9] = -(auVar2[9] == auVar36[1]);
            auVar43[10] = -(auVar2[10] == auVar36[2]);
            auVar43[0xb] = -(auVar2[0xb] == auVar36[3]);
            auVar43[0xc] = -(auVar2[0xc] == auVar36[4]);
            auVar43[0xd] = -(auVar2[0xd] == auVar36[5]);
            auVar43[0xe] = -(auVar2[0xe] == auVar36[6]);
            auVar43[0xf] = -(auVar2[0xf] == auVar36[7]);
            uVar29 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar43[0xf] >> 7) << 0xf;
            uVar27 = (uint)uVar29;
            while (uVar29 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar27; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar35 = (uVar7 + uVar20 & *(ulonglong *)(pauStack_1b0[3] + 8)) * -0x68;
              if (iVar6 == *(int *)(lStack_178 + -0x68 + lVar35)) {
                lStack_178 = lStack_178 + lVar35;
                plVar19 = plStack_118;
                if (*(int *)(lStack_178 + -0x60) != 7) goto LAB_14089fc2f;
                uVar5 = *(undefined1 *)(lStack_178 + -8);
                pdb_140c45ec0(&fStack_2f8,lStack_298,iVar6,&UNK_1430139c8);
                *puStack_288 = uStack_17c;
                plStack_100 = (longlong *)
                              pdb_1408f3750(lStack_290,iVar6,lStack_2a0,pauStack_1a8,uVar5);
                *(undefined1 *)((longlong)plStack_100 + 0x159) = 1;
                lStack_158 = lStack_178 + -0x28;
                lVar16 = pdb_140901490();
                fVar38 = *(float *)(lVar16 + 4);
                lVar16 = pdb_140c413e0(&lStack_1c0);
                fVar46 = 0.0;
                if (lVar16 == 0) {
                  lVar16 = 0;
                  goto LAB_14089ff97;
                }
                pplStack_258 = (longlong **)CONCAT44(pplStack_258._4_4_,iVar6);
                unaff_R13 = *(undefined **)(lStack_170 + 0x28);
                puVar26 = (undefined1 *)0x4;
                if (unaff_R13 == (undefined *)0x0) {
LAB_14089feae:
                  pauStack_250 = (undefined1 (*) [16])0x4;
                }
                else if (unaff_R13 == (undefined *)0x1) {
                  lVar16 = *(longlong *)(lStack_170 + 0x20);
                  pauStack_250 = (undefined1 (*) [16])0x4;
                  if (iVar6 == *(int *)(lVar16 + 0x20)) {
                    puVar30 = (undefined *)0x0;
LAB_14089fe9a:
                    pauStack_250 = *(undefined1 (**) [16])(lVar16 + 8 + (longlong)puVar30 * 0x28);
                    puVar26 = *pauStack_250 +
                              *(longlong *)(lVar16 + 0x10 + (longlong)puVar30 * 0x28) * 8;
                  }
                }
                else {
                  puVar30 = (undefined *)pdb_1400aede0(lStack_270,&pplStack_258);
                  uVar20 = pdb_1414af660(lStack_278,puVar30,&pplStack_258);
                  if ((uVar20 & 1) == 0) goto LAB_14089feae;
                  if (unaff_R13 <= puVar30) goto LAB_1408a0ba0;
                  lVar16 = *(longlong *)(lStack_170 + 0x20);
                  pauStack_250 = (undefined1 (*) [16])0x4;
                  if (lVar16 != 0) goto LAB_14089fe9a;
                }
                pplStack_258 = pplStack_280;
                uStack_240 = (ushort)iVar6;
                uStack_23e = (undefined2)((uint)iVar6 >> 0x10);
                bVar34 = 0;
                iVar24 = 0;
                bVar12 = false;
                bVar13 = false;
                puStack_248 = puVar26;
                goto LAB_14089ff05;
              }
              uVar29 = (ushort)(uVar27 - 1) & (ushort)uVar27;
              uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar29);
            }
            auVar41[0] = -(auVar2[0] == (char)iVar24);
            auVar41[1] = -(auVar2[1] == (char)((uint)iVar24 >> 8));
            auVar41[2] = -(auVar2[2] == (char)((uint)iVar24 >> 0x10));
            auVar41[3] = -(auVar2[3] == (char)((uint)iVar24 >> 0x18));
            auVar41[4] = -(auVar2[4] == (char)iVar9);
            auVar41[5] = -(auVar2[5] == (char)((uint)iVar9 >> 8));
            auVar41[6] = -(auVar2[6] == (char)((uint)iVar9 >> 0x10));
            auVar41[7] = -(auVar2[7] == (char)((uint)iVar9 >> 0x18));
            auVar41[8] = -(auVar2[8] == (char)iVar10);
            auVar41[9] = -(auVar2[9] == (char)((uint)iVar10 >> 8));
            auVar41[10] = -(auVar2[10] == (char)((uint)iVar10 >> 0x10));
            auVar41[0xb] = -(auVar2[0xb] == (char)((uint)iVar10 >> 0x18));
            auVar41[0xc] = -(auVar2[0xc] == (char)iVar11);
            auVar41[0xd] = -(auVar2[0xd] == (char)((uint)iVar11 >> 8));
            auVar41[0xe] = -(auVar2[0xe] == (char)((uint)iVar11 >> 0x10));
            auVar41[0xf] = -(auVar2[0xf] == (char)((uint)iVar11 >> 0x18));
            if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
            uVar20 = uVar20 + lVar16 + 0x10;
            lVar16 = lVar16 + 0x10;
          } while( true );
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143013458);
      }
      puVar26 = puStack_148;
      plVar19 = plStack_130;
      pauVar21 = pauStack_150;
      pauVar23 = pauStack_150;
      pauVar33 = pauStack_138;
      pauVar22 = pauStack_138;
      if (puStack_148 != (undefined1 *)0x2) goto LAB_14089fa05;
LAB_14089fb95:
      pauStack_138 = pauVar22;
      if ((pauVar23 != (undefined1 (*) [16])0x0 & bStack_101) != 1) {
        if (lStack_190 == 0) {
          return;
        }
        plStack_378 = &lStack_188;
        pplStack_258 = &plStack_378;
        pdb_14149aed0(&UNK_143013f60,&pplStack_258);
        return;
      }
      lVar16 = 2;
      puStack_148 = (undefined1 *)0x2;
      pauStack_150 = (undefined1 (*) [16])0x0;
      plStack_130 = plVar19;
    } while( true );
  }
  puVar30 = &UNK_143013e78;
  lVar35 = 0x76;
  uVar20 = 0x76;
  lVar16 = pdb_1408a1670(&UNK_143013e78);
  if (lVar16 == 1) {
    if (0x76 < uVar20) {
LAB_1408a0b5c:
      pdb_142dc8070(&UNK_143013e78,0x76,0);
LAB_1408a0b7c:
      puVar30 = (undefined *)0x76;
      pdb_142dc8070(&UNK_143013e78,0x76);
LAB_1408a0ba0:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(puVar30,unaff_R13,&UNK_143311df8);
    }
    puVar30 = &UNK_143013e78;
    uVar17 = pdb_1408a1670(&UNK_143013e78);
    if ((uVar17 & 1) != 0) {
      if (0x76 < uVar20 + 2) goto LAB_1408a0b7c;
      lVar35 = 0x74 - uVar20;
      puVar30 = &UNK_143013e7a + uVar20;
    }
  }
  puVar28 = &UNK_14301364c;
  puVar32 = &UNK_1430135f0;
  do {
    bVar34 = puVar28[-1];
    uVar15 = (uint)(char)bVar34;
    plStack_118 = param_4;
    if ((char)bVar34 < '\0') {
      bVar3 = puVar28[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar28[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar28 + -4;
          puVar28 = puVar28 + -4;
          uVar15 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar28 = puVar28 + -3;
          uVar15 = bVar4 & 0xf;
        }
        uVar15 = bVar3 & 0x3f | uVar15 << 6;
      }
      else {
        puVar28 = puVar28 + -2;
        uVar15 = bVar3 & 0x1f;
      }
      uVar15 = (uint)(bVar34 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_14089f744;
LAB_14089f77e:
      unaff_R13 = &UNK_1430135f0;
      puVar32 = puVar28 + -0x1430135ef;
      if (puVar32 < (undefined *)0x5d) {
        plVar25 = (longlong *)(0x5c - (longlong)puVar32);
        puVar32 = puVar28 + 1;
        goto LAB_14089f7a9;
      }
      pdb_142dc8070(&UNK_1430135f0,0x5c,puVar32,0x5c,&UNK_143013fc0);
      goto LAB_1408a0b5c;
    }
    puVar28 = puVar28 + -1;
    if (uVar15 == 0x5c) goto LAB_14089f77e;
LAB_14089f744:
    if (uVar15 == 0x2f) goto LAB_14089f77e;
  } while (puVar28 != &UNK_1430135f0);
  plVar25 = (longlong *)0x5c;
LAB_14089f7a9:
  plVar18 = (longlong *)pdb_140e97000();
  if ((char)plVar18[0xd] != '\x01') goto LAB_1408a0a4a;
  do {
    param_1 = plVar19;
    if (*plVar18 == 0) {
      *plVar18 = -1;
      plStack_100 = plVar18;
      lVar35 = pdb_140e94f10(plVar18 + 1,puVar30,lVar35,puVar32,plVar25,1,0);
      param_1 = plStack_118;
      *plStack_100 = *plStack_100 + 1;
      lStack_190 = 1;
      param_4 = plStack_118;
      lStack_188 = lVar35;
      if (*_DAT_143ca4500 != '\x01') goto LAB_14089f8d9;
      plVar18 = (longlong *)pdb_140e97000();
      if (((char)plVar18[0xd] != '\x01') &&
         (plVar18 = (longlong *)pdb_142dde6e0(plVar18,0), plVar18 == (longlong *)0x0)) break;
      plVar25 = param_3;
      param_3 = param_2;
      param_2 = plVar19;
      if (*plVar18 == 0) {
        *plVar18 = -1;
        plStack_118 = plVar18;
        pdb_140e95370(plVar18 + 1,lVar35);
        *plStack_118 = *plStack_118 + 1;
        return;
      }
    }
    plVar18 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408a0a4a:
    plVar18 = (longlong *)pdb_142dde6e0(plVar18,0);
    plVar19 = param_1;
  } while (plVar18 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
  uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143013770,0x28,&UNK_143013a88);
LAB_14089ff05:
  pdb_1414aed60(&plStack_378,&pplStack_258);
  if (pcStack_370 == (char *)0x0) goto LAB_14089ff3c;
  if (*pcStack_370 == '\0') {
    bVar34 = (pcStack_370[2] | pcStack_370[1] | bVar34) & 1;
    bVar13 = true;
  }
  else if (*pcStack_370 == '\x01') {
    bVar34 = bVar34 | pcStack_370[1];
    bVar12 = true;
    iVar24 = iVar24 + 1;
    goto LAB_14089ff05;
  }
  iVar24 = iVar24 + 1;
  goto LAB_14089ff05;
LAB_14089ff3c:
  lVar16 = 3;
  if ((bVar34 & 1) == 0) {
    if (iVar24 == 0 || (bool)(bVar13 & (bVar12 ^ 1U))) {
      lVar16 = 1;
      fVar46 = fVar37;
      goto LAB_14089ff97;
    }
    lVar16 = 2;
    if ((bool)(bVar12 ^ 1U | bVar13)) {
      if (bVar13) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143013a38,0x1d,&UNK_143013a58);
      }
      if (bVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1430139f8,0x21,&UNK_143013a20);
      }
      lVar16 = 0;
      goto LAB_14089ff97;
    }
  }
  fVar46 = fVar38 * fVar37;
LAB_14089ff97:
  fStack_198 = fStack_2e0;
  lStack_1a0 = lStack_2e8;
  fVar42 = (float)_DAT_1430132a0;
  fVar44 = (float)((ulonglong)_DAT_1430132a0 >> 0x20);
  fVar37 = fStack_2f0 * fStack_2f0;
  fVar38 = fStack_2ec * fStack_2ec;
  fVar45 = fStack_2f4 * fStack_2f4 + fStack_2f8 * fStack_2f8;
  fVar40 = fVar46 * fStack_2f0 + fVar44 * fStack_2f4 + fVar42 * fStack_2f8;
  fVar40 = fVar40 + fVar40;
  fVar39 = fStack_2ec + fStack_2ec;
  lStack_2e8 = CONCAT44((float)((ulonglong)lStack_2e8 >> 0x20) +
                        fVar39 * (fStack_2f0 * fVar42 - fVar46 * fStack_2f8) +
                        fVar40 * fStack_2f4 + (fVar38 - (fVar45 + fVar37)) * fVar44,
                        (float)lStack_2e8 +
                        fVar39 * (fStack_2f4 * fVar46 - fVar44 * fStack_2f0) +
                        fVar40 * fStack_2f8 + (fVar38 - (fVar45 + fVar37)) * fVar42);
  fStack_2e0 = fVar39 * (fStack_2f8 * fVar44 - fVar42 * fStack_2f4) +
               fVar40 * fStack_2f0 + (fVar38 - (fVar45 + fVar37)) * fVar46 + fStack_2e0;
  if (*plStack_100 == 0 && plStack_100[1] == 0) {
    plStack_100[1] = 0;
    *plStack_100 = 1;
    plStack_100[2] = CONCAT44(fStack_2f4,fStack_2f8);
    plStack_100[3] = CONCAT44(fStack_2ec,fStack_2f0);
    plStack_100[4] = lStack_2e8;
    plStack_100[5] = CONCAT44(uStack_2dc,fStack_2e0);
    plStack_100[6] = lStack_2d8;
    plStack_100[7] = lStack_2d0;
                    /* WARNING: Could not recover jumptable at 0x0001408a00c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143014058 + *(int *)(&UNK_143014058 + lVar16 * 4)))
              (&UNK_143014058,&lStack_2e8,&pplStack_258);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
}

