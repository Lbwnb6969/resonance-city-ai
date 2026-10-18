// VA 0x140726be0, PDB extent 201 bytes
// toolbar::mei::widgets::ScrollingListView::set_scroll
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::ScrollingListView::set_scroll
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 201 */

undefined8 * pdb_140726be0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = pdb_14116e5a0(param_2);
  fVar3 = *(float *)(lVar2 + 0x28) + _DAT_142e37878;
  fVar4 = (float)*(ulonglong *)(lVar2 + 0x20) * fVar3 + _DAT_142fa5b20;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = fVar4 - (fVar3 * (float)*(ulonglong *)(lVar2 + 0x18) + _DAT_142fa5b20);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = 0.0;
  if (0.0 <= param_3) {
    fVar3 = param_3;
  }
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  *(float *)(lVar2 + 0x2c) = fVar4;
  *(float *)(lVar2 + 0x30) = fVar4;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}

