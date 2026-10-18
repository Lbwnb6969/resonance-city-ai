// VA 0x142b24190, PDB extent 741 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::convert_preplaced_trees::convert_preplaced_trees::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::convert_preplaced_trees::convert_preplaced_trees::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 741 */

undefined1 * pdb_142b24190(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined1 *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  
  pdb_140b57880(&uStack_c8,param_1);
  uVar2 = uStack_c0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uStack_c8;
  pdb_140defaa0(&uStack_98,param_2);
  fVar15 = (float)pdb_140b578a0(param_1);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uStack_98;
  auVar22 = maxps(auVar21,auVar22);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uStack_90;
  lVar8 = param_1;
  uVar5 = pdb_140b57880(&uStack_c8);
  uVar11 = (uint)lVar8;
  iVar13 = -(uint)((float)uStack_c8 <= auVar22._0_4_);
  iVar14 = -(uint)((float)(uStack_c8 >> 0x20) <= auVar22._4_4_);
  auVar20._4_4_ = iVar13;
  auVar20._0_4_ = iVar13;
  auVar20._8_4_ = iVar14;
  auVar20._12_4_ = iVar14;
  iVar13 = movmskpd(uVar5,auVar20);
  if (iVar13 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143669f70,0x44,&UNK_14366a000);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  auVar20 = minps(auVar19,auVar4);
  iVar13 = -(uint)(auVar20._0_4_ <= (float)uStack_c0);
  iVar14 = -(uint)(auVar20._4_4_ <= (float)(uStack_c0 >> 0x20));
  auVar3._4_4_ = iVar13;
  auVar3._0_4_ = iVar13;
  auVar3._8_4_ = iVar14;
  auVar3._12_4_ = iVar14;
  iVar13 = movmskpd(3,auVar3);
  if (iVar13 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a018,0x44,&UNK_14366a060);
  }
  fVar16 = (float)pdb_140b578a0(param_1);
  if (fVar16 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a078,0x31,&UNK_14366a0b0);
  }
  puStack_b0 = param_3;
  iVar13 = pdb_140b575c0(param_1,auVar22._0_4_,auVar22._4_4_);
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  uVar10 = 0;
  if (0 < (int)uVar11) {
    uVar10 = uVar11;
  }
  fVar16 = auVar20._0_4_ + 0.0;
  puVar6 = (undefined1 *)pdb_140b575c0(param_1,fVar16,auVar20._4_4_ + 0.0);
  iVar14 = (int)*(undefined8 *)(param_1 + 0x48) + -1;
  uVar9 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) - 1;
  if ((int)puVar6 < iVar14) {
    iVar14 = (int)puVar6;
  }
  if ((int)uVar11 < (int)uVar9) {
    uVar9 = uVar11;
  }
  uStack_b8 = (ulonglong)uVar9;
  if ((int)uVar10 <= (int)uVar9) {
    if (iVar14 < iVar13) {
      do {
        if ((int)uVar9 <= (int)uVar10) {
          return (undefined1 *)0x0;
        }
        puVar6 = (undefined1 *)(ulonglong)((int)uVar10 < (int)uVar9);
        uVar10 = uVar10 + ((int)uVar10 < (int)uVar9);
      } while ((int)uVar10 <= (int)uVar9);
    }
    else {
      uVar1 = *param_2;
      fVar18 = fVar15 * _DAT_142e36f50 * _DAT_142f6d804;
      fVar15 = *(float *)(param_2 + 1);
      lStack_a8 = *(longlong *)(param_1 + 8);
      uVar2 = *(ulonglong *)(param_1 + 0x10);
      lStack_a0 = param_1;
      do {
        uVar11 = ((int)uVar10 < (int)uStack_b8) + uVar10;
        iVar12 = iVar13;
        do {
          uVar7 = pdb_140b575b0(param_1,iVar12,uVar10);
          puVar6 = (undefined1 *)pdb_140b56b20(param_1,uVar7);
          fVar17 = extraout_XMM0_Da - (float)uVar1;
          fVar16 = fVar16 - (float)((ulonglong)uVar1 >> 0x20);
          fVar16 = fVar16 * fVar16 + fVar17 * fVar17;
          if (SQRT(fVar16) < fVar18 + fVar15) {
            if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar7,uVar2,&UNK_14366a0c8);
            }
            puVar6 = (undefined1 *)(uVar7 * 0x30);
            if (*(longlong *)(puVar6 + lStack_a8 + 0x10) != 0) {
              *puStack_b0 = 0;
              return puStack_b0;
            }
          }
        } while ((iVar12 < iVar14) && (iVar12 = iVar12 + (uint)(iVar12 < iVar14), iVar12 <= iVar14))
        ;
      } while (((int)uVar10 < (int)uStack_b8) && (uVar10 = uVar11, (int)uVar11 <= (int)uStack_b8));
    }
  }
  return puVar6;
}

