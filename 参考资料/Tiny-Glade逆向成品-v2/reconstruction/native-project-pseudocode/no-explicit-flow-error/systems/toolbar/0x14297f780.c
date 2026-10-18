// VA 0x14297f780, PDB extent 536 bytes
// toolbar::ui_interaction::sort_contextual_buttons_draw_order
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::sort_contextual_buttons_draw_order
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 536 */

void pdb_14297f780(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar11 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar11 + *(longlong *)(lVar4 + 0x100);
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar12 = 0;
    lVar9 = 0;
    lVar13 = 0;
    uVar6 = 0;
    do {
      if (uVar6 == (uint)lVar12) {
        if (puVar11 == puVar1) {
          return;
        }
        while( true ) {
          lVar12 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar11 * 0x48);
          if (lVar12 != 0) break;
          puVar11 = puVar11 + 1;
          if (puVar11 == puVar1) {
            return;
          }
        }
        lVar9 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar11 * 0x48;
        if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar9 + 0x40)) {
          uVar14 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
          lVar7 = *(longlong *)(lVar9 + 0x18);
          if (uVar14 == 0) goto LAB_14297f8d6;
          lVar13 = *(longlong *)(lVar7 + 0x10 + ~uVar14 * 0x30);
        }
        else {
          lVar7 = *(longlong *)(lVar9 + 0x18);
LAB_14297f8d6:
          lVar13 = 0;
        }
        puVar11 = puVar11 + 1;
        lVar8 = ~*(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(longlong *)(lVar4 + 0x118) * 8) *
                0x30;
        lVar9 = *(longlong *)(lVar7 + 0x10 + lVar8);
        unaff_RSI = *(longlong *)(lVar7 + 0x28 + lVar8);
        uVar6 = 0;
      }
      uVar14 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      bVar2 = *(byte *)(lVar13 + uVar14 * 3);
      *(undefined4 *)(unaff_RSI + uVar14 * 4) = uVar3;
      *(ulonglong *)(lVar9 + uVar14 * 8) = (ulonglong)bVar2;
    } while( true );
  }
  do {
    if (puVar11 == puVar1) {
      return;
    }
    while( true ) {
      lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar11 * 0xa0);
      if (lVar9 != 0) break;
      puVar11 = puVar11 + 1;
      if (puVar11 == puVar1) {
        return;
      }
    }
    lVar8 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar11 * 0xa0;
    uVar14 = (ulonglong)*(uint *)(lVar8 + 0x94);
    lVar13 = *(longlong *)(lVar5 + 0x1a0);
    lVar12 = lVar13 + uVar14 * 0x48;
    lVar7 = *(longlong *)(lVar13 + 0x38 + uVar14 * 0x48);
    if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar13 + 0x40 + uVar14 * 0x48)) {
      uVar14 = *(ulonglong *)(lVar7 + *(ulonglong *)(lVar4 + 0x110) * 8);
      lVar12 = *(longlong *)(lVar12 + 0x18);
      if (uVar14 == 0) goto LAB_14297f874;
      lVar13 = *(longlong *)(lVar12 + 0x10 + ~uVar14 * 0x30);
    }
    else {
      lVar12 = *(longlong *)(lVar12 + 0x18);
LAB_14297f874:
      lVar13 = 0;
    }
    puVar11 = puVar11 + 1;
    lVar10 = ~*(ulonglong *)(lVar7 + *(longlong *)(lVar4 + 0x118) * 8) * 0x30;
    lVar7 = *(longlong *)(lVar12 + 0x10 + lVar10);
    lVar12 = *(longlong *)(lVar12 + 0x28 + lVar10);
    lVar8 = *(longlong *)(lVar8 + 0x50);
    uVar6 = 1;
    uVar14 = 0;
    while( true ) {
      uVar14 = (ulonglong)~*(uint *)(lVar8 + 8 + uVar14 * 0x10);
      bVar2 = *(byte *)(lVar13 + uVar14 * 3);
      *(undefined4 *)(lVar12 + uVar14 * 4) = uVar3;
      *(ulonglong *)(lVar7 + uVar14 * 8) = (ulonglong)bVar2;
      if (uVar6 == (uint)lVar9) break;
      uVar14 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
    }
  } while( true );
}

