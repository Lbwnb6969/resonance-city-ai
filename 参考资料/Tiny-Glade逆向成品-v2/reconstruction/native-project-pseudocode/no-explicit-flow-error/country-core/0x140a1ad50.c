// VA 0x140a1ad50, PDB extent 59 bytes
// country_core::resources::history::wall_compound_edit::WallHistoryCompoundEdit::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::WallHistoryCompoundEdit::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 59 */

void pdb_140a1ad50(undefined8 *param_1)

{
  longlong lStack_20;
  longlong lStack_18;
  undefined8 uStack_10;
  longlong lStack_8;
  
  uStack_10 = *param_1;
  lStack_20 = param_1[1];
  lStack_8 = lStack_20 + param_1[2] * 0x18;
  lStack_18 = lStack_20;
  pdb_140c69b60(&lStack_20);
  return;
}

