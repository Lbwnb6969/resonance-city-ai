// VA 0x140de9410, PDB extent 253 bytes
// utils::xz_rotation_mat3_bad
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::xz_rotation_mat3_bad
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 253 */

void pdb_140de9410(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = _DAT_142e36f28 / SQRT(param_3 * param_3 + param_2 * param_2);
  if ((int)fVar2 - 1U < 0x7fffff || (int)ABS(fVar2) - 0x800000U < 0x7f000000 && -1 < (int)fVar2) {
    param_2 = param_2 * fVar2;
    param_3 = param_3 * fVar2;
  }
  else {
    param_3 = 0.0;
    param_2 = _DAT_142e36f28;
  }
  fVar3 = param_2 * 0.0 - param_3 * 0.0;
  fVar1 = 0.0 - param_2;
  fVar2 = _DAT_142e36f28 / SQRT(fVar1 * fVar1 + fVar3 * fVar3 + param_3 * param_3);
  *param_1 = CONCAT44(fVar2 * fVar3,fVar2 * param_3);
  *(float *)(param_1 + 1) = fVar1 * fVar2;
  *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_142e378e0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(float *)(param_1 + 3) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(float *)(param_1 + 4) = param_3;
  return;
}

