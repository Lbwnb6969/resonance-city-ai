// VA 0x140be95f0, PDB extent 11 bytes
// country_core::systems::wall::snapping::SnappingMode::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::wall::snapping::SnappingMode::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/mod.rs
   Extent: 11 */

undefined1 * pdb_140be95f0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  return param_1;
}

