// VA 0x1409aa260, PDB extent 14 bytes
// country_core::resources::image_formation::ImageFormationConfigs::current
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::image_formation::ImageFormationConfigs::current
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
   Extent: 14 */

longlong pdb_1409aa260(longlong param_1)

{
  return (ulonglong)*(byte *)(param_1 + 0xc0) * 0x40 + param_1;
}

