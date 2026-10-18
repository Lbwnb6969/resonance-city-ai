// VA 0x142a43010, PDB extent 3398 bytes
// utils::geometry::triangle_triangle::cross_intersect::cross_intersect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/triangle_triangle/cross_intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::triangle_triangle::cross_intersect::cross_intersect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/triangle_triangle/cross_intersect.rs
   Extent: 3398 */

uint * pdb_142a43010(uint *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],int param_4
                    ,int param_5,int param_6)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [12];
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  uVar20 = _UNK_142e4e65c;
  fStack_1d0 = (float)((ulonglong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  fStack_1c0 = *(float *)(*param_3 + 8);
  fStack_1d8 = *(float *)param_2[2];
  fStack_1d4 = *(float *)(param_2[2] + 4);
  fStack_1c8 = *(float *)*param_3;
  fStack_1c4 = *(float *)(*param_3 + 4);
  auStack_1f8._12_4_ = _UNK_142e4e65c;
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._12_4_ = _UNK_142e4e65c;
  auStack_1e8._0_12_ = param_2[1];
  fStack_1cc = (float)_UNK_142e4e65c;
  fStack_1bc = (float)_UNK_142e4e65c;
  fVar24 = (float)pdb_141c6c7e0(auStack_1f8);
  fVar32 = _DAT_143510d30;
  fVar29 = _DAT_14304ab40;
  uVar22 = (uint)(_DAT_14304ab40 < fVar24);
  if (fVar24 < _DAT_143510d30) {
    uVar22 = 0xffffffff;
  }
  fStack_1d0 = (float)((ulonglong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  fStack_1c0 = *(float *)(param_3[1] + 8);
  fStack_1d8 = *(float *)param_2[2];
  fStack_1d4 = *(float *)(param_2[2] + 4);
  fStack_1c8 = *(float *)param_3[1];
  fStack_1c4 = *(float *)(param_3[1] + 4);
  auStack_1f8._12_4_ = uVar20;
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._12_4_ = uVar20;
  auStack_1e8._0_12_ = param_2[1];
  fStack_1cc = (float)uVar20;
  fStack_1bc = (float)uVar20;
  fVar24 = (float)pdb_141c6c7e0(auStack_1f8);
  uVar23 = (uint)(fVar29 < fVar24);
  if (fVar24 < fVar32) {
    uVar23 = 0xffffffff;
  }
  fStack_1d0 = (float)((ulonglong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  fStack_1c0 = (float)((ulonglong)*(undefined8 *)(param_3[2] + 4) >> 0x20);
  fStack_1d8 = *(float *)param_2[2];
  fStack_1d4 = *(float *)(param_2[2] + 4);
  fStack_1c8 = *(float *)param_3[2];
  fStack_1c4 = *(float *)(param_3[2] + 4);
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._0_12_ = param_2[1];
  fStack_1cc = (float)uVar20;
  fStack_1bc = (float)uVar20;
  fVar25 = (float)pdb_141c6c7e0(auStack_1f8);
  uVar21 = (uint)(fVar29 < fVar25);
  if (fVar25 < fVar32) {
    uVar21 = 0xffffffff;
  }
  if (uVar22 == uVar21 && uVar22 == uVar23) goto LAB_142a4325c;
  pauVar1 = param_2 + 1;
  pauVar2 = param_2 + 2;
  if (param_4 == param_5) {
LAB_142a432e6:
    uVar4 = *(undefined4 *)(param_2[2] + 8);
    uVar30 = *(undefined8 *)*pauVar2;
    *(undefined4 *)(param_2[2] + 8) = *(undefined4 *)(param_2[1] + 8);
    *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar1;
    *(undefined4 *)(param_2[1] + 8) = *(undefined4 *)(*param_2 + 8);
    *(undefined8 *)*pauVar1 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_2 + 8) = uVar4;
    *(undefined8 *)*param_2 = uVar30;
  }
  else if (param_4 == param_6) {
LAB_142a4333d:
    uVar4 = *(undefined4 *)(*param_2 + 8);
    uVar30 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(param_2[1] + 8);
    *(undefined8 *)*param_2 = *(undefined8 *)*pauVar1;
    *(undefined4 *)(param_2[1] + 8) = *(undefined4 *)(param_2[2] + 8);
    *(undefined8 *)*pauVar1 = *(undefined8 *)*pauVar2;
    *(undefined4 *)(param_2[2] + 8) = uVar4;
    *(undefined8 *)*pauVar2 = uVar30;
  }
  else if (param_5 != param_6) {
    if (0 < param_5) goto LAB_142a4333d;
    if (0 < param_6) goto LAB_142a432e6;
  }
  pauVar1 = param_3 + 1;
  pauVar2 = param_3 + 2;
  if (uVar22 == uVar23) {
LAB_142a43386:
    uVar4 = *(undefined4 *)(param_3[2] + 8);
    uVar30 = *(undefined8 *)*pauVar2;
    *(undefined4 *)(param_3[2] + 8) = *(undefined4 *)(param_3[1] + 8);
    *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar1;
    *(undefined4 *)(param_3[1] + 8) = *(undefined4 *)(*param_3 + 8);
    *(undefined8 *)*pauVar1 = *(undefined8 *)*param_3;
    *(undefined4 *)(*param_3 + 8) = uVar4;
    *(undefined8 *)*param_3 = uVar30;
  }
  else if (uVar22 == uVar21) {
LAB_142a433cd:
    uVar4 = *(undefined4 *)(*param_3 + 8);
    uVar30 = *(undefined8 *)*param_3;
    *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(param_3[1] + 8);
    *(undefined8 *)*param_3 = *(undefined8 *)*pauVar1;
    *(undefined4 *)(param_3[1] + 8) = *(undefined4 *)(param_3[2] + 8);
    *(undefined8 *)*pauVar1 = *(undefined8 *)*pauVar2;
    *(undefined4 *)(param_3[2] + 8) = uVar4;
    *(undefined8 *)*pauVar2 = uVar30;
  }
  else if (uVar23 != uVar21) {
    if (_DAT_14304ab40 < fVar24) goto LAB_142a433cd;
    if (_DAT_14304ab40 < fVar25) goto LAB_142a43386;
  }
  fVar29 = _DAT_142e36f28;
  uStack_178 = *(undefined8 *)*param_3;
  uVar16 = *(undefined4 *)*param_3;
  uVar17 = *(undefined4 *)(*param_3 + 4);
  uVar18 = *(undefined4 *)(*param_3 + 8);
  uVar13 = *(undefined4 *)*param_3;
  uVar14 = *(undefined4 *)(*param_3 + 4);
  uVar15 = *(undefined4 *)(*param_3 + 8);
  uVar10 = *(undefined4 *)*param_3;
  uVar11 = *(undefined4 *)(*param_3 + 4);
  uVar12 = *(undefined4 *)(*param_3 + 8);
  uVar7 = *(undefined4 *)*param_3;
  uVar8 = *(undefined4 *)(*param_3 + 4);
  uVar9 = *(undefined4 *)(*param_3 + 8);
  uVar4 = *(undefined4 *)*param_3;
  uVar5 = *(undefined4 *)(*param_3 + 4);
  uVar6 = *(undefined4 *)(*param_3 + 8);
  uVar30 = *(undefined8 *)param_3[1];
  fVar38 = (float)uVar30;
  fVar39 = (float)((ulonglong)uVar30 >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_3[1] + 8);
  fVar25 = (float)((ulonglong)*(undefined8 *)(param_3[1] + 8) >> 0x20);
  uVar30 = *(undefined8 *)(param_3[2] + 4);
  fVar28 = (float)uVar30;
  fVar27 = (float)((ulonglong)uVar30 >> 0x20);
  fStack_1c0 = *(float *)(*param_2 + 8);
  fStack_1c8 = *(float *)*param_2;
  fStack_1c4 = *(float *)(*param_2 + 4);
  auStack_188 = ZEXT416(*(uint *)(*param_3 + 8));
  uStack_170 = 0;
  auStack_1f8._12_4_ = _DAT_142e36f28;
  auStack_1f8._0_12_ = *param_3;
  auStack_1e8._12_4_ = _DAT_142e36f28;
  auStack_1e8._0_12_ = param_3[1];
  fStack_1cc = _DAT_142e36f28;
  fStack_1bc = (float)uVar20;
  fStack_1d8 = fVar25;
  fStack_1d4 = fVar28;
  fStack_1d0 = fVar27;
  fVar26 = (float)pdb_141c6c7e0(auStack_1f8);
  if (fVar32 <= fVar26) {
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar26 = fVar27;
    uStack_1b8 = uVar30;
  }
  else {
    fVar38 = (float)*(undefined8 *)*pauVar2;
    fVar39 = (float)((ulonglong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar37 = (float)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
    uStack_1b8 = CONCAT44(fVar24,fVar37);
    fVar26 = fVar24;
    fVar36 = fVar25;
    fVar24 = fVar27;
    fVar25 = (float)*(undefined8 *)*pauVar1;
    fVar28 = fVar37;
  }
  uStack_1b0 = 0;
  uVar3 = *(undefined4 *)(param_2[1] + 8);
  uVar35 = *(undefined4 *)(param_2[2] + 8);
  fStack_1d0 = (float)((ulonglong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  fStack_1d8 = *(float *)param_2[2];
  fStack_1d4 = *(float *)(param_2[2] + 4);
  auStack_1f8._12_4_ = uVar20;
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._12_4_ = uVar20;
  auStack_1e8._0_12_ = param_2[1];
  fStack_1cc = (float)uVar20;
  fStack_1bc = fVar29;
  fStack_1c8 = (float)uVar4;
  fStack_1c4 = (float)uVar5;
  fStack_1c0 = (float)uVar6;
  fVar27 = (float)pdb_141c6c7e0(auStack_1f8);
  if (fVar32 <= fVar27) {
    auStack_1e8._0_4_ = *(undefined4 *)param_2[1];
    auStack_1e8._4_4_ = *(undefined4 *)(param_2[1] + 4);
    uVar35 = *(undefined4 *)(param_2[1] + 8);
  }
  else {
    auStack_1e8._0_4_ = *(undefined4 *)param_2[2];
    auStack_1e8._4_4_ = *(undefined4 *)(param_2[2] + 4);
    *(undefined8 *)param_2[2] = *(undefined8 *)param_2[1];
    *(undefined4 *)param_2[1] = auStack_1e8._0_4_;
    *(undefined4 *)(param_2[1] + 4) = auStack_1e8._4_4_;
    *(undefined4 *)(param_2[2] + 8) = uVar3;
    *(undefined4 *)(param_2[1] + 8) = uVar35;
  }
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._8_4_ = uVar35;
  auStack_1e8._12_4_ = fVar29;
  fStack_1cc = fVar29;
  fStack_1bc = fVar29;
  fStack_1d8 = (float)uVar7;
  fStack_1d4 = (float)uVar8;
  fStack_1d0 = (float)uVar9;
  fStack_1c8 = fVar38;
  fStack_1c4 = fVar39;
  fStack_1c0 = fVar24;
  fVar27 = (float)pdb_141c6c7e0(auStack_1f8);
  uStack_190 = 0;
  uVar4 = (float)uStack_1b8;
  uVar5 = uStack_1b8._4_4_;
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._8_4_ = (int)((ulonglong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  auStack_1e8._0_8_ = *(undefined8 *)param_2[2];
  auStack_1e8._12_4_ = uVar20;
  fStack_1d4 = (float)uStack_1b8;
  fStack_1d0 = uStack_1b8._4_4_;
  fStack_1cc = fVar29;
  fStack_1bc = fVar29;
  fStack_1d8 = fVar25;
  fStack_1c8 = (float)uVar10;
  fStack_1c4 = (float)uVar11;
  fStack_1c0 = (float)uVar12;
  fStack_198 = fVar25;
  fStack_194 = fVar28;
  fVar28 = (float)pdb_141c6c7e0(auStack_1f8);
  fVar32 = _DAT_142e36f28;
  if ((_DAT_14304ab40 < fVar27) || (_DAT_14304ab40 < fVar28)) goto LAB_142a4325c;
  auStack_1a8 = ZEXT416((uint)*(float *)(*param_2 + 8));
  auStack_118 = ZEXT416((uint)*(float *)(param_2[2] + 8));
  uStack_128 = *(undefined8 *)*param_2;
  auVar19 = *param_2;
  fVar28 = (float)*(undefined8 *)param_2[1];
  uStack_f8 = *(undefined8 *)param_2[2];
  fVar27 = (float)((ulonglong)*(undefined8 *)param_2[1] >> 0x20);
  fVar33 = (float)((ulonglong)uStack_f8 >> 0x20) - fVar27;
  fVar27 = fVar27 - (float)((ulonglong)uStack_128 >> 0x20);
  fVar34 = *(float *)(param_2[2] + 8) - *(float *)(param_2[1] + 8);
  fVar31 = *(float *)(param_2[1] + 8) - *(float *)(*param_2 + 8);
  fVar41 = fVar27 * fVar34 - fVar33 * fVar31;
  fStack_138 = fVar31 * ((float)uStack_f8 - fVar28) - fVar34 * (fVar28 - (float)uStack_128);
  fVar28 = (fVar28 - (float)uStack_128) * fVar33 - ((float)uStack_f8 - fVar28) * fVar27;
  fStack_134 = _DAT_142e36f28 / SQRT(fVar28 * fVar28 + fVar41 * fVar41 + fStack_138 * fStack_138);
  fVar41 = fVar41 * fStack_134;
  fStack_138 = fStack_134 * fStack_138;
  fStack_134 = fStack_134 * fVar28;
  uStack_130 = 0;
  fVar31 = fVar38 - (float)uStack_178;
  fVar33 = fVar39 - uStack_178._4_4_;
  fVar34 = 0.0 - (float)uStack_170;
  fStack_100 = 0.0 - uStack_170._4_4_;
  fVar40 = fVar24 - (float)auStack_188._0_4_;
  fVar27 = fVar33 * (fVar26 - fVar24) - (fStack_194 - fVar39) * fVar40;
  fStack_148 = fVar40 * (fStack_198 - fVar38) - (fVar26 - fVar24) * fVar31;
  fVar28 = fVar31 * (fStack_194 - fVar39) - (fVar25 - fVar38) * fVar33;
  fStack_144 = _DAT_142e36f28 / SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fStack_148 * fStack_148);
  fVar27 = fVar27 * fStack_144;
  fStack_148 = fStack_144 * fStack_148;
  fStack_144 = fStack_144 * fVar28;
  fStack_140 = (fVar34 * ((float)uStack_190 - 0.0) - (fVar36 - 0.0) * fVar34) * 0.0;
  fStack_13c = (fVar34 * (uStack_190._4_4_ - 0.0) - (fVar37 - 0.0) * fStack_100) * 0.0;
  uStack_120 = 0;
  uStack_f0 = 0;
  auStack_1f8._12_4_ = _DAT_142e36f28;
  auStack_1f8._0_12_ = *param_2;
  auStack_1e8._12_4_ = _DAT_142e36f28;
  auStack_1e8._0_12_ = param_2[2];
  fStack_1cc = fVar29;
  fStack_1bc = fVar29;
  fStack_1d8 = fVar38;
  fStack_1d4 = fVar39;
  fStack_1d0 = fVar24;
  fStack_1c8 = (float)uVar13;
  fStack_1c4 = (float)uVar14;
  fStack_1c0 = (float)uVar15;
  fStack_108 = fVar33;
  fStack_104 = fVar33;
  fStack_fc = fStack_100;
  fVar24 = (float)pdb_141c6c7e0(auStack_1f8);
  uStack_168 = *(undefined8 *)(param_2[1] + 4);
  auStack_158 = ZEXT416(*(uint *)param_2[1]);
  uStack_160 = 0;
  auStack_1f8._12_4_ = fVar32;
  auStack_1f8._0_12_ = auVar19;
  auStack_1e8._8_4_ = (int)((ulonglong)uStack_168 >> 0x20);
  auStack_1e8._0_8_ = *(undefined8 *)param_2[1];
  auStack_1e8._12_4_ = uVar20;
  fStack_1d4 = (float)uVar4;
  fStack_1d0 = (float)uVar5;
  fStack_1cc = fVar29;
  fStack_1bc = fVar29;
  fStack_1d8 = fVar25;
  fStack_1c8 = (float)uVar16;
  fStack_1c4 = (float)uVar17;
  fStack_1c0 = (float)uVar18;
  fVar29 = (float)pdb_141c6c7e0(auStack_1f8);
  if (fVar24 <= _DAT_14304ab40) {
    fVar28 = (float)((uint)(((float)auStack_188._0_4_ - (float)auStack_1a8._0_4_) * fStack_134 +
                           fStack_138 * (uStack_178._4_4_ - uStack_128._4_4_) +
                           fVar41 * ((float)uStack_178 - (float)uStack_128)) ^ _DAT_142e37820);
    fVar32 = fVar28 / (fVar40 * fStack_134 + fStack_108 * fStack_138 + fVar31 * fVar41);
    fVar24 = fVar32 * fVar31 + (float)uStack_178;
    fVar25 = fVar32 * fVar33 + uStack_178._4_4_;
    fVar32 = fVar40 * fVar32 + (float)auStack_188._0_4_;
    if (fVar29 <= _DAT_14304ab40) {
      if ((0x7f7fffff < (uint)ABS(fVar32) || 0x7f7fffff < (uint)ABS(fVar24)) ||
          0x7f7fffff < (uint)ABS(fVar25)) goto LAB_142a4325c;
      fVar29 = (float)((uint)(((float)auStack_1a8._0_4_ - (float)auStack_188._0_4_) * fStack_144 +
                             fVar27 * ((float)uStack_128 - (float)uStack_178) +
                             (uStack_128._4_4_ - uStack_178._4_4_) * fStack_148) ^ _DAT_142e37820) /
               (fStack_144 * (uStack_168._4_4_ - (float)auStack_1a8._0_4_) +
               ((float)auStack_158._0_4_ - (float)uStack_128) * fVar27 +
               fStack_148 * ((float)uStack_168 - uStack_128._4_4_));
      uStack_178._0_4_ = ((float)auStack_158._0_4_ - (float)uStack_128) * fVar29 + (float)uStack_128
      ;
      uVar30 = CONCAT44(fVar29 * (uStack_168._4_4_ - (float)auStack_1a8._0_4_) +
                        (float)auStack_1a8._0_4_,
                        fVar29 * ((float)uStack_168 - uStack_128._4_4_) + uStack_128._4_4_);
    }
    else {
      if ((0x7f7fffff < (uint)ABS(fVar32) || 0x7f7fffff < (uint)ABS(fVar24)) ||
          0x7f7fffff < (uint)ABS(fVar25)) goto LAB_142a4325c;
      fVar28 = fVar28 / (fStack_134 * (uStack_1b8._4_4_ - (float)auStack_188._0_4_) +
                        fVar41 * (fStack_198 - (float)uStack_178) +
                        fStack_138 * ((float)uStack_1b8 - uStack_178._4_4_));
      uStack_178._0_4_ = (fStack_198 - (float)uStack_178) * fVar28 + (float)uStack_178;
      uVar30 = CONCAT44(fVar28 * (uStack_1b8._4_4_ - (float)auStack_188._0_4_) +
                        (float)auStack_188._0_4_,
                        fVar28 * ((float)uStack_1b8 - uStack_178._4_4_) + uStack_178._4_4_);
    }
  }
  else {
    fVar28 = (float)((uint)(((float)auStack_1a8._0_4_ - (float)auStack_188._0_4_) * fStack_144 +
                           fStack_148 * (uStack_128._4_4_ - uStack_178._4_4_) +
                           fVar27 * ((float)uStack_128 - (float)uStack_178)) ^ _DAT_142e37820);
    fVar32 = fVar28 / (((float)auStack_118._0_4_ - (float)auStack_1a8._0_4_) * fStack_144 +
                      (uStack_f8._4_4_ - uStack_128._4_4_) * fStack_148 +
                      ((float)uStack_f8 - (float)uStack_128) * fVar27);
    fVar24 = fVar32 * ((float)uStack_f8 - (float)uStack_128) + (float)uStack_128;
    fVar25 = fVar32 * (uStack_f8._4_4_ - uStack_128._4_4_) + uStack_128._4_4_;
    fVar32 = ((float)auStack_118._0_4_ - (float)auStack_1a8._0_4_) * fVar32 +
             (float)auStack_1a8._0_4_;
    if (fVar29 <= _DAT_14304ab40) {
      if ((0x7f7fffff < (uint)ABS(fVar32) || 0x7f7fffff < (uint)ABS(fVar24)) ||
          0x7f7fffff < (uint)ABS(fVar25)) goto LAB_142a4325c;
      fVar28 = fVar28 / (fStack_144 * (uStack_168._4_4_ - (float)auStack_1a8._0_4_) +
                        fVar27 * ((float)auStack_158._0_4_ - (float)uStack_128) +
                        fStack_148 * ((float)uStack_168 - uStack_128._4_4_));
      uStack_178._0_4_ = ((float)auStack_158._0_4_ - (float)uStack_128) * fVar28 + (float)uStack_128
      ;
      uVar30 = CONCAT44(fVar28 * (uStack_168._4_4_ - (float)auStack_1a8._0_4_) +
                        (float)auStack_1a8._0_4_,
                        fVar28 * ((float)uStack_168 - uStack_128._4_4_) + uStack_128._4_4_);
    }
    else {
      if ((0x7f7fffff < (uint)ABS(fVar32) || 0x7f7fffff < (uint)ABS(fVar24)) ||
          0x7f7fffff < (uint)ABS(fVar25)) goto LAB_142a4325c;
      fVar29 = (float)((uint)(((float)auStack_188._0_4_ - (float)auStack_1a8._0_4_) * fStack_134 +
                             ((float)uStack_178 - (float)uStack_128) * fVar41 +
                             (uStack_178._4_4_ - uStack_128._4_4_) * fStack_138) ^ _DAT_142e37820) /
               (fStack_134 * (uStack_1b8._4_4_ - (float)auStack_188._0_4_) +
               fVar41 * (fStack_198 - (float)uStack_178) +
               fStack_138 * ((float)uStack_1b8 - uStack_178._4_4_));
      uStack_178._0_4_ = (fStack_198 - (float)uStack_178) * fVar29 + (float)uStack_178;
      uVar30 = CONCAT44(fVar29 * (uStack_1b8._4_4_ - (float)auStack_188._0_4_) +
                        (float)auStack_188._0_4_,
                        fVar29 * ((float)uStack_1b8 - uStack_178._4_4_) + uStack_178._4_4_);
    }
  }
  fVar29 = (float)((ulonglong)uVar30 >> 0x20);
  if ((((uint)ABS((float)uStack_178) < 0x7f800000) && ((uint)ABS((float)uVar30) < 0x7f800000)) &&
     ((uint)ABS(fVar29) < 0x7f800000)) {
    fVar28 = fVar25 - (float)uVar30;
    fVar29 = fVar32 - fVar29;
    *param_1 = (uint)(_DAT_143623e30 <=
                     fVar29 * fVar29 +
                     fVar28 * fVar28 + (fVar24 - (float)uStack_178) * (fVar24 - (float)uStack_178));
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar25,fVar24);
    param_1[3] = (uint)fVar32;
    param_1[4] = (uint)(float)uStack_178;
    *(undefined8 *)(param_1 + 5) = uVar30;
    return param_1;
  }
LAB_142a4325c:
  *param_1 = 2;
  return param_1;
}

