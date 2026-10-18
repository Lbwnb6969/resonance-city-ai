// VA 0x140a31ba0, PDB extent 67 bytes
// country_core::asset_libraries::audio_trigger_library::AudioTriggerCollection::boxes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/audio_trigger_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::audio_trigger_library::AudioTriggerCollection::boxes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/audio_trigger_library.rs
   Extent: 67 */

void pdb_140a31ba0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  lVar4 = 0x1c;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  uVar1 = *(uint *)(param_2 + 0x1c);
  *param_1 = lVar4 + lVar2;
  param_1[1] = lVar3 * 0x1c + lVar2;
  param_1[2] = (ulonglong)(lVar3 != 0);
  param_1[3] = (ulonglong)uVar1;
  return;
}

