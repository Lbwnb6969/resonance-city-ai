// VA 0x140de9510, PDB extent 91 bytes
// utils::uniform_sample_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::uniform_sample_circle
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 91 */

float pdb_140de9510(float param_1,float param_2)

{
  float fVar1;
  
  param_1 = param_1 * _DAT_142f57bcc;
  fVar1 = (float)pub_142e329e0(param_1);
  pub_142e32b30(param_1);
  return fVar1 * param_2;
}

