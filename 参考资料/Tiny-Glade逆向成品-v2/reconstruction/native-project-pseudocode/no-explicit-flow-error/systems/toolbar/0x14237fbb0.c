// VA 0x14237fbb0, PDB extent 511 bytes
// toolbar::text::prepare_text_fragments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::text::prepare_text_fragments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
   Extent: 511 */

void pdb_14237fbb0(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong unaff_RSI;
  longlong lVar14;
  uint *puVar15;
  
  lVar4 = *param_2;
  lVar5 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar15 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar15 + *(longlong *)(lVar4 + 0x100);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar6 = *param_1;
  puVar7 = (undefined4 *)param_1[2];
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar12 = 0;
    lVar14 = 0;
    uVar9 = 0;
    do {
      if ((int)uVar9 == (int)lVar12) {
        if (puVar15 == puVar1) {
          return;
        }
        while( true ) {
          lVar12 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar15 * 0x48);
          if (lVar12 != 0) break;
          puVar15 = puVar15 + 1;
          if (puVar15 == puVar1) {
            return;
          }
        }
        lVar14 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar15 * 0x48;
        lVar8 = *(longlong *)(lVar14 + 0x18);
        lVar10 = ~*(ulonglong *)(*(longlong *)(lVar14 + 0x38) + *(longlong *)(lVar4 + 0x110) * 8) *
                 0x30;
        lVar14 = *(longlong *)(lVar8 + 0x10 + lVar10);
        unaff_RSI = *(longlong *)(lVar8 + 0x28 + lVar10);
        puVar15 = puVar15 + 1;
        uVar9 = 0;
      }
      *(undefined4 *)(unaff_RSI + uVar9 * 4) = uVar2;
      *puVar7 = uVar3;
      pdb_140cb6740(uVar9 * 600 + lVar14,uVar6);
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while( true );
  }
  do {
    if (puVar15 == puVar1) {
      return;
    }
    while( true ) {
      lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar15 * 0xa0);
      if (lVar14 != 0) break;
      puVar15 = puVar15 + 1;
      if (puVar15 == puVar1) {
        return;
      }
    }
    lVar10 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar15 * 0xa0;
    uVar9 = (ulonglong)*(uint *)(lVar10 + 0x94);
    lVar12 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + uVar9 * 0x48);
    lVar11 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + uVar9 * 0x48) +
               *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
    lVar8 = *(longlong *)(lVar12 + 0x10 + lVar11);
    lVar12 = *(longlong *)(lVar12 + 0x28 + lVar11);
    lVar10 = *(longlong *)(lVar10 + 0x50);
    puVar15 = puVar15 + 1;
    uVar13 = 1;
    uVar9 = 0;
    while( true ) {
      uVar9 = (ulonglong)~*(uint *)(lVar10 + 8 + uVar9 * 0x10);
      *(undefined4 *)(lVar12 + uVar9 * 4) = uVar2;
      *puVar7 = uVar3;
      pdb_140cb6740(uVar9 * 600 + lVar8,uVar6);
      if (uVar13 == (uint)lVar14) break;
      uVar9 = (ulonglong)uVar13;
      uVar13 = uVar13 + 1;
    }
  } while( true );
}

