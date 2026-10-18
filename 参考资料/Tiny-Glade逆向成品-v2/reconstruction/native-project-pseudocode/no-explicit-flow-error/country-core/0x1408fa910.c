// VA 0x1408fa910, PDB extent 2368 bytes
// country_core::systems::backend::update_material_args::material_update_sheep
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_sheep
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 2368 */

void pdb_1408fa910(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  float *pfVar28;
  uint uVar29;
  uint *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong lStack_370;
  longlong lStack_368;
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_330;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  uint *puStack_288;
  uint *puStack_280;
  longlong lStack_268;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined8 uStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  uint uStack_218;
  uint uStack_214;
  byte bStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  longlong lStack_c0;
  
  lVar4 = *param_3;
  lVar5 = param_3[1];
  pdb_141523a10(&puStack_288,lVar5,lVar4,(int)param_3[2],*(undefined4 *)((longlong)param_3 + 0x14));
  fVar13 = _DAT_142e36f28;
  lStack_330 = lStack_268;
  lStack_340 = lStack_258;
  lStack_348 = lStack_250;
  lStack_350 = lStack_248;
  lStack_358 = lStack_238;
  lStack_360 = lStack_230;
  lStack_368 = lStack_228;
  lStack_370 = lStack_220;
  uVar32 = (ulonglong)uStack_218;
  plVar6 = (longlong *)*param_1;
  uVar7 = *param_2;
  puVar30 = puStack_288;
  uVar29 = uStack_214;
  lStack_2a8 = lVar5;
  lStack_2a0 = lVar5 + 0x198;
  lStack_298 = lVar5 + 0xf8;
  lStack_290 = lVar4;
  if ((bStack_210 & 1) != 0) goto LAB_1408fac70;
  do {
    if (uVar29 == (uint)uVar32) {
      if (puVar30 == puStack_280) {
        return;
      }
      while( true ) {
        uVar32 = *(ulonglong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar30 * 0xa0);
        if (uVar32 != 0) break;
        puVar30 = puVar30 + 1;
        if (puVar30 == puStack_280) {
          return;
        }
      }
      lVar23 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar30 * 0xa0;
      uVar26 = (ulonglong)*(uint *)(lVar23 + 0x94);
      lVar27 = *(longlong *)(lVar5 + 0x1a0);
      uVar22 = *(ulonglong *)(lVar27 + 0x40 + uVar26 * 0x48);
      lVar31 = *(longlong *)(lVar27 + 0x18 + uVar26 * 0x48);
      lVar27 = *(longlong *)(lVar27 + 0x38 + uVar26 * 0x48);
      if ((*(ulonglong *)(lVar4 + 0x118) < uVar22) &&
         (uVar26 = *(ulonglong *)(lVar27 + *(ulonglong *)(lVar4 + 0x118) * 8), uVar26 != 0)) {
        lStack_358 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
        uVar26 = *(ulonglong *)(lVar4 + 0x120);
        if (uVar22 <= uVar26) goto LAB_1408fab91;
LAB_1408fab65:
        uVar26 = *(ulonglong *)(lVar27 + uVar26 * 8);
        if (uVar26 == 0) goto LAB_1408fab91;
        lStack_360 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
        uVar26 = *(ulonglong *)(lVar4 + 0x128);
        if (uVar26 < uVar22) goto LAB_1408faba6;
LAB_1408fabd2:
        lStack_368 = 0;
        uVar26 = *(ulonglong *)(lVar4 + 0x130);
        if (uVar22 <= uVar26) goto LAB_1408fac07;
LAB_1408fabe7:
        uVar22 = *(ulonglong *)(lVar27 + uVar26 * 8);
        if (uVar22 == 0) goto LAB_1408fac07;
        lStack_370 = *(longlong *)(lVar31 + 0x10 + ~uVar22 * 0x30);
      }
      else {
        lStack_358 = 0;
        uVar26 = *(ulonglong *)(lVar4 + 0x120);
        if (uVar26 < uVar22) goto LAB_1408fab65;
LAB_1408fab91:
        lStack_360 = 0;
        uVar26 = *(ulonglong *)(lVar4 + 0x128);
        if (uVar22 <= uVar26) goto LAB_1408fabd2;
LAB_1408faba6:
        uVar26 = *(ulonglong *)(lVar27 + uVar26 * 8);
        if (uVar26 == 0) goto LAB_1408fabd2;
        lStack_368 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
        uVar26 = *(ulonglong *)(lVar4 + 0x130);
        if (uVar26 < uVar22) goto LAB_1408fabe7;
LAB_1408fac07:
        lStack_370 = 0;
      }
      lVar27 = ~*(ulonglong *)(lVar27 + *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
      lStack_340 = *(longlong *)(lVar31 + 0x10 + lVar27);
      lStack_348 = *(longlong *)(lVar31 + 0x20 + lVar27);
      lStack_350 = *(longlong *)(lVar31 + 0x28 + lVar27);
      puVar30 = puVar30 + 1;
      lStack_330 = *(longlong *)(lVar23 + 0x50);
      uVar29 = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = (ulonglong)uVar29;
    }
    uVar9 = ~*(uint *)(lStack_330 + 8 + uVar22 * 0x10);
    while( true ) {
      uVar22 = (ulonglong)uVar9;
      lStack_310 = lStack_340 + uVar22 * 8;
      lStack_308 = lStack_348 + uVar22 * 4;
      lStack_300 = lStack_350 + uVar22 * 4;
      lStack_2f0 = uVar22 * 0x38 + lStack_358;
      pfVar24 = (float *)(lStack_360 + uVar22 * 0x30);
      pfVar28 = (float *)(uVar22 * 0x30 + lStack_368);
      lVar31 = uVar22 * 0x68 + lStack_370;
      uStack_2f8 = uStack_240;
      lVar27 = *plVar6;
      fStack_2cc = (float)*(undefined8 *)(pfVar24 + 8);
      fStack_2bc = (float)((ulonglong)*(undefined8 *)(pfVar24 + 8) >> 0x20);
      fVar10 = *pfVar24;
      fVar11 = pfVar24[1];
      fVar12 = pfVar24[3];
      fStack_2b8 = pfVar24[4];
      fStack_2b4 = pfVar24[5];
      fStack_2b0 = pfVar24[6];
      fVar1 = pfVar24[2];
      fVar39 = fVar1 + fVar1;
      fVar33 = fVar11 + fVar11;
      fVar37 = fVar10 * (fVar10 + fVar10);
      fVar34 = (fVar10 + fVar10) * fVar12;
      fVar38 = fVar39 * fVar10 - fVar33 * fVar12;
      fVar35 = fVar34 + fVar39 * fVar11;
      fVar36 = fVar13 - (fVar37 + fVar11 * fVar33);
      fStack_2dc = pfVar24[7];
      fStack_2e8 = fStack_2dc * (fVar13 - (fVar11 * fVar33 + fVar1 * fVar39));
      fStack_2e4 = fStack_2dc * (fVar33 * fVar10 + fVar12 * fVar39);
      fStack_2e0 = fStack_2dc * fVar38;
      fStack_2dc = fStack_2dc * fVar38;
      fStack_2d8 = fStack_2cc * (fVar33 * fVar10 - fVar12 * fVar39);
      fStack_2d4 = fStack_2cc * (fVar13 - (fVar1 * fVar39 + fVar37));
      fStack_2d0 = fStack_2cc * fVar35;
      fStack_2cc = fStack_2cc * fVar35;
      fStack_2c8 = fStack_2bc * (fVar33 * fVar12 + fVar39 * fVar10);
      fStack_2c4 = fStack_2bc * (fVar39 * fVar11 - fVar34);
      fStack_2c0 = fStack_2bc * fVar36;
      fStack_2bc = fStack_2bc * fVar36;
      fStack_2ac = fStack_2b0;
      pdb_140e07fe0(&uStack_1a0,&fStack_2e8);
      fStack_2cc = (float)*(undefined8 *)(pfVar28 + 8);
      fStack_2bc = (float)((ulonglong)*(undefined8 *)(pfVar28 + 8) >> 0x20);
      fVar10 = *pfVar28;
      fVar11 = pfVar28[1];
      fVar12 = pfVar28[3];
      fStack_2b8 = pfVar28[4];
      fStack_2b4 = pfVar28[5];
      fStack_2b0 = pfVar28[6];
      fVar1 = pfVar28[2];
      fVar39 = fVar1 + fVar1;
      fVar33 = fVar11 + fVar11;
      fVar37 = fVar10 * (fVar10 + fVar10);
      fVar34 = (fVar10 + fVar10) * fVar12;
      fVar38 = fVar39 * fVar10 - fVar33 * fVar12;
      fVar35 = fVar34 + fVar39 * fVar11;
      fVar36 = fVar13 - (fVar37 + fVar11 * fVar33);
      fStack_2dc = pfVar28[7];
      fStack_2e8 = fStack_2dc * (fVar13 - (fVar11 * fVar33 + fVar1 * fVar39));
      fStack_2e4 = fStack_2dc * (fVar33 * fVar10 + fVar12 * fVar39);
      fStack_2e0 = fStack_2dc * fVar38;
      fStack_2dc = fStack_2dc * fVar38;
      fStack_2d8 = fStack_2cc * (fVar33 * fVar10 - fVar12 * fVar39);
      fStack_2d4 = fStack_2cc * (fVar13 - (fVar1 * fVar39 + fVar37));
      fStack_2d0 = fStack_2cc * fVar35;
      fStack_2cc = fStack_2cc * fVar35;
      fStack_2c8 = fStack_2bc * (fVar33 * fVar12 + fVar39 * fVar10);
      fStack_2c4 = fStack_2bc * (fVar39 * fVar11 - fVar34);
      fStack_2c0 = fStack_2bc * fVar36;
      fStack_2bc = fStack_2bc * fVar36;
      fStack_2ac = fStack_2b0;
      pdb_140e07fe0(&uStack_170,&fStack_2e8);
      uVar8 = *(undefined8 *)(lVar31 + 0x28);
      uVar2 = *(undefined4 *)(lVar31 + 0x58);
      bVar3 = *(byte *)(lVar31 + 0x60);
      puVar25 = (undefined8 *)pdb_140bf45b0(uVar7,&UNK_14331c9b0);
      if ((puVar25 == (undefined8 *)0x0) ||
         (lVar31 = (**(code **)(puVar25[1] + 0x18))(*puVar25), lVar31 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301d878);
      }
      uVar29 = uVar29 + 1;
      uStack_1e8 = uStack_180;
      uVar18 = uStack_1e8;
      uStack_1e0 = uStack_178;
      uVar19 = uStack_1e0;
      uStack_1f8 = uStack_190;
      uVar16 = uStack_1f8;
      uStack_1f0 = uStack_188;
      uVar17 = uStack_1f0;
      uStack_208 = uStack_1a0;
      uVar14 = uStack_208;
      uStack_200 = uStack_198;
      uVar15 = uStack_200;
      uStack_1b8 = uStack_150;
      uStack_1b0 = uStack_148;
      uStack_1c8 = uStack_160;
      uStack_1c0 = uStack_158;
      uStack_1d8 = uStack_170;
      uVar20 = uStack_1d8;
      uStack_1d0 = uStack_168;
      uVar21 = uStack_1d0;
      puStack_140 = &UNK_14301d890;
      uStack_138 = 0x20;
      uStack_e0 = uStack_150;
      uStack_d8 = uStack_148;
      uStack_f0 = uStack_160;
      uStack_e8 = uStack_158;
      uStack_208._0_4_ = (undefined4)uStack_1a0;
      uStack_208._4_4_ = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
      uStack_200._0_4_ = (undefined4)uStack_198;
      uStack_200._4_4_ = (undefined4)((ulonglong)uStack_198 >> 0x20);
      uStack_1f8._0_4_ = (undefined4)uStack_190;
      uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_190 >> 0x20);
      uStack_1f0._0_4_ = (undefined4)uStack_188;
      uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_188 >> 0x20);
      uStack_1e8._0_4_ = (undefined4)uStack_180;
      uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
      uStack_1e0._0_4_ = (undefined4)uStack_178;
      uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_178 >> 0x20);
      uStack_1d8._0_4_ = (undefined4)uStack_170;
      uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
      uStack_1d0._0_4_ = (undefined4)uStack_168;
      uStack_1d0._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
      uStack_100 = (undefined4)uStack_1d8;
      uStack_fc = uStack_1d8._4_4_;
      uStack_f8 = (undefined4)uStack_1d0;
      uStack_f4 = uStack_1d0._4_4_;
      uStack_110 = (undefined4)uStack_1e8;
      uStack_10c = uStack_1e8._4_4_;
      uStack_108 = (undefined4)uStack_1e0;
      uStack_104 = uStack_1e0._4_4_;
      uStack_120 = (undefined4)uStack_1f8;
      uStack_11c = uStack_1f8._4_4_;
      uStack_118 = (undefined4)uStack_1f0;
      uStack_114 = uStack_1f0._4_4_;
      uStack_130 = (undefined4)uStack_208;
      uStack_12c = uStack_208._4_4_;
      uStack_128 = (undefined4)uStack_200;
      uStack_124 = uStack_200._4_4_;
      uStack_d0 = (undefined4)uVar8;
      uStack_c8 = (uint)bVar3;
      uStack_208 = uVar14;
      uStack_200 = uVar15;
      uStack_1f8 = uVar16;
      uStack_1f0 = uVar17;
      uStack_1e8 = uVar18;
      uStack_1e0 = uVar19;
      uStack_1d8 = uVar20;
      uStack_1d0 = uVar21;
      uStack_cc = uVar2;
      lStack_c0 = lVar31;
      pdb_1416c88d0(&lStack_310,lVar27 + 0x10,&puStack_140);
      if ((bStack_210 & 1) == 0) break;
LAB_1408fac70:
      uVar9 = uVar29;
      if (uVar29 == (uint)uVar32) {
        if (puVar30 == puStack_280) {
          return;
        }
        while( true ) {
          uVar32 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar30 * 0x48);
          if (uVar32 != 0) break;
          puVar30 = puVar30 + 1;
          if (puVar30 == puStack_280) {
            return;
          }
        }
        lVar27 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar30 * 0x48;
        uVar22 = *(ulonglong *)(lVar27 + 0x40);
        lVar31 = *(longlong *)(lVar27 + 0x18);
        lVar27 = *(longlong *)(lVar27 + 0x38);
        if ((*(ulonglong *)(lVar4 + 0x118) < uVar22) &&
           (uVar26 = *(ulonglong *)(lVar27 + *(ulonglong *)(lVar4 + 0x118) * 8), uVar26 != 0)) {
          lStack_358 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
          uVar26 = *(ulonglong *)(lVar4 + 0x120);
          if (uVar22 <= uVar26) goto LAB_1408fad49;
LAB_1408fad1d:
          uVar26 = *(ulonglong *)(lVar27 + uVar26 * 8);
          if (uVar26 == 0) goto LAB_1408fad49;
          lStack_360 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
          uVar26 = *(ulonglong *)(lVar4 + 0x128);
          if (uVar26 < uVar22) goto LAB_1408fad5e;
LAB_1408fad8a:
          lStack_368 = 0;
          uVar26 = *(ulonglong *)(lVar4 + 0x130);
          if (uVar22 <= uVar26) goto LAB_1408fadbf;
LAB_1408fad9f:
          uVar22 = *(ulonglong *)(lVar27 + uVar26 * 8);
          if (uVar22 == 0) goto LAB_1408fadbf;
          lStack_370 = *(longlong *)(lVar31 + 0x10 + ~uVar22 * 0x30);
        }
        else {
          lStack_358 = 0;
          uVar26 = *(ulonglong *)(lVar4 + 0x120);
          if (uVar26 < uVar22) goto LAB_1408fad1d;
LAB_1408fad49:
          lStack_360 = 0;
          uVar26 = *(ulonglong *)(lVar4 + 0x128);
          if (uVar22 <= uVar26) goto LAB_1408fad8a;
LAB_1408fad5e:
          uVar26 = *(ulonglong *)(lVar27 + uVar26 * 8);
          if (uVar26 == 0) goto LAB_1408fad8a;
          lStack_368 = *(longlong *)(lVar31 + 0x10 + ~uVar26 * 0x30);
          uVar26 = *(ulonglong *)(lVar4 + 0x130);
          if (uVar26 < uVar22) goto LAB_1408fad9f;
LAB_1408fadbf:
          lStack_370 = 0;
        }
        lVar27 = ~*(ulonglong *)(lVar27 + *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
        lStack_340 = *(longlong *)(lVar31 + 0x10 + lVar27);
        lStack_348 = *(longlong *)(lVar31 + 0x20 + lVar27);
        lStack_350 = *(longlong *)(lVar31 + 0x28 + lVar27);
        puVar30 = puVar30 + 1;
        uVar29 = 0;
        uVar9 = uVar29;
      }
    }
  } while( true );
}

