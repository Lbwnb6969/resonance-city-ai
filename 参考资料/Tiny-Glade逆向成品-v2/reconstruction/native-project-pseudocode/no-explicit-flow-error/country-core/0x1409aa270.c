// VA 0x1409aa270, PDB extent 7 bytes
// country_core::resources::image_formation::ImageFormationConfigs::switch_kind
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::image_formation::ImageFormationConfigs::switch_kind
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
   Extent: 7 */

void pdb_1409aa270(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = param_2;
  return;
}

