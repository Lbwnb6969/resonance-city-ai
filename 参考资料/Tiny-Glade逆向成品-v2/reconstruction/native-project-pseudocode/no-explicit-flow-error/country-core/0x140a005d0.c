// VA 0x140a005d0, PDB extent 86 bytes
// country_core::resources::gui::LoadMenuThumbnailMetrics::positions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::LoadMenuThumbnailMetrics::positions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 86 */

longlong * pdb_140a005d0(longlong *param_1,longlong param_2)

{
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  uStack_24 = *(undefined4 *)(param_2 + 0x28);
  uStack_28 = 0;
  lStack_30 = param_2;
  pdb_1415ecf80(&lStack_20,&lStack_30);
  *param_1 = lStack_18;
  param_1[2] = lStack_20;
  param_1[1] = lStack_18;
  param_1[3] = lStack_18 + lStack_10 * 8;
  return param_1;
}

