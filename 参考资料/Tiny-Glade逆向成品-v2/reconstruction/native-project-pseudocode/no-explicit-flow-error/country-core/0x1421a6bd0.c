// VA 0x1421a6bd0, PDB extent 678 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::impl$1::add_region_to_lazy_grid::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::impl$1::add_region_to_lazy_grid::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 678 */

void pdb_1421a6bd0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar6 = (undefined4)param_1;
  pub_142e32a50();
  uVar17 = pub_142e32a40();
  uVar18 = pub_142e32a40();
  pub_142e32a50();
  pub_142e32a50();
  uVar19 = pub_142e329c0();
  auVar21._0_4_ = pub_142e329c0();
  auVar21._4_4_ = uVar19;
  auVar21._12_4_ = uVar17;
  auVar21._8_4_ = uVar18;
  auVar22 = maxps(auVar21,ZEXT816(0));
  fVar20 = auVar22._0_4_;
  fVar23 = auVar22._4_4_;
  fVar24 = auVar22._8_4_;
  fVar25 = auVar22._12_4_;
  auVar22._4_4_ = -(uint)(fVar23 < _UNK_143043144);
  auVar22._0_4_ = -(uint)(fVar20 < _DAT_143043140);
  auVar22._8_4_ = -(uint)(fVar24 < _UNK_143043148);
  auVar22._12_4_ = -(uint)(fVar25 < _UNK_14304314c);
  uVar7 = movmskps(uVar6,auVar22);
  uVar5 = (uint)(longlong)fVar25;
  if (fVar25 < 0.0) {
    uVar5 = 0;
  }
  if (_DAT_142e46a48 < fVar25) {
    uVar5 = 0xffffffff;
  }
  if ((uVar7 & 8) == 0) {
    uVar5 = 0x3f;
  }
  uVar8 = (uint)(longlong)fVar24;
  if (fVar24 < 0.0) {
    uVar8 = 0;
  }
  if (_DAT_142e46a48 < fVar24) {
    uVar8 = 0xffffffff;
  }
  if ((uVar7 & 4) == 0) {
    uVar8 = 0x3f;
  }
  uVar13 = (uint)(longlong)fVar23;
  if (fVar23 < 0.0) {
    uVar13 = 0;
  }
  if (_DAT_142e46a48 < fVar23) {
    uVar13 = 0xffffffff;
  }
  if ((uVar7 & 2) == 0) {
    uVar13 = 0x3f;
  }
  uVar14 = (uint)(longlong)fVar20;
  if (fVar20 < 0.0) {
    uVar14 = 0;
  }
  if (_DAT_142e46a48 < fVar20) {
    uVar14 = 0xffffffff;
  }
  if ((uVar7 & 1) == 0) {
    uVar14 = 0x3f;
  }
  if ((uVar8 < uVar14) && (uVar5 <= uVar13 && uVar13 - uVar5 != 0)) {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)param_2[2];
    uVar9 = (ulonglong)uVar8;
    uVar12 = uVar9 * 0x40 + (ulonglong)uVar5;
    plVar15 = (longlong *)(uVar9 * 0x600 + (ulonglong)uVar5 * 0x18 + *param_2);
    do {
      uVar9 = uVar9 + 1;
      plVar10 = plVar15;
      uVar11 = uVar12;
      iVar16 = uVar13 - uVar5;
      do {
        if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uVar1,&UNK_14346cc08);
        }
        uVar3 = *puVar2;
        lVar4 = plVar10[2];
        if (lVar4 == *plVar10) {
          pdb_142d7e8a0(plVar10);
        }
        *(undefined8 *)(plVar10[1] + lVar4 * 8) = uVar3;
        plVar10[2] = lVar4 + 1;
        uVar11 = uVar11 + 1;
        plVar10 = plVar10 + 3;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      uVar12 = uVar12 + 0x40;
      plVar15 = plVar15 + 0xc0;
    } while (uVar14 != (uint)uVar9);
  }
  return;
}

