// VA 0x141473320, PDB extent 34 bytes
// utils::geometry::intersect::SphereIntersection::closest_intersection_distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::geometry::intersect::SphereIntersection::closest_intersection_distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 34 */

uint pdb_141473320(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = fVar2;
  if (fVar1 <= fVar2) {
    fVar3 = fVar1;
  }
  return ~-(uint)NAN(fVar1) & (uint)fVar3 | -(uint)NAN(fVar1) & (uint)fVar2;
}

