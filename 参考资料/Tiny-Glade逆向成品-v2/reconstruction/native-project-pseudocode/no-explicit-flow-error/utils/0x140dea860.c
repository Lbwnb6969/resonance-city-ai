// VA 0x140dea860, PDB extent 65 bytes
// utils::natural_cubic::SplineSegment2D::position_at_local_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::natural_cubic::SplineSegment2D::position_at_local_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 65 */

float pdb_140dea860(longlong param_1,float param_2)

{
  return ((*(float *)(param_1 + 0x10) * param_2 + *(float *)(param_1 + 0xc)) * param_2 +
         *(float *)(param_1 + 8)) * param_2 + *(float *)(param_1 + 4);
}

