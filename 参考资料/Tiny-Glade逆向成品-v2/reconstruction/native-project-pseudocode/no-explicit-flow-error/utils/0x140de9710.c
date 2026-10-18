// VA 0x140de9710, PDB extent 91 bytes
// utils::time_continuous_lerp_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::time_continuous_lerp_mut
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 91 */

float pdb_140de9710(float *param_1,float param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1;
  fVar1 = (float)pub_142e32a20((float)(param_3 ^ _DAT_142e37820) * param_4);
  fVar2 = (param_2 - fVar2) * (_DAT_142e36f28 - fVar1) + fVar2;
  *param_1 = fVar2;
  return fVar2;
}

