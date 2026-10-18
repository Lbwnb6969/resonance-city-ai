// VA 0x140a839c0, PDB extent 698 bytes
// country_core::utils::dirty_tiles::DirtyTiles::intersects_world_space_rect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::intersects_world_space_rect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 698 */

ulonglong pdb_140a839c0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar10 = param_1;
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar8 = (undefined4)lVar10;
  uVar20 = pub_142e32a40();
  pub_142e32a50();
  uVar5 = pub_142e329c0();
  fVar4 = _DAT_142e46a48;
  auVar21._8_4_ = (int)((ulonglong)extraout_XMM0_Qa >> 0x20);
  auVar21._0_8_ = extraout_XMM0_Qa;
  auVar21._12_4_ = (int)((ulonglong)uVar20 >> 0x20);
  auVar22._8_8_ = auVar21._8_8_;
  auVar22._0_4_ = (undefined4)extraout_XMM0_Qa;
  auVar22._4_4_ = (int)uVar20;
  auVar22 = maxps(auVar22,ZEXT816(0));
  fVar19 = auVar22._0_4_;
  fVar25 = auVar22._4_4_;
  uVar14 = 0;
  uVar9 = 0;
  uVar17 = (uint)(longlong)fVar25;
  if (fVar25 < 0.0) {
    uVar17 = uVar9;
  }
  auVar2._4_4_ = -(uint)(fVar19 < _DAT_143043150);
  auVar2._0_4_ = -(uint)(fVar19 < _DAT_143043150);
  auVar2._8_4_ = -(uint)(fVar25 < _UNK_143043154);
  auVar2._12_4_ = -(uint)(fVar25 < _UNK_143043154);
  uVar6 = movmskpd(uVar5,auVar2);
  if (_DAT_142e46a48 < fVar25) {
    uVar17 = 0xffffffff;
  }
  if ((uVar6 & 2) == 0) {
    uVar17 = 0x3f;
  }
  uVar18 = (uint)(longlong)fVar19;
  if (fVar19 < 0.0) {
    uVar18 = uVar9;
  }
  if (_DAT_142e46a48 < fVar19) {
    uVar18 = 0xffffffff;
  }
  if ((uVar6 & 1) == 0) {
    uVar18 = 0x3f;
  }
  if (uVar17 < uVar18) {
    pub_142e32a50();
    uVar20 = pub_142e329c0();
    pub_142e32a50();
    auVar24._0_8_ = pub_142e32a40();
    auVar24._8_4_ = (int)((ulonglong)auVar24._0_8_ >> 0x20);
    auVar24._12_4_ = (int)((ulonglong)uVar20 >> 0x20);
    auVar23._8_8_ = auVar24._8_8_;
    auVar23._0_4_ = (undefined4)auVar24._0_8_;
    auVar23._4_4_ = (int)uVar20;
    auVar22 = maxps(auVar23,ZEXT816(0));
    fVar19 = auVar22._0_4_;
    fVar25 = auVar22._4_4_;
    uVar6 = (uint)(longlong)fVar25;
    if (fVar25 < 0.0) {
      uVar6 = uVar9;
    }
    if (fVar4 < fVar25) {
      uVar6 = 0xffffffff;
    }
    auVar3._4_4_ = -(uint)(fVar19 < _DAT_143043150);
    auVar3._0_4_ = -(uint)(fVar19 < _DAT_143043150);
    auVar3._8_4_ = -(uint)(fVar25 < _UNK_143043154);
    auVar3._12_4_ = -(uint)(fVar25 < _UNK_143043154);
    uVar9 = movmskpd(uVar8,auVar3);
    if ((uVar9 & 2) == 0) {
      uVar6 = 0x3f;
    }
    uVar12 = (longlong)fVar19 & 0xffffffff;
    if (fVar19 < 0.0) {
      uVar12 = uVar14;
    }
    if (fVar4 < fVar19) {
      uVar12 = 0xffffffff;
    }
    if ((uVar9 & 1) == 0) {
      uVar12 = 0x3f;
    }
    uVar15 = (ulonglong)uVar17;
    uVar16 = uVar12;
    if ((uint)uVar12 <= uVar6) {
      uVar16 = (ulonglong)uVar6;
    }
    if ((uint)uVar12 < uVar6) {
      uVar11 = 0x40;
      if (0x40 < uVar17) {
        uVar11 = (ulonglong)uVar17;
      }
      uVar14 = 0;
      do {
        if (uVar15 == uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(auVar22._0_8_,0x40,&UNK_143043240);
        }
        uVar1 = uVar15 + 1;
        uVar13 = uVar12;
        do {
          if (uVar16 == uVar13) goto LAB_140a83b83;
          uVar7 = uVar13 >> 6;
          if (uVar7 != 0) {
LAB_140a83c54:
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar7,1,&UNK_143043240);
          }
          uVar7 = uVar13 & 0x3f;
          uVar13 = uVar13 + 1;
        } while ((*(ulonglong *)(param_1 + uVar15 * 8) >> uVar7 & 1) == 0);
        uVar14 = 1;
LAB_140a83b83:
        uVar15 = uVar1;
      } while (uVar1 != uVar18);
    }
    else {
      uVar14 = 0;
      do {
        uVar11 = uVar12;
        if (uVar15 < 0x40) {
          do {
            if (uVar16 == uVar11) goto LAB_140a83bd0;
            uVar7 = uVar11 >> 6;
            if (uVar7 != 0) goto LAB_140a83c54;
            uVar7 = uVar11 & 0x3f;
            uVar11 = uVar11 + 1;
          } while ((*(ulonglong *)(param_1 + uVar15 * 8) >> uVar7 & 1) == 0);
          uVar14 = 1;
        }
LAB_140a83bd0:
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar18);
    }
  }
  return uVar14;
}

