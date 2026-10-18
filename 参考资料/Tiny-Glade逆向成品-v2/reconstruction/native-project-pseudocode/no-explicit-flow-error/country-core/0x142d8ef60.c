// VA 0x142d8ef60, PDB extent 144 bytes
// country_core::resources::audio_resources::fmod_to_anyhow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::audio_resources::fmod_to_anyhow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 144 */

undefined8 pdb_142d8ef60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcStack_30 = pdb_140a8f740;
  uStack_38 = param_1;
  uStack_20 = param_1;
  pdb_140f60760(auStack_50,&UNK_1430441c0,&uStack_38);
  uStack_28 = uStack_40;
  uVar1 = pdb_142de92b0(&uStack_38);
  pdb_140a8f580(uStack_20);
  return uVar1;
}

