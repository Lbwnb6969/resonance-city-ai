// VA 0x140de8b50, PDB extent 83 bytes
// utils::polar_to_cartesian
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::polar_to_cartesian
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 83 */

float pdb_140de8b50(float param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)pub_142e329e0(param_2);
  pub_142e32b30(param_2);
  return fVar1 * param_1;
}

