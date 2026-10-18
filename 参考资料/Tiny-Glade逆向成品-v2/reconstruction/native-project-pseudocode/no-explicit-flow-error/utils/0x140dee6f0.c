// VA 0x140dee6f0, PDB extent 46 bytes
// utils::geometry::aabb::is_inside_bbx
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::is_inside_bbx
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 46 */

byte pdb_140dee6f0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  return (param_6 < param_4 && param_5 < param_3) & -(param_1 < param_5) & -(param_2 < param_6);
}

