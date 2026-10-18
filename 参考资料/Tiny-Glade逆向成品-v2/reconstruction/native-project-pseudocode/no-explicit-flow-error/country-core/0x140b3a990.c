// VA 0x140b3a990, PDB extent 2420 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_segment<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_segment::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_segment<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_segment::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 2420 */

ulonglong pdb_140b3a990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       float param_5,undefined8 param_6,longlong *param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar35;
  float fVar37;
  undefined1 auVar32 [16];
  float fVar38;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar54;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_f8 [184];
  int iVar17;
  
  fVar46 = (float)param_4;
  fVar30 = (float)param_3;
  fVar45 = (float)param_2;
  uVar54 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  uVar13 = pdb_140dee6f0();
  if ((char)uVar13 == '\0') {
    return uVar13;
  }
  fVar52 = param_5;
  uVar13 = pdb_140dee6f0();
  if ((char)uVar13 == '\0') {
    return uVar13;
  }
  auVar32._0_4_ = param_5 - fVar30;
  auVar32._4_4_ = fVar46 - fVar45;
  auVar32._8_4_ = 0.0 - (float)((ulonglong)param_3 >> 0x20);
  auVar32._12_4_ = (float)((ulonglong)param_4 >> 0x20) - (float)((ulonglong)param_2 >> 0x20);
  fVar39 = auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
  if ((fVar39 != 0.0) || (NAN(fVar39))) {
    fVar52 = fVar45;
    if (fVar46 <= fVar45) {
      fVar52 = fVar46;
    }
    auVar41._4_4_ = SQRT(fVar39);
    auVar41._0_4_ = SQRT(fVar39);
    auVar41._8_8_ = 0;
    auVar32 = divps(auVar32,auVar41);
    fVar39 = auVar32._0_4_;
    fVar53 = (float)(_DAT_142e37820 ^ (uint)fVar39);
    fVar35 = auVar32._4_4_;
    pdb_140deead0(auStack_120);
    uVar13 = *(ulonglong *)(param_1 + 0x50);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar13;
    fVar48 = (float)(uVar13 >> 0x20);
    fVar47 = (float)uVar13;
    fVar40 = fVar47 / (float)*(int *)(param_1 + 0x48);
    auVar8._4_8_ = uVar13 >> 0x20;
    auVar8._0_4_ = fVar40;
    fVar37 = fVar39 * 0.0;
    fVar38 = fVar35 * 0.0;
    auVar43._0_4_ = fVar37 + _DAT_142e37950 * fVar35;
    auVar43._4_4_ = fVar38 + _UNK_142e37954 * fVar53;
    auVar43._8_4_ = fVar37 + fVar37;
    auVar43._12_4_ = fVar38 + fVar38;
    fVar37 = _DAT_142e36f28 / SQRT(auVar43._4_4_ * auVar43._4_4_ + auVar43._0_4_ * auVar43._0_4_);
    auVar44._4_12_ = auVar43._4_12_;
    auVar44._0_4_ = auVar43._0_4_ * fVar37;
    pdb_140df3380(auStack_110,auVar8._0_8_,CONCAT44(fVar48,fVar48 / (float)*(int *)(param_1 + 0x4c))
                  ,auVar44._0_8_,CONCAT44(uVar54,fVar37 * auVar43._4_4_),0,0,&UNK_1430583d8);
    if (fVar47 * _DAT_142e36f38 <= fVar52) {
      fVar52 = fVar30;
      if (param_5 <= fVar30) {
        fVar52 = param_5;
      }
      if (fVar48 * _DAT_142e36f38 <= fVar52) {
        fVar52 = fVar45;
        if (fVar45 <= fVar46) {
          fVar52 = fVar46;
        }
        fVar47 = fVar47 * _DAT_142e36f60;
        fVar48 = fVar48 * _UNK_142e36f64;
        if (fVar52 <= fVar47) {
          fVar52 = fVar30;
          if (fVar30 <= param_5) {
            fVar52 = param_5;
          }
          if (fVar52 <= fVar48) {
            if (fVar40 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
            }
            fVar37 = (float)pub_142e32a40();
            fVar52 = _DAT_142e382cc;
            uVar29 = (int)fVar37;
            if (_DAT_142e382cc < fVar37) {
              uVar29 = 0x7fffffff;
            }
            uVar16 = 0;
            if (NAN(fVar37)) {
              uVar29 = uVar16;
            }
            fVar37 = (float)pub_142e32a40();
            uVar27 = (int)fVar37;
            if (fVar52 < fVar37) {
              uVar27 = 0x7fffffff;
            }
            if (NAN(fVar37)) {
              uVar27 = uVar16;
            }
            if ((int)uVar29 < 1) {
              uVar29 = uVar16;
            }
            uVar13 = (ulonglong)uVar27;
            if ((int)uVar27 < 1) {
              uVar13 = 0;
            }
            fVar37 = (float)pub_142e32a40();
            uVar27 = (int)fVar37;
            if (fVar52 < fVar37) {
              uVar27 = 0x7fffffff;
            }
            if (NAN(fVar37)) {
              uVar27 = uVar16;
            }
            fVar40 = (float)pub_142e32a40();
            lVar10 = _UNK_143057f08;
            lVar9 = _DAT_143057f00;
            lVar4 = _UNK_143057ef8;
            lVar24 = _DAT_143057ef0;
            fVar38 = _UNK_142e37954;
            fVar37 = _DAT_142e37950;
            uVar16 = (int)fVar40;
            if (fVar52 < fVar40) {
              uVar16 = 0x7fffffff;
            }
            uVar15 = (ulonglong)uVar16;
            if (NAN(fVar40)) {
              uVar15 = 0;
            }
            iVar28 = (int)*(undefined8 *)(param_1 + 0x48);
            iVar17 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
            uVar16 = iVar17 - 1;
            if ((int)(iVar28 - 1U) <= (int)uVar27) {
              uVar27 = iVar28 - 1U;
            }
            uVar14 = (ulonglong)uVar16;
            if ((int)uVar15 < (int)uVar16) {
              uVar14 = uVar15;
            }
            iVar20 = (int)uVar14;
            if (iVar20 < (int)uVar13) {
              return uVar15;
            }
            if ((int)uVar27 < (int)uVar29) {
              do {
                iVar28 = (int)uVar13;
                if (iVar20 <= iVar28) {
                  return 0;
                }
                uVar29 = iVar28 + (uint)(iVar28 < iVar20);
                uVar13 = (ulonglong)uVar29;
              } while ((int)uVar29 <= iVar20);
              return (ulonglong)(iVar28 < iVar20);
            }
            if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8510(&UNK_14305a700);
            }
            fVar45 = (fVar46 + fVar45) * _DAT_142e36f60;
            fVar30 = (param_5 + fVar30) * _UNK_142e36f64;
            lVar5 = *(longlong *)(param_8 + 8);
            uVar15 = *(ulonglong *)(param_8 + 0x10);
            fVar46 = (float)iVar28;
            fVar40 = (float)iVar17;
            auVar6._4_4_ = fVar40;
            auVar6._0_4_ = fVar46;
            auVar6._8_8_ = 0;
            auVar32 = divps(auVar50,auVar6);
            fVar49 = auVar32._0_4_ * _DAT_142e36f60;
            fVar51 = auVar32._4_4_ * _UNK_142e36f64;
            do {
              iVar17 = (int)uVar13;
              uVar11 = (uint)(iVar17 < iVar20) + iVar17;
              uVar16 = uVar29;
              do {
                iVar21 = iVar17 * iVar28 + uVar16;
                if ((iVar28 == -1) && (SBORROW4(0,iVar21))) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8550(&UNK_14305a700);
                }
                fVar31 = (float)pub_142e32a40((float)iVar21 / fVar46);
                iVar12 = (int)fVar31;
                if (fVar52 < fVar31) {
                  iVar12 = 0x7fffffff;
                }
                if (NAN(fVar31)) {
                  iVar12 = 0;
                }
                auVar33._0_4_ = (float)(iVar21 % iVar28);
                auVar33._4_4_ = (float)iVar12;
                auVar33._8_8_ = 0;
                auVar7._4_4_ = fVar40;
                auVar7._0_4_ = fVar46;
                auVar7._8_8_ = 0;
                auVar32 = divps(auVar33,auVar7);
                fVar31 = ((auVar32._0_4_ * fVar47 - (fVar37 - auVar32._0_4_) * fVar47) + fVar49) -
                         fVar45;
                fVar36 = ((auVar32._4_4_ * fVar48 - (fVar38 - auVar32._4_4_) * fVar48) + fVar51) -
                         fVar30;
                uStack_108 = CONCAT44(fVar36 * fVar35 + fVar31 * fVar53,
                                      fVar36 * fVar39 + fVar31 * fVar35);
                pdb_140df3450(auStack_f8,auStack_110);
                uVar14 = pdb_140deea30(auStack_120,auStack_f8);
                if ((char)uVar14 != '\0') {
                  uVar13 = (ulonglong)iVar21;
                  if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar13,uVar15,&UNK_1430582b0);
                  }
                  uVar19 = *(ulonglong *)(lVar5 + 8 + uVar13 * 0x30);
                  uVar13 = *(ulonglong *)(lVar5 + 0x10 + uVar13 * 0x30);
                  lVar23 = param_7[2];
                  uVar14 = *param_7 - lVar23;
                  if (uVar14 < uVar13) {
                    pdb_142d7f1b0(param_7,lVar23,uVar13,8,8);
                    lVar23 = param_7[2];
LAB_140b3b040:
                    lVar2 = param_7[1];
                    uVar18 = uVar13 * 0x38 - 0x38;
                    uVar14 = uVar19;
                    if (0xa7 < uVar18) {
                      uVar22 = uVar18 / 0x38 + 1;
                      uVar25 = uVar22 & 0xfffffffffffffffc;
                      uVar14 = uVar25 * 0x38 + uVar19;
                      lVar1 = lVar2 + lVar23 * 8;
                      lVar23 = lVar23 + uVar25;
                      uVar26 = 0;
                      uVar18 = uVar19;
                      do {
                        auVar34._8_4_ = (int)uVar18;
                        auVar34._0_8_ = uVar18;
                        auVar34._12_4_ = (int)(uVar18 >> 0x20);
                        plVar3 = (longlong *)(lVar1 + uVar26 * 8);
                        *plVar3 = uVar18 + lVar24;
                        plVar3[1] = auVar34._8_8_ + lVar4;
                        plVar3 = (longlong *)(lVar1 + 0x10 + uVar26 * 8);
                        *plVar3 = uVar18 + lVar9;
                        plVar3[1] = auVar34._8_8_ + lVar10;
                        uVar26 = uVar26 + 4;
                        uVar18 = uVar18 + 0xe0;
                      } while (uVar25 != uVar26);
                      if (uVar22 == uVar25) goto LAB_140b3b0f0;
                    }
                    do {
                      *(ulonglong *)(lVar2 + lVar23 * 8) = uVar14;
                      lVar23 = lVar23 + 1;
                      uVar14 = uVar14 + 0x38;
                    } while (uVar14 != uVar19 + uVar13 * 0x38);
                  }
                  else if (uVar13 != 0) goto LAB_140b3b040;
LAB_140b3b0f0:
                  param_7[2] = lVar23;
                }
              } while (((int)uVar16 < (int)uVar27) &&
                      (uVar16 = uVar16 + ((int)uVar16 < (int)uVar27), (int)uVar16 <= (int)uVar27));
              uVar13 = (ulonglong)uVar11;
              if (iVar20 <= iVar17) {
                return uVar14;
              }
              if (iVar20 < (int)uVar11) {
                return uVar14;
              }
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
  }
  iVar28 = *(int *)(param_1 + 0x48);
  iVar17 = *(int *)(param_1 + 0x4c);
  fVar30 = (float)pub_142e32a40();
  fVar45 = _DAT_142e382cc;
  iVar20 = (int)fVar30;
  if (_DAT_142e382cc < fVar30) {
    iVar20 = 0x7fffffff;
  }
  if (NAN(fVar30)) {
    iVar20 = 0;
  }
  fVar30 = (float)pub_142e32a40();
  uVar29 = (int)fVar30;
  if (fVar45 < fVar30) {
    uVar29 = 0x7fffffff;
  }
  uVar13 = (ulonglong)uVar29;
  if (NAN(fVar30)) {
    uVar13 = 0;
  }
  if (iVar20 < 0) {
    return uVar13;
  }
  iVar21 = (int)uVar13;
  if (iVar17 <= iVar21) {
    return uVar13;
  }
  if (iVar28 <= iVar20) {
    return uVar13;
  }
  if (iVar21 < 0) {
    return uVar13;
  }
  uVar13 = (ulonglong)(iVar21 * iVar28 + iVar20);
  if (*(ulonglong *)(param_8 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13,*(ulonglong *)(param_8 + 0x10),&UNK_1430582b0);
  }
  uVar15 = *(ulonglong *)(*(longlong *)(param_8 + 8) + 8 + uVar13 * 0x30);
  uVar13 = *(ulonglong *)(*(longlong *)(param_8 + 8) + 0x10 + uVar13 * 0x30);
  lVar24 = param_7[2];
  uVar14 = *param_7 - lVar24;
  if (uVar14 < uVar13) {
    pdb_142d7f1b0(param_7,lVar24,uVar13,8,8,fVar52);
    lVar24 = param_7[2];
  }
  else if (uVar13 == 0) goto LAB_140b3b1f0;
  lVar23 = _UNK_143057f08;
  lVar5 = _DAT_143057f00;
  lVar10 = _UNK_143057ef8;
  lVar9 = _DAT_143057ef0;
  lVar4 = param_7[1];
  uVar19 = uVar13 * 0x38 - 0x38;
  uVar14 = uVar15;
  if (0xa7 < uVar19) {
    uVar18 = uVar19 / 0x38 + 1;
    uVar25 = uVar18 & 0xfffffffffffffffc;
    uVar14 = uVar25 * 0x38 + uVar15;
    lVar2 = lVar4 + lVar24 * 8;
    lVar24 = lVar24 + uVar25;
    uVar22 = 0;
    uVar19 = uVar15;
    do {
      auVar42._8_4_ = (int)uVar19;
      auVar42._0_8_ = uVar19;
      auVar42._12_4_ = (int)(uVar19 >> 0x20);
      plVar3 = (longlong *)(lVar2 + uVar22 * 8);
      *plVar3 = uVar19 + lVar9;
      plVar3[1] = auVar42._8_8_ + lVar10;
      plVar3 = (longlong *)(lVar2 + 0x10 + uVar22 * 8);
      *plVar3 = uVar19 + lVar5;
      plVar3[1] = auVar42._8_8_ + lVar23;
      uVar22 = uVar22 + 4;
      uVar19 = uVar19 + 0xe0;
    } while (uVar25 != uVar22);
    if (uVar18 == uVar25) goto LAB_140b3b1f0;
  }
  do {
    *(ulonglong *)(lVar4 + lVar24 * 8) = uVar14;
    lVar24 = lVar24 + 1;
    uVar14 = uVar14 + 0x38;
  } while (uVar14 != uVar15 + uVar13 * 0x38);
LAB_140b3b1f0:
  param_7[2] = lVar24;
  return uVar14;
}

