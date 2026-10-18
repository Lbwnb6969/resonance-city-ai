// VA 0x140df4110, PDB extent 49 bytes
// utils::geometry::rectangle::Rectangle3d::expand
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::expand
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 49 */

void pdb_140df4110(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1) * _UNK_143061344;
  fVar2 = fVar3 * _UNK_143061348;
  fVar3 = fVar3 * _UNK_14306134c;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)*param_2 * _DAT_143061340;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - fVar2;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + fVar3;
  return;
}

