// VA 0x140a31ad0, PDB extent 5 bytes
// country_core::game_config::DevSettings::live_link
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_config::DevSettings::live_link
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 5 */

undefined1 pdb_140a31ad0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 7);
}

