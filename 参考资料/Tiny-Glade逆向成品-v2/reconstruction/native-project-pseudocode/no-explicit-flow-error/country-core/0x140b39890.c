// VA 0x140b39890, PDB extent 1090 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_circle<country_core::systems::wall::wall_state::spatial_hash_debug::spatial_hash_debug::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_circle<country_core::systems::wall::wall_state::spatial_hash_debug::spatial_hash_debug::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1090 */

uint pdb_140b39890(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar1;
  uVar6 = pdb_140defaa0(&uStack_d8);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uStack_d8;
  fVar33 = (float)uVar1;
  auVar28._0_4_ = _DAT_142e61230 * fVar33;
  fVar32 = (float)(uVar1 >> 0x20);
  auVar28._4_4_ = _UNK_142e61234 * fVar32;
  auVar28._8_4_ = _UNK_142e61238 * 0.0;
  auVar28._12_4_ = _UNK_142e6123c * 0.0;
  auVar18 = maxps(auVar18,auVar28);
  iVar13 = -(uint)(auVar28._0_4_ <= auVar18._0_4_);
  iVar14 = -(uint)(auVar28._4_4_ <= auVar18._4_4_);
  auVar24._4_4_ = iVar14;
  auVar24._0_4_ = iVar13;
  auVar24._8_4_ = iVar14;
  auVar24._12_4_ = iVar14;
  auVar23._8_8_ = auVar24._8_8_;
  auVar23._4_4_ = iVar13;
  auVar23._0_4_ = iVar13;
  iVar13 = movmskpd(uVar6,auVar23);
  if (iVar13 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
  }
  fVar31 = _DAT_142e36f60 * fVar33;
  fVar32 = _UNK_142e36f64 * fVar32;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uStack_d0;
  auVar3._4_4_ = fVar32;
  auVar3._0_4_ = fVar31;
  auVar3._8_4_ = _UNK_142e36f68 * 0.0;
  auVar3._12_4_ = _UNK_142e36f6c * 0.0;
  auVar28 = minps(auVar27,auVar3);
  iVar13 = -(uint)(auVar28._0_4_ <= fVar31);
  iVar14 = -(uint)(auVar28._4_4_ <= fVar32);
  auVar26._4_4_ = iVar14;
  auVar26._0_4_ = iVar13;
  auVar26._8_4_ = iVar14;
  auVar26._12_4_ = iVar14;
  auVar25._8_8_ = auVar26._8_8_;
  auVar25._4_4_ = iVar13;
  auVar25._0_4_ = iVar13;
  iVar13 = movmskpd(3,auVar25);
  if (iVar13 == 3) {
    fVar33 = fVar33 / (float)*(int *)(param_1 + 0x48);
    if (fVar33 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
    }
    auVar19._0_4_ = auVar18._0_4_ + fVar31;
    auVar19._4_4_ = auVar18._4_4_ + fVar32;
    auVar19._8_4_ = auVar18._8_4_ + _UNK_142e36f68 * 0.0;
    auVar19._12_4_ = auVar18._12_4_ + _UNK_142e36f6c * 0.0;
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = auVar19._0_4_ / fVar33;
    fVar15 = (float)pub_142e32a40(auVar20._0_8_);
    fVar5 = _DAT_142e382cc;
    uVar11 = (int)fVar15;
    if (_DAT_142e382cc < fVar15) {
      uVar11 = 0x7fffffff;
    }
    uVar12 = 0;
    if (NAN(fVar15)) {
      uVar11 = uVar12;
    }
    fVar15 = (float)pub_142e32a40();
    uVar9 = (int)fVar15;
    if (fVar5 < fVar15) {
      uVar9 = 0x7fffffff;
    }
    if (NAN(fVar15)) {
      uVar9 = uVar12;
    }
    if ((int)uVar11 < 1) {
      uVar11 = uVar12;
    }
    if ((int)uVar9 < 1) {
      uVar9 = 0;
    }
    fVar15 = (float)pub_142e32a40();
    uVar10 = (int)fVar15;
    if (fVar5 < fVar15) {
      uVar10 = 0x7fffffff;
    }
    if (NAN(fVar15)) {
      uVar10 = uVar12;
    }
    fVar16 = (float)pub_142e32a40();
    fVar4 = _UNK_142e37954;
    fVar15 = _DAT_142e37950;
    uVar12 = (int)fVar16;
    if (fVar5 < fVar16) {
      uVar12 = 0x7fffffff;
    }
    if (NAN(fVar16)) {
      uVar12 = 0;
    }
    iVar13 = (int)*(undefined8 *)(param_1 + 0x48);
    iVar14 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    uVar8 = iVar14 - 1;
    if ((int)(iVar13 - 1U) <= (int)uVar10) {
      uVar10 = iVar13 - 1U;
    }
    if ((int)uVar12 < (int)uVar8) {
      uVar8 = uVar12;
    }
    if ((int)uVar9 <= (int)uVar8) {
      if ((int)uVar10 < (int)uVar11) {
        do {
          if ((int)uVar8 <= (int)uVar9) {
            return 0;
          }
          uVar12 = (uint)((int)uVar9 < (int)uVar8);
          uVar9 = uVar9 + ((int)uVar9 < (int)uVar8);
        } while ((int)uVar9 <= (int)uVar8);
      }
      else {
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_14305a700);
        }
        fVar34 = fVar33 * _DAT_142e36f50 * _DAT_142f6d804;
        auVar29._0_4_ = (float)iVar13;
        auVar29._4_4_ = (float)iVar14;
        auVar29._8_8_ = 0;
        auVar18 = divps(auVar30,auVar29);
        fVar33 = auVar18._0_4_ * _DAT_142e36f60;
        fVar16 = auVar18._4_4_ * _UNK_142e36f64;
        do {
          uVar12 = uVar11;
          do {
            iVar14 = uVar9 * iVar13 + uVar12;
            if ((iVar13 == -1) && (SBORROW4(0,iVar14))) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8550(&UNK_14305a700);
            }
            fVar17 = (float)pub_142e32a40((float)iVar14 / auVar29._0_4_);
            iVar7 = (int)fVar17;
            if (fVar5 < fVar17) {
              iVar7 = 0x7fffffff;
            }
            if (NAN(fVar17)) {
              iVar7 = 0;
            }
            auVar21._0_4_ = (float)(iVar14 % iVar13);
            auVar21._4_4_ = (float)iVar7;
            auVar21._8_8_ = 0;
            auVar18 = divps(auVar21,auVar29);
            fVar17 = ((auVar18._0_4_ * fVar31 - (fVar15 - auVar18._0_4_) * fVar31) + fVar33) -
                     (float)*param_2;
            fVar22 = ((auVar18._4_4_ * fVar32 - (fVar4 - auVar18._4_4_) * fVar32) + fVar16) -
                     (float)((ulonglong)*param_2 >> 0x20);
            if (SQRT(fVar22 * fVar22 + fVar17 * fVar17) < *(float *)(param_2 + 1) + fVar34) {
              lVar2 = param_3[2];
              if (lVar2 == *param_3) {
                pdb_142d896b0(param_3);
              }
              *(longlong *)(param_3[1] + lVar2 * 8) = (longlong)iVar14;
              param_3[2] = lVar2 + 1;
            }
          } while (((int)uVar12 < (int)uVar10) &&
                  (uVar12 = uVar12 + ((int)uVar12 < (int)uVar10), (int)uVar12 <= (int)uVar10));
          if ((int)uVar8 <= (int)uVar9) {
            return 0;
          }
          uVar12 = (uint)((int)uVar9 < (int)uVar8);
          uVar9 = uVar9 + ((int)uVar9 < (int)uVar8);
        } while ((int)uVar9 <= (int)uVar8);
      }
    }
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
}

