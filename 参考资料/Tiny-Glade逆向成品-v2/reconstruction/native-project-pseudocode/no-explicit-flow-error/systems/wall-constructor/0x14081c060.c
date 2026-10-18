// VA 0x14081c060, PDB extent 7879 bytes
// system_wall_constructor::construct_wooden_walls::maintain_wooden_freeform_wall_boards
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::maintain_wooden_freeform_wall_boards
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/mod.rs
   Extent: 7879 */

void pdb_14081c060(undefined8 *param_1,undefined8 *param_2,byte *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *arg0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  code *pcVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  code *pcVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  byte bVar25;
  char *pcVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  float *pfVar30;
  ushort uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 uVar36;
  bool bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  char cVar46;
  undefined1 unaff_XMM8_Bc;
  char cVar47;
  undefined1 unaff_XMM8_Bd;
  char cVar48;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  char cVar49;
  undefined1 unaff_XMM8_Bg;
  char cVar50;
  undefined1 unaff_XMM8_Bh;
  char cVar51;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  char cVar52;
  undefined1 unaff_XMM8_Bk;
  char cVar53;
  undefined1 unaff_XMM8_Bl;
  char cVar54;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  char cVar55;
  undefined1 unaff_XMM8_Bo;
  char cVar56;
  undefined1 unaff_XMM8_Bp;
  char cVar57;
  float fVar61;
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  longlong lStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong lStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_280;
  ulonglong *puStack_278;
  undefined8 uStack_270;
  char *pcStack_268;
  char *pcStack_260;
  longlong lStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  undefined4 *puStack_240;
  longlong lStack_238;
  undefined4 *puStack_230;
  longlong *plStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  ulonglong uStack_210;
  byte *pbStack_208;
  ulonglong uStack_200;
  undefined4 uStack_1f4;
  longlong *plStack_1f0;
  longlong lStack_1e8;
  longlong *plStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  code *pcStack_1a8;
  longlong *plStack_1a0;
  longlong lStack_198;
  longlong *plStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  undefined4 uStack_174;
  code *pcStack_170;
  undefined1 uStack_161;
  byte *pbStack_160;
  ulonglong uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined4 *puStack_d0;
  longlong *plStack_c8;
  byte *pbStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  auVar60._0_8_ = *param_1;
  puVar12 = (undefined8 *)pdb_1413e4400(auVar60._0_8_,&UNK_1433056b0);
  if ((puVar12 == (undefined8 *)0x0) ||
     (lStack_188 = (**(code **)(puVar12[1] + 0x18))(*puVar12), lStack_188 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430095f8);
  }
  pbStack_c0 = param_3;
  puVar12 = (undefined8 *)pdb_1413e4400(auVar60._0_8_);
  if ((puVar12 == (undefined8 *)0x0) ||
     (lStack_1c8 = (**(code **)(puVar12[1] + 0x18))(*puVar12), lStack_1c8 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143009610);
  }
  lStack_1c0 = lStack_188;
  lStack_1b8 = lStack_1c8;
  pdb_140a6a430();
  puVar17 = (ulonglong *)*param_9;
  lVar35 = param_9[1];
  uVar27 = *puVar17;
  uVar32 = 0;
  uVar18 = uVar27 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar27 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar18 = uVar32;
  }
  uVar22 = uVar27 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar27 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar22 = uVar32;
  }
  lVar34 = uVar18 * 0x10 + *(longlong *)(lVar35 + 8);
  uVar27 = *(ulonglong *)(lVar35 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar35 + 0x10) < uVar18) {
    lVar34 = 8;
    uVar27 = uVar32;
  }
  lVar13 = uVar22 * 0x10 + *(longlong *)(lVar35 + 0x28);
  uVar18 = *(ulonglong *)(lVar35 + 0x30) - uVar22;
  if (*(ulonglong *)(lVar35 + 0x30) < uVar22) {
    lVar13 = 8;
    uVar18 = uVar32;
  }
  *puVar17 = (*(longlong *)(lVar35 + 0x40) - uVar18) - uVar27;
  lVar23 = uVar18 * 0x10 + lVar13;
  uStack_b8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plStack_c8 = (longlong *)*param_2;
  puStack_d0 = (undefined4 *)param_2[2];
  plStack_1e0 = plStack_c8 + 6;
  plStack_1f0 = plStack_c8 + 0xc;
  uStack_174 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_198 = *param_4;
  puStack_230 = (undefined4 *)param_4[2];
  plStack_1a0 = plStack_c8 + 4;
  plStack_190 = plStack_c8 + 10;
  plStack_228 = plStack_c8 + 0x10;
  lStack_1e8 = lStack_198 + 0x20;
  lVar35 = lVar34;
  do {
    if ((lVar35 == 0) || (lVar35 == uVar27 * 0x10 + lVar34)) {
      if ((lVar13 == 0) || (lVar13 == lVar23)) break;
      lVar33 = 0;
      lVar11 = lVar13 + 0x10;
      lVar35 = lVar13;
    }
    else {
      lVar33 = lVar35 + 0x10;
      lVar11 = lVar13;
    }
    lVar13 = lVar11;
    lVar35 = lVar35 + 8;
    *puVar17 = *puVar17 + 1;
    *puStack_d0 = uStack_b8;
    auVar60._0_8_ = pdb_1400af0a0(plStack_1a0,lVar35);
    pdb_140269b90(&pcStack_138,plStack_c8,auVar60._0_8_,lVar35);
    pcVar21 = pcStack_130;
    pcStack_138 = pcStack_130;
    pcStack_130 = uStack_128;
    if (pcVar21 != (code *)0x0) {
      pdb_1413ff1c0(&pcStack_138);
    }
    *puStack_d0 = uStack_b8;
    auVar60._0_8_ = pdb_1400af0a0(plStack_190,lVar35);
    pdb_140269b90(&pcStack_138,plStack_1e0,auVar60._0_8_,lVar35);
    pcVar21 = pcStack_130;
    pcStack_138 = pcStack_130;
    pcStack_130 = uStack_128;
    if (pcVar21 != (code *)0x0) {
      pdb_1413ff1c0(&pcStack_138);
    }
    *puStack_d0 = uStack_b8;
    auVar60._0_8_ = pdb_1400af0a0(plStack_228,lVar35);
    pdb_140caba90(&pcStack_138,plStack_1f0,auVar60._0_8_,lVar35);
    *puStack_230 = uStack_174;
    auVar60._0_8_ = pdb_1400af0a0(lStack_1e8,lVar35);
    pdb_14140a570(&pcStack_138,lStack_198,auVar60._0_8_,lVar35);
    lVar35 = lVar33;
    if ((char)pcStack_138 != '\0') {
      pcStack_148 = uStack_128;
      uStack_140 = uStack_120;
      pcStack_150 = (code *)0x1;
      pdb_140966b30(&pcStack_148);
      if (pcStack_148 != (code *)0x0) {
        pdb_1413fffc0(&pcStack_148);
      }
    }
  } while( true );
  puStack_278 = (ulonglong *)*param_8;
  lVar35 = param_8[1];
  uVar27 = *puStack_278;
  uVar32 = 0;
  uVar18 = uVar27 - *(ulonglong *)(lVar35 + 0x18);
  if (uVar27 < *(ulonglong *)(lVar35 + 0x18)) {
    uVar18 = uVar32;
  }
  uVar22 = uVar27 - *(ulonglong *)(lVar35 + 0x38);
  if (uVar27 < *(ulonglong *)(lVar35 + 0x38)) {
    uVar22 = uVar32;
  }
  pcVar26 = (char *)(uVar18 * 0x68 + *(longlong *)(lVar35 + 8));
  uVar27 = *(ulonglong *)(lVar35 + 0x10) - uVar18;
  if (*(ulonglong *)(lVar35 + 0x10) < uVar18) {
    pcVar26 = (char *)0x8;
    uVar27 = uVar32;
  }
  pcVar14 = (char *)(uVar22 * 0x68 + *(longlong *)(lVar35 + 0x28));
  uVar18 = *(ulonglong *)(lVar35 + 0x30) - uVar22;
  if (*(ulonglong *)(lVar35 + 0x30) < uVar22) {
    pcVar14 = (char *)0x8;
    uVar18 = uVar32;
  }
  *puStack_278 = (*(longlong *)(lVar35 + 0x40) - uVar18) - uVar27;
  uVar10 = _UNK_142e4e65c;
  uVar9 = _UNK_142e47bfc;
  uVar8 = _UNK_142e47bf8;
  uVar7 = _UNK_142e378e4;
  pcStack_268 = pcVar26 + uVar27 * 0x68;
  pcStack_260 = pcVar14 + uVar18 * 0x68;
  uStack_248 = *param_7;
  uStack_270 = *(undefined8 *)pbStack_c0;
  uStack_280 = *param_5;
  uStack_218 = *param_6;
  uStack_1f4 = *(undefined4 *)((longlong)param_10 + 0x1c);
  lStack_220 = *param_10;
  puStack_240 = (undefined4 *)param_10[2];
  lStack_258 = lStack_188 + 0x78;
  lStack_188 = lStack_188 + 0x58;
  lStack_250 = lStack_1c8 + 0x78;
  lStack_1c8 = lStack_1c8 + 0x58;
  iVar3 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                 CONCAT13(unaff_XMM8_Bd,
                          CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar46 = (char)((uint)iVar3 >> 8);
  cVar47 = (char)((uint)iVar3 >> 0x10);
  cVar48 = (char)((uint)iVar3 >> 0x18);
  iVar4 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                 CONCAT13(unaff_XMM8_Bh,
                          CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar49 = (char)((uint)iVar4 >> 8);
  cVar50 = (char)((uint)iVar4 >> 0x10);
  cVar51 = (char)((uint)iVar4 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                 CONCAT13(unaff_XMM8_Bl,
                          CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar52 = (char)((uint)iVar5 >> 8);
  cVar53 = (char)((uint)iVar5 >> 0x10);
  cVar54 = (char)((uint)iVar5 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                 CONCAT13(unaff_XMM8_Bp,
                          CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar55 = (char)((uint)iVar6 >> 8);
  cVar56 = (char)((uint)iVar6 >> 0x10);
  cVar57 = (char)((uint)iVar6 >> 0x18);
  lStack_238 = lStack_220 + 0x20;
  uStack_1b0 = 0;
  do {
    if ((pcVar26 == (char *)0x0) || (pcVar26 == pcStack_268)) {
      if ((pcVar14 == (char *)0x0) || (pcVar14 == pcStack_260)) goto LAB_14081d6be;
      pcStack_1d8 = pcVar14 + 0x68;
      pcStack_1d0 = (char *)0x0;
      pcVar26 = pcVar14;
    }
    else {
      pcStack_1d0 = pcVar26 + 0x68;
      pcStack_1d8 = pcVar14;
    }
    *puStack_278 = *puStack_278 + 1;
    if (*pcVar26 == '\0') {
      *puStack_d0 = uStack_b8;
      auVar60._0_8_ = pdb_1400af0a0(plStack_228,pcVar26 + 0x58);
      pdb_140caba90(&pcStack_138,plStack_1f0,auVar60._0_8_,pcVar26 + 0x58);
    }
    else {
      *puStack_d0 = uStack_b8;
      lVar35 = *(longlong *)(pcVar26 + 0x58);
      lVar34 = lVar35;
      lVar13 = pdb_141408950(plStack_1f0,lVar35,*(undefined8 *)(pcVar26 + 8));
      if (((lVar13 == 1) && (lVar34 != *(longlong *)(pcVar26 + 8))) &&
         (lVar35 = pdb_140b54f80(uStack_248,lVar35,&UNK_143009688), lVar35 != 0)) {
        uVar27 = *(ulonglong *)(lVar35 + 0x48);
        if (uVar27 == 0) {
          auVar60._0_8_ = 0;
          fVar63 = 0.0;
        }
        else {
          if (uVar27 < 4) {
            auVar58 = ZEXT816(0);
            fVar63 = 0.0;
            uVar18 = 0;
          }
          else {
            pfVar30 = (float *)(*(longlong *)(lVar35 + 0x40) + 0x2c);
            auVar58 = ZEXT816(0);
            fVar63 = 0.0;
            uVar18 = 0;
            do {
              fVar61 = auVar58._8_4_;
              fVar62 = auVar58._12_4_;
              fVar63 = fVar63 + pfVar30[-9] + pfVar30[-6] + pfVar30[-3] + *pfVar30;
              auVar58._0_8_ =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar30 + -2) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(pfVar30 + -5) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(pfVar30 + -8) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(pfVar30 + -0xb) >> 0x20) +
                            auVar58._4_4_,
                            (float)*(undefined8 *)(pfVar30 + -2) +
                            (float)*(undefined8 *)(pfVar30 + -5) +
                            (float)*(undefined8 *)(pfVar30 + -8) +
                            (float)*(undefined8 *)(pfVar30 + -0xb) + auVar58._0_4_);
              auVar58._8_4_ = fVar61 + 0.0 + 0.0 + 0.0 + 0.0;
              auVar58._12_4_ = fVar62 + 0.0 + 0.0 + 0.0 + 0.0;
              uVar18 = uVar18 + 4;
              pfVar30 = pfVar30 + 0xc;
            } while ((uVar27 & 0xfffffffffffffffc) != uVar18);
            auVar60._0_8_ = auVar58._0_8_;
            if ((uVar27 & 3) == 0) goto LAB_14081c759;
          }
          lVar35 = *(longlong *)(lVar35 + 0x40) + uVar18 * 0xc;
          lVar34 = 0;
          do {
            auVar60._0_8_ = *(undefined8 *)(lVar35 + lVar34);
            auVar60._0_8_ =
                 CONCAT44(auVar58._4_4_ + (float)((ulonglong)auVar60._0_8_ >> 0x20),
                          auVar58._0_4_ + (float)auVar60._0_8_);
            auVar60._8_4_ = auVar58._8_4_ + 0.0;
            auVar60._12_4_ = auVar58._12_4_ + 0.0;
            fVar63 = fVar63 + *(float *)(lVar35 + 8 + lVar34);
            lVar34 = lVar34 + 0xc;
            auVar58 = auVar60;
          } while ((ulonglong)(((uint)uVar27 & 3) << 2) * 3 != lVar34);
        }
LAB_14081c759:
        *puStack_240 = uStack_1f4;
        lVar35 = *(longlong *)(lStack_220 + 0x30);
        uVar36 = *(undefined8 *)(lStack_220 + 0x40);
        if (lVar35 == *(longlong *)(lStack_220 + 0x20)) {
          pdb_142d7ede0(lStack_238);
        }
        auVar59._8_4_ = fVar63;
        auVar59._0_8_ = auVar60._0_8_;
        auVar59._12_4_ = uVar10;
        auVar39._0_4_ = (float)(longlong)uVar27;
        auVar39._4_4_ = auVar39._0_4_;
        auVar39._8_4_ = auVar39._0_4_;
        auVar39._12_4_ = uVar7;
        auVar60 = divps(auVar59,auVar39);
        lVar34 = *(longlong *)(lStack_220 + 0x28);
        *(undefined8 *)(lVar34 + lVar35 * 0x28) = uVar36;
        *(undefined1 *)(lVar34 + 8 + lVar35 * 0x28) = 0x15;
        *(undefined1 (*) [16])(lVar34 + 0x10 + lVar35 * 0x28) = auVar60;
        *(undefined1 *)(lVar34 + 0x20 + lVar35 * 0x28) = 0;
        *(longlong *)(lStack_220 + 0x30) = lVar35 + 1;
        *(longlong *)(lStack_220 + 0x40) = *(longlong *)(lStack_220 + 0x40) + 1;
      }
    }
    pcVar21 = *(code **)(pcVar26 + 0x58);
    auVar60._0_8_ = *(undefined8 *)(pcVar26 + 0x48);
    lVar35 = *(longlong *)(pcVar26 + 0x50);
    *puStack_230 = uStack_174;
    pcStack_1a8 = pcVar21;
    pcStack_170 = pcVar21;
    lVar34 = pdb_140a69d30(uStack_270);
    pbStack_c0 = (byte *)0x4;
    if (lVar34 == 0) {
LAB_14081cb00:
      uVar27 = 0;
LAB_14081cb02:
      pbStack_160 = pbStack_c0;
      uStack_158 = uVar27;
      auVar60._0_8_ = pdb_1400af0a0(lStack_1e8,&pcStack_1a8);
      pbStack_160 = pbStack_c0;
      uStack_158 = uVar27;
      pdb_14140a570(&pcStack_138,lStack_198,auVar60._0_8_,&pcStack_1a8);
      if ((char)pcStack_138 != '\0') {
        pcStack_148 = uStack_128;
        uStack_140 = uStack_120;
        pcStack_150 = (code *)0x1;
        uStack_d8 = uVar27;
        pdb_140966b30(&pcStack_148);
        uVar27 = uStack_d8;
        if (pcStack_148 != (code *)0x0) {
          uStack_158 = uStack_d8;
          pbStack_160 = pbStack_c0;
          pdb_1413fffc0(&pcStack_148);
        }
      }
      lVar35 = 0;
      if (uVar27 != 0) goto LAB_14081cf8f;
      lVar34 = *(longlong *)(pcVar26 + 0x20);
      lVar35 = 0;
    }
    else {
      pcVar15 = (code *)pdb_140a6a370(lVar34);
      uVar27 = (longlong)pcVar21 - (longlong)pcVar15;
      if (0x7ffffffffffffffc < uVar27) {
        uVar36 = 0;
        uStack_180 = uVar27;
LAB_14081d6af:
        pdb_142dc7e2a(uVar36,uStack_180);
LAB_14081d6be:
        if (((uStack_1b0 & 1) != 0) && (*_DAT_143ca8e90 != 0)) {
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)&UNK_143009655;
          uStack_128 = (code *)0x2f;
          uStack_120 = 0;
          pcStack_118 = (code *)&UNK_1430095b3;
          pcStack_110 = (code *)0x41;
          uStack_108 = 1;
          puStack_100 = &UNK_143009655;
          lStack_f8 = 0x2f;
          uStack_f0 = 0xa200000001;
          puStack_e8 = &UNK_143009628;
          uStack_e0 = 0x5b;
          pdb_140f332f0(&uStack_161,&pcStack_138);
        }
        return;
      }
      if (pcVar21 == pcVar15) goto LAB_14081cb00;
      pdb_14007ee60();
      uVar36 = 4;
      uStack_180 = uVar27;
      pbStack_c0 = pub_1406abab0(uVar27,4);
      if (pbStack_c0 == (byte *)0x0) goto LAB_14081d6af;
      uVar27 = uVar27 / 0x30;
      lVar34 = 0;
      uStack_d8 = uVar27;
      do {
        pdb_140a6a320(&pcStack_138,pcVar15 + lVar34 + 0x10,uStack_280);
        *(code **)(pbStack_c0 + lVar34 + 0x20) = pcStack_118;
        *(code **)((longlong)(pbStack_c0 + lVar34 + 0x20) + 8) = pcStack_110;
        pbVar16 = pbStack_c0 + lVar34 + 0x10;
        *(undefined4 *)pbVar16 = (undefined4)uStack_128;
        *(undefined4 *)(pbVar16 + 4) = uStack_128._4_4_;
        *(undefined4 *)(pbVar16 + 8) = (undefined4)uStack_120;
        *(undefined4 *)(pbVar16 + 0xc) = uStack_120._4_4_;
        *(code **)(pbStack_c0 + lVar34) = pcStack_138;
        *(code **)((longlong)(pbStack_c0 + lVar34) + 8) = pcStack_130;
        lVar34 = lVar34 + 0x30;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
      uVar27 = uStack_d8;
      if (lVar35 == 0) goto LAB_14081cb02;
      pdb_14007ee60();
      uVar27 = uStack_180;
      pbVar16 = pub_1406abab0(uStack_180,1);
      if (pbVar16 == (byte *)0x0) {
        uStack_158 = uStack_d8;
        pbStack_160 = pbStack_c0;
        pdb_142dc7e2a(1,uVar27);
                    /* WARNING: Does not return */
        pcVar21 = (code *)invalidInstructionException();
        (*pcVar21)();
      }
      uStack_210 = uVar27;
      pbStack_208 = pbVar16;
      pub_142e32760(pbVar16,pbStack_c0,uVar27);
      uStack_200 = uVar27;
      lVar35 = lVar35 * 4;
      pdb_142d7f1b0(&uStack_210,uVar27,lVar35,1,1);
      uVar27 = uStack_200;
      pbVar16 = pbStack_208;
      pub_142e32760(pbStack_208 + uStack_200,auVar60._0_8_,lVar35);
      lVar35 = uVar27 + lVar35;
      uStack_200 = lVar35;
      auVar60._0_8_ = pdb_140a92040(uStack_218);
      uVar36 = pdb_140e1cff0(lVar35,0x210);
      pdb_141472d90(&pcStack_138,auVar60._0_8_,&UNK_1430095a8,0xb,uVar36,pbVar16,lVar35);
      pcVar21 = pcStack_130;
      if (pcStack_138 == (code *)0xb) {
        pcStack_150 = pcStack_130;
        uStack_b1 = 1;
        lVar35 = pdb_140a92040(uStack_218);
        pcVar15 = *(code **)(lVar35 + 0x520);
        auVar60._0_8_ = *(undefined8 *)(lVar35 + 0x658);
        uStack_b1 = 1;
        puVar17 = (ulonglong *)pdb_140e17330(&pcStack_150);
        uStack_128 = (code *)*puVar17;
        pcStack_138 = (code *)CONCAT44(pcStack_138._4_4_,0x3b9e8321);
        pcStack_130 = (code *)0x0;
        lVar35 = (*pcVar15)(auVar60._0_8_,&pcStack_138);
        uStack_b1 = 0;
        lVar34 = lVar35;
        auVar60._0_8_ = pdb_1406d0830(pcVar21);
        uStack_b1 = 0;
        pdb_141408ef0(&pcStack_138,lStack_198,pcStack_170,auVar60._0_8_,lVar34);
        uVar27 = uStack_d8;
        if ((pcStack_138 != (code *)0x0) &&
           (pdb_140966b30(&pcStack_130), uVar27 = uStack_d8, pcStack_130 != (code *)0x0)) {
          uStack_b1 = 0;
          pdb_1413fffc0(&pcStack_130);
          uVar27 = uStack_d8;
        }
      }
      else {
        pcVar21 = (code *)0x0;
        if ((code *)0x7 < pcStack_138) {
          pcVar21 = pcStack_138 + -8;
        }
        if (pcVar21 == (code *)0x0) {
          pcVar15 = pcStack_118;
          arg0 = pcStack_110;
          if (((pcStack_138 < (code *)0x6) && ((0x32UL >> ((ulonglong)pcStack_138 & 0x3f) & 1) != 0)
              ) && (pcStack_130 != (code *)0x0)) {
            pub_1406abac0((byte *)uStack_128,(ulonglong)pcStack_130,1);
            pcVar15 = pcStack_118;
            arg0 = pcStack_110;
          }
joined_r0x00014081cec6:
          if (pcVar15 != (code *)0x0) {
            pub_1406abac0((byte *)arg0,(ulonglong)pcVar15,1);
          }
        }
        else {
          pcVar15 = pcStack_130;
          arg0 = uStack_128;
          if (pcVar21 != (code *)0x1) goto joined_r0x00014081cec6;
          pdb_1404b83f0(&pcStack_130);
        }
        auVar60._0_8_ = pdb_1400af0a0(lStack_1e8,&pcStack_1a8);
        pdb_14140a570(&pcStack_138,lStack_198,auVar60._0_8_,&pcStack_1a8);
        if ((char)pcStack_138 != '\0') {
          pcStack_148 = uStack_128;
          uStack_140 = uStack_120;
          pcStack_150 = (code *)0x1;
          pdb_140966b30(&pcStack_148);
          if (pcStack_148 != (code *)0x0) {
            pdb_1413fffc0(&pcStack_148);
          }
        }
        lVar35 = 0;
        uVar27 = uStack_d8;
      }
      uStack_d8 = uVar27;
      if (uStack_210 != 0) {
        pub_1406abac0(pbVar16,uStack_210,1);
        uVar27 = uStack_d8;
      }
LAB_14081cf8f:
      pub_1406abac0(pbStack_c0,uVar27 * 0x30,4);
      lVar34 = *(longlong *)(pcVar26 + 0x20);
    }
    if (lVar34 != 0) {
      *puStack_d0 = uStack_b8;
      pcStack_138 = pcStack_170;
      uVar18 = pdb_1400af0a0(plStack_1a0);
      lVar34 = *plStack_c8;
      bVar25 = (byte)(uVar18 >> 0x38);
      bVar38 = bVar25 >> 1;
      auVar60 = ZEXT216(CONCAT11(bVar38,bVar38));
      auVar60 = pshuflw(auVar60,auVar60,0);
      lVar13 = 0;
      uVar27 = uVar18;
      while( true ) {
        uVar27 = uVar27 & plStack_c8[1];
        pcVar14 = (char *)(lVar34 + uVar27);
        auVar44[0] = -(*pcVar14 == auVar60[0]);
        auVar44[1] = -(pcVar14[1] == auVar60[1]);
        auVar44[2] = -(pcVar14[2] == auVar60[2]);
        auVar44[3] = -(pcVar14[3] == auVar60[3]);
        auVar44[4] = -(pcVar14[4] == auVar60[4]);
        auVar44[5] = -(pcVar14[5] == auVar60[5]);
        auVar44[6] = -(pcVar14[6] == auVar60[6]);
        auVar44[7] = -(pcVar14[7] == auVar60[7]);
        auVar44[8] = -(pcVar14[8] == auVar60[0]);
        auVar44[9] = -(pcVar14[9] == auVar60[1]);
        auVar44[10] = -(pcVar14[10] == auVar60[2]);
        auVar44[0xb] = -(pcVar14[0xb] == auVar60[3]);
        auVar44[0xc] = -(pcVar14[0xc] == auVar60[4]);
        auVar44[0xd] = -(pcVar14[0xd] == auVar60[5]);
        auVar44[0xe] = -(pcVar14[0xe] == auVar60[6]);
        auVar44[0xf] = -(pcVar14[0xf] == auVar60[7]);
        uVar31 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar28 = (uint)uVar31;
        while (uVar31 != 0) {
          uVar29 = 0;
          for (uVar2 = uVar28; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar29 = uVar29 + 1;
          }
          uVar32 = uVar29 + uVar27 & plStack_c8[1];
          if (*(code **)(lVar34 + -0x18 + uVar32 * -0x18) == pcStack_170) {
            pcVar21 = *(code **)(lVar34 + uVar32 * -0x18 + -8);
            goto joined_r0x00014081ccc5;
          }
          uVar31 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar31);
        }
        auVar40[0] = -(*pcVar14 == (char)iVar3);
        auVar40[1] = -(pcVar14[1] == cVar46);
        auVar40[2] = -(pcVar14[2] == cVar47);
        auVar40[3] = -(pcVar14[3] == cVar48);
        auVar40[4] = -(pcVar14[4] == (char)iVar4);
        auVar40[5] = -(pcVar14[5] == cVar49);
        auVar40[6] = -(pcVar14[6] == cVar50);
        auVar40[7] = -(pcVar14[7] == cVar51);
        auVar40[8] = -(pcVar14[8] == (char)iVar5);
        auVar40[9] = -(pcVar14[9] == cVar52);
        auVar40[10] = -(pcVar14[10] == cVar53);
        auVar40[0xb] = -(pcVar14[0xb] == cVar54);
        auVar40[0xc] = -(pcVar14[0xc] == (char)iVar6);
        auVar40[0xd] = -(pcVar14[0xd] == cVar55);
        auVar40[0xe] = -(pcVar14[0xe] == cVar56);
        auVar40[0xf] = -(pcVar14[0xf] == cVar57);
        uVar31 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        if (uVar31 != 0) break;
        uVar27 = uVar27 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
      if (plStack_c8[2] == 0) {
        pdb_142dd97b0(plStack_c8,1,plStack_1a0,CONCAT71((uint7)(byte)(uVar31 >> 8),1));
      }
      pdb_14007ee60();
      pbVar16 = pub_1406abab0(0x20,8);
      if (pbVar16 != (byte *)0x0) {
        pbVar16[0] = 0;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        pbVar16[4] = 0;
        pbVar16[5] = 0;
        pbVar16[6] = 0;
        pbVar16[7] = 0;
        pbVar16[8] = 4;
        pbVar16[9] = 0;
        pbVar16[10] = 0;
        pbVar16[0xb] = 0;
        pbVar16[0xc] = 0;
        pbVar16[0xd] = 0;
        pbVar16[0xe] = 0;
        pbVar16[0xf] = 0;
        pbVar16[0x10] = 0;
        pbVar16[0x11] = 0;
        pbVar16[0x12] = 0;
        pbVar16[0x13] = 0;
        pbVar16[0x14] = 0;
        pbVar16[0x15] = 0;
        pbVar16[0x16] = 0;
        pbVar16[0x17] = 0;
        pbVar16[0x18] = 0;
        lVar13 = *(longlong *)(lStack_1c0 + 0x48);
LAB_14081cd32:
        lVar34 = *(longlong *)(lVar13 + 8);
        do {
          if (lVar34 == -1) goto LAB_14081cd32;
          if (lVar34 < 0) goto LAB_14081d7c2;
          LOCK();
          lVar23 = *(longlong *)(lVar13 + 8);
          bVar37 = lVar34 == lVar23;
          if (bVar37) {
            *(longlong *)(lVar13 + 8) = lVar34 + 1;
            lVar23 = lVar34;
          }
          UNLOCK();
          lVar34 = lVar23;
        } while (!bVar37);
        pauVar1 = (undefined1 (*) [16])*plStack_c8;
        uVar27 = plStack_c8[1];
        uVar18 = uVar18 & uVar27;
        auVar60 = *(undefined1 (*) [16])(*pauVar1 + uVar18);
        uVar31 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
        uVar28 = (uint)uVar31;
        if (uVar31 == 0) {
          lVar34 = 0x10;
          do {
            uVar18 = uVar18 + lVar34 & uVar27;
            auVar60 = *(undefined1 (*) [16])(*pauVar1 + uVar18);
            lVar34 = lVar34 + 0x10;
            uVar28 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
          } while (uVar28 == 0);
        }
        uVar29 = 0;
        for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
          uVar29 = uVar29 + 1;
        }
        uVar18 = uVar29 + uVar18 & uVar27;
        bVar38 = (*pauVar1)[uVar18];
        if (-1 < (char)bVar38) {
          auVar60 = *pauVar1;
          uVar28 = 0;
          for (uVar29 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar29 & 1) == 0;
              uVar29 = uVar29 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          uVar18 = (ulonglong)uVar28;
          bVar38 = (*pauVar1)[uVar18];
        }
        bVar25 = bVar25 >> 1;
        (*pauVar1)[uVar18] = bVar25;
        pauVar1[1][uVar18 - 0x10 & uVar27] = bVar25;
        *(code **)((longlong)pauVar1 + uVar18 * -0x18 + -0x18) = pcStack_170;
        *(longlong *)((longlong)pauVar1 + uVar18 * -0x18 + -0x10) = lVar13;
        *(byte **)((longlong)pauVar1 + uVar18 * -0x18 + -8) = pbVar16;
        auVar41._8_4_ = uVar8;
        auVar41._0_8_ = (ulonglong)bVar38 & 0xffffffffffffff01;
        auVar41._12_4_ = uVar9;
        plStack_c8[2] = plStack_c8[2] - ((ulonglong)bVar38 & 0xffffffffffffff01);
        plStack_c8[3] = plStack_c8[3] - auVar41._8_8_;
        pcVar21 = *(code **)((longlong)pauVar1 + uVar18 * -0x18 + -8);
joined_r0x00014081ccc5:
        if (pcVar21 == (code *)0x0) goto LAB_14081d7f8;
        pcVar15 = pcVar21 + 0x18;
        LOCK();
        bVar37 = pcVar21[0x18] == (code)0x0;
        if (bVar37) {
          pcVar21[0x18] = (code)0x1;
        }
        UNLOCK();
        if (bVar37) {
          pdb_140e9a150(pcVar15);
          lVar34 = *(longlong *)(pcVar21 + 0x10);
          if (lVar34 == 0) goto LAB_14081d2b0;
LAB_14081ce2c:
          piVar19 = (int *)(*(longlong *)(pcVar21 + 8) + lVar34 * 4 + -4);
          if (piVar19 == (int *)0x0) goto LAB_14081d2b0;
          iVar20 = *piVar19;
          pcVar15 = *(code **)(lStack_1c0 + 0x10);
        }
        else {
          pdb_142dbd1a0(pcVar15,CONCAT71((int7)((ulonglong)lVar13 >> 8),1),1000000000);
          pdb_140e9a150(pcVar15);
          lVar34 = *(longlong *)(pcVar21 + 0x10);
          if (lVar34 != 0) goto LAB_14081ce2c;
LAB_14081d2b0:
          pcVar15 = *(code **)(lStack_1c0 + 0x10);
          if (pcVar15 == (code *)0x0) goto LAB_14081d804;
          iVar20 = (int)pcVar15 + -1;
        }
        pcStack_138 = *(code **)(lStack_1c0 + 8);
        uStack_128 = *(code **)(lStack_1c0 + 0x18);
        uStack_120 = *(undefined8 *)(lStack_1c0 + 0x20);
        pcStack_110 = *(code **)(lStack_1c0 + 0x28);
        uStack_108 = *(undefined8 *)(lStack_1c0 + 0x30);
        uStack_f0 = *(undefined8 *)(lStack_1c0 + 0x38);
        puStack_e8 = *(undefined **)(lStack_1c0 + 0x40);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
        puStack_100 = (undefined *)lStack_258;
        lStack_f8 = lStack_188;
        pcStack_130 = pcVar15;
        pcStack_118 = pcVar21;
        pdb_1413f7bd0(&pcStack_138);
        puVar12 = *(undefined8 **)(pcVar26 + 0x18);
        puVar24 = puVar12 + *(longlong *)(pcVar26 + 0x20) * 10;
        do {
          if (puVar12 == puVar24) goto LAB_14081d3ab;
          uStack_290 = 0;
          uStack_2d8 = *puVar12;
          uStack_2d0 = puVar12[1];
          uStack_2c8 = *(undefined4 *)(puVar12 + 2);
          uStack_2c4 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uStack_2c0 = *(undefined4 *)(puVar12 + 3);
          uStack_2bc = *(undefined4 *)((longlong)puVar12 + 0x1c);
          uStack_2b8 = puVar12[4];
          uStack_2b0 = puVar12[5];
          if (lVar35 != 0) {
            uStack_290 = *(undefined4 *)(puVar12 + 9);
          }
          uStack_28c = *(undefined4 *)((longlong)puVar12 + 0x4c);
          uStack_2a8 = puVar12[6];
          uStack_2a0 = puVar12[7];
          lStack_298 = lVar35;
          auVar60._0_8_ = pdb_1413f6d90(&pcStack_138,&uStack_2d8);
          puVar12 = puVar12 + 10;
        } while ((char)auVar60._0_8_ == '\0');
        uStack_1b0 = CONCAT71((int7)((ulonglong)auVar60._0_8_ >> 8),1);
LAB_14081d3ab:
        pcVar15 = pcStack_118;
        pcVar21 = pcStack_118 + 0x18;
        pdb_140e9a350();
        LOCK();
        bVar37 = pcVar15[0x18] == (code)0x1;
        if (bVar37) {
          pcVar15[0x18] = (code)0x0;
        }
        UNLOCK();
        if (bVar37) {
          lVar34 = *(longlong *)(pcVar26 + 0x38);
          pcVar21 = pcStack_170;
        }
        else {
          pdb_142dbcef0(pcVar21,0);
          lVar34 = *(longlong *)(pcVar26 + 0x38);
          pcVar21 = pcStack_170;
        }
        goto joined_r0x00014081d3d5;
      }
LAB_14081d810:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    *puStack_d0 = uStack_b8;
    auVar60._0_8_ = pdb_1400af0a0(plStack_1a0,pcVar26 + 0x58);
    pdb_140269b90(&pcStack_138,plStack_c8,auVar60._0_8_,pcVar26 + 0x58);
    pcVar21 = pcStack_130;
    pcStack_138 = pcStack_130;
    pcStack_130 = uStack_128;
    if (pcVar21 != (code *)0x0) {
      pdb_1413ff1c0(&pcStack_138);
    }
    lVar34 = *(longlong *)(pcVar26 + 0x38);
    pcVar21 = pcStack_170;
joined_r0x00014081d3d5:
    pcStack_170 = pcVar21;
    if (lVar34 == 0) {
      *puStack_d0 = uStack_b8;
      auVar60._0_8_ = pdb_1400af0a0(plStack_190,pcVar26 + 0x58);
      pdb_140269b90(&pcStack_138,plStack_1e0,auVar60._0_8_,pcVar26 + 0x58);
      pcVar21 = pcStack_130;
      pcStack_138 = pcStack_130;
      pcStack_130 = uStack_128;
      pcVar14 = pcStack_1d8;
      pcVar26 = pcStack_1d0;
      if (pcVar21 != (code *)0x0) {
        pdb_1413ff1c0(&pcStack_138);
        pcVar14 = pcStack_1d8;
        pcVar26 = pcStack_1d0;
      }
    }
    else {
      *puStack_d0 = uStack_b8;
      pcStack_138 = pcVar21;
      uVar18 = pdb_1400af0a0(plStack_190);
      lVar34 = plStack_c8[6];
      bVar25 = (byte)(uVar18 >> 0x38);
      bVar38 = bVar25 >> 1;
      auVar60 = ZEXT216(CONCAT11(bVar38,bVar38));
      auVar60 = pshuflw(auVar60,auVar60,0);
      lVar13 = 0;
      uVar27 = uVar18;
      while( true ) {
        uVar27 = uVar27 & plStack_c8[7];
        pcVar14 = (char *)(lVar34 + uVar27);
        auVar45[0] = -(*pcVar14 == auVar60[0]);
        auVar45[1] = -(pcVar14[1] == auVar60[1]);
        auVar45[2] = -(pcVar14[2] == auVar60[2]);
        auVar45[3] = -(pcVar14[3] == auVar60[3]);
        auVar45[4] = -(pcVar14[4] == auVar60[4]);
        auVar45[5] = -(pcVar14[5] == auVar60[5]);
        auVar45[6] = -(pcVar14[6] == auVar60[6]);
        auVar45[7] = -(pcVar14[7] == auVar60[7]);
        auVar45[8] = -(pcVar14[8] == auVar60[0]);
        auVar45[9] = -(pcVar14[9] == auVar60[1]);
        auVar45[10] = -(pcVar14[10] == auVar60[2]);
        auVar45[0xb] = -(pcVar14[0xb] == auVar60[3]);
        auVar45[0xc] = -(pcVar14[0xc] == auVar60[4]);
        auVar45[0xd] = -(pcVar14[0xd] == auVar60[5]);
        auVar45[0xe] = -(pcVar14[0xe] == auVar60[6]);
        auVar45[0xf] = -(pcVar14[0xf] == auVar60[7]);
        uVar31 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
        ;
        uVar28 = (uint)uVar31;
        while (uVar31 != 0) {
          uVar29 = 0;
          for (uVar2 = uVar28; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar29 = uVar29 + 1;
          }
          uVar32 = uVar29 + uVar27 & plStack_c8[7];
          if (*(code **)(lVar34 + -0x18 + uVar32 * -0x18) == pcVar21) {
            pcVar21 = *(code **)(lVar34 + uVar32 * -0x18 + -8);
            goto joined_r0x00014081d102;
          }
          uVar31 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar31);
        }
        auVar42[0] = -(*pcVar14 == (char)iVar3);
        auVar42[1] = -(pcVar14[1] == cVar46);
        auVar42[2] = -(pcVar14[2] == cVar47);
        auVar42[3] = -(pcVar14[3] == cVar48);
        auVar42[4] = -(pcVar14[4] == (char)iVar4);
        auVar42[5] = -(pcVar14[5] == cVar49);
        auVar42[6] = -(pcVar14[6] == cVar50);
        auVar42[7] = -(pcVar14[7] == cVar51);
        auVar42[8] = -(pcVar14[8] == (char)iVar5);
        auVar42[9] = -(pcVar14[9] == cVar52);
        auVar42[10] = -(pcVar14[10] == cVar53);
        auVar42[0xb] = -(pcVar14[0xb] == cVar54);
        auVar42[0xc] = -(pcVar14[0xc] == (char)iVar6);
        auVar42[0xd] = -(pcVar14[0xd] == cVar55);
        auVar42[0xe] = -(pcVar14[0xe] == cVar56);
        auVar42[0xf] = -(pcVar14[0xf] == cVar57);
        uVar31 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
        ;
        if (uVar31 != 0) break;
        uVar27 = uVar27 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
      if (plStack_c8[8] == 0) {
        pdb_142dd97b0(plStack_1e0,1,plStack_190,CONCAT71((uint7)(byte)(uVar31 >> 8),1));
      }
      pdb_14007ee60();
      pbVar16 = pub_1406abab0(0x20,8);
      if (pbVar16 == (byte *)0x0) goto LAB_14081d810;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16[8] = 4;
      pbVar16[9] = 0;
      pbVar16[10] = 0;
      pbVar16[0xb] = 0;
      pbVar16[0xc] = 0;
      pbVar16[0xd] = 0;
      pbVar16[0xe] = 0;
      pbVar16[0xf] = 0;
      pbVar16[0x10] = 0;
      pbVar16[0x11] = 0;
      pbVar16[0x12] = 0;
      pbVar16[0x13] = 0;
      pbVar16[0x14] = 0;
      pbVar16[0x15] = 0;
      pbVar16[0x16] = 0;
      pbVar16[0x17] = 0;
      pbVar16[0x18] = 0;
      lVar13 = *(longlong *)(lStack_1b8 + 0x48);
LAB_14081d172:
      lVar34 = *(longlong *)(lVar13 + 8);
      do {
        if (lVar34 == -1) goto LAB_14081d172;
        if (lVar34 < 0) {
LAB_14081d7c2:
          pcStack_138 = (code *)&UNK_143308338;
          pcStack_130 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143308348,&pcStack_138,&UNK_1433083d0);
        }
        LOCK();
        lVar23 = *(longlong *)(lVar13 + 8);
        bVar37 = lVar34 == lVar23;
        if (bVar37) {
          *(longlong *)(lVar13 + 8) = lVar34 + 1;
          lVar23 = lVar34;
        }
        UNLOCK();
        lVar34 = lVar23;
      } while (!bVar37);
      pauVar1 = (undefined1 (*) [16])plStack_c8[6];
      uVar27 = plStack_c8[7];
      uVar18 = uVar18 & uVar27;
      auVar60 = *(undefined1 (*) [16])(*pauVar1 + uVar18);
      uVar31 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
      uVar28 = (uint)uVar31;
      if (uVar31 == 0) {
        lVar34 = 0x10;
        do {
          uVar18 = uVar18 + lVar34 & uVar27;
          auVar60 = *(undefined1 (*) [16])(*pauVar1 + uVar18);
          lVar34 = lVar34 + 0x10;
          uVar28 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
        } while (uVar28 == 0);
      }
      uVar29 = 0;
      for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
        uVar29 = uVar29 + 1;
      }
      uVar18 = uVar29 + uVar18 & uVar27;
      bVar38 = (*pauVar1)[uVar18];
      if (-1 < (char)bVar38) {
        auVar60 = *pauVar1;
        uVar28 = 0;
        for (uVar29 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar29 & 1) == 0;
            uVar29 = uVar29 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar18 = (ulonglong)uVar28;
        bVar38 = (*pauVar1)[uVar18];
      }
      bVar25 = bVar25 >> 1;
      (*pauVar1)[uVar18] = bVar25;
      pauVar1[1][uVar18 - 0x10 & uVar27] = bVar25;
      *(code **)((longlong)pauVar1 + uVar18 * -0x18 + -0x18) = pcVar21;
      *(longlong *)((longlong)pauVar1 + uVar18 * -0x18 + -0x10) = lVar13;
      *(byte **)((longlong)pauVar1 + uVar18 * -0x18 + -8) = pbVar16;
      auVar43._8_4_ = uVar8;
      auVar43._0_8_ = (ulonglong)bVar38 & 0xffffffffffffff01;
      auVar43._12_4_ = uVar9;
      plStack_c8[8] = plStack_c8[8] - ((ulonglong)bVar38 & 0xffffffffffffff01);
      plStack_c8[9] = plStack_c8[9] - auVar43._8_8_;
      pcVar21 = *(code **)((longlong)pauVar1 + uVar18 * -0x18 + -8);
joined_r0x00014081d102:
      if (pcVar21 == (code *)0x0) {
LAB_14081d7f8:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b70);
      }
      pcVar15 = pcVar21 + 0x18;
      LOCK();
      bVar37 = pcVar21[0x18] == (code)0x0;
      if (bVar37) {
        pcVar21[0x18] = (code)0x1;
      }
      UNLOCK();
      if (bVar37) {
        pdb_140e9a150(pcVar15);
        lVar34 = *(longlong *)(pcVar21 + 0x10);
        if (lVar34 == 0) goto LAB_14081d4a0;
LAB_14081d263:
        piVar19 = (int *)(*(longlong *)(pcVar21 + 8) + lVar34 * 4 + -4);
        if (piVar19 == (int *)0x0) goto LAB_14081d4a0;
        iVar20 = *piVar19;
        pcVar15 = *(code **)(lStack_1b8 + 0x10);
      }
      else {
        pdb_142dbd1a0(pcVar15,CONCAT71((int7)((ulonglong)lVar13 >> 8),1),1000000000);
        pdb_140e9a150(pcVar15);
        lVar34 = *(longlong *)(pcVar21 + 0x10);
        if (lVar34 != 0) goto LAB_14081d263;
LAB_14081d4a0:
        pcVar15 = *(code **)(lStack_1b8 + 0x10);
        if (pcVar15 == (code *)0x0) {
LAB_14081d804:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b88);
        }
        iVar20 = (int)pcVar15 + -1;
      }
      pcStack_138 = *(code **)(lStack_1b8 + 8);
      uStack_128 = *(code **)(lStack_1b8 + 0x18);
      uStack_120 = *(undefined8 *)(lStack_1b8 + 0x20);
      pcStack_110 = *(code **)(lStack_1b8 + 0x28);
      uStack_108 = *(undefined8 *)(lStack_1b8 + 0x30);
      uStack_f0 = *(undefined8 *)(lStack_1b8 + 0x38);
      puStack_e8 = *(undefined **)(lStack_1b8 + 0x40);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar20);
      puStack_100 = (undefined *)lStack_250;
      lStack_f8 = lStack_1c8;
      pcStack_130 = pcVar15;
      pcStack_118 = pcVar21;
      pdb_1413f7bd0(&pcStack_138);
      puVar12 = *(undefined8 **)(pcVar26 + 0x30);
      puVar24 = puVar12 + *(longlong *)(pcVar26 + 0x38) * 0xc;
      do {
        if (puVar12 == puVar24) goto LAB_14081d5a2;
        uStack_2e0 = 0;
        uStack_338 = *puVar12;
        uStack_330 = puVar12[1];
        uStack_328 = *(undefined4 *)(puVar12 + 2);
        uStack_324 = *(undefined4 *)((longlong)puVar12 + 0x14);
        uStack_320 = *(undefined4 *)(puVar12 + 3);
        uStack_31c = *(undefined4 *)((longlong)puVar12 + 0x1c);
        uStack_318 = puVar12[4];
        uStack_310 = puVar12[5];
        if (lVar35 != 0) {
          uStack_2e0 = *(undefined4 *)(puVar12 + 0xb);
        }
        uStack_2dc = *(undefined4 *)((longlong)puVar12 + 0x5c);
        uStack_308 = puVar12[6];
        uStack_300 = puVar12[7];
        uStack_2f8 = puVar12[8];
        uStack_2f0 = puVar12[9];
        lStack_2e8 = lVar35;
        auVar60._0_8_ = pdb_1413f5ed0(&pcStack_138,&uStack_338);
        puVar12 = puVar12 + 0xc;
      } while ((char)auVar60._0_8_ == '\0');
      uStack_1b0 = CONCAT71((int7)((ulonglong)auVar60._0_8_ >> 8),1);
LAB_14081d5a2:
      pcVar15 = pcStack_118;
      pcVar21 = pcStack_118 + 0x18;
      pdb_140e9a350();
      LOCK();
      bVar37 = pcVar15[0x18] == (code)0x1;
      if (bVar37) {
        pcVar15[0x18] = (code)0x0;
      }
      UNLOCK();
      pcVar14 = pcStack_1d8;
      pcVar26 = pcStack_1d0;
      if (!bVar37) {
        pdb_142dbcef0(pcVar21,0);
        pcVar14 = pcStack_1d8;
        pcVar26 = pcStack_1d0;
      }
    }
  } while( true );
}

