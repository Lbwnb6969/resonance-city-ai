// VA 0x140085cd0, PDB extent 5402 bytes
// tiny_glade::rollercoaster::RollercoasterState::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::rollercoaster::RollercoasterState::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
   Extent: 5402 */

void pdb_140085cd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  unkuint9 Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uStack_388;
  undefined4 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulonglong uStack_350;
  undefined4 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulonglong uStack_318;
  undefined4 *puStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 uStack_2d8;
  ulonglong *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 *puStack_2a8;
  undefined8 uStack_2a0;
  ulonglong *puStack_298;
  undefined4 *puStack_290;
  undefined8 uStack_288;
  ulonglong *puStack_280;
  undefined4 *puStack_278;
  undefined8 uStack_270;
  ulonglong *puStack_268;
  ulonglong uStack_260;
  undefined4 *puStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 *puStack_1e8;
  ulonglong uStack_1e0;
  undefined4 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  ulonglong *puStack_198;
  undefined4 *puStack_188;
  undefined8 uStack_180;
  ulonglong *puStack_178;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  ulonglong *puStack_158;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  ulonglong uStack_120;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined4 uStack_dc;
  char acStack_d7 [151];
  
  acStack_d7[7] = -2;
  acStack_d7[8] = -1;
  acStack_d7[9] = -1;
  acStack_d7[10] = -1;
  acStack_d7[0xb] = -1;
  acStack_d7[0xc] = -1;
  acStack_d7[0xd] = -1;
  acStack_d7[0xe] = -1;
  lVar5 = param_3[2];
  puStack_130 = param_3;
  puStack_128 = param_2;
  uStack_120 = param_4;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_142e37d00);
  }
  lVar15 = param_3[1];
  fVar1 = *(float *)(lVar15 + 0x14);
  fVar2 = *(float *)(lVar15 + 0x18);
  fVar3 = *(float *)(lVar15 + 0x10);
  fVar4 = *(float *)((longlong)param_2 + 0x1c);
  fVar18 = (float)pub_142e329c0(_DAT_142e37834 * fVar4);
  uVar17 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar16 = (longlong)(fVar18 - _DAT_142e36f2c) & (longlong)fVar18 >> 0x3f | (longlong)fVar18;
  if (fVar18 < 0.0) {
    uVar16 = uVar17;
  }
  uVar14 = 0xffffffffffffffff;
  if (fVar18 <= _DAT_142e36f30) {
    uVar14 = uVar16;
  }
  uVar16 = 2;
  if (2 < uVar14) {
    uVar16 = uVar14;
  }
  fVar18 = _DAT_142e36f3c;
  puStack_1e8 = param_1;
  do {
    fVar23 = ((float)uVar17 / (float)(uVar16 - 1)) * fVar4;
    pdb_140dece30(&uStack_388,param_2,fVar23);
    fVar13 = _DAT_142e3783c;
    uVar12 = _DAT_142e37838;
    uVar11 = _DAT_142e377e0;
    fVar10 = _DAT_142e36f28;
    uVar17 = uVar17 + 1;
    fVar19 = uStack_388._4_4_ - fVar1;
    fVar21 = (float)uStack_388 - fVar3;
    fVar22 = puStack_380._0_4_ - fVar2;
    fVar21 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21);
    fVar19 = fVar21;
    if (fVar18 <= fVar21) {
      fVar19 = fVar18;
    }
    auVar20._0_4_ = ~-(uint)(fVar21 < fVar18) & uVar24;
    auVar20._4_4_ = 0;
    auVar20._8_4_ = uVar25;
    auVar20._12_4_ = uVar26;
    auVar20 = auVar20 | ZEXT416((uint)fVar23 & -(uint)(fVar21 < fVar18));
    uVar24 = auVar20._0_4_;
    uVar25 = auVar20._8_4_;
    uVar26 = auVar20._12_4_;
    param_2 = puStack_128;
    fVar18 = fVar19;
  } while (uVar17 != uVar16);
  Var6 = (unkuint9)uStack_120;
  lStack_138 = lVar5 * 0x1c0 + lVar15;
  uVar16 = 0;
  if (lVar15 != lStack_138) {
    do {
      uVar25 = pub_142e32ad0(fVar10 / ((float)((uint)((float)uVar16 - (float)(unkint9)Var6) & uVar11
                                              ) + fVar10),uVar12);
      uStack_dc = uVar25;
      pdb_1400871f0(&uStack_388,param_5,&UNK_142e37d18,0x1b,uVar25,8,0);
      if ((float)uStack_388 != 2.8026e-45) {
        pdb_140a8a6f0(&uStack_388);
      }
      uStack_1f8 = uStack_358;
      uStack_208 = (undefined4)uStack_368;
      uStack_204 = uStack_368._4_4_;
      uStack_200 = (undefined4)uStack_360;
      uStack_1fc = uStack_360._4_4_;
      uStack_218 = (undefined4)uStack_378;
      uStack_214 = uStack_378._4_4_;
      uStack_210 = (undefined4)uStack_370;
      uStack_20c = uStack_370._4_4_;
      uStack_228 = uStack_388;
      uStack_220 = puStack_380;
      if (uVar16 == uStack_120) {
        uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
        uStack_388 = param_5;
        puStack_380 = &uStack_dc;
        uStack_378 = 0xa00000000;
        uStack_370 = &uStack_1e0;
        acStack_d7[4] = 1;
        pdb_140177e60(&puStack_118,&uStack_388);
        if ((char)uStack_1e0 == '\0') {
          puStack_158 = uStack_108;
          puStack_168 = puStack_118;
          uStack_160 = uStack_110;
        }
        else {
          puStack_168 = (undefined4 *)0x8000000000000000;
          acStack_d7[4] = 1;
          pdb_1404db8c0(&puStack_118);
        }
        uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
        uStack_388 = param_5;
        puStack_380 = &uStack_dc;
        uStack_378 = 0xa00000000;
        uStack_370 = &uStack_1e0;
        acStack_d7[3] = 1;
        pdb_14017b050(&puStack_118,&uStack_388);
        if ((char)uStack_1e0 == '\0') {
          puStack_178 = uStack_108;
          puStack_188 = puStack_118;
          uStack_180 = uStack_110;
        }
        else {
          puStack_188 = (undefined4 *)0x8000000000000000;
          acStack_d7[3] = 1;
          pdb_1404db8c0(&puStack_118);
        }
        acStack_d7[6] = 1;
        pdb_1400871f0(&uStack_388,param_5,&UNK_142e37e18,0x28,uStack_dc,&UNK_142e37db8,4);
        if (uStack_388 == 2) {
          uStack_260 = 2;
LAB_140086270:
          uStack_108._0_4_ = SUB84(uStack_370,0);
          uStack_108._4_4_ = (undefined4)((ulonglong)uStack_370 >> 0x20);
          uStack_100._0_4_ = (undefined4)uStack_368;
          uStack_100._4_4_ = (undefined4)((ulonglong)uStack_368 >> 0x20);
          uStack_f8._0_4_ = (undefined4)uStack_360;
          uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_360 >> 0x20);
          uStack_f0._0_4_ = (undefined4)uStack_358;
          uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_358 >> 0x20);
          uStack_238 = (undefined4)uStack_f8;
          uStack_234 = uStack_f8._4_4_;
          uStack_230 = (undefined4)uStack_f0;
          uStack_22c = uStack_f0._4_4_;
          uStack_248 = (undefined4)uStack_108;
          uStack_244 = uStack_108._4_4_;
          uStack_240 = (undefined4)uStack_100;
          uStack_23c = uStack_100._4_4_;
          puStack_258 = puStack_380;
          uStack_250 = uStack_378;
          puStack_118 = puStack_380;
          uStack_110 = uStack_378;
          uStack_108 = uStack_370;
          uStack_100 = uStack_368;
          uStack_f8 = uStack_360;
          uStack_f0 = uStack_358;
        }
        else {
          pdb_140a8e0c0(&uStack_388,(float)uStack_358 * 0.0);
          pdb_140a8a6f0(&uStack_388);
          puStack_118 = puStack_380;
          uStack_110 = uStack_378;
          uStack_108 = uStack_370;
          uStack_100 = uStack_368;
          uStack_f8 = uStack_360;
          uStack_f0 = uStack_358;
          uStack_260 = uStack_388;
          if (uStack_388 != 3) goto LAB_140086270;
          uStack_260 = 2;
        }
        acStack_d7[5] = 1;
        puStack_380 = puStack_118;
        uStack_378 = uStack_110;
        uStack_370 = uStack_108;
        uStack_368 = uStack_100;
        uStack_360 = uStack_f8;
        uStack_358 = uStack_f0;
        pdb_1400871f0(&uStack_388,param_5,&UNK_142e37d72,0x27,uStack_dc,8,0);
        if (uStack_388 == 2) {
          uStack_108 = uStack_370;
          puStack_118 = puStack_380;
          uStack_110 = uStack_378;
          uStack_388 = 2;
        }
        else {
          pdb_140a8e0c0(&uStack_388,(float)uStack_358 * fVar13);
          pdb_140a8a6f0(&uStack_388);
          puStack_118 = puStack_380;
          uStack_110 = uStack_378;
          uStack_108 = uStack_370;
          uStack_100 = uStack_368;
          uStack_f8 = uStack_360;
          uStack_f0 = uStack_358;
          if (uStack_388 == 3) goto LAB_1400860d3;
        }
        uStack_100._0_4_ = (undefined4)uStack_368;
        uStack_100._4_4_ = (undefined4)((ulonglong)uStack_368 >> 0x20);
        uStack_f8._0_4_ = (undefined4)uStack_360;
        uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_360 >> 0x20);
        uStack_f0._0_4_ = (undefined4)uStack_358;
        uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_358 >> 0x20);
        uStack_1b8 = (undefined4)uStack_f8;
        uStack_1b4 = uStack_f8._4_4_;
        uStack_1b0 = (undefined4)uStack_f0;
        uStack_1ac = uStack_f0._4_4_;
        uStack_1c8 = (undefined4)uStack_108;
        uStack_1c4 = uStack_108._4_4_;
        uStack_1c0 = (undefined4)uStack_100;
        uStack_1bc = uStack_100._4_4_;
        puStack_1d8 = puStack_118;
        uStack_1d0 = uStack_110;
        uStack_1e0 = uStack_388;
        uStack_100 = uStack_368;
        uStack_f8 = uStack_360;
        uStack_f0 = uStack_358;
      }
      else {
        puStack_168 = (undefined4 *)0x8000000000000000;
        puStack_188 = (undefined4 *)0x8000000000000000;
        uStack_260 = 2;
LAB_1400860d3:
        uStack_1e0 = 2;
      }
      acStack_d7[0] = '\0';
      uStack_388 = param_5;
      puStack_380 = &uStack_dc;
      uStack_378 = 0x600000000;
      uStack_370 = (ulonglong *)acStack_d7;
      acStack_d7[2] = 1;
      pdb_14017c0c0(&puStack_118,&uStack_388);
      if (acStack_d7[0] == '\0') {
        puStack_198 = uStack_108;
        puStack_1a8 = puStack_118;
        uStack_1a0 = uStack_110;
      }
      else {
        puStack_1a8 = (undefined4 *)0x8000000000000000;
        acStack_d7[2] = 1;
        pdb_1404db8c0(&puStack_118);
      }
      acStack_d7[1] = 1;
      pdb_1400871f0(&puStack_118,param_5,&UNK_142e37d58,0x1a,uVar25,&UNK_142e37d40,1);
      if ((int)puStack_118 != 2) {
        pdb_140a8e0c0(&puStack_118,fStack_e8 + fStack_e8);
      }
      uStack_2c0 = uStack_f8;
      uStack_2b8 = uStack_f0;
      puStack_2d0 = uStack_108;
      uStack_2c8 = uStack_100;
      puStack_2e0 = puStack_118;
      uStack_2d8 = uStack_110;
      uStack_378 = CONCAT44(uStack_214,uStack_218);
      uStack_370 = (ulonglong *)CONCAT44(uStack_20c,uStack_210);
      uStack_368 = CONCAT44(uStack_204,uStack_208);
      uStack_360 = CONCAT44(uStack_1fc,uStack_200);
      uStack_388 = uStack_228;
      puStack_380 = (undefined4 *)uStack_220;
      uStack_358 = uStack_1f8;
      puStack_298 = puStack_158;
      puStack_2a8 = puStack_168;
      uStack_2a0 = uStack_160;
      puStack_280 = puStack_178;
      puStack_290 = puStack_188;
      uStack_288 = uStack_180;
      uStack_320 = CONCAT44(uStack_22c,uStack_230);
      uStack_338 = CONCAT44(uStack_244,uStack_248);
      uStack_330 = CONCAT44(uStack_23c,uStack_240);
      uStack_328 = CONCAT44(uStack_234,uStack_238);
      uStack_340 = uStack_250;
      uStack_350 = uStack_260;
      puStack_348 = puStack_258;
      uStack_2e8 = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_2f8 = uStack_1c0;
      uStack_2f4 = uStack_1bc;
      uStack_2f0 = uStack_1b8;
      uStack_2ec = uStack_1b4;
      uStack_308 = (undefined4)uStack_1d0;
      uStack_304 = uStack_1d0._4_4_;
      uStack_300 = uStack_1c8;
      uStack_2fc = uStack_1c4;
      uStack_318 = uStack_1e0;
      puStack_310 = puStack_1d8;
      puStack_268 = puStack_198;
      puStack_278 = puStack_1a8;
      uStack_270 = uStack_1a0;
      lStack_140 = lVar15 + 0x40;
      lStack_148 = lVar15;
      pdb_1404c5ab0();
      lVar5 = lStack_148;
      lVar15 = lStack_148 + 0x1c0;
      uVar16 = uVar16 + 1;
      pub_142e32760(lStack_140,&uStack_388,0x128);
      *(undefined8 *)(lVar5 + 0x168) = 0;
      *(undefined4 *)(lVar5 + 0x170) = 0;
    } while (lVar15 != lStack_138);
  }
  uVar7 = *puStack_128;
  uVar8 = puStack_128[1];
  uVar9 = puStack_128[3];
  puStack_1e8[5] = puStack_128[2];
  puStack_1e8[6] = uVar9;
  puStack_1e8[3] = uVar7;
  puStack_1e8[4] = uVar8;
  uVar7 = puStack_130[1];
  *puStack_1e8 = *puStack_130;
  puStack_1e8[1] = uVar7;
  puStack_1e8[2] = puStack_130[2];
  *(uint *)(puStack_1e8 + 8) = uVar24;
  puStack_1e8[7] = uStack_120;
  *(undefined8 *)((longlong)puStack_1e8 + 0x44) = 0;
  return;
}

