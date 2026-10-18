// VA 0x1419ba130, PDB extent 30 bytes
// utils::impl$6::intersects
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::impl$6::intersects
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 30 */

uint pdb_1419ba130(float *param_1,float *param_2)

{
  return -(uint)(*param_1 <= param_2[1] && *param_2 <= param_1[1]) & 0xffffff01;
}

