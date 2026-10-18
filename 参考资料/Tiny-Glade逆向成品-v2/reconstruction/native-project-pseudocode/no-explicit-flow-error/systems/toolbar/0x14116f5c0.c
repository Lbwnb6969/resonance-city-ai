// VA 0x14116f5c0, PDB extent 5196 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::credits::ui::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014116f993) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::credits::ui::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 5196 */

void pdb_14116f5c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  byte *pbVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ushort *puVar22;
  undefined8 uVar23;
  longlong lVar24;
  byte *pbVar25;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  ushort uVar34;
  longlong lVar35;
  byte *pbVar36;
  ulonglong unaff_R13;
  byte *unaff_R14;
  ulonglong uVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 unaff_XMM9_Ba;
  char cVar56;
  undefined1 unaff_XMM9_Bb;
  char cVar57;
  undefined1 unaff_XMM9_Bc;
  char cVar58;
  undefined1 unaff_XMM9_Bd;
  char cVar59;
  undefined1 unaff_XMM9_Be;
  char cVar60;
  undefined1 unaff_XMM9_Bf;
  char cVar61;
  undefined1 unaff_XMM9_Bg;
  char cVar62;
  undefined1 unaff_XMM9_Bh;
  char cVar63;
  undefined1 unaff_XMM9_Bi;
  char cVar64;
  undefined1 unaff_XMM9_Bj;
  char cVar65;
  undefined1 unaff_XMM9_Bk;
  char cVar66;
  undefined1 unaff_XMM9_Bl;
  char cVar67;
  undefined1 unaff_XMM9_Bm;
  char cVar68;
  undefined1 unaff_XMM9_Bn;
  char cVar69;
  undefined1 unaff_XMM9_Bo;
  char cVar70;
  undefined1 unaff_XMM9_Bp;
  char cVar71;
  float fVar72;
  byte *pbStack_228;
  ulonglong uStack_210;
  ulonglong uStack_208;
  longlong lStack_200;
  undefined1 auStack_1f8 [16];
  ulonglong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte *pbStack_190;
  char cStack_188;
  uint7 uStack_187;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_114;
  undefined8 *puStack_110;
  byte *pbStack_108;
  undefined8 *puStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  puStack_110 = param_2;
  puStack_100 = param_3;
  if (_DAT_143caf138 != 2) {
    pdb_142dce820(&DAT_143caf138,&DAT_143caf138);
  }
  uVar29 = _DAT_143caf150;
  pbStack_108 = _DAT_143caf148;
  if (_DAT_143caf150 < 0xf) {
    uVar26 = 0;
    pbVar21 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar26 = 0xdd2;
    pbVar21 = pub_1406abab0(0xdd2,1);
    if (pbVar21 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xdd2);
LAB_141170818:
      pdb_142dc8070(unaff_R14,unaff_R13);
LAB_141170853:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  uStack_e8 = 0;
  uStack_f8 = uVar26;
  pbStack_f0 = pbVar21;
  pdb_140f67bb0(&cStack_188,&UNK_14329cebb,0xdd2,&UNK_14329dc8d,0xf);
  uStack_198 = uStack_128;
  uStack_1a8 = uStack_138;
  uStack_1a0 = uStack_130;
  uStack_1b8 = uStack_148;
  uStack_1b0 = uStack_140;
  auStack_1f8._1_7_ = uStack_187;
  auStack_1f8[0] = cStack_188;
  auStack_1f8._8_8_ = uStack_180;
  uStack_1c8 = uStack_158;
  uStack_1c0 = uStack_150;
  uStack_1d8 = uStack_168;
  uStack_1d0 = uStack_160;
  uStack_1e8 = uStack_178;
  uStack_1e0 = uStack_170;
  uVar26 = 0;
  uVar28 = 0;
  while (pdb_14116af50(&cStack_188), uVar19 = uStack_178, uVar18 = uStack_180, cStack_188 != '\0') {
    uVar37 = uStack_180 - uVar28;
    if (uStack_f8 - uVar26 < uVar37) {
      pdb_142d7f1b0(&uStack_f8,uVar26,uVar37,1,1);
      uVar26 = uStack_e8;
    }
    if (uVar18 != uVar28) {
      pub_142e32760(pbStack_f0 + uVar26,&UNK_14329cebb + uVar28,uVar37);
    }
    uVar26 = uVar26 + uVar37;
    uStack_e8 = uVar26;
    if (uStack_f8 - uVar26 < uVar29) {
      pdb_142d7f1b0(&uStack_f8,uVar26,uVar29,1,1);
LAB_14116f760:
      uVar26 = uStack_e8;
      pub_142e32760(pbStack_f0 + uStack_e8,pbStack_108,uVar29);
    }
    else if (uVar29 != 0) goto LAB_14116f760;
    uVar26 = uVar26 + uVar29;
    uVar28 = uVar19;
    uStack_e8 = uVar26;
  }
  uVar29 = 0xdd2 - uVar28;
  pbVar21 = pbStack_f0;
  if (uStack_f8 - uVar26 < uVar29) {
    pdb_142d7f1b0(&uStack_f8,uVar26,uVar29,1,1);
    pbVar21 = pbStack_f0;
    uVar26 = uStack_e8;
  }
  pbStack_f0 = pbVar21;
  if (uVar28 != 0xdd2) {
    pub_142e32760(pbVar21 + uVar26,&UNK_14329cebb + uVar28,uVar29);
  }
  uVar28 = uStack_f8;
  uVar17 = _DAT_14329bc70;
  uVar16 = _DAT_1430896b4;
  uVar15 = _DAT_142f95190;
  fVar14 = _DAT_142f57bc8;
  fVar13 = _DAT_142e37adc;
  pbVar27 = (byte *)(uVar26 + uVar29);
  pfVar4 = (float *)*puStack_100;
  pfVar5 = (float *)puStack_100[1];
  puVar6 = (ulonglong *)puStack_100[2];
  iVar10 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                            CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                  CONCAT13(unaff_XMM9_Bd,
                           CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
  cVar56 = (char)iVar10;
  cVar57 = (char)((uint)iVar10 >> 8);
  cVar58 = (char)((uint)iVar10 >> 0x10);
  cVar59 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                            CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                  CONCAT13(unaff_XMM9_Bh,
                           CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
  cVar60 = (char)iVar10;
  cVar61 = (char)((uint)iVar10 >> 8);
  cVar62 = (char)((uint)iVar10 >> 0x10);
  cVar63 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                            CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                  CONCAT13(unaff_XMM9_Bl,
                           CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
  cVar64 = (char)iVar10;
  cVar65 = (char)((uint)iVar10 >> 8);
  cVar66 = (char)((uint)iVar10 >> 0x10);
  cVar67 = (char)((uint)iVar10 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                            CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                  CONCAT13(unaff_XMM9_Bp,
                           CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
  cVar68 = (char)iVar10;
  cVar69 = (char)((uint)iVar10 >> 8);
  cVar70 = (char)((uint)iVar10 >> 0x10);
  cVar71 = (char)((uint)iVar10 >> 0x18);
  puStack_100 = (undefined8 *)0x0;
  uVar29 = 0;
  pbVar12 = (byte *)0x0;
  pbStack_108 = pbVar21;
  pbVar21 = (byte *)0x0;
joined_r0x00014116f905:
  pbVar36 = pbVar12;
  if (pbVar27 < pbVar12) {
LAB_14116f9a3:
    uStack_114 = (uint)CONCAT71((int7)(uVar29 >> 8),1);
    pbVar38 = pbVar27;
    pbVar39 = pbVar21;
    if (pbVar27 == pbVar21) goto LAB_14117067d;
  }
  else {
    pbVar39 = pbStack_108 + (longlong)pbVar12;
    pbVar36 = pbVar27;
    if (pbVar27 + -(longlong)pbVar12 < (byte *)0x10) {
      pbVar25 = (byte *)0x0;
      if (pbVar27 != pbVar12) {
        do {
          if (pbVar39[(longlong)pbVar25] == 10) {
            uVar29 = 0;
            goto LAB_14116f971;
          }
          pbVar25 = pbVar25 + 1;
        } while (pbVar27 + -(longlong)pbVar12 != pbVar25);
      }
      uVar29 = 0;
      goto LAB_14116f9a3;
    }
    pbVar25 = pbVar39;
    uVar29 = pdb_140f69320(10);
    if (uVar29 != 1) goto LAB_14116f9a3;
LAB_14116f971:
    pbVar38 = pbVar25 + (longlong)pbVar12 + 1;
    pbVar36 = pbVar12 + (longlong)pbVar25;
    pbVar12 = pbVar38;
    if ((pbVar27 <= pbVar36) || (pbVar39[(longlong)pbVar25] != 10)) goto joined_r0x00014116f905;
    uStack_114 = 0;
    pbVar36 = pbVar38;
    pbVar39 = pbVar38;
  }
  unaff_R14 = pbStack_108 + (longlong)pbVar21;
  uVar29 = (longlong)pbVar38 - (longlong)pbVar21;
  unaff_R13 = uVar29;
  if ((uVar29 != 0) && ((pbStack_108 + -1)[(longlong)pbVar38] == 10)) {
    unaff_R13 = uVar29 - 1;
    if (unaff_R13 == 0) {
      unaff_R13 = 0;
    }
    else if ((pbStack_108 + -2)[(longlong)pbVar38] == 0xd) {
      unaff_R13 = uVar29 - 2;
    }
  }
  if (unaff_R14 != (byte *)0x0) {
    pdb_140f67bb0(&cStack_188,unaff_R14,unaff_R13,&UNK_14329dc9c,2);
    pdb_14116af50(auStack_1f8,&cStack_188);
    if (auStack_1f8._0_4_ == 1) {
      uVar29 = auStack_1f8._8_8_;
      uVar26 = auStack_1f8._8_8_ + 2;
      if (uVar26 != 0) {
        if (uVar26 < unaff_R13) {
          if ((char)unaff_R14[uVar26] < -0x40) goto LAB_141170818;
        }
        else if (unaff_R13 != uVar26) goto LAB_141170818;
      }
      pbStack_228 = (byte *)(unaff_R13 - uVar26);
      lStack_200 = pdb_14014b650(unaff_R14 + uVar26);
      if (uVar29 != 0) {
        if (uVar29 < unaff_R13) {
          if ((char)unaff_R14[uVar29] < -0x40) {
LAB_141170835:
            pdb_142dc8070(unaff_R14,unaff_R13,0,uVar29,&UNK_14329dcb8);
            goto LAB_141170853;
          }
        }
        else if (uVar29 != unaff_R13) goto LAB_141170835;
      }
    }
    else {
      lStack_200 = 0;
      uVar29 = unaff_R13;
    }
    puVar22 = (ushort *)pdb_14014b650(unaff_R14);
    puVar20 = puStack_110;
    cStack_188 = (char)puStack_100;
    uStack_187 = (uint7)((ulonglong)puStack_100 >> 8);
    if (uVar29 < 2) {
      if (uVar29 == 0) {
        uVar23 = puStack_110[1];
        uStack_180 = _DAT_14329c330;
        uStack_178 = _UNK_14329c338;
        uStack_180 = pdb_1400affa0(&cStack_188);
        cStack_188 = (char)uVar23;
        uStack_187 = (uint7)((ulonglong)uVar23 >> 8);
        uVar23 = pdb_1400b0130(&cStack_188);
        pdb_14072caa0(auStack_1f8,puVar20,uVar23);
        uVar23 = auStack_1f8._0_8_;
        if (*(longlong *)(auStack_1f8._0_8_ + 0x1c8) != 0) {
          uVar26 = pdb_1400af0a0(auStack_1f8._0_8_ + 0x1d0,auStack_1f8 + 8);
          lVar24 = *(longlong *)(uVar23 + 0x1b0);
          uVar29 = *(ulonglong *)(uVar23 + 0x1b8);
          bVar40 = (byte)(uVar26 >> 0x39);
          auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
          auVar41 = pshuflw(auVar41,auVar41,0);
          lVar32 = 0;
          while( true ) {
            uVar26 = uVar26 & uVar29;
            auVar50 = *(undefined1 (*) [16])(lVar24 + uVar26);
            auVar49[0] = -(auVar50[0] == auVar41[0]);
            auVar49[1] = -(auVar50[1] == auVar41[1]);
            auVar49[2] = -(auVar50[2] == auVar41[2]);
            auVar49[3] = -(auVar50[3] == auVar41[3]);
            auVar49[4] = -(auVar50[4] == auVar41[4]);
            auVar49[5] = -(auVar50[5] == auVar41[5]);
            auVar49[6] = -(auVar50[6] == auVar41[6]);
            auVar49[7] = -(auVar50[7] == auVar41[7]);
            auVar49[8] = -(auVar50[8] == auVar41[0]);
            auVar49[9] = -(auVar50[9] == auVar41[1]);
            auVar49[10] = -(auVar50[10] == auVar41[2]);
            auVar49[0xb] = -(auVar50[0xb] == auVar41[3]);
            auVar49[0xc] = -(auVar50[0xc] == auVar41[4]);
            auVar49[0xd] = -(auVar50[0xd] == auVar41[5]);
            auVar49[0xe] = -(auVar50[0xe] == auVar41[6]);
            auVar49[0xf] = -(auVar50[0xf] == auVar41[7]);
            uVar34 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar49[0xf] >> 7) << 0xf;
            uVar31 = (uint)uVar34;
            while (uVar34 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar35 = (uVar8 + uVar26 & uVar29) * -0xd8;
              if ((byte *)auStack_1f8._8_8_ == *(byte **)(lVar24 + -0xd8 + lVar35)) {
                lVar24 = lVar24 + lVar35;
                *(undefined8 *)(lVar24 + -0x9c) = 0;
                *(undefined8 *)(lVar24 + -0x94) = 0;
                *(undefined8 *)(lVar24 + -0xa8) = 0;
                *(undefined8 *)(lVar24 + -0xa0) = 0;
                *(undefined8 *)(lVar24 + -0xb8) = 0;
                *(undefined8 *)(lVar24 + -0xb0) = 0;
                *(undefined8 *)(lVar24 + -0x8c) = 0x42200000;
                *(undefined4 *)(lVar24 + -0x84) = 0x42200000;
                *(undefined8 *)(lVar24 + -0x80) = 0;
                *(undefined8 *)(lVar24 + -0x79) = 0;
                *(undefined1 *)(lVar24 + -0x71) = 4;
                uStack_e8 = uStack_1e8;
                uVar23 = auStack_1f8._0_8_;
                uStack_f8 = auStack_1f8._0_8_;
                pbStack_f0 = (byte *)auStack_1f8._8_8_;
                if (*(longlong *)(auStack_1f8._0_8_ + 0x1c8) == 0) goto LAB_14117077d;
                uVar26 = pdb_1400af0a0(auStack_1f8._0_8_ + 0x1d0,&pbStack_f0);
                lVar24 = *(longlong *)(uVar23 + 0x1b0);
                uVar29 = *(ulonglong *)(uVar23 + 0x1b8);
                bVar40 = (byte)(uVar26 >> 0x39);
                auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
                auVar41 = pshuflw(auVar41,auVar41,0);
                lVar32 = 0;
                goto LAB_14116ff46;
              }
              uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
              uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
            }
            auVar42[0] = -(auVar50[0] == cVar56);
            auVar42[1] = -(auVar50[1] == cVar57);
            auVar42[2] = -(auVar50[2] == cVar58);
            auVar42[3] = -(auVar50[3] == cVar59);
            auVar42[4] = -(auVar50[4] == cVar60);
            auVar42[5] = -(auVar50[5] == cVar61);
            auVar42[6] = -(auVar50[6] == cVar62);
            auVar42[7] = -(auVar50[7] == cVar63);
            auVar42[8] = -(auVar50[8] == cVar64);
            auVar42[9] = -(auVar50[9] == cVar65);
            auVar42[10] = -(auVar50[10] == cVar66);
            auVar42[0xb] = -(auVar50[0xb] == cVar67);
            auVar42[0xc] = -(auVar50[0xc] == cVar68);
            auVar42[0xd] = -(auVar50[0xd] == cVar69);
            auVar42[0xe] = -(auVar50[0xe] == cVar70);
            auVar42[0xf] = -(auVar50[0xf] == cVar71);
            if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar42 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x3f,0) & 1) != 0) || (SUB161(auVar42 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
            uVar26 = uVar26 + lVar32 + 0x10;
            lVar32 = lVar32 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b30);
      }
    }
    else {
      if ((ushort)(*puVar22 << 8 | *puVar22 >> 8) == 0x2320) {
        uStack_180 = _DAT_14329c260;
        uStack_178 = _UNK_14329c268;
        uStack_180 = pdb_1400affa0(&cStack_188);
        puVar20 = puStack_110;
        cStack_188 = (char)puStack_110[1];
        uStack_187 = (uint7)((ulonglong)puStack_110[1] >> 8);
        uVar23 = pdb_1400b0130(&cStack_188);
        pdb_14072caa0(&cStack_188,puVar20,uVar23);
        uVar23 = pdb_14116ee90(&cStack_188,0);
        pdb_14119b6b0(uVar23,puVar22 + 1,uVar29 - 2);
        uStack_1e8 = uStack_178;
        auStack_1f8[0] = cStack_188;
        auStack_1f8._1_7_ = uStack_187;
        auStack_1f8._8_8_ = uStack_180;
        uVar23 = pdb_14116e180(auStack_1f8);
        pdb_14119b2b0(uVar23,uVar15);
        uStack_178 = uStack_1e8;
        cStack_188 = auStack_1f8[0];
        uStack_187 = auStack_1f8._1_7_;
        uStack_180 = auStack_1f8._8_8_;
        uVar23 = pdb_14116e180(&cStack_188);
        pdb_140cb5a70(uVar23,1);
        uStack_1e8 = uStack_178;
        auStack_1f8._1_7_ = uStack_187;
        auStack_1f8[0] = cStack_188;
        auStack_1f8._8_8_ = uStack_180;
        lVar24 = pdb_14116e180(auStack_1f8);
        *(undefined4 *)(lVar24 + 600) = 0xffffffff;
        lVar24 = *(longlong *)(auStack_1f8._0_8_ + 0x1c8);
        uStack_208 = uStack_1e8;
        uStack_210 = auStack_1f8._8_8_;
        fVar72 = fVar14;
        lVar32 = auStack_1f8._0_8_;
        goto joined_r0x000141170117;
      }
      if (uVar29 != 2) {
        uVar34 = *puVar22 << 8 | *puVar22 >> 8;
        if (uVar34 == 0x2323) {
          if ((char)puVar22[1] == ' ') {
LAB_14116ffd9:
            uStack_180 = _DAT_14329c260;
            uStack_178 = _UNK_14329c268;
            uStack_180 = pdb_1400affa0(&cStack_188);
            puVar20 = puStack_110;
            cStack_188 = (char)puStack_110[1];
            uStack_187 = (uint7)((ulonglong)puStack_110[1] >> 8);
            uVar23 = pdb_1400b0130(&cStack_188);
            pdb_14072caa0(&cStack_188,puVar20,uVar23);
            uVar23 = pdb_14116ee90(&cStack_188,0);
            pdb_14119b6b0(uVar23,(longlong)puVar22 + 3,uVar29 - 3);
            uStack_1e8 = uStack_178;
            auStack_1f8[0] = cStack_188;
            auStack_1f8._1_7_ = uStack_187;
            auStack_1f8._8_8_ = uStack_180;
            uVar23 = pdb_14116e180(auStack_1f8);
            pdb_14119b2b0(uVar23,uVar17);
            uStack_178 = uStack_1e8;
            cStack_188 = auStack_1f8[0];
            uStack_187 = auStack_1f8._1_7_;
            uStack_180 = auStack_1f8._8_8_;
            uVar23 = pdb_14116e180(&cStack_188);
            pdb_140cb5c70(uVar23,700);
            uStack_1e8 = uStack_178;
            auStack_1f8._1_7_ = uStack_187;
            auStack_1f8[0] = cStack_188;
            auStack_1f8._8_8_ = uStack_180;
            uVar23 = pdb_14116e180(auStack_1f8);
            pdb_140cb5a70(uVar23,1);
            uStack_178 = uStack_1e8;
            cStack_188 = auStack_1f8[0];
            uStack_187 = auStack_1f8._1_7_;
            uStack_180 = auStack_1f8._8_8_;
            lVar24 = pdb_14116e180(&cStack_188);
            *(undefined4 *)(lVar24 + 600) = 0xfffffff0;
            lVar24 = *(longlong *)(CONCAT71(uStack_187,cStack_188) + 0x1c8);
            uStack_208 = uStack_178;
            uStack_210 = uStack_180;
            fVar72 = fVar13;
            lVar32 = CONCAT71(uStack_187,cStack_188);
            goto joined_r0x000141170117;
          }
        }
        else if (((uVar34 < 0x2324) - 1 | 1) == 0) goto LAB_14116ffd9;
      }
    }
    uStack_180 = _DAT_14329c260;
    uStack_178 = _UNK_14329c268;
    uStack_180 = pdb_1400affa0(&cStack_188);
    puVar20 = puStack_110;
    cStack_188 = (char)puStack_110[1];
    uStack_187 = (uint7)((ulonglong)puStack_110[1] >> 8);
    uVar23 = pdb_1400b0130(&cStack_188);
    pdb_14072caa0(&cStack_188,puVar20,uVar23);
    uVar23 = pdb_14116ee90(&cStack_188,0);
    pdb_14119b6b0(uVar23,puVar22,uVar29);
    uStack_1e8 = uStack_178;
    auStack_1f8[0] = cStack_188;
    auStack_1f8._1_7_ = uStack_187;
    auStack_1f8._8_8_ = uStack_180;
    uVar23 = pdb_14116e180(auStack_1f8);
    pdb_14119b2b0(uVar23,uVar16);
    uStack_178 = uStack_1e8;
    cStack_188 = auStack_1f8[0];
    uStack_187 = auStack_1f8._1_7_;
    uStack_180 = auStack_1f8._8_8_;
    uVar23 = pdb_14116e180(&cStack_188);
    pdb_140cb5a70(uVar23,1);
    uStack_1e8 = uStack_178;
    auStack_1f8._1_7_ = uStack_187;
    auStack_1f8[0] = cStack_188;
    auStack_1f8._8_8_ = uStack_180;
    lVar24 = pdb_14116e180(auStack_1f8);
    *(undefined4 *)(lVar24 + 600) = 0xece997ff;
    fVar72 = 0.0;
    lVar24 = *(longlong *)(auStack_1f8._0_8_ + 0x1c8);
    uStack_208 = uStack_1e8;
    uStack_210 = auStack_1f8._8_8_;
    lVar32 = auStack_1f8._0_8_;
joined_r0x000141170117:
    if (lVar24 != 0) {
      lVar24 = lVar32 + 0x1d0;
      uVar26 = pdb_1400af0a0(lVar24,&uStack_210);
      uVar29 = uStack_210;
      lVar35 = *(longlong *)(lVar32 + 0x1b0);
      bVar40 = (byte)(uVar26 >> 0x39);
      auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar41 = pshuflw(auVar41,auVar41,0);
      lVar30 = 0;
      while( true ) {
        uVar26 = uVar26 & *(ulonglong *)(lVar32 + 0x1b8);
        auVar50 = *(undefined1 (*) [16])(lVar35 + uVar26);
        auVar51[0] = -(auVar50[0] == auVar41[0]);
        auVar51[1] = -(auVar50[1] == auVar41[1]);
        auVar51[2] = -(auVar50[2] == auVar41[2]);
        auVar51[3] = -(auVar50[3] == auVar41[3]);
        auVar51[4] = -(auVar50[4] == auVar41[4]);
        auVar51[5] = -(auVar50[5] == auVar41[5]);
        auVar51[6] = -(auVar50[6] == auVar41[6]);
        auVar51[7] = -(auVar50[7] == auVar41[7]);
        auVar51[8] = -(auVar50[8] == auVar41[0]);
        auVar51[9] = -(auVar50[9] == auVar41[1]);
        auVar51[10] = -(auVar50[10] == auVar41[2]);
        auVar51[0xb] = -(auVar50[0xb] == auVar41[3]);
        auVar51[0xc] = -(auVar50[0xc] == auVar41[4]);
        auVar51[0xd] = -(auVar50[0xd] == auVar41[5]);
        auVar51[0xe] = -(auVar50[0xe] == auVar41[6]);
        auVar51[0xf] = -(auVar50[0xf] == auVar41[7]);
        uVar34 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar31 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar33 = (uVar8 + uVar26 & *(ulonglong *)(lVar32 + 0x1b8)) * -0xd8;
          if (uStack_210 == *(ulonglong *)(lVar35 + -0xd8 + lVar33)) {
            pbVar21 = (byte *)(lVar35 + lVar33 + -5);
            *pbVar21 = *pbVar21 | 2;
            if (*(longlong *)(lVar32 + 0x1c8) == 0) goto LAB_14117071d;
            uVar26 = pdb_1400af0a0(lVar24,&uStack_210);
            lVar35 = *(longlong *)(lVar32 + 0x1b0);
            bVar40 = (byte)(uVar26 >> 0x39);
            auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
            auVar41 = pshuflw(auVar41,auVar41,0);
            lVar30 = 0;
            goto LAB_14117021c;
          }
          uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
          uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
        }
        auVar44[0] = -(auVar50[0] == cVar56);
        auVar44[1] = -(auVar50[1] == cVar57);
        auVar44[2] = -(auVar50[2] == cVar58);
        auVar44[3] = -(auVar50[3] == cVar59);
        auVar44[4] = -(auVar50[4] == cVar60);
        auVar44[5] = -(auVar50[5] == cVar61);
        auVar44[6] = -(auVar50[6] == cVar62);
        auVar44[7] = -(auVar50[7] == cVar63);
        auVar44[8] = -(auVar50[8] == cVar64);
        auVar44[9] = -(auVar50[9] == cVar65);
        auVar44[10] = -(auVar50[10] == cVar66);
        auVar44[0xb] = -(auVar50[0xb] == cVar67);
        auVar44[0xc] = -(auVar50[0xc] == cVar68);
        auVar44[0xd] = -(auVar50[0xd] == cVar69);
        auVar44[0xe] = -(auVar50[0xe] == cVar70);
        auVar44[0xf] = -(auVar50[0xf] == cVar71);
        if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x1f,0) & 1) != 0) || (SUB161(auVar44 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
        uVar26 = uVar26 + lVar30 + 0x10;
        lVar30 = lVar30 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  goto LAB_14117067d;
LAB_14116ff46:
  uVar26 = uVar26 & uVar29;
  pcVar1 = (char *)(lVar24 + uVar26);
  auVar50[0] = -(*pcVar1 == auVar41[0]);
  auVar50[1] = -(pcVar1[1] == auVar41[1]);
  auVar50[2] = -(pcVar1[2] == auVar41[2]);
  auVar50[3] = -(pcVar1[3] == auVar41[3]);
  auVar50[4] = -(pcVar1[4] == auVar41[4]);
  auVar50[5] = -(pcVar1[5] == auVar41[5]);
  auVar50[6] = -(pcVar1[6] == auVar41[6]);
  auVar50[7] = -(pcVar1[7] == auVar41[7]);
  auVar50[8] = -(pcVar1[8] == auVar41[0]);
  auVar50[9] = -(pcVar1[9] == auVar41[1]);
  auVar50[10] = -(pcVar1[10] == auVar41[2]);
  auVar50[0xb] = -(pcVar1[0xb] == auVar41[3]);
  auVar50[0xc] = -(pcVar1[0xc] == auVar41[4]);
  auVar50[0xd] = -(pcVar1[0xd] == auVar41[5]);
  auVar50[0xe] = -(pcVar1[0xe] == auVar41[6]);
  auVar50[0xf] = -(pcVar1[0xf] == auVar41[7]);
  uVar34 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar35 = (uVar8 + uVar26 & uVar29) * -0xd8;
    if (pbStack_f0 == *(byte **)(lVar24 + -0xd8 + lVar35)) goto LAB_14117065e;
    uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
    uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
  }
  auVar43[0] = -(*pcVar1 == cVar56);
  auVar43[1] = -(pcVar1[1] == cVar57);
  auVar43[2] = -(pcVar1[2] == cVar58);
  auVar43[3] = -(pcVar1[3] == cVar59);
  auVar43[4] = -(pcVar1[4] == cVar60);
  auVar43[5] = -(pcVar1[5] == cVar61);
  auVar43[6] = -(pcVar1[6] == cVar62);
  auVar43[7] = -(pcVar1[7] == cVar63);
  auVar43[8] = -(pcVar1[8] == cVar64);
  auVar43[9] = -(pcVar1[9] == cVar65);
  auVar43[10] = -(pcVar1[10] == cVar66);
  auVar43[0xb] = -(pcVar1[0xb] == cVar67);
  auVar43[0xc] = -(pcVar1[0xc] == cVar68);
  auVar43[0xd] = -(pcVar1[0xd] == cVar69);
  auVar43[0xe] = -(pcVar1[0xe] == cVar70);
  auVar43[0xf] = -(pcVar1[0xf] == cVar71);
  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') {
LAB_14117077d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar26 = uVar26 + lVar32 + 0x10;
  lVar32 = lVar32 + 0x10;
  goto LAB_14116ff46;
LAB_14117021c:
  uVar26 = uVar26 & *(ulonglong *)(lVar32 + 0x1b8);
  pcVar1 = (char *)(lVar35 + uVar26);
  auVar52[0] = -(*pcVar1 == auVar41[0]);
  auVar52[1] = -(pcVar1[1] == auVar41[1]);
  auVar52[2] = -(pcVar1[2] == auVar41[2]);
  auVar52[3] = -(pcVar1[3] == auVar41[3]);
  auVar52[4] = -(pcVar1[4] == auVar41[4]);
  auVar52[5] = -(pcVar1[5] == auVar41[5]);
  auVar52[6] = -(pcVar1[6] == auVar41[6]);
  auVar52[7] = -(pcVar1[7] == auVar41[7]);
  auVar52[8] = -(pcVar1[8] == auVar41[0]);
  auVar52[9] = -(pcVar1[9] == auVar41[1]);
  auVar52[10] = -(pcVar1[10] == auVar41[2]);
  auVar52[0xb] = -(pcVar1[0xb] == auVar41[3]);
  auVar52[0xc] = -(pcVar1[0xc] == auVar41[4]);
  auVar52[0xd] = -(pcVar1[0xd] == auVar41[5]);
  auVar52[0xe] = -(pcVar1[0xe] == auVar41[6]);
  auVar52[0xf] = -(pcVar1[0xf] == auVar41[7]);
  uVar34 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar33 = (uVar8 + uVar26 & *(ulonglong *)(lVar32 + 0x1b8)) * -0xd8;
    if (uVar29 == *(ulonglong *)(lVar35 + -0xd8 + lVar33)) {
      lVar35 = lVar35 + lVar33;
      if (*(int *)(lVar35 + -0x28) == 1) {
        fVar2 = *pfVar4;
        fVar3 = *(float *)(lVar35 + -0x18);
        fVar11 = fVar3;
        if (fVar2 <= fVar3) {
          fVar11 = fVar2;
        }
        *pfVar4 = (float)(~-(uint)NAN(fVar2) & (uint)fVar11 | -(uint)NAN(fVar2) & (uint)fVar3);
        fVar2 = *pfVar5;
        fVar11 = fVar3;
        if (fVar3 <= fVar2) {
          fVar11 = fVar2;
        }
        *pfVar5 = (float)(~-(uint)NAN(fVar2) & (uint)fVar11 | -(uint)NAN(fVar2) & (uint)fVar3);
      }
      if (lStack_200 == 0) goto LAB_141170420;
      if (*(longlong *)(lVar32 + 0x1c8) == 0) goto LAB_14117073b;
      uVar26 = pdb_1400af0a0(lVar24,&uStack_210);
      lVar24 = *(longlong *)(lVar32 + 0x1b0);
      bVar40 = (byte)(uVar26 >> 0x39);
      auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar41 = pshuflw(auVar41,auVar41,0);
      lVar35 = 0;
      goto LAB_141170336;
    }
    uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
    uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
  }
  auVar45[0] = -(*pcVar1 == cVar56);
  auVar45[1] = -(pcVar1[1] == cVar57);
  auVar45[2] = -(pcVar1[2] == cVar58);
  auVar45[3] = -(pcVar1[3] == cVar59);
  auVar45[4] = -(pcVar1[4] == cVar60);
  auVar45[5] = -(pcVar1[5] == cVar61);
  auVar45[6] = -(pcVar1[6] == cVar62);
  auVar45[7] = -(pcVar1[7] == cVar63);
  auVar45[8] = -(pcVar1[8] == cVar64);
  auVar45[9] = -(pcVar1[9] == cVar65);
  auVar45[10] = -(pcVar1[10] == cVar66);
  auVar45[0xb] = -(pcVar1[0xb] == cVar67);
  auVar45[0xc] = -(pcVar1[0xc] == cVar68);
  auVar45[0xd] = -(pcVar1[0xd] == cVar69);
  auVar45[0xe] = -(pcVar1[0xe] == cVar70);
  auVar45[0xf] = -(pcVar1[0xf] == cVar71);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') goto LAB_14117071d;
  uVar26 = uVar26 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto LAB_14117021c;
LAB_141170336:
  uVar26 = uVar26 & *(ulonglong *)(lVar32 + 0x1b8);
  auVar50 = *(undefined1 (*) [16])(lVar24 + uVar26);
  auVar53[0] = -(auVar50[0] == auVar41[0]);
  auVar53[1] = -(auVar50[1] == auVar41[1]);
  auVar53[2] = -(auVar50[2] == auVar41[2]);
  auVar53[3] = -(auVar50[3] == auVar41[3]);
  auVar53[4] = -(auVar50[4] == auVar41[4]);
  auVar53[5] = -(auVar50[5] == auVar41[5]);
  auVar53[6] = -(auVar50[6] == auVar41[6]);
  auVar53[7] = -(auVar50[7] == auVar41[7]);
  auVar53[8] = -(auVar50[8] == auVar41[0]);
  auVar53[9] = -(auVar50[9] == auVar41[1]);
  auVar53[10] = -(auVar50[10] == auVar41[2]);
  auVar53[0xb] = -(auVar50[0xb] == auVar41[3]);
  auVar53[0xc] = -(auVar50[0xc] == auVar41[4]);
  auVar53[0xd] = -(auVar50[0xd] == auVar41[5]);
  auVar53[0xe] = -(auVar50[0xe] == auVar41[6]);
  auVar53[0xf] = -(auVar50[0xf] == auVar41[7]);
  uVar34 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar34;
  if (uVar34 != 0) {
    while( true ) {
      uVar8 = 0;
      for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      lVar30 = (uVar8 + uVar26 & *(ulonglong *)(lVar32 + 0x1b8)) * -0xd8;
      if (uVar29 == *(ulonglong *)(lVar24 + -0xd8 + lVar30)) break;
      uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
      uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
      if (uVar34 == 0) goto LAB_141170380;
    }
    if ((*(byte *)(lVar24 + lVar30 + -6) & 1) == 0) goto LAB_141170420;
    if ((longlong)pbStack_228 < 0) {
      uVar23 = 0;
LAB_1411707a3:
      pdb_142dc7e2a(uVar23,pbStack_190);
      goto LAB_141170853;
    }
    if (pbStack_228 == (byte *)0x0) {
      pbStack_190 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      pbStack_190 = pub_1406abab0((ulonglong)pbStack_228,1);
      if (pbStack_190 == (byte *)0x0) {
        uVar23 = 1;
        pbStack_190 = pbStack_228;
        goto LAB_1411707a3;
      }
      pub_142e32760(pbStack_190,lStack_200,pbStack_228);
    }
    uVar26 = *puVar6;
    if ((!SBORROW8(0,uVar26)) && (uVar26 != 0)) {
      pub_1406abac0((byte *)puVar6[1],uVar26,1);
    }
    *puVar6 = (ulonglong)pbStack_228;
    puVar6[1] = (ulonglong)pbStack_190;
    puVar6[2] = (ulonglong)pbStack_228;
    puVar6[3] = uVar29;
LAB_141170420:
    puVar20 = puStack_110;
    if ((fVar72 != 0.0) || (NAN(fVar72))) {
      uStack_187 = (uint7)((ulonglong)puStack_100 >> 8) | 0x100000;
      uVar23 = puStack_110[1];
      cStack_188 = (char)puStack_100;
      uStack_180 = _DAT_14329c330;
      uStack_178 = _UNK_14329c338;
      uStack_180 = pdb_1400affa0(&cStack_188);
      cStack_188 = (char)uVar23;
      uStack_187 = (uint7)((ulonglong)uVar23 >> 8);
      uVar23 = pdb_1400b0130(&cStack_188);
      pdb_14072caa0(auStack_1f8,puVar20,uVar23);
      uVar23 = auStack_1f8._0_8_;
      if (*(longlong *)(auStack_1f8._0_8_ + 0x1c8) != 0) {
        uVar26 = pdb_1400af0a0(auStack_1f8._0_8_ + 0x1d0,auStack_1f8 + 8);
        lVar24 = *(longlong *)(uVar23 + 0x1b0);
        uVar29 = *(ulonglong *)(uVar23 + 0x1b8);
        bVar40 = (byte)(uVar26 >> 0x39);
        auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
        auVar41 = pshuflw(auVar41,auVar41,0);
        lVar32 = 0;
        while( true ) {
          uVar26 = uVar26 & uVar29;
          auVar50 = *(undefined1 (*) [16])(lVar24 + uVar26);
          auVar54[0] = -(auVar50[0] == auVar41[0]);
          auVar54[1] = -(auVar50[1] == auVar41[1]);
          auVar54[2] = -(auVar50[2] == auVar41[2]);
          auVar54[3] = -(auVar50[3] == auVar41[3]);
          auVar54[4] = -(auVar50[4] == auVar41[4]);
          auVar54[5] = -(auVar50[5] == auVar41[5]);
          auVar54[6] = -(auVar50[6] == auVar41[6]);
          auVar54[7] = -(auVar50[7] == auVar41[7]);
          auVar54[8] = -(auVar50[8] == auVar41[0]);
          auVar54[9] = -(auVar50[9] == auVar41[1]);
          auVar54[10] = -(auVar50[10] == auVar41[2]);
          auVar54[0xb] = -(auVar50[0xb] == auVar41[3]);
          auVar54[0xc] = -(auVar50[0xc] == auVar41[4]);
          auVar54[0xd] = -(auVar50[0xd] == auVar41[5]);
          auVar54[0xe] = -(auVar50[0xe] == auVar41[6]);
          auVar54[0xf] = -(auVar50[0xf] == auVar41[7]);
          uVar34 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar54[0xf] >> 7) << 0xf;
          uVar31 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar35 = (uVar8 + uVar26 & uVar29) * -0xd8;
            if ((byte *)auStack_1f8._8_8_ == *(byte **)(lVar24 + -0xd8 + lVar35)) {
              lVar24 = lVar24 + lVar35;
              *(undefined8 *)(lVar24 + -0x9c) = 0;
              *(undefined8 *)(lVar24 + -0x94) = 0;
              *(undefined8 *)(lVar24 + -0xa8) = 0;
              *(undefined8 *)(lVar24 + -0xa0) = 0;
              *(undefined8 *)(lVar24 + -0xb8) = 0;
              *(undefined8 *)(lVar24 + -0xb0) = 0;
              *(float *)(lVar24 + -0x8c) = fVar72;
              *(undefined4 *)(lVar24 + -0x88) = 0;
              *(float *)(lVar24 + -0x84) = fVar72;
              *(undefined8 *)(lVar24 + -0x80) = 0;
              *(undefined8 *)(lVar24 + -0x79) = 0;
              *(undefined1 *)(lVar24 + -0x71) = 4;
              uStack_e8 = uStack_1e8;
              uVar23 = auStack_1f8._0_8_;
              uStack_f8 = auStack_1f8._0_8_;
              pbStack_f0 = (byte *)auStack_1f8._8_8_;
              if (*(longlong *)(auStack_1f8._0_8_ + 0x1c8) == 0) goto LAB_14117078f;
              uVar26 = pdb_1400af0a0(auStack_1f8._0_8_ + 0x1d0,&pbStack_f0);
              lVar24 = *(longlong *)(uVar23 + 0x1b0);
              uVar29 = *(ulonglong *)(uVar23 + 0x1b8);
              bVar40 = (byte)(uVar26 >> 0x39);
              auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
              auVar41 = pshuflw(auVar41,auVar41,0);
              lVar32 = 0;
              goto LAB_1411705f8;
            }
            uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
            uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
          }
          auVar47[0] = -(auVar50[0] == cVar56);
          auVar47[1] = -(auVar50[1] == cVar57);
          auVar47[2] = -(auVar50[2] == cVar58);
          auVar47[3] = -(auVar50[3] == cVar59);
          auVar47[4] = -(auVar50[4] == cVar60);
          auVar47[5] = -(auVar50[5] == cVar61);
          auVar47[6] = -(auVar50[6] == cVar62);
          auVar47[7] = -(auVar50[7] == cVar63);
          auVar47[8] = -(auVar50[8] == cVar64);
          auVar47[9] = -(auVar50[9] == cVar65);
          auVar47[10] = -(auVar50[10] == cVar66);
          auVar47[0xb] = -(auVar50[0xb] == cVar67);
          auVar47[0xc] = -(auVar50[0xc] == cVar68);
          auVar47[0xd] = -(auVar50[0xd] == cVar69);
          auVar47[0xe] = -(auVar50[0xe] == cVar70);
          auVar47[0xf] = -(auVar50[0xf] == cVar71);
          if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x2f,0) & 1) != 0) || (SUB161(auVar47 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
          uVar26 = uVar26 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142fa6b30);
    }
    goto LAB_141170665;
  }
LAB_141170380:
  auVar46[0] = -(auVar50[0] == cVar56);
  auVar46[1] = -(auVar50[1] == cVar57);
  auVar46[2] = -(auVar50[2] == cVar58);
  auVar46[3] = -(auVar50[3] == cVar59);
  auVar46[4] = -(auVar50[4] == cVar60);
  auVar46[5] = -(auVar50[5] == cVar61);
  auVar46[6] = -(auVar50[6] == cVar62);
  auVar46[7] = -(auVar50[7] == cVar63);
  auVar46[8] = -(auVar50[8] == cVar64);
  auVar46[9] = -(auVar50[9] == cVar65);
  auVar46[10] = -(auVar50[10] == cVar66);
  auVar46[0xb] = -(auVar50[0xb] == cVar67);
  auVar46[0xc] = -(auVar50[0xc] == cVar68);
  auVar46[0xd] = -(auVar50[0xd] == cVar69);
  auVar46[0xe] = -(auVar50[0xe] == cVar70);
  auVar46[0xf] = -(auVar50[0xf] == cVar71);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_14117073b;
  uVar26 = uVar26 + lVar35 + 0x10;
  lVar35 = lVar35 + 0x10;
  goto LAB_141170336;
LAB_1411705f8:
  uVar26 = uVar26 & uVar29;
  pcVar1 = (char *)(lVar24 + uVar26);
  auVar55[0] = -(*pcVar1 == auVar41[0]);
  auVar55[1] = -(pcVar1[1] == auVar41[1]);
  auVar55[2] = -(pcVar1[2] == auVar41[2]);
  auVar55[3] = -(pcVar1[3] == auVar41[3]);
  auVar55[4] = -(pcVar1[4] == auVar41[4]);
  auVar55[5] = -(pcVar1[5] == auVar41[5]);
  auVar55[6] = -(pcVar1[6] == auVar41[6]);
  auVar55[7] = -(pcVar1[7] == auVar41[7]);
  auVar55[8] = -(pcVar1[8] == auVar41[0]);
  auVar55[9] = -(pcVar1[9] == auVar41[1]);
  auVar55[10] = -(pcVar1[10] == auVar41[2]);
  auVar55[0xb] = -(pcVar1[0xb] == auVar41[3]);
  auVar55[0xc] = -(pcVar1[0xc] == auVar41[4]);
  auVar55[0xd] = -(pcVar1[0xd] == auVar41[5]);
  auVar55[0xe] = -(pcVar1[0xe] == auVar41[6]);
  auVar55[0xf] = -(pcVar1[0xf] == auVar41[7]);
  uVar34 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
  uVar31 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar31; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar35 = (uVar8 + uVar26 & uVar29) * -0xd8;
    if (pbStack_f0 == *(byte **)(lVar24 + -0xd8 + lVar35)) goto LAB_14117065e;
    uVar34 = (ushort)(uVar31 - 1) & (ushort)uVar31;
    uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar34);
  }
  auVar48[0] = -(*pcVar1 == cVar56);
  auVar48[1] = -(pcVar1[1] == cVar57);
  auVar48[2] = -(pcVar1[2] == cVar58);
  auVar48[3] = -(pcVar1[3] == cVar59);
  auVar48[4] = -(pcVar1[4] == cVar60);
  auVar48[5] = -(pcVar1[5] == cVar61);
  auVar48[6] = -(pcVar1[6] == cVar62);
  auVar48[7] = -(pcVar1[7] == cVar63);
  auVar48[8] = -(pcVar1[8] == cVar64);
  auVar48[9] = -(pcVar1[9] == cVar65);
  auVar48[10] = -(pcVar1[10] == cVar66);
  auVar48[0xb] = -(pcVar1[0xb] == cVar67);
  auVar48[0xc] = -(pcVar1[0xc] == cVar68);
  auVar48[0xd] = -(pcVar1[0xd] == cVar69);
  auVar48[0xe] = -(pcVar1[0xe] == cVar70);
  auVar48[0xf] = -(pcVar1[0xf] == cVar71);
  if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') {
LAB_14117078f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar26 = uVar26 + lVar32 + 0x10;
  lVar32 = lVar32 + 0x10;
  goto LAB_1411705f8;
LAB_14117065e:
  pbVar21 = (byte *)(lVar24 + lVar35 + -5);
  *pbVar21 = *pbVar21 | 2;
LAB_141170665:
  puStack_100 = (undefined8 *)((longlong)puStack_100 + 1);
  uVar29 = (ulonglong)uStack_114;
  pbVar12 = pbVar36;
  pbVar21 = pbVar39;
  if ((uStack_114 & 1) != 0) {
LAB_14117067d:
    if (uVar28 != 0) {
      pub_1406abac0(pbStack_108,uVar28,1);
    }
    param_1[2] = puStack_110[2];
    uVar23 = puStack_110[1];
    *param_1 = *puStack_110;
    param_1[1] = uVar23;
    return;
  }
  goto joined_r0x00014116f905;
LAB_14117073b:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_141170853;
LAB_14117071d:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_141170853;
}

