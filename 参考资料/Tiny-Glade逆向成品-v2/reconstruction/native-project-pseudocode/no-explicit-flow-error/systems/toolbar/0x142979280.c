// VA 0x142979280, PDB extent 470 bytes
// toolbar::ui_interaction::debug_hide_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::debug_hide_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 470 */

void pdb_142979280(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  
  lVar4 = *param_2;
  lVar5 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar13 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar13 + *(longlong *)(lVar4 + 0x100);
  lVar6 = *param_1;
  if (*(char *)(lVar4 + 0x108) == '\0') {
    lVar14 = 0;
    lVar10 = 8;
    lVar8 = 0;
    uVar7 = 0;
    do {
      if (uVar7 == (uint)lVar14) {
        if (puVar13 == puVar1) {
          return;
        }
        while( true ) {
          lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar13 * 0xa0);
          if (lVar14 != 0) break;
          puVar13 = puVar13 + 1;
          if (puVar13 == puVar1) {
            return;
          }
        }
        lVar9 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar13 * 0xa0;
        uVar11 = (ulonglong)*(uint *)(lVar9 + 0x94);
        lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + uVar11 * 0x48);
        lVar12 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + uVar11 * 0x48) +
                   *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
        lVar8 = *(longlong *)(lVar10 + 0x10 + lVar12);
        unaff_RDI = *(longlong *)(lVar10 + 0x28 + lVar12);
        lVar10 = *(longlong *)(lVar9 + 0x50);
        puVar13 = puVar13 + 1;
        uVar7 = 1;
        uVar11 = 0;
        cVar2 = *(char *)(lVar6 + 199);
      }
      else {
        uVar11 = (ulonglong)uVar7;
        uVar7 = uVar7 + 1;
        cVar2 = *(char *)(lVar6 + 199);
      }
      if (cVar2 == '\0') {
        uVar11 = (ulonglong)~*(uint *)(lVar10 + 8 + uVar11 * 0x10);
        *(undefined4 *)(unaff_RDI + uVar11 * 4) = uVar3;
        *(undefined8 *)(lVar8 + 8 + uVar11 * 0x10) = 0;
      }
    } while( true );
  }
  lVar8 = 0;
  lVar14 = 0;
  uVar7 = 0;
LAB_1429792bb:
  do {
    uVar15 = uVar7;
    if (uVar15 != (uint)lVar14) goto LAB_1429792f0;
    if (puVar13 == puVar1) {
      return;
    }
    while( true ) {
      lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar13 * 0x48);
      if (lVar14 != 0) break;
      puVar13 = puVar13 + 1;
      if (puVar13 == puVar1) {
        return;
      }
    }
    lVar8 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar13 * 0x48;
    lVar10 = *(longlong *)(lVar8 + 0x18);
    lVar9 = ~*(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
    lVar8 = *(longlong *)(lVar10 + 0x10 + lVar9);
    unaff_RSI = *(longlong *)(lVar10 + 0x28 + lVar9);
    puVar13 = puVar13 + 1;
    uVar15 = 0;
    uVar7 = 1;
  } while (*(char *)(lVar6 + 199) != '\0');
  goto LAB_142979354;
LAB_1429792f0:
  uVar7 = uVar15 + 1;
  if (*(char *)(lVar6 + 199) == '\0') {
LAB_142979354:
    *(undefined4 *)(unaff_RSI + (ulonglong)uVar15 * 4) = uVar3;
    *(undefined8 *)(lVar8 + 8 + (ulonglong)uVar15 * 0x10) = 0;
  }
  goto LAB_1429792bb;
}

