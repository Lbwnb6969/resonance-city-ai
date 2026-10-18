// VA 0x14237f900, PDB extent 688 bytes
// toolbar::text::render_text_fragments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::text::render_text_fragments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
   Extent: 688 */

void pdb_14237f900(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong unaff_R12;
  longlong lVar17;
  uint *puVar18;
  
  lVar4 = *param_2;
  lVar5 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar18 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lVar4 + 0x100);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar6 = *param_1;
  puVar7 = (undefined4 *)param_1[2];
  if (*(char *)(lVar4 + 0x108) == '\0') {
    do {
      if (puVar18 == puVar1) {
        return;
      }
      while( true ) {
        lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar18 * 0xa0);
        if (lVar17 != 0) break;
        puVar18 = puVar18 + 1;
        if (puVar18 == puVar1) {
          return;
        }
      }
      lVar12 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar18 * 0xa0;
      uVar11 = (ulonglong)*(uint *)(lVar12 + 0x94);
      lVar15 = *(longlong *)(lVar5 + 0x1a0);
      lVar14 = *(longlong *)(lVar15 + 0x18 + uVar11 * 0x48);
      lVar10 = *(longlong *)(lVar15 + 0x38 + uVar11 * 0x48);
      if ((*(ulonglong *)(lVar4 + 0x118) < *(ulonglong *)(lVar15 + 0x40 + uVar11 * 0x48)) &&
         (uVar11 = *(ulonglong *)(lVar10 + *(ulonglong *)(lVar4 + 0x118) * 8), uVar11 != 0)) {
        lVar15 = *(longlong *)(lVar14 + 0x10 + ~uVar11 * 0x30);
      }
      else {
        lVar15 = 0;
      }
      lVar13 = ~*(ulonglong *)(lVar10 + *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
      lVar10 = *(longlong *)(lVar14 + 0x10 + lVar13);
      lVar14 = *(longlong *)(lVar14 + 0x28 + lVar13);
      puVar18 = puVar18 + 1;
      lVar12 = *(longlong *)(lVar12 + 0x50);
      uVar16 = 1;
      uVar11 = 0;
      while( true ) {
        uVar11 = (ulonglong)~*(uint *)(lVar12 + 8 + uVar11 * 0x10);
        *(undefined4 *)(lVar14 + uVar11 * 4) = uVar2;
        uVar8 = *(undefined8 *)(lVar15 + uVar11 * 0x10);
        uVar9 = *(undefined8 *)(lVar15 + 8 + uVar11 * 0x10);
        *puVar7 = uVar3;
        pdb_140cb63a0(uVar11 * 600 + lVar10,uVar8,uVar9,0xffffffff,uVar6);
        if (uVar16 == (uint)lVar17) break;
        uVar11 = (ulonglong)uVar16;
        uVar16 = uVar16 + 1;
      }
    } while( true );
  }
  lVar15 = 0;
  lVar14 = 0;
  lVar17 = 0;
  uVar11 = 0;
  do {
    if ((int)uVar11 == (int)lVar15) {
      if (puVar18 == puVar1) {
        return;
      }
      while( true ) {
        lVar15 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar18 * 0x48);
        if (lVar15 != 0) break;
        puVar18 = puVar18 + 1;
        if (puVar18 == puVar1) {
          return;
        }
      }
      lVar17 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar18 * 0x48;
      lVar10 = *(longlong *)(lVar17 + 0x18);
      if ((*(ulonglong *)(lVar4 + 0x118) < *(ulonglong *)(lVar17 + 0x40)) &&
         (uVar11 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar4 + 0x118) * 8),
         uVar11 != 0)) {
        lVar14 = *(longlong *)(lVar10 + 0x10 + ~uVar11 * 0x30);
      }
      else {
        lVar14 = 0;
      }
      lVar12 = ~*(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(longlong *)(lVar4 + 0x110) * 8) *
               0x30;
      lVar17 = *(longlong *)(lVar10 + 0x10 + lVar12);
      unaff_R12 = *(longlong *)(lVar10 + 0x28 + lVar12);
      puVar18 = puVar18 + 1;
      uVar11 = 0;
    }
    *(undefined4 *)(unaff_R12 + uVar11 * 4) = uVar2;
    uVar8 = *(undefined8 *)(lVar14 + uVar11 * 0x10);
    uVar9 = *(undefined8 *)(lVar14 + 8 + uVar11 * 0x10);
    *puVar7 = uVar3;
    pdb_140cb63a0(uVar11 * 600 + lVar17,uVar8,uVar9,0xffffffff,uVar6);
    uVar11 = (ulonglong)((int)uVar11 + 1);
  } while( true );
}

