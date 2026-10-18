// VA 0x140c33110, PDB extent 9 bytes
// country_core::resources::walls::inner_wall_state::WallMaterial::gable_roof_style
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::WallMaterial::gable_roof_style
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 9 */

byte pdb_140c33110(byte *param_1,char param_2)

{
  return param_2 == '\x02' | *param_1;
}

