// VA 0x140abde60, PDB extent 82 bytes
// country_core::systems::audio::building_audio::get_building_size_01
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::building_audio::get_building_size_01
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
   Extent: 82 */

float pdb_140abde60(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 == 1) {
    fVar1 = (float)pdb_140df34b0();
    fVar2 = _DAT_14304ab28;
    fVar3 = _DAT_14304ab2c;
  }
  else {
    fVar1 = (float)pdb_140defad0(param_1 + 1);
    fVar2 = _DAT_14304ab20;
    fVar3 = _DAT_14304ab24;
  }
  return (fVar1 - fVar2) / (fVar3 - fVar2);
}

