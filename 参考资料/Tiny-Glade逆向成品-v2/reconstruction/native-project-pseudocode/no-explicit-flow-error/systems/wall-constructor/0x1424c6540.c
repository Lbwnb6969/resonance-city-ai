// VA 0x1424c6540, PDB extent 5280 bytes
// system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_wooden_pillar_w_stone_base
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_pillar_construction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_wooden_pillar_w_stone_base
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_pillar_construction.rs
   Extent: 5280 */

char pdb_1424c6540(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  char param_5,undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  byte *pbVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float fVar41;
  float fVar42;
  float fVar43;
  float afStack_338 [4];
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  int iStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 *puStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  int iStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  undefined8 *puStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  longlong lStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  float fStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar2 = param_6;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_258 = param_1;
  puVar10 = (undefined8 *)pdb_1413e4400(param_1,&UNK_1433056b0);
  if ((puVar10 == (undefined8 *)0x0) ||
     (lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143510e58);
  }
  lVar3 = *(longlong *)(param_2 + 0x140);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  LOCK();
  bVar17 = *(char *)(lVar3 + 0x18) == '\0';
  if (bVar17) {
    *(char *)(lVar3 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    pdb_142dbd1a0(lVar3 + 0x18,1,1000000000);
  }
  pdb_140e9a150(lVar3 + 0x18);
  fVar5 = _DAT_142e36f28;
  uStack_200 = uVar2;
  if ((*(longlong *)(lVar3 + 0x10) == 0) ||
     (piVar12 = (int *)(*(longlong *)(lVar3 + 8) + *(longlong *)(lVar3 + 0x10) * 4 + -4),
     piVar12 == (int *)0x0)) {
    lStack_2d0 = *(longlong *)(lVar11 + 0x10);
    if (lStack_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_280 = (int)lStack_2d0 + -1;
  }
  else {
    iStack_280 = *piVar12;
    lStack_2d0 = *(longlong *)(lVar11 + 0x10);
  }
  uStack_2d8 = *(undefined8 *)(lVar11 + 8);
  uStack_2c8 = *(undefined8 *)(lVar11 + 0x18);
  uStack_2c0 = *(undefined8 *)(lVar11 + 0x20);
  uStack_2b0 = *(undefined8 *)(lVar11 + 0x28);
  uStack_2a8 = *(undefined8 *)(lVar11 + 0x30);
  lStack_2a0 = lVar11 + 0x78;
  lStack_298 = lVar11 + 0x58;
  uStack_290 = *(undefined8 *)(lVar11 + 0x38);
  uStack_288 = *(undefined8 *)(lVar11 + 0x40);
  lStack_118 = 0;
  pbStack_110 = (byte *)0x4;
  lStack_108 = 0;
  puStack_260 = param_3 + param_4 * 8;
  lStack_148 = 0;
  lStack_2b8 = lVar3;
  while (param_3 != puStack_260) {
    uStack_328 = *param_3;
    uStack_320 = 0;
    fVar19 = *(float *)(param_3 + 6);
    fVar1 = *(float *)(param_3 + 5);
    fStack_f8 = *(float *)((longlong)param_3 + 0x2c);
    lStack_138 = param_3[2];
    uVar8 = (undefined4)((ulonglong)lStack_138 >> 0x20);
    uStack_2e8 = param_3[3];
    uStack_2e0 = 0;
    uStack_2f8 = param_3[4];
    uStack_2f0 = 0;
    uStack_308 = *(undefined8 *)((longlong)param_3 + 0x34);
    uStack_300 = 0;
    uStack_130 = 0;
    uStack_278 = CONCAT44(uVar8,uVar8);
    uStack_270 = 0;
    pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,fVar19);
    puStack_140 = param_3;
    uStack_120 = uStack_328;
    if (param_5 == '\0') {
      fVar18 = fVar19 * _DAT_142e3b1d8;
      fStack_318 = fVar19 * _DAT_142e37988;
      if (_DAT_143015ef0 <= fVar19) {
        fVar19 = _DAT_143015ef0;
      }
      fVar19 = fVar19 * _DAT_142e36f50 - fVar18;
      if (fVar19 <= _DAT_142e37870) {
        fVar19 = _DAT_142e37870;
      }
      fVar22 = fVar18 + fVar19;
      fVar20 = fVar22 * _DAT_142e36f38;
      fVar21 = fStack_318 * _DAT_142e36f50;
      fVar19 = fVar19 * _DAT_142e36f38 - fVar18;
      uVar16 = 0;
      fStack_314 = fStack_318;
      fStack_310 = fStack_318;
      fStack_30c = fStack_318;
      do {
        uStack_f1 = 1;
        pdb_140de88f0(&uStack_1f8,(undefined4)lStack_138);
        fVar23 = (float)uStack_1f8;
        fVar24 = uStack_1f8._4_4_;
        fVar25 = (float)uStack_1f0;
        fVar26 = uStack_1f0._4_4_;
        uStack_f1 = 1;
        pdb_140df4540(&uStack_1f8,&uStack_120);
        fVar27 = (float)pub_142e32b30();
        fVar29 = (float)pub_142e329e0();
        fVar30 = fVar27 * fVar25 * _DAT_142e377d0 + fVar24 * 0.0 * _DAT_142e377c0 +
                 fVar29 * fVar23 * _DAT_142e377b0 + fVar26 * 0.0;
        fVar32 = fVar25 * 0.0 * _UNK_142e377d4 + fVar29 * fVar24 * _UNK_142e377c4 +
                 fVar23 * 0.0 * _UNK_142e377b4 + fVar26 * fVar27;
        fVar36 = fVar29 * fVar25 * _UNK_142e377d8 + fVar24 * 0.0 * _UNK_142e377c8 +
                 fVar27 * fVar23 * _UNK_142e377b8 + fVar26 * 0.0;
        fVar23 = fVar25 * 0.0 * _UNK_142e377dc + fVar27 * fVar24 * _UNK_142e377cc +
                 fVar23 * 0.0 * _UNK_142e377bc + fVar26 * fVar29;
        fVar41 = fVar36 * fVar36;
        fVar39 = fVar23 * fVar23;
        fVar42 = fVar32 * fVar32 + fVar30 * fVar30;
        fVar24 = fVar20 * fVar36 + fVar21 * fVar32 + fVar19 * fVar30;
        fVar24 = fVar24 + fVar24;
        fVar40 = fVar23 + fVar23;
        fVar25 = SUB84(uStack_1f8,0);
        uVar4 = (ulonglong)uStack_1f8 >> 0x20;
        fVar26 = fVar40 * (fVar30 * fVar21 - fVar19 * fVar32) +
                 fVar24 * fVar36 + (fVar39 - (fVar42 + fVar41)) * fVar20 + (float)uStack_1f0;
        fVar31 = fVar36 * _DAT_143510dc0 * _DAT_142e377d0 + fVar32 * _DAT_143510db0 * _DAT_142e377c0
                 + fVar30 * _DAT_143510da0 * _DAT_142e377b0 + fVar23 * _DAT_143510d90;
        fVar33 = fVar36 * _UNK_143510dc4 * _UNK_142e377d4 + fVar32 * _UNK_143510db4 * _UNK_142e377c4
                 + fVar30 * _UNK_143510da4 * _UNK_142e377b4 + fVar23 * _UNK_143510d94;
        fVar34 = fVar36 * _UNK_143510dc8 * _UNK_142e377d8 + fVar32 * _UNK_143510db8 * _UNK_142e377c8
                 + fVar30 * _UNK_143510da8 * _UNK_142e377b8 + fVar23 * _UNK_143510d98;
        fVar35 = fVar36 * _UNK_143510dcc * _UNK_142e377dc + fVar32 * _UNK_143510dbc * _UNK_142e377cc
                 + fVar30 * _UNK_143510dac * _UNK_142e377bc + fVar23 * _UNK_143510d9c;
        fVar37 = fVar34 + fVar34;
        fVar23 = fVar33 + fVar33;
        fVar28 = fVar31 * (fVar31 + fVar31);
        fVar27 = (fVar31 + fVar31) * fVar35;
        fVar43 = fVar37 * fVar31 - fVar23 * fVar35;
        fVar29 = fVar27 + fVar37 * fVar33;
        fVar38 = fVar5 - (fVar28 + fVar33 * fVar23);
        uStack_1f8 = (undefined8 *)
                     CONCAT44((fVar23 * fVar31 + fVar35 * fVar37) * fStack_314,
                              (fVar5 - (fVar33 * fVar23 + fVar34 * fVar37)) * fStack_318);
        uStack_1f0 = CONCAT44(fVar43 * fStack_30c,fVar43 * fStack_310);
        uStack_1e8 = CONCAT44((fVar5 - (fVar34 * fVar37 + fVar28)) * fVar22,
                              (fVar23 * fVar31 - fVar35 * fVar37) * fVar22);
        uStack_1e0 = CONCAT44(fVar29 * fVar22,fVar29 * fVar22);
        uStack_1d8 = CONCAT44((fVar37 * fVar33 - fVar27) * fVar18,
                              (fVar23 * fVar35 + fVar37 * fVar31) * fVar18);
        uStack_1d0 = CONCAT44(fVar38 * fVar18,fVar38 * fVar18);
        uStack_1c8 = (undefined8 *)
                     CONCAT44((float)uVar4 +
                              fVar40 * (fVar36 * fVar19 - fVar20 * fVar30) +
                              fVar24 * fVar32 + (fVar39 - (fVar42 + fVar41)) * fVar21,
                              fVar25 + fVar40 * (fVar32 * fVar20 - fVar21 * fVar36) +
                                       fVar24 * fVar30 + (fVar39 - (fVar42 + fVar41)) * fVar19);
        uStack_1c0 = CONCAT44(fVar26,fVar26);
        uStack_f1 = 1;
        pdb_140e07fe0(&uStack_250,&uStack_1f8);
        uStack_f1 = 1;
        iVar7 = pdb_140315970(&param_6);
        uStack_f1 = 1;
        uVar8 = pdb_1409012c0(*(undefined4 *)(param_2 + 0x274));
        uStack_f1 = 1;
        pdb_140a77410(&uStack_1f8);
        iStack_164 = iVar7 + (int)lStack_148 + uVar16;
        puStack_198 = (undefined8 *)CONCAT71(uStack_24f,uStack_250);
        uStack_178 = uStack_230;
        uStack_170 = uStack_228;
        uStack_188 = uStack_240;
        uStack_184 = uStack_23c;
        uStack_180 = uStack_238;
        uStack_17c = uStack_234;
        puStack_190 = puStack_248;
        uStack_168 = 0;
        uStack_15c = 0;
        lStack_158 = lStack_1b8;
        uStack_150 = uStack_1b0;
        uStack_f1 = 1;
        uStack_160 = uVar8;
        pdb_1413f6d90(&uStack_2d8,&puStack_198);
        uVar16 = uVar16 + 1;
      } while (uVar16 < 4);
    }
    else {
      uStack_f1 = 1;
      pdb_140df4540(&uStack_1f8,&uStack_120);
      lVar11 = lStack_108;
      puStack_190 = (undefined1 *)CONCAT44(puStack_190._4_4_,(float)uStack_1f0);
      puStack_198 = uStack_1f8;
      if (lStack_108 == lStack_118) {
        uStack_f1 = 1;
        pdb_142d89250(&lStack_118);
      }
      *(undefined4 *)(pbStack_110 + lVar11 * 0x18 + 8) = puStack_190._0_4_;
      *(undefined8 **)(pbStack_110 + lVar11 * 0x18) = puStack_198;
      *(float *)(pbStack_110 + lVar11 * 0x18 + 0xc) = pbStack_100._0_4_;
      *(longlong *)(pbStack_110 + lVar11 * 0x18 + 0x10) = lStack_138;
      lStack_108 = lVar11 + 1;
    }
    uStack_f1 = 1;
    pdb_140df4540(&puStack_198,&uStack_120);
    uStack_f1 = 1;
    pdb_140de88f0(&uStack_1f8,(undefined4)lStack_138);
    fVar36 = (float)uStack_1f0 + (float)uStack_1f0;
    fVar20 = (float)uStack_1f0 * fVar36;
    fVar24 = uStack_1f8._4_4_ + uStack_1f8._4_4_;
    fVar18 = fVar24 * (float)uStack_1f8;
    fVar29 = fVar36 * (float)uStack_1f8;
    fVar32 = fVar36 * uStack_1f8._4_4_;
    fVar27 = (float)uStack_1f8 * ((float)uStack_1f8 + (float)uStack_1f8);
    fVar22 = fVar24 * uStack_1f0._4_4_;
    fVar25 = ((float)uStack_1f8 + (float)uStack_1f8) * uStack_1f0._4_4_;
    fVar36 = uStack_1f0._4_4_ * fVar36;
    fVar21 = fVar29 - fVar22;
    fVar26 = fVar25 + fVar32;
    fVar30 = fVar5 - (fVar27 + uStack_1f8._4_4_ * fVar24);
    fVar41 = fStack_f8 - fVar1;
    fVar23 = fVar41 + _DAT_142e3787c;
    fVar19 = pbStack_100._0_4_;
    if (_DAT_143015ef0 <= pbStack_100._0_4_) {
      fVar19 = _DAT_143015ef0;
    }
    fVar19 = fVar19 * _DAT_142e36f50;
    uStack_1f8 = (undefined8 *)
                 CONCAT44((fVar18 + fVar36) * fVar19,
                          (fVar5 - (uStack_1f8._4_4_ * fVar24 + fVar20)) * fVar19);
    uStack_1f0 = CONCAT44(fVar21 * fVar19,fVar21 * fVar19);
    uStack_1e8 = CONCAT44(fVar23 * (fVar5 - (fVar20 + fVar27)),fVar23 * (fVar18 - fVar36));
    uStack_1e0 = CONCAT44(fVar23 * fVar26,fVar23 * fVar26);
    uStack_1d8 = CONCAT44(fVar19 * (fVar32 - fVar25),fVar19 * (fVar22 + fVar29));
    uStack_1d0 = CONCAT44(fVar19 * fVar30,fVar19 * fVar30);
    uStack_1c8 = puStack_198;
    uStack_1c0 = CONCAT44(puStack_190._0_4_,puStack_190._0_4_);
    uStack_f1 = 1;
    pdb_140e07fe0(&uStack_250,&uStack_1f8);
    uStack_f1 = 1;
    iVar7 = pdb_140315970(&param_6);
    uStack_f1 = 1;
    uVar8 = pdb_1409012c0(*(undefined4 *)(param_2 + 0x274));
    uStack_f1 = 1;
    pdb_140a77410(&uStack_1f8);
    iVar9 = (int)lStack_148;
    iStack_164 = iVar7 + iVar9;
    puStack_198 = (undefined8 *)CONCAT71(uStack_24f,uStack_250);
    uStack_178 = uStack_230;
    uStack_170 = uStack_228;
    uStack_188 = uStack_240;
    uStack_184 = uStack_23c;
    uStack_180 = uStack_238;
    uStack_17c = uStack_234;
    puStack_190 = puStack_248;
    uStack_168 = 0;
    uStack_15c = 0;
    lStack_158 = lStack_1b8;
    uStack_150 = uStack_1b0;
    uStack_f1 = 1;
    uStack_160 = uVar8;
    pdb_1413f6d90(&uStack_2d8);
    *param_8 = *param_8 + 1;
    param_3 = puStack_140 + 8;
    lStack_148 = lStack_148 + 1;
    if (_DAT_14300c294 < fVar41) {
      afStack_338[0] = (float)uStack_308;
      afStack_338[1] = (float)(int)uStack_2f8;
      afStack_338[2] = (float)(int)((ulonglong)uStack_2f8 >> 0x20);
      afStack_338[3] = (float)uStack_308._4_4_;
      lVar11 = 0;
      puStack_140 = param_3;
      do {
        lVar3 = lVar11 + 1;
        uVar2 = *(undefined8 *)(afStack_338 + lVar11 * 3 + -2);
        fVar19 = afStack_338[lVar11 * 3];
        uStack_f1 = 1;
        fVar20 = (float)pdb_140de8220();
        fVar18 = 0.0;
        if (0.0 <= fVar20) {
          fVar18 = fVar20;
        }
        fVar20 = fVar5;
        if (fVar18 <= fVar5) {
          fVar20 = fVar18;
        }
        fVar20 = fStack_f8 - ((fVar5 - fVar20) * _DAT_142e36f50 + fVar20);
        fVar18 = fVar1;
        if (fVar1 <= fVar20) {
          fVar18 = fVar20;
        }
        uStack_f1 = 1;
        pdb_140df4540(&fStack_210,&uStack_120,
                      -(uint)NAN(fVar20) & (uint)fVar1 | ~-(uint)NAN(fVar20) & (uint)fVar18);
        fVar19 = fVar19 * _DAT_142e37ae4;
        fVar18 = fVar19;
        if (pbStack_100._0_4_ <= fVar19) {
          fVar18 = pbStack_100._0_4_;
        }
        fVar19 = (float)(~-(uint)NAN(pbStack_100._0_4_) & (uint)fVar18 |
                        -(uint)NAN(pbStack_100._0_4_) & (uint)fVar19);
        uStack_1f8._0_4_ = (float)uVar2 * fVar19 + (float)uStack_328;
        uStack_1f8._4_4_ = (float)((ulonglong)uVar2 >> 0x20) * fVar19 + uStack_328._4_4_;
        uStack_f1 = 1;
        pdb_140df4540(&fStack_220,&uStack_1f8);
        fVar23 = fStack_208;
        fVar22 = fStack_20c;
        fVar21 = fStack_210;
        fVar20 = fStack_218;
        fVar18 = fStack_21c;
        fVar19 = fStack_220;
        fVar24 = fStack_218 - fStack_208;
        fVar25 = fStack_21c - fStack_20c;
        fVar27 = fStack_220 - fStack_210;
        fVar26 = fVar5 / SQRT(fVar25 * fVar25 + fVar27 * fVar27 + fVar24 * fVar24);
        puStack_198 = (undefined8 *)CONCAT44(fVar26 * fVar25,fVar26 * fVar27);
        puStack_190 = (undefined1 *)CONCAT44(puStack_190._4_4_,fVar26 * fVar24);
        uStack_f1 = 1;
        pdb_140de8fd0(&uStack_1f8,&puStack_198);
        fVar26 = fVar22 - fVar18;
        fVar25 = fVar23 - fVar20;
        fVar24 = fVar21 - fVar19;
        fVar24 = SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar24 * fVar24);
        fVar36 = (fVar20 + fVar23) * _UNK_143510dd8;
        fVar41 = (_DAT_142e377f0 + fVar5) * _UNK_143510ddc;
        fVar42 = (float)uStack_1f0 + (float)uStack_1f0;
        fVar20 = (float)uStack_1f0 * fVar42;
        fVar27 = uStack_1f8._4_4_ + uStack_1f8._4_4_;
        fVar25 = fVar27 * (float)uStack_1f8;
        fVar39 = fVar42 * (float)uStack_1f8;
        fVar40 = fVar42 * uStack_1f8._4_4_;
        fVar32 = (float)uStack_1f8 * ((float)uStack_1f8 + (float)uStack_1f8);
        fVar26 = fVar27 * uStack_1f0._4_4_;
        fVar29 = ((float)uStack_1f8 + (float)uStack_1f8) * uStack_1f0._4_4_;
        fVar42 = uStack_1f0._4_4_ * fVar42;
        fVar43 = fVar39 - fVar26;
        fVar30 = fVar29 + fVar40;
        fVar23 = fVar5 - (fVar32 + uStack_1f8._4_4_ * fVar27);
        uStack_1f8 = (undefined8 *)
                     CONCAT44(fVar41 * (fVar25 + fVar42),
                              fVar41 * (fVar5 - (uStack_1f8._4_4_ * fVar27 + fVar20)));
        uStack_1f0 = CONCAT44(fVar41 * fVar43,fVar41 * fVar43);
        uStack_1e8 = CONCAT44((fVar5 - (fVar20 + fVar32)) * _UNK_143277784,
                              (fVar25 - fVar42) * _DAT_143277780);
        uStack_1e0 = CONCAT44(fVar30 * _UNK_14327778c,fVar30 * _UNK_143277788);
        uStack_1d8 = CONCAT44(fVar24 * (fVar40 - fVar29),fVar24 * (fVar26 + fVar39));
        uStack_1d0 = CONCAT44(fVar24 * fVar23,fVar24 * fVar23);
        uStack_1c8 = (undefined8 *)
                     CONCAT44((fVar18 + fVar22) * _UNK_143510dd4,(fVar19 + fVar21) * _DAT_143510dd0)
        ;
        uStack_1c0 = CONCAT44(fVar36,fVar36);
        uStack_f1 = 1;
        pdb_140e07fe0(&uStack_250,&uStack_1f8);
        uStack_f1 = 1;
        iVar7 = pdb_140315970(&param_6);
        uStack_f1 = 1;
        uVar8 = pdb_1409012c0(*(undefined4 *)(param_2 + 0x274));
        uStack_f1 = 1;
        pdb_140a77410(&uStack_1f8);
        iStack_164 = iVar7 + iVar9;
        puStack_198 = (undefined8 *)CONCAT71(uStack_24f,uStack_250);
        uStack_178 = uStack_230;
        uStack_170 = uStack_228;
        uStack_188 = uStack_240;
        uStack_184 = uStack_23c;
        uStack_180 = uStack_238;
        uStack_17c = uStack_234;
        puStack_190 = puStack_248;
        uStack_168 = 0;
        uStack_15c = 0;
        lStack_158 = lStack_1b8;
        uStack_150 = uStack_1b0;
        uStack_f1 = 1;
        uStack_160 = uVar8;
        pdb_1413f6d90(&uStack_2d8);
        lVar11 = lVar3;
        param_3 = puStack_140;
      } while (lVar3 != 2);
    }
  }
  if (lStack_108 != 0) {
    uStack_f1 = 1;
    puVar10 = (undefined8 *)pdb_1413e4400(uStack_258,&UNK_1433056c0);
    if (puVar10 != (undefined8 *)0x0) {
      uStack_f1 = 1;
      lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10);
      if (lVar11 != 0) {
        uStack_250 = 0;
        lVar3 = *(longlong *)(param_2 + 0x150);
        if (lVar3 == 0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b70);
        }
        LOCK();
        bVar17 = *(char *)(lVar3 + 0x18) == '\0';
        if (bVar17) {
          *(char *)(lVar3 + 0x18) = '\x01';
        }
        UNLOCK();
        if (!bVar17) {
          uStack_f1 = 1;
          pdb_142dbd1a0(lVar3 + 0x18,1,1000000000);
        }
        uStack_f1 = 1;
        pdb_140e9a150(lVar3 + 0x18);
        fVar19 = _DAT_142f6e3f0;
        fVar5 = _DAT_142e36f38;
        if ((*(longlong *)(lVar3 + 0x10) == 0) ||
           (piVar12 = (int *)(*(longlong *)(lVar3 + 8) + *(longlong *)(lVar3 + 0x10) * 4 + -4),
           piVar12 == (int *)0x0)) {
          lVar13 = *(longlong *)(lVar11 + 0x10);
          if (lVar13 == 0) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143305b88);
          }
          iStack_1a0 = (int)lVar13 + -1;
        }
        else {
          iStack_1a0 = *piVar12;
          lVar13 = *(longlong *)(lVar11 + 0x10);
        }
        uStack_1f8 = *(undefined8 **)(lVar11 + 8);
        uStack_1e8 = *(undefined8 *)(lVar11 + 0x18);
        uStack_1e0 = *(undefined8 *)(lVar11 + 0x20);
        uStack_1d0 = *(undefined8 *)(lVar11 + 0x28);
        uStack_1c8 = *(undefined8 **)(lVar11 + 0x30);
        uStack_1c0 = lVar11 + 0x78;
        lStack_1b8 = lVar11 + 0x58;
        uStack_1b0 = *(undefined8 *)(lVar11 + 0x38);
        uStack_1a8 = *(undefined8 *)(lVar11 + 0x40);
        puStack_190 = &uStack_250;
        lStack_138 = lStack_118;
        pbStack_100 = pbStack_110;
        pbVar14 = pbStack_110;
        uStack_1f0 = lVar13;
        uStack_1d8 = lVar3;
        puStack_198 = &uStack_1f8;
        for (lVar11 = lStack_108 * 0x18; lVar11 != 0; lVar11 = lVar11 + -0x18) {
          fVar1 = *(float *)(pbVar14 + 0xc);
          if (fVar19 <= *(float *)(pbVar14 + 0xc)) {
            fVar1 = fVar19;
          }
          pdb_142a44f10(fVar1 + fVar5,*(undefined4 *)pbVar14);
          pbVar14 = pbVar14 + 0x18;
        }
        if (lStack_138 != 0) {
          pub_1406abac0(pbStack_100,lStack_138 * 0x18,4);
        }
        pcVar15 = (char *)(uStack_1d8 + 0x18);
        uStack_f1 = 0;
        pdb_140e9a350();
        LOCK();
        cVar6 = *pcVar15;
        if (cVar6 == '\x01') {
          *pcVar15 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          uStack_f1 = 0;
          pdb_142dbcef0(pcVar15,0);
        }
        goto LAB_1424c7522;
      }
    }
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143510e70);
  }
  if (lStack_118 != 0) {
    pub_1406abac0(pbStack_110,lStack_118 * 0x18,4);
  }
LAB_1424c7522:
  lVar3 = lStack_2b8;
  lVar11 = lStack_2b8 + 0x18;
  pdb_140e9a350();
  LOCK();
  cVar6 = *(char *)(lVar3 + 0x18);
  bVar17 = cVar6 == '\x01';
  if (bVar17) {
    *(char *)(lVar3 + 0x18) = '\0';
    cVar6 = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    cVar6 = pdb_142dbcef0(lVar11,0);
  }
  return cVar6;
}

