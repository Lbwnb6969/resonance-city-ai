// VA 0x140b80f80, PDB extent 15 bytes
// country_core::systems::save::save_game::SaveFileSection::padding_bytes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::SaveFileSection::padding_bytes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 15 */

undefined8 pdb_140b80f80(byte *param_1)

{
  return *(undefined8 *)(&UNK_14305d6d0 + (ulonglong)*param_1 * 8);
}

