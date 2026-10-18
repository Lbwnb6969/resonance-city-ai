// VA 0x1408fc620, PDB extent 1635 bytes
// country_core::systems::backend::update_material_args::material_update_arrow_gizmos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_arrow_gizmos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 1635 */

void pdb_1408fc620(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  undefined8 uStack_c0;
  
  lVar3 = *param_2;
  lVar4 = param_2[1];
  pdb_141523940(&puStack_1f0,lVar4,lVar3,(int)param_2[2],*(undefined4 *)((longlong)param_2 + 0x14));
  fVar11 = _DAT_142e36f28;
  lStack_250 = lStack_1d0;
  lStack_260 = lStack_1c0;
  lStack_268 = lStack_1a0;
  lStack_270 = lStack_198;
  lStack_278 = lStack_190;
  uVar17 = (ulonglong)uStack_188;
  plVar5 = (longlong *)*param_1;
  lStack_210 = lVar4;
  lStack_208 = lVar4 + 0x198;
  lStack_200 = lVar4 + 0xf8;
  lStack_1f8 = lVar3;
  do {
    if ((bStack_180 & 1) == 0) {
      if (uStack_184 == (uint)uVar17) {
        if (puStack_1f0 == puStack_1e8) {
          return;
        }
        while( true ) {
          uVar17 = *(ulonglong *)
                    (*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puStack_1f0 * 0xa0);
          if (uVar17 != 0) break;
          puStack_1f0 = puStack_1f0 + 1;
          if (puStack_1f0 == puStack_1e8) {
            return;
          }
        }
        lVar14 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puStack_1f0 * 0xa0;
        uVar16 = (ulonglong)*(uint *)(lVar14 + 0x94);
        lVar15 = *(longlong *)(lVar4 + 0x1a0);
        uVar13 = *(ulonglong *)(lVar15 + 0x40 + uVar16 * 0x48);
        lVar6 = *(longlong *)(lVar15 + 0x18 + uVar16 * 0x48);
        lVar15 = *(longlong *)(lVar15 + 0x38 + uVar16 * 0x48);
        if ((*(ulonglong *)(lVar3 + 0x118) < uVar13) &&
           (uVar16 = *(ulonglong *)(lVar15 + *(ulonglong *)(lVar3 + 0x118) * 8), uVar16 != 0)) {
          lStack_268 = *(longlong *)(lVar6 + 0x10 + ~uVar16 * 0x30);
          uVar16 = *(ulonglong *)(lVar3 + 0x120);
          if (uVar13 <= uVar16) goto LAB_1408fcba3;
LAB_1408fcb37:
          uVar16 = *(ulonglong *)(lVar15 + uVar16 * 8);
          if (uVar16 == 0) goto LAB_1408fcba3;
          lStack_270 = *(longlong *)(lVar6 + 0x10 + ~uVar16 * 0x30);
          uVar16 = *(ulonglong *)(lVar3 + 0x128);
          if (uVar16 < uVar13) goto LAB_1408fcbb8;
LAB_1408fcbd8:
          lStack_278 = 0;
        }
        else {
          lStack_268 = 0;
          uVar16 = *(ulonglong *)(lVar3 + 0x120);
          if (uVar16 < uVar13) goto LAB_1408fcb37;
LAB_1408fcba3:
          lStack_270 = 0;
          uVar16 = *(ulonglong *)(lVar3 + 0x128);
          if (uVar13 <= uVar16) goto LAB_1408fcbd8;
LAB_1408fcbb8:
          uVar13 = *(ulonglong *)(lVar15 + uVar16 * 8);
          if (uVar13 == 0) goto LAB_1408fcbd8;
          lStack_278 = *(longlong *)(lVar6 + 0x10 + ~uVar13 * 0x30);
        }
        lVar15 = ~*(ulonglong *)(lVar15 + *(longlong *)(lVar3 + 0x110) * 8) * 0x30;
        lStack_260 = *(longlong *)(lVar6 + 0x10 + lVar15);
        lStack_1b8 = *(longlong *)(lVar6 + 0x20 + lVar15);
        lStack_1b0 = *(longlong *)(lVar6 + 0x28 + lVar15);
        puStack_1f0 = puStack_1f0 + 1;
        lStack_250 = *(longlong *)(lVar14 + 0x50);
        uStack_184 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)uStack_184;
      }
      uVar7 = ~*(uint *)(lStack_250 + 8 + uVar13 * 0x10);
    }
    else {
      uVar7 = uStack_184;
      if (uStack_184 == (uint)uVar17) {
        if (puStack_1f0 == puStack_1e8) {
          return;
        }
        while( true ) {
          uVar17 = *(ulonglong *)
                    (*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)*puStack_1f0 * 0x48);
          if (uVar17 != 0) break;
          puStack_1f0 = puStack_1f0 + 1;
          if (puStack_1f0 == puStack_1e8) {
            return;
          }
        }
        lVar15 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)*puStack_1f0 * 0x48;
        uVar13 = *(ulonglong *)(lVar15 + 0x40);
        lVar6 = *(longlong *)(lVar15 + 0x18);
        lVar15 = *(longlong *)(lVar15 + 0x38);
        if ((*(ulonglong *)(lVar3 + 0x118) < uVar13) &&
           (uVar16 = *(ulonglong *)(lVar15 + *(ulonglong *)(lVar3 + 0x118) * 8), uVar16 != 0)) {
          lStack_268 = *(longlong *)(lVar6 + 0x10 + ~uVar16 * 0x30);
          uVar16 = *(ulonglong *)(lVar3 + 0x120);
          if (uVar13 <= uVar16) goto LAB_1408fcb63;
LAB_1408fcaf2:
          uVar16 = *(ulonglong *)(lVar15 + uVar16 * 8);
          if (uVar16 == 0) goto LAB_1408fcb63;
          lStack_270 = *(longlong *)(lVar6 + 0x10 + ~uVar16 * 0x30);
          uVar16 = *(ulonglong *)(lVar3 + 0x128);
          if (uVar16 < uVar13) goto LAB_1408fcb7c;
LAB_1408fc76a:
          lStack_278 = 0;
        }
        else {
          lStack_268 = 0;
          uVar16 = *(ulonglong *)(lVar3 + 0x120);
          if (uVar16 < uVar13) goto LAB_1408fcaf2;
LAB_1408fcb63:
          lStack_270 = 0;
          uVar16 = *(ulonglong *)(lVar3 + 0x128);
          if (uVar13 <= uVar16) goto LAB_1408fc76a;
LAB_1408fcb7c:
          uVar13 = *(ulonglong *)(lVar15 + uVar16 * 8);
          if (uVar13 == 0) goto LAB_1408fc76a;
          lStack_278 = *(longlong *)(lVar6 + 0x10 + ~uVar13 * 0x30);
        }
        lVar15 = ~*(ulonglong *)(lVar15 + *(longlong *)(lVar3 + 0x110) * 8) * 0x30;
        lStack_260 = *(longlong *)(lVar6 + 0x10 + lVar15);
        lStack_1b8 = *(longlong *)(lVar6 + 0x20 + lVar15);
        lStack_1b0 = *(longlong *)(lVar6 + 0x28 + lVar15);
        puStack_1f0 = puStack_1f0 + 1;
        uStack_184 = 0;
        uVar7 = uStack_184;
      }
    }
    uVar13 = (ulonglong)uVar7;
    lStack_238 = lStack_260 + uVar13 * 8;
    lStack_230 = lStack_1b8 + uVar13 * 4;
    lStack_228 = lStack_1b0 + uVar13 * 4;
    lStack_218 = uVar13 * 0x38 + lStack_268;
    pfVar12 = (float *)(uVar13 * 0x30 + lStack_270);
    uStack_184 = uStack_184 + 1;
    uStack_220 = uStack_1a8;
    lVar15 = *plVar5;
    fStack_12c = (float)*(undefined8 *)(pfVar12 + 8);
    fStack_11c = (float)((ulonglong)*(undefined8 *)(pfVar12 + 8) >> 0x20);
    fVar8 = *pfVar12;
    fVar9 = pfVar12[1];
    fVar10 = pfVar12[3];
    fStack_118 = pfVar12[4];
    fStack_114 = pfVar12[5];
    fStack_110 = pfVar12[6];
    fVar1 = pfVar12[2];
    fVar24 = fVar1 + fVar1;
    fVar18 = fVar9 + fVar9;
    fVar22 = fVar8 * (fVar8 + fVar8);
    fVar19 = (fVar8 + fVar8) * fVar10;
    fVar23 = fVar24 * fVar8 - fVar18 * fVar10;
    fVar20 = fVar19 + fVar24 * fVar9;
    fVar21 = fVar11 - (fVar22 + fVar9 * fVar18);
    fStack_13c = pfVar12[7];
    fStack_148 = fStack_13c * (fVar11 - (fVar9 * fVar18 + fVar1 * fVar24));
    fStack_144 = fStack_13c * (fVar18 * fVar8 + fVar10 * fVar24);
    fStack_140 = fStack_13c * fVar23;
    fStack_13c = fStack_13c * fVar23;
    fStack_138 = fStack_12c * (fVar18 * fVar8 - fVar10 * fVar24);
    fStack_134 = fStack_12c * (fVar11 - (fVar1 * fVar24 + fVar22));
    fStack_130 = fStack_12c * fVar20;
    fStack_12c = fStack_12c * fVar20;
    fStack_128 = fStack_11c * (fVar18 * fVar10 + fVar24 * fVar8);
    fStack_124 = fStack_11c * (fVar24 * fVar9 - fVar19);
    fStack_120 = fStack_11c * fVar21;
    fStack_11c = fStack_11c * fVar21;
    fStack_10c = fStack_110;
    pdb_140e07fe0(&uStack_178,&fStack_148);
    uVar2 = *(undefined8 *)(lStack_278 + uVar13 * 8);
    puStack_100 = &UNK_14301d942;
    uStack_f8 = 0x2e;
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
    uStack_c0 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    pdb_1416c85b0(&lStack_238,lVar15 + 0x10,&puStack_100);
  } while( true );
}

