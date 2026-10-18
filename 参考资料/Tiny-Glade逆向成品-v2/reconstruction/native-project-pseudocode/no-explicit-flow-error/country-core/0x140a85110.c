// VA 0x140a85110, PDB extent 15 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::center
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::center
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 15 */

uint pdb_140a85110(uint *param_1)

{
  return param_1[(ulonglong)*param_1 * 2 + 1];
}

