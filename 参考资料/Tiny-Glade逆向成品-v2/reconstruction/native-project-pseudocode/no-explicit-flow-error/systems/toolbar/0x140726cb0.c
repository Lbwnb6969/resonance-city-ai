// VA 0x140726cb0, PDB extent 149 bytes
// toolbar::mei::widgets::ScrollingListView::scroll_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::ScrollingListView::scroll_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 149 */

float pdb_140726cb0(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = pdb_141172a70();
  fVar3 = *(float *)(lVar1 + 0x28) + _DAT_142e37878;
  fVar2 = (float)*(ulonglong *)(lVar1 + 0x20) * fVar3 + _DAT_142fa5b20;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 - (fVar3 * (float)*(ulonglong *)(lVar1 + 0x18) + _DAT_142fa5b20);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = 0.0;
  if (0.0 <= *(float *)(lVar1 + 0x30)) {
    fVar3 = *(float *)(lVar1 + 0x30);
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  return fVar2;
}

