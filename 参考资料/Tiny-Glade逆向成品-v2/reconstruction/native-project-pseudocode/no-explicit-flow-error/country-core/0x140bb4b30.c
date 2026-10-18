// VA 0x140bb4b30, PDB extent 805 bytes
// country_core::systems::ivy::ivy_grower::intersect_ivy_growth_w_wall_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ivy::ivy_grower::intersect_ivy_growth_w_wall_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
   Extent: 805 */

undefined4 *
pdb_140bb4b30(undefined4 *param_1,undefined8 *param_2,float param_3,float param_4,float param_5,
             float param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar9;
  uint uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float afStack_ac [3];
  undefined8 auStack_a0 [19];
  
  fVar12 = (float)*param_2;
  fVar15 = (float)((ulonglong)*param_2 >> 0x20);
  fVar14 = (float)param_2[1];
  fVar11 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar16 = (fVar12 + fVar14) * _DAT_142e36f60;
  fVar17 = (fVar15 + fVar11) * _UNK_142e36f64;
  fVar19 = fVar14 - fVar12;
  fVar20 = fVar11 - fVar15;
  fVar18 = fVar20 * fVar20 + fVar19 * fVar19;
  fVar23 = SQRT(fVar18);
  auVar7._4_4_ = fVar20;
  auVar7._0_4_ = fVar19;
  auVar7._8_8_ = 0;
  auVar8._4_4_ = fVar23;
  auVar8._0_4_ = fVar23;
  auVar8._8_8_ = 0;
  auVar8 = divps(auVar7,auVar8);
  fVar13 = auVar8._4_4_;
  fVar21 = (float)((uint)fVar13 ^ _DAT_142e37820);
  fVar22 = auVar8._0_4_;
  pdb_140dee740(afStack_ac,param_2,_DAT_142e36f38 * fVar23,_DAT_142f61030,_DAT_142e36f50 * fVar23,
                (param_4 - fVar17) * fVar22 + (param_3 - fVar16) * fVar21,
                (param_4 - fVar17) * fVar13 + (param_3 - fVar16) * fVar22,
                (param_6 - fVar17) * fVar22 + (param_5 - fVar16) * fVar21,
                (param_6 - fVar17) * fVar13 + (param_5 - fVar16) * fVar22);
  fVar3 = _DAT_142e36f28;
  if (afStack_ac[0]._0_1_ == '\0') {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)afStack_ac._4_8_;
    fVar4 = SUB84(afStack_ac._4_8_,4);
    auStack_a0[0] = CONCAT44((_DAT_142e36f28 / fVar23) * fVar20,(_DAT_142e36f28 / fVar23) * fVar19);
    pdb_140df4520(afStack_ac,auStack_a0);
    fVar23 = (float)afStack_ac._4_8_;
    fVar9 = SUB84(afStack_ac._4_8_,4);
    fVar5 = fVar9 * 0.0 +
            (float)((ulonglong)_DAT_143061380 >> 0x20) * fVar23 +
            (float)_DAT_143061380 * afStack_ac[0];
    fVar5 = (fVar5 + fVar5) * 0.0;
    if (fVar18 <= _DAT_143006dc0) {
      fVar18 = _DAT_143006dc0;
    }
    fVar18 = (((fVar17 + fVar13 * fVar4 + fVar22 * fVar2) - fVar15) * fVar20 +
             ((fVar16 + fVar22 * fVar4 + fVar21 * fVar2) - fVar12) * fVar19) / fVar18;
    fVar13 = 0.0;
    if (0.0 <= fVar18) {
      fVar13 = fVar18;
    }
    fVar18 = fVar3;
    if (fVar13 <= fVar3) {
      fVar18 = fVar13;
    }
    fVar13 = fVar14 * fVar18 + (fVar3 - fVar18) * fVar12;
    fVar14 = fVar11 * fVar18 + (fVar3 - fVar18) * fVar15;
    fVar11 = (afStack_ac[0] * 0.0 + fVar5 +
             (fVar23 * _UNK_1430613a8 + _UNK_143061398 * fVar9) * _DAT_1430613b0) * _DAT_14302c610 *
             _DAT_142e36f60;
    fVar12 = (fVar9 * 0.0 + fVar5 +
             (afStack_ac[0] * _UNK_1430613a4 + _UNK_143061394 * fVar23) * _UNK_1430613b4) *
             _UNK_14302c614 * _UNK_142e36f64;
    fVar3 = fVar13 - fVar11;
    fVar18 = fVar14 - fVar12;
    fVar11 = fVar11 + fVar13;
    fVar12 = fVar12 + fVar14;
    fVar13 = fVar3 - param_3;
    fVar14 = fVar18 - param_4;
    param_3 = fVar11 - param_3;
    param_4 = fVar12 - param_4;
    uVar10 = (uint)(fVar14 * fVar14 + fVar13 * fVar13 < param_4 * param_4 + param_3 * param_3);
    uVar6 = (int)(uVar10 << 0x1f) >> 0x1f;
    uVar10 = (int)(uVar10 << 0x1f) >> 0x1f;
    *(ulonglong *)(param_1 + 1) =
         CONCAT44(~uVar10 & (uint)fVar12,~uVar6 & (uint)fVar11) |
         CONCAT44((uint)fVar18 & uVar10,(uint)fVar3 & uVar6);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return param_1;
}

