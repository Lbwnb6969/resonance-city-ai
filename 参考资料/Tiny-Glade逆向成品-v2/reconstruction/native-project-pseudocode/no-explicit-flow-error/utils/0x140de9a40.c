// VA 0x140de9a40, PDB extent 111 bytes
// utils::time_continuous_lerp_vec3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::time_continuous_lerp_vec3
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 111 */

undefined8 *
pdb_140de9a40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)pub_142e32a20(CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^ _UNK_142e37824,
                                        (float)((uint)param_4 ^ _DAT_142e37820) * param_5));
  fVar3 = _DAT_142e36f28 - fVar3;
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = *(float *)(param_3 + 1);
  fVar4 = (float)*param_2;
  fVar5 = (float)((ulonglong)*param_2 >> 0x20);
  *param_1 = CONCAT44(fVar3 * ((float)((ulonglong)*param_3 >> 0x20) - fVar5) + fVar5,
                      fVar3 * ((float)*param_3 - fVar4) + fVar4);
  *(float *)(param_1 + 1) = (fVar2 - fVar1) * fVar3 + fVar1;
  return param_1;
}

