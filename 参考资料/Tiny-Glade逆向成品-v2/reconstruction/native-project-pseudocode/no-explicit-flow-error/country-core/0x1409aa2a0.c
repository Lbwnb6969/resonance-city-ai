// VA 0x1409aa2a0, PDB extent 10 bytes
// country_core::resources::image_formation::ImageFormationConfigs::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::image_formation::ImageFormationConfigs::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
   Extent: 10 */

longlong pdb_1409aa2a0(longlong param_1,byte param_2)

{
  return (ulonglong)param_2 * 0x40 + param_1;
}

