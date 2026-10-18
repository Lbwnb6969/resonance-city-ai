// VA 0x140b86ce0, PDB extent 10 bytes
// country_core::resources::weather::Weather::precipitation_save_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/weather.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::weather::Weather::precipitation_save_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/weather.rs
   Extent: 10 */

undefined1 pdb_140b86ce0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}

