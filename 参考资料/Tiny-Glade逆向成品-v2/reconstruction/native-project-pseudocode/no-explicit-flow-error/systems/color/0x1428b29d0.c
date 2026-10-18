// VA 0x1428b29d0, PDB extent 1658 bytes
// system_color::style_picker_feedback::position_sample_icons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_picker_feedback::position_sample_icons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
   Extent: 1658 */

void pdb_1428b29d0(undefined8 *param_1,float param_2,longlong *param_3)

{
  ulonglong *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *in_RDX;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong lStack_238;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1c8;
  uint *puStack_190;
  uint *puStack_188;
  longlong lStack_170;
  longlong lStack_160;
  longlong lStack_150;
  undefined4 uStack_144;
  longlong lStack_140;
  longlong lStack_130;
  undefined4 uStack_124;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_108;
  undefined4 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  byte bStack_f0;
  
  lVar3 = *param_3;
  lVar4 = param_3[1];
  pdb_1428a3be0(&puStack_190,lVar4,lVar3,(int)param_3[2],*(undefined4 *)((longlong)param_3 + 0x14));
  fVar14 = _DAT_1435ae284;
  fVar13 = _DAT_1435ae280;
  fVar12 = _DAT_14304abd4;
  fVar11 = _DAT_142f6d800;
  fVar10 = _DAT_142f57bc4;
  fVar9 = _DAT_142e382c8;
  fVar8 = _DAT_142e37880;
  fVar7 = _DAT_142e37844;
  lStack_1c8 = lStack_170;
  lStack_200 = lStack_160;
  lStack_208 = lStack_150;
  lStack_210 = lStack_140;
  lStack_218 = lStack_130;
  lStack_238 = lStack_120;
  lStack_220 = lStack_118;
  lStack_228 = lStack_108;
  pfVar5 = (float *)*param_1;
  uVar6 = *in_RDX;
  uVar21 = (ulonglong)uStack_f8;
  do {
    if ((bStack_f0 & 1) == 0) {
      if (uStack_f4 == (uint)uVar21) {
        if (puStack_190 == puStack_188) {
          return;
        }
        while( true ) {
          uVar21 = *(ulonglong *)
                    (*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puStack_190 * 0xa0);
          if (uVar21 != 0) break;
          puStack_190 = puStack_190 + 1;
          if (puStack_190 == puStack_188) {
            return;
          }
        }
        lVar16 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puStack_190 * 0xa0;
        uVar15 = (ulonglong)*(uint *)(lVar16 + 0x94);
        lVar17 = *(longlong *)(lVar4 + 0x1a0);
        lVar18 = lVar17 + uVar15 * 0x48;
        lVar19 = *(longlong *)(lVar17 + 0x38 + uVar15 * 0x48);
        if (*(ulonglong *)(lVar3 + 0x110) < *(ulonglong *)(lVar17 + 0x40 + uVar15 * 0x48)) {
          uVar15 = *(ulonglong *)(lVar19 + *(ulonglong *)(lVar3 + 0x110) * 8);
          lVar18 = *(longlong *)(lVar18 + 0x18);
          if (uVar15 == 0) goto LAB_1428b2e1f;
          lStack_238 = *(longlong *)(lVar18 + 0x10 + ~uVar15 * 0x30);
        }
        else {
          lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1428b2e1f:
          lStack_238 = 0;
        }
        puStack_190 = puStack_190 + 1;
        lVar17 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar3 + 0x118) * 8) * 0x30;
        lStack_200 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_208 = *(longlong *)(lVar18 + 0x28 + lVar17);
        lVar17 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar3 + 0x120) * 8) * 0x30;
        lStack_210 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_218 = *(longlong *)(lVar18 + 0x28 + lVar17);
        lVar17 = ~*(ulonglong *)(lVar19 + *(longlong *)(lVar3 + 0x128) * 8) * 0x30;
        lStack_220 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_228 = *(longlong *)(lVar18 + 0x28 + lVar17);
        lStack_1c8 = *(longlong *)(lVar16 + 0x50);
        uStack_f4 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = (ulonglong)uStack_f4;
      }
      uVar20 = uStack_f4;
      uStack_f4 = ~*(uint *)(lStack_1c8 + 8 + uVar15 * 0x10);
    }
    else {
      uVar20 = uStack_f4;
      if (uStack_f4 == (uint)uVar21) {
        if (puStack_190 == puStack_188) {
          return;
        }
        while( true ) {
          uVar21 = *(ulonglong *)
                    (*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)*puStack_190 * 0x48);
          if (uVar21 != 0) break;
          puStack_190 = puStack_190 + 1;
          if (puStack_190 == puStack_188) {
            return;
          }
        }
        lVar18 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)*puStack_190 * 0x48;
        lVar17 = *(longlong *)(lVar18 + 0x38);
        if (*(ulonglong *)(lVar3 + 0x110) < *(ulonglong *)(lVar18 + 0x40)) {
          uVar15 = *(ulonglong *)(lVar17 + *(ulonglong *)(lVar3 + 0x110) * 8);
          lVar18 = *(longlong *)(lVar18 + 0x18);
          if (uVar15 == 0) goto LAB_1428b2d81;
          lStack_238 = *(longlong *)(lVar18 + 0x10 + ~uVar15 * 0x30);
        }
        else {
          lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1428b2d81:
          lStack_238 = 0;
        }
        puStack_190 = puStack_190 + 1;
        lVar19 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar3 + 0x118) * 8) * 0x30;
        lStack_200 = *(longlong *)(lVar18 + 0x10 + lVar19);
        lStack_208 = *(longlong *)(lVar18 + 0x28 + lVar19);
        lVar19 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar3 + 0x120) * 8) * 0x30;
        lStack_210 = *(longlong *)(lVar18 + 0x10 + lVar19);
        lStack_218 = *(longlong *)(lVar18 + 0x28 + lVar19);
        lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar3 + 0x128) * 8) * 0x30;
        lStack_220 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_228 = *(longlong *)(lVar18 + 0x28 + lVar17);
        uVar20 = 0;
        uStack_f4 = uVar20;
      }
    }
    uVar22 = (ulonglong)uStack_f4;
    puVar1 = (ulonglong *)(lStack_238 + uVar22 * 0x10);
    pfVar23 = (float *)(uVar22 * 0x10 + lStack_200);
    lVar18 = lStack_210 + uVar22 * 0x24;
    fVar2 = *pfVar5;
    fVar27 = pfVar5[1];
    fVar24 = (float)pdb_140a6ad50(uVar6);
    uVar15 = puVar1[1];
    fVar26 = (float)((uVar15 - 1) + (ulonglong)(uVar15 == 0)) * fVar12 + fVar7;
    fVar25 = fVar2 + fVar13;
    if ((fVar24 < fVar25 + fVar26) && (fVar25 = (fVar2 - fVar26) + fVar14, fVar25 <= fVar8)) {
      fVar25 = fVar8;
    }
    fVar27 = fVar27 + fVar10;
    param_2 = param_2 + fVar11;
    if (param_2 <= fVar9) {
      param_2 = fVar9;
    }
    uStack_f4 = uVar20 + 1;
    if (param_2 <= fVar27) {
      fVar27 = param_2;
    }
    fVar25 = fVar25 + (float)*puVar1 * fVar12;
    *(undefined4 *)(lStack_208 + uVar22 * 4) = uStack_144;
    *pfVar23 = fVar25;
    pfVar23[1] = fVar27;
    *(float *)(lVar18 + 8) = fVar25;
    *(float *)(lVar18 + 0xc) = fVar27;
    *(undefined4 *)(lStack_218 + uVar22 * 4) = uStack_124;
    *(float *)(lVar18 + 0x10) = fVar25;
    *(float *)(lVar18 + 0x14) = fVar27;
    *(undefined4 *)(lStack_228 + uVar22 * 4) = uStack_fc;
    *(undefined8 *)(lStack_220 + uVar22 * 8) = 2;
  } while( true );
}

