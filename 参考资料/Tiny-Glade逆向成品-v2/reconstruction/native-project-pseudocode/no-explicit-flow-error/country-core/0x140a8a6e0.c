// VA 0x140a8a6e0, PDB extent 5 bytes
// country_core::resources::audio_resources::AudioInstance::stop_on_drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioInstance::stop_on_drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 5 */

void pdb_140a8a6e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

