// VA 0x140dedfe0, PDB extent 43 bytes
// utils::rng::init_rng
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rng.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::rng::init_rng
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rng.rs
   Extent: 43 */

ulonglong pdb_140dedfe0(ulonglong param_1)

{
  return (param_1 & 0xffffffff) * 0x759839da217f + 0x13c7ca9293765 ^ 0x4d595df4d0f33173;
}

