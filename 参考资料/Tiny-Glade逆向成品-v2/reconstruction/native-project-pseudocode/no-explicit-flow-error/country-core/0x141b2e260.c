// VA 0x141b2e260, PDB extent 2318 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo_callback<country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$0,country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$1,country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo_callback<country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$0,country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$1,country_core::resources::walls::wall_trigger_volume::impl$3::get_tris::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 2318 */

void pdb_141b2e260(longlong param_1,byte *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_390;
  float fStack_388;
  undefined8 uStack_380;
  float fStack_378;
  undefined8 uStack_370;
  float fStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  float fStack_35c;
  undefined8 uStack_358;
  float fStack_350;
  undefined8 uStack_348;
  float fStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  float fStack_334;
  undefined8 uStack_330;
  float fStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  float fStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  float fStack_304;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined8 uStack_2cc;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 uStack_2a8;
  float fStack_2a0;
  undefined8 uStack_29c;
  float fStack_294;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  float fStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  float fStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  float fStack_23c;
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
  
  fVar10 = _UNK_142e37954;
  fVar9 = _DAT_142e37950;
  fVar8 = _DAT_142e36f28;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_2 + 8);
    pfVar12 = *(float **)(param_1 + 8);
    lVar14 = *(longlong *)(param_1 + 0x10) * 0x7c;
    bVar4 = *param_2;
    uVar5 = *(undefined1 *)(param_1 + 0x60);
    do {
      if ((param_2[0x1d] == 0) || (*(char *)(pfVar12 + 0x1e) == '\0')) {
        if (param_2[0x1c] == 0) {
          fStack_368 = pfVar12[0xc];
          uStack_370 = *(undefined8 *)(pfVar12 + 10);
          uStack_380 = *(undefined8 *)(pfVar12 + 0xd);
          fStack_378 = pfVar12[0xf];
          uStack_390 = *(undefined8 *)(pfVar12 + 0x10);
          fStack_388 = pfVar12[0x12];
          fStack_278 = pfVar12[0xf];
          uStack_280 = *(undefined8 *)(pfVar12 + 0xd);
          fStack_2f8 = pfVar12[0x12];
          uStack_300 = *(undefined8 **)(pfVar12 + 0x10);
          pdb_141473710(&uStack_348,&uStack_370,&uStack_280,&uStack_300);
          fStack_260 = pfVar12[0x18];
          uStack_268 = *(undefined8 *)(pfVar12 + 0x16);
          fStack_26c = pfVar12[0x1b];
          fStack_274 = (float)*(undefined8 *)(pfVar12 + 0x19);
          uStack_270 = (undefined4)((ulonglong)*(undefined8 *)(pfVar12 + 0x19) >> 0x20);
          fStack_31c = pfVar12[0x18];
          uStack_300 = *(undefined8 **)(pfVar12 + 0x16);
          fStack_310 = pfVar12[0x1b];
          uStack_2f4 = (undefined4)*(undefined8 *)(pfVar12 + 0x19);
          uStack_2f0._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(pfVar12 + 0x19) >> 0x20);
          fStack_304 = pfVar12[0x18];
          uVar7 = *(undefined8 *)(pfVar12 + 0x16);
          uStack_2e8._0_4_ = (undefined4)uVar7;
          uStack_2e8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_314 = (undefined4)uStack_2f0;
          uStack_30c = (undefined4)uStack_2e8;
          uStack_308 = uStack_2e8._4_4_;
          uStack_324 = SUB84(uStack_300,0);
          uStack_320 = (undefined4)((ulonglong)uStack_300 >> 0x20);
          uStack_318 = uStack_2f4;
          fStack_368 = pfVar12[0x15];
          uStack_370 = *(undefined8 *)(pfVar12 + 0x13);
          fStack_2f8 = fStack_31c;
          uStack_2f0._4_4_ = fStack_310;
          uStack_2e8 = (code *)uVar7;
          fStack_2e0 = fStack_304;
          pdb_141473710(&uStack_300,&uStack_380,&uStack_370,&uStack_390);
          fStack_2d4 = pfVar12[0x1b];
          uStack_280 = *(undefined8 *)(pfVar12 + 0x19);
          fStack_2bc = fStack_260;
          uStack_2cc = CONCAT44(fStack_26c,uStack_270);
          fStack_2c4 = (float)uStack_268;
          fStack_2c0 = (float)((ulonglong)uStack_268 >> 0x20);
          uStack_2dc = (undefined4)uStack_280;
          fStack_2d8 = (float)((ulonglong)uStack_280 >> 0x20);
          fStack_2d0 = fStack_274;
          uStack_1d0 = CONCAT44(uStack_33c,fStack_340);
          uStack_1c8 = CONCAT44(fStack_334,uStack_338);
          uStack_1b8 = CONCAT44(uStack_324,fStack_328);
          uStack_1b0 = CONCAT44(fStack_31c,uStack_320);
          uStack_1a8 = CONCAT44(uStack_314,uStack_318);
          uStack_1a0 = CONCAT44(uStack_30c,fStack_310);
          uStack_1d8 = uStack_348;
          uStack_1c0 = uStack_330;
          uStack_198 = CONCAT44(fStack_304,uStack_308);
          uStack_1e8 = CONCAT44(fStack_260,fStack_2c0);
          fStack_1f8 = fStack_274;
          uStack_1f4 = uStack_270;
          fStack_1f0 = fStack_26c;
          fStack_1ec = fStack_2c4;
          fStack_208 = fStack_2e0;
          uStack_204 = uStack_2dc;
          fStack_200 = fStack_2d8;
          uStack_218 = (undefined4)uStack_2f0;
          fStack_214 = uStack_2f0._4_4_;
          uStack_210 = (undefined4)uStack_2e8;
          uStack_20c = uStack_2e8._4_4_;
          uStack_228 = (undefined4)uStack_300;
          uStack_224 = uStack_300._4_4_;
          fStack_220 = fStack_2f8;
          uStack_21c = uStack_2f4;
          lVar13 = param_3[2];
          fStack_278 = fStack_2d4;
          fStack_1fc = fStack_2d4;
          if (lVar13 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar6 = param_3[1];
          *(undefined4 *)(lVar6 + 0x20 + lVar13 * 0x24) = (undefined4)uStack_1b8;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar13 * 0x24);
          *puVar1 = (undefined4)uStack_1c8;
          puVar1[1] = uStack_1c8._4_4_;
          puVar1[2] = (undefined4)uStack_1c0;
          puVar1[3] = uStack_1c0._4_4_;
          puVar1 = (undefined4 *)(lVar6 + lVar13 * 0x24);
          *puVar1 = (undefined4)uStack_1d8;
          puVar1[1] = uStack_1d8._4_4_;
          puVar1[2] = (undefined4)uStack_1d0;
          puVar1[3] = uStack_1d0._4_4_;
          lVar6 = lVar13 + 1;
          param_3[2] = lVar6;
          if (lVar6 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar11 = param_3[1];
          *(float *)(lVar11 + 0x20 + lVar6 * 0x24) = fStack_208;
          uVar15 = uStack_228;
          uVar18 = uStack_224;
          fVar17 = fStack_220;
          uVar19 = uStack_21c;
          uVar20 = uStack_218;
          fVar23 = fStack_214;
          uVar21 = uStack_210;
          uVar22 = uStack_20c;
        }
        else {
          fVar17 = *pfVar12;
          fVar23 = pfVar12[1];
          fVar16 = fVar17;
          fVar24 = fVar23;
          if ((bVar4 & 1) != 0) {
            if (fVar3 < fVar2) {
              uStack_280 = CONCAT44(uStack_280._4_4_,fVar2);
              uStack_348 = CONCAT44(uStack_348._4_4_,fVar3);
              uStack_300 = &uStack_280;
              fStack_2f8 = 7.7194595;
              uStack_2f4 = 1;
              uStack_2f0 = &uStack_348;
              uStack_2e8 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14335ea9c,&uStack_300,&UNK_14335eb38);
            }
            fVar24 = fVar2;
            if (fVar2 <= fVar17) {
              fVar24 = fVar17;
            }
            fVar16 = fVar3;
            if (fVar24 <= fVar3) {
              fVar16 = fVar24;
            }
            uStack_348 = CONCAT44(uStack_348._4_4_,fVar16);
            if ((fVar16 < 0.0) || (fVar8 < fVar16)) {
LAB_141b2ead6:
              uStack_300 = &uStack_348;
              fStack_2f8 = 7.7206726;
              uStack_2f4 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14335ec38,&uStack_300,&UNK_14335ece8);
            }
            fVar25 = fVar2;
            if (fVar2 <= fVar23) {
              fVar25 = fVar23;
            }
            fVar24 = fVar3;
            if (fVar25 <= fVar3) {
              fVar24 = fVar25;
            }
            uStack_348 = CONCAT44(uStack_348._4_4_,fVar24);
            if ((fVar24 < 0.0) || (fVar8 < fVar24)) goto LAB_141b2ead6;
          }
          if ((fVar16 == fVar24) && (!NAN(fVar16) && !NAN(fVar24))) goto LAB_141b2e364;
          pdb_140a0e350(&uStack_300,pfVar12,param_2,uVar5);
          if ((fVar16 != fVar17) || (NAN(fVar16) || NAN(fVar17))) {
LAB_141b2e43b:
            fVar16 = (float)pdb_140de8220(fVar17,fVar23,fVar16);
            fVar17 = (float)pdb_140de8220(fVar17,fVar23,fVar24);
            fVar28 = fVar9 - fVar16;
            fVar29 = fVar10 - fVar17;
            fVar30 = fStack_2d8 * fVar29;
            fVar24 = uStack_2cc._4_4_ * fVar16;
            fVar25 = fStack_2c4 * fVar16;
            fStack_2d8 = (float)uStack_2cc * fVar16 + fStack_2d8 * fVar28;
            fVar26 = fStack_2b4 * fVar16;
            fVar27 = fStack_2b0 * fVar16;
            fStack_2c4 = fStack_2c4 * fVar17 + fVar29 * fStack_2d0;
            fVar23 = fStack_2b8 * fVar29;
            fStack_2b8 = fStack_2b8 * fVar28 + fStack_2ac * fVar16;
            fStack_2b4 = fStack_2c0 * fVar29 + fStack_2b4 * fVar17;
            fStack_2b0 = fStack_2bc * fVar29 + fStack_2b0 * fVar17;
            fStack_2ac = fVar23 + fStack_2ac * fVar17;
            uStack_2cc = CONCAT44(fStack_2d4 * fVar29 + uStack_2cc._4_4_ * fVar17,
                                  (float)uStack_2cc * fVar17 + fVar30);
            fStack_2d4 = fVar24 + fStack_2d4 * fVar28;
            fStack_2d0 = fVar25 + fStack_2d0 * fVar28;
            fStack_2c0 = fStack_2c0 * fVar28 + fVar26;
            fStack_2bc = fStack_2bc * fVar28 + fVar27;
          }
          else if ((fVar24 != fVar23) || (NAN(fVar24) || NAN(fVar23))) goto LAB_141b2e43b;
          fStack_388 = fStack_2d0;
          uStack_390 = CONCAT44(fStack_2d4,fStack_2d8);
          uStack_238 = uStack_2cc;
          fStack_230 = fStack_2c4;
          uStack_380 = CONCAT44(fStack_2bc,fStack_2c0);
          fStack_378 = fStack_2b8;
          fStack_368 = fStack_2c4;
          uStack_370 = uStack_2cc;
          fStack_340 = fStack_2b8;
          uStack_348 = CONCAT44(fStack_2bc,fStack_2c0);
          pdb_141473710(&uStack_280,&uStack_390,&uStack_370,&uStack_348);
          fStack_350 = fStack_2a0;
          uStack_358 = uStack_2a8;
          fStack_35c = fStack_294;
          uStack_364 = (undefined4)uStack_29c;
          uStack_360 = (undefined4)((ulonglong)uStack_29c >> 0x20);
          fStack_340 = fStack_2a0;
          uStack_348 = uStack_2a8;
          fStack_334 = fStack_294;
          fStack_328 = fStack_2a0;
          uStack_330 = uStack_2a8;
          uVar7 = uStack_330;
          fStack_23c = fStack_2a0;
          uStack_330._0_4_ = (undefined4)uStack_2a8;
          uStack_330._4_4_ = (undefined4)((ulonglong)uStack_2a8 >> 0x20);
          uStack_24c = uStack_360;
          fStack_248 = fStack_294;
          uStack_244 = (undefined4)uStack_330;
          uStack_240 = uStack_330._4_4_;
          fStack_254 = fStack_2a0;
          uStack_250 = uStack_364;
          fStack_388 = fStack_2ac;
          uStack_390 = CONCAT44(fStack_2b0,fStack_2b4);
          uStack_33c = uStack_364;
          uStack_338 = uStack_360;
          uStack_25c = (undefined4)uStack_330;
          uStack_258 = uStack_330._4_4_;
          uStack_330 = uVar7;
          pdb_141473710(&uStack_348,&uStack_238,&uStack_390,&uStack_380);
          fStack_368 = fStack_294;
          uStack_370 = uStack_29c;
          fStack_304 = fStack_350;
          uStack_314 = uStack_360;
          fStack_310 = fStack_35c;
          uStack_30c = (undefined4)uStack_358;
          uStack_308 = (undefined4)((ulonglong)uStack_358 >> 0x20);
          uStack_324 = (undefined4)uStack_29c;
          uStack_320 = (undefined4)((ulonglong)uStack_29c >> 0x20);
          fStack_31c = fStack_294;
          uStack_318 = uStack_364;
          uStack_130 = CONCAT44(fStack_274,fStack_278);
          uStack_128 = CONCAT44(fStack_26c,uStack_270);
          uStack_118 = CONCAT44(uStack_25c,fStack_260);
          uStack_110 = CONCAT44(fStack_254,uStack_258);
          uStack_108 = CONCAT44(uStack_24c,uStack_250);
          uStack_100 = CONCAT44(uStack_244,fStack_248);
          uStack_138 = uStack_280;
          uStack_120 = uStack_268;
          uStack_f8 = CONCAT44(fStack_23c,uStack_240);
          uStack_148 = CONCAT44(fStack_350,uStack_308);
          uStack_158 = uStack_364;
          uStack_154 = uStack_360;
          fStack_150 = fStack_35c;
          uStack_14c = uStack_30c;
          fStack_168 = fStack_328;
          uStack_164 = uStack_324;
          uStack_160 = uStack_320;
          fStack_15c = fStack_294;
          uStack_178 = uStack_338;
          fStack_174 = fStack_334;
          uStack_170 = (undefined4)uStack_330;
          uStack_16c = uStack_330._4_4_;
          uStack_188 = (undefined4)uStack_348;
          uStack_184 = uStack_348._4_4_;
          fStack_180 = fStack_340;
          uStack_17c = uStack_33c;
          lVar13 = param_3[2];
          if (lVar13 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar6 = param_3[1];
          *(undefined4 *)(lVar6 + 0x20 + lVar13 * 0x24) = (undefined4)uStack_118;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar13 * 0x24);
          *puVar1 = (undefined4)uStack_128;
          puVar1[1] = uStack_128._4_4_;
          puVar1[2] = (undefined4)uStack_120;
          puVar1[3] = uStack_120._4_4_;
          puVar1 = (undefined4 *)(lVar6 + lVar13 * 0x24);
          *puVar1 = (undefined4)uStack_138;
          puVar1[1] = uStack_138._4_4_;
          puVar1[2] = (undefined4)uStack_130;
          puVar1[3] = uStack_130._4_4_;
          lVar6 = lVar13 + 1;
          param_3[2] = lVar6;
          if (lVar6 == *param_3) {
            pdb_142d91b00(param_3);
          }
          lVar11 = param_3[1];
          *(float *)(lVar11 + 0x20 + lVar6 * 0x24) = fStack_168;
          uVar15 = uStack_188;
          uVar18 = uStack_184;
          fVar17 = fStack_180;
          uVar19 = uStack_17c;
          uVar20 = uStack_178;
          fVar23 = fStack_174;
          uVar21 = uStack_170;
          uVar22 = uStack_16c;
        }
        puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar6 * 0x24);
        *puVar1 = uVar20;
        puVar1[1] = fVar23;
        puVar1[2] = uVar21;
        puVar1[3] = uVar22;
        puVar1 = (undefined4 *)(lVar11 + lVar6 * 0x24);
        *puVar1 = uVar15;
        puVar1[1] = uVar18;
        puVar1[2] = fVar17;
        puVar1[3] = uVar19;
        param_3[2] = lVar13 + 2;
      }
LAB_141b2e364:
      pfVar12 = pfVar12 + 0x1f;
      lVar14 = lVar14 + -0x7c;
    } while (lVar14 != 0);
  }
  return;
}

