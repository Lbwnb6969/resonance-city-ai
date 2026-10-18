// VA 0x140948120, PDB extent 6 bytes
// country_core::game_config::_::impl$0::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_config::_::impl$0::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 6 */

char pdb_140948120(char *param_1)

{
  return *param_1 + '\x01';
}

