// VA 0x1407fd360, PDB extent 10211 bytes
// system_wall_constructor::segmentation::sample_wall_path_intersections::sample_wall_path_intersections
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/sample_wall_path_intersections.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::sample_wall_path_intersections::sample_wall_path_intersections
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/sample_wall_path_intersections.rs
   Extent: 10211 */

void pdb_1407fd360(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong *plVar20;
  float fVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  float *pfVar24;
  undefined *puVar25;
  undefined *puVar26;
  longlong lVar27;
  float *pfVar28;
  ulonglong uVar29;
  float *pfVar30;
  ushort uVar31;
  longlong lVar32;
  undefined *unaff_R12;
  float *pfVar33;
  float *unaff_R13;
  float *pfVar34;
  float *pfVar35;
  undefined1 *puVar36;
  undefined *puVar37;
  byte bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float in_XMM5_Da;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  longlong alStack_290 [2];
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  float *pfStack_238;
  byte *pbStack_230;
  float *pfStack_228;
  uint *puStack_218;
  ulonglong *puStack_210;
  longlong *plStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  longlong *plStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  longlong lStack_1c0;
  longlong *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_190;
  byte *pbStack_188;
  ulonglong uStack_180;
  float *pfStack_178;
  uint *puStack_170;
  float *pfStack_168;
  byte *pbStack_160;
  float *pfStack_158;
  float *pfStack_150;
  undefined *puStack_148;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  byte *pbStack_120;
  float *pfStack_118;
  float *pfStack_110;
  char cStack_102;
  undefined1 uStack_101;
  float *pfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar20 = param_2;
  cStack_102 = pdb_140e94b40();
  if (cStack_102 == '\0') goto LAB_1407fd56a;
  puVar36 = (undefined1 *)0x65;
  lVar13 = pdb_1407ffb50(0x65);
  puVar37 = &UNK_143006ca0;
  if (lVar13 == 1) {
    if ((longlong *)0x65 < plVar20) {
LAB_1407ff3d5:
      pdb_142dc8070(&UNK_143006ca0,0x65,0);
LAB_1407ff3f5:
      pdb_142dc8070(&UNK_143006ca0,0x65);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = pdb_1407ffb50(plVar20);
    if ((uVar14 & 1) != 0) {
      if (0x65 < (longlong)plVar20 + 2U) goto LAB_1407ff3f5;
      puVar36 = (undefined1 *)(99 - (longlong)plVar20);
      puVar37 = (undefined *)((longlong)plVar20 + 0x143006ca2);
    }
  }
  puVar25 = &UNK_143006bc2;
  unaff_R12 = &UNK_143006b70;
  do {
    bVar38 = puVar25[-1];
    uVar11 = (uint)(char)bVar38;
    if ((char)bVar38 < '\0') {
      bVar1 = puVar25[-2];
      if ((char)bVar1 < -0x40) {
        bVar2 = puVar25[-3];
        if ((char)bVar2 < -0x40) {
          pbVar19 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar11 = bVar2 & 0x3f | (*pbVar19 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar11 = bVar2 & 0xf;
        }
        uVar11 = bVar1 & 0x3f | uVar11 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar11 = bVar1 & 0x1f;
      }
      uVar11 = (uint)(bVar38 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_1407fd4d4;
LAB_1407fd4e6:
      puVar26 = puVar25 + -0x143006b6f;
      if ((undefined *)0x52 < puVar26) {
        pdb_142dc8070(&UNK_143006b70,0x52,puVar26,0x52,&UNK_143006d60);
        goto LAB_1407ff3d5;
      }
      unaff_R13 = (float *)(0x52 - (longlong)puVar26);
      unaff_R12 = puVar25 + 1;
      goto LAB_1407fd509;
    }
    puVar25 = puVar25 + -1;
    if (uVar11 == 0x5c) goto LAB_1407fd4e6;
LAB_1407fd4d4:
    if (uVar11 == 0x2f) goto LAB_1407fd4e6;
  } while (puVar25 != &UNK_143006b70);
  unaff_R13 = (float *)0x52;
LAB_1407fd509:
  pfVar15 = (float *)pdb_140e97000();
  if (*(char *)(pfVar15 + 0x1a) != '\x01') goto LAB_1407ff2d1;
  while (*(longlong *)pfVar15 != 0) {
LAB_1407ff2c5:
    pfVar15 = (float *)pdb_142dc8090(&UNK_1433079b0);
LAB_1407ff2d1:
    pfVar15 = (float *)pdb_142dd9610(pfVar15,0);
    if (pfVar15 == (float *)0x0) {
LAB_1407ff2e4:
      pdb_142dc7890(&UNK_143307940);
LAB_1407ff2f1:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
  }
  pfVar15[0] = -NAN;
  pfVar15[1] = -NAN;
  pfStack_100 = pfVar15;
  uStack_1b0 = pdb_140e94f10(pfVar15 + 2,puVar37,puVar36,unaff_R12,unaff_R13,1,0);
  *(longlong *)pfStack_100 = *(longlong *)pfStack_100 + 1;
LAB_1407fd56a:
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar20 = (longlong *)*param_2;
  pdb_140bfabf0(auStack_2b0);
  uStack_190 = 0;
  pbStack_188 = (byte *)0x4;
  uStack_180 = 0;
  puStack_210 = (ulonglong *)*param_3;
  lVar13 = param_3[1];
  uVar14 = *puStack_210;
  uVar18 = 0;
  uVar29 = uVar14 - *(ulonglong *)(lVar13 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar13 + 0x18)) {
    uVar29 = uVar18;
  }
  uVar23 = uVar14 - *(ulonglong *)(lVar13 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar13 + 0x38)) {
    uVar23 = uVar18;
  }
  param_3 = (undefined8 *)(uVar29 * 0x10 + *(longlong *)(lVar13 + 8));
  uVar14 = *(ulonglong *)(lVar13 + 0x10) - uVar29;
  if (*(ulonglong *)(lVar13 + 0x10) < uVar29) {
    param_3 = (undefined8 *)0x8;
    uVar14 = uVar18;
  }
  puVar16 = (undefined8 *)(uVar23 * 0x10 + *(longlong *)(lVar13 + 0x28));
  uVar29 = *(ulonglong *)(lVar13 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar13 + 0x30) < uVar23) {
    puVar16 = (undefined8 *)0x8;
    uVar29 = uVar18;
  }
  *puStack_210 = (*(longlong *)(lVar13 + 0x40) - uVar29) - uVar14;
  puStack_200 = param_3 + uVar14 * 2;
  puStack_1f8 = puVar16 + uVar29 * 2;
  plStack_208 = plVar20 + 4;
  param_2 = alStack_290;
  pbStack_160 = (byte *)0x4;
  puVar36 = auStack_280;
  puVar37 = auStack_2b0;
  puVar17 = puVar16;
  plStack_1f0 = plVar20;
  if (param_3 == (undefined8 *)0x0) goto LAB_1407fd670;
LAB_1407fd651:
  puVar17 = puVar16;
  if (param_3 == puStack_200) goto LAB_1407fd670;
  puStack_1e0 = param_3 + 2;
  puVar17 = param_3;
  puStack_1e8 = puVar16;
LAB_1407fd69c:
  *puStack_210 = *puStack_210 + 1;
  if (plStack_1f0[3] == 0) {
LAB_1407ff1e4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143006bc8);
  }
  uVar14 = pdb_1400af0a0(plStack_208,puVar17 + 1);
  lVar13 = *plStack_1f0;
  bVar38 = (byte)(uVar14 >> 0x39);
  auVar49 = ZEXT216(CONCAT11(bVar38,bVar38));
  auVar49 = pshuflw(auVar49,auVar49,0);
  lVar27 = 0;
  while( true ) {
    uVar14 = uVar14 & plStack_1f0[1];
    auVar50 = *(undefined1 (*) [16])(lVar13 + uVar14);
    auVar55[0] = -(auVar50[0] == auVar49[0]);
    auVar55[1] = -(auVar50[1] == auVar49[1]);
    auVar55[2] = -(auVar50[2] == auVar49[2]);
    auVar55[3] = -(auVar50[3] == auVar49[3]);
    auVar55[4] = -(auVar50[4] == auVar49[4]);
    auVar55[5] = -(auVar50[5] == auVar49[5]);
    auVar55[6] = -(auVar50[6] == auVar49[6]);
    auVar55[7] = -(auVar50[7] == auVar49[7]);
    auVar55[8] = -(auVar50[8] == auVar49[0]);
    auVar55[9] = -(auVar50[9] == auVar49[1]);
    auVar55[10] = -(auVar50[10] == auVar49[2]);
    auVar55[0xb] = -(auVar50[0xb] == auVar49[3]);
    auVar55[0xc] = -(auVar50[0xc] == auVar49[4]);
    auVar55[0xd] = -(auVar50[0xd] == auVar49[5]);
    auVar55[0xe] = -(auVar50[0xe] == auVar49[6]);
    auVar55[0xf] = -(auVar50[0xf] == auVar49[7]);
    uVar31 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
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
    uVar11 = (uint)uVar31;
    if (uVar31 != 0) break;
LAB_1407fd740:
    auVar54[0] = -(auVar50[0] == -1);
    auVar54[1] = -(auVar50[1] == -1);
    auVar54[2] = -(auVar50[2] == -1);
    auVar54[3] = -(auVar50[3] == -1);
    auVar54[4] = -(auVar50[4] == -1);
    auVar54[5] = -(auVar50[5] == -1);
    auVar54[6] = -(auVar50[6] == -1);
    auVar54[7] = -(auVar50[7] == -1);
    auVar54[8] = -(auVar50[8] == -1);
    auVar54[9] = -(auVar50[9] == -1);
    auVar54[10] = -(auVar50[10] == -1);
    auVar54[0xb] = -(auVar50[0xb] == -1);
    auVar54[0xc] = -(auVar50[0xc] == -1);
    auVar54[0xd] = -(auVar50[0xd] == -1);
    auVar54[0xe] = -(auVar50[0xe] == -1);
    auVar54[0xf] = -(auVar50[0xf] == -1);
    if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_1407ff1e4;
    uVar14 = uVar14 + lVar27 + 0x10;
    lVar27 = lVar27 + 0x10;
  }
  while( true ) {
    uVar4 = 0;
    for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar32 = (uVar4 + uVar14 & plStack_1f0[1]) * -0x2b0;
    if (puVar17[1] == *(longlong *)(lVar13 + -0x2b0 + lVar32)) break;
    uVar31 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar31);
    if (uVar31 == 0) goto LAB_1407fd740;
  }
  puStack_148 = (undefined *)(lVar13 + lVar32);
  pfVar15 = *(float **)(puStack_148 + -0x260);
  pfStack_158 = (float *)pdb_1406d0830(*(undefined8 *)(puStack_148 + -0x268));
  plStack_1b8 = (longlong *)(puStack_148 + -0x1e8);
  pfVar34 = *(float **)(puStack_148 + -0x1d8);
  pfVar35 = pfVar15;
  fVar39 = _DAT_142e36f28;
  if (pfVar34 < pfVar15) {
    pfVar28 = (float *)((longlong)pfVar15 - (longlong)pfVar34);
    pfVar35 = pfVar34;
    if ((float *)(*plStack_1b8 - (longlong)pfVar34) < pfVar28) {
      pfStack_100 = pfVar34;
      pdb_142d7f1b0(plStack_1b8,pfVar34,pfVar28,4,4);
      pfVar34 = *(float **)(puStack_148 + -0x1d8);
      pfVar35 = pfStack_100;
    }
    fVar39 = _DAT_142e36f28;
    lVar13 = *(longlong *)(puStack_148 + -0x1e0);
    puVar22 = (undefined4 *)(lVar13 + (longlong)pfVar34 * 4);
    if ((float *)0x1 < pfVar28) {
      pfStack_110 = pfVar28;
      pfStack_100 = pfVar35;
      pub_142e32780(puVar22,0);
      puVar22 = (undefined4 *)
                (lVar13 + (((longlong)pfVar15 + (longlong)pfVar34) - (longlong)pfStack_100) * 4 + -4
                );
      pfVar34 = (float *)((longlong)pfVar34 + (longlong)pfStack_110 + -1);
    }
    *puVar22 = 0;
    pfVar35 = (float *)((longlong)pfVar34 + 1);
  }
  *(float **)(puStack_148 + -0x1d8) = pfVar35;
  if (pfVar15 < (float *)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143006be0,0x5b,&UNK_143006c10);
  }
  lStack_1c0 = *(longlong *)(puStack_148 + -0x1e0);
  if (pfVar15 < pfVar35) {
    pfVar35 = pfVar15;
  }
  fVar61 = pfStack_158[2] - (pfStack_158[5] - pfStack_158[2]);
  fVar56 = *pfStack_158 - (pfStack_158[3] - *pfStack_158);
  pfVar15 = (float *)0x0;
  if (pfVar35 != (float *)0x0) {
    do {
      pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,pfStack_158[(longlong)pfVar15 * 3]);
      pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,pfStack_158[(longlong)pfVar15 * 3 + 2]);
      fVar39 = (float)pdb_140a7d8d0(puVar37);
      fVar40 = (float)pdb_140a7d8d0(auStack_2a0);
      fVar41 = (float)pdb_140a7d8d0(param_2);
      fVar42 = (float)pdb_140a7d8d0(puVar36);
      pfStack_168 = (float *)((longlong)pfVar15 + 1);
      fVar56 = fVar56 - pfStack_100._0_4_;
      fVar61 = fVar61 - pfStack_110._0_4_;
      auVar49._0_4_ = (float)((uint)fVar61 ^ _DAT_142e37820);
      auVar49._4_4_ = _UNK_142e37824;
      auVar49._8_4_ = _UNK_142e37828;
      auVar49._12_4_ = _UNK_142e3782c;
      fVar61 = _DAT_142e36f28 / SQRT(fVar56 * fVar56 + fVar61 * fVar61);
      register0x00001284 = auVar49._4_12_;
      auStack_1d8._0_4_ = auVar49._0_4_ * fVar61;
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar61 * fVar56);
      fVar42 = fVar39 + fVar40 + fVar41 + fVar42;
      fVar39 = 0.0;
      if (0.0 <= fVar42) {
        fVar39 = fVar42;
      }
      fVar56 = _DAT_142e36f28;
      if (fVar39 <= _DAT_142e36f28) {
        fVar56 = fVar39;
      }
      uVar14 = 0;
      fVar61 = _DAT_142e36f28;
      do {
        pfStack_178 = (float *)CONCAT44(pfStack_178._4_4_,fVar61);
        pfStack_150 = (float *)CONCAT44(pfStack_150._4_4_,fVar56);
        fVar39 = ((float)(longlong)uVar14 + _DAT_142e36f28) * _DAT_142e37ae4;
        auVar50._0_4_ = (float)((uint)fVar39 ^ _DAT_142e37820);
        auVar50._4_4_ = _UNK_142e37824;
        auVar50._8_4_ = _UNK_142e37828;
        auVar50._12_4_ = _UNK_142e3782c;
        auVar51._4_12_ = auVar50._4_12_;
        fVar39 = auVar50._0_4_ * fVar39;
        auVar51._0_4_ = fVar39 + fVar39;
        fVar61 = (float)pub_142e32a20(auVar51._0_8_);
        fVar56 = (float)pdb_140a7d8d0(puVar37);
        uVar43 = pdb_140a7d8d0(auStack_2a0);
        puStack_170 = (uint *)CONCAT44(puStack_170._4_4_,uVar43);
        fVar40 = (float)pdb_140a7d8d0(param_2);
        fVar41 = (float)pdb_140a7d8d0(puVar36);
        fVar42 = (float)pdb_140a7d8d0(puVar37);
        fVar44 = (float)pdb_140a7d8d0(auStack_2a0);
        fVar45 = (float)pdb_140a7d8d0(param_2);
        fVar46 = (float)pdb_140a7d8d0(puVar36);
        fVar39 = _DAT_142e36f28;
        uVar14 = uVar14 + 1;
        fVar41 = fVar56 + puStack_170._0_4_ + fVar40 + fVar41;
        fVar56 = 0.0;
        if (0.0 <= fVar41) {
          fVar56 = fVar41;
        }
        fVar40 = _DAT_142e36f28;
        if (fVar56 <= _DAT_142e36f28) {
          fVar40 = fVar56;
        }
        fVar46 = fVar42 + fVar44 + fVar45 + fVar46;
        fVar56 = 0.0;
        if (0.0 <= fVar46) {
          fVar56 = fVar46;
        }
        fVar41 = _DAT_142e36f28;
        if (fVar56 <= _DAT_142e36f28) {
          fVar41 = fVar56;
        }
        fVar56 = fVar41;
        if (fVar40 <= fVar41) {
          fVar56 = fVar40;
        }
        fVar56 = pfStack_150._0_4_ +
                 (float)(~-(uint)NAN(fVar40) & (uint)fVar56 | -(uint)NAN(fVar40) & (uint)fVar41) *
                 (fVar61 + fVar61);
        fVar61 = pfStack_178._0_4_ + fVar61 + fVar61;
      } while (uVar14 < 4);
      *(float *)(lStack_1c0 + (longlong)pfVar15 * 4) = fVar56 / fVar61;
      pfVar15 = pfStack_168;
      fVar56 = pfStack_100._0_4_;
      fVar61 = pfStack_110._0_4_;
    } while (pfStack_168 < pfVar35);
  }
  uStack_180 = 0;
  lVar13 = *(longlong *)(puStack_148 + -0x1e0);
  uVar14 = *(ulonglong *)(puStack_148 + -0x1d8);
  if (uStack_190 < uVar14) {
    pdb_142d7f1b0(&uStack_190,0,uVar14,4,4);
    pbStack_160 = pbStack_188;
    uVar29 = uStack_180;
    fVar39 = _DAT_142e36f28;
    if (uVar14 < 8) {
LAB_1407fdcdf:
      uVar18 = 0;
    }
    else {
LAB_1407fdcc7:
      uStack_180 = uVar29;
      if (pbStack_160 + (uVar29 * 4 - lVar13) < (byte *)0x20) goto LAB_1407fdcdf;
      uVar18 = uVar14 & 0xfffffffffffffff8;
      uStack_180 = uVar29 + uVar18;
      uVar23 = 0;
      do {
        puVar16 = (undefined8 *)(lVar13 + uVar23 * 4);
        uVar7 = puVar16[1];
        puVar17 = (undefined8 *)(lVar13 + 0x10 + uVar23 * 4);
        uVar8 = *puVar17;
        uVar9 = puVar17[1];
        *(undefined8 *)(pbStack_160 + uVar23 * 4 + uVar29 * 4) = *puVar16;
        *(undefined8 *)(pbStack_160 + uVar23 * 4 + uVar29 * 4 + 8) = uVar7;
        *(undefined8 *)(pbStack_160 + uVar23 * 4 + uVar29 * 4 + 0x10) = uVar8;
        *(undefined8 *)(pbStack_160 + uVar23 * 4 + uVar29 * 4 + 0x10 + 8) = uVar9;
        uVar23 = uVar23 + 8;
      } while (uVar18 != uVar23);
      if (uVar14 == uVar18) goto LAB_1407fddc0;
    }
    uVar23 = uVar18;
    for (uVar29 = uVar14 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
      *(undefined4 *)(pbStack_160 + uStack_180 * 4) = *(undefined4 *)(lVar13 + uVar23 * 4);
      uStack_180 = uStack_180 + 1;
      uVar23 = uVar23 + 1;
    }
    if (uVar18 - uVar14 < 0xfffffffffffffffd) {
      do {
        *(undefined4 *)(pbStack_160 + uStack_180 * 4) = *(undefined4 *)(lVar13 + uVar23 * 4);
        *(undefined4 *)(pbStack_160 + uStack_180 * 4 + 4) = *(undefined4 *)(lVar13 + 4 + uVar23 * 4)
        ;
        *(undefined4 *)(pbStack_160 + uStack_180 * 4 + 8) = *(undefined4 *)(lVar13 + 8 + uVar23 * 4)
        ;
        *(undefined4 *)(pbStack_160 + uStack_180 * 4 + 0xc) =
             *(undefined4 *)(lVar13 + 0xc + uVar23 * 4);
        uStack_180 = uStack_180 + 4;
        uVar23 = uVar23 + 4;
      } while (uVar14 != uVar23);
    }
  }
  else {
    uStack_180 = 0;
    if (uVar14 != 0) {
      uVar29 = uStack_180;
      if (7 < uVar14) goto LAB_1407fdcc7;
      goto LAB_1407fdcdf;
    }
  }
LAB_1407fddc0:
  fVar56 = 0.0;
  fVar61 = 0.0;
  if (*(longlong *)(puStack_148 + -0x1d8) != 0) {
    lVar13 = *(longlong *)(puStack_148 + -0x1e0);
    lVar27 = *(longlong *)(puStack_148 + -0x1d8) << 2;
    uVar14 = 0;
    do {
      if (uStack_180 == uVar14) goto LAB_1407ff2f1;
      fVar40 = *(float *)(pbStack_160 + uVar14 * 4);
      fVar41 = fVar39;
      if (uVar14 - 1 < uStack_180) {
        fVar40 = fVar40 + *(float *)(pbStack_160 + uVar14 * 4 + -4) * _DAT_143006a00;
        fVar41 = _DAT_143006a04;
      }
      if (uVar14 + 1 < uStack_180) {
        fVar40 = fVar40 + *(float *)(pbStack_160 + uVar14 * 4 + 4) * _DAT_143006a00;
        fVar41 = fVar41 + _DAT_143006a00;
      }
      if (uVar14 - 2 < uStack_180) {
        fVar40 = fVar40 + *(float *)(pbStack_160 + uVar14 * 4 + -8) * _DAT_143006a08;
        fVar41 = fVar41 + _DAT_143006a08;
      }
      if (uVar14 + 2 < uStack_180) {
        fVar40 = fVar40 + *(float *)(pbStack_160 + uVar14 * 4 + 8) * _DAT_143006a08;
        fVar41 = fVar41 + _DAT_143006a08;
      }
      *(float *)(lVar13 + uVar14 * 4) = fVar40 / fVar41;
      lVar27 = lVar27 + -4;
      uVar14 = uVar14 + 1;
    } while (lVar27 != 0);
  }
  pfVar15 = *(float **)(puStack_148 + -0x260);
  if (pfVar15 == (float *)0x0) {
    pfStack_128 = (float *)0x0;
    pbStack_120 = (byte *)0x4;
    pfStack_118 = (float *)0x0;
    pfVar34 = (float *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar19 = pub_1406abab0((longlong)pfVar15 * 0xc,4);
    if (pbVar19 == (byte *)0x0) {
      pdb_142dc7e2a(4,(longlong)pfVar15 * 0xc);
LAB_1407ff3b0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pfStack_118 = (float *)0x0;
    pfStack_128 = pfVar15;
    pbStack_120 = pbVar19;
    pdb_14007ee60();
    pfVar34 = (float *)pub_1406abab0((longlong)pfVar15 * 4,4);
    if (pfVar34 == (float *)0x0) {
      uStack_101 = 1;
      pdb_142dc7e2a(4,(longlong)pfVar15 * 4);
      goto LAB_1407ff3b0;
    }
  }
  pfStack_130 = (float *)0x0;
  pfStack_140 = pfVar15;
  pfStack_138 = pfVar34;
  if (pfVar15 == (float *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143006b10);
  }
  pfVar34 = *(float **)(puStack_148 + -0x228);
  if (pfVar34 == (float *)0x0) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143006b28);
  }
  puStack_170 = *(uint **)(puStack_148 + -0x268);
  pfStack_178 = *(float **)(puStack_148 + -0x230);
  pfStack_150 = *(float **)(puStack_148 + -0x1e0);
  pfVar35 = *(float **)(puStack_148 + -0x1d8);
  pfVar28 = (float *)(ulonglong)*puStack_170;
  fVar40 = 0.0;
  if (*pfStack_178 <= _DAT_142e36f50) {
    if (pfVar35 == (float *)0x0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143006b40);
    }
    fVar40 = *pfStack_150;
  }
  pfStack_110 = pfVar15;
  if (pfVar35 < pfVar15) {
    pfStack_110 = pfVar35;
  }
  if (pfVar34 < pfStack_110) {
    pfStack_110 = pfVar34;
  }
  puStack_218 = puStack_170 + 5;
  bVar10 = true;
  pfVar15 = (float *)(ulonglong)puStack_170[2];
  pfVar34 = (float *)0x0;
  fVar41 = (float)puStack_170[1];
LAB_1407fe094:
  pfVar35 = pfStack_118;
  unaff_R13 = pfStack_138;
  fVar58 = _UNK_143006a1c;
  fVar53 = _UNK_143006a18;
  fVar48 = _UNK_143006a14;
  fVar62 = _UNK_142e3c64c;
  fVar46 = _UNK_142e3c648;
  fVar45 = _UNK_142e3c644;
  fVar44 = _DAT_142e3c640;
  fVar42 = _DAT_142e36f28;
  if (pfStack_110 <= pfVar34) goto LAB_1407feea0;
  pfVar33 = (float *)((longlong)pfVar34 + 1);
  fVar59 = (float)puStack_170[(longlong)pfVar34 * 3];
  fVar63 = (float)puStack_170[(longlong)pfVar34 * 3 + 1];
  fVar47 = (float)(~-(uint)(_DAT_142e36f50 < pfStack_178[(longlong)pfVar34]) &
                  (uint)pfStack_150[(longlong)pfVar34]);
  fVar60 = (float)puStack_170[(longlong)pfVar34 * 3 + 2];
  fVar12 = SUB84(pfVar15,0);
  fVar21 = SUB84(pfVar28,0);
  fVar57 = fVar47;
  if (fVar40 <= _DAT_142e37ad4) {
    if (fVar47 <= _DAT_142e37ad4) {
      if ((((((bVar10) || (fVar39 != fVar59)) || (NAN(fVar39) || NAN(fVar59))) ||
           ((in_XMM5_Da != fVar63 || (NAN(in_XMM5_Da) || NAN(fVar63))))) || (fVar61 != fVar60)) ||
         (NAN(fVar61) || NAN(fVar60))) {
        pfVar30 = (float *)(ulonglong)(uint)fVar59;
        pfVar24 = (float *)(ulonglong)(uint)fVar60;
      }
      else {
        pfVar15 = (float *)(puStack_218 + (longlong)pfVar34 * 3);
        fVar41 = fVar63;
        fVar21 = fVar59;
        fVar12 = fVar60;
        fVar40 = fVar47;
        while( true ) {
          if (pfStack_110 <= pfVar33) goto LAB_1407feea0;
          fVar59 = pfVar15[-2];
          pfVar30 = (float *)(ulonglong)(uint)fVar59;
          fVar63 = pfVar15[-1];
          fVar47 = (float)(~-(uint)(_DAT_142e36f50 < pfStack_178[(longlong)pfVar33]) &
                          (uint)pfStack_150[(longlong)pfVar33]);
          fVar60 = *pfVar15;
          pfVar24 = (float *)(ulonglong)(uint)fVar60;
          fVar57 = fVar47;
          if (_DAT_142e37ad4 < fVar40) {
            pfVar33 = (float *)((longlong)pfVar33 + 1);
            bVar10 = false;
            pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar59);
            pfVar28 = pfStack_150;
            if (_DAT_142e37ad4 < fVar47) goto LAB_1407fe12f;
            goto LAB_1407fe9f0;
          }
          if (_DAT_142e37ad4 < fVar47) {
            pfVar33 = (float *)((longlong)pfVar33 + 1);
            bVar10 = false;
            pfVar15 = pfVar24;
            goto LAB_1407fe284;
          }
          pfVar33 = (float *)((longlong)pfVar33 + 1);
          if ((((fVar39 != fVar59) || (NAN(fVar39) || NAN(fVar59))) || (in_XMM5_Da != fVar63)) ||
             (NAN(in_XMM5_Da) || NAN(fVar63))) break;
          pfVar15 = pfVar15 + 3;
          if ((fVar61 != fVar60) ||
             (fVar41 = fVar63, fVar21 = fVar59, fVar12 = fVar60, fVar40 = fVar47,
             NAN(fVar61) || NAN(fVar60))) break;
        }
      }
      fVar39 = fVar59;
      pfStack_100 = pfVar33;
      if (pfStack_118 == pfStack_128) {
        uStack_f1 = 1;
        pdb_142db7820(&pfStack_128);
      }
      pfVar34 = pfStack_130;
      *(int *)(pbStack_120 + (longlong)pfVar35 * 0xc) = (int)pfVar30;
      *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 4) = fVar63;
      *(int *)(pbStack_120 + (longlong)pfVar35 * 0xc + 8) = (int)pfVar24;
      pfStack_118 = (float *)((longlong)pfVar35 + 1);
      fVar57 = 0.0;
      pfVar15 = pfVar24;
      pfVar28 = pfVar30;
      pfVar33 = pfStack_100;
      in_XMM5_Da = fVar63;
      fVar61 = fVar60;
      if (pfStack_130 == pfStack_140) {
        uStack_f1 = 1;
        pdb_142d89720(&pfStack_140);
        pfVar33 = pfStack_100;
      }
      goto LAB_1407fe061;
    }
    pfVar30 = (float *)(ulonglong)(uint)fVar59;
    pfVar15 = (float *)(ulonglong)(uint)fVar60;
LAB_1407fe284:
    fVar44 = (_DAT_142e37ad4 - fVar40) / (fVar57 - fVar40);
    fVar40 = SUB84(pfVar30,0);
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar40);
    fVar42 = SUB84(pfVar15,0);
    if (_DAT_143006a24 <= fVar44) {
      pfVar28 = pfVar30;
      fVar44 = fVar61;
      if (!bVar10) goto LAB_1407fe8d5;
      goto LAB_1407fe901;
    }
    fVar45 = _DAT_142e36f28 - fVar44;
    fVar46 = fVar63 * fVar44 + fVar41 * fVar45;
    fVar41 = fVar44 * fVar40 + fVar45 * fVar21;
    fVar45 = fVar44 * fVar42 + fVar45 * fVar12;
    if ((((bVar10) || (fVar39 != fVar41)) ||
        ((NAN(fVar39) || NAN(fVar41) ||
         (((in_XMM5_Da != fVar46 || (NAN(in_XMM5_Da) || NAN(fVar46))) || (fVar61 != fVar45)))))) ||
       (NAN(fVar61) || NAN(fVar45))) {
      if (pfStack_118 == pfStack_128) {
        uStack_f1 = 1;
        pdb_142db7820(&pfStack_128);
        pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      pfVar34 = pfStack_130;
      *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc) = fVar41;
      *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 4) = fVar46;
      *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 8) = fVar45;
      pfStack_118 = (float *)((longlong)pfVar35 + 1);
      if (pfStack_130 == pfStack_140) {
        uStack_f1 = 1;
        pdb_142d89720(&pfStack_140);
        pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      pfStack_138[(longlong)pfVar34] = 0.0;
      pfStack_130 = (float *)((longlong)pfVar34 + 1);
      fVar56 = 0.0;
      in_XMM5_Da = fVar46;
      fVar39 = fVar41;
      fVar61 = fVar45;
    }
    pfVar28 = pfVar30;
    fVar44 = fVar61;
    if (_DAT_142e3b1d8 <
        SQRT((fVar45 - fVar42) * (fVar45 - fVar42) +
             (fVar46 - fVar63) * (fVar46 - fVar63) + (fVar41 - fVar40) * (fVar41 - fVar40))) {
      auStack_1d8._4_4_ = fVar61;
      auStack_1d8._0_4_ = fVar61;
      fStack_1d0 = fVar56;
      fStack_1cc = fVar56;
      pfStack_168 = (float *)CONCAT44(pfStack_168._4_4_,in_XMM5_Da);
      fVar62 = _UNK_142e36f6c * 0.0;
      fVar58 = _UNK_142e36f6c * 0.0;
      fVar48 = fVar40 * _DAT_142e36f60 + fVar41 * _DAT_142e36f60;
      fVar53 = fVar42 * _UNK_142e36f64 + fVar45 * _UNK_142e36f64;
      uStack_f1 = 1;
      fVar40 = (float)pdb_140a7d8d0(puVar37);
      uStack_f1 = 1;
      uVar43 = pdb_140a7d8d0(auStack_2a0);
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar43);
      uStack_f1 = 1;
      uVar43 = pdb_140a7d8d0(param_2);
      pfStack_158 = (float *)CONCAT44(pfStack_158._4_4_,uVar43);
      uStack_f1 = 1;
      fVar41 = (float)pdb_140a7d8d0(puVar36);
      pfVar34 = pfStack_118;
      pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      fVar45 = fVar63 * _DAT_142e36f50 + fVar46 * _DAT_142e36f50;
      if ((fVar39 == fVar48) && (!NAN(fVar39) && !NAN(fVar48))) {
        if ((pfStack_168._0_4_ == fVar45) && (!NAN(pfStack_168._0_4_) && !NAN(fVar45))) {
          if (((float)auStack_1d8._0_4_ == fVar53) &&
             (in_XMM5_Da = pfStack_168._0_4_, fVar44 = (float)auStack_1d8._0_4_,
             !NAN((float)auStack_1d8._0_4_) && !NAN(fVar53))) goto LAB_1407fe8d5;
        }
      }
      if (pfStack_118 == pfStack_128) {
        uStack_f1 = 1;
        pdb_142db7820(&pfStack_128);
        pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      pfVar35 = pfStack_130;
      *(float *)(pbStack_120 + (longlong)pfVar34 * 0xc) = fVar48;
      *(float *)(pbStack_120 + (longlong)pfVar34 * 0xc + 4) = fVar45;
      *(float *)(pbStack_120 + (longlong)pfVar34 * 0xc + 8) = fVar53;
      pfStack_118 = (float *)((longlong)pfVar34 + 1);
      if (pfStack_130 == pfStack_140) {
        uStack_f1 = 1;
        pdb_142d89720(&pfStack_140);
        pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      fVar41 = fVar40 + (float)uStack_1a8 + pfStack_158._0_4_ + fVar41;
      fVar39 = 0.0;
      if (0.0 <= fVar41) {
        fVar39 = fVar41;
      }
      fVar56 = _DAT_142e36f28;
      if (fVar39 <= _DAT_142e36f28) {
        fVar56 = fVar39;
      }
      pfStack_138[(longlong)pfVar35] = fVar56;
      pfStack_130 = (float *)((longlong)pfVar35 + 1);
      in_XMM5_Da = fVar45;
      fVar39 = fVar48;
      fVar61 = fVar53;
      fVar56 = fVar58 + fVar62;
      fVar44 = fVar53;
    }
LAB_1407fe8d5:
    if ((((fVar39 != SUB84(pfVar30,0)) || (NAN(fVar39) || NAN(SUB84(pfVar30,0)))) ||
        (in_XMM5_Da != fVar63)) || (NAN(in_XMM5_Da) || NAN(fVar63))) goto LAB_1407fe901;
    bVar10 = false;
    if ((fVar44 == fVar42) &&
       (pfVar34 = pfVar33, fVar40 = fVar57, fVar41 = fVar63, !NAN(fVar44) && !NAN(fVar42)))
    goto LAB_1407fe094;
LAB_1407fe901:
    pfVar35 = pfStack_118;
    fVar39 = SUB84(pfVar30,0);
    if (pfStack_118 == pfStack_128) {
      uStack_f1 = 1;
      pdb_142db7820(&pfStack_128);
      pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
    }
    pfVar34 = pfStack_130;
    *(int *)(pbStack_120 + (longlong)pfVar35 * 0xc) = (int)pfVar28;
    *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 4) = fVar63;
    *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 8) = fVar42;
    pfStack_118 = (float *)((longlong)pfVar35 + 1);
    fVar47 = fVar57;
    in_XMM5_Da = fVar63;
    fVar61 = fVar42;
    if (pfStack_130 == pfStack_140) {
      uStack_f1 = 1;
      pdb_142d89720(&pfStack_140);
      pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
    }
  }
  else {
    pfVar30 = (float *)(ulonglong)(uint)fVar59;
    pfVar24 = (float *)(ulonglong)(uint)fVar60;
    pfStack_100 = (float *)CONCAT44(pfStack_100._4_4_,fVar59);
    if (fVar47 <= _DAT_142e37ad4) {
LAB_1407fe9f0:
      fVar40 = (_DAT_142e37ad4 - fVar40) / (fVar47 - fVar40);
      fVar44 = SUB84(pfVar24,0);
      fVar42 = fVar61;
      if (_DAT_143006a24 <= fVar40) {
        pfVar28 = pfVar30;
        if (!bVar10) goto LAB_1407fedcf;
      }
      else {
        auStack_1d8._4_4_ = fVar61;
        auStack_1d8._0_4_ = fVar61;
        fStack_1d0 = fVar56;
        fStack_1cc = fVar56;
        fVar45 = _DAT_142e36f28 - fVar40;
        fVar62 = fVar63 * fVar40 + fVar41 * fVar45;
        fVar46 = fVar40 * SUB84(pfVar30,0) + fVar45 * fVar21;
        fVar40 = fVar40 * fVar44 + fVar45 * fVar12;
        uStack_1a8 = CONCAT44(fVar40,fVar40);
        uStack_1a0 = 0;
        if (SQRT((fVar40 - fVar12) * (fVar40 - fVar12) +
                 (fVar62 - fVar41) * (fVar62 - fVar41) + (fVar46 - fVar21) * (fVar46 - fVar21)) <=
            _DAT_142e3b1d8) {
          if (!bVar10) goto LAB_1407fecf3;
        }
        else {
          pfStack_168 = (float *)CONCAT44(pfStack_168._4_4_,in_XMM5_Da);
          fVar53 = _UNK_142e36f6c * 0.0;
          fVar60 = _UNK_142e36f6c * 0.0;
          fVar58 = fVar21 * _DAT_142e36f60 + fVar46 * _DAT_142e36f60;
          fVar59 = fVar12 * _UNK_142e36f64 + fVar40 * _UNK_142e36f64;
          uStack_f1 = 1;
          fVar45 = (float)pdb_140a7d8d0(puVar37,pfVar15,pfVar28,pfVar30,0x43020000);
          uStack_f1 = 1;
          uVar43 = pdb_140a7d8d0(auStack_2a0);
          pfStack_158 = (float *)CONCAT44(pfStack_158._4_4_,uVar43);
          uStack_f1 = 1;
          uVar43 = pdb_140a7d8d0(param_2);
          lStack_1c0 = CONCAT44(lStack_1c0._4_4_,uVar43);
          uStack_f1 = 1;
          fVar48 = (float)pdb_140a7d8d0(puVar36);
          pfVar15 = pfStack_118;
          pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
          fVar41 = fVar41 * _DAT_142e36f50 + fVar62 * _DAT_142e36f50;
          if ((((bVar10) || (fVar39 != fVar58)) || (NAN(fVar39) || NAN(fVar58))) ||
             (((pfStack_168._0_4_ != fVar41 || (NAN(pfStack_168._0_4_) || NAN(fVar41))) ||
              (((float)auStack_1d8._0_4_ != fVar59 ||
               (in_XMM5_Da = pfStack_168._0_4_, fVar42 = (float)auStack_1d8._0_4_,
               NAN((float)auStack_1d8._0_4_) || NAN(fVar59))))))) {
            if (pfStack_118 == pfStack_128) {
              uStack_f1 = 1;
              pdb_142db7820(&pfStack_128);
              pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
            }
            pfVar34 = pfStack_130;
            *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc) = fVar58;
            *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 4) = fVar41;
            *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 8) = fVar59;
            pfStack_118 = (float *)((longlong)pfVar15 + 1);
            if (pfStack_130 == pfStack_140) {
              uStack_f1 = 1;
              pdb_142d89720(&pfStack_140);
              pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
            }
            fVar48 = fVar45 + pfStack_158._0_4_ + (float)lStack_1c0 + fVar48;
            fVar39 = 0.0;
            if (0.0 <= fVar48) {
              fVar39 = fVar48;
            }
            fVar56 = _DAT_142e36f28;
            if (fVar39 <= _DAT_142e36f28) {
              fVar56 = fVar39;
            }
            pfStack_138[(longlong)pfVar34] = fVar56;
            pfStack_130 = (float *)((longlong)pfVar34 + 1);
            in_XMM5_Da = fVar41;
            fVar39 = fVar58;
            fVar61 = fVar59;
            fVar56 = fVar60 + fVar53;
            fVar42 = fVar59;
          }
LAB_1407fecf3:
          if ((fVar39 == fVar46) && (!NAN(fVar39) && !NAN(fVar46))) {
            if ((in_XMM5_Da == fVar62) && (!NAN(in_XMM5_Da) && !NAN(fVar62))) {
              if ((fVar42 == (float)uStack_1a8) &&
                 (pfVar28 = pfVar30, !NAN(fVar42) && !NAN((float)uStack_1a8))) goto LAB_1407fedcf;
            }
          }
        }
        pfVar15 = pfStack_118;
        if (pfStack_118 == pfStack_128) {
          uStack_f1 = 1;
          pdb_142db7820(&pfStack_128);
          pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
        }
        pfVar34 = pfStack_130;
        *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc) = fVar46;
        *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 4) = fVar62;
        *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 8) = (float)uStack_1a8;
        pfStack_118 = (float *)((longlong)pfVar15 + 1);
        if (pfStack_130 == pfStack_140) {
          uStack_f1 = 1;
          pdb_142d89720(&pfStack_140);
          pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
        }
        pfStack_138[(longlong)pfVar34] = 0.0;
        pfStack_130 = (float *)((longlong)pfVar34 + 1);
        in_XMM5_Da = fVar62;
        fVar39 = fVar46;
        fVar61 = fVar40;
        fVar56 = 0.0;
        fVar42 = (float)uStack_1a8;
        pfVar28 = pfVar30;
LAB_1407fedcf:
        pfVar30 = pfVar28;
        if ((fVar39 == SUB84(pfVar28,0)) && (!NAN(fVar39) && !NAN(SUB84(pfVar28,0)))) {
          if ((in_XMM5_Da == fVar63) && (!NAN(in_XMM5_Da) && !NAN(fVar63))) {
            bVar10 = false;
            if ((fVar42 == fVar44) &&
               (pfVar15 = pfVar24, pfVar34 = pfVar33, fVar40 = fVar47, fVar41 = fVar63,
               !NAN(fVar42) && !NAN(fVar44))) goto LAB_1407fe094;
          }
        }
      }
      pfVar15 = pfStack_118;
      fVar39 = SUB84(pfVar30,0);
      if (pfStack_118 == pfStack_128) {
        uStack_f1 = 1;
        pdb_142db7820(&pfStack_128);
        pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      pfVar34 = pfStack_130;
      *(int *)(pbStack_120 + (longlong)pfVar15 * 0xc) = (int)pfVar30;
      *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 4) = fVar63;
      *(float *)(pbStack_120 + (longlong)pfVar15 * 0xc + 8) = fVar44;
      pfStack_118 = (float *)((longlong)pfVar15 + 1);
      fVar57 = 0.0;
      pfVar15 = pfVar24;
      pfVar28 = pfVar30;
      in_XMM5_Da = fVar63;
      fVar61 = fVar44;
      if (pfStack_130 == pfStack_140) {
        uStack_f1 = 1;
        pdb_142d89720(&pfStack_140);
        pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
      }
      goto LAB_1407fe061;
    }
LAB_1407fe12f:
    fVar42 = SUB84(pfVar24,0);
    fVar40 = SUB84(pfVar30,0);
    pfVar15 = pfVar24;
    pfVar28 = pfVar30;
    if ((float)((uint)(fVar41 - fVar63) & _DAT_142e377e0) <= _DAT_142e37ad4) {
      if (!bVar10) {
        if ((fVar39 == fVar40) && (!NAN(fVar39) && !NAN(fVar40))) goto LAB_1407fe4bf;
      }
    }
    else {
      fVar62 = fVar63 * _DAT_142e36f50 + fVar41 * _DAT_142e36f50;
      fVar41 = _UNK_142e36f6c * 0.0;
      fVar46 = _UNK_142e36f6c * 0.0;
      fVar44 = fVar40 * _DAT_142e36f60 + fVar21 * _DAT_142e36f60;
      fVar45 = fVar42 * _UNK_142e36f64 + fVar12 * _UNK_142e36f64;
      if (((bVar10) ||
          (((fVar39 != fVar44 || (NAN(fVar39) || NAN(fVar44))) || (in_XMM5_Da != fVar62)))) ||
         (((NAN(in_XMM5_Da) || NAN(fVar62) || (fVar61 != fVar45)) || (NAN(fVar61) || NAN(fVar45)))))
      {
        if (pfStack_118 == pfStack_128) {
          uStack_f1 = 1;
          pdb_142db7820(&pfStack_128);
          pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
        }
        pfVar34 = pfStack_130;
        *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc) = fVar44;
        *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 4) = fVar62;
        *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 8) = fVar45;
        pfStack_118 = (float *)((longlong)pfVar35 + 1);
        if (pfStack_130 == pfStack_140) {
          uStack_f1 = 1;
          pdb_142d89720(&pfStack_140);
          pfVar30 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
        }
        pfStack_138[(longlong)pfVar34] = fVar57;
        pfStack_130 = (float *)((longlong)pfVar34 + 1);
        pfVar28 = pfVar30;
        if ((fVar44 == SUB84(pfVar30,0)) &&
           (in_XMM5_Da = fVar62, fVar39 = fVar44, fVar61 = fVar45, fVar56 = fVar46 + fVar41,
           !NAN(fVar44) && !NAN(SUB84(pfVar30,0)))) goto LAB_1407fe4bf;
      }
      else if ((fVar39 == fVar40) && (!NAN(fVar39) && !NAN(fVar40))) {
LAB_1407fe4bf:
        if ((in_XMM5_Da == fVar63) && (!NAN(in_XMM5_Da) && !NAN(fVar63))) {
          bVar10 = false;
          if ((fVar61 == fVar42) &&
             (pfVar34 = pfVar33, fVar40 = fVar57, fVar41 = fVar63, !NAN(fVar61) && !NAN(fVar42)))
          goto LAB_1407fe094;
        }
      }
    }
    pfVar35 = pfStack_118;
    fVar39 = SUB84(pfVar28,0);
    if (pfStack_118 == pfStack_128) {
      uStack_f1 = 1;
      pdb_142db7820(&pfStack_128);
      pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
    }
    pfVar34 = pfStack_130;
    *(int *)(pbStack_120 + (longlong)pfVar35 * 0xc) = (int)pfVar28;
    *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 4) = fVar63;
    *(float *)(pbStack_120 + (longlong)pfVar35 * 0xc + 8) = fVar42;
    pfStack_118 = (float *)((longlong)pfVar35 + 1);
    fVar47 = fVar57;
    in_XMM5_Da = fVar63;
    fVar61 = fVar42;
    if (pfStack_130 == pfStack_140) {
      uStack_f1 = 1;
      pdb_142d89720(&pfStack_140);
      pfVar28 = (float *)((ulonglong)pfStack_100 & 0xffffffff);
    }
  }
LAB_1407fe061:
  fVar56 = 0.0;
  pfStack_138[(longlong)pfVar34] = fVar57;
  pfStack_130 = (float *)((longlong)pfVar34 + 1);
  bVar10 = false;
  pfVar34 = pfVar33;
  fVar40 = fVar47;
  fVar41 = in_XMM5_Da;
  goto LAB_1407fe094;
LAB_1407feea0:
  if (pfStack_130 == (float *)0x0) {
    pfVar15 = (float *)0x0;
  }
  else {
    fVar39 = *(float *)(puStack_148 + -0x1c);
    uVar14 = (longlong)pfStack_130 * 4 - 4;
    pfVar34 = pfStack_130;
    pfVar35 = pfStack_138;
    if (0xb < uVar14) {
      pfStack_110 = pfStack_130;
      pfStack_150 = (float *)((uVar14 >> 2) + 1);
      pfStack_100 = (float *)((ulonglong)pfStack_150 & 0xfffffffffffffffc);
      pfVar35 = pfStack_138 + (longlong)pfStack_100;
      pfVar15 = (float *)0x0;
      do {
        fVar56 = unaff_R13[(longlong)pfVar15 + 1];
        fVar61 = unaff_R13[(longlong)pfVar15 + 2];
        fVar40 = unaff_R13[(longlong)pfVar15 + 3];
        fVar41 = (float)pub_142e32a20();
        auVar6._4_8_ = extraout_XMM0_Qb;
        auVar6._0_4_ = fVar56 * fVar48;
        auVar52._0_8_ = auVar6._0_8_ << 0x20;
        auVar52._8_4_ = fVar61 * fVar53;
        auVar52._12_4_ = fVar40 * fVar58;
        fVar56 = (float)pub_142e32a20(auVar52._8_8_);
        fVar61 = (float)pub_142e32a20();
        fVar40 = (float)pub_142e32a20();
        pfVar34 = unaff_R13 + (longlong)pfVar15;
        *pfVar34 = (fVar44 - fVar61) * fVar39;
        pfVar34[1] = (fVar45 - fVar40) * fVar39;
        pfVar34[2] = (fVar46 - fVar56) * fVar39;
        pfVar34[3] = (fVar62 - fVar41) * fVar39;
        pfVar15 = pfVar15 + 1;
      } while (pfStack_100 != pfVar15);
      pfVar34 = pfStack_110;
      pfVar15 = pfStack_130;
      if (pfStack_150 == pfStack_100) goto LAB_1407ff029;
    }
    fVar56 = _DAT_143006a20;
    pfVar34 = unaff_R13 + (longlong)pfVar34;
    do {
      unaff_R13 = pfVar35 + 1;
      fVar61 = (float)pub_142e32a20(*pfVar35 * fVar56);
      *pfVar35 = (fVar42 - fVar61) * fVar39;
      pfVar35 = unaff_R13;
      pfVar15 = pfStack_130;
    } while (unaff_R13 != pfVar34);
  }
LAB_1407ff029:
  pfStack_100 = pfStack_140;
  pfStack_228 = pfStack_118;
  pfStack_238 = pfStack_128;
  pbStack_230 = pbStack_120;
  pfStack_110 = pfStack_138;
  pdb_1413f9f40(&uStack_270,&pfStack_238);
  unaff_R12 = puStack_148;
  if (*(longlong *)(puStack_148 + -0x220) != 0) {
    pub_1406abac0(*(byte **)(puStack_148 + -0x218),*(longlong *)(puStack_148 + -0x220) * 0xc,4);
  }
  if (*(longlong *)(unaff_R12 + -0x208) != 0) {
    pub_1406abac0(*(byte **)(unaff_R12 + -0x200),*(longlong *)(unaff_R12 + -0x208) << 2,4);
  }
  *(undefined8 *)(unaff_R12 + -0x1f0) = uStack_240;
  *(undefined8 *)(unaff_R12 + -0x200) = uStack_250;
  *(undefined8 *)(unaff_R12 + -0x1f8) = uStack_248;
  *(undefined8 *)(unaff_R12 + -0x210) = uStack_260;
  *(undefined8 *)(unaff_R12 + -0x208) = uStack_258;
  *(undefined8 *)(unaff_R12 + -0x220) = uStack_270;
  *(undefined8 *)(unaff_R12 + -0x218) = uStack_268;
  if (*plStack_1b8 != 0) {
    pub_1406abac0(*(byte **)(unaff_R12 + -0x1e0),*plStack_1b8 << 2,4);
  }
  *(float **)(unaff_R12 + -0x1e8) = pfStack_100;
  *(float **)(unaff_R12 + -0x1e0) = pfStack_110;
  *(float **)(unaff_R12 + -0x1d8) = pfVar15;
  puVar16 = puStack_1e8;
  puVar17 = puStack_1e8;
  param_3 = puStack_1e0;
  if (puStack_1e0 != (undefined8 *)0x0) goto LAB_1407fd651;
LAB_1407fd670:
  if ((puVar17 == (undefined8 *)0x0) || (puVar17 == puStack_1f8)) {
    if (uStack_190 != 0) {
      pub_1406abac0(pbStack_188,uStack_190 << 2,4);
    }
    if (cStack_102 == '\0') {
      return;
    }
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] == '\x01') ||
       (plVar20 = (longlong *)pdb_142dd9610(plVar20,0), plVar20 != (longlong *)0x0)) {
      if (*plVar20 == 0) {
        *plVar20 = -1;
        pfStack_100 = (float *)plVar20;
        pdb_140e95370(plVar20 + 1);
        *(longlong *)pfStack_100 = *(longlong *)pfStack_100 + 1;
        return;
      }
      goto LAB_1407ff2c5;
    }
    goto LAB_1407ff2e4;
  }
  puStack_1e8 = puVar17 + 2;
  puStack_1e0 = (undefined8 *)0x0;
  goto LAB_1407fd69c;
}

