// VA 0x140deed20, PDB extent 37 bytes
// utils::geometry::aabb::Aabb3::intersect_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::intersect_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 37 */

undefined8 pdb_140deed20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  pdb_140dee850(param_1,param_2,param_2 + 0xc,param_3,param_4);
  return param_1;
}

