// VA 0x140deea70, PDB extent 21 bytes
// utils::geometry::aabb::Aabb2::max_extent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb2::max_extent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 21 */

undefined8 pdb_140deea70(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1[1] - (float)*param_1;
  fVar2 = (float)((ulonglong)param_1[1] >> 0x20) - (float)((ulonglong)*param_1 >> 0x20);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return CONCAT44(fVar2,fVar1);
}

