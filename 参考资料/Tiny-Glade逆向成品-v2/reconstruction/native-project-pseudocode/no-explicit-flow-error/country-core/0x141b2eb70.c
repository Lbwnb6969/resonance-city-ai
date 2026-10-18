// VA 0x141b2eb70, PDB extent 2848 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo_callback<country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$0,country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$1,country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo_callback<country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$0,country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$1,country_core::resources::walls::wall_trigger_volume::impl$3::get_collision_geo::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 2848 */

void pdb_141b2eb70(longlong param_1,byte *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uStack_398;
  float fStack_390;
  undefined8 uStack_388;
  float fStack_380;
  undefined8 uStack_378;
  float fStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  float fStack_364;
  undefined8 uStack_360;
  float fStack_358;
  undefined8 uStack_350;
  float fStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  float fStack_33c;
  undefined8 uStack_338;
  float fStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  float fStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  float fStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  undefined8 uStack_308;
  float fStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  float fStack_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined8 uStack_2d4;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined8 uStack_2a4;
  float fStack_29c;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  float fStack_274;
  undefined8 uStack_270;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  float fStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  float fStack_244;
  byte *pbStack_240;
  undefined8 uStack_238;
  float fStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  fVar18 = _UNK_142e37954;
  fVar17 = _DAT_142e37950;
  fVar16 = _DAT_142e36f28;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_2 + 8);
    pfVar23 = *(float **)(param_1 + 8);
    lVar22 = *(longlong *)(param_1 + 0x10) * 0x7c;
    bVar6 = *param_2;
    uVar7 = *(undefined1 *)(param_1 + 0x60);
    pbStack_240 = param_2;
    do {
      if ((param_2[0x1d] == 0) || (*(char *)(pfVar23 + 0x1e) == '\0')) {
        if (param_2[0x1c] == 0) {
          fStack_370 = pfVar23[0xc];
          uStack_378 = *(undefined8 *)(pfVar23 + 10);
          uStack_388 = *(undefined8 *)(pfVar23 + 0xd);
          fStack_380 = pfVar23[0xf];
          uStack_398 = *(undefined8 *)(pfVar23 + 0x10);
          fStack_390 = pfVar23[0x12];
          fStack_280 = pfVar23[0xf];
          uStack_288 = *(undefined8 *)(pfVar23 + 0xd);
          fStack_300 = pfVar23[0x12];
          uStack_308 = *(undefined8 **)(pfVar23 + 0x10);
          pdb_141473710(&uStack_350,&uStack_378,&uStack_288,&uStack_308);
          fStack_268 = pfVar23[0x18];
          uStack_270 = *(undefined8 *)(pfVar23 + 0x16);
          fStack_274 = pfVar23[0x1b];
          fStack_27c = (float)*(undefined8 *)(pfVar23 + 0x19);
          uStack_278 = (undefined4)((ulonglong)*(undefined8 *)(pfVar23 + 0x19) >> 0x20);
          fStack_324 = pfVar23[0x18];
          uStack_308 = *(undefined8 **)(pfVar23 + 0x16);
          fStack_318 = pfVar23[0x1b];
          uStack_2fc = (undefined4)*(undefined8 *)(pfVar23 + 0x19);
          uStack_2f8._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(pfVar23 + 0x19) >> 0x20);
          fStack_30c = pfVar23[0x18];
          uVar8 = *(undefined8 *)(pfVar23 + 0x16);
          uVar4 = *(undefined8 *)(pfVar23 + 2);
          uVar5 = *(undefined8 *)(pfVar23 + 6);
          uVar31 = (undefined4)uVar5;
          uVar32 = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_2f0._0_4_ = (undefined4)uVar8;
          uStack_2f0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_31c = (undefined4)uStack_2f8;
          uStack_314 = (undefined4)uStack_2f0;
          uStack_310 = uStack_2f0._4_4_;
          uStack_32c = SUB84(uStack_308,0);
          uStack_328 = (undefined4)((ulonglong)uStack_308 >> 0x20);
          uStack_320 = uStack_2fc;
          fStack_370 = pfVar23[0x15];
          uStack_378 = *(undefined8 *)(pfVar23 + 0x13);
          fStack_300 = fStack_324;
          uStack_2f8._4_4_ = fStack_318;
          uStack_2f0 = (code *)uVar8;
          fStack_2e8 = fStack_30c;
          pdb_141473710(&uStack_308,&uStack_388,&uStack_378,&uStack_398);
          fStack_2dc = pfVar23[0x1b];
          uStack_288 = *(undefined8 *)(pfVar23 + 0x19);
          uVar34 = (undefined4)*(undefined8 *)(pfVar23 + 4);
          fVar26 = (float)((ulonglong)*(undefined8 *)(pfVar23 + 4) >> 0x20);
          fVar25 = pfVar23[5];
          fVar24 = (float)*(undefined8 *)(pfVar23 + 8);
          uVar36 = (undefined4)((ulonglong)*(undefined8 *)(pfVar23 + 8) >> 0x20);
          fStack_2c4 = fStack_268;
          uStack_2d4 = CONCAT44(fStack_274,uStack_278);
          fStack_2cc = (float)uStack_270;
          fStack_2c8 = (float)((ulonglong)uStack_270 >> 0x20);
          uStack_2e4 = (undefined4)uStack_288;
          fStack_2e0 = (float)((ulonglong)uStack_288 >> 0x20);
          fStack_2d8 = fStack_27c;
          uStack_1d8 = uStack_350;
          uStack_1d0 = CONCAT44(uStack_344,fStack_348);
          uStack_1c8 = CONCAT44(fStack_33c,uStack_340);
          uStack_1c0 = uStack_338;
          uStack_1b8 = CONCAT44(uStack_32c,fStack_330);
          uStack_1b0 = CONCAT44(fStack_324,uStack_328);
          uStack_1a8 = CONCAT44(uStack_31c,uStack_320);
          uStack_1a0 = CONCAT44(uStack_314,fStack_318);
          uStack_198 = CONCAT44(fStack_30c,uStack_310);
          uStack_228 = (undefined4)uStack_308;
          uStack_224 = uStack_308._4_4_;
          fStack_220 = fStack_300;
          uStack_21c = uStack_2fc;
          uStack_218 = (undefined4)uStack_2f8;
          fStack_214 = uStack_2f8._4_4_;
          uStack_210 = (undefined4)uStack_2f0;
          uStack_20c = uStack_2f0._4_4_;
          fStack_208 = fStack_2e8;
          uStack_204 = uStack_2e4;
          fStack_200 = fStack_2e0;
          fStack_1fc = fStack_2dc;
          fStack_1f8 = fStack_27c;
          uStack_1f4 = uStack_278;
          fStack_1f0 = fStack_274;
          fStack_1ec = fStack_2cc;
          uStack_1e8 = CONCAT44(fStack_268,fStack_2c8);
          lVar21 = param_3[2];
          fStack_280 = fStack_2dc;
          if (lVar21 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar19 = param_3[1];
          *(undefined4 *)(lVar19 + 0x20 + lVar21 * 0x24) = (undefined4)uStack_1b8;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = (undefined4)uStack_1c8;
          puVar20[1] = uStack_1c8._4_4_;
          puVar20[2] = (undefined4)uStack_1c0;
          puVar20[3] = uStack_1c0._4_4_;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = (undefined4)uStack_1d8;
          puVar20[1] = uStack_1d8._4_4_;
          puVar20[2] = (undefined4)uStack_1d0;
          puVar20[3] = uStack_1d0._4_4_;
          param_3[2] = lVar21 + 1;
          lVar21 = param_4[2];
          if (lVar21 == *param_4) {
            pdb_142d91b00(param_4);
          }
          lVar19 = param_4[1];
          *(undefined4 *)(lVar19 + 0x20 + lVar21 * 0x24) = uStack_198._4_4_;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = uStack_1a8._4_4_;
          puVar20[1] = (undefined4)uStack_1a0;
          puVar20[2] = uStack_1a0._4_4_;
          puVar20[3] = (undefined4)uStack_198;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = uStack_1b8._4_4_;
          puVar20[1] = (undefined4)uStack_1b0;
          puVar20[2] = uStack_1b0._4_4_;
          puVar20[3] = (undefined4)uStack_1a8;
          param_4[2] = lVar21 + 1;
          lVar21 = param_5[2];
          if (lVar21 == *param_5) {
            pdb_142d89250(param_5);
          }
          lVar19 = param_5[1];
          *(undefined8 *)(lVar19 + lVar21 * 0x18) = uVar4;
          *(undefined4 *)(lVar19 + 8 + lVar21 * 0x18) = uVar34;
          *(float *)(lVar19 + 0xc + lVar21 * 0x18) = fVar25;
          *(undefined8 *)(lVar19 + 0x10 + lVar21 * 0x18) = uVar5;
          param_5[2] = lVar21 + 1;
          lVar21 = param_3[2];
          if (lVar21 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar19 = param_3[1];
          *(float *)(lVar19 + 0x20 + lVar21 * 0x24) = fStack_208;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = uStack_218;
          puVar20[1] = fStack_214;
          puVar20[2] = uStack_210;
          puVar20[3] = uStack_20c;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = uStack_228;
          puVar20[1] = uStack_224;
          puVar20[2] = fStack_220;
          puVar20[3] = uStack_21c;
          param_3[2] = lVar21 + 1;
          lVar21 = param_4[2];
          if (lVar21 == *param_4) {
            pdb_142d91b00(param_4);
          }
          lVar19 = param_4[1];
          puVar20 = &uStack_204;
        }
        else {
          fVar25 = *pfVar23;
          fVar26 = pfVar23[1];
          fVar24 = fVar25;
          fVar27 = fVar26;
          if ((bVar6 & 1) != 0) {
            if (fVar3 < fVar2) {
              uStack_288 = CONCAT44(uStack_288._4_4_,fVar2);
              uStack_350 = CONCAT44(uStack_350._4_4_,fVar3);
              uStack_308 = &uStack_288;
              fStack_300 = 7.7194595;
              uStack_2fc = 1;
              uStack_2f8 = &uStack_350;
              uStack_2f0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14335ea9c,&uStack_308,&UNK_14335eb38);
            }
            fVar27 = fVar2;
            if (fVar2 <= fVar25) {
              fVar27 = fVar25;
            }
            fVar24 = fVar3;
            if (fVar27 <= fVar3) {
              fVar24 = fVar27;
            }
            uStack_350 = CONCAT44(uStack_350._4_4_,fVar24);
            if ((fVar24 < 0.0) || (fVar16 < fVar24)) {
LAB_141b2f5f8:
              uStack_308 = &uStack_350;
              fStack_300 = 7.7206726;
              uStack_2fc = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14335ec38,&uStack_308,&UNK_14335ece8);
            }
            fVar28 = fVar2;
            if (fVar2 <= fVar26) {
              fVar28 = fVar26;
            }
            fVar27 = fVar3;
            if (fVar28 <= fVar3) {
              fVar27 = fVar28;
            }
            uStack_350 = CONCAT44(uStack_350._4_4_,fVar27);
            if ((fVar27 < 0.0) || (fVar16 < fVar27)) goto LAB_141b2f5f8;
          }
          if ((fVar24 == fVar27) && (!NAN(fVar24) && !NAN(fVar27))) goto LAB_141b2ec5c;
          pdb_140a0e350(&uStack_308,pfVar23,param_2,uVar7);
          if ((fVar24 != fVar25) || (NAN(fVar24) || NAN(fVar25))) {
LAB_141b2ed36:
            fVar24 = (float)pdb_140de8220(fVar25,fVar26,fVar24);
            fVar25 = (float)pdb_140de8220(fVar25,fVar26,fVar27);
            fVar33 = fVar17 - fVar24;
            fVar35 = fVar18 - fVar25;
            fVar37 = fStack_2e0 * fVar35;
            fVar27 = uStack_2d4._4_4_ * fVar24;
            fVar28 = fStack_2cc * fVar24;
            fStack_2e0 = (float)uStack_2d4 * fVar24 + fStack_2e0 * fVar33;
            fVar29 = fStack_2bc * fVar24;
            fVar30 = fStack_2b8 * fVar24;
            fStack_2cc = fStack_2cc * fVar25 + fVar35 * fStack_2d8;
            fVar26 = fStack_2c0 * fVar35;
            fStack_2c0 = fStack_2c0 * fVar33 + fStack_2b4 * fVar24;
            fStack_2bc = fStack_2c8 * fVar35 + fStack_2bc * fVar25;
            fStack_2b8 = fStack_2c4 * fVar35 + fStack_2b8 * fVar25;
            fStack_2b4 = fVar26 + fStack_2b4 * fVar25;
            uStack_2d4 = CONCAT44(fStack_2dc * fVar35 + uStack_2d4._4_4_ * fVar25,
                                  (float)uStack_2d4 * fVar25 + fVar37);
            fStack_2dc = fVar27 + fStack_2dc * fVar33;
            fStack_2d8 = fVar28 + fStack_2d8 * fVar33;
            fStack_2c8 = fStack_2c8 * fVar33 + fVar29;
            fStack_2c4 = fStack_2c4 * fVar33 + fVar30;
          }
          else if ((fVar27 != fVar26) || (NAN(fVar27) || NAN(fVar26))) goto LAB_141b2ed36;
          fStack_390 = fStack_2d8;
          uStack_398 = CONCAT44(fStack_2dc,fStack_2e0);
          uStack_238 = uStack_2d4;
          fStack_230 = fStack_2cc;
          uStack_388 = CONCAT44(fStack_2c4,fStack_2c8);
          fStack_380 = fStack_2c0;
          fStack_370 = fStack_2cc;
          uStack_378 = uStack_2d4;
          fStack_348 = fStack_2c0;
          uStack_350 = CONCAT44(fStack_2c4,fStack_2c8);
          pdb_141473710(&uStack_288,&uStack_398,&uStack_378,&uStack_350);
          uVar8 = uStack_2f0;
          fStack_358 = fStack_2a8;
          uStack_360 = uStack_2b0;
          fStack_364 = fStack_29c;
          uStack_36c = (undefined4)uStack_2a4;
          uStack_368 = (undefined4)((ulonglong)uStack_2a4 >> 0x20);
          fStack_348 = fStack_2a8;
          uStack_350 = uStack_2b0;
          fStack_33c = fStack_29c;
          fStack_330 = fStack_2a8;
          uStack_338 = uStack_2b0;
          uVar5 = uStack_338;
          uVar4 = CONCAT44(uStack_2fc,fStack_300);
          uVar31 = SUB84(uStack_2f0,0);
          uVar32 = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
          fStack_244 = fStack_2a8;
          uStack_338._0_4_ = (undefined4)uStack_2b0;
          uStack_338._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
          uStack_254 = uStack_368;
          fStack_250 = fStack_29c;
          uStack_24c = (undefined4)uStack_338;
          uStack_248 = uStack_338._4_4_;
          fStack_25c = fStack_2a8;
          uStack_258 = uStack_36c;
          fStack_390 = fStack_2b4;
          uStack_398 = CONCAT44(fStack_2b8,fStack_2bc);
          uStack_344 = uStack_36c;
          uStack_340 = uStack_368;
          uStack_260 = uStack_338._4_4_;
          uStack_264 = (undefined4)uStack_338;
          uStack_338 = uVar5;
          pdb_141473710(&uStack_350,&uStack_238,&uStack_398,&uStack_388);
          uVar36 = uStack_2e4;
          fVar24 = fStack_2e8;
          fVar26 = uStack_2f8._4_4_;
          uVar34 = (undefined4)uStack_2f8;
          fStack_370 = fStack_29c;
          uStack_378 = uStack_2a4;
          fStack_30c = fStack_358;
          uStack_31c = uStack_368;
          fStack_318 = fStack_364;
          uStack_314 = (undefined4)uStack_360;
          uStack_310 = (undefined4)((ulonglong)uStack_360 >> 0x20);
          uStack_32c = (undefined4)uStack_2a4;
          uStack_328 = (undefined4)((ulonglong)uStack_2a4 >> 0x20);
          fStack_324 = fStack_29c;
          uStack_320 = uStack_36c;
          uStack_130 = CONCAT44(fStack_27c,fStack_280);
          uStack_128 = CONCAT44(fStack_274,uStack_278);
          uStack_118 = CONCAT44(uStack_264,fStack_268);
          uStack_110 = CONCAT44(fStack_25c,uStack_260);
          uStack_108 = CONCAT44(uStack_254,uStack_258);
          uStack_100 = CONCAT44(uStack_24c,fStack_250);
          uStack_138 = uStack_288;
          uStack_120 = uStack_270;
          uStack_f8 = CONCAT44(fStack_244,uStack_248);
          uStack_148 = CONCAT44(fStack_358,uStack_310);
          uStack_158 = uStack_36c;
          uStack_154 = uStack_368;
          fStack_150 = fStack_364;
          uStack_14c = uStack_314;
          fStack_168 = fStack_330;
          uStack_164 = uStack_32c;
          uStack_160 = uStack_328;
          fStack_15c = fStack_29c;
          uStack_178 = uStack_340;
          fStack_174 = fStack_33c;
          uStack_170 = (undefined4)uStack_338;
          uStack_16c = uStack_338._4_4_;
          uStack_188 = (undefined4)uStack_350;
          uStack_184 = uStack_350._4_4_;
          fStack_180 = fStack_348;
          uStack_17c = uStack_344;
          lVar21 = param_3[2];
          if (lVar21 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar19 = param_3[1];
          *(undefined4 *)(lVar19 + 0x20 + lVar21 * 0x24) = (undefined4)uStack_118;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = (undefined4)uStack_128;
          puVar20[1] = uStack_128._4_4_;
          puVar20[2] = (undefined4)uStack_120;
          puVar20[3] = uStack_120._4_4_;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = (undefined4)uStack_138;
          puVar20[1] = uStack_138._4_4_;
          puVar20[2] = (undefined4)uStack_130;
          puVar20[3] = uStack_130._4_4_;
          param_3[2] = lVar21 + 1;
          lVar21 = param_4[2];
          if (lVar21 == *param_4) {
            pdb_142d91b00(param_4);
          }
          param_2 = pbStack_240;
          lVar19 = param_4[1];
          *(undefined4 *)(lVar19 + 0x20 + lVar21 * 0x24) = uStack_f8._4_4_;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = uStack_108._4_4_;
          puVar20[1] = (undefined4)uStack_100;
          puVar20[2] = uStack_100._4_4_;
          puVar20[3] = (undefined4)uStack_f8;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = uStack_118._4_4_;
          puVar20[1] = (undefined4)uStack_110;
          puVar20[2] = uStack_110._4_4_;
          puVar20[3] = (undefined4)uStack_108;
          param_4[2] = lVar21 + 1;
          lVar21 = param_5[2];
          if (lVar21 == *param_5) {
            pdb_142d89250(param_5);
          }
          lVar19 = param_5[1];
          *(undefined8 *)(lVar19 + lVar21 * 0x18) = uVar4;
          *(undefined4 *)(lVar19 + 8 + lVar21 * 0x18) = uVar34;
          *(float *)(lVar19 + 0xc + lVar21 * 0x18) = fVar26;
          *(undefined8 *)(lVar19 + 0x10 + lVar21 * 0x18) = uVar8;
          param_5[2] = lVar21 + 1;
          lVar21 = param_3[2];
          if (lVar21 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar19 = param_3[1];
          *(float *)(lVar19 + 0x20 + lVar21 * 0x24) = fStack_168;
          puVar20 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
          *puVar20 = uStack_178;
          puVar20[1] = fStack_174;
          puVar20[2] = uStack_170;
          puVar20[3] = uStack_16c;
          puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
          *puVar20 = uStack_188;
          puVar20[1] = uStack_184;
          puVar20[2] = fStack_180;
          puVar20[3] = uStack_17c;
          param_3[2] = lVar21 + 1;
          lVar21 = param_4[2];
          if (lVar21 == *param_4) {
            pdb_142d91b00(param_4);
          }
          lVar19 = param_4[1];
          puVar20 = &uStack_164;
        }
        *(undefined4 *)(lVar19 + 0x20 + lVar21 * 0x24) = puVar20[8];
        uVar9 = *puVar20;
        uVar10 = puVar20[1];
        uVar11 = puVar20[2];
        uVar12 = puVar20[3];
        uVar13 = puVar20[5];
        uVar14 = puVar20[6];
        uVar15 = puVar20[7];
        puVar1 = (undefined4 *)(lVar19 + 0x10 + lVar21 * 0x24);
        *puVar1 = puVar20[4];
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x24);
        *puVar20 = uVar9;
        puVar20[1] = uVar10;
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        param_4[2] = lVar21 + 1;
        lVar21 = param_5[2];
        if (lVar21 == *param_5) {
          pdb_142d89250(param_5);
        }
        lVar19 = param_5[1];
        puVar20 = (undefined4 *)(lVar19 + lVar21 * 0x18);
        *puVar20 = uVar34;
        puVar20[1] = fVar26;
        puVar20[2] = fVar24;
        puVar20[3] = uVar36;
        *(ulonglong *)(lVar19 + 0x10 + lVar21 * 0x18) = CONCAT44(uVar32,uVar31);
        param_5[2] = lVar21 + 1;
      }
LAB_141b2ec5c:
      pfVar23 = pfVar23 + 0x1f;
      lVar22 = lVar22 + -0x7c;
    } while (lVar22 != 0);
  }
  return;
}

