// VA 0x14094c350, PDB extent 13 bytes
// country_core::geometry::instanced_wall::BrickSourceId::with_transient_stair_edge_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::geometry::instanced_wall::BrickSourceId::with_transient_stair_edge_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 13 */

uint pdb_14094c350(uint param_1,int param_2)

{
  return param_2 << 4 | param_1 | 0x40000000;
}

