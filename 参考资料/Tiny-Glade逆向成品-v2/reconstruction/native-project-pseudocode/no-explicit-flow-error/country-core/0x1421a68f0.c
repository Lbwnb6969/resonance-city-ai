// VA 0x1421a68f0, PDB extent 730 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::read_bush_positions_from_gpu::impl$0::bushes_near_point::closure_env$0<system_clutter::autoclutter::populate_autoclutter_regions::filter_clutter_object::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::read_bush_positions_from_gpu::impl$0::bushes_near_point::closure_env$0<system_clutter::autoclutter::populate_autoclutter_regions::filter_clutter_object::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 730 */

void pdb_1421a68f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar8 = (undefined4)param_1;
  pub_142e32a50();
  uVar18 = pub_142e32a40();
  uVar19 = pub_142e32a40();
  pub_142e32a50();
  pub_142e32a50();
  uVar20 = pub_142e329c0();
  auVar22._0_4_ = pub_142e329c0();
  fVar6 = _DAT_142e3783c;
  auVar22._4_4_ = uVar20;
  auVar22._12_4_ = uVar18;
  auVar22._8_4_ = uVar19;
  auVar23 = maxps(auVar22,ZEXT816(0));
  fVar21 = auVar23._0_4_;
  fVar24 = auVar23._4_4_;
  fVar25 = auVar23._8_4_;
  fVar26 = auVar23._12_4_;
  auVar23._4_4_ = -(uint)(fVar24 < _UNK_143043144);
  auVar23._0_4_ = -(uint)(fVar21 < _DAT_143043140);
  auVar23._8_4_ = -(uint)(fVar25 < _UNK_143043148);
  auVar23._12_4_ = -(uint)(fVar26 < _UNK_14304314c);
  uVar9 = movmskps(uVar8,auVar23);
  uVar14 = 0;
  uVar7 = (uint)(longlong)fVar26;
  if (fVar26 < 0.0) {
    uVar7 = uVar14;
  }
  if (_DAT_142e46a48 < fVar26) {
    uVar7 = 0xffffffff;
  }
  if ((uVar9 & 8) == 0) {
    uVar7 = 0x3f;
  }
  uVar11 = (longlong)fVar25 & 0xffffffff;
  if (fVar25 < 0.0) {
    uVar11 = 0;
  }
  if (_DAT_142e46a48 < fVar25) {
    uVar11 = 0xffffffff;
  }
  if ((uVar9 & 4) == 0) {
    uVar11 = 0x3f;
  }
  uVar15 = (uint)(longlong)fVar24;
  if (fVar24 < 0.0) {
    uVar15 = uVar14;
  }
  if (_DAT_142e46a48 < fVar24) {
    uVar15 = 0xffffffff;
  }
  if ((uVar9 & 2) == 0) {
    uVar15 = 0x3f;
  }
  uVar16 = (uint)(longlong)fVar21;
  if (fVar21 < 0.0) {
    uVar16 = uVar14;
  }
  if (_DAT_142e46a48 < fVar21) {
    uVar16 = 0xffffffff;
  }
  if ((uVar9 & 1) == 0) {
    uVar16 = 0x3f;
  }
  if (((uint)uVar11 < uVar16) && (uVar7 < uVar15)) {
    lVar2 = *(longlong *)(param_2 + 8);
    uVar3 = *(ulonglong *)(param_2 + 0x10);
    lVar4 = *param_3;
    puVar5 = (undefined1 *)param_3[1];
    do {
      uVar13 = uVar11 + 1;
      uVar17 = (ulonglong)uVar7;
      do {
        uVar9 = pdb_140c6c1a0(uVar17 + (uVar11 << 0x20));
        uVar10 = (ulonglong)uVar9;
        if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,uVar3,&UNK_14346cc98);
        }
        uVar17 = uVar17 + 1;
        lVar12 = 0;
        while (*(longlong *)(lVar2 + 0x10 + uVar10 * 0x20) << 3 != lVar12) {
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 8 + uVar10 * 0x20) + lVar12);
          fVar21 = (float)uVar1 - *(float *)(lVar4 + 0x48);
          fVar24 = (float)((ulonglong)uVar1 >> 0x20) - *(float *)(lVar4 + 0x50);
          lVar12 = lVar12 + 8;
          if (SQRT(fVar24 * fVar24 + fVar21 * fVar21) <
              *(float *)(*(longlong *)(lVar4 + 0x38) + 0x60) + fVar6) {
            *puVar5 = 1;
            goto joined_r0x0001421a6b7b;
          }
        }
      } while (uVar17 != uVar15);
joined_r0x0001421a6b7b:
      uVar11 = uVar13;
    } while (uVar13 != uVar16);
  }
  return;
}

