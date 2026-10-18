// VA 0x140a44d50, PDB extent 14 bytes
// country_core::resources::steam::impl$41::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::steam::impl$41::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 14 */

int pdb_140a44d50(byte param_1,byte param_2)

{
  return (uint)param_1 + (uint)param_2 * 0x100 + 1;
}

