// VA 0x142b248e0, PDB extent 1027 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::hide_trees::hide_trees::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::hide_trees::hide_trees::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1027 */

undefined1 * pdb_142b248e0(ulonglong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float extraout_XMM0_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 *puStack_b8;
  longlong *plStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  
  pdb_140b57880(&uStack_c8,param_1);
  uVar12 = uStack_c0;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uStack_c8;
  pdb_140defaa0(&uStack_a8,param_2);
  fVar20 = (float)pdb_140b578a0(param_1);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uStack_a8;
  auVar36 = maxps(auVar35,auVar36);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uStack_a0;
  uVar11 = param_1;
  uVar7 = pdb_140b57880(&uStack_c8);
  fVar37 = auVar36._4_4_;
  iVar18 = -(uint)((float)uStack_c8 <= auVar36._0_4_);
  iVar19 = -(uint)((float)(uStack_c8 >> 0x20) <= fVar37);
  auVar33._4_4_ = iVar18;
  auVar33._0_4_ = iVar18;
  auVar33._8_4_ = iVar19;
  auVar33._12_4_ = iVar19;
  iVar18 = movmskpd(uVar7,auVar33);
  if (iVar18 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143669f70,0x44,&UNK_14366a000);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar33 = minps(auVar32,auVar6);
  fVar34 = auVar33._4_4_;
  iVar18 = -(uint)(auVar33._0_4_ <= (float)uStack_c0);
  iVar19 = -(uint)(fVar34 <= (float)(uStack_c0 >> 0x20));
  auVar5._4_4_ = iVar18;
  auVar5._0_4_ = iVar18;
  auVar5._8_4_ = iVar19;
  auVar5._12_4_ = iVar19;
  iVar18 = movmskpd(3,auVar5);
  if (iVar18 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a018,0x44,&UNK_14366a060);
  }
  fVar21 = (float)pdb_140b578a0(param_1);
  if (fVar21 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a078,0x31,&UNK_14366a0b0);
  }
  uVar8 = pdb_140b575c0(param_1,auVar36._0_4_,CONCAT44(fVar37,fVar37));
  iVar18 = (int)uVar11;
  uVar14 = 0;
  uVar12 = (ulonglong)uVar8;
  if ((int)uVar8 < 1) {
    uVar12 = uVar14;
  }
  if (0 < iVar18) {
    uVar14 = uVar11 & 0xffffffff;
  }
  fVar31 = auVar33._0_4_ + 0.0;
  puVar9 = (undefined1 *)pdb_140b575c0(param_1,fVar31,CONCAT44(fVar34,fVar34 + 0.0));
  fVar21 = _DAT_143006dc0;
  fVar34 = _DAT_142e3798c;
  fVar37 = _DAT_142e36f28;
  iVar15 = (int)*(undefined8 *)(param_1 + 0x48) + -1;
  iVar19 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) + -1;
  if ((int)puVar9 < iVar15) {
    iVar15 = (int)puVar9;
  }
  if (iVar18 < iVar19) {
    iVar19 = iVar18;
  }
  if ((int)uVar14 <= iVar19) {
    if (iVar15 < (int)uVar12) {
      do {
        iVar18 = (int)uVar14;
        if (iVar19 <= iVar18) {
          return (undefined1 *)0x0;
        }
        puVar9 = (undefined1 *)(ulonglong)(iVar18 < iVar19);
        uVar8 = iVar18 + (uint)(iVar18 < iVar19);
        uVar14 = (ulonglong)uVar8;
      } while ((int)uVar8 <= iVar19);
    }
    else {
      fVar30 = fVar20 * _DAT_142e36f50 * _DAT_142f6d804;
      fVar20 = *(float *)(param_2 + 1);
      uVar2 = *param_2;
      lVar3 = *(longlong *)(param_1 + 8);
      uVar11 = *(ulonglong *)(param_1 + 0x10);
      plStack_b0 = (longlong *)*param_3;
      pfVar4 = (float *)param_3[1];
      puStack_b8 = param_3;
      do {
        iVar18 = (int)uVar14;
        uVar8 = (uint)(iVar18 < iVar19) + iVar18;
        uVar14 = (ulonglong)uVar8;
        uVar10 = uVar12;
        do {
          iVar16 = (int)uVar10;
          uVar10 = pdb_140b575b0(param_1,uVar10);
          puVar9 = (undefined1 *)pdb_140b56b20(param_1,uVar10);
          fVar22 = extraout_XMM0_Da - (float)uVar2;
          fVar31 = fVar31 - (float)((ulonglong)uVar2 >> 0x20);
          fVar31 = fVar31 * fVar31 + fVar22 * fVar22;
          if (SQRT(fVar31) < fVar30 + fVar20) {
            if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar10,uVar11,&UNK_14366a0c8);
            }
            puVar9 = (undefined1 *)(uVar10 * 0x30);
            plVar1 = (longlong *)(puVar9 + lVar3 + 0x10);
            if (*plVar1 != 0) {
              puVar9 = *(undefined1 **)(puVar9 + lVar3 + 8);
              lVar13 = 0;
              do {
                if (*(longlong *)(puVar9 + lVar13 + 0x28) == *plStack_b0) {
                  fVar23 = (float)*(undefined8 *)(puVar9 + lVar13 + 8);
                  fVar24 = (float)((ulonglong)*(undefined8 *)(puVar9 + lVar13 + 8) >> 0x20);
                  fVar31 = *pfVar4;
                  fVar22 = pfVar4[2];
                  fVar25 = (float)*(undefined8 *)(puVar9 + lVar13);
                  fVar26 = (float)((ulonglong)*(undefined8 *)(puVar9 + lVar13) >> 0x20);
                  fVar28 = fVar23 - fVar25;
                  fVar29 = fVar24 - fVar26;
                  fVar27 = fVar29 * fVar29 + fVar28 * fVar28;
                  if (fVar27 <= fVar21) {
                    fVar27 = fVar21;
                  }
                  fVar27 = ((fVar22 - fVar26) * fVar29 + (fVar31 - fVar25) * fVar28) / fVar27;
                  fVar28 = 0.0;
                  if (0.0 <= fVar27) {
                    fVar28 = fVar27;
                  }
                  fVar27 = fVar37;
                  if (fVar28 <= fVar37) {
                    fVar27 = fVar28;
                  }
                  fVar31 = fVar31 - (fVar27 * fVar23 + (fVar37 - fVar27) * fVar25);
                  fVar22 = fVar22 - (fVar27 * fVar24 + (fVar37 - fVar27) * fVar26);
                  fVar31 = fVar22 * fVar22 + fVar31 * fVar31;
                  if (SQRT(fVar31) < fVar34) {
                    puVar9 = (undefined1 *)puStack_b8[2];
                    *puVar9 = 0;
                    return puVar9;
                  }
                }
                lVar13 = lVar13 + 0x38;
              } while (*plVar1 * 0x38 - lVar13 != 0);
            }
          }
          if (iVar15 <= iVar16) break;
          puVar9 = (undefined1 *)(ulonglong)(iVar16 < iVar15);
          uVar17 = iVar16 + (uint)(iVar16 < iVar15);
          uVar10 = (ulonglong)uVar17;
        } while ((int)uVar17 <= iVar15);
      } while ((iVar18 < iVar19) && ((int)uVar8 <= iVar19));
    }
  }
  return puVar9;
}

