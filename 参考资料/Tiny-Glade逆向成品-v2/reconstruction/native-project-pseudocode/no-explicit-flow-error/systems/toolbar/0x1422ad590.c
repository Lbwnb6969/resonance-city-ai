// VA 0x1422ad590, PDB extent 90 bytes
// toolbar::menu::thumbnail_scroll::ThumbnailScrollView::initial_focused_item
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::menu::thumbnail_scroll::ThumbnailScrollView::initial_focused_item
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 90 */

undefined8 * pdb_1422ad590(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = pdb_14116e9c0(param_2);
  if (*(char *)(lVar2 + 0x75) == '\0') {
    *(float *)(lVar2 + 0x5c) =
         param_3 * (*(float *)(lVar2 + 0x54) / *(float *)(lVar2 + 0x50) + _DAT_142e36f28);
  }
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}

