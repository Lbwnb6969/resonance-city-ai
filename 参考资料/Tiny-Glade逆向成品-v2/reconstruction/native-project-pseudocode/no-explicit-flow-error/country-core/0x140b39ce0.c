// VA 0x140b39ce0, PDB extent 1428 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_circle<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_circle::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_circle<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_circle::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1428 */

ulonglong pdb_140b39ce0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uVar20;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  
  uVar17 = *(ulonglong *)(param_1 + 0x50);
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar17;
  uVar15 = pdb_140defaa0(&uStack_d8);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uStack_d8;
  fVar51 = (float)uVar17;
  auVar46._0_4_ = _DAT_142e61230 * fVar51;
  fVar50 = (float)(uVar17 >> 0x20);
  auVar46._4_4_ = _UNK_142e61234 * fVar50;
  auVar46._8_4_ = _UNK_142e61238 * 0.0;
  auVar46._12_4_ = _UNK_142e6123c * 0.0;
  auVar34 = maxps(auVar34,auVar46);
  iVar29 = -(uint)(auVar46._0_4_ <= auVar34._0_4_);
  iVar30 = -(uint)(auVar46._4_4_ <= auVar34._4_4_);
  auVar42._4_4_ = iVar30;
  auVar42._0_4_ = iVar29;
  auVar42._8_4_ = iVar30;
  auVar42._12_4_ = iVar30;
  auVar41._8_8_ = auVar42._8_8_;
  auVar41._4_4_ = iVar29;
  auVar41._0_4_ = iVar29;
  iVar29 = movmskpd(uVar15,auVar41);
  if (iVar29 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
  }
  fVar49 = _DAT_142e36f60 * fVar51;
  fVar50 = _UNK_142e36f64 * fVar50;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uStack_d0;
  auVar7._4_4_ = fVar50;
  auVar7._0_4_ = fVar49;
  auVar7._8_4_ = _UNK_142e36f68 * 0.0;
  auVar7._12_4_ = _UNK_142e36f6c * 0.0;
  auVar46 = minps(auVar45,auVar7);
  iVar29 = -(uint)(auVar46._0_4_ <= fVar49);
  iVar30 = -(uint)(auVar46._4_4_ <= fVar50);
  auVar44._4_4_ = iVar30;
  auVar44._0_4_ = iVar29;
  auVar44._8_4_ = iVar30;
  auVar44._12_4_ = iVar30;
  auVar43._8_8_ = auVar44._8_8_;
  auVar43._4_4_ = iVar29;
  auVar43._0_4_ = iVar29;
  iVar29 = movmskpd(3,auVar43);
  if (iVar29 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
  }
  fVar51 = fVar51 / (float)*(int *)(param_1 + 0x48);
  if (fVar51 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
  }
  auVar35._0_4_ = auVar34._0_4_ + fVar49;
  auVar35._4_4_ = auVar34._4_4_ + fVar50;
  auVar35._8_4_ = auVar34._8_4_ + _UNK_142e36f68 * 0.0;
  auVar35._12_4_ = auVar34._12_4_ + _UNK_142e36f6c * 0.0;
  auVar36._4_12_ = auVar35._4_12_;
  auVar36._0_4_ = auVar35._0_4_ / fVar51;
  fVar31 = (float)pub_142e32a40(auVar36._0_8_);
  fVar10 = _DAT_142e382cc;
  iVar29 = (int)fVar31;
  if (_DAT_142e382cc < fVar31) {
    iVar29 = 0x7fffffff;
  }
  if (NAN(fVar31)) {
    iVar29 = 0;
  }
  fVar31 = (float)pub_142e32a40();
  iVar30 = (int)fVar31;
  if (fVar10 < fVar31) {
    iVar30 = 0x7fffffff;
  }
  if (NAN(fVar31)) {
    iVar30 = 0;
  }
  if (iVar29 < 1) {
    iVar29 = 0;
  }
  if (iVar30 < 1) {
    iVar30 = 0;
  }
  fVar31 = (float)pub_142e32a40();
  uVar26 = (int)fVar31;
  if (fVar10 < fVar31) {
    uVar26 = 0x7fffffff;
  }
  if (NAN(fVar31)) {
    uVar26 = 0;
  }
  fVar32 = (float)pub_142e32a40();
  lVar14 = _UNK_143057f08;
  lVar13 = _DAT_143057f00;
  lVar12 = _UNK_143057ef8;
  lVar11 = _DAT_143057ef0;
  fVar9 = _UNK_142e37954;
  fVar31 = _DAT_142e37950;
  uVar18 = (int)fVar32;
  if (fVar10 < fVar32) {
    uVar18 = 0x7fffffff;
  }
  uVar17 = (ulonglong)uVar18;
  if (NAN(fVar32)) {
    uVar17 = 0;
  }
  iVar8 = (int)*(undefined8 *)(param_1 + 0x48);
  iVar28 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  uVar18 = iVar28 - 1;
  if ((int)(iVar8 - 1U) <= (int)uVar26) {
    uVar26 = iVar8 - 1U;
  }
  uVar20 = (ulonglong)uVar18;
  if ((int)uVar17 < (int)uVar18) {
    uVar20 = uVar17;
  }
  iVar19 = (int)uVar20;
  if (iVar30 <= iVar19) {
    if ((int)uVar26 < iVar29) {
      do {
        if (iVar19 <= iVar30) {
          return 0;
        }
        uVar17 = (ulonglong)(iVar30 < iVar19);
        iVar30 = iVar30 + (uint)(iVar30 < iVar19);
      } while (iVar30 <= iVar19);
    }
    else {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8510(&UNK_14305a700);
      }
      fVar52 = fVar51 * _DAT_142e36f50 * _DAT_142f6d804;
      lVar3 = *(longlong *)(param_4 + 8);
      uVar20 = *(ulonglong *)(param_4 + 0x10);
      auVar47._0_4_ = (float)iVar8;
      auVar47._4_4_ = (float)iVar28;
      auVar47._8_8_ = 0;
      auVar34 = divps(auVar48,auVar47);
      fVar51 = auVar34._0_4_ * _DAT_142e36f60;
      fVar32 = auVar34._4_4_ * _UNK_142e36f64;
      do {
        iVar16 = (uint)(iVar30 < iVar19) + iVar30;
        iVar28 = iVar29;
        do {
          iVar22 = iVar30 * iVar8 + iVar28;
          if ((iVar8 == -1) && (SBORROW4(0,iVar22))) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8550(&UNK_14305a700);
          }
          fVar33 = (float)pub_142e32a40((float)iVar22 / auVar47._0_4_);
          uVar17 = (ulonglong)(uint)(int)fVar33;
          if (fVar10 < fVar33) {
            uVar17 = 0x7fffffff;
          }
          if (NAN(fVar33)) {
            uVar17 = 0;
          }
          auVar37._0_4_ = (float)(iVar22 % iVar8);
          auVar37._4_4_ = (float)(int)uVar17;
          auVar37._8_8_ = 0;
          auVar34 = divps(auVar37,auVar47);
          fVar33 = ((auVar34._0_4_ * fVar49 - (fVar31 - auVar34._0_4_) * fVar49) + fVar51) -
                   (float)*param_2;
          fVar40 = ((auVar34._4_4_ * fVar50 - (fVar9 - auVar34._4_4_) * fVar50) + fVar32) -
                   (float)((ulonglong)*param_2 >> 0x20);
          if (SQRT(fVar40 * fVar40 + fVar33 * fVar33) < *(float *)(param_2 + 1) + fVar52) {
            uVar17 = (ulonglong)iVar22;
            if (uVar20 <= uVar17) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar17,uVar20,&UNK_143058298);
            }
            uVar4 = *(ulonglong *)(lVar3 + 8 + uVar17 * 0x30);
            uVar5 = *(ulonglong *)(lVar3 + 0x10 + uVar17 * 0x30);
            lVar24 = param_3[2];
            uVar17 = *param_3 - lVar24;
            if (uVar17 < uVar5) {
              pdb_142d7f1b0(param_3,lVar24,uVar5,8,8);
              lVar24 = param_3[2];
LAB_140b3a0d3:
              lVar6 = param_3[1];
              uVar23 = uVar5 * 0x38 - 0x38;
              uVar17 = uVar4;
              if (0xa7 < uVar23) {
                uVar21 = uVar23 / 0x38 + 1;
                uVar25 = uVar21 & 0xfffffffffffffffc;
                uVar17 = uVar25 * 0x38 + uVar4;
                lVar1 = lVar6 + lVar24 * 8;
                lVar24 = lVar24 + uVar25;
                uVar27 = 0;
                uVar23 = uVar4;
                do {
                  auVar38._8_4_ = (int)uVar23;
                  auVar38._0_8_ = uVar23;
                  auVar38._12_4_ = (int)(uVar23 >> 0x20);
                  auVar39._0_8_ = uVar23 + lVar13;
                  auVar39._8_8_ = auVar38._8_8_ + lVar14;
                  plVar2 = (longlong *)(lVar1 + uVar27 * 8);
                  *plVar2 = uVar23 + lVar11;
                  plVar2[1] = auVar38._8_8_ + lVar12;
                  *(undefined1 (*) [16])(lVar1 + 0x10 + uVar27 * 8) = auVar39;
                  uVar27 = uVar27 + 4;
                  uVar23 = uVar23 + 0xe0;
                } while (uVar25 != uVar27);
                if (uVar21 == uVar25) goto LAB_140b3a190;
              }
              do {
                *(ulonglong *)(lVar6 + lVar24 * 8) = uVar17;
                lVar24 = lVar24 + 1;
                uVar17 = uVar17 + 0x38;
              } while (uVar17 != uVar4 + uVar5 * 0x38);
            }
            else if (uVar5 != 0) goto LAB_140b3a0d3;
LAB_140b3a190:
            param_3[2] = lVar24;
          }
          if ((int)uVar26 <= iVar28) break;
          uVar17 = (ulonglong)(iVar28 < (int)uVar26);
          iVar28 = iVar28 + (uint)(iVar28 < (int)uVar26);
        } while (iVar28 <= (int)uVar26);
      } while ((iVar30 < iVar19) && (iVar30 = iVar16, iVar16 <= iVar19));
    }
  }
  return uVar17;
}

