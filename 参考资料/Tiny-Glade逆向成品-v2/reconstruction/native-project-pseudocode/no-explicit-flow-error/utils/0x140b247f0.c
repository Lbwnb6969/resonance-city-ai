// VA 0x140b247f0, PDB extent 6 bytes
// utils::wall_space::WallSpace::space_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::wall_space::WallSpace::space_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 6 */

undefined4 pdb_140b247f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

