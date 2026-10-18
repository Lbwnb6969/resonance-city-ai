// VA 0x140b76850, PDB extent 24 bytes
// country_core::resources::roofs::roof_shape::FlatRoofStyle::is_wooden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::FlatRoofStyle::is_wooden
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 24 */

char pdb_140b76850(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    return *param_2;
  }
  if (*param_1 == '\x01') {
    return '\0';
  }
  return param_1[1];
}

