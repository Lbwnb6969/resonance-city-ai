// VA 0x140de99b0, PDB extent 143 bytes
// utils::time_continuous_lerp_vec2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::time_continuous_lerp_vec2
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 143 */

float pdb_140de99b0(float param_1,undefined8 param_2,float param_3,undefined8 param_4,uint param_5,
                   float param_6)

{
  float fVar1;
  
  fVar1 = (float)pub_142e32a20((float)(param_5 ^ _DAT_142e37820) * param_6);
  return (param_3 - param_1) * (_DAT_142e36f28 - fVar1) + param_1;
}

