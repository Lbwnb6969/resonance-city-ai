// VA 0x142808030, PDB extent 570 bytes
// system_roof::wall_height_dt::wall_height_dt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/wall_height_dt.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::wall_height_dt::wall_height_dt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/wall_height_dt.rs
   Extent: 570 */

void pdb_142808030(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar10 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar10 + *(longlong *)(lVar4 + 0x100);
  if (*(char *)(lVar4 + 0x108) == '\0') {
    do {
      if (puVar10 == puVar1) {
        return;
      }
      while( true ) {
        lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar10 * 0xa0);
        if (lVar9 != 0) break;
        puVar10 = puVar10 + 1;
        if (puVar10 == puVar1) {
          return;
        }
      }
      lVar8 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar10 * 0xa0;
      uVar13 = (ulonglong)*(uint *)(lVar8 + 0x94);
      lVar11 = *(longlong *)(lVar5 + 0x1a0);
      lVar12 = *(longlong *)(lVar11 + 0x18 + uVar13 * 0x48);
      lVar6 = *(longlong *)(lVar11 + 0x38 + uVar13 * 0x48);
      if ((*(ulonglong *)(lVar4 + 0x118) < *(ulonglong *)(lVar11 + 0x40 + uVar13 * 0x48)) &&
         (uVar13 = *(ulonglong *)(lVar6 + *(ulonglong *)(lVar4 + 0x118) * 8), uVar13 != 0)) {
        lVar11 = *(longlong *)(lVar12 + 0x10 + ~uVar13 * 0x30);
      }
      else {
        lVar11 = 0;
      }
      lVar14 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar4 + 0x110) * 8) * 0x30;
      lVar6 = *(longlong *)(lVar12 + 0x10 + lVar14);
      lVar12 = *(longlong *)(lVar12 + 0x28 + lVar14);
      puVar10 = puVar10 + 1;
      lVar8 = *(longlong *)(lVar8 + 0x50);
      uVar7 = 1;
      uVar13 = 0;
      while( true ) {
        uVar13 = (ulonglong)~*(uint *)(lVar8 + 8 + uVar13 * 0x10);
        fVar2 = *(float *)(lVar11 + 0x4c + uVar13 * 0x58);
        *(float *)(lVar6 + uVar13 * 0x18) = fVar2 - *(float *)(lVar6 + 4 + uVar13 * 0x18);
        *(undefined4 *)(lVar12 + uVar13 * 4) = uVar3;
        *(float *)(lVar6 + 4 + uVar13 * 0x18) = fVar2;
        if (uVar7 == (uint)lVar9) break;
        uVar13 = (ulonglong)uVar7;
        uVar7 = uVar7 + 1;
      }
    } while( true );
  }
  lVar11 = 0;
  lVar12 = 0;
  lVar9 = 0;
  uVar7 = 0;
  do {
    if (uVar7 == (uint)lVar11) {
      if (puVar10 == puVar1) {
        return;
      }
      while( true ) {
        lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar10 * 0x48);
        if (lVar11 != 0) break;
        puVar10 = puVar10 + 1;
        if (puVar10 == puVar1) {
          return;
        }
      }
      lVar9 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar10 * 0x48;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      if ((*(ulonglong *)(lVar4 + 0x118) < *(ulonglong *)(lVar9 + 0x40)) &&
         (uVar13 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(ulonglong *)(lVar4 + 0x118) * 8),
         uVar13 != 0)) {
        lVar12 = *(longlong *)(lVar6 + 0x10 + ~uVar13 * 0x30);
      }
      else {
        lVar12 = 0;
      }
      lVar8 = ~*(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(longlong *)(lVar4 + 0x110) * 8) * 0x30
      ;
      lVar9 = *(longlong *)(lVar6 + 0x10 + lVar8);
      unaff_RSI = *(longlong *)(lVar6 + 0x28 + lVar8);
      puVar10 = puVar10 + 1;
      uVar7 = 0;
    }
    uVar13 = (ulonglong)uVar7;
    fVar2 = *(float *)(lVar12 + 0x4c + uVar13 * 0x58);
    uVar7 = uVar7 + 1;
    *(float *)(lVar9 + uVar13 * 0x18) = fVar2 - *(float *)(lVar9 + 4 + uVar13 * 0x18);
    *(undefined4 *)(unaff_RSI + uVar13 * 4) = uVar3;
    *(float *)(lVar9 + 4 + uVar13 * 0x18) = fVar2;
  } while( true );
}

