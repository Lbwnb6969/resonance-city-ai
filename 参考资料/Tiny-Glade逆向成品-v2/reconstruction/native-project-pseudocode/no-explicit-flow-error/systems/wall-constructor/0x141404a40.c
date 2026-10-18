// VA 0x141404a40, PDB extent 2679 bytes
// system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_brick_line::closure$0<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::emit_stone_foundation_brick_line::closure$0<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
   Extent: 2679 */

void pdb_141404a40(undefined8 *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  longlong *plStack_258;
  float *pfStack_250;
  ulonglong auStack_248 [6];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1e8 [16];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\0') {
    param_5 = param_5 - param_4;
  }
  else {
    param_5 = (float)pdb_140dea7c0(param_1[1]);
  }
  fVar27 = _DAT_142e37848;
  fVar18 = _DAT_142e36f28;
  lVar3 = param_1[2];
  fVar17 = *(float *)(lVar3 + 0x3c);
  fVar13 = 0.0;
  if (_DAT_142e37848 < fVar17) {
    fVar13 = ((_DAT_142e36f50 * param_5 + param_4) * fVar17) / fVar17;
    if (*pcVar2 == '\0') {
      fVar18 = 0.0;
      if (0.0 <= fVar13) {
        fVar18 = fVar13;
      }
      fVar13 = _DAT_142e36f28;
      if (fVar18 <= _DAT_142e36f28) {
        fVar13 = fVar18;
      }
    }
    else {
      fVar13 = (float)pub_142e32a70();
      fVar13 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar13 |
                      (uint)(fVar18 + fVar13) & -(uint)(fVar13 < 0.0));
    }
  }
  pdb_141483320(&fStack_298,param_1[3],_DAT_143307070 + fVar17 * fVar13,
                fVar17 * fVar13 + _DAT_14300bbe0);
  fVar17 = _DAT_142e378f0 * fStack_294 - fStack_290 * _DAT_142f94730;
  fVar18 = _UNK_142e378f4 * fStack_290 - fStack_298 * _UNK_142f94734;
  fVar13 = _UNK_142e378f8 * fStack_298 - fStack_294 * _UNK_142f94738;
  fVar25 = _DAT_142e36f28 / SQRT(fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17);
  uVar24 = (uint)((int)fVar25 - 1U < 0x7fffff ||
                 (int)ABS(fVar25) - 0x800000U < 0x7f000000 && -1 < (int)fVar25);
  fVar17 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar17));
  fVar18 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar18));
  fVar13 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar25 * fVar13));
  fStack_1cc = (float)((int)(uVar24 << 0x1f) >> 0x1f &
                      (uint)(fVar25 * (_UNK_142e378fc * fStack_294 - fStack_290 * _UNK_142f9473c)));
  if (_DAT_143009d64 < fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17) {
    fVar32 = *(float *)(lVar3 + 0x3c) * param_5;
    auStack_198 = ZEXT416((uint)param_2[1]);
    auStack_1a8 = ZEXT416((uint)param_3[1]);
    fVar26 = param_3[1] - param_2[1];
    fVar31 = 0.0;
    fVar25 = fVar32 * fStack_294 + fVar26;
    fVar26 = fVar26 * 0.0;
    fVar21 = fVar26 + fVar32 * fStack_290;
    fVar26 = fVar26 + fVar32 * fStack_298;
    fVar32 = SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar21 * fVar21);
    if (fVar27 < fVar32) {
      fVar27 = _DAT_142e36f28 / fVar32;
      bVar11 = (int)fVar27 - 1U < 0x7fffff ||
               (int)ABS(fVar27) - 0x800000U < 0x7f000000 && -1 < (int)fVar27;
      if (bVar11) {
        fVar25 = fVar25 * fVar27;
      }
      else {
        fVar25 = 0.0;
      }
      uVar24 = (uint)bVar11;
      fVar21 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar21 * fVar27));
      fVar27 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar27));
      bVar11 = _DAT_143009d64 < fVar27 * fVar27 + fVar25 * fVar25 + fVar21 * fVar21;
      if (!bVar11) {
        fVar25 = fStack_294;
      }
      uVar24 = (uint)bVar11;
      uVar22 = (int)(uVar24 << 0x1f) >> 0x1f;
      uVar24 = (int)(uVar24 << 0x1f) >> 0x1f;
      fVar21 = (float)(~uVar22 & (uint)fStack_290 | (uint)fVar21 & uVar22);
      fVar27 = (float)(~uVar24 & (uint)fStack_298 | (uint)fVar27 & uVar24);
      fVar26 = _DAT_142e36f28 / SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar21 * fVar21);
      bVar11 = (int)fVar26 - 1U < 0x7fffff ||
               (int)ABS(fVar26) - 0x800000U < 0x7f000000 && -1 < (int)fVar26;
      if (bVar11) {
        fVar25 = fVar25 * fVar26;
      }
      else {
        fVar25 = 0.0;
      }
      uVar24 = (uint)bVar11;
      fVar35 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar21));
      fVar30 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar26 * fVar27));
      auVar28._4_4_ = fVar35;
      auVar28._0_4_ = fVar25;
      auVar28._8_8_ = 0;
      fVar19 = fVar18 * fVar35 - fVar13 * fVar25;
      fVar20 = fVar13 * fVar30 - fVar17 * fVar35;
      fVar23 = fVar25 * fVar17 - fVar30 * fVar18;
      fVar14 = _DAT_142e36f28 / SQRT(fVar23 * fVar23 + fVar20 * fVar20 + fVar19 * fVar19);
      bVar11 = (int)ABS(fVar14) - 0x800000U < 0x7f000000;
      bVar12 = (int)fVar14 - 1U < 0x7fffff;
      fVar27 = 0.0;
      fVar21 = 0.0;
      fVar26 = 0.0;
      if (bVar12 || bVar11 && -1 < (int)fVar14) {
        fVar31 = fVar23 * fVar14;
        fVar27 = fVar30 * fVar18;
        fVar21 = fVar13 * 0.0;
        fVar26 = fStack_1cc * 0.0;
      }
      if (_DAT_143009d64 < fVar30 * fVar30 + fVar25 * fVar25 + fVar35 * fVar35) {
        uVar24 = (uint)(bVar12 || bVar11 && -1 < (int)fVar14);
        fVar19 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar19 * fVar14));
        fVar14 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar20 * fVar14));
        if (_DAT_143009d64 < fVar31 * fVar31 + fVar14 * fVar14 + fVar19 * fVar19) {
          auStack_268._0_8_ = (ulonglong *)param_1[5];
          auStack_248[0] = *(ulonglong *)param_1[5];
          puVar4 = (uint *)param_1[6];
          auStack_288._0_8_ = puVar4;
          uVar24 = *puVar4;
          uVar22 = puVar4[1];
          auStack_278._0_8_ = (longlong *)param_1[7];
          plVar5 = (longlong *)param_1[8];
          lVar9 = *(longlong *)param_1[7];
          lVar10 = *plVar5;
          auStack_1b8 = ZEXT416(*(uint *)param_1[4]);
          pfStack_250 = param_3;
          uVar8 = pdb_140315970(auStack_248);
          uVar8 = ((ulonglong)uVar24 + 0x9e3779b97f4a7c15 ^ uVar8 ^ 5000000) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ (ulonglong)uVar22 + 0x9e3779b97f4a7c15 ^ uVar8) *
                  -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ lVar9 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ lVar10 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          auStack_248[0] = (uVar8 ^ 0x9e3779b97f4a7c16 ^ uVar8 >> 0x20) * -0x40a7b892e31b1a47;
          auStack_248[0] = auStack_248[0] >> 0x20 ^ auStack_248[0];
          auVar16._0_8_ = pdb_140e02880(auStack_248);
          fVar23 = _DAT_142e37ad4;
          auVar16._8_8_ = extraout_XMM0_Qb;
          auStack_1e8._4_12_ = auVar16._4_12_;
          auStack_1e8._0_4_ = (float)auVar16._0_8_ * _DAT_142e37ad4;
          auStack_248[0] = *(ulonglong *)auStack_268._0_8_;
          uVar24 = *(uint *)auStack_288._0_8_;
          uVar22 = *(uint *)(auStack_288._0_8_ + 4);
          lVar9 = *(longlong *)auStack_278._0_8_;
          lVar10 = *plVar5;
          uVar8 = pdb_140315970(auStack_248);
          uVar8 = ((ulonglong)uVar24 + 0x9e3779b97f4a7c15 ^ uVar8 ^ 5000000) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ (ulonglong)uVar22 + 0x9e3779b97f4a7c15 ^ uVar8) *
                  -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ lVar9 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ lVar10 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          auStack_248[0] = (uVar8 ^ 0x9e3779b97f4a7c17 ^ uVar8 >> 0x20) * -0x40a7b892e31b1a47;
          auStack_248[0] = auStack_248[0] >> 0x20 ^ auStack_248[0];
          uVar15 = pdb_140e02880(auStack_248);
          fStack_1d8 = fVar17 * 0.0;
          fStack_1d4 = fVar18 * 0.0;
          fStack_1d0 = fVar13 * 0.0;
          fStack_1cc = fStack_1cc * 0.0;
          plStack_258 = (longlong *)param_1[9];
          fVar20 = *param_2;
          uVar24 = *(uint *)auStack_288._0_8_;
          uVar22 = *(uint *)(auStack_288._0_8_ + 4);
          lVar9 = *(longlong *)auStack_278._0_8_;
          lVar10 = *plVar5;
          auStack_248[0] = *(ulonglong *)auStack_268._0_8_;
          fVar32 = _DAT_14300c320 + fVar32;
          fVar29 = (float)auStack_1e8._0_4_ + (float)auStack_1b8._0_4_;
          fVar33 = fVar30 * fVar32 + fVar19 * 0.0 + fStack_1d8;
          fVar34 = fVar25 * fVar32 + fVar14 * 0.0 + fStack_1d4;
          fVar35 = fVar35 * fVar32 + fVar31 * 0.0 + fStack_1d0;
          fVar36 = fVar19 * fVar29 + fVar30 * 0.0 + fStack_1cc;
          auStack_278._4_4_ = *(undefined4 *)param_1[10];
          auStack_278._0_4_ = (float)uVar15 * fVar23;
          auStack_278._8_4_ = (int)((ulonglong)uVar15 >> 0x20);
          auStack_278._12_4_ = 0;
          fVar25 = param_2[2];
          auStack_288 = ZEXT416((uint)pfStack_250[2]);
          fVar32 = *pfStack_250;
          auStack_268 = auVar28;
          fStack_1c8 = fVar31;
          fStack_1c4 = fVar27;
          fStack_1c0 = fVar21;
          fStack_1bc = fVar26;
          uVar8 = pdb_140315970(auStack_248);
          uVar8 = (uVar8 ^ (ulonglong)uVar24 + 0x9e3779b97f4a7c15 ^ 5000000) * -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ (ulonglong)uVar22 + 0x9e3779b97f4a7c15 ^ uVar8) *
                  -0x40a7b892e31b1a47;
          uVar8 = (uVar8 >> 0x20 ^ lVar9 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          lVar9 = (uVar8 >> 0x20 ^ lVar10 + 0x9e3779b97f4a7c15U ^ uVar8) * -0x40a7b892e31b1a47;
          uVar7 = pdb_1409012c0(*(undefined4 *)param_1[0xb]);
          fVar27 = *(float *)(lVar3 + 0x3c);
          pdb_140951920(auStack_248);
          uStack_158 = uStack_218;
          uStack_150 = uStack_210;
          uStack_148 = uStack_208;
          uStack_140 = uStack_200;
          fVar21 = (float)auStack_278._0_4_ + _DAT_143307080;
          fVar26 = (float)auStack_278._4_4_ + _UNK_143307084;
          fStack_168 = (float)auStack_268._4_4_ * 0.0 + fVar31 * 0.0 + fVar21 * fVar13;
          fStack_164 = (fVar20 + fVar32) * _UNK_1430140c4 + fVar26 * fVar17;
          fStack_160 = ((float)auStack_198._0_4_ + (float)auStack_1a8._0_4_) * _UNK_1430140c8 +
                       fVar26 * fVar18;
          fStack_15c = ((float)auStack_288._0_4_ + fVar25) * _UNK_1430140cc + fVar26 * fVar13;
          fStack_178 = fVar29 * fVar14 + (float)auStack_268._0_4_ * 0.0 + fStack_1d4;
          fStack_174 = fVar29 * fStack_1c8 + (float)auStack_268._4_4_ * 0.0 + fStack_1d0;
          fStack_170 = fVar21 * fVar17 + fVar30 * 0.0 + fVar19 * 0.0;
          fStack_16c = fVar21 * fVar18 + (float)auStack_268._0_4_ * 0.0 + fVar14 * 0.0;
          uStack_134 = CONCAT44((param_5 + param_4) * fVar27,param_4 * fVar27);
          uStack_12c = 0x2000;
          plVar6 = (longlong *)*plStack_258;
          fStack_188 = fVar33;
          fStack_184 = fVar34;
          fStack_180 = fVar35;
          fStack_17c = fVar36;
          iStack_13c = ((uint)((ulonglong)lVar9 >> 0x20) ^ (uint)lVar9 ^ 0x7f4a7c15) * 0x1ce4e5b9;
          uStack_138 = uVar7;
          pdb_14094c790(&uStack_128,&fStack_188);
          lVar3 = plVar6[2];
          if (lVar3 == *plVar6) {
            pdb_142d8db70(plVar6);
          }
          lVar9 = plVar6[1];
          lVar10 = lVar3 * 0x40;
          puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar10);
          *puVar1 = uStack_f8;
          puVar1[1] = uStack_f0;
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar10);
          *puVar1 = uStack_108;
          puVar1[1] = uStack_100;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = uStack_118;
          puVar1[1] = uStack_110;
          *(undefined8 *)(lVar9 + lVar10) = uStack_128;
          ((undefined8 *)(lVar9 + lVar10))[1] = uStack_120;
          plVar6[2] = lVar3 + 1;
          *plVar5 = *plVar5 + 1;
        }
      }
    }
  }
  return;
}

