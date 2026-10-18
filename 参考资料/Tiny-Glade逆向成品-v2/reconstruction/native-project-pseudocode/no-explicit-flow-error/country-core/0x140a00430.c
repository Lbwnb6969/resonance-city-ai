// VA 0x140a00430, PDB extent 29 bytes
// country_core::resources::gui::ShowDebugRaycastGeo::as_string
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::ShowDebugRaycastGeo::as_string
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 29 */

undefined * pdb_140a00430(byte *param_1)

{
  return &UNK_143034890 + *(int *)(&UNK_143034890 + (ulonglong)*param_1 * 4);
}

