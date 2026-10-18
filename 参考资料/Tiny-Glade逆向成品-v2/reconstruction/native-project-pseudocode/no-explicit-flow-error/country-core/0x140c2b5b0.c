// VA 0x140c2b5b0, PDB extent 6 bytes
// country_core::resources::walls::wall_holes::FinalizedWallHoles::wall_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::FinalizedWallHoles::wall_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 6 */

undefined4 pdb_140c2b5b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

