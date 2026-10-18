// VA 0x14287f810, PDB extent 894 bytes
// system_tree::recalc_tree_position_on_terrain_height_change::recalc_tree_position_on_terrain_height_change
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/recalc_tree_position_on_terrain_height_change.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_tree::recalc_tree_position_on_terrain_height_change::recalc_tree_position_on_terrain_height_change
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/recalc_tree_position_on_terrain_height_change.rs
   Extent: 894 */

void pdb_14287f810(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  float fVar21;
  undefined4 auStack_94 [2];
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong lStack_80;
  
  puVar3 = (ulonglong *)*param_3;
  lVar4 = param_3[1];
  uVar10 = *puVar3;
  uVar17 = 0;
  uVar19 = uVar10 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar19 = uVar17;
  }
  uVar18 = uVar10 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar18 = uVar17;
  }
  uVar10 = *(ulonglong *)(lVar4 + 0x30);
  uVar13 = uVar10 - uVar18;
  if (uVar10 < uVar18) {
    uVar13 = uVar17;
  }
  uVar5 = *(ulonglong *)(lVar4 + 0x10);
  uVar16 = uVar5 - uVar19;
  if (uVar5 < uVar19) {
    uVar16 = uVar17;
  }
  uVar17 = *(ulonglong *)(lVar4 + 0x40);
  *puVar3 = uVar17 - (uVar16 + uVar13);
  if ((uVar5 < uVar19 || uVar5 - uVar19 == 0) && (uVar10 < uVar18 || uVar10 - uVar18 == 0)) {
    return;
  }
  *puVar3 = uVar17;
  fVar8 = _DAT_14300e4bc;
  uVar7 = _DAT_142e377e0;
  lVar4 = *param_1;
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar20 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar20 + *(longlong *)(lVar4 + 0x100);
  uStack_88 = *param_2;
  if (*(char *)(lVar4 + 0x108) == '\0') {
    lVar14 = 0;
    lVar11 = 8;
    lStack_80 = 0;
    uVar15 = 0;
    do {
      if (uVar15 == (uint)lVar14) {
        if (puVar20 == puVar1) {
          return;
        }
        while( true ) {
          lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar20 * 0xa0);
          if (lVar14 != 0) break;
          puVar20 = puVar20 + 1;
          if (puVar20 == puVar1) {
            return;
          }
        }
        lVar12 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar20 * 0xa0;
        uVar10 = (ulonglong)*(uint *)(lVar12 + 0x94);
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x18 + uVar10 * 0x48);
        lVar9 = ~*(ulonglong *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x38 + uVar10 * 0x48) +
                  *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
        lStack_80 = *(longlong *)(lVar11 + 0x10 + lVar9);
        uVar17 = *(ulonglong *)(lVar11 + 0x28 + lVar9);
        lVar11 = *(longlong *)(lVar12 + 0x50);
        puVar20 = puVar20 + 1;
        uVar15 = 1;
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)uVar15;
        uVar15 = uVar15 + 1;
      }
      uVar10 = (ulonglong)~*(uint *)(lVar11 + 8 + uVar10 * 0x10);
      lVar12 = uVar10 * 0x30;
      *(undefined4 *)(uVar17 + uVar10 * 4) = uVar2;
      if (((float)(*(uint *)(lStack_80 + lVar12) & uVar7) <= fVar8) &&
         (lVar12 = lVar12 + lStack_80, (float)(*(uint *)(lVar12 + 8) & uVar7) <= fVar8)) {
        pdb_140b40d00(auStack_94,lVar12);
        fVar21 = (float)pdb_14140ce00(uStack_88,auStack_94[0],uStack_8c);
        if ((*(float *)(lVar12 + 4) != fVar21) || (NAN(*(float *)(lVar12 + 4)) || NAN(fVar21))) {
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          *(float *)(lVar12 + 4) = fVar21;
        }
      }
    } while( true );
  }
  lVar14 = 0;
  lVar11 = 0;
  uVar15 = 0;
  do {
    if (uVar15 == (uint)lVar14) {
      if (puVar20 == puVar1) {
        return;
      }
      while( true ) {
        lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48);
        if (lVar14 != 0) break;
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar1) {
          return;
        }
      }
      lVar11 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
      lVar12 = *(longlong *)(lVar11 + 0x18);
      lVar9 = ~*(ulonglong *)(*(longlong *)(lVar11 + 0x38) + *(longlong *)(lVar4 + 0x110) * 8) *
              0x30;
      lVar11 = *(longlong *)(lVar12 + 0x10 + lVar9);
      param_2 = *(undefined8 **)(lVar12 + 0x28 + lVar9);
      puVar20 = puVar20 + 1;
      uVar15 = 0;
    }
    uVar10 = (ulonglong)uVar15;
    lVar12 = uVar10 * 0x30;
    uVar15 = uVar15 + 1;
    *(undefined4 *)((longlong)param_2 + uVar10 * 4) = uVar2;
    if (((float)(*(uint *)(lVar11 + lVar12) & uVar7) <= fVar8) &&
       (lVar12 = lVar12 + lVar11, (float)(*(uint *)(lVar12 + 8) & uVar7) <= fVar8)) {
      pdb_140b40d00(auStack_94,lVar12);
      fVar21 = (float)pdb_14140ce00(uStack_88,auStack_94[0],uStack_8c);
      if ((*(float *)(lVar12 + 4) != fVar21) || (NAN(*(float *)(lVar12 + 4)) || NAN(fVar21))) {
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        *(float *)(lVar12 + 4) = fVar21;
      }
    }
  } while( true );
}

