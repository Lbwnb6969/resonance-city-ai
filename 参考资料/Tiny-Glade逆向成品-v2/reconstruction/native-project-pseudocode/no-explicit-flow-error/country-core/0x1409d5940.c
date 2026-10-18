// VA 0x1409d5940, PDB extent 29 bytes
// country_core::resources::clutter_meshes::decoclutter_category_items
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::decoclutter_category_items
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 29 */

undefined * pdb_1409d5940(byte param_1)

{
  return &UNK_14302ebc0 + *(int *)(&UNK_14302ebc0 + (ulonglong)param_1 * 4);
}

