// VA 0x14287f400, PDB extent 1036 bytes
// system_tree::tree_move_bend::tree_move_bend
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/tree_move_bend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::tree_move_bend::tree_move_bend
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/tree_move_bend.rs
   Extent: 1036 */

void pdb_14287f400(longlong *param_1)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  float fVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  longlong lStack_c0;
  float afStack_a4 [2];
  float fStack_9c;
  
  fVar10 = _DAT_142e3b1d8;
  fVar9 = _DAT_142e37834;
  fVar8 = _DAT_142e36f28;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar20 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar20 + *(longlong *)(lVar6 + 0x100);
  cVar4 = *(char *)(lVar6 + 0x108);
  lVar19 = 0;
  lStack_c0 = 8;
  lStack_100 = 0;
  lStack_f8 = 0;
  uVar13 = 0;
LAB_14287f4db:
  uStack_d8 = uVar13;
  if (cVar4 == '\0') {
    if ((int)uVar13 == (int)lVar19) {
      if (puVar20 == puVar1) {
        return;
      }
      while( true ) {
        lVar19 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar20 * 0xa0);
        if (lVar19 != 0) break;
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar1) {
          return;
        }
      }
      lVar16 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar20 * 0xa0;
      uVar13 = (ulonglong)*(uint *)(lVar16 + 0x94);
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + uVar13 * 0x48);
      lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + uVar13 * 0x48);
      lVar17 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
      lStack_f8 = *(longlong *)(lVar12 + 0x10 + lVar17);
      lStack_e0 = *(longlong *)(lVar12 + 0x28 + lVar17);
      lVar18 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
      lStack_100 = *(longlong *)(lVar12 + 0x10 + lVar18);
      lStack_e8 = *(longlong *)(lVar12 + 0x28 + lVar18);
      lStack_c0 = *(longlong *)(lVar16 + 0x50);
      puVar20 = puVar20 + 1;
      uStack_d8 = 0;
    }
    uVar13 = (ulonglong)~*(uint *)(lStack_c0 + 8 + uStack_d8 * 0x10);
  }
  else if ((int)uVar13 == (int)lVar19) {
    if (puVar20 == puVar1) {
      return;
    }
    while( true ) {
      lVar19 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48);
      if (lVar19 != 0) break;
      puVar20 = puVar20 + 1;
      if (puVar20 == puVar1) {
        return;
      }
    }
    lVar12 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
    lVar18 = *(longlong *)(lVar12 + 0x18);
    lVar12 = *(longlong *)(lVar12 + 0x38);
    lVar16 = ~*(ulonglong *)(lVar12 + *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
    lStack_f8 = *(longlong *)(lVar18 + 0x10 + lVar16);
    lStack_e0 = *(longlong *)(lVar18 + 0x28 + lVar16);
    lVar12 = ~*(ulonglong *)(lVar12 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
    lStack_100 = *(longlong *)(lVar18 + 0x10 + lVar12);
    lStack_e8 = *(longlong *)(lVar18 + 0x28 + lVar12);
    puVar20 = puVar20 + 1;
    uVar13 = 0;
    uStack_d8 = uVar13;
  }
  pfVar2 = (float *)(lStack_f8 + uVar13 * 8);
  puVar3 = (undefined4 *)(lStack_e0 + uVar13 * 4);
  lVar18 = uVar13 * 0x30 + lStack_100;
  lVar12 = uVar13 * 4;
  pdb_140b40d00(afStack_a4,lVar18);
  fVar11 = fStack_9c;
  fVar15 = afStack_a4[0];
  fVar21 = (float)pdb_140de93b0();
  *puVar3 = uVar5;
  *pfVar2 = fVar21;
  fVar21 = (float)pdb_140de93b0();
  *puVar3 = uVar5;
  pfVar2[1] = fVar21;
  fVar24 = *pfVar2 - fVar15;
  fVar21 = fVar21 - fVar11;
  fVar22 = SQRT(fVar21 * fVar21 + fVar24 * fVar24);
  if (fVar10 <= fVar22) {
    fVar23 = fVar9;
    if (fVar22 <= fVar9) {
      fVar23 = fVar22;
    }
    *puVar3 = uVar5;
    fVar24 = fVar23 * fVar24 * (fVar8 / fVar22);
    fVar23 = fVar23 * fVar21 * (fVar8 / fVar22);
    *(ulonglong *)pfVar2 = CONCAT44(fVar11 + fVar23,fVar15 + fVar24);
    uVar14 = CONCAT44(fVar23,fVar24);
  }
  else {
    uVar14 = 0;
  }
  uVar13 = (ulonglong)((int)uStack_d8 + 1);
  if ((*(float *)(lVar18 + 0x24) == (float)uVar14) &&
     (!NAN(*(float *)(lVar18 + 0x24)) && !NAN((float)uVar14))) goto code_r0x00014287f7a9;
  goto LAB_14287f4d0;
code_r0x00014287f7a9:
  fVar15 = (float)((ulonglong)uVar14 >> 0x20);
  if ((*(float *)(lVar18 + 0x28) != fVar15) || (NAN(*(float *)(lVar18 + 0x28)) || NAN(fVar15))) {
LAB_14287f4d0:
    *(undefined4 *)(lStack_e8 + lVar12) = uVar5;
    *(undefined8 *)(lVar18 + 0x24) = uVar14;
  }
  goto LAB_14287f4db;
}

