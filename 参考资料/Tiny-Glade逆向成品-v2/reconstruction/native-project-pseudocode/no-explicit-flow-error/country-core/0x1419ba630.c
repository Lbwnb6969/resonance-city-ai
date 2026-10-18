// VA 0x1419ba630, PDB extent 151 bytes
// country_core::systems::audio::water_ambience_audio::impl$0::load_index_unchecked
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::water_ambience_audio::impl$0::load_index_unchecked
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
   Extent: 151 */

float pdb_1419ba630(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 < *(ulonglong *)(param_1 + 0x10)) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 8 + param_2 * 0x18);
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
    return (float)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) *
           _DAT_143043134;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2,*(ulonglong *)(param_1 + 0x10),&UNK_14335ff60);
}

