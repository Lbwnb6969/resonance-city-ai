// VA 0x140ceb4c0, PDB extent 3550 bytes
// clutter_pack_pipe::GlbImport::visit_node
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_pack_pipe::GlbImport::visit_node
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 3550 */

longlong pdb_140ceb4c0(longlong param_1,longlong param_2,float *param_3,ulonglong param_4)

{
  float *pfVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *arg0;
  ulonglong uVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  float *pfVar19;
  float *pfVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined *puStack_238;
  code *pcStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined *puStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  ulonglong uStack_1e8;
  undefined *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  byte *pbStack_158;
  ulonglong uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  undefined *puStack_70;
  undefined1 auStack_48 [8];
  
  uStack_e0 = 0xfffffffffffffffe;
  if (0xff < param_4) {
    puStack_70 = &UNK_142df635a;
    pdb_140f3f5b0(auStack_48);
    puStack_70 = &UNK_142df6368;
    lVar8 = pdb_142df65f0(&UNK_1430873a4,0x24,auStack_48);
    return lVar8;
  }
  pfVar13 = &fStack_12c;
  pfVar1 = (float *)((longlong)&uStack_128 + 4);
  lVar8 = *(longlong *)(param_2 + 8);
  if (*(int *)(lVar8 + 0x80) == 1) {
    pfVar16 = (float *)&uStack_110;
    pfVar17 = (float *)((longlong)&uStack_110 + 4);
    pfVar15 = (float *)&uStack_108;
    fVar41 = *(float *)(lVar8 + 0x9c);
    fVar42 = *(float *)(lVar8 + 0xa0);
    fVar43 = *(float *)(lVar8 + 0xa4);
    fVar44 = *(float *)(lVar8 + 0xa8);
    fVar45 = *(float *)(lVar8 + 0xac);
    fVar22 = *(float *)(lVar8 + 0xb0);
    fVar23 = *(float *)(lVar8 + 0xb4);
    uVar28 = *(undefined8 *)(lVar8 + 0xbc);
    fStack_144 = (float)*(undefined8 *)(lVar8 + 0x84);
    fStack_140 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x84) >> 0x20);
    fStack_13c = (float)*(undefined8 *)(lVar8 + 0x8c);
    fStack_138 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x8c) >> 0x20);
    fStack_134 = (float)*(undefined8 *)(lVar8 + 0x94);
    fStack_130 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x94) >> 0x20);
    fStack_148 = 0.0;
    pfVar7 = pfVar13;
    pfVar10 = (float *)((longlong)&uStack_118 + 4);
    pfVar11 = (float *)&uStack_118;
    pfVar13 = (float *)&uStack_120;
    pfVar14 = (float *)((longlong)&uStack_120 + 4);
    pfVar19 = pfVar1;
    pfVar20 = (float *)&uStack_128;
    fVar24 = *(float *)(lVar8 + 0xb8);
  }
  else {
    fVar41 = 0.0;
    fVar42 = 0.0;
    fVar43 = 0.0;
    if ((*(byte *)(lVar8 + 0x68) & 1) != 0) {
      fVar43 = *(float *)(lVar8 + 0x74);
      fVar41 = *(float *)(lVar8 + 0x6c);
      fVar42 = *(float *)(lVar8 + 0x70);
    }
    fVar44 = _DAT_142e4e650;
    fVar45 = _UNK_142e4e654;
    fVar22 = _UNK_142e4e658;
    fVar23 = _UNK_142e4e65c;
    if ((*(byte *)(lVar8 + 0xc4) & 1) != 0) {
      fVar44 = *(float *)(lVar8 + 200);
      fVar45 = *(float *)(lVar8 + 0xcc);
      fVar22 = *(float *)(lVar8 + 0xd0);
      fVar23 = *(float *)(lVar8 + 0xd4);
    }
    pfVar7 = &fStack_144;
    pfVar20 = &fStack_140;
    pfVar19 = &fStack_13c;
    pfVar16 = &fStack_138;
    pfVar17 = &fStack_134;
    pfVar15 = &fStack_130;
    fStack_148 = 1.4013e-45;
    pfVar10 = (float *)&uStack_120;
    pfVar11 = pfVar1;
    pfVar14 = (float *)&uStack_128;
    if ((*(byte *)(lVar8 + 0x58) & 1) == 0) {
      uVar28 = CONCAT44(_UNK_142e37954,_DAT_142e37950);
      fVar24 = _DAT_142e36f28;
    }
    else {
      uVar28 = *(undefined8 *)(lVar8 + 0x60);
      fVar24 = *(float *)(lVar8 + 0x5c);
    }
  }
  *pfVar7 = fVar41;
  *pfVar20 = fVar42;
  *pfVar19 = fVar43;
  *pfVar13 = fVar44;
  *pfVar14 = fVar45;
  *pfVar11 = fVar22;
  *pfVar10 = fVar23;
  *pfVar16 = fVar24;
  *pfVar17 = (float)uVar28;
  *pfVar15 = (float)((ulonglong)uVar28 >> 0x20);
  uStack_1e8 = param_4;
  lStack_1a0 = param_2;
  pdb_141d442d0(&uStack_198,&fStack_148);
  uVar5 = uStack_1e8;
  fVar41 = *param_3;
  fVar42 = param_3[1];
  fVar43 = param_3[2];
  fVar44 = param_3[3];
  fVar45 = param_3[4];
  fVar22 = param_3[5];
  fVar23 = param_3[6];
  fVar24 = param_3[7];
  fVar25 = param_3[8];
  fVar26 = param_3[9];
  fVar27 = param_3[10];
  fVar46 = param_3[0xb];
  fVar47 = param_3[0xc];
  fVar48 = param_3[0xd];
  fVar49 = param_3[0xe];
  fVar50 = param_3[0xf];
  fVar29 = uStack_190._4_4_ * fVar47 +
           (float)uStack_190 * fVar25 + uStack_198._4_4_ * fVar45 + (float)uStack_198 * fVar41;
  fVar30 = uStack_190._4_4_ * fVar48 +
           (float)uStack_190 * fVar26 + uStack_198._4_4_ * fVar22 + (float)uStack_198 * fVar42;
  fVar31 = uStack_190._4_4_ * fVar49 +
           (float)uStack_190 * fVar27 + uStack_198._4_4_ * fVar23 + (float)uStack_198 * fVar43;
  fVar32 = uStack_190._4_4_ * fVar50 +
           (float)uStack_190 * fVar46 + uStack_198._4_4_ * fVar24 + (float)uStack_198 * fVar44;
  fVar33 = uStack_180._4_4_ * fVar47 +
           (float)uStack_180 * fVar25 + uStack_188._4_4_ * fVar45 + (float)uStack_188 * fVar41;
  fVar34 = uStack_180._4_4_ * fVar48 +
           (float)uStack_180 * fVar26 + uStack_188._4_4_ * fVar22 + (float)uStack_188 * fVar42;
  fVar35 = uStack_180._4_4_ * fVar49 +
           (float)uStack_180 * fVar27 + uStack_188._4_4_ * fVar23 + (float)uStack_188 * fVar43;
  fVar36 = uStack_180._4_4_ * fVar50 +
           (float)uStack_180 * fVar46 + uStack_188._4_4_ * fVar24 + (float)uStack_188 * fVar44;
  fVar37 = uStack_170._4_4_ * fVar47 +
           (float)uStack_170 * fVar25 + uStack_178._4_4_ * fVar45 + (float)uStack_178 * fVar41;
  fVar38 = uStack_170._4_4_ * fVar48 +
           (float)uStack_170 * fVar26 + uStack_178._4_4_ * fVar22 + (float)uStack_178 * fVar42;
  fVar39 = uStack_170._4_4_ * fVar49 +
           (float)uStack_170 * fVar27 + uStack_178._4_4_ * fVar23 + (float)uStack_178 * fVar43;
  fVar40 = uStack_170._4_4_ * fVar50 +
           (float)uStack_170 * fVar46 + uStack_178._4_4_ * fVar24 + (float)uStack_178 * fVar44;
  fVar41 = fStack_15c * fVar47 + fStack_160 * fVar25 + fStack_164 * fVar45 + fStack_168 * fVar41;
  fVar42 = fStack_15c * fVar48 + fStack_160 * fVar26 + fStack_164 * fVar22 + fStack_168 * fVar42;
  fVar43 = fStack_15c * fVar49 + fStack_160 * fVar27 + fStack_164 * fVar23 + fStack_168 * fVar43;
  fVar44 = fStack_15c * fVar50 + fStack_160 * fVar46 + fStack_164 * fVar24 + fStack_168 * fVar44;
  if (SBORROW8(0,*(longlong *)(lVar8 + 0x18))) goto LAB_140cebe8f;
  uVar3 = *(ulonglong *)(lVar8 + 0x20);
  uVar4 = *(ulonglong *)(lVar8 + 0x28);
  uVar9 = uVar4;
  do {
    uVar12 = uVar3;
    lVar8 = pdb_140f69410(0x2e,uVar3,uVar9);
    uVar18 = uVar4;
    if (lVar8 != 1) break;
    if ((uVar12 < uVar4) && (*(char *)(uVar3 + uVar12) == '.')) {
      uVar9 = uVar12 + 1;
      if (uVar4 != uVar9) goto LAB_140ceb850;
      break;
    }
    uVar9 = uVar12;
  } while (uVar12 <= uVar4);
  goto LAB_140ceb86a;
  while (pcVar2 = (char *)(uVar3 + uVar9), uVar9 = uVar9 + 1, uVar18 = uVar4,
        0xf5 < (byte)(*pcVar2 - 0x3aU)) {
LAB_140ceb850:
    uVar18 = uVar12;
    if (uVar4 == uVar9) break;
  }
LAB_140ceb86a:
  fStack_148 = 0.0;
  fStack_144 = 0.0;
  fStack_140 = 1.4013e-45;
  fStack_13c = 0.0;
  fStack_138 = 0.0;
  fStack_134 = 0.0;
  pdb_141d46e00(uVar3,uVar18 + uVar3,&fStack_148);
  uStack_150 = CONCAT44(fStack_144,fStack_148);
  pbStack_158 = (byte *)CONCAT44(fStack_13c,fStack_140);
  lVar8 = CONCAT44(fStack_134,fStack_138);
  fStack_148 = 0.0;
  fStack_144 = 0.0;
  fStack_140 = 1.4013e-45;
  fStack_13c = 0.0;
  fStack_138 = 0.0;
  fStack_134 = 0.0;
  pdb_141d46e00(&UNK_143087271,&UNK_143087282,&fStack_148);
  uVar3 = CONCAT44(fStack_144,fStack_148);
  arg0 = (byte *)CONCAT44(fStack_13c,fStack_140);
  if (lVar8 == CONCAT44(fStack_134,fStack_138)) {
    iVar6 = pub_142e32750(pbStack_158,arg0,lVar8);
    bVar21 = iVar6 == 0;
  }
  else {
    bVar21 = false;
  }
  if (uVar3 != 0) {
    pub_1406abac0(arg0,uVar3,1);
  }
  if (uStack_150 != 0) {
    pub_1406abac0(pbStack_158,uStack_150,1);
  }
  if (bVar21) {
    if (*(int *)(param_1 + 0x118) == 0) {
      uStack_198 = (undefined *)CONCAT44(fVar30,fVar29);
      uStack_190 = (code *)CONCAT44(fVar32,fVar31);
      uStack_188 = CONCAT44(fVar34,fVar33);
      uStack_180 = CONCAT44(fVar36,fVar35);
      uStack_178 = CONCAT44(fVar38,fVar37);
      uStack_170 = CONCAT44(fVar40,fVar39);
      fStack_168 = fVar41;
      fStack_164 = fVar42;
      fStack_160 = fVar43;
      fStack_15c = fVar44;
      fVar22 = (float)pdb_141c6c7e0(&uStack_198);
      fVar45 = _DAT_142e36f28;
      fVar22 = _DAT_142e36f28 /
               ((float)(~-(uint)NAN(fVar22) & (_DAT_142e37820 & (uint)fVar22 | (uint)DAT_142e3c640)
                       | _DAT_143009de0 & -(uint)NAN(fVar22)) *
               SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31 + fVar29 * fVar29));
      fVar46 = _DAT_142e36f28 /
               SQRT(fVar36 * fVar36 + fVar34 * fVar34 + fVar35 * fVar35 + fVar33 * fVar33);
      fVar25 = _DAT_142e36f28 /
               SQRT(fVar40 * fVar40 + fVar38 * fVar38 + fVar39 * fVar39 + fVar37 * fVar37);
      fVar23 = fVar22 * fVar30;
      fVar24 = fVar22 * fVar31;
      fVar47 = fVar46 * fVar33;
      fVar48 = fVar46 * fVar35;
      fVar26 = fVar25 * fVar37;
      fVar27 = fVar25 * fVar38;
      fVar25 = fVar25 * fVar39;
      if (fVar25 <= 0.0) {
        fVar22 = fVar46 * fVar34 - fVar22 * fVar29;
        if (fVar22 <= 0.0) {
          fVar22 = (_DAT_142e36f28 - fVar25) - fVar22;
          fVar49 = _DAT_142e36f50 / SQRT(fVar22);
          fVar25 = fVar22 * fVar49;
          fVar22 = (fVar23 + fVar47) * fVar49;
          fVar46 = (fVar24 + fVar26) * fVar49;
          fVar49 = (fVar48 - fVar27) * fVar49;
        }
        else {
          fVar22 = (_DAT_142e36f28 - fVar25) + fVar22;
          fVar49 = _DAT_142e36f50 / SQRT(fVar22);
          fVar25 = (fVar23 + fVar47) * fVar49;
          fVar22 = fVar22 * fVar49;
          fVar46 = (fVar48 + fVar27) * fVar49;
          fVar49 = (fVar26 - fVar24) * fVar49;
        }
      }
      else {
        fVar49 = fVar46 * fVar34 + fVar22 * fVar29;
        if (fVar49 <= 0.0) {
          fVar49 = (_DAT_142e36f28 + fVar25) - fVar49;
          fVar50 = _DAT_142e36f50 / SQRT(fVar49);
          fVar25 = fVar50 * (fVar24 + fVar26);
          fVar22 = fVar50 * (fVar48 + fVar27);
          fVar46 = fVar49 * fVar50;
          fVar49 = fVar50 * (fVar23 - fVar47);
        }
        else {
          fVar49 = _DAT_142e36f28 + fVar25 + fVar49;
          fVar50 = _DAT_142e36f50 / SQRT(fVar49);
          fVar25 = (fVar48 - fVar27) * fVar50;
          fVar22 = (fVar26 - fVar24) * fVar50;
          fVar46 = (fVar23 - fVar47) * fVar50;
          fVar49 = fVar49 * fVar50;
        }
      }
      fVar24 = fVar22 * fVar22 + fVar25 * fVar25;
      fVar23 = _UNK_142e378f8 * fVar46 + _UNK_142e378f4 * fVar22 + _DAT_142e378f0 * fVar25;
      fVar23 = fVar23 + fVar23;
      fVar26 = (fVar49 + fVar49) * (fVar22 * _DAT_142e37950 - fVar46 * 0.0) +
               fVar23 * fVar25 + (fVar49 * fVar49 - (fVar24 + fVar46 * fVar46)) * _DAT_142e378f0;
      fVar23 = (fVar49 + fVar49) * (fVar25 * _UNK_142e37958 - fVar22 * 0.0) +
               fVar23 * fVar46 + (fVar49 * fVar49 - (fVar24 + fVar46 * fVar46)) * _UNK_142e378f8;
      fVar22 = SQRT(fVar23 * fVar23 + fVar26 * fVar26);
      if (fVar22 <= _DAT_142e37870) {
        fVar26 = 0.0;
        if (1 < *_DAT_143ca8e90) {
          puStack_1c8 = &UNK_143087288;
          pcStack_1c0 = pdb_1402ed400;
          fStack_148 = 0.0;
          fStack_144 = 0.0;
          fStack_140 = 136.44849;
          fStack_13c = 1.4013e-45;
          fStack_138 = 2.38221e-44;
          fStack_134 = 0.0;
          fStack_130 = 0.0;
          fStack_12c = 0.0;
          uStack_128 = &UNK_143086ff3;
          uStack_120 = 0x23;
          uStack_118 = 2;
          uStack_110 = &UNK_1430872d0;
          uStack_108 = 0x11;
          uStack_100 = 0x4dd00000001;
          puStack_f8 = &UNK_143087298;
          ppuStack_f0 = &puStack_1c8;
          pdb_140f332f0(&uStack_e1,&fStack_148);
        }
        fVar24 = 0.0;
      }
      else {
        fVar22 = _DAT_142e36f28 / fVar22;
        fVar26 = fVar26 * fVar22;
        fVar24 = fVar22 * 0.0;
        fVar45 = fVar22 * fVar23;
      }
      *(undefined4 *)(param_1 + 0x118) = 1;
      *(ulonglong *)(param_1 + 0x11c) = CONCAT44(fVar42,fVar41);
      *(float *)(param_1 + 0x124) = fVar43;
      *(float *)(param_1 + 0x128) = fVar26;
      *(float *)(param_1 + 300) = fVar24;
      *(float *)(param_1 + 0x130) = fVar45;
    }
    else if (1 < *_DAT_143ca8e90) {
      uStack_198 = &UNK_143087288;
      uStack_190 = pdb_1402ed400;
      fStack_148 = 0.0;
      fStack_144 = 0.0;
      fStack_140 = 136.44849;
      fStack_13c = 1.4013e-45;
      fStack_138 = 2.38221e-44;
      fStack_134 = 0.0;
      fStack_130 = 0.0;
      fStack_12c = 0.0;
      uStack_128 = &UNK_143086ff3;
      uStack_120 = 0x23;
      uStack_118 = 2;
      uStack_110 = &UNK_1430872d0;
      uStack_108 = 0x11;
      uStack_100 = 0x3b500000001;
      puStack_f8 = &UNK_143087374;
      ppuStack_f0 = (undefined **)&uStack_198;
      pdb_140f332f0(&uStack_e1,&fStack_148);
    }
  }
LAB_140cebe8f:
  lVar8 = lStack_1a0;
  pdb_141d44230(&puStack_1e0,lStack_1a0);
  if (puStack_1e0 != (undefined *)0x0) {
    uStack_180 = *(longlong *)(pcStack_1d8 + 8);
    uStack_178 = uStack_180 + *(longlong *)(pcStack_1d8 + 0x10) * 0x48;
    uStack_198 = puStack_1e0;
    uStack_190 = pcStack_1d8;
    uStack_188 = uStack_1d0;
    uStack_170 = 0;
    pdb_141d48b30(&puStack_1c8,&uStack_198);
    lVar8 = lStack_1a0;
    if (puStack_1c8 != (undefined *)0x0) {
      do {
        uStack_218 = uStack_1a8;
        uStack_228 = (undefined4)uStack_1b8;
        uStack_224 = uStack_1b8._4_4_;
        uStack_220 = uStack_1b0;
        uStack_21c = uStack_1ac;
        puStack_238 = puStack_1c8;
        pcStack_230 = pcStack_1c0;
        uStack_128 = (undefined *)CONCAT44(fVar38,fVar37);
        uStack_120 = CONCAT44(fVar40,fVar39);
        uStack_118 = CONCAT44(fVar42,fVar41);
        uStack_110 = (undefined *)CONCAT44(fVar44,fVar43);
        fStack_148 = fVar29;
        fStack_144 = fVar30;
        fStack_140 = fVar31;
        fStack_13c = fVar32;
        fStack_138 = fVar33;
        fStack_134 = fVar34;
        fStack_130 = fVar35;
        fStack_12c = fVar36;
        lVar8 = pdb_140cec2a0(param_1,&puStack_238,&fStack_148);
        if (lVar8 != 0) {
          return lVar8;
        }
        pdb_141d48b30(&puStack_1c8,&uStack_198);
        lVar8 = lStack_1a0;
      } while (puStack_1c8 != (undefined *)0x0);
    }
  }
  pdb_141d44290(&puStack_1e0,lVar8);
  uStack_1b8 = uStack_1d0;
  puStack_1c8 = puStack_1e0;
  pcStack_1c0 = pcStack_1d8;
  pdb_141d3f310(&uStack_198,&puStack_1c8);
  if (uStack_198 != (undefined *)0x0) {
    do {
      uStack_1f8 = uStack_188;
      puStack_208 = uStack_198;
      pcStack_200 = uStack_190;
      uStack_128 = (undefined *)CONCAT44(fVar38,fVar37);
      uStack_120 = CONCAT44(fVar40,fVar39);
      uStack_118 = CONCAT44(fVar42,fVar41);
      uStack_110 = (undefined *)CONCAT44(fVar44,fVar43);
      fStack_148 = fVar29;
      fStack_144 = fVar30;
      fStack_140 = fVar31;
      fStack_13c = fVar32;
      fStack_138 = fVar33;
      fStack_134 = fVar34;
      fStack_130 = fVar35;
      fStack_12c = fVar36;
      lVar8 = pdb_140ceb4c0(param_1,&puStack_208,&fStack_148,uVar5 + 1);
      if (lVar8 != 0) {
        return lVar8;
      }
      pdb_141d3f310(&uStack_198,&puStack_1c8);
    } while (uStack_198 != (undefined *)0x0);
  }
  return 0;
}

