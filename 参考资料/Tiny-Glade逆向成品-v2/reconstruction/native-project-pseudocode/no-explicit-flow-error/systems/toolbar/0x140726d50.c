// VA 0x140726d50, PDB extent 295 bytes
// toolbar::mei::widgets::ScrollingListView::take_home_focus_request
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::ScrollingListView::take_home_focus_request
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 295 */

undefined8 pdb_140726d50(void)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = (int *)pdb_14116e5a0();
  if (*piVar1 == 1) {
    fVar5 = (float)piVar1[10] + _DAT_142e37878;
    fVar6 = (float)piVar1[0xb] / fVar5;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    uVar2 = (longlong)(fVar6 - _DAT_142e36f2c) & (longlong)fVar6 >> 0x3f | (longlong)fVar6;
    if (fVar6 < 0.0) {
      uVar2 = 0;
    }
    if (_DAT_142e36f30 < fVar6) {
      uVar2 = 0xffffffffffffffff;
    }
    fVar5 = ((float)piVar1[0xb] + (float)*(ulonglong *)(piVar1 + 6) * fVar5 + _DAT_142fa5b20) /
            fVar5;
    uVar3 = (longlong)(fVar5 - _DAT_142e36f2c) & (longlong)fVar5 >> 0x3f | (longlong)fVar5;
    if (fVar5 < 0.0) {
      uVar3 = 0;
    }
    if (_DAT_142e36f30 < fVar5) {
      uVar3 = 0xffffffffffffffff;
    }
    uVar4 = uVar3 + 2;
    if (*(ulonglong *)(piVar1 + 8) < uVar3 + 2) {
      uVar4 = *(ulonglong *)(piVar1 + 8);
    }
    if ((((uVar2 - 1) + (ulonglong)(uVar2 == 0) <= *(ulonglong *)(piVar1 + 2)) &&
        (*(ulonglong *)(piVar1 + 2) < uVar4)) && ((char)piVar1[0xe] != '\0')) {
      *(undefined1 *)(piVar1 + 0xe) = 0;
      return 1;
    }
  }
  return 0;
}

