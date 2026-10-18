// VA 0x14297b230, PDB extent 783 bytes
// toolbar::ui_interaction::ui_appear_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_appear_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 783 */

void pdb_14297b230(longlong *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  float fVar14;
  longlong lStack_90;
  
  fVar5 = _DAT_142e36f28;
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar13 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar13 + *(longlong *)(lVar3 + 0x100);
  if (*(char *)(lVar3 + 0x108) != '\0') {
    lVar9 = 0;
    lVar12 = 0;
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (uVar11 == (uint)lVar9) {
        if (puVar13 == puVar1) {
          return;
        }
        while( true ) {
          lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)*puVar13 * 0x48);
          if (lVar9 != 0) break;
          puVar13 = puVar13 + 1;
          if (puVar13 == puVar1) {
            return;
          }
        }
        lVar12 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)*puVar13 * 0x48;
        if (*(ulonglong *)(lVar3 + 0x110) < *(ulonglong *)(lVar12 + 0x40)) {
          uVar6 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8);
          lVar8 = *(longlong *)(lVar12 + 0x18);
          if (uVar6 == 0) goto LAB_14297b42c;
          lVar10 = *(longlong *)(lVar8 + 0x10 + ~uVar6 * 0x30);
        }
        else {
          lVar8 = *(longlong *)(lVar12 + 0x18);
LAB_14297b42c:
          lVar10 = 0;
        }
        puVar13 = puVar13 + 1;
        lVar7 = ~*(ulonglong *)(*(longlong *)(lVar12 + 0x38) + *(longlong *)(lVar3 + 0x118) * 8) *
                0x30;
        lVar12 = *(longlong *)(lVar8 + 0x10 + lVar7);
        lStack_90 = *(longlong *)(lVar8 + 0x28 + lVar7);
        uVar11 = 0;
      }
      uVar6 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
      fVar14 = (float)pdb_140dedcd0(&UNK_143607840,*(undefined4 *)(lVar10 + uVar6 * 0x10));
      *(undefined4 *)(lStack_90 + uVar6 * 4) = uVar2;
      *(float *)(lVar12 + 0x10 + uVar6 * 0x14) =
           ((fVar5 - fVar14) * 0.0 + fVar14) * *(float *)(lVar12 + 0x10 + uVar6 * 0x14);
    } while( true );
  }
  do {
    if (puVar13 == puVar1) {
      return;
    }
    while( true ) {
      lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puVar13 * 0xa0);
      if (lVar12 != 0) break;
      puVar13 = puVar13 + 1;
      if (puVar13 == puVar1) {
        return;
      }
    }
    lVar7 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puVar13 * 0xa0;
    uVar6 = (ulonglong)*(uint *)(lVar7 + 0x94);
    lVar10 = *(longlong *)(lVar4 + 0x1a0);
    lVar9 = lVar10 + uVar6 * 0x48;
    lVar8 = *(longlong *)(lVar10 + 0x38 + uVar6 * 0x48);
    if (*(ulonglong *)(lVar3 + 0x110) < *(ulonglong *)(lVar10 + 0x40 + uVar6 * 0x48)) {
      uVar6 = *(ulonglong *)(lVar8 + *(ulonglong *)(lVar3 + 0x110) * 8);
      lVar9 = *(longlong *)(lVar9 + 0x18);
      if (uVar6 == 0) goto LAB_14297b384;
      lStack_90 = *(longlong *)(lVar9 + 0x10 + ~uVar6 * 0x30);
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 0x18);
LAB_14297b384:
      lStack_90 = 0;
    }
    puVar13 = puVar13 + 1;
    lVar8 = ~*(ulonglong *)(lVar8 + *(longlong *)(lVar3 + 0x118) * 8) * 0x30;
    lVar10 = *(longlong *)(lVar9 + 0x10 + lVar8);
    lVar9 = *(longlong *)(lVar9 + 0x28 + lVar8);
    lVar8 = *(longlong *)(lVar7 + 0x50);
    uVar11 = 1;
    uVar6 = 0;
    while( true ) {
      uVar6 = (ulonglong)~*(uint *)(lVar8 + 8 + uVar6 * 0x10);
      fVar14 = (float)pdb_140dedcd0(&UNK_143607840,*(undefined4 *)(lStack_90 + uVar6 * 0x10));
      *(undefined4 *)(lVar9 + uVar6 * 4) = uVar2;
      *(float *)(lVar10 + 0x10 + uVar6 * 0x14) =
           ((fVar5 - fVar14) * 0.0 + fVar14) * *(float *)(lVar10 + 0x10 + uVar6 * 0x14);
      if (uVar11 == (uint)lVar12) break;
      uVar6 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
    }
  } while( true );
}

