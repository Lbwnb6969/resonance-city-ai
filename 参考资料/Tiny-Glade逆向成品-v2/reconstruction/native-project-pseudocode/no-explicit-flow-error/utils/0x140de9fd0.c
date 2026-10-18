// VA 0x140de9fd0, PDB extent 13 bytes
// utils::lerp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::lerp
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 13 */

float pdb_140de9fd0(float param_1,float param_2,float param_3)

{
  return param_1 + (param_2 - param_1) * param_3;
}

