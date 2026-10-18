// VA 0x1409aa280, PDB extent 26 bytes
// country_core::resources::image_formation::ImageFormationConfigs::iter_non_default_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::image_formation::ImageFormationConfigs::iter_non_default_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
   Extent: 26 */

longlong * pdb_1409aa280(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 + 0xc0;
  param_1[2] = 0;
  return param_1;
}

