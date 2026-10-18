// VA 0x1419ba150, PDB extent 25 bytes
// utils::impl$5::intersects
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::impl$5::intersects
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 25 */

bool pdb_1419ba150(float *param_1,float *param_2)

{
  if (param_1[1] < *param_2) {
    return false;
  }
  return *param_1 <= param_2[1];
}

