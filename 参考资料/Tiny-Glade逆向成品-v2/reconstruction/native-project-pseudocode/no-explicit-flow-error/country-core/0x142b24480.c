// VA 0x142b24480, PDB extent 1110 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::hide_trees::hide_trees::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::query_with_circle_callback<system_tree::hide_trees::hide_trees::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1110 */

undefined1 * pdb_142b24480(ulonglong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Da;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong *plStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  
  pdb_140b57880(&uStack_c8,param_1);
  uVar16 = uStack_c0;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uStack_c8;
  pdb_140defaa0(&uStack_a8,param_2);
  fVar26 = (float)pdb_140b578a0(param_1);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uStack_a8;
  auVar42 = maxps(auVar41,auVar42);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uStack_a0;
  uVar14 = param_1;
  uVar9 = pdb_140b57880(&uStack_c8);
  fVar43 = auVar42._4_4_;
  iVar24 = -(uint)((float)uStack_c8 <= auVar42._0_4_);
  iVar25 = -(uint)((float)(uStack_c8 >> 0x20) <= fVar43);
  auVar39._4_4_ = iVar24;
  auVar39._0_4_ = iVar24;
  auVar39._8_4_ = iVar25;
  auVar39._12_4_ = iVar25;
  iVar24 = movmskpd(uVar9,auVar39);
  if (iVar24 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143669f70,0x44,&UNK_14366a000);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar16;
  auVar39 = minps(auVar38,auVar7);
  fVar40 = auVar39._4_4_;
  iVar24 = -(uint)(auVar39._0_4_ <= (float)uStack_c0);
  iVar25 = -(uint)(fVar40 <= (float)(uStack_c0 >> 0x20));
  auVar6._4_4_ = iVar24;
  auVar6._0_4_ = iVar24;
  auVar6._8_4_ = iVar25;
  auVar6._12_4_ = iVar25;
  iVar24 = movmskpd(3,auVar6);
  if (iVar24 != 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a018,0x44,&UNK_14366a060);
  }
  fVar27 = (float)pdb_140b578a0(param_1);
  if (fVar27 <= _DAT_142e36f50) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366a078,0x31,&UNK_14366a0b0);
  }
  uVar10 = pdb_140b575c0(param_1,auVar42._0_4_,CONCAT44(fVar43,fVar43));
  iVar24 = (int)uVar14;
  uVar20 = 0;
  uVar16 = (ulonglong)uVar10;
  if ((int)uVar10 < 1) {
    uVar16 = uVar20;
  }
  if (0 < iVar24) {
    uVar20 = uVar14 & 0xffffffff;
  }
  fVar37 = auVar39._0_4_ + 0.0;
  puVar11 = (undefined1 *)pdb_140b575c0(param_1,fVar37,CONCAT44(fVar40,fVar40 + 0.0));
  fVar27 = _DAT_143006dc0;
  fVar40 = _DAT_142e3798c;
  fVar43 = _DAT_142e36f28;
  iVar21 = (int)*(undefined8 *)(param_1 + 0x48) + -1;
  iVar25 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) + -1;
  if ((int)puVar11 < iVar21) {
    iVar21 = (int)puVar11;
  }
  if (iVar24 < iVar25) {
    iVar25 = iVar24;
  }
  if ((int)uVar20 <= iVar25) {
    if (iVar21 < (int)uVar16) {
      do {
        iVar24 = (int)uVar20;
        if (iVar25 <= iVar24) {
          return (undefined1 *)0x0;
        }
        puVar11 = (undefined1 *)(ulonglong)(iVar24 < iVar25);
        uVar10 = iVar24 + (uint)(iVar24 < iVar25);
        uVar20 = (ulonglong)uVar10;
      } while ((int)uVar10 <= iVar25);
    }
    else {
      fVar36 = fVar26 * _DAT_142e36f50 * _DAT_142f6d804;
      fVar26 = *(float *)(param_2 + 1);
      uVar1 = *param_2;
      puVar2 = *(undefined1 **)(param_1 + 8);
      uVar14 = *(ulonglong *)(param_1 + 0x10);
      lVar3 = *param_3;
      pfVar4 = (float *)param_3[1];
      plStack_b8 = param_3;
      uStack_b0 = param_1;
      do {
        iVar24 = (int)uVar20;
        uVar10 = (uint)(iVar24 < iVar25) + iVar24;
        uVar20 = (ulonglong)uVar10;
        uVar12 = uVar16;
        do {
          uVar8 = uStack_b0;
          iVar22 = (int)uVar12;
          uVar12 = pdb_140b575b0(uStack_b0,uVar12,iVar24);
          puVar11 = (undefined1 *)pdb_140b56b20(uVar8,uVar12);
          fVar28 = extraout_XMM0_Da - (float)uVar1;
          fVar37 = fVar37 - (float)((ulonglong)uVar1 >> 0x20);
          fVar37 = fVar37 * fVar37 + fVar28 * fVar28;
          if (SQRT(fVar37) < fVar36 + fVar26) {
            if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar12,uVar14,&UNK_14366a0c8);
            }
            puVar11 = puVar2;
            if ((*(longlong *)(puVar2 + uVar12 * 0x30 + 0x10) != 0) &&
               (puVar11 = *(undefined1 **)(lVar3 + 0x10), puVar11 != (undefined1 *)0x0)) {
              puVar13 = *(undefined8 **)(puVar2 + uVar12 * 0x30 + 8);
              puVar15 = puVar13 + *(longlong *)(puVar2 + uVar12 * 0x30 + 0x10) * 7;
              lVar5 = *(longlong *)(lVar3 + 8);
              do {
                if (puVar11 == (undefined1 *)0x1) {
                  lVar19 = 0;
                }
                else {
                  puVar17 = puVar11;
                  lVar18 = 0;
                  do {
                    lVar19 = lVar18 + ((ulonglong)puVar17 >> 1);
                    if ((ulonglong)puVar13[5] < *(ulonglong *)(lVar5 + lVar19 * 8)) {
                      lVar19 = lVar18;
                    }
                    puVar17 = puVar17 + -((ulonglong)puVar17 >> 1);
                    lVar18 = lVar19;
                  } while ((undefined1 *)0x1 < puVar17);
                }
                if (*(ulonglong *)(lVar5 + lVar19 * 8) == puVar13[5]) {
                  fVar29 = (float)puVar13[1];
                  fVar30 = (float)((ulonglong)puVar13[1] >> 0x20);
                  fVar37 = *pfVar4;
                  fVar28 = pfVar4[2];
                  fVar31 = (float)*puVar13;
                  fVar32 = (float)((ulonglong)*puVar13 >> 0x20);
                  fVar34 = fVar29 - fVar31;
                  fVar35 = fVar30 - fVar32;
                  fVar33 = fVar35 * fVar35 + fVar34 * fVar34;
                  if (fVar33 <= fVar27) {
                    fVar33 = fVar27;
                  }
                  fVar33 = ((fVar28 - fVar32) * fVar35 + (fVar37 - fVar31) * fVar34) / fVar33;
                  fVar34 = 0.0;
                  if (0.0 <= fVar33) {
                    fVar34 = fVar33;
                  }
                  fVar33 = fVar43;
                  if (fVar34 <= fVar43) {
                    fVar33 = fVar34;
                  }
                  fVar37 = fVar37 - (fVar33 * fVar29 + (fVar43 - fVar33) * fVar31);
                  fVar28 = fVar28 - (fVar33 * fVar30 + (fVar43 - fVar33) * fVar32);
                  fVar37 = fVar28 * fVar28 + fVar37 * fVar37;
                  if (SQRT(fVar37) < fVar40) {
                    puVar11 = (undefined1 *)plStack_b8[2];
                    *puVar11 = 1;
                    return puVar11;
                  }
                }
                puVar13 = puVar13 + 7;
              } while (puVar13 != puVar15);
            }
          }
          if (iVar21 <= iVar22) break;
          puVar11 = (undefined1 *)(ulonglong)(iVar22 < iVar21);
          uVar23 = iVar22 + (uint)(iVar22 < iVar21);
          uVar12 = (ulonglong)uVar23;
        } while ((int)uVar23 <= iVar21);
      } while ((iVar24 < iVar25) && ((int)uVar10 <= iVar25));
    }
  }
  return puVar11;
}

