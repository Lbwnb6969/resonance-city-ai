// VA 0x140a31ae0, PDB extent 8 bytes
// country_core::game_config::_::impl$0::previous
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_config::_::impl$0::previous
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 8 */

byte pdb_140a31ae0(char *param_1)

{
  return *param_1 * '\x02' ^ 2;
}

