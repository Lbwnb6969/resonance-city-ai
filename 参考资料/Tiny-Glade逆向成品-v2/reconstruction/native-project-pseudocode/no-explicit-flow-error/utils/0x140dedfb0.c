// VA 0x140dedfb0, PDB extent 41 bytes
// utils::rng::init_rng_u64
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rng.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::rng::init_rng_u64
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rng.rs
   Extent: 41 */

ulonglong pdb_140dedfb0(longlong param_1)

{
  return param_1 * 0x759839da217f + 0x13c7ca9293765U ^ 0x4d595df4d0f33173;
}

