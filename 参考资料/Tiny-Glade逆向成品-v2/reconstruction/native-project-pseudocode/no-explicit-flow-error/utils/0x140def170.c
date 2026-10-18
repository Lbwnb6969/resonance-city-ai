// VA 0x140def170, PDB extent 140 bytes
// utils::geometry::circle::Circle2d::as_points2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::as_points2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 140 */

longlong * pdb_140def170(longlong *param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  
  fVar3 = (float)pub_142e329c0((*(float *)(param_2 + 8) * _DAT_142f57bcc) / param_3);
  uVar1 = 0;
  if (0.0 <= fVar3) {
    uVar1 = (longlong)(fVar3 - _DAT_142e36f2c) & (longlong)fVar3 >> 0x3f | (longlong)fVar3;
  }
  uVar2 = 0xffffffffffffffff;
  if (fVar3 <= _DAT_142e36f30) {
    uVar2 = uVar1;
  }
  uVar1 = 3;
  if (3 < uVar2) {
    uVar1 = uVar2;
  }
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = param_2;
  param_1[1] = uVar1;
  return param_1;
}

