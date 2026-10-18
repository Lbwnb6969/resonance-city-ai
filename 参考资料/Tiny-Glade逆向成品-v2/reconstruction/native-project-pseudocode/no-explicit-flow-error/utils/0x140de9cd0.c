// VA 0x140de9cd0, PDB extent 40 bytes
// utils::time_continuous_lerp_factor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::time_continuous_lerp_factor
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 40 */

float pdb_140de9cd0(uint param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)pub_142e32a20((float)(param_1 ^ _DAT_142e37820) * param_2);
  return _DAT_142e36f28 - fVar1;
}

