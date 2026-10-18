// VA 0x140b3b310, PDB extent 1602 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_rectangle2d<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_rectangle2d::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_rectangle2d<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_rectangle2d::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1602 */

ulonglong pdb_140b3b310(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar55;
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [168];
  ulonglong uVar25;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  
  uVar22 = *(ulonglong *)(param_1 + 0x50);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar22;
  fVar57 = (float)(uVar22 >> 0x20);
  pdb_140df3450(&uStack_108);
  pdb_140deead0(auStack_f8);
  pdb_140df1c10(&fStack_128,param_2);
  fVar17 = (float)uStack_120;
  fVar18 = uStack_120._4_4_;
  fVar56 = (float)uVar22;
  fVar50 = fVar56 / (float)*(int *)(param_1 + 0x48);
  uVar19 = pdb_140df3380(&fStack_128);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uStack_108;
  auVar52._0_4_ = _DAT_142e61230 * fVar56;
  auVar52._4_4_ = _UNK_142e61234 * fVar57;
  auVar52._8_4_ = _UNK_142e61238 * 0.0;
  auVar52._12_4_ = _UNK_142e6123c * 0.0;
  auVar39 = maxps(auVar39,auVar52);
  iVar34 = -(uint)(auVar52._0_4_ <= auVar39._0_4_);
  iVar35 = -(uint)(auVar52._4_4_ <= auVar39._4_4_);
  auVar46._4_4_ = iVar35;
  auVar46._0_4_ = iVar34;
  auVar46._8_4_ = iVar35;
  auVar46._12_4_ = iVar35;
  auVar45._8_8_ = auVar46._8_8_;
  auVar45._4_4_ = iVar34;
  auVar45._0_4_ = iVar34;
  iVar34 = movmskpd(uVar19,auVar45);
  if (iVar34 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
  }
  fVar56 = _DAT_142e36f60 * fVar56;
  fVar57 = _UNK_142e36f64 * fVar57;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uStack_100;
  auVar10._4_4_ = fVar57;
  auVar10._0_4_ = fVar56;
  auVar10._8_4_ = _UNK_142e36f68 * 0.0;
  auVar10._12_4_ = _UNK_142e36f6c * 0.0;
  auVar52 = minps(auVar51,auVar10);
  iVar34 = -(uint)(auVar52._0_4_ <= fVar56);
  iVar35 = -(uint)(auVar52._4_4_ <= fVar57);
  auVar48._4_4_ = iVar35;
  auVar48._0_4_ = iVar34;
  auVar48._8_4_ = iVar35;
  auVar48._12_4_ = iVar35;
  auVar47._8_8_ = auVar48._8_8_;
  auVar47._4_4_ = iVar34;
  auVar47._0_4_ = iVar34;
  iVar34 = movmskpd(3,auVar47);
  if (iVar34 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
  }
  if (fVar50 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
  }
  auVar40._0_4_ = auVar39._0_4_ + fVar56;
  auVar40._4_4_ = auVar39._4_4_ + fVar57;
  auVar40._8_4_ = auVar39._8_4_ + _UNK_142e36f68 * 0.0;
  auVar40._12_4_ = auVar39._12_4_ + _UNK_142e36f6c * 0.0;
  auVar41._4_12_ = auVar40._4_12_;
  auVar41._0_4_ = auVar40._0_4_ / fVar50;
  fVar36 = (float)pub_142e32a40(auVar41._0_8_);
  fVar50 = _DAT_142e382cc;
  iVar34 = (int)fVar36;
  if (_DAT_142e382cc < fVar36) {
    iVar34 = 0x7fffffff;
  }
  if (NAN(fVar36)) {
    iVar34 = 0;
  }
  fVar36 = (float)pub_142e32a40();
  iVar35 = (int)fVar36;
  if (fVar50 < fVar36) {
    iVar35 = 0x7fffffff;
  }
  if (NAN(fVar36)) {
    iVar35 = 0;
  }
  if (iVar34 < 1) {
    iVar34 = 0;
  }
  if (iVar35 < 1) {
    iVar35 = 0;
  }
  fVar36 = (float)pub_142e32a40();
  uVar32 = (int)fVar36;
  if (fVar50 < fVar36) {
    uVar32 = 0x7fffffff;
  }
  if (NAN(fVar36)) {
    uVar32 = 0;
  }
  fVar37 = (float)pub_142e32a40();
  lVar16 = _UNK_143057f08;
  lVar15 = _DAT_143057f00;
  lVar14 = _UNK_143057ef8;
  lVar13 = _DAT_143057ef0;
  fVar12 = _UNK_142e37954;
  fVar36 = _DAT_142e37950;
  uVar23 = (int)fVar37;
  if (fVar50 < fVar37) {
    uVar23 = 0x7fffffff;
  }
  uVar22 = (ulonglong)uVar23;
  if (NAN(fVar37)) {
    uVar22 = 0;
  }
  iVar11 = (int)*(undefined8 *)(param_1 + 0x48);
  iVar33 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  uVar23 = iVar33 - 1;
  if ((int)(iVar11 - 1U) <= (int)uVar32) {
    uVar32 = iVar11 - 1U;
  }
  uVar25 = (ulonglong)uVar23;
  if ((int)uVar22 < (int)uVar23) {
    uVar25 = uVar22;
  }
  iVar24 = (int)uVar25;
  if (iVar35 <= iVar24) {
    if ((int)uVar32 < iVar34) {
      do {
        if (iVar24 <= iVar35) {
          return 0;
        }
        uVar22 = (ulonglong)(iVar35 < iVar24);
        iVar35 = iVar35 + (uint)(iVar35 < iVar24);
      } while (iVar35 <= iVar24);
    }
    else {
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8510(&UNK_14305a700);
      }
      lVar4 = *(longlong *)(param_4 + 8);
      uVar25 = *(ulonglong *)(param_4 + 0x10);
      fVar37 = (float)iVar11;
      fVar49 = (float)iVar33;
      uVar3 = *(undefined8 *)(param_2 + 8);
      auVar8._4_4_ = fVar49;
      auVar8._0_4_ = fVar37;
      auVar8._8_8_ = 0;
      auVar39 = divps(auVar54,auVar8);
      fVar53 = auVar39._0_4_ * _DAT_142e36f60;
      fVar55 = auVar39._4_4_ * _UNK_142e36f64;
      do {
        iVar20 = (uint)(iVar35 < iVar24) + iVar35;
        iVar33 = iVar34;
        do {
          iVar27 = iVar35 * iVar11 + iVar33;
          if ((iVar11 == -1) && (SBORROW4(0,iVar27))) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8550(&UNK_14305a700);
          }
          fVar38 = (float)pub_142e32a40((float)iVar27 / fVar37);
          iVar21 = (int)fVar38;
          if (fVar50 < fVar38) {
            iVar21 = 0x7fffffff;
          }
          if (NAN(fVar38)) {
            iVar21 = 0;
          }
          auVar42._0_4_ = (float)(iVar27 % iVar11);
          auVar42._4_4_ = (float)iVar21;
          auVar42._8_8_ = 0;
          auVar9._4_4_ = fVar49;
          auVar9._0_4_ = fVar37;
          auVar9._8_8_ = 0;
          auVar39 = divps(auVar42,auVar9);
          fVar38 = ((auVar39._0_4_ * fVar56 - (fVar36 - auVar39._0_4_) * fVar56) + fVar53) -
                   (float)uVar3;
          fVar44 = ((auVar39._4_4_ * fVar57 - (fVar12 - auVar39._4_4_) * fVar57) + fVar55) -
                   (float)((ulonglong)uVar3 >> 0x20);
          uStack_120 = CONCAT44(fVar44 * fVar18 + fVar38 * fVar17,
                                fVar44 * fStack_124 + fVar38 * fStack_128);
          pdb_140df3450(auStack_e8,&fStack_128);
          uVar22 = pdb_140deea30(auStack_f8,auStack_e8);
          if ((char)uVar22 != '\0') {
            uVar22 = (ulonglong)iVar27;
            if (uVar25 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar22,uVar25,&UNK_1430583f0);
            }
            uVar5 = *(ulonglong *)(lVar4 + 8 + uVar22 * 0x30);
            uVar6 = *(ulonglong *)(lVar4 + 0x10 + uVar22 * 0x30);
            lVar29 = param_3[2];
            uVar22 = *param_3 - lVar29;
            if (uVar22 < uVar6) {
              pdb_142d7f1b0(param_3,lVar29,uVar6,8,8);
              lVar29 = param_3[2];
LAB_140b3b7bc:
              lVar7 = param_3[1];
              uVar28 = uVar6 * 0x38 - 0x38;
              uVar22 = uVar5;
              if (0xa7 < uVar28) {
                uVar26 = uVar28 / 0x38 + 1;
                uVar30 = uVar26 & 0xfffffffffffffffc;
                uVar22 = uVar30 * 0x38 + uVar5;
                lVar1 = lVar7 + lVar29 * 8;
                lVar29 = lVar29 + uVar30;
                uVar31 = 0;
                uVar28 = uVar5;
                do {
                  auVar43._8_4_ = (int)uVar28;
                  auVar43._0_8_ = uVar28;
                  auVar43._12_4_ = (int)(uVar28 >> 0x20);
                  plVar2 = (longlong *)(lVar1 + uVar31 * 8);
                  *plVar2 = uVar28 + lVar13;
                  plVar2[1] = auVar43._8_8_ + lVar14;
                  plVar2 = (longlong *)(lVar1 + 0x10 + uVar31 * 8);
                  *plVar2 = uVar28 + lVar15;
                  plVar2[1] = auVar43._8_8_ + lVar16;
                  uVar31 = uVar31 + 4;
                  uVar28 = uVar28 + 0xe0;
                } while (uVar30 != uVar31);
                if (uVar26 == uVar30) goto LAB_140b3b870;
              }
              do {
                *(ulonglong *)(lVar7 + lVar29 * 8) = uVar22;
                lVar29 = lVar29 + 1;
                uVar22 = uVar22 + 0x38;
              } while (uVar22 != uVar5 + uVar6 * 0x38);
            }
            else if (uVar6 != 0) goto LAB_140b3b7bc;
LAB_140b3b870:
            param_3[2] = lVar29;
          }
        } while ((iVar33 < (int)uVar32) &&
                (iVar33 = iVar33 + (uint)(iVar33 < (int)uVar32), iVar33 <= (int)uVar32));
      } while ((iVar35 < iVar24) && (iVar35 = iVar20, iVar20 <= iVar24));
    }
  }
  return uVar22;
}

