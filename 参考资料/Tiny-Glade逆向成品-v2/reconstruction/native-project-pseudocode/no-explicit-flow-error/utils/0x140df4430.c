// VA 0x140df4430, PDB extent 10 bytes
// utils::name_hash::impl$2::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/name_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::name_hash::impl$2::eq
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/name_hash.rs
   Extent: 10 */

undefined8 pdb_140df4430(longlong *param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*param_1 == *param_2);
}

