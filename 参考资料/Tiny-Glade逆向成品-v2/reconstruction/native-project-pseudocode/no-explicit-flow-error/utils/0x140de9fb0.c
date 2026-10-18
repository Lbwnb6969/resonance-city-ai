// VA 0x140de9fb0, PDB extent 31 bytes
// utils::fit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::fit
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 31 */

float pdb_140de9fb0(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return ((param_1 - param_2) / (param_3 - param_2)) * (param_5 - param_4) + param_4;
}

