// VA 0x141f42fc0, PDB extent 1162 bytes
// system_roof::ui_edit_roof_ridge_dir::switch_roof_ridge_direction
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::ui_edit_roof_ridge_dir::switch_roof_ridge_direction
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
   Extent: 1162 */

void pdb_141f42fc0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  ulonglong *puStack_90;
  
  puStack_90 = (ulonglong *)*param_3;
  lVar17 = param_3[1];
  uVar16 = *puStack_90;
  uVar12 = 0;
  uVar11 = uVar16 - *(ulonglong *)(lVar17 + 0x18);
  if (uVar16 < *(ulonglong *)(lVar17 + 0x18)) {
    uVar11 = uVar12;
  }
  uVar18 = uVar16 - *(ulonglong *)(lVar17 + 0x38);
  if (uVar16 < *(ulonglong *)(lVar17 + 0x38)) {
    uVar18 = uVar12;
  }
  lStack_110 = uVar11 * 0x18 + *(longlong *)(lVar17 + 8);
  uVar16 = *(ulonglong *)(lVar17 + 0x10);
  uVar19 = uVar16 - uVar11;
  if (uVar16 < uVar11) {
    uVar19 = uVar12;
  }
  uVar20 = 0;
  if (uVar16 < uVar11) {
    lStack_110 = 8;
  }
  lStack_108 = uVar18 * 0x18 + *(longlong *)(lVar17 + 0x28);
  uVar16 = *(ulonglong *)(lVar17 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar17 + 0x30) < uVar18) {
    lStack_108 = 8;
    uVar16 = uVar12;
  }
  *puStack_90 = (*(longlong *)(lVar17 + 0x40) - uVar16) - uVar19;
  lStack_c8 = lStack_110 + uVar19 * 0x18;
  lStack_d0 = lStack_108 + uVar16 * 0x18;
  uStack_98 = *param_1;
  lStack_a0 = *param_2;
  lVar17 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar6 = *param_4;
  puStack_b0 = (undefined4 *)param_4[2];
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar7 = *param_5;
  puStack_b8 = (undefined4 *)param_5[2];
  uVar5 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar8 = *param_6;
  puStack_c0 = (undefined4 *)param_6[2];
  fVar23 = (float)_DAT_142e378e0;
  uVar16 = (ulonglong)_DAT_142e378e0 >> 0x20;
  lStack_d8 = lVar6 + 0x20;
  lStack_e0 = lVar7 + 0x20;
  lStack_a8 = lVar17;
  while( true ) {
    lVar14 = lStack_a0;
    if ((lStack_110 == 0) || (lStack_110 == lStack_c8)) {
      if ((lStack_108 == 0) || (lStack_108 == lStack_d0)) {
        return;
      }
      lStack_110 = 0;
      lVar21 = lStack_108;
      lStack_108 = lStack_108 + 0x18;
    }
    else {
      lVar21 = lStack_110;
      lStack_110 = lStack_110 + 0x18;
    }
    *puStack_90 = *puStack_90 + 1;
    uVar9 = *(undefined8 *)(lVar21 + 8);
    uVar11 = pdb_140b54b40(uStack_98,uVar9);
    if ((uVar11 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14342eee8);
    }
    uVar12 = uVar11 & 0xffffffff ^ 0xffffffff;
    if (((*(ulonglong *)(lVar17 + 0x10) <= uVar12) ||
        (piVar13 = (int *)(uVar12 * 0x18 + *(longlong *)(lVar17 + 8)),
        piVar13[4] != (int)(uVar11 >> 0x20))) || (*piVar13 == 0)) break;
    uVar12 = *(ulonglong *)(piVar13 + 2);
    if ((*(ulonglong *)(lVar14 + 0x38) <= (uVar12 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar14 + 0x28) + (uVar12 >> 6 & 0x3ffffff) * 8) >>
         (uVar12 & 0x3f) & 1) == 0)) {
      lStack_f0 = uVar12 << 0x20;
LAB_141f43416:
      uStack_e8 = uVar11;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14342efb0,0x2b,&lStack_f0,&UNK_14342ef90,&UNK_14342ef00);
    }
    lVar15 = *(longlong *)(*(longlong *)(lVar17 + 0x1a0) + 0x18 + (uVar12 >> 0x20) * 0x48);
    lVar14 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x1a0) + 0x38 + (uVar12 >> 0x20) * 0x48) +
               *(longlong *)(lVar14 + 0x110) * 8) * 0x30;
    lVar17 = *(longlong *)(lVar15 + 0x10 + lVar14);
    uVar12 = (ulonglong)(uint)~piVar13[1];
    uVar20 = uVar12 * 4 + *(longlong *)(lVar15 + 0x20 + lVar14);
    uVar1 = *(undefined1 *)(lVar21 + 0x10);
    *(undefined4 *)(*(longlong *)(lVar15 + 0x28 + lVar14) + uVar12 * 4) = uVar2;
    *(undefined1 *)(lVar17 + 0x3c + uVar12 * 0x58) = uVar1;
    *puStack_b0 = uVar3;
    lVar14 = *(longlong *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x40);
    if (lVar14 == *(longlong *)(lVar6 + 0x20)) {
      pdb_142d7e6e0(lStack_d8);
    }
    lVar21 = *(longlong *)(lVar6 + 0x28);
    lVar15 = lVar14 * 0x20;
    *(undefined8 *)(lVar21 + lVar15) = uVar10;
    *(ulonglong *)(lVar21 + 8 + lVar15) = uVar11;
    *(undefined8 *)(lVar21 + 0x10 + lVar15) = uVar9;
    *(undefined1 *)(lVar21 + 0x18 + lVar15) = 1;
    *(longlong *)(lVar6 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
    *puStack_b8 = uVar4;
    lVar14 = *(longlong *)(lVar7 + 0x30);
    uVar10 = *(undefined8 *)(lVar7 + 0x40);
    if (lVar14 == *(longlong *)(lVar7 + 0x20)) {
      pdb_142d7e980(lStack_e0);
    }
    lVar17 = lVar17 + uVar12 * 0x58;
    lVar21 = *(longlong *)(lVar7 + 0x28);
    *(undefined8 *)(lVar21 + lVar14 * 0x10) = uVar10;
    *(undefined8 *)(lVar21 + 8 + lVar14 * 0x10) = uVar9;
    *(longlong *)(lVar7 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
    pdb_140b77b90(&lStack_f0,lVar17);
    fVar22 = (float)pdb_140b77a00(lVar17);
    lVar17 = lStack_a8;
    fVar26 = fVar22 * fVar23;
    fVar24 = (float)lStack_f0;
    uVar11 = (ulonglong)lStack_f0 >> 0x20;
    fVar25 = (float)uStack_e8 + fVar26;
    *puStack_c0 = uVar5;
    lVar14 = *(longlong *)(lVar8 + 0x30);
    uVar9 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar14 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7ede0(lVar8 + 0x20);
    }
    lVar21 = *(longlong *)(lVar8 + 0x28);
    *(undefined8 *)(lVar21 + lVar14 * 0x28) = uVar9;
    *(undefined1 *)(lVar21 + 8 + lVar14 * 0x28) = 7;
    *(ulonglong *)(lVar21 + 0x18 + lVar14 * 0x28) =
         CONCAT44((float)uVar11 + fVar22 * (float)uVar16,fVar24 + fVar26);
    *(float *)(lVar21 + 0x20 + lVar14 * 0x28) = fVar25;
    *(longlong *)(lVar8 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
  }
  lStack_f0 = (uVar20 & 0xffffffff00000000) + 1;
  goto LAB_141f43416;
}

