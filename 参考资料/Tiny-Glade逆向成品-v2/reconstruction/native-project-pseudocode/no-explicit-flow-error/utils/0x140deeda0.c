// VA 0x140deeda0, PDB extent 118 bytes
// utils::geometry::aabb::Aabb3::inclusive_contains_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::inclusive_contains_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 118 */

undefined2 pdb_140deeda0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[1];
  return CONCAT11(param_1[1] <= fVar1,
                  (ushort)(CONCAT11(fVar1 <= param_1[4],*param_2 <= param_1[3]) &
                          CONCAT11(param_1[1] <= fVar1,*param_1 <= *param_2)) == 0x101 &
                  -(param_2[2] <= param_1[5]) & -(param_1[2] <= param_2[2]));
}

