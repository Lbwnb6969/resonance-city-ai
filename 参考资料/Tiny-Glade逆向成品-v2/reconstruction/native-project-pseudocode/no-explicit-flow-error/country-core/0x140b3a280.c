// VA 0x140b3a280, PDB extent 1802 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_segment<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::add_segment::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_segment<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::add_segment::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1802 */

ulonglong pdb_140b3a280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       float param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  undefined8 in_XMM1_Qa;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_f8 [184];
  ulonglong uVar11;
  
  fVar18 = (float)param_3;
  fVar30 = (float)in_XMM1_Qa;
  fVar31 = (float)param_4;
  uVar8 = pdb_140dee6f0(param_1,param_2,_DAT_14300e4bc,_DAT_14300e4bc,fVar30,fVar18);
  if (((char)uVar8 != '\0') && (uVar8 = pdb_140dee6f0(), (char)uVar8 != '\0')) {
    auVar20._0_4_ = param_5 - fVar18;
    auVar20._4_4_ = fVar31 - fVar30;
    auVar20._8_4_ = 0.0 - (float)((ulonglong)param_3 >> 0x20);
    auVar20._12_4_ = (float)((ulonglong)param_4 >> 0x20) - (float)((ulonglong)in_XMM1_Qa >> 0x20);
    fVar24 = auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
    if ((fVar24 != 0.0) || (NAN(fVar24))) {
      fVar36 = fVar30;
      if (fVar31 <= fVar30) {
        fVar36 = fVar31;
      }
      auVar26._4_4_ = SQRT(fVar24);
      auVar26._0_4_ = SQRT(fVar24);
      auVar26._8_8_ = 0;
      auVar20 = divps(auVar20,auVar26);
      fVar24 = auVar20._0_4_;
      fVar37 = (float)(_DAT_142e37820 ^ (uint)fVar24);
      fVar22 = auVar20._4_4_;
      pdb_140deead0(auStack_120);
      uVar8 = *(ulonglong *)(param_1 + 0x50);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar8;
      fVar33 = (float)(uVar8 >> 0x20);
      fVar32 = (float)uVar8;
      fVar25 = fVar32 / (float)*(int *)(param_1 + 0x48);
      auVar5._4_8_ = uVar8 >> 0x20;
      auVar5._0_4_ = fVar25;
      fVar27 = fVar24 * 0.0 + _DAT_142e37950 * fVar22;
      fVar28 = fVar22 * 0.0 + _UNK_142e37954 * fVar37;
      fVar29 = _DAT_142e36f28 / SQRT(fVar28 * fVar28 + fVar27 * fVar27);
      pdb_140df3380(auStack_110,auVar5._0_8_,fVar33 / (float)*(int *)(param_1 + 0x4c),
                    CONCAT44(fVar28,fVar27 * fVar29),fVar29 * fVar28,0,0,&UNK_1430583d8);
      if (fVar32 * _DAT_142e36f38 <= fVar36) {
        fVar36 = fVar18;
        if (param_5 <= fVar18) {
          fVar36 = param_5;
        }
        if (fVar33 * _DAT_142e36f38 <= fVar36) {
          fVar36 = fVar30;
          if (fVar30 <= fVar31) {
            fVar36 = fVar31;
          }
          fVar32 = fVar32 * _DAT_142e36f60;
          fVar33 = fVar33 * _UNK_142e36f64;
          if (fVar36 <= fVar32) {
            fVar36 = fVar18;
            if (fVar18 <= param_5) {
              fVar36 = param_5;
            }
            if (fVar36 <= fVar33) {
              if (fVar25 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
              }
              fVar25 = (float)pub_142e32a40();
              fVar36 = _DAT_142e382cc;
              iVar17 = (int)fVar25;
              if (_DAT_142e382cc < fVar25) {
                iVar17 = 0x7fffffff;
              }
              if (NAN(fVar25)) {
                iVar17 = 0;
              }
              fVar25 = (float)pub_142e32a40();
              iVar14 = (int)fVar25;
              if (fVar36 < fVar25) {
                iVar14 = 0x7fffffff;
              }
              if (NAN(fVar25)) {
                iVar14 = 0;
              }
              if (iVar17 < 1) {
                iVar17 = 0;
              }
              if (iVar14 < 1) {
                iVar14 = 0;
              }
              fVar25 = (float)pub_142e32a40();
              uVar16 = (int)fVar25;
              if (fVar36 < fVar25) {
                uVar16 = 0x7fffffff;
              }
              if (NAN(fVar25)) {
                uVar16 = 0;
              }
              fVar28 = (float)pub_142e32a40();
              fVar27 = _UNK_142e37954;
              fVar25 = _DAT_142e37950;
              uVar9 = (int)fVar28;
              if (fVar36 < fVar28) {
                uVar9 = 0x7fffffff;
              }
              uVar8 = (ulonglong)uVar9;
              if (NAN(fVar28)) {
                uVar8 = 0;
              }
              iVar12 = (int)*(undefined8 *)(param_1 + 0x48);
              iVar13 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
              uVar9 = iVar13 - 1;
              if ((int)(iVar12 - 1U) <= (int)uVar16) {
                uVar16 = iVar12 - 1U;
              }
              uVar11 = (ulonglong)uVar9;
              if ((int)uVar8 < (int)uVar9) {
                uVar11 = uVar8;
              }
              iVar10 = (int)uVar11;
              if (iVar10 < iVar14) {
                return uVar8;
              }
              if ((int)uVar16 < iVar17) {
                do {
                  bVar2 = iVar14 < iVar10;
                  if (iVar10 <= iVar14) {
                    return 0;
                  }
                  iVar14 = iVar14 + (uint)bVar2;
                } while (iVar14 <= iVar10);
                return (ulonglong)bVar2;
              }
              if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8510(&UNK_14305a700);
              }
              fVar30 = (fVar31 + fVar30) * _DAT_142e36f60;
              fVar18 = (param_5 + fVar18) * _UNK_142e36f64;
              fVar31 = (float)iVar12;
              fVar28 = (float)iVar13;
              auVar3._4_4_ = fVar28;
              auVar3._0_4_ = fVar31;
              auVar3._8_8_ = 0;
              auVar20 = divps(auVar34,auVar3);
              fVar29 = auVar20._0_4_ * _DAT_142e36f60;
              fVar35 = auVar20._4_4_ * _UNK_142e36f64;
              do {
                iVar13 = iVar17;
                do {
                  iVar15 = iVar14 * iVar12 + iVar13;
                  if ((iVar12 == -1) && (SBORROW4(0,iVar15))) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8550(&UNK_14305a700);
                  }
                  fVar19 = (float)pub_142e32a40((float)iVar15 / fVar31);
                  iVar7 = 0x7fffffff;
                  if (fVar19 <= fVar36) {
                    iVar7 = (int)fVar19;
                  }
                  if (NAN(fVar19)) {
                    iVar7 = 0;
                  }
                  auVar21._0_4_ = (float)(iVar15 % iVar12);
                  auVar21._4_4_ = (float)iVar7;
                  auVar21._8_8_ = 0;
                  auVar4._4_4_ = fVar28;
                  auVar4._0_4_ = fVar31;
                  auVar4._8_8_ = 0;
                  auVar20 = divps(auVar21,auVar4);
                  fVar19 = ((auVar20._0_4_ * fVar32 - (fVar25 - auVar20._0_4_) * fVar32) + fVar29) -
                           fVar30;
                  fVar23 = ((auVar20._4_4_ * fVar33 - (fVar27 - auVar20._4_4_) * fVar33) + fVar35) -
                           fVar18;
                  uStack_108 = CONCAT44(fVar23 * fVar22 + fVar19 * fVar37,
                                        fVar23 * fVar24 + fVar19 * fVar22);
                  pdb_140df3450(auStack_f8,auStack_110);
                  cVar6 = pdb_140deea30(auStack_120,auStack_f8);
                  if (cVar6 != '\0') {
                    lVar1 = param_7[2];
                    if (lVar1 == *param_7) {
                      pdb_142d896b0(param_7);
                    }
                    *(longlong *)(param_7[1] + lVar1 * 8) = (longlong)iVar15;
                    param_7[2] = lVar1 + 1;
                  }
                } while ((iVar13 < (int)uVar16) &&
                        (iVar13 = iVar13 + (uint)(iVar13 < (int)uVar16), iVar13 <= (int)uVar16));
                bVar2 = iVar14 < iVar10;
                if (iVar10 <= iVar14) {
                  return 0;
                }
                iVar14 = iVar14 + (uint)bVar2;
              } while (iVar14 <= iVar10);
              return (ulonglong)bVar2;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
    }
    iVar17 = *(int *)(param_1 + 0x48);
    iVar14 = *(int *)(param_1 + 0x4c);
    fVar18 = (float)pub_142e32a40();
    fVar30 = _DAT_142e382cc;
    iVar12 = (int)fVar18;
    if (_DAT_142e382cc < fVar18) {
      iVar12 = 0x7fffffff;
    }
    if (NAN(fVar18)) {
      iVar12 = 0;
    }
    fVar18 = (float)pub_142e32a40();
    uVar16 = (int)fVar18;
    if (fVar30 < fVar18) {
      uVar16 = 0x7fffffff;
    }
    uVar8 = (ulonglong)uVar16;
    if (NAN(fVar18)) {
      uVar8 = 0;
    }
    if ((((-1 < iVar12) && (iVar13 = (int)uVar8, iVar13 < iVar14)) && (iVar12 < iVar17)) &&
       (-1 < iVar13)) {
      lVar1 = param_7[2];
      if (lVar1 == *param_7) {
        pdb_142d896b0(param_7);
      }
      uVar8 = param_7[1];
      *(longlong *)(uVar8 + lVar1 * 8) = (longlong)(iVar13 * iVar17 + iVar12);
      param_7[2] = lVar1 + 1;
    }
  }
  return uVar8;
}

