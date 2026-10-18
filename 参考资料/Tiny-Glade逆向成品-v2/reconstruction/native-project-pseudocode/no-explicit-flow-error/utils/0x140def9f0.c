// VA 0x140def9f0, PDB extent 40 bytes
// utils::geometry::circle::Circle2d::with_expanded_diameter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::with_expanded_diameter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 40 */

undefined8 * pdb_140def9f0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  param_3 = param_3 * _DAT_142e36f50;
  fVar1 = *(float *)(param_2 + 1);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_1 = *param_2;
  *(float *)(param_1 + 1) = param_3 + fVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}

