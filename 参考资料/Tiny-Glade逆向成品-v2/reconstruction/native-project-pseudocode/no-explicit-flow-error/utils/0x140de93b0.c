// VA 0x140de93b0, PDB extent 81 bytes
// utils::time_continuous_lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::time_continuous_lerp
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 81 */

float pdb_140de93b0(float param_1,float param_2,uint param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)pub_142e32a20((float)(param_3 ^ _DAT_142e37820) * param_4);
  return (param_2 - param_1) * (_DAT_142e36f28 - fVar1) + param_1;
}

