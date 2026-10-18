// VA 0x140df4150, PDB extent 38 bytes
// utils::geometry::rectangle::Rectangle3d::extent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::extent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 38 */

undefined4 * pdb_140df4150(undefined4 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = fVar1 - fVar2;
  param_1[2] = uVar3;
  return param_1;
}

