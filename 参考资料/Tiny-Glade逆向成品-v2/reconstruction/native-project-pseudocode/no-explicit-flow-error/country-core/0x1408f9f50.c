// VA 0x1408f9f50, PDB extent 2481 bytes
// country_core::systems::backend::update_material_args::material_update_duck
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_duck
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 2481 */

void pdb_1408f9f50(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_300;
  longlong lStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  uint *puStack_258;
  uint *puStack_250;
  longlong lStack_238;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  byte bStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  pdb_141523b80(&puStack_258,lVar3,lVar2,(int)param_2[2],*(undefined4 *)((longlong)param_2 + 0x14));
  fVar9 = _DAT_142e36f28;
  lStack_300 = lStack_238;
  lStack_310 = lStack_228;
  lStack_318 = lStack_220;
  lStack_320 = lStack_218;
  lStack_328 = lStack_208;
  lStack_330 = lStack_200;
  lStack_338 = lStack_1f8;
  lStack_340 = lStack_1f0;
  lStack_348 = lStack_1e8;
  uVar17 = (ulonglong)uStack_1e0;
  plVar4 = (longlong *)*param_1;
  lStack_278 = lVar3;
  lStack_270 = lVar3 + 0x198;
  lStack_268 = lVar3 + 0xf8;
  lStack_260 = lVar2;
  do {
    if ((bStack_1d8 & 1) == 0) {
      if (uStack_1dc == (uint)uVar17) {
        if (puStack_258 == puStack_250) {
          return;
        }
        while( true ) {
          uVar17 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)*puStack_258 * 0xa0);
          if (uVar17 != 0) break;
          puStack_258 = puStack_258 + 1;
          if (puStack_258 == puStack_250) {
            return;
          }
        }
        lVar12 = *(longlong *)(lVar3 + 0x100) + (ulonglong)*puStack_258 * 0xa0;
        uVar14 = (ulonglong)*(uint *)(lVar12 + 0x94);
        lVar13 = *(longlong *)(lVar3 + 0x1a0);
        uVar11 = *(ulonglong *)(lVar13 + 0x40 + uVar14 * 0x48);
        lVar16 = *(longlong *)(lVar13 + 0x18 + uVar14 * 0x48);
        lVar13 = *(longlong *)(lVar13 + 0x38 + uVar14 * 0x48);
        if ((*(ulonglong *)(lVar2 + 0x118) < uVar11) &&
           (uVar14 = *(ulonglong *)(lVar13 + *(ulonglong *)(lVar2 + 0x118) * 8), uVar14 != 0)) {
          lStack_328 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar11 <= uVar14) goto LAB_1408fa70d;
LAB_1408fa698:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa70d;
          lStack_330 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar14 < uVar11) goto LAB_1408fa722;
LAB_1408fa797:
          lStack_338 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x130);
          if (uVar11 <= uVar14) goto LAB_1408fa818;
LAB_1408fa7ac:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa818;
          lStack_340 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x138);
          if (uVar14 < uVar11) goto LAB_1408fa82d;
LAB_1408fa84d:
          lStack_348 = 0;
        }
        else {
          lStack_328 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar14 < uVar11) goto LAB_1408fa698;
LAB_1408fa70d:
          lStack_330 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar11 <= uVar14) goto LAB_1408fa797;
LAB_1408fa722:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa797;
          lStack_338 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x130);
          if (uVar14 < uVar11) goto LAB_1408fa7ac;
LAB_1408fa818:
          lStack_340 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x138);
          if (uVar11 <= uVar14) goto LAB_1408fa84d;
LAB_1408fa82d:
          uVar11 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar11 == 0) goto LAB_1408fa84d;
          lStack_348 = *(longlong *)(lVar16 + 0x10 + ~uVar11 * 0x30);
        }
        lVar13 = ~*(ulonglong *)(lVar13 + *(longlong *)(lVar2 + 0x110) * 8) * 0x30;
        lStack_310 = *(longlong *)(lVar16 + 0x10 + lVar13);
        lStack_318 = *(longlong *)(lVar16 + 0x20 + lVar13);
        lStack_320 = *(longlong *)(lVar16 + 0x28 + lVar13);
        puStack_258 = puStack_258 + 1;
        lStack_300 = *(longlong *)(lVar12 + 0x50);
        uStack_1dc = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = (ulonglong)uStack_1dc;
      }
      uVar5 = ~*(uint *)(lStack_300 + 8 + uVar11 * 0x10);
    }
    else {
      uVar5 = uStack_1dc;
      if (uStack_1dc == (uint)uVar17) {
        if (puStack_258 == puStack_250) {
          return;
        }
        while( true ) {
          uVar17 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)*puStack_258 * 0x48);
          if (uVar17 != 0) break;
          puStack_258 = puStack_258 + 1;
          if (puStack_258 == puStack_250) {
            return;
          }
        }
        lVar13 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*puStack_258 * 0x48;
        uVar11 = *(ulonglong *)(lVar13 + 0x40);
        lVar16 = *(longlong *)(lVar13 + 0x18);
        lVar13 = *(longlong *)(lVar13 + 0x38);
        if ((*(ulonglong *)(lVar2 + 0x118) < uVar11) &&
           (uVar14 = *(ulonglong *)(lVar13 + *(ulonglong *)(lVar2 + 0x118) * 8), uVar14 != 0)) {
          lStack_328 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar11 <= uVar14) goto LAB_1408fa6c8;
LAB_1408fa653:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa6c8;
          lStack_330 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar14 < uVar11) goto LAB_1408fa6dd;
LAB_1408fa752:
          lStack_338 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x130);
          if (uVar11 <= uVar14) goto LAB_1408fa7d8;
LAB_1408fa767:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa7d8;
          lStack_340 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x138);
          if (uVar14 < uVar11) goto LAB_1408fa7f1;
LAB_1408fa0c5:
          lStack_348 = 0;
        }
        else {
          lStack_328 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar14 < uVar11) goto LAB_1408fa653;
LAB_1408fa6c8:
          lStack_330 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar11 <= uVar14) goto LAB_1408fa752;
LAB_1408fa6dd:
          uVar14 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar14 == 0) goto LAB_1408fa752;
          lStack_338 = *(longlong *)(lVar16 + 0x10 + ~uVar14 * 0x30);
          uVar14 = *(ulonglong *)(lVar2 + 0x130);
          if (uVar14 < uVar11) goto LAB_1408fa767;
LAB_1408fa7d8:
          lStack_340 = 0;
          uVar14 = *(ulonglong *)(lVar2 + 0x138);
          if (uVar11 <= uVar14) goto LAB_1408fa0c5;
LAB_1408fa7f1:
          uVar11 = *(ulonglong *)(lVar13 + uVar14 * 8);
          if (uVar11 == 0) goto LAB_1408fa0c5;
          lStack_348 = *(longlong *)(lVar16 + 0x10 + ~uVar11 * 0x30);
        }
        lVar13 = ~*(ulonglong *)(lVar13 + *(longlong *)(lVar2 + 0x110) * 8) * 0x30;
        lStack_310 = *(longlong *)(lVar16 + 0x10 + lVar13);
        lStack_318 = *(longlong *)(lVar16 + 0x20 + lVar13);
        lStack_320 = *(longlong *)(lVar16 + 0x28 + lVar13);
        puStack_258 = puStack_258 + 1;
        uStack_1dc = 0;
        uVar5 = uStack_1dc;
      }
    }
    uVar11 = (ulonglong)uVar5;
    lStack_2e0 = lStack_310 + uVar11 * 8;
    lStack_2d8 = lStack_318 + uVar11 * 4;
    lStack_2d0 = lStack_320 + uVar11 * 4;
    lStack_2c0 = uVar11 * 0x38 + lStack_328;
    pfVar10 = (float *)(lStack_330 + uVar11 * 0x30);
    pfVar15 = (float *)(uVar11 * 0x30 + lStack_338);
    lVar16 = uVar11 * 0x100 + lStack_340;
    uStack_1dc = uStack_1dc + 1;
    uStack_2c8 = uStack_210;
    lVar13 = *plVar4;
    fStack_29c = (float)*(undefined8 *)(pfVar10 + 8);
    fStack_28c = (float)((ulonglong)*(undefined8 *)(pfVar10 + 8) >> 0x20);
    fVar6 = *pfVar10;
    fVar7 = pfVar10[1];
    fVar8 = pfVar10[3];
    fStack_288 = pfVar10[4];
    fStack_284 = pfVar10[5];
    fStack_280 = pfVar10[6];
    fVar1 = pfVar10[2];
    fVar24 = fVar1 + fVar1;
    fVar18 = fVar7 + fVar7;
    fVar22 = fVar6 * (fVar6 + fVar6);
    fVar19 = (fVar6 + fVar6) * fVar8;
    fVar23 = fVar24 * fVar6 - fVar18 * fVar8;
    fVar20 = fVar19 + fVar24 * fVar7;
    fVar21 = fVar9 - (fVar22 + fVar7 * fVar18);
    fStack_2ac = pfVar10[7];
    fStack_2b8 = fStack_2ac * (fVar9 - (fVar7 * fVar18 + fVar1 * fVar24));
    fStack_2b4 = fStack_2ac * (fVar18 * fVar6 + fVar8 * fVar24);
    fStack_2b0 = fStack_2ac * fVar23;
    fStack_2ac = fStack_2ac * fVar23;
    fStack_2a8 = fStack_29c * (fVar18 * fVar6 - fVar8 * fVar24);
    fStack_2a4 = fStack_29c * (fVar9 - (fVar1 * fVar24 + fVar22));
    fStack_2a0 = fStack_29c * fVar20;
    fStack_29c = fStack_29c * fVar20;
    fStack_298 = fStack_28c * (fVar18 * fVar8 + fVar24 * fVar6);
    fStack_294 = fStack_28c * (fVar24 * fVar7 - fVar19);
    fStack_290 = fStack_28c * fVar21;
    fStack_28c = fStack_28c * fVar21;
    fStack_27c = fStack_280;
    pdb_140e07fe0(&uStack_1d0,&fStack_2b8);
    fStack_29c = (float)*(undefined8 *)(pfVar15 + 8);
    fStack_28c = (float)((ulonglong)*(undefined8 *)(pfVar15 + 8) >> 0x20);
    fVar6 = *pfVar15;
    fVar7 = pfVar15[1];
    fVar8 = pfVar15[3];
    fStack_288 = pfVar15[4];
    fStack_284 = pfVar15[5];
    fStack_280 = pfVar15[6];
    fVar1 = pfVar15[2];
    fVar24 = fVar1 + fVar1;
    fVar18 = fVar7 + fVar7;
    fVar22 = fVar6 * (fVar6 + fVar6);
    fVar19 = (fVar6 + fVar6) * fVar8;
    fVar23 = fVar24 * fVar6 - fVar18 * fVar8;
    fVar20 = fVar19 + fVar24 * fVar7;
    fVar21 = fVar9 - (fVar22 + fVar7 * fVar18);
    fStack_2ac = pfVar15[7];
    fStack_2b8 = fStack_2ac * (fVar9 - (fVar7 * fVar18 + fVar1 * fVar24));
    fStack_2b4 = fStack_2ac * (fVar18 * fVar6 + fVar8 * fVar24);
    fStack_2b0 = fStack_2ac * fVar23;
    fStack_2ac = fStack_2ac * fVar23;
    fStack_2a8 = fStack_29c * (fVar18 * fVar6 - fVar8 * fVar24);
    fStack_2a4 = fStack_29c * (fVar9 - (fVar1 * fVar24 + fVar22));
    fStack_2a0 = fStack_29c * fVar20;
    fStack_29c = fStack_29c * fVar20;
    fStack_298 = fStack_28c * (fVar18 * fVar8 + fVar24 * fVar6);
    fStack_294 = fStack_28c * (fVar24 * fVar7 - fVar19);
    fStack_290 = fStack_28c * fVar21;
    fStack_28c = fStack_28c * fVar21;
    fStack_27c = fStack_280;
    pdb_140e07fe0(&uStack_170,&fStack_2b8);
    uStack_c0 = *(undefined4 *)(lVar16 + 0xf8);
    uStack_180 = uStack_150;
    uStack_178 = uStack_148;
    uStack_190 = uStack_160;
    uStack_188 = uStack_158;
    uStack_1a0 = uStack_170;
    uStack_198 = uStack_168;
    puStack_140 = &UNK_14301d840;
    uStack_138 = 0x31;
    uStack_e0 = uStack_150;
    uStack_d8 = uStack_148;
    uStack_f0 = uStack_160;
    uStack_e8 = uStack_158;
    uStack_100 = uStack_170;
    uStack_f8 = uStack_168;
    uStack_110 = uStack_1b0;
    uStack_10c = uStack_1ac;
    uStack_108 = uStack_1a8;
    uStack_104 = uStack_1a4;
    uStack_120 = uStack_1c0;
    uStack_11c = uStack_1bc;
    uStack_118 = uStack_1b8;
    uStack_114 = uStack_1b4;
    uStack_130 = uStack_1d0;
    uStack_128 = uStack_1c8;
    uStack_d0 = *(undefined8 *)(lVar16 + 0xf0);
    uStack_c8 = (uint)(*(byte *)(lStack_348 + uVar11) < 2);
    uStack_c4 = (uint)(*(byte *)(lStack_348 + uVar11) == 3);
    uStack_bc = (uint)*(byte *)(lVar16 + 0xfc);
    pdb_1416c8730(&lStack_2e0,lVar13 + 0x10,&puStack_140);
  } while( true );
}

