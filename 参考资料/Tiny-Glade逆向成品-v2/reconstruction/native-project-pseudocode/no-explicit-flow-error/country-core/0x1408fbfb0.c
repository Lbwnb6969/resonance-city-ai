// VA 0x1408fbfb0, PDB extent 1633 bytes
// country_core::systems::backend::update_material_args::material_update_duck_splash
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_duck_splash
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 1633 */

void pdb_1408fbfb0(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_250;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  uint *puStack_1f0;
  uint *puStack_1e8;
  longlong lStack_1d0;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  uint uStack_188;
  uint uStack_184;
  byte bStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  pdb_141523940(&puStack_1f0,lVar3,lVar2,(int)param_2[2],*(undefined4 *)((longlong)param_2 + 0x14));
  fVar10 = _DAT_142e36f28;
  lStack_250 = lStack_1d0;
  lStack_260 = lStack_1c0;
  lStack_268 = lStack_1a0;
  lStack_270 = lStack_198;
  lStack_278 = lStack_190;
  uVar16 = (ulonglong)uStack_188;
  plVar4 = (longlong *)*param_1;
  lStack_210 = lVar3;
  lStack_208 = lVar3 + 0x198;
  lStack_200 = lVar3 + 0xf8;
  lStack_1f8 = lVar2;
  do {
    if ((bStack_180 & 1) == 0) {
      if (uStack_184 == (uint)uVar16) {
        if (puStack_1f0 == puStack_1e8) {
          return;
        }
        while( true ) {
          uVar16 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)*puStack_1f0 * 0xa0);
          if (uVar16 != 0) break;
          puStack_1f0 = puStack_1f0 + 1;
          if (puStack_1f0 == puStack_1e8) {
            return;
          }
        }
        lVar13 = *(longlong *)(lVar3 + 0x100) + (ulonglong)*puStack_1f0 * 0xa0;
        uVar15 = (ulonglong)*(uint *)(lVar13 + 0x94);
        lVar14 = *(longlong *)(lVar3 + 0x1a0);
        uVar12 = *(ulonglong *)(lVar14 + 0x40 + uVar15 * 0x48);
        lVar5 = *(longlong *)(lVar14 + 0x18 + uVar15 * 0x48);
        lVar14 = *(longlong *)(lVar14 + 0x38 + uVar15 * 0x48);
        if ((*(ulonglong *)(lVar2 + 0x118) < uVar12) &&
           (uVar15 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar2 + 0x118) * 8), uVar15 != 0)) {
          lStack_268 = *(longlong *)(lVar5 + 0x10 + ~uVar15 * 0x30);
          uVar15 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar12 <= uVar15) goto LAB_1408fc533;
LAB_1408fc4c7:
          uVar15 = *(ulonglong *)(lVar14 + uVar15 * 8);
          if (uVar15 == 0) goto LAB_1408fc533;
          lStack_270 = *(longlong *)(lVar5 + 0x10 + ~uVar15 * 0x30);
          uVar15 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar15 < uVar12) goto LAB_1408fc548;
LAB_1408fc568:
          lStack_278 = 0;
        }
        else {
          lStack_268 = 0;
          uVar15 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar15 < uVar12) goto LAB_1408fc4c7;
LAB_1408fc533:
          lStack_270 = 0;
          uVar15 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar12 <= uVar15) goto LAB_1408fc568;
LAB_1408fc548:
          uVar12 = *(ulonglong *)(lVar14 + uVar15 * 8);
          if (uVar12 == 0) goto LAB_1408fc568;
          lStack_278 = *(longlong *)(lVar5 + 0x10 + ~uVar12 * 0x30);
        }
        lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar2 + 0x110) * 8) * 0x30;
        lStack_260 = *(longlong *)(lVar5 + 0x10 + lVar14);
        lStack_1b8 = *(longlong *)(lVar5 + 0x20 + lVar14);
        lStack_1b0 = *(longlong *)(lVar5 + 0x28 + lVar14);
        puStack_1f0 = puStack_1f0 + 1;
        lStack_250 = *(longlong *)(lVar13 + 0x50);
        uStack_184 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = (ulonglong)uStack_184;
      }
      uVar6 = ~*(uint *)(lStack_250 + 8 + uVar12 * 0x10);
    }
    else {
      uVar6 = uStack_184;
      if (uStack_184 == (uint)uVar16) {
        if (puStack_1f0 == puStack_1e8) {
          return;
        }
        while( true ) {
          uVar16 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)*puStack_1f0 * 0x48);
          if (uVar16 != 0) break;
          puStack_1f0 = puStack_1f0 + 1;
          if (puStack_1f0 == puStack_1e8) {
            return;
          }
        }
        lVar14 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*puStack_1f0 * 0x48;
        uVar12 = *(ulonglong *)(lVar14 + 0x40);
        lVar5 = *(longlong *)(lVar14 + 0x18);
        lVar14 = *(longlong *)(lVar14 + 0x38);
        if ((*(ulonglong *)(lVar2 + 0x118) < uVar12) &&
           (uVar15 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar2 + 0x118) * 8), uVar15 != 0)) {
          lStack_268 = *(longlong *)(lVar5 + 0x10 + ~uVar15 * 0x30);
          uVar15 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar12 <= uVar15) goto LAB_1408fc4f3;
LAB_1408fc482:
          uVar15 = *(ulonglong *)(lVar14 + uVar15 * 8);
          if (uVar15 == 0) goto LAB_1408fc4f3;
          lStack_270 = *(longlong *)(lVar5 + 0x10 + ~uVar15 * 0x30);
          uVar15 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar15 < uVar12) goto LAB_1408fc50c;
LAB_1408fc0fa:
          lStack_278 = 0;
        }
        else {
          lStack_268 = 0;
          uVar15 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar15 < uVar12) goto LAB_1408fc482;
LAB_1408fc4f3:
          lStack_270 = 0;
          uVar15 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar12 <= uVar15) goto LAB_1408fc0fa;
LAB_1408fc50c:
          uVar12 = *(ulonglong *)(lVar14 + uVar15 * 8);
          if (uVar12 == 0) goto LAB_1408fc0fa;
          lStack_278 = *(longlong *)(lVar5 + 0x10 + ~uVar12 * 0x30);
        }
        lVar14 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar2 + 0x110) * 8) * 0x30;
        lStack_260 = *(longlong *)(lVar5 + 0x10 + lVar14);
        lStack_1b8 = *(longlong *)(lVar5 + 0x20 + lVar14);
        lStack_1b0 = *(longlong *)(lVar5 + 0x28 + lVar14);
        puStack_1f0 = puStack_1f0 + 1;
        uStack_184 = 0;
        uVar6 = uStack_184;
      }
    }
    uVar12 = (ulonglong)uVar6;
    lStack_238 = lStack_260 + uVar12 * 8;
    lStack_230 = lStack_1b8 + uVar12 * 4;
    lStack_228 = lStack_1b0 + uVar12 * 4;
    lStack_218 = uVar12 * 0x38 + lStack_268;
    pfVar11 = (float *)(uVar12 * 0x30 + lStack_270);
    uStack_184 = uStack_184 + 1;
    uStack_220 = uStack_1a8;
    lVar14 = *plVar4;
    fStack_12c = (float)*(undefined8 *)(pfVar11 + 8);
    fStack_11c = (float)((ulonglong)*(undefined8 *)(pfVar11 + 8) >> 0x20);
    fVar7 = *pfVar11;
    fVar8 = pfVar11[1];
    fVar9 = pfVar11[3];
    fStack_118 = pfVar11[4];
    fStack_114 = pfVar11[5];
    fStack_110 = pfVar11[6];
    fVar1 = pfVar11[2];
    fVar23 = fVar1 + fVar1;
    fVar17 = fVar8 + fVar8;
    fVar21 = fVar7 * (fVar7 + fVar7);
    fVar18 = (fVar7 + fVar7) * fVar9;
    fVar22 = fVar23 * fVar7 - fVar17 * fVar9;
    fVar19 = fVar18 + fVar23 * fVar8;
    fVar20 = fVar10 - (fVar21 + fVar8 * fVar17);
    fStack_13c = pfVar11[7];
    fStack_148 = fStack_13c * (fVar10 - (fVar8 * fVar17 + fVar1 * fVar23));
    fStack_144 = fStack_13c * (fVar17 * fVar7 + fVar9 * fVar23);
    fStack_140 = fStack_13c * fVar22;
    fStack_13c = fStack_13c * fVar22;
    fStack_138 = fStack_12c * (fVar17 * fVar7 - fVar9 * fVar23);
    fStack_134 = fStack_12c * (fVar10 - (fVar1 * fVar23 + fVar21));
    fStack_130 = fStack_12c * fVar19;
    fStack_12c = fStack_12c * fVar19;
    fStack_128 = fStack_11c * (fVar17 * fVar9 + fVar23 * fVar7);
    fStack_124 = fStack_11c * (fVar23 * fVar8 - fVar18);
    fStack_120 = fStack_11c * fVar20;
    fStack_11c = fStack_11c * fVar20;
    fStack_10c = fStack_110;
    pdb_140e07fe0(&uStack_178,&fStack_148);
    uStack_c0 = *(undefined4 *)(uVar12 * 0x10 + lStack_278 + 8);
    puStack_100 = &UNK_14301d918;
    uStack_f8 = 0x2a;
    uStack_d0 = uStack_158;
    uStack_cc = uStack_154;
    uStack_c8 = uStack_150;
    uStack_c4 = uStack_14c;
    uStack_e0 = uStack_168;
    uStack_dc = uStack_164;
    uStack_d8 = uStack_160;
    uStack_d4 = uStack_15c;
    uStack_f0 = uStack_178;
    uStack_ec = uStack_174;
    uStack_e8 = uStack_170;
    uStack_e4 = uStack_16c;
    pdb_1416c8430(&lStack_238,lVar14 + 0x10,&puStack_100);
  } while( true );
}

