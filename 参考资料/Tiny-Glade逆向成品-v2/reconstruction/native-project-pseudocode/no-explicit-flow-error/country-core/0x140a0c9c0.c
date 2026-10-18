// VA 0x140a0c9c0, PDB extent 4544 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::recompute_quads
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::recompute_quads
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 4544 */

void pdb_140a0c9c0(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [8];
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined4 uVar19;
  float fVar20;
  float in_XMM1_Da;
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
  longlong lStack_388;
  byte *pbStack_380;
  byte *pbStack_378;
  longlong lStack_370;
  byte *pbStack_368;
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  undefined8 uStack_340;
  ulonglong uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  undefined8 uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  longlong lStack_308;
  undefined8 uStack_300;
  ulonglong uStack_2f8;
  undefined8 uStack_2f0;
  longlong lStack_2a0;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
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
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  float fStack_1cc;
  undefined4 *puStack_1c8;
  float fStack_1c0;
  undefined8 uStack_1bc;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float fStack_194;
  uint uStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_110;
  longlong lStack_108;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar11 = *(uint *)(param_2 + 600);
  uVar17 = *(ulonglong *)(param_2 + 0x98);
  if (uVar11 < 2) {
    uVar15 = uVar17;
    if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143036438);
    }
  }
  else {
    if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143036420);
    }
    uVar15 = uVar17 * 3;
  }
  uVar15 = uVar15 - 1;
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143036450,0x20,&UNK_143036470);
  }
  param_1[2] = 0;
  if (*param_1 < uVar15) {
    pdb_142d7f1b0(param_1,0,uVar15,4,0x7c);
    uVar17 = *(ulonglong *)(param_2 + 0x98);
    uVar11 = *(uint *)(param_2 + 600);
  }
  uVar15 = *(ulonglong *)(param_2 + 0xb0);
  uVar14 = uVar17;
  if (uVar15 < uVar17) {
    uVar14 = uVar15;
  }
  uVar5 = *(ulonglong *)(param_2 + 0xe8);
  auStack_148._0_8_ = uVar5;
  uVar16 = uVar14;
  if (uVar5 < uVar14) {
    uVar16 = uVar5;
  }
  auStack_138._0_8_ = *(undefined8 *)(param_2 + 0xe0);
  uVar5 = *(ulonglong *)(param_2 + 0x100);
  uStack_2f8 = uVar16;
  if (uVar5 < uVar16) {
    uStack_2f8 = uVar5;
  }
  if (uVar11 == 2) {
    pbStack_380 = (byte *)0x8;
    lStack_370 = 0;
    lStack_350 = *(longlong *)(param_2 + 0xa8);
    lStack_310 = *(longlong *)(param_2 + 0xf8);
    lStack_360 = *(longlong *)(param_2 + 0x90);
  }
  else {
    auStack_168._0_8_ = *(longlong *)(param_2 + 0x90);
    uStack_158 = *(longlong *)(param_2 + 0xf8);
    uStack_110 = uStack_2f8;
    lStack_108 = *(longlong *)(param_2 + 0xa8);
    pdb_14007ee60();
    pbStack_380 = pub_1406abab0(0x20,8);
    uStack_128 = pbStack_380;
    if (pbStack_380 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    if (*(longlong *)(param_2 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143036488);
    }
    if (*(longlong *)(param_2 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430364a0);
    }
    if (*(longlong *)(param_2 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430364b8);
    }
    if (*(longlong *)(param_2 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430364d0);
    }
    uVar6 = *(undefined8 *)(param_2 + 0xa8);
    uVar7 = *(undefined8 *)(param_2 + 0xe0);
    uVar8 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)pbStack_380 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(pbStack_380 + 8) = uVar6;
    *(undefined8 *)(pbStack_380 + 0x10) = uVar7;
    *(undefined8 *)(pbStack_380 + 0x18) = uVar8;
    lStack_370 = 1;
    lStack_350 = lStack_108;
    lStack_310 = uStack_158;
    uStack_2f8 = uStack_110;
    lStack_360 = auStack_168._0_8_;
  }
  lStack_358 = lStack_360 + uVar17 * 0xc;
  lStack_348 = lStack_350 + uVar15 * 4;
  uStack_340 = 0;
  lStack_328 = auStack_138._0_8_ + auStack_148._0_8_ * 4;
  lStack_330 = auStack_138._0_8_;
  lStack_308 = lStack_310 + uVar5 * 4;
  uStack_320 = 0;
  pbStack_368 = pbStack_380 + (uint)((int)lStack_370 << 5);
  uStack_300 = 0;
  uStack_2f0 = 0;
  lStack_2a0 = 0;
  lStack_388 = param_2;
  pbStack_378 = pbStack_380;
  uStack_338 = uVar14;
  uStack_318 = uVar16;
LAB_140a0cd30:
  do {
    fVar32 = in_XMM1_Da;
    pdb_1419a57f0(&fStack_1f0,&lStack_388);
    fVar20 = fStack_1a4;
    puVar9 = puStack_1c8;
    fVar29 = fStack_1cc;
    lVar12 = lStack_2a0;
    puVar3 = (undefined4 *)CONCAT44(fStack_1ec,fStack_1f0);
    if (puVar3 == (undefined4 *)0x0) {
      if ((pbStack_380 != (byte *)0x0) && (lStack_370 != 0)) {
        pub_1406abac0(pbStack_380,lStack_370 << 5,8);
      }
      return;
    }
    auStack_168 = ZEXT416(uStack_1d8);
    fVar28 = (float)uStack_1bc;
    uVar17 = (ulonglong)uStack_1bc >> 0x20;
    uStack_158 = CONCAT44(uStack_1d0,uStack_1d4);
    uStack_150 = 0;
    auStack_208 = ZEXT416(uStack_1d0);
    uStack_218 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_210 = 0;
    uStack_128 = (byte *)CONCAT44(uStack_1a8,uStack_1ac);
    uStack_120 = 0;
    lStack_2a0 = lStack_2a0 + 1;
    fVar23 = fStack_1a4 * _UNK_142e378ec;
    fVar35 = fStack_1e8 + fStack_1cc * _DAT_142e378e0;
    in_XMM1_Da = fStack_1e4 + fStack_1cc * _UNK_142e378e4;
    fVar36 = fStack_1e0 + fStack_1cc * _UNK_142e378e8;
    fVar37 = fStack_1c0 + fVar23;
    fStack_1f0 = fVar35;
    fStack_1ec = fVar36;
    pdb_140df4540(&fStack_194,&fStack_1f0);
    fVar28 = fVar28 + fVar20;
    fVar23 = (float)uVar17 + fVar23;
    fStack_1f0 = fVar37;
    fStack_1ec = fVar23;
    pdb_140df4540(&fStack_1a0,&fStack_1f0);
    auStack_138 = ZEXT416(uStack_190);
    auStack_148 = ZEXT416(uStack_19c);
    fStack_1f0 = fVar35;
    fStack_1ec = in_XMM1_Da;
    fStack_1e8 = fVar36;
    uVar19 = pdb_140dea520(&fStack_1f0,param_2);
    lStack_108 = CONCAT44(lStack_108._4_4_,uVar19);
    fStack_1f0 = fVar37;
    fStack_1ec = fVar28;
    fStack_1e8 = fVar23;
    fStack_fc = fVar32;
    uVar19 = pdb_140dea520(&fStack_1f0,param_2);
    fVar22 = fStack_18c;
    fVar21 = fStack_194;
    fVar38 = fStack_1a0;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar19);
    bVar18 = (-(auStack_138._0_4_ < in_XMM1_Da) | -((float)auStack_148._0_4_ < fVar28)) & 1;
    fStack_100 = fVar32;
    if (*(uint *)(param_2 + 600) < 2) {
      uVar19 = *puVar3;
      uVar4 = *puVar9;
      uVar17 = param_1[2];
      if (uVar17 == *param_1) {
        pdb_142d91da0(param_1);
      }
      uVar15 = param_1[1];
      lVar12 = uVar17 * 0x7c;
      *(undefined4 *)(uVar15 + lVar12) = uVar19;
      *(undefined4 *)(uVar15 + 4 + lVar12) = uVar4;
      *(undefined4 *)(uVar15 + 8 + lVar12) = (undefined4)lStack_108;
      *(float *)(uVar15 + 0xc + lVar12) = fStack_fc;
      *(float *)(uVar15 + 0x10 + lVar12) = (float)uStack_110;
      *(float *)(uVar15 + 0x14 + lVar12) = fStack_100;
      *(undefined4 *)(uVar15 + 0x18 + lVar12) = (undefined4)lStack_108;
      *(undefined4 *)(uVar15 + 0x1c + lVar12) = auStack_138._0_4_;
      *(float *)(uVar15 + 0x20 + lVar12) = (float)uStack_110;
      *(undefined4 *)(uVar15 + 0x24 + lVar12) = auStack_148._0_4_;
      pfVar2 = (float *)(uVar15 + 0x28 + lVar12);
      *pfVar2 = fVar35;
      pfVar2[1] = in_XMM1_Da;
      pfVar2[2] = fVar36;
      pfVar2[3] = fVar37;
      *(ulonglong *)(uVar15 + 0x38 + lVar12) = CONCAT44(fVar23,fVar28);
      *(ulonglong *)(uVar15 + 0x40 + lVar12) = CONCAT44(uStack_190,fStack_194);
      *(float *)(uVar15 + 0x48 + lVar12) = fStack_18c;
      *(ulonglong *)(uVar15 + 0x4c + lVar12) = CONCAT44(uStack_19c,fStack_1a0);
      *(uint *)(uVar15 + 0x54 + lVar12) = uStack_198;
      *(undefined4 *)(uVar15 + 0x58 + lVar12) = auStack_168._0_4_;
      puVar3 = (undefined4 *)(uVar15 + 0x5c + lVar12);
      *puVar3 = (float)uStack_158;
      puVar3[1] = uStack_158._4_4_;
      puVar3[2] = (int)uStack_218;
      puVar3[3] = (int)((ulonglong)uStack_218 >> 0x20);
      *(float *)(uVar15 + 0x6c + lVar12) = uStack_128._4_4_;
      *(float *)(uVar15 + 0x70 + lVar12) = fVar29;
      *(float *)(uVar15 + 0x74 + lVar12) = fVar20;
      *(byte *)(uVar15 + 0x78 + lVar12) = bVar18;
      fVar29 = (float)auStack_138._0_4_;
      goto LAB_140a0d027;
    }
    if ((*(char *)(param_2 + 0x2a0) == '\x01') && ((0.0 < fVar29 || (0.0 < fVar20))))
    goto LAB_140a0d5bc;
    uStack_f8 = *puVar3;
    uStack_f4 = *puVar9;
    fVar31 = (float)auStack_168._0_4_ * _DAT_143035ee0 * _DAT_143035ef0;
    fVar32 = (float)uStack_158 * _UNK_143035ee4 * _UNK_143035ef4;
    fVar33 = (float)auStack_208._0_4_ * _UNK_143035ee8 * _UNK_143035ef8;
    fVar34 = (float)uStack_150 * _UNK_143035eec * _UNK_143035efc;
    fStack_268 = (float)uStack_218;
    fStack_264 = (float)uStack_128;
    fStack_260 = uStack_128._4_4_;
    fStack_25c = (float)uStack_218;
    fVar24 = (float)uStack_218 * _DAT_143035f00 * _DAT_142e36f40;
    fVar25 = (float)uStack_128 * _UNK_143035f04 * _UNK_142e36f44;
    fVar26 = uStack_128._4_4_ * _UNK_143035f08 * _UNK_142e36f48;
    fVar27 = (float)uStack_218 * _UNK_143035f0c * _UNK_142e36f4c;
    _auStack_228 = ZEXT416(uStack_198);
    uVar17 = param_1[2];
    auVar10 = (undefined1  [8])(ulonglong)uStack_198;
    if (uVar17 == *param_1) {
      pdb_142d91da0(param_1);
      auVar10 = auStack_228;
    }
    auStack_228 = auVar10;
    auStack_298 = ZEXT416((uint)fVar29);
    fStack_26c = fVar21;
    fStack_248 = fVar31 + fVar35;
    fStack_244 = fVar32 + in_XMM1_Da;
    fStack_240 = fVar33 + fVar36;
    fStack_23c = fVar31 + fVar21;
    auStack_288._4_4_ = fVar22;
    auStack_288._0_4_ = auStack_138._0_4_;
    auStack_288._8_4_ = auStack_138._4_4_;
    auStack_288._12_4_ = 0;
    fStack_238 = fVar32 + (float)auStack_138._0_4_;
    fVar22 = fVar33 + fVar22;
    fStack_230 = fVar33 + (float)auStack_138._4_4_;
    fStack_22c = fVar34 + 0.0;
    fStack_258 = fVar24 + fVar37;
    fStack_254 = fVar25 + fVar28;
    fStack_250 = fVar26 + fVar23;
    fVar34 = fVar27 + fVar38;
    uVar4 = auStack_148._0_4_;
    uVar19 = auStack_228._0_4_;
    fVar21 = fVar26 + (float)auStack_228._0_4_;
    fStack_21c = fVar27 + (float)auStack_228._4_4_;
    uVar15 = param_1[1];
    lVar13 = uVar17 * 0x7c;
    *(undefined4 *)(uVar15 + lVar13) = uStack_f8;
    *(undefined4 *)(uVar15 + 4 + lVar13) = uStack_f4;
    *(undefined4 *)(uVar15 + 8 + lVar13) = (undefined4)lStack_108;
    *(float *)(uVar15 + 0xc + lVar13) = fStack_fc;
    *(float *)(uVar15 + 0x10 + lVar13) = (float)uStack_110;
    *(float *)(uVar15 + 0x14 + lVar13) = fStack_100;
    *(undefined4 *)(uVar15 + 0x18 + lVar13) = (undefined4)lStack_108;
    *(undefined4 *)(uVar15 + 0x1c + lVar13) = auStack_138._0_4_;
    *(float *)(uVar15 + 0x20 + lVar13) = (float)uStack_110;
    *(undefined4 *)(uVar15 + 0x24 + lVar13) = auStack_148._0_4_;
    pfVar2 = (float *)(uVar15 + 0x28 + lVar13);
    *pfVar2 = fStack_248;
    pfVar2[1] = fStack_244;
    pfVar2[2] = fStack_240;
    pfVar2[3] = fStack_258;
    pfVar2 = (float *)(uVar15 + 0x38 + lVar13);
    *pfVar2 = fStack_254;
    pfVar2[1] = fStack_250;
    pfVar2[2] = fStack_23c;
    pfVar2[3] = fStack_238;
    auStack_228._4_4_ = fVar21;
    auStack_228._0_4_ = fVar25 + (float)auStack_148._0_4_;
    fStack_220 = fVar26 + (float)auStack_148._4_4_;
    pfVar2 = (float *)(uVar15 + 0x48 + lVar13);
    *pfVar2 = fVar22;
    pfVar2[1] = fVar34;
    pfVar2[2] = fVar25 + (float)auStack_148._0_4_;
    pfVar2[3] = fVar21;
    *(undefined4 *)(uVar15 + 0x58 + lVar13) = auStack_168._0_4_;
    *(float *)(uVar15 + 0x5c + lVar13) = (float)uStack_158;
    *(undefined4 *)(uVar15 + 0x60 + lVar13) = auStack_208._0_4_;
    *(float *)(uVar15 + 100 + lVar13) = (float)uStack_218;
    puVar3 = (undefined4 *)(uVar15 + 0x68 + lVar13);
    *puVar3 = (float)uStack_128;
    puVar3[1] = uStack_128._4_4_;
    *(float *)(uVar15 + 0x70 + lVar13) = fVar29;
    *(float *)(uVar15 + 0x74 + lVar13) = fVar20;
    *(byte *)(uVar15 + 0x78 + lVar13) = bVar18;
    uVar15 = uVar17 + 1;
    param_1[2] = uVar15;
    fStack_278 = fVar35;
    fStack_274 = in_XMM1_Da;
    fStack_270 = fVar36;
    fStack_24c = fVar34;
    fStack_234 = fVar22;
    if (uVar15 == *param_1) {
      pdb_142d91da0(param_1);
    }
    fVar21 = (float)auStack_288._0_4_ - fVar32;
    fVar35 = (float)auStack_288._4_4_ - fVar33;
    fVar27 = (float)uVar4 - fVar25;
    fVar30 = (float)uVar19 - fVar26;
    fVar36 = fStack_278 - fVar31;
    fVar32 = fStack_274 - fVar32;
    fVar33 = fStack_270 - fVar33;
    in_XMM1_Da = fStack_26c - fVar31;
    fVar38 = fVar38 - fVar24;
    uVar14 = param_1[1];
    lVar13 = uVar15 * 0x7c;
    *(undefined4 *)(uVar14 + lVar13) = uStack_f8;
    *(undefined4 *)(uVar14 + 4 + lVar13) = uStack_f4;
    *(undefined4 *)(uVar14 + 8 + lVar13) = (undefined4)lStack_108;
    *(float *)(uVar14 + 0xc + lVar13) = fStack_fc;
    *(float *)(uVar14 + 0x10 + lVar13) = (float)uStack_110;
    *(float *)(uVar14 + 0x14 + lVar13) = fStack_100;
    *(undefined4 *)(uVar14 + 0x18 + lVar13) = (undefined4)lStack_108;
    *(undefined4 *)(uVar14 + 0x1c + lVar13) = auStack_138._0_4_;
    *(float *)(uVar14 + 0x20 + lVar13) = (float)uStack_110;
    *(undefined4 *)(uVar14 + 0x24 + lVar13) = auStack_148._0_4_;
    pfVar2 = (float *)(uVar14 + 0x28 + lVar13);
    *pfVar2 = in_XMM1_Da;
    pfVar2[1] = fVar21;
    pfVar2[2] = fVar35;
    pfVar2[3] = fVar38;
    *(ulonglong *)(uVar14 + 0x38 + lVar13) = CONCAT44(fVar30,fVar27);
    pfVar2 = (float *)(uVar14 + 0x40 + lVar13);
    *pfVar2 = fVar36;
    pfVar2[1] = fVar32;
    pfVar2[2] = fVar33;
    pfVar2[3] = fVar37 - fVar24;
    *(ulonglong *)(uVar14 + 0x50 + lVar13) = CONCAT44(fVar23 - fVar26,fVar28 - fVar25);
    *(undefined4 *)(uVar14 + 0x58 + lVar13) = auStack_168._0_4_;
    *(float *)(uVar14 + 0x5c + lVar13) = (float)uStack_158;
    *(undefined4 *)(uVar14 + 0x60 + lVar13) = auStack_208._0_4_;
    *(float *)(uVar14 + 100 + lVar13) = (float)uStack_218;
    puVar3 = (undefined4 *)(uVar14 + 0x68 + lVar13);
    *puVar3 = (float)uStack_128;
    puVar3[1] = uStack_128._4_4_;
    *(float *)(uVar14 + 0x70 + lVar13) = fVar29;
    *(float *)(uVar14 + 0x74 + lVar13) = fVar20;
    *(byte *)(uVar14 + 0x78 + lVar13) = bVar18;
    uVar15 = uVar17 + 2;
    param_1[2] = uVar15;
    fStack_1f0 = 0.0;
    fStack_1ec = 1.0;
    fStack_1e8 = 0.0;
    fStack_1e4 = 0.0;
    fStack_1e0 = 1.0;
    uStack_1dc = 0;
    uStack_178 = 0x3f800000;
    uStack_188 = 0x3f80000000000000;
    uStack_180 = 0;
    uStack_17c = 0;
    if (uVar15 == *param_1) {
      pdb_142d91da0(param_1);
    }
    uVar14 = param_1[1];
    lVar13 = uVar15 * 0x7c;
    *(undefined4 *)(uVar14 + lVar13) = uStack_f8;
    *(undefined4 *)(uVar14 + 4 + lVar13) = uStack_f4;
    *(undefined4 *)(uVar14 + 8 + lVar13) = (undefined4)lStack_108;
    *(undefined4 *)(uVar14 + 0xc + lVar13) = auStack_138._0_4_;
    *(float *)(uVar14 + 0x10 + lVar13) = (float)uStack_110;
    *(undefined4 *)(uVar14 + 0x14 + lVar13) = auStack_148._0_4_;
    *(undefined4 *)(uVar14 + 0x18 + lVar13) = (undefined4)lStack_108;
    *(undefined4 *)(uVar14 + 0x1c + lVar13) = auStack_138._0_4_;
    *(float *)(uVar14 + 0x20 + lVar13) = (float)uStack_110;
    *(undefined4 *)(uVar14 + 0x24 + lVar13) = auStack_148._0_4_;
    pfVar2 = (float *)(uVar14 + 0x28 + lVar13);
    *pfVar2 = fStack_23c;
    pfVar2[1] = fStack_238;
    pfVar2[2] = fVar22;
    pfVar2[3] = fVar34;
    *(undefined1 (*) [8])(uVar14 + 0x38 + lVar13) = auStack_228;
    *(float *)(uVar14 + 0x40 + lVar13) = in_XMM1_Da;
    *(ulonglong *)(uVar14 + 0x44 + lVar13) = CONCAT44(fVar35,fVar21);
    *(float *)(uVar14 + 0x4c + lVar13) = fVar38;
    *(float *)(uVar14 + 0x50 + lVar13) = fVar27;
    *(float *)(uVar14 + 0x54 + lVar13) = fVar30;
    puVar3 = (undefined4 *)(uVar14 + 0x58 + lVar13);
    *puVar3 = (undefined4)uStack_188;
    puVar3[1] = uStack_188._4_4_;
    puVar3[2] = uStack_180;
    puVar3[3] = uStack_17c;
    *(undefined8 *)(uVar14 + 0x68 + lVar13) = uStack_178;
    *(undefined8 *)(uVar14 + 0x70 + lVar13) = 0;
    *(byte *)(uVar14 + 0x78 + lVar13) = bVar18;
    uVar15 = uVar17 + 3;
    param_1[2] = uVar15;
  } while (*(int *)(param_2 + 600) != 2);
  if (lVar12 == 0) {
    if (uVar15 == *param_1) {
      pdb_142d91da0(param_1);
    }
    uVar14 = param_1[1];
    lVar12 = uVar15 * 0x7c;
    *(undefined4 *)(uVar14 + lVar12) = uStack_f8;
    *(undefined4 *)(uVar14 + 4 + lVar12) = uStack_f4;
    *(undefined4 *)(uVar14 + 8 + lVar12) = (undefined4)lStack_108;
    *(float *)(uVar14 + 0xc + lVar12) = fStack_fc;
    *(undefined4 *)(uVar14 + 0x10 + lVar12) = (undefined4)lStack_108;
    *(undefined4 *)(uVar14 + 0x14 + lVar12) = auStack_138._0_4_;
    *(undefined4 *)(uVar14 + 0x18 + lVar12) = (undefined4)lStack_108;
    *(float *)(uVar14 + 0x1c + lVar12) = fStack_fc;
    *(undefined4 *)(uVar14 + 0x20 + lVar12) = (undefined4)lStack_108;
    *(undefined4 *)(uVar14 + 0x24 + lVar12) = auStack_138._0_4_;
    puVar1 = (undefined8 *)(uVar14 + 0x28 + lVar12);
    *puVar1 = CONCAT44(fStack_244,fStack_248);
    puVar1[1] = CONCAT44(fStack_23c,fStack_240);
    *(ulonglong *)(uVar14 + 0x38 + lVar12) = CONCAT44(fStack_234,fStack_238);
    pfVar2 = (float *)(uVar14 + 0x40 + lVar12);
    *pfVar2 = fVar36;
    pfVar2[1] = fVar32;
    pfVar2[2] = fVar33;
    pfVar2[3] = in_XMM1_Da;
    *(float *)(uVar14 + 0x50 + lVar12) = fVar21;
    *(float *)(uVar14 + 0x54 + lVar12) = fVar35;
    *(undefined4 *)(uVar14 + 0x58 + lVar12) = auStack_168._0_4_;
    *(float *)(uVar14 + 0x5c + lVar12) = (float)uStack_158;
    *(undefined4 *)(uVar14 + 0x60 + lVar12) = auStack_208._0_4_;
    *(undefined4 *)(uVar14 + 100 + lVar12) = auStack_168._0_4_;
    *(float *)(uVar14 + 0x68 + lVar12) = (float)uStack_158;
    *(undefined4 *)(uVar14 + 0x6c + lVar12) = auStack_208._0_4_;
    uVar15 = uVar17 + 4;
    *(undefined1 *)(uVar14 + 0x78 + lVar12) = 0;
    *(undefined8 *)(uVar14 + 0x70 + lVar12) = 0;
    param_1[2] = uVar15;
    in_XMM1_Da = (float)uStack_158;
    if (*(longlong *)(param_2 + 0x98) != 2) goto LAB_140a0cd30;
  }
  else if (lVar12 != *(longlong *)(param_2 + 0x98) + -2) goto LAB_140a0cd30;
  if (uVar15 == *param_1) {
    pdb_142d91da0(param_1);
  }
  uVar17 = param_1[1];
  lVar12 = uVar15 * 0x7c;
  *(undefined4 *)(uVar17 + lVar12) = uStack_f8;
  *(undefined4 *)(uVar17 + 4 + lVar12) = uStack_f4;
  *(float *)(uVar17 + 8 + lVar12) = (float)uStack_110;
  *(float *)(uVar17 + 0xc + lVar12) = fStack_100;
  *(float *)(uVar17 + 0x10 + lVar12) = (float)uStack_110;
  *(undefined4 *)(uVar17 + 0x14 + lVar12) = auStack_148._0_4_;
  *(float *)(uVar17 + 0x18 + lVar12) = (float)uStack_110;
  *(float *)(uVar17 + 0x1c + lVar12) = fStack_100;
  *(float *)(uVar17 + 0x20 + lVar12) = (float)uStack_110;
  *(undefined4 *)(uVar17 + 0x24 + lVar12) = auStack_148._0_4_;
  pfVar2 = (float *)(uVar17 + 0x28 + lVar12);
  *pfVar2 = fVar37 - fVar24;
  pfVar2[1] = fVar28 - fVar25;
  pfVar2[2] = fVar23 - fVar26;
  pfVar2[3] = fVar38;
  *(float *)(uVar17 + 0x38 + lVar12) = fVar27;
  *(float *)(uVar17 + 0x3c + lVar12) = fVar30;
  puVar1 = (undefined8 *)(uVar17 + 0x40 + lVar12);
  *puVar1 = CONCAT44(fStack_254,fStack_258);
  puVar1[1] = CONCAT44(fStack_24c,fStack_250);
  *(undefined1 (*) [8])(uVar17 + 0x50 + lVar12) = auStack_228;
  puVar1 = (undefined8 *)(uVar17 + 0x58 + lVar12);
  *puVar1 = CONCAT44(fStack_264,fStack_268);
  puVar1[1] = CONCAT44(fStack_25c,fStack_260);
  *(byte **)(uVar17 + 0x68 + lVar12) = uStack_128;
  *(undefined8 *)(uVar17 + 0x70 + lVar12) = 0;
  *(undefined1 *)(uVar17 + 0x78 + lVar12) = 0;
  param_1[2] = uVar15 + 1;
  in_XMM1_Da = (float)uStack_110;
  goto LAB_140a0cd30;
LAB_140a0d5bc:
  if (((fVar29 != 0.0) || (NAN(fVar29))) && ((fVar20 != 0.0 || (NAN(fVar20))))) {
    uVar19 = *puVar3;
    uVar4 = *puVar9;
    fStack_1f0 = 0.0;
    fStack_1ec = 1.0;
    fStack_1e8 = 0.0;
    fStack_1e4 = 0.0;
    fStack_1e0 = 1.0;
    uStack_1dc = 0;
    fVar20 = (float)auStack_168._0_4_ * _DAT_143035f00 * _DAT_142e36f40;
    fVar32 = (float)uStack_158 * _UNK_143035f04 * _UNK_142e36f44;
    fVar38 = (float)auStack_208._0_4_ * _UNK_143035f08 * _UNK_142e36f48;
    fVar21 = (float)uStack_218 * _UNK_143035f0c * _UNK_142e36f4c;
    fVar22 = (float)uStack_128 * _DAT_14302c610 * _DAT_143035f10;
    fVar33 = uStack_128._4_4_ * _UNK_14302c614 * _UNK_143035f14;
    fVar24 = fVar20 * _UNK_143035f18;
    fVar25 = fVar32 * _UNK_143035f1c;
    uStack_178 = 0x3f800000;
    uStack_188 = 0x3f80000000000000;
    uStack_180 = 0;
    uStack_17c = 0;
    uVar17 = param_1[2];
    if (uVar17 == *param_1) {
      pdb_142d91da0(param_1);
    }
    fVar29 = fVar28 + fVar22;
    uVar15 = param_1[1];
    lVar12 = uVar17 * 0x7c;
    *(undefined4 *)(uVar15 + lVar12) = uVar19;
    *(undefined4 *)(uVar15 + 4 + lVar12) = uVar4;
    *(undefined4 *)(uVar15 + 8 + lVar12) = (undefined4)lStack_108;
    *(undefined4 *)(uVar15 + 0xc + lVar12) = auStack_138._0_4_;
    *(float *)(uVar15 + 0x10 + lVar12) = (float)uStack_110;
    *(undefined4 *)(uVar15 + 0x14 + lVar12) = auStack_148._0_4_;
    *(undefined4 *)(uVar15 + 0x18 + lVar12) = (undefined4)lStack_108;
    *(undefined4 *)(uVar15 + 0x1c + lVar12) = auStack_138._0_4_;
    *(float *)(uVar15 + 0x20 + lVar12) = (float)uStack_110;
    *(undefined4 *)(uVar15 + 0x24 + lVar12) = auStack_148._0_4_;
    pfVar2 = (float *)(uVar15 + 0x28 + lVar12);
    *pfVar2 = fVar20 + fVar35;
    pfVar2[1] = fVar32 + in_XMM1_Da;
    pfVar2[2] = fVar38 + fVar36;
    pfVar2[3] = fVar21 + fVar37;
    pfVar2 = (float *)(uVar15 + 0x38 + lVar12);
    *pfVar2 = fVar29;
    pfVar2[1] = fVar23 + fVar33;
    pfVar2[2] = fVar35 - fVar24;
    pfVar2[3] = in_XMM1_Da - fVar25;
    pfVar2 = (float *)(uVar15 + 0x48 + lVar12);
    *pfVar2 = fVar36 - fVar38;
    pfVar2[1] = fVar37 - fVar21;
    pfVar2[2] = fVar28 - fVar22;
    pfVar2[3] = fVar23 - fVar33;
    puVar1 = (undefined8 *)(uVar15 + 0x58 + lVar12);
    *puVar1 = uStack_188;
    puVar1[1] = CONCAT44(uStack_17c,uStack_180);
    *(undefined8 *)(uVar15 + 0x68 + lVar12) = uStack_178;
    *(undefined8 *)(uVar15 + 0x70 + lVar12) = 0;
    *(undefined1 *)(uVar15 + 0x78 + lVar12) = 0;
LAB_140a0d027:
    param_1[2] = uVar17 + 1;
    in_XMM1_Da = fVar29;
  }
  goto LAB_140a0cd30;
}

