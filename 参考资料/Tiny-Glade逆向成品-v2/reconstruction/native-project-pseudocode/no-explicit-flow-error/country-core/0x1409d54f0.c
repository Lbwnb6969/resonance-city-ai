// VA 0x1409d54f0, PDB extent 14 bytes
// country_core::resources::ui_settings::_::impl$0::previous
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::ui_settings::_::impl$0::previous
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 14 */

uint pdb_1409d54f0(byte *param_1)

{
  return 0x2010004 >> ((*param_1 & 3) << 3);
}

