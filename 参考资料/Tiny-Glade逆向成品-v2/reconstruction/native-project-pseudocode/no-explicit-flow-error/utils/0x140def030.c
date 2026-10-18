// VA 0x140def030, PDB extent 49 bytes
// utils::geometry::aabb::Aabb3::center
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::aabb::Aabb3::center
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 49 */

undefined8 * pdb_140def030(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (*(float *)(param_2 + 1) + *(float *)((longlong)param_2 + 0x14)) * _DAT_142e36f50;
  *param_1 = CONCAT44(((float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) +
                      (float)((ulonglong)*param_2 >> 0x20)) * _UNK_142e36f64,
                      ((float)*(undefined8 *)((longlong)param_2 + 0xc) + (float)*param_2) *
                      _DAT_142e36f60);
  *(float *)(param_1 + 1) = fVar1;
  return param_1;
}

