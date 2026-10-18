// VA 0x1421a65f0, PDB extent 761 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::impl$1::remove_region_from_lazy_grid::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::impl$1::remove_region_from_lazy_grid::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 761 */

void pdb_1421a65f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  
  plVar12 = param_2;
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar10 = SUB84(plVar12,0);
  pub_142e32a50();
  uVar21 = pub_142e32a40();
  uVar22 = pub_142e32a40();
  pub_142e32a50();
  pub_142e32a50();
  uVar23 = pub_142e329c0();
  auVar25._0_4_ = pub_142e329c0();
  auVar25._4_4_ = uVar23;
  auVar25._12_4_ = uVar21;
  auVar25._8_4_ = uVar22;
  auVar26 = maxps(auVar25,ZEXT816(0));
  fVar24 = auVar26._0_4_;
  fVar27 = auVar26._4_4_;
  fVar28 = auVar26._8_4_;
  fVar29 = auVar26._12_4_;
  auVar26._4_4_ = -(uint)(fVar27 < _UNK_143043144);
  auVar26._0_4_ = -(uint)(fVar24 < _DAT_143043140);
  auVar26._8_4_ = -(uint)(fVar28 < _UNK_143043148);
  auVar26._12_4_ = -(uint)(fVar29 < _UNK_14304314c);
  uVar11 = movmskps(uVar10,auVar26);
  uVar17 = 0;
  uVar9 = (uint)(longlong)fVar29;
  if (fVar29 < 0.0) {
    uVar9 = uVar17;
  }
  if (_DAT_142e46a48 < fVar29) {
    uVar9 = 0xffffffff;
  }
  if ((uVar11 & 8) == 0) {
    uVar9 = 0x3f;
  }
  uVar18 = (uint)(longlong)fVar28;
  if (fVar28 < 0.0) {
    uVar18 = uVar17;
  }
  if (_DAT_142e46a48 < fVar28) {
    uVar18 = 0xffffffff;
  }
  if ((uVar11 & 4) == 0) {
    uVar18 = 0x3f;
  }
  uVar8 = (uint)(longlong)fVar27;
  if (fVar27 < 0.0) {
    uVar8 = uVar17;
  }
  if (_DAT_142e46a48 < fVar27) {
    uVar8 = 0xffffffff;
  }
  if ((uVar11 & 2) == 0) {
    uVar8 = 0x3f;
  }
  uVar17 = (uint)(longlong)fVar24;
  if (fVar24 < 0.0) {
    uVar17 = 0;
  }
  if (_DAT_142e46a48 < fVar24) {
    uVar17 = 0xffffffff;
  }
  if ((uVar11 & 1) == 0) {
    uVar17 = 0x3f;
  }
  if ((uVar18 < uVar17) && (uVar9 < uVar8)) {
    lVar2 = *param_2;
    uVar3 = param_2[1];
    plVar12 = (longlong *)param_2[2];
    uVar15 = (ulonglong)uVar18;
    do {
      uVar16 = uVar15 + 1;
      uVar13 = (ulonglong)uVar9;
      do {
        uVar14 = uVar13 + uVar15 * 0x40;
        if (uVar3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,uVar3,&UNK_14346cc20);
        }
        uVar4 = *(ulonglong *)(lVar2 + 0x10 + uVar14 * 0x18);
        if (uVar4 != 0) {
          lVar1 = lVar2 + uVar14 * 0x18;
          lVar5 = *(longlong *)(lVar1 + 8);
          lVar6 = *plVar12;
          uVar14 = 0;
LAB_1421a6810:
          if (*(longlong *)(lVar5 + uVar14 * 8) != lVar6) goto code_r0x0001421a6816;
          uVar20 = uVar14 + 1;
          uVar19 = uVar14;
          if (uVar20 < uVar4) {
            if (((int)uVar4 + (int)uVar14 & 1U) == 0) {
              lVar7 = *(longlong *)(lVar5 + 8 + uVar14 * 8);
              if (lVar7 != lVar6) {
                *(longlong *)(lVar5 + uVar14 * 8) = lVar7;
                uVar19 = uVar14 + 1;
              }
              uVar20 = uVar14 + 2;
            }
            if (uVar4 - 2 != uVar14) {
              do {
                lVar7 = *(longlong *)(lVar5 + uVar20 * 8);
                if (lVar7 != lVar6) {
                  *(longlong *)(lVar5 + uVar19 * 8) = lVar7;
                  uVar19 = uVar19 + 1;
                }
                lVar7 = *(longlong *)(lVar5 + 8 + uVar20 * 8);
                if (lVar7 != lVar6) {
                  *(longlong *)(lVar5 + uVar19 * 8) = lVar7;
                  uVar19 = uVar19 + 1;
                }
                uVar20 = uVar20 + 2;
              } while (uVar4 != uVar20);
            }
          }
          *(ulonglong *)(lVar1 + 0x10) = uVar19;
        }
LAB_1421a67e0:
        uVar13 = uVar13 + 1;
      } while (uVar8 != (uint)uVar13);
      uVar15 = uVar16;
    } while (uVar17 != (uint)uVar16);
  }
  return;
code_r0x0001421a6816:
  uVar14 = uVar14 + 1;
  if (uVar4 == uVar14) goto LAB_1421a67e0;
  goto LAB_1421a6810;
}

