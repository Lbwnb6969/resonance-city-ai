// VA 0x14088ec30, PDB extent 326 bytes
// system_decorator::decorator_visual::cottage_dormers::maintain_dormer_tiles_draw::maintain_dormer_tiles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/maintain_dormer_tiles_draw.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::maintain_dormer_tiles_draw::maintain_dormer_tiles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/maintain_dormer_tiles_draw.rs
   Extent: 326 */

void pdb_14088ec30(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  puVar3 = (ulonglong *)*param_2;
  lVar4 = param_2[1];
  uVar5 = *puVar3;
  uVar14 = 0;
  uVar9 = uVar5 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar9 = uVar14;
  }
  uVar15 = uVar5 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar15 = uVar14;
  }
  lVar12 = uVar9 * 0x18 + *(longlong *)(lVar4 + 8);
  uVar5 = *(ulonglong *)(lVar4 + 0x10) - uVar9;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar9) {
    lVar12 = 8;
    uVar5 = uVar14;
  }
  lVar10 = uVar15 * 0x18 + *(longlong *)(lVar4 + 0x28);
  uVar9 = *(ulonglong *)(lVar4 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar15) {
    lVar10 = 8;
    uVar9 = uVar14;
  }
  *puVar3 = (*(longlong *)(lVar4 + 0x40) - uVar9) - uVar5;
  lVar4 = lVar12 + uVar5 * 0x18;
  lVar1 = lVar10 + uVar9 * 0x18;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar6 = *param_1;
  puVar7 = (undefined4 *)param_1[2];
  do {
    if ((lVar12 == 0) || (lVar12 == lVar4)) {
      if ((lVar10 == 0) || (lVar10 == lVar1)) {
        return;
      }
      lVar12 = 0;
      lVar8 = lVar10 + 0x18;
      lVar13 = lVar10;
    }
    else {
      lVar8 = lVar10;
      lVar13 = lVar12;
      lVar12 = lVar12 + 0x18;
    }
    lVar10 = lVar8;
    *puVar3 = *puVar3 + 1;
    *puVar7 = uVar2;
    uVar11 = pdb_1400af0a0(lVar6 + 0x20,lVar13 + 8);
    pdb_140269b90(&lStack_58,lVar6,uVar11,lVar13 + 8);
    lVar8 = lStack_50;
    lStack_58 = lStack_50;
    lStack_50 = lStack_48;
    if (lVar8 != 0) {
      pdb_14149c4f0(&lStack_58);
    }
  } while( true );
}

