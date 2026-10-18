// VA 0x140df4370, PDB extent 68 bytes
// utils::geometry::rectangle::Rectangle3d::set_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::set_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 68 */

void pdb_140df4370(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  fVar1 = (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c)) * _DAT_142e36f50;
  fVar2 = _DAT_142e36f50 * (float)param_2[1];
  *(float *)(param_1 + 0x18) = fVar1 - fVar2;
  *(float *)(param_1 + 0x1c) = fVar2 + fVar1;
  return;
}

