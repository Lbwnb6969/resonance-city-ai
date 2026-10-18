// VA 0x140ca2220, PDB extent 14 bytes
// country_core::resources::audio_settings::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_settings::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_settings.rs
   Extent: 14 */

undefined8 * pdb_140ca2220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_142e3c648;
  *param_1 = _DAT_142e3c640;
  param_1[1] = uVar1;
  return param_1;
}

