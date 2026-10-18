// VA 0x140a08d10, PDB extent 4638 bytes
// country_core::systems::terrain::edit_terrain_stroke::edit_terrain_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/edit_terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::edit_terrain_stroke::edit_terrain_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/edit_terrain_stroke.rs
   Extent: 4638 */

void pdb_140a08d10(undefined8 *param_1,float *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  float fVar10;
  undefined8 uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float fVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined *puVar23;
  longlong *plVar24;
  float *pfVar25;
  float *pfVar26;
  uint uVar27;
  float *pfVar28;
  ulonglong uVar29;
  longlong lVar30;
  float *pfVar31;
  float *pfVar32;
  uint uVar33;
  ushort uVar34;
  longlong lVar35;
  float *pfVar36;
  undefined *unaff_R13;
  float *pfVar37;
  byte bVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  float fVar45;
  float fVar46;
  undefined8 uStack_1d8;
  float *pfStack_1d0;
  code *pcStack_1c8;
  float *pfStack_1c0;
  longlong lStack_1b8;
  undefined4 *puStack_1b0;
  longlong *plStack_1a8;
  longlong lStack_1a0;
  float *pfStack_198;
  float *pfStack_190;
  float *pfStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  float **ppfStack_128;
  longlong lStack_120;
  float fStack_118;
  undefined4 uStack_114;
  float *pfStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  undefined1 uStack_e9;
  float fStack_e8;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  cStack_e1 = pdb_140e94b40();
  if (cStack_e1 == '\0') goto LAB_140a08f32;
  pfVar36 = (float *)&UNK_143035a32;
  pfVar31 = (float *)0x48;
  uVar29 = 0x48;
  lVar21 = pdb_140a0a4c0(&UNK_143035a32);
  if (lVar21 == 1) {
    if (0x48 < uVar29) {
LAB_140a09c89:
      pdb_142dc8070(&UNK_143035a32,0x48,0);
LAB_140a09ca9:
      pdb_142dc8070(&UNK_143035a32,0x48);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pfVar36 = (float *)&UNK_143035a32;
    uVar22 = pdb_140a0a4c0(&UNK_143035a32);
    if ((uVar22 & 1) != 0) {
      if (0x48 < uVar29 + 2) goto LAB_140a09ca9;
      pfVar31 = (float *)(0x46 - uVar29);
      pfVar36 = (float *)(&UNK_143035a34 + uVar29);
    }
  }
  puVar23 = &UNK_14303568d;
  unaff_R13 = &UNK_14303564f;
  do {
    pbVar1 = puVar23 + -1;
    uVar27 = (uint)(char)*pbVar1;
    if ((int)uVar27 < 0) {
      bVar38 = puVar23[-2];
      if ((char)bVar38 < -0x40) {
        bVar9 = puVar23[-3];
        if ((char)bVar9 < -0x40) {
          pbVar2 = puVar23 + -4;
          puVar23 = puVar23 + -4;
          uVar27 = bVar9 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar23 = puVar23 + -3;
          uVar27 = bVar9 & 0xf;
        }
        uVar27 = bVar38 & 0x3f | uVar27 << 6;
      }
      else {
        puVar23 = puVar23 + -2;
        uVar27 = bVar38 & 0x1f;
      }
      uVar27 = (uint)(*pbVar1 & 0x3f) | uVar27 << 6;
      if (uVar27 != 0x5c) goto LAB_140a08e89;
LAB_140a08ea6:
      if (puVar23 + -0x14303564e < (undefined *)0x3f) {
        pfVar37 = (float *)(0x3d - (longlong)(puVar23 + -0x14303564f));
        unaff_R13 = puVar23 + 1;
        goto LAB_140a08eca;
      }
      pdb_142dc8070(&UNK_14303564f,0x3e,puVar23 + -0x14303564e,0x3e,&UNK_143035b18);
      goto LAB_140a09c89;
    }
    puVar23 = puVar23 + -1;
    if (uVar27 == 0x5c) goto LAB_140a08ea6;
LAB_140a08e89:
    if (uVar27 == 0x2f) goto LAB_140a08ea6;
  } while (puVar23 != &UNK_14303564f);
  pfVar37 = (float *)0x3e;
LAB_140a08eca:
  plVar24 = (longlong *)pdb_140e97000();
  if ((char)plVar24[0xd] != '\x01') goto LAB_140a09c0b;
LAB_140a08ed9:
  if (*plVar24 == 0) {
    *plVar24 = -1;
    plStack_f8 = plVar24;
    uStack_1d8 = pdb_140e94f10(plVar24 + 1,pfVar36,pfVar31,unaff_R13,pfVar37,1,0);
    *plStack_f8 = *plStack_f8 + 1;
LAB_140a08f32:
    pfVar36 = *(float **)param_2;
    lVar21 = *(longlong *)(param_2 + 2);
    uVar29 = *(ulonglong *)pfVar36;
    pfVar37 = (float *)0x0;
    pfVar31 = (float *)(uVar29 - *(ulonglong *)(lVar21 + 0x18));
    if (uVar29 < *(ulonglong *)(lVar21 + 0x18)) {
      pfVar31 = pfVar37;
    }
    pfVar28 = (float *)(uVar29 - *(ulonglong *)(lVar21 + 0x38));
    if (uVar29 < *(ulonglong *)(lVar21 + 0x38)) {
      pfVar28 = pfVar37;
    }
    pfVar25 = (float *)((longlong)pfVar31 * 0x30 + *(longlong *)(lVar21 + 8));
    pfVar32 = *(float **)(lVar21 + 0x10);
    param_2 = (float *)((longlong)pfVar32 - (longlong)pfVar31);
    if (pfVar32 < pfVar31) {
      param_2 = pfVar37;
    }
    if (pfVar32 < pfVar31) {
      pfVar25 = (float *)0x8;
    }
    pfVar31 = (float *)((longlong)pfVar28 * 0x30 + *(longlong *)(lVar21 + 0x28));
    pfVar32 = (float *)((longlong)*(float **)(lVar21 + 0x30) - (longlong)pfVar28);
    if (*(float **)(lVar21 + 0x30) < pfVar28) {
      pfVar31 = (float *)0x8;
      pfVar32 = pfVar37;
    }
    *(longlong *)pfVar36 = (*(longlong *)(lVar21 + 0x40) - (longlong)pfVar32) - (longlong)param_2;
    fVar20 = _DAT_142e37870;
    pfStack_198 = pfVar25 + (longlong)param_2 * 0xc;
    pfStack_190 = pfVar31 + (longlong)pfVar32 * 0xc;
    fStack_118 = param_3[7];
    plStack_f8 = *(longlong **)param_3;
    pfStack_1c0 = *(float **)(param_3 + 4);
    lVar21 = *param_7;
    plStack_1a8 = (longlong *)*param_5;
    fStack_e8 = param_4[7];
    lStack_100 = *(longlong *)param_4;
    pfStack_110 = *(float **)(param_4 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_6 + 0x1c);
    lStack_120 = *param_6;
    puStack_1b0 = (undefined4 *)param_6[2];
    iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar16 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar17 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar18 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    lStack_1b8 = (longlong)plStack_f8 + 0x28;
    lStack_108 = lStack_100 + 0x20;
    lStack_1a0 = lStack_120 + 0x20;
    pfVar37 = (float *)0x8;
    pfStack_188 = pfVar36;
LAB_140a09098:
    do {
      if ((pfVar25 == (float *)0x0) || (pfVar25 == pfStack_198)) {
        if ((pfVar31 == (float *)0x0) || (pfVar31 == pfStack_190)) goto LAB_140a0941a;
        pfVar25 = (float *)0x0;
        param_2 = pfVar31;
        pfVar31 = pfVar31 + 0xc;
      }
      else {
        param_2 = pfVar25;
        pfVar25 = pfVar25 + 0xc;
      }
      *(longlong *)pfVar36 = *(longlong *)pfVar36 + 1;
      *pfStack_1c0 = fStack_118;
      fVar10 = param_2[9];
      uStack_180 = CONCAT44(uStack_180._4_4_,fVar10);
      pfVar37 = pfVar25;
      if (*(longlong *)((longlong)plStack_f8 + 0x20) != 0) {
        uVar29 = pdb_1400aede0(lStack_1b8,&uStack_180);
        unaff_R13 = *(undefined **)((longlong)plStack_f8 + 8);
        bVar38 = (byte)(uVar29 >> 0x39);
        auVar40 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar40 = pshuflw(auVar40,auVar40,0);
        lVar30 = 0;
        while( true ) {
          uVar29 = uVar29 & *(ulonglong *)((longlong)plStack_f8 + 0x10);
          auVar8 = *(undefined1 (*) [16])(unaff_R13 + uVar29);
          auVar43[0] = -(auVar8[0] == auVar40[0]);
          auVar43[1] = -(auVar8[1] == auVar40[1]);
          auVar43[2] = -(auVar8[2] == auVar40[2]);
          auVar43[3] = -(auVar8[3] == auVar40[3]);
          auVar43[4] = -(auVar8[4] == auVar40[4]);
          auVar43[5] = -(auVar8[5] == auVar40[5]);
          auVar43[6] = -(auVar8[6] == auVar40[6]);
          auVar43[7] = -(auVar8[7] == auVar40[7]);
          auVar43[8] = -(auVar8[8] == auVar40[0]);
          auVar43[9] = -(auVar8[9] == auVar40[1]);
          auVar43[10] = -(auVar8[10] == auVar40[2]);
          auVar43[0xb] = -(auVar8[0xb] == auVar40[3]);
          auVar43[0xc] = -(auVar8[0xc] == auVar40[4]);
          auVar43[0xd] = -(auVar8[0xd] == auVar40[5]);
          auVar43[0xe] = -(auVar8[0xe] == auVar40[6]);
          auVar43[0xf] = -(auVar8[0xf] == auVar40[7]);
          uVar34 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
          uVar27 = (uint)uVar34;
          while (uVar34 != 0) {
            uVar33 = 0;
            for (uVar13 = uVar27; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
            lVar35 = (uVar33 + uVar29 & *(ulonglong *)((longlong)plStack_f8 + 0x10)) * -0x30;
            if (fVar10 == *(float *)(unaff_R13 + lVar35 + -0x30)) {
              unaff_R13 = unaff_R13 + lVar35;
              if (*(longlong *)(unaff_R13 + -0x18) == 0) goto LAB_140a09c40;
              uVar29 = *(ulonglong *)(param_2 + 4);
              if (uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(0,0,&UNK_143035718);
              }
              param_3 = *(float **)(param_2 + 2);
              pfVar36 = *(float **)(unaff_R13 + -0x20);
              fVar10 = pfVar36[2];
              fVar39 = *pfVar36;
              fVar46 = pfVar36[1];
              fVar45 = *param_3;
              fVar3 = param_3[1];
              fVar4 = param_3[2];
              fVar5 = *(float *)(lVar21 + 0x28);
              *(undefined8 *)(unaff_R13 + -0x18) = 0;
              if (*(ulonglong *)(unaff_R13 + -0x28) < uVar29) {
                pdb_142d7f1b0(unaff_R13 + -0x28,0,uVar29,4,0xc);
                pfVar36 = *(float **)(unaff_R13 + -0x20);
                lVar30 = *(longlong *)(unaff_R13 + -0x18);
              }
              else {
                lVar30 = 0;
              }
              pub_142e32760(pfVar36 + lVar30 * 3,param_3,uVar29 * 0xc);
              pfVar36 = pfStack_188;
              *(ulonglong *)(unaff_R13 + -0x18) = lVar30 + uVar29;
              uVar6 = *(undefined4 *)(unaff_R13 + -0x10);
              puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,param_2[8]);
              uStack_180 = *(undefined8 *)(param_2 + 6);
              uVar7 = *(undefined4 *)(unaff_R13 + -8);
              *pfStack_110 = fStack_e8;
              lVar30 = *(longlong *)(lStack_100 + 0x30);
              uVar11 = *(undefined8 *)(lStack_100 + 0x40);
              if (lVar30 == *(longlong *)(lStack_100 + 0x20)) {
                pdb_142d7ede0(lStack_108);
              }
              lVar35 = *(longlong *)(lStack_100 + 0x28);
              *(undefined8 *)(lVar35 + lVar30 * 0x28) = uVar11;
              *(undefined4 *)(lVar35 + 8 + lVar30 * 0x28) = 3;
              *(undefined8 *)(lVar35 + 0xc + lVar30 * 0x28) = uStack_180;
              *(undefined4 *)(lVar35 + 0x14 + lVar30 * 0x28) = puStack_178._0_4_;
              *(undefined4 *)(lVar35 + 0x18 + lVar30 * 0x28) = uVar6;
              *(undefined4 *)(lVar35 + 0x1c + lVar30 * 0x28) = uVar7;
              *(float *)(lVar35 + 0x20 + lVar30 * 0x28) =
                   (fVar5 * SQRT((fVar10 - fVar4) * (fVar10 - fVar4) +
                                 (fVar46 - fVar3) * (fVar46 - fVar3) +
                                 (fVar39 - fVar45) * (fVar39 - fVar45))) / fVar20;
              *(longlong *)(lStack_100 + 0x30) = lVar30 + 1;
              *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
              *puStack_1b0 = uStack_114;
              lVar30 = *(longlong *)(lStack_120 + 0x30);
              param_2 = *(float **)(lStack_120 + 0x40);
              if (lVar30 == *(longlong *)(lStack_120 + 0x20)) {
                pdb_142d7e8a0(lStack_1a0);
              }
              *(float **)(*(longlong *)(lStack_120 + 0x28) + lVar30 * 8) = param_2;
              *(longlong *)(lStack_120 + 0x30) = lVar30 + 1;
              *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
              LOCK();
              *plStack_1a8 = *plStack_1a8 + 1;
              UNLOCK();
              goto LAB_140a09098;
            }
            uVar34 = (ushort)(uVar27 - 1) & (ushort)uVar27;
            uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar34);
          }
          auVar41[0] = -(auVar8[0] == (char)iVar15);
          auVar41[1] = -(auVar8[1] == (char)((uint)iVar15 >> 8));
          auVar41[2] = -(auVar8[2] == (char)((uint)iVar15 >> 0x10));
          auVar41[3] = -(auVar8[3] == (char)((uint)iVar15 >> 0x18));
          auVar41[4] = -(auVar8[4] == (char)iVar16);
          auVar41[5] = -(auVar8[5] == (char)((uint)iVar16 >> 8));
          auVar41[6] = -(auVar8[6] == (char)((uint)iVar16 >> 0x10));
          auVar41[7] = -(auVar8[7] == (char)((uint)iVar16 >> 0x18));
          auVar41[8] = -(auVar8[8] == (char)iVar17);
          auVar41[9] = -(auVar8[9] == (char)((uint)iVar17 >> 8));
          auVar41[10] = -(auVar8[10] == (char)((uint)iVar17 >> 0x10));
          auVar41[0xb] = -(auVar8[0xb] == (char)((uint)iVar17 >> 0x18));
          auVar41[0xc] = -(auVar8[0xc] == (char)iVar18);
          auVar41[0xd] = -(auVar8[0xd] == (char)((uint)iVar18 >> 8));
          auVar41[0xe] = -(auVar8[0xe] == (char)((uint)iVar18 >> 0x10));
          auVar41[0xf] = -(auVar8[0xf] == (char)((uint)iVar18 >> 0x18));
          if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x2f,0) & 1) != 0) || (SUB161(auVar41 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
          uVar29 = uVar29 + lVar30 + 0x10;
          lVar30 = lVar30 + 0x10;
        }
      }
      if (*_DAT_143ca8e90 != 0) {
        param_2 = param_2 + 9;
        pcStack_1c8 = pdb_140a0b0c0;
        uStack_180 = 0;
        puStack_178 = &UNK_1430356ca;
        uStack_170 = 0x33;
        uStack_168 = 0;
        puStack_160 = &UNK_143035610;
        uStack_158 = 0x3e;
        uStack_150 = 1;
        puStack_148 = &UNK_1430356ca;
        uStack_140 = 0x33;
        uStack_138 = 0x2f00000001;
        puStack_130 = &UNK_143035730;
        ppfStack_128 = &pfStack_1d0;
        pfStack_1d0 = param_2;
        pdb_140f332f0(&uStack_e9,&uStack_180);
      }
    } while( true );
  }
  goto LAB_140a09bff;
LAB_140a0941a:
  pfVar31 = (float *)*param_1;
  lVar21 = param_1[1];
  uVar29 = *(ulonglong *)pfVar31;
  pfVar32 = (float *)0x0;
  pfVar28 = (float *)(uVar29 - *(ulonglong *)(lVar21 + 0x18));
  if (uVar29 < *(ulonglong *)(lVar21 + 0x18)) {
    pfVar28 = pfVar32;
  }
  pfVar25 = (float *)(uVar29 - *(ulonglong *)(lVar21 + 0x38));
  if (uVar29 < *(ulonglong *)(lVar21 + 0x38)) {
    pfVar25 = pfVar32;
  }
  pfVar26 = (float *)((longlong)pfVar28 * 0x28 + *(longlong *)(lVar21 + 8));
  pfVar19 = (float *)((longlong)*(float **)(lVar21 + 0x10) - (longlong)pfVar28);
  if (*(float **)(lVar21 + 0x10) < pfVar28) {
    pfVar26 = (float *)0x8;
    pfVar19 = pfVar32;
  }
  pfVar28 = (float *)((longlong)pfVar25 * 0x28 + *(longlong *)(lVar21 + 0x28));
  param_4 = (float *)((longlong)*(float **)(lVar21 + 0x30) - (longlong)pfVar25);
  if (*(float **)(lVar21 + 0x30) < pfVar25) {
    pfVar28 = (float *)0x8;
    param_4 = pfVar32;
  }
  *(longlong *)pfVar31 = (*(longlong *)(lVar21 + 0x40) - (longlong)param_4) - (longlong)pfVar19;
  fVar10 = _DAT_142e382c8;
  uVar27 = _DAT_142e377e0;
  fVar20 = _DAT_142e36f28;
  pfStack_190 = pfVar26 + (longlong)pfVar19 * 10;
  pfStack_188 = pfVar28 + (longlong)param_4 * 10;
  unaff_XMM6_Ba = 0xff;
  unaff_XMM6_Bb = 0xff;
  unaff_XMM6_Bc = 0xff;
  unaff_XMM6_Bd = 0xff;
  unaff_XMM6_Be = 0xff;
  unaff_XMM6_Bf = 0xff;
  unaff_XMM6_Bg = 0xff;
  unaff_XMM6_Bh = 0xff;
  unaff_XMM6_Bi = 0xff;
  unaff_XMM6_Bj = 0xff;
  unaff_XMM6_Bk = 0xff;
  unaff_XMM6_Bl = 0xff;
  unaff_XMM6_Bm = 0xff;
  unaff_XMM6_Bn = 0xff;
  unaff_XMM6_Bo = 0xff;
  unaff_XMM6_Bp = 0xff;
  pfStack_198 = pfVar31;
LAB_140a094f8:
  do {
    if ((pfVar26 == (float *)0x0) || (pfVar26 == pfStack_190)) {
      if ((pfVar28 == (float *)0x0) || (pfVar28 == pfStack_188)) break;
      pfVar26 = (float *)0x0;
      pfVar32 = pfVar28 + 10;
      pfVar37 = pfVar28;
    }
    else {
      pfVar32 = pfVar28;
      pfVar37 = pfVar26;
      pfVar26 = pfVar26 + 10;
    }
    pfVar28 = pfVar32;
    *(longlong *)pfStack_198 = *(longlong *)pfStack_198 + 1;
    *pfStack_1c0 = fStack_118;
    fVar39 = pfVar37[7];
    param_2 = (float *)(ulonglong)(uint)fVar39;
    uStack_180 = CONCAT44(uStack_180._4_4_,fVar39);
    param_4 = pfVar28;
    param_3 = pfVar26;
    if (*(longlong *)((longlong)plStack_f8 + 0x20) != 0) {
      uVar29 = pdb_1400aede0(lStack_1b8,&uStack_180);
      pfVar31 = *(float **)((longlong)plStack_f8 + 8);
      bVar38 = (byte)(uVar29 >> 0x39);
      auVar40 = ZEXT216(CONCAT11(bVar38,bVar38));
      auVar40 = pshuflw(auVar40,auVar40,0);
      lVar21 = 0;
      do {
        uVar29 = uVar29 & *(ulonglong *)((longlong)plStack_f8 + 0x10);
        auVar8 = *(undefined1 (*) [16])((longlong)pfVar31 + uVar29);
        auVar44[0] = -(auVar8[0] == auVar40[0]);
        auVar44[1] = -(auVar8[1] == auVar40[1]);
        auVar44[2] = -(auVar8[2] == auVar40[2]);
        auVar44[3] = -(auVar8[3] == auVar40[3]);
        auVar44[4] = -(auVar8[4] == auVar40[4]);
        auVar44[5] = -(auVar8[5] == auVar40[5]);
        auVar44[6] = -(auVar8[6] == auVar40[6]);
        auVar44[7] = -(auVar8[7] == auVar40[7]);
        auVar44[8] = -(auVar8[8] == auVar40[0]);
        auVar44[9] = -(auVar8[9] == auVar40[1]);
        auVar44[10] = -(auVar8[10] == auVar40[2]);
        auVar44[0xb] = -(auVar8[0xb] == auVar40[3]);
        auVar44[0xc] = -(auVar8[0xc] == auVar40[4]);
        auVar44[0xd] = -(auVar8[0xd] == auVar40[5]);
        auVar44[0xe] = -(auVar8[0xe] == auVar40[6]);
        auVar44[0xf] = -(auVar8[0xf] == auVar40[7]);
        uVar34 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
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
        uVar33 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar13 = 0;
          for (uVar14 = uVar33; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar22 = uVar13 + uVar29 & *(ulonglong *)((longlong)plStack_f8 + 0x10);
          if (fVar39 == pfVar31[uVar22 * -0xc + -0xc]) {
            if (*pfVar37 != 0.0) {
              if (*pfVar37 == 1.4013e-45) {
                fVar39 = pfVar37[1];
                fVar46 = pfVar31[uVar22 * -0xc + -4];
                pfVar31[uVar22 * -0xc + -4] = fVar39;
                puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                uStack_180 = *(undefined8 *)(pfVar37 + 4);
                *pfStack_110 = fStack_e8;
                lVar21 = *(longlong *)(lStack_100 + 0x30);
                pfVar36 = *(float **)(lStack_100 + 0x40);
                if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                  pdb_142d7ede0(lStack_108);
                }
                lVar30 = *(longlong *)(lStack_100 + 0x28);
                *(float **)(lVar30 + lVar21 * 0x28) = pfVar36;
                *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 1;
                *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar39;
                *(uint *)(lVar30 + 0x1c + lVar21 * 0x28) = (uint)(fVar39 - fVar46) & uVar27;
              }
              else {
                fVar39 = pfVar31[uVar22 * -0xc + -4];
                fVar46 = 0.0;
                if (0.0 <= pfVar37[1] + fVar39) {
                  fVar46 = pfVar37[1] + fVar39;
                }
                fVar45 = fVar20;
                if (fVar46 <= fVar20) {
                  fVar45 = fVar46;
                }
                pfVar31[uVar22 * -0xc + -4] = fVar45;
                if ((fVar39 == fVar45) && (!NAN(fVar39) && !NAN(fVar45))) goto LAB_140a0982c;
                puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                uStack_180 = *(undefined8 *)(pfVar37 + 4);
                *pfStack_110 = fStack_e8;
                lVar21 = *(longlong *)(lStack_100 + 0x30);
                unaff_R13 = *(undefined **)(lStack_100 + 0x40);
                if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                  pdb_142d7ede0(lStack_108);
                }
                lVar30 = *(longlong *)(lStack_100 + 0x28);
                *(undefined **)(lVar30 + lVar21 * 0x28) = unaff_R13;
                *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 1;
                *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar45;
                *(uint *)(lVar30 + 0x1c + lVar21 * 0x28) = (uint)(fVar39 - fVar45) & uVar27;
              }
              *(longlong *)(lStack_100 + 0x30) = lVar21 + 1;
              *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
            }
LAB_140a0982c:
            if (pfVar37[2] != 0.0) {
              if (pfVar37[2] == 1.4013e-45) {
                fVar39 = pfVar37[3];
                fVar46 = fVar39 - pfVar31[uVar22 * -0xc + -2];
                if (((fVar39 == 0.0) && (!NAN(fVar39))) && (0.0 < pfVar31[uVar22 * -0xc + -2])) {
                  fVar45 = pfVar31[uVar22 * -0xc + -4];
                  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                  uStack_180 = *(undefined8 *)(pfVar37 + 4);
                  *pfStack_110 = fStack_e8;
                  lVar21 = *(longlong *)(lStack_100 + 0x30);
                  pfVar36 = *(float **)(lStack_100 + 0x40);
                  if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                    pdb_142d7ede0(lStack_108);
                  }
                  lVar30 = *(longlong *)(lStack_100 + 0x28);
                  *(float **)(lVar30 + lVar21 * 0x28) = pfVar36;
                  *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 4;
                  *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                  *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                  *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar45;
                  *(uint *)(lVar30 + 0x1c + lVar21 * 0x28) = (uint)fVar46 & uVar27;
                  *(longlong *)(lStack_100 + 0x30) = lVar21 + 1;
                  *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
                }
                pfVar31[uVar22 * -0xc + -2] = fVar39;
                fVar45 = pfVar31[uVar22 * -0xc + -4];
                puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                uStack_180 = *(undefined8 *)(pfVar37 + 4);
                *pfStack_110 = fStack_e8;
                lVar21 = *(longlong *)(lStack_100 + 0x30);
                uVar11 = *(undefined8 *)(lStack_100 + 0x40);
                if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                  pdb_142d7ede0(lStack_108);
                }
                lVar30 = *(longlong *)(lStack_100 + 0x28);
                *(undefined8 *)(lVar30 + lVar21 * 0x28) = uVar11;
                *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 2;
                *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar45;
                *(float *)(lVar30 + 0x1c + lVar21 * 0x28) = fVar39;
                *(uint *)(lVar30 + 0x20 + lVar21 * 0x28) = (uint)fVar46 & uVar27;
LAB_140a09b1e:
                *(longlong *)(lStack_100 + 0x30) = lVar21 + 1;
                *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
              }
              else {
                fVar39 = pfVar37[3];
                fVar46 = pfVar31[uVar22 * -0xc + -2];
                if (((0.0 < fVar39) && (fVar46 == 0.0)) && (!NAN(fVar46))) {
                  pfVar31[uVar22 * -0xc + -2] = 1.0;
                  fVar46 = fVar20;
                }
                fVar39 = fVar39 + fVar46;
                fVar45 = 0.0;
                if (0.0 <= fVar39) {
                  fVar45 = fVar39;
                }
                fVar39 = fVar10;
                if (fVar45 <= fVar10) {
                  fVar39 = fVar45;
                }
                fVar39 = (float)(~-(uint)(fVar39 < fVar20) & (uint)fVar39);
                pfVar31[uVar22 * -0xc + -2] = fVar39;
                if ((fVar46 != fVar39) || (NAN(fVar46) || NAN(fVar39))) {
                  fVar45 = pfVar31[uVar22 * -0xc + -4];
                  puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                  uStack_180 = *(undefined8 *)(pfVar37 + 4);
                  *pfStack_110 = fStack_e8;
                  lVar21 = *(longlong *)(lStack_100 + 0x30);
                  unaff_R13 = *(undefined **)(lStack_100 + 0x40);
                  if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                    pdb_142d7ede0(lStack_108);
                  }
                  lVar30 = *(longlong *)(lStack_100 + 0x28);
                  *(undefined **)(lVar30 + lVar21 * 0x28) = unaff_R13;
                  *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 2;
                  *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                  *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                  *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar45;
                  *(float *)(lVar30 + 0x1c + lVar21 * 0x28) = fVar39;
                  *(uint *)(lVar30 + 0x20 + lVar21 * 0x28) = (uint)(fVar46 - fVar39) & uVar27;
                  *(longlong *)(lStack_100 + 0x30) = lVar21 + 1;
                  *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
                }
                if (0.0 < fVar46) {
                  fVar39 = pfVar31[uVar22 * -0xc + -2];
                  if ((fVar39 == 0.0) && (!NAN(fVar39))) {
                    fVar45 = pfVar31[uVar22 * -0xc + -4];
                    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,pfVar37[6]);
                    uStack_180 = *(undefined8 *)(pfVar37 + 4);
                    *pfStack_110 = fStack_e8;
                    lVar21 = *(longlong *)(lStack_100 + 0x30);
                    uVar11 = *(undefined8 *)(lStack_100 + 0x40);
                    if (lVar21 == *(longlong *)(lStack_100 + 0x20)) {
                      pdb_142d7ede0(lStack_108);
                    }
                    lVar30 = *(longlong *)(lStack_100 + 0x28);
                    *(undefined8 *)(lVar30 + lVar21 * 0x28) = uVar11;
                    *(undefined4 *)(lVar30 + 8 + lVar21 * 0x28) = 4;
                    *(undefined8 *)(lVar30 + 0xc + lVar21 * 0x28) = uStack_180;
                    *(undefined4 *)(lVar30 + 0x14 + lVar21 * 0x28) = puStack_178._0_4_;
                    *(float *)(lVar30 + 0x18 + lVar21 * 0x28) = fVar45;
                    *(uint *)(lVar30 + 0x1c + lVar21 * 0x28) = (uint)(fVar46 - fVar39) & uVar27;
                    goto LAB_140a09b1e;
                  }
                }
              }
            }
            *puStack_1b0 = uStack_114;
            lVar21 = *(longlong *)(lStack_120 + 0x30);
            param_2 = *(float **)(lStack_120 + 0x40);
            if (lVar21 == *(longlong *)(lStack_120 + 0x20)) {
              pdb_142d7e8a0(lStack_1a0);
            }
            *(float **)(*(longlong *)(lStack_120 + 0x28) + lVar21 * 8) = param_2;
            pfVar31 = (float *)(lVar21 + 1);
            *(float **)(lStack_120 + 0x30) = pfVar31;
            *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
            LOCK();
            *plStack_1a8 = *plStack_1a8 + 1;
            UNLOCK();
            goto LAB_140a094f8;
          }
          uVar34 = (ushort)(uVar33 - 1) & (ushort)uVar33;
          uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar34);
        }
        auVar42[0] = -(auVar8[0] == -1);
        auVar42[1] = -(auVar8[1] == -1);
        auVar42[2] = -(auVar8[2] == -1);
        auVar42[3] = -(auVar8[3] == -1);
        auVar42[4] = -(auVar8[4] == -1);
        auVar42[5] = -(auVar8[5] == -1);
        auVar42[6] = -(auVar8[6] == -1);
        auVar42[7] = -(auVar8[7] == -1);
        auVar42[8] = -(auVar8[8] == -1);
        auVar42[9] = -(auVar8[9] == -1);
        auVar42[10] = -(auVar8[10] == -1);
        auVar42[0xb] = -(auVar8[0xb] == -1);
        auVar42[0xc] = -(auVar8[0xc] == -1);
        auVar42[0xd] = -(auVar8[0xd] == -1);
        auVar42[0xe] = -(auVar8[0xe] == -1);
        auVar42[0xf] = -(auVar8[0xf] == -1);
        if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x1f,0) & 1) != 0) || (SUB161(auVar42 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
        uVar29 = uVar29 + lVar21 + 0x10;
        lVar21 = lVar21 + 0x10;
      } while( true );
    }
    if (*_DAT_143ca8e90 != 0) {
      pfVar37 = pfVar37 + 7;
      pcStack_1c8 = pdb_140a0b0c0;
      uStack_180 = 0;
      puStack_178 = &UNK_1430356ca;
      uStack_170 = 0x33;
      uStack_168 = 0;
      puStack_160 = &UNK_143035610;
      uStack_158 = 0x3e;
      uStack_150 = 1;
      puStack_148 = &UNK_1430356ca;
      uStack_140 = 0x33;
      uStack_138 = 0x4700000001;
      puStack_130 = &UNK_14303568d;
      ppfStack_128 = &pfStack_1d0;
      pfStack_1d0 = pfVar37;
      pdb_140f332f0(&uStack_e9);
    }
  } while( true );
  if (cStack_e1 != '\0') {
    plVar24 = (longlong *)pdb_140e97000();
    if (((char)plVar24[0xd] != '\x01') &&
       (plVar24 = (longlong *)pdb_142d8ec20(plVar24,0), plVar24 == (longlong *)0x0))
    goto LAB_140a09c33;
    if (*plVar24 != 0) {
LAB_140a09bff:
      plVar24 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a09c0b:
      plVar24 = (longlong *)pdb_142d8ec20(plVar24,0);
      if (plVar24 == (longlong *)0x0) {
LAB_140a09c33:
        pdb_142dc7890(&UNK_143326860);
LAB_140a09c40:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143035700);
      }
      goto LAB_140a08ed9;
    }
    *plVar24 = -1;
    plStack_f8 = plVar24;
    pdb_140e95370(plVar24 + 1,uStack_1d8);
    *plStack_f8 = *plStack_f8 + 1;
  }
  return;
}

