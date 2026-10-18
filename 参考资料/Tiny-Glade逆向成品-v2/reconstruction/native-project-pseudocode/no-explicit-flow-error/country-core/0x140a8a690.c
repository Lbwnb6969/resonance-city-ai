// VA 0x140a8a690, PDB extent 73 bytes
// country_core::resources::audio_resources::AudioInstance::is_playing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioInstance::is_playing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 73 */

undefined8 pdb_140a8a690(int *param_1)

{
  longlong lStack_38;
  char cStack_30;
  
  if (*param_1 == 1) {
    pdb_141808580(&lStack_38,param_1 + 2);
    if (lStack_38 == -0x7ffffffffffffffc) {
      return CONCAT71(0x80000000000000,cStack_30 == '\0');
    }
    pdb_140a8f580(&lStack_38);
  }
  return 0;
}

