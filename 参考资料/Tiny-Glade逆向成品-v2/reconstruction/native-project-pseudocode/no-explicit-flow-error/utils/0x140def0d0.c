// VA 0x140def0d0, PDB extent 34 bytes
// utils::geometry::aabb::Aabb3::extent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::extent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 34 */

undefined8 * pdb_140def0d0(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((longlong)param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 1);
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) -
                      (float)((ulonglong)*param_2 >> 0x20),
                      (float)*(undefined8 *)((longlong)param_2 + 0xc) - (float)*param_2);
  *(float *)(param_1 + 1) = fVar1 - fVar2;
  return param_1;
}

