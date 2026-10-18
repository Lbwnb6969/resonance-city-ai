// VA 0x140b80f90, PDB extent 29 bytes
// country_core::systems::save::save_game::SaveFileSection::json_key
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::save_game::SaveFileSection::json_key
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 29 */

undefined8 pdb_140b80f90(byte *param_1)

{
  return *(undefined8 *)(&UNK_14305d7a0 + (ulonglong)*param_1 * 8);
}

