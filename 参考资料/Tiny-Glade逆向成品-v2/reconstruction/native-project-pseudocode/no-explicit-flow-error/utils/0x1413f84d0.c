// VA 0x1413f84d0, PDB extent 9 bytes
// utils::loop_range::LoopRange::is_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::is_empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 9 */

undefined4 pdb_1413f84d0(int *param_1)

{
  return CONCAT31((int3)((uint)param_1[1] >> 8),param_1[1] == *param_1);
}

