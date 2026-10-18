// VA 0x14287de00, PDB extent 744 bytes
// system_tree::process_tree_cmds::despawn_trees
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/process_tree_cmds.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::process_tree_cmds::despawn_trees
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/process_tree_cmds.rs
   Extent: 744 */

void pdb_14287de00(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  
  fVar12 = _DAT_142e37848;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  puVar18 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lVar4 + 0x100);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar6 = *param_2;
  puVar7 = (undefined4 *)param_2[2];
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar17 = 0;
    lVar14 = 8;
    lVar15 = 0;
    uVar16 = 0;
    while( true ) {
      if (uVar16 == (uint)lVar17) {
        do {
          if (puVar18 == puVar1) {
            return;
          }
          uVar16 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)uVar16 * 0x48);
        } while (lVar17 == 0);
        lVar14 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)uVar16 * 0x48;
        if ((*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar14 + 0x40)) &&
           (uVar13 = *(ulonglong *)
                      (*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8),
           uVar13 != 0)) {
          lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar13 * 0x30);
        }
        else {
          lVar15 = 0;
        }
        lVar14 = *(longlong *)(lVar14 + 8);
        uVar16 = 0;
      }
      uVar13 = (ulonglong)uVar16;
      uVar9 = *(undefined8 *)(lVar14 + uVar13 * 8);
      if ((int)uVar9 == 0) break;
      uVar16 = uVar16 + 1;
      pfVar2 = (float *)(lVar15 + 4 + uVar13 * 0x10);
      if (*pfVar2 <= fVar12 && fVar12 != *pfVar2) {
        *puVar7 = uVar3;
        lVar10 = *(longlong *)(lVar6 + 0x30);
        uVar11 = *(undefined8 *)(lVar6 + 0x40);
        if (lVar10 == *(longlong *)(lVar6 + 0x20)) {
          pdb_142d7e980(lVar6 + 0x20);
        }
        lVar8 = *(longlong *)(lVar6 + 0x28);
        *(undefined8 *)(lVar8 + lVar10 * 0x10) = uVar9;
        *(undefined8 *)(lVar8 + 8 + lVar10 * 0x10) = uVar11;
        *(longlong *)(lVar6 + 0x30) = lVar10 + 1;
        *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
      }
    }
    return;
  }
  lVar17 = 0;
  lVar14 = 8;
  lVar15 = 0;
  uVar16 = 0;
  do {
    if (uVar16 == (uint)lVar17) {
      do {
        if (puVar18 == puVar1) {
          return;
        }
        uVar16 = *puVar18;
        puVar18 = puVar18 + 1;
        lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)uVar16 * 0xa0);
      } while (lVar17 == 0);
      lVar14 = *(longlong *)(lVar5 + 0x100) + (ulonglong)uVar16 * 0xa0;
      uVar13 = (ulonglong)*(uint *)(lVar14 + 0x94);
      if (*(ulonglong *)(lVar4 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar5 + 0x1a0) + 0x40 + uVar13 * 0x48)) {
        lVar15 = *(longlong *)(lVar5 + 0x1a0) + uVar13 * 0x48;
        uVar13 = *(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
        if (uVar13 == 0) goto LAB_14287e045;
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar13 * 0x30);
      }
      else {
LAB_14287e045:
        lVar15 = 0;
      }
      lVar14 = *(longlong *)(lVar14 + 0x50);
      uVar16 = 0;
    }
    uVar13 = (ulonglong)uVar16;
    uVar9 = *(undefined8 *)(lVar14 + uVar13 * 0x10);
    if ((int)uVar9 == 0) {
      return;
    }
    uVar16 = uVar16 + 1;
    pfVar2 = (float *)(lVar15 + 4 + (ulonglong)~*(uint *)(uVar13 * 0x10 + lVar14 + 8) * 0x10);
    if (*pfVar2 <= fVar12 && fVar12 != *pfVar2) {
      *puVar7 = uVar3;
      lVar10 = *(longlong *)(lVar6 + 0x30);
      uVar11 = *(undefined8 *)(lVar6 + 0x40);
      if (lVar10 == *(longlong *)(lVar6 + 0x20)) {
        pdb_142d7e980(lVar6 + 0x20);
      }
      lVar8 = *(longlong *)(lVar6 + 0x28);
      *(undefined8 *)(lVar8 + lVar10 * 0x10) = uVar9;
      *(undefined8 *)(lVar8 + 8 + lVar10 * 0x10) = uVar11;
      *(longlong *)(lVar6 + 0x30) = lVar10 + 1;
      *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
    }
  } while( true );
}

