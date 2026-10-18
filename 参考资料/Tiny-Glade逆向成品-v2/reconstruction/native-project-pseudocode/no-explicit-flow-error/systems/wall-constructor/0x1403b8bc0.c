// VA 0x1403b8bc0, PDB extent 2577 bytes
// system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure$6<false>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure$6<false>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
   Extent: 2577 */

void pdb_1403b8bc0(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  bool bVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 in_XMM3_Dc;
  float fVar27;
  undefined4 in_XMM3_Dd;
  float fVar28;
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
  undefined1 auStack_2c8 [8];
  float fStack_2c0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined4 uStack_20c;
  undefined1 auStack_208 [16];
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined4 *puStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_130;
  int *piStack_128;
  float *pfStack_120;
  longlong lStack_118;
  float *pfStack_110;
  longlong lStack_108;
  float fStack_100;
  float fStack_fc;
  ulonglong auStack_f8 [23];
  
  auStack_f8[1] = 0xfffffffffffffffe;
  uStack_140 = in_XMM3_Dc;
  auStack_148 = (undefined1  [8])param_4;
  uStack_13c = in_XMM3_Dd;
  uStack_130 = *(undefined8 *)param_1;
  lVar6 = *(longlong *)(param_1 + 2);
  lVar7 = *(longlong *)(param_1 + 4);
  uStack_198 = *param_2;
  uStack_188 = *param_3;
  uStack_190 = 0;
  uStack_180 = 0;
  auStack_1a8 = ZEXT416((uint)*(float *)(param_2 + 1));
  auStack_178 = ZEXT416((uint)*(float *)(param_3 + 1));
  uVar8 = pdb_140081190(uStack_130,
                        CONCAT44((int)((ulonglong)uStack_198 >> 0x20),
                                 ((float)uStack_198 + (float)uStack_188) * _DAT_142e36f50),
                        (*(float *)(param_2 + 1) + *(float *)(param_3 + 1)) * _DAT_142e36f50);
  uVar12 = (ulonglong)uVar8;
  uVar9 = *(ulonglong *)(lVar6 + 0x10);
  if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4a0);
  }
  uVar1 = uVar12 + 1;
  if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4a0);
  }
  uVar9 = *(ulonglong *)(lVar7 + 0x10);
  if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4b8);
  }
  if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4b8);
  }
  fStack_1f8 = *(float *)(*(longlong *)(lVar6 + 8) + uVar12 * 4);
  fStack_1f8 = extraout_XMM0_Da *
               (*(float *)(*(longlong *)(lVar6 + 8) + 4 + uVar12 * 4) - fStack_1f8) + fStack_1f8;
  uStack_1f4 = extraout_XMM0_Db;
  fVar15 = (float)pub_142e32b00(fStack_1f8 / _DAT_142e3c624);
  uVar9 = 0;
  if (0.0 <= fVar15) {
    uVar9 = (longlong)(fVar15 - _DAT_142e36f2c) & (longlong)fVar15 >> 0x3f | (longlong)fVar15;
  }
  uVar12 = 0xffffffffffffffff;
  if (fVar15 <= _DAT_142e36f30) {
    uVar12 = uVar9;
  }
  lStack_118 = 0;
  pfStack_110 = (float *)0x4;
  lStack_108 = 0;
  pdb_140de8bb0(uVar12 + 1 + (ulonglong)(uVar12 == 0),_DAT_142e3787c,*(undefined8 *)(param_1 + 6),
                &lStack_118,&UNK_142f4e488);
  pfStack_120 = pfStack_110 + lStack_108;
  piStack_128 = *(int **)(param_1 + 10);
  puStack_160 = *(undefined4 **)(param_1 + 0xc);
  lStack_158 = *(longlong *)(param_1 + 0xe);
  uStack_150 = *(undefined8 *)(param_1 + 0x10);
  fStack_1e8 = (float)uStack_188;
  fStack_1e4 = uStack_188._4_4_;
  fStack_1e0 = (float)auStack_178._0_4_;
  fStack_1dc = (float)uStack_188;
  fStack_1d8 = (float)uStack_198;
  fStack_1d4 = uStack_198._4_4_;
  fStack_1d0 = (float)auStack_1a8._0_4_;
  fStack_1cc = (float)uStack_198;
  auVar18._4_4_ = param_5;
  auVar18._0_4_ = auStack_148._0_4_;
  auVar18._8_4_ = auStack_148._4_4_;
  auVar18._12_4_ = 0;
  bVar11 = true;
  pfVar10 = pfStack_110;
  _auStack_148 = auVar18;
  if (pfStack_110 != pfStack_120) {
    do {
      pfVar2 = pfVar10 + 1;
      pfVar13 = pfVar2;
      pfVar14 = param_1;
      param_1 = pfVar10;
      if (bVar11) {
        if (pfVar2 == pfStack_120) break;
        pfVar13 = pfVar10 + 2;
        pfVar14 = pfVar10;
        param_1 = pfVar2;
      }
      fVar32 = *pfVar14 * _DAT_142e36f50;
      fVar15 = *param_1 * _DAT_142e36f50;
      uVar8 = pdb_140081190(uStack_130,uStack_198,auStack_1a8._0_4_);
      uVar12 = (ulonglong)uVar8;
      uVar9 = *(ulonglong *)(lVar6 + 0x10);
      fStack_1c8 = extraout_XMM0_Da_00;
      uStack_1c4 = extraout_XMM0_Db_00;
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4a0);
      }
      uVar1 = uVar12 + 1;
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4a0);
      }
      uVar9 = *(ulonglong *)(lVar7 + 0x10);
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4b8);
      }
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4b8);
      }
      fStack_100 = *(float *)(*(longlong *)(lVar6 + 8) + uVar12 * 4);
      fVar21 = *(float *)(*(longlong *)(lVar6 + 8) + 4 + uVar12 * 4);
      uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 8) + uVar12 * 8);
      fVar16 = (float)uVar3;
      fVar19 = (float)((ulonglong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 8) + 8 + uVar12 * 8);
      fVar16 = extraout_XMM0_Da_00 * ((float)uVar3 - fVar16) + fVar16;
      fVar19 = extraout_XMM0_Da_00 * ((float)((ulonglong)uVar3 >> 0x20) - fVar19) + fVar19;
      fVar23 = _DAT_142e36f28 / SQRT(fVar19 * fVar19 + fVar16 * fVar16);
      uVar8 = (uint)((int)fVar23 - 1U < 0x7fffff ||
                    (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23);
      auStack_f8[0] =
           CONCAT44((int)(uVar8 << 0x1f) >> 0x1f,(int)(uVar8 << 0x1f) >> 0x1f) &
           CONCAT44(fVar16 * fVar23,(float)((uint)fVar19 ^ _DAT_142e37820) * fVar23);
      pdb_140df4520(auStack_2c8,auStack_f8);
      fVar16 = fStack_2c0;
      fVar19 = auStack_2c8._0_4_;
      fVar23 = auStack_2c8._4_4_;
      uVar8 = pdb_140081190(uStack_130,uStack_188,auStack_178._0_4_);
      uVar12 = (ulonglong)uVar8;
      uVar9 = *(ulonglong *)(lVar6 + 0x10);
      fStack_1b8 = extraout_XMM0_Da_01;
      uStack_1b4 = extraout_XMM0_Db_01;
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4a0);
      }
      uVar1 = uVar12 + 1;
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4a0);
      }
      uVar9 = *(ulonglong *)(lVar7 + 0x10);
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar9,&UNK_142f4e4b8);
      }
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar1,uVar9,&UNK_142f4e4b8);
      }
      fStack_fc = *(float *)(*(longlong *)(lVar6 + 8) + uVar12 * 4);
      fVar22 = *(float *)(*(longlong *)(lVar6 + 8) + 4 + uVar12 * 4);
      uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 8) + uVar12 * 8);
      fVar17 = (float)uVar3;
      fVar20 = (float)((ulonglong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 8) + 8 + uVar12 * 8);
      fVar17 = extraout_XMM0_Da_01 * ((float)uVar3 - fVar17) + fVar17;
      fVar20 = extraout_XMM0_Da_01 * ((float)((ulonglong)uVar3 >> 0x20) - fVar20) + fVar20;
      fVar24 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar17 * fVar17);
      uVar8 = (uint)((int)fVar24 - 1U < 0x7fffff ||
                    (int)ABS(fVar24) - 0x800000U < 0x7f000000 && -1 < (int)fVar24);
      auStack_f8[0] =
           CONCAT44((int)(uVar8 << 0x1f) >> 0x1f,(int)(uVar8 << 0x1f) >> 0x1f) &
           CONCAT44(fVar17 * fVar24,(float)((uint)fVar20 ^ _DAT_142e37820) * fVar24);
      pdb_140df4520(auStack_2c8,auStack_f8);
      fVar24 = fStack_2c0;
      fVar29 = auStack_2c8._0_4_;
      fVar25 = auStack_2c8._4_4_;
      fVar17 = *param_1;
      fVar20 = *pfVar14;
      iVar4 = *piStack_128;
      uVar5 = *puStack_160;
      auStack_208 = ZEXT416(*(uint *)(lStack_158 + 0x30));
      pdb_140951920(auStack_2c8);
      fVar32 = fVar32 + fVar15;
      fVar33 = fVar32 * _DAT_142e36f50 - (_DAT_142e36f28 - fVar32) * _DAT_142e36f50;
      fVar37 = ((fVar21 - fStack_100) * fStack_1c8 + fStack_100) * fVar33;
      fVar34 = fVar19 * fVar37 + fStack_1d8;
      fVar35 = fVar23 * fVar37 + fStack_1d4;
      fVar36 = fVar16 * fVar37 + fStack_1d0;
      fVar33 = ((fVar22 - fStack_fc) * fStack_1b8 + fStack_fc) * fVar33;
      fVar38 = fVar29 * fVar33 + fStack_1e8;
      fVar39 = fVar25 * fVar33 + fStack_1e4;
      fVar40 = fVar24 * fVar33 + fStack_1e0;
      fVar15 = fVar38 - fVar34;
      fVar21 = fVar39 - fVar35;
      fVar23 = fVar40 - fVar36;
      fVar24 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar15 * fVar15);
      fVar25 = _DAT_142e36f28 / fVar24;
      fVar21 = fVar25 * fVar21;
      fVar23 = fVar25 * fVar23;
      fVar32 = fVar21 * 0.0;
      fVar16 = fVar23 * 0.0;
      fVar22 = fVar25 * fVar15;
      fVar31 = fVar25 * ((fVar29 * fVar33 + fStack_1dc) - (fVar19 * fVar37 + fStack_1cc)) * 0.0;
      fVar33 = fVar32 - fVar23;
      fVar37 = fVar16 - fVar31;
      fVar29 = fVar22 - fVar32;
      fVar19 = _DAT_142e36f28 / SQRT(fVar29 * fVar29 + fVar37 * fVar37 + fVar33 * fVar33);
      fVar33 = fVar19 * fVar33;
      fVar37 = fVar19 * fVar37;
      fVar29 = fVar19 * fVar29;
      fVar28 = fVar29 * fVar22 - fVar23 * fVar33;
      fVar30 = fVar21 * fVar33 - fVar37 * fVar22;
      fVar22 = (fVar23 * fVar37 - fVar29 * fVar21) * _DAT_142f4e330;
      fVar26 = fVar28 * _UNK_142f4e334;
      fVar27 = fVar30 * _UNK_142f4e338;
      fStack_268 = fVar24 * fVar25 * fVar15 + fVar22 + fVar33 * 0.0;
      fStack_264 = fVar24 * fVar21 + fVar26 + fVar37 * 0.0;
      fStack_260 = fVar24 * fVar23 + fVar27 + fVar29 * 0.0;
      fStack_25c = fVar31 + (fVar37 * fVar23 - fVar21 * fVar29) * _UNK_142f4e33c +
                   fVar19 * (fVar21 * 0.0 - fVar23) * 0.0;
      fVar15 = fStack_1f8 * (fVar17 - fVar20);
      fStack_258 = fVar37 * 0.0 + fVar32 + fVar28 * _DAT_142f4e340;
      fStack_254 = fVar29 * 0.0 + fVar16 + fVar30 * _DAT_142f4e340;
      fStack_250 = fVar31 + fVar22 + fVar33 * fVar15;
      fStack_24c = fVar32 + fVar26 + fVar37 * fStack_1f8 * (fVar17 - fVar20);
      fStack_248 = fVar27 + fVar16 + fVar29 * fVar15;
      fStack_244 = _DAT_142e36f28 * _DAT_142e36f50 * (fVar38 + fVar34);
      fStack_240 = _DAT_142e36f28 * _DAT_142e36f50 * (fVar39 + fVar35);
      fStack_23c = _DAT_142e36f28 * _DAT_142e36f50 * (fVar40 + fVar36);
      uStack_238 = uStack_298;
      uStack_230 = uStack_290;
      uStack_220 = uStack_280;
      uStack_228 = uStack_288;
      uStack_214 = CONCAT44((float)auStack_208._0_4_ * (float)auStack_148._4_4_,
                            (float)auStack_208._0_4_ * (float)auStack_148._0_4_);
      uStack_20c = 0x40;
      iStack_21c = iVar4;
      uStack_218 = uVar5;
      pdb_14094c790(auStack_2c8,&fStack_268);
      pdb_1406002b0(uStack_150,auStack_2c8);
      *piStack_128 = *piStack_128 + 1;
      bVar11 = false;
      pfVar10 = pfVar13;
    } while (pfVar13 != pfStack_120);
  }
  if (lStack_118 != 0) {
    pub_1406abac0((byte *)pfStack_110,lStack_118 << 2,4);
  }
  return;
}

