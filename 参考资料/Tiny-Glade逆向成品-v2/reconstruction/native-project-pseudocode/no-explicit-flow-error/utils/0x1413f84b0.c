// VA 0x1413f84b0, PDB extent 8 bytes
// utils::loop_range::LoopRange::len
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::len
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 8 */

longlong pdb_1413f84b0(int *param_1)

{
  return (longlong)(param_1[1] - *param_1);
}

