// VA 0x140c6c1a0, PDB extent 13 bytes
// country_core::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 13 */

int pdb_140c6c1a0(ulonglong param_1)

{
  return ((uint)(param_1 >> 0x1a) & 0xffffffc0) + (int)param_1;
}

