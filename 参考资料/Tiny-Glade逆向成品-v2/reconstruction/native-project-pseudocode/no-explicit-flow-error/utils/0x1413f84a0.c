// VA 0x1413f84a0, PDB extent 7 bytes
// utils::loop_range::LoopRange::end
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::end
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 7 */

undefined4 pdb_1413f84a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

