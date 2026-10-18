// VA 0x140deec60, PDB extent 35 bytes
// utils::geometry::aabb::Aabb2::contains
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::contains
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 35 */

bool pdb_140deec60(float *param_1,float param_2,float param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*param_1 <= param_2) && (param_2 <= param_1[2])) && (param_1[1] <= param_3)) {
    bVar1 = param_3 <= param_1[3];
  }
  return bVar1;
}

