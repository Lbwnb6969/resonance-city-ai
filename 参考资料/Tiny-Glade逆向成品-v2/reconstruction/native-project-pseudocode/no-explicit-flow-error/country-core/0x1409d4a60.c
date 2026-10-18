// VA 0x1409d4a60, PDB extent 29 bytes
// country_core::resources::clutter_meshes::ClutterMeshTy::decoclutter_icon
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::ClutterMeshTy::decoclutter_icon
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 29 */

undefined8 pdb_1409d4a60(byte param_1)

{
  return *(undefined8 *)(&UNK_14302e980 + (ulonglong)param_1 * 8);
}

