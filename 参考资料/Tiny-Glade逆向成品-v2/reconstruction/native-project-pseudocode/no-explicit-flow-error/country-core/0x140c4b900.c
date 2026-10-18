// VA 0x140c4b900, PDB extent 1609 bytes
// country_core::systems::ui_wall_transform_gizmos::moving_circle_segment_interval
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::moving_circle_segment_interval
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 1609 */

void pdb_140c4b900(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a4;
  undefined1 auVar12 [16];
  
  fVar14 = (float)param_4;
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar21 = _DAT_142e36f28 / SQRT(param_5 * param_5 + fVar14 * fVar14);
  if (0x7ffffe < (int)fVar21 - 1U && (0x7effffff < (int)ABS(fVar21) - 0x800000U || (int)fVar21 < 0))
  {
    *param_1 = 0;
    return;
  }
  fVar14 = fVar14 * fVar21;
  param_5 = param_5 * fVar21;
  auVar27._0_4_ = param_9 - param_7;
  auVar27._4_4_ = param_10 - param_8;
  auVar27._8_8_ = 0;
  fVar21 = SQRT(auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_);
  if (fVar21 <= _DAT_142e37934) {
    param_7 = (float)param_2 - param_7;
    param_8 = (float)param_3 - param_8;
    fVar15 = param_5 * param_5 + fVar14 * fVar14;
    if (fVar15 <= _DAT_142e37934) {
      uVar8 = 0;
      if (param_6 * param_6 < param_8 * param_8 + param_7 * param_7) goto LAB_140c4bcec;
    }
    else {
      fVar21 = param_5 * param_8 + fVar14 * param_7;
      fVar14 = fVar21 * fVar21 -
               ((param_8 * param_8 + param_7 * param_7) - param_6 * param_6) * fVar15;
      if (fVar14 < 0.0) {
LAB_140c4bcec:
        *param_1 = 0;
        return;
      }
      fVar14 = SQRT(fVar14);
      auVar23._0_4_ = (float)((uint)fVar21 ^ _DAT_142e37820) - fVar14;
      auVar23._4_4_ = fVar14 - fVar21;
      auVar23._8_4_ = _UNK_142e37824;
      auVar23._12_4_ = 0;
      auVar1._4_4_ = fVar15;
      auVar1._0_4_ = fVar15;
      auVar1._8_8_ = 0;
      auVar27 = divps(auVar23,auVar1);
      uVar8 = auVar27._0_8_;
    }
    *(undefined8 *)(param_1 + 1) = uVar8;
    *param_1 = 1;
    return;
  }
  auVar4._4_4_ = fVar21;
  auVar4._0_4_ = fVar21;
  auVar4._8_8_ = 0;
  auVar27 = divps(auVar27,auVar4);
  param_7 = (float)param_2 - param_7;
  param_8 = (float)param_3 - param_8;
  fVar28 = auVar27._0_4_;
  fVar29 = auVar27._4_4_;
  fVar30 = auVar27._8_4_;
  fVar32 = auVar27._12_4_;
  fVar22 = param_7 * fVar28 + param_8 * fVar29;
  fVar24 = param_5 * fVar29 + fVar14 * fVar28;
  auVar19._4_4_ = fVar24;
  auVar19._0_4_ = fVar22;
  fVar25 = fVar15 * fVar30 + (float)((ulonglong)param_4 >> 0x20) * fVar30;
  fVar26 = fVar32 * 0.0 + (float)((ulonglong)param_3 >> 0x20) * fVar32;
  fVar13 = fVar28 * param_8 - fVar29 * param_7;
  fVar14 = fVar28 * param_5 - fVar29 * fVar14;
  fVar28 = fVar14 * fVar14 + fVar24 * fVar24;
  fVar29 = fVar26 * fVar26 + fVar25 * fVar25;
  if (fVar28 <= _DAT_142e37934) {
    auVar19._8_4_ = fVar25;
    auVar19._12_4_ = fVar26;
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = (fVar22 - fVar21) * (fVar22 - fVar21) + fVar13 * fVar13;
    uStack_c8 = auVar20._0_8_;
    uVar8 = 0;
    uStack_d4 = 0;
    if (param_6 * param_6 < auVar20._0_4_) goto LAB_140c4bc7b;
    uStack_cc = 1;
    uStack_c8 = 0;
    uVar8 = 0;
    if (_DAT_142e37934 < (float)(_DAT_142e377e0 & (uint)fVar24)) goto LAB_140c4bc91;
LAB_140c4bd23:
    uStack_c8 = uVar8;
    uStack_c0 = 0;
    fStack_bc = 0.0;
    fStack_b8 = (float)(_DAT_142e377e0 & (uint)fVar24);
    if (0.0 <= fVar22) {
      fVar24 = _DAT_142f7737c;
      fVar15 = _DAT_143053cb0;
      if (fVar21 < fVar22) goto LAB_140c4be0a;
      goto LAB_140c4bd4b;
    }
  }
  else {
    fVar31 = fVar13 * fVar14;
    fVar32 = (fVar30 * fVar15 - fVar32 * fVar15) * (fVar30 * 0.0 - fVar32 * 0.0);
    fVar30 = fVar22 * fVar24 + fVar31;
    fVar25 = fVar25 * fVar26 + fVar32;
    uVar8 = CONCAT44(fVar30,fVar30);
    fVar15 = fVar30 * fVar30 - ((fVar22 * fVar22 + fVar13 * fVar13) - param_6 * param_6) * fVar28;
    if (0.0 <= fVar15) {
      fVar15 = SQRT(fVar15);
      auVar9._0_4_ = (float)((uint)fVar30 ^ _DAT_142e37820);
      auVar9._4_4_ = (uint)fVar30 ^ _UNK_142e37824;
      auVar9._8_4_ = (uint)fVar25 ^ _UNK_142e37828;
      auVar9._12_4_ = (uint)fVar25 ^ _UNK_142e3782c;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ - fVar15;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._8_4_ = auVar9._4_4_;
      auVar12._12_4_ = fVar30;
      auVar11._8_8_ = auVar12._8_8_;
      auVar11._4_4_ = fVar15 - fVar30;
      auVar11._0_4_ = auVar10._0_4_;
      auVar2._4_4_ = fVar28;
      auVar2._0_4_ = fVar28;
      auVar2._8_4_ = fVar29;
      auVar2._12_4_ = fVar29;
      auVar27 = divps(auVar11,auVar2);
      uVar8 = auVar27._0_8_;
    }
    fVar15 = fVar22 - fVar21;
    auVar16._4_4_ = fVar31;
    auVar16._0_4_ = fVar31;
    auVar16._8_4_ = fVar32;
    auVar16._12_4_ = fVar32;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar31 + fVar24 * fVar15;
    uStack_c8 = auVar17._0_8_;
    fVar15 = auVar17._0_4_ * auVar17._0_4_ -
             ((fVar15 * fVar15 + fVar13 * fVar13) - param_6 * param_6) * fVar28;
    if (fVar15 < 0.0) {
LAB_140c4bc7b:
      uStack_cc = 0;
      uStack_d4 = uVar8;
    }
    else {
      fVar15 = SQRT(fVar15);
      auVar18._0_4_ = (float)((uint)auVar17._0_4_ ^ _DAT_142e37820) - fVar15;
      auVar18._4_4_ = fVar15 - auVar17._0_4_;
      auVar18._8_4_ = (uint)fVar31 ^ _UNK_142e37824;
      auVar18._12_4_ = 0;
      auVar3._4_4_ = fVar28;
      auVar3._0_4_ = fVar28;
      auVar3._8_4_ = fVar29;
      auVar3._12_4_ = fVar29;
      auVar27 = divps(auVar18,auVar3);
      uStack_c8 = auVar27._0_8_;
      uStack_cc = 1;
      uStack_d4 = uVar8;
    }
    uVar8 = uStack_c8;
    if ((float)(_DAT_142e377e0 & (uint)fVar24) <= _DAT_142e37934) goto LAB_140c4bd23;
LAB_140c4bc91:
    fVar25 = (0.0 - fVar22) / fVar24;
    fVar24 = (fVar21 - fVar22) / fVar24;
    fVar15 = fVar24;
    if (fVar25 <= fVar24) {
      fVar15 = fVar25;
    }
    fVar15 = (float)(~-(uint)NAN(fVar25) & (uint)fVar15 | -(uint)NAN(fVar25) & (uint)fVar24);
    if (fVar24 <= fVar25) {
      fVar24 = fVar25;
    }
LAB_140c4bd4b:
    fStack_bc = (float)(_DAT_142e37820 ^ (uint)param_6);
    if ((float)(_DAT_142e377e0 & (uint)fVar14) <= _DAT_142e37934) {
      uStack_c0 = 0;
      fStack_b8 = fVar14;
      if (fVar13 < fStack_bc) goto LAB_140c4be02;
      fVar14 = _DAT_142f7737c;
      fVar21 = _DAT_143053cb0;
      if (param_6 < fVar13) goto LAB_140c4be0a;
    }
    else {
      fVar22 = (fStack_bc - fVar13) / fVar14;
      fVar14 = (param_6 - fVar13) / fVar14;
      fVar21 = fVar14;
      if (fVar22 <= fVar14) {
        fVar21 = fVar22;
      }
      fVar21 = (float)(~-(uint)NAN(fVar22) & (uint)fVar21 | -(uint)NAN(fVar22) & (uint)fVar14);
      if (fVar14 <= fVar22) {
        fVar14 = fVar22;
      }
    }
    fVar13 = fVar21;
    if (fVar21 <= fVar15) {
      fVar13 = fVar15;
    }
    fStack_bc = (float)(~-(uint)NAN(fVar15) & (uint)fVar13 | -(uint)NAN(fVar15) & (uint)fVar21);
    fVar15 = fVar14;
    if (fVar24 <= fVar14) {
      fVar15 = fVar24;
    }
    fStack_b8 = (float)(~-(uint)NAN(fVar24) & (uint)fVar15 | -(uint)NAN(fVar24) & (uint)fVar14);
    if (fStack_bc <= fStack_b8) {
      uStack_c0 = 1;
      goto LAB_140c4be0a;
    }
  }
LAB_140c4be02:
  uStack_c0 = 0;
LAB_140c4be0a:
  uStack_b0 = 2;
  uStack_a4 = 2;
  fVar15 = (float)param_1[1];
  fVar14 = (float)param_1[2];
  uVar6 = 0;
  lVar5 = 0;
  do {
    pfVar7 = (float *)((longlong)&uStack_d4 + lVar5 * 0xc + 4);
    lVar5 = lVar5 + 1;
    while (pfVar7[-2] == 0.0) {
      pfVar7 = pfVar7 + 3;
      lVar5 = lVar5 + 1;
      if (lVar5 == 4) goto LAB_140c4beeb;
    }
    if (pfVar7[-2] == 2.8026e-45) break;
    fVar21 = pfVar7[-1];
    fVar24 = *pfVar7;
    if ((char)uVar6 != '\0') {
      fVar13 = fVar21;
      if (fVar15 <= fVar21) {
        fVar13 = fVar15;
      }
      fVar22 = fVar24;
      if (fVar24 <= fVar14) {
        fVar22 = fVar14;
      }
      fVar21 = (float)(~-(uint)NAN(fVar15) & (uint)fVar13 | -(uint)NAN(fVar15) & (uint)fVar21);
      fVar24 = (float)(~-(uint)NAN(fVar14) & (uint)fVar22 | -(uint)NAN(fVar14) & (uint)fVar24);
    }
    fVar14 = fVar24;
    fVar15 = fVar21;
    uVar6 = 1;
  } while (lVar5 != 3);
LAB_140c4beeb:
  param_1[1] = fVar15;
  param_1[2] = fVar14;
  *param_1 = uVar6;
  return;
}

