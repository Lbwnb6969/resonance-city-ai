// VA 0x1409d54a0, PDB extent 29 bytes
// country_core::resources::clutter_meshes::DecoClutterCategory::icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_meshes::DecoClutterCategory::icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 29 */

undefined * pdb_1409d54a0(byte param_1)

{
  return &UNK_14302eb60 + *(int *)(&UNK_14302eb60 + (ulonglong)param_1 * 4);
}

