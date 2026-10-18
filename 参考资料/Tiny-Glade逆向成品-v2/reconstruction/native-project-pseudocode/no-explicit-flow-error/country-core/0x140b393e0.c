// VA 0x140b393e0, PDB extent 1192 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_aabb<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_aabb_clamped::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::get_cells_from_aabb<country_core::systems::wall::wall_state::wall_spatial_hash::impl$4::query_with_aabb_clamped::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1192 */

ulonglong pdb_140b393e0(longlong param_1,undefined8 param_2,float param_3,float param_4,
                       float param_5,float param_6,longlong *param_7,longlong param_8)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar16;
  int iVar17;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  float fVar30;
  int iVar15;
  ulonglong uVar18;
  
  fVar3 = *(float *)(param_1 + 0x50);
  if ((in_XMM1._0_4_ < fVar3 * _DAT_142e36f38) ||
     (param_3 < _DAT_142e36f38 * *(float *)(param_1 + 0x54))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430582c8,0x44,&UNK_143058310);
  }
  if ((fVar3 * _DAT_142e36f50 < param_4) || (_DAT_142e36f50 * *(float *)(param_1 + 0x54) < param_5))
  {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058328,0x44,&UNK_143058370);
  }
  fVar30 = fVar3 / (float)*(int *)(param_1 + 0x48);
  if (fVar30 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143058388,0x31,&UNK_1430583c0);
  }
  auVar29._4_12_ = in_XMM1._4_12_;
  auVar29._0_4_ = ((in_XMM1._0_4_ - param_6) + fVar3 * _DAT_142e36f50) / fVar30;
  fVar30 = (float)pub_142e32a40(param_1,auVar29._0_8_);
  fVar3 = _DAT_142e382cc;
  iVar25 = (int)fVar30;
  if (_DAT_142e382cc < fVar30) {
    iVar25 = 0x7fffffff;
  }
  if (NAN(fVar30)) {
    iVar25 = 0;
  }
  fVar30 = (float)pub_142e32a40();
  iVar21 = (int)fVar30;
  if (fVar3 < fVar30) {
    iVar21 = 0x7fffffff;
  }
  if (NAN(fVar30)) {
    iVar21 = 0;
  }
  if (iVar25 < 1) {
    iVar25 = 0;
  }
  if (iVar21 < 1) {
    iVar21 = 0;
  }
  fVar30 = (float)pub_142e32a40();
  uVar27 = (int)fVar30;
  if (fVar3 < fVar30) {
    uVar27 = 0x7fffffff;
  }
  if (NAN(fVar30)) {
    uVar27 = 0;
  }
  fVar30 = (float)pub_142e32a40();
  lVar11 = _UNK_143057f08;
  lVar10 = _DAT_143057f00;
  lVar9 = _UNK_143057ef8;
  lVar8 = _DAT_143057ef0;
  uVar14 = (int)fVar30;
  if (fVar3 < fVar30) {
    uVar14 = 0x7fffffff;
  }
  uVar13 = (ulonglong)uVar14;
  if (NAN(fVar30)) {
    uVar13 = 0;
  }
  iVar15 = (int)*(undefined8 *)(param_1 + 0x48);
  uVar14 = iVar15 - 1;
  uVar16 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) - 1;
  if ((int)uVar14 <= (int)uVar27) {
    uVar27 = uVar14;
  }
  uVar18 = (ulonglong)uVar16;
  if ((int)uVar13 < (int)uVar16) {
    uVar18 = uVar13;
  }
  iVar17 = (int)uVar18;
  if (iVar21 <= iVar17) {
    if ((int)uVar27 < iVar25) {
      do {
        if (iVar17 <= iVar21) {
          return 0;
        }
        uVar13 = (ulonglong)(iVar21 < iVar17);
        iVar21 = iVar21 + (uint)(iVar21 < iVar17);
      } while (iVar21 <= iVar17);
    }
    else {
      lVar4 = *(longlong *)(param_8 + 8);
      uVar18 = *(ulonglong *)(param_8 + 0x10);
      do {
        iVar12 = (uint)(iVar21 < iVar17) + iVar21;
        iVar26 = iVar25;
        do {
          uVar13 = (ulonglong)(iVar21 * iVar15 + iVar26);
          if (uVar18 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar13,uVar18,&UNK_143058408);
          }
          uVar5 = *(ulonglong *)(lVar4 + 8 + uVar13 * 0x30);
          uVar6 = *(ulonglong *)(lVar4 + 0x10 + uVar13 * 0x30);
          lVar22 = param_7[2];
          uVar13 = *param_7 - lVar22;
          if (uVar13 < uVar6) {
            pdb_142d7f1b0(param_7,lVar22,uVar6,8,8);
            lVar22 = param_7[2];
LAB_140b396fb:
            lVar7 = param_7[1];
            uVar24 = uVar6 * 0x38 - 0x38;
            uVar13 = uVar5;
            if (0xa7 < uVar24) {
              uVar19 = uVar24 / 0x38 + 1;
              uVar23 = uVar19 & 0xfffffffffffffffc;
              uVar13 = uVar23 * 0x38 + uVar5;
              lVar1 = lVar7 + lVar22 * 8;
              lVar22 = lVar22 + uVar23;
              uVar20 = 0;
              uVar24 = uVar5;
              do {
                auVar28._8_4_ = (int)uVar24;
                auVar28._0_8_ = uVar24;
                auVar28._12_4_ = (int)(uVar24 >> 0x20);
                plVar2 = (longlong *)(lVar1 + uVar20 * 8);
                *plVar2 = uVar24 + lVar8;
                plVar2[1] = auVar28._8_8_ + lVar9;
                plVar2 = (longlong *)(lVar1 + 0x10 + uVar20 * 8);
                *plVar2 = uVar24 + lVar10;
                plVar2[1] = auVar28._8_8_ + lVar11;
                uVar20 = uVar20 + 4;
                uVar24 = uVar24 + 0xe0;
              } while (uVar23 != uVar20);
              if (uVar19 == uVar23) goto LAB_140b397c0;
            }
            do {
              *(ulonglong *)(lVar7 + lVar22 * 8) = uVar13;
              lVar22 = lVar22 + 1;
              uVar13 = uVar13 + 0x38;
            } while (uVar13 != uVar5 + uVar6 * 0x38);
          }
          else if (uVar6 != 0) goto LAB_140b396fb;
LAB_140b397c0:
          param_7[2] = lVar22;
        } while ((iVar26 < (int)uVar27) &&
                (iVar26 = iVar26 + (uint)(iVar26 < (int)uVar27), iVar26 <= (int)uVar27));
      } while ((iVar21 < iVar17) && (iVar21 = iVar12, iVar12 <= iVar17));
    }
  }
  return uVar13;
}

