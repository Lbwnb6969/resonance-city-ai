// VA 0x140a31b70, PDB extent 42 bytes
// country_core::asset_libraries::audio_trigger_library::AudioTriggerLibrary::get_triggers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/audio_trigger_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::audio_trigger_library::AudioTriggerLibrary::get_triggers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/audio_trigger_library.rs
   Extent: 42 */

undefined8 pdb_140a31b70(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14303aba9,0x31,&UNK_14303abe0);
}

