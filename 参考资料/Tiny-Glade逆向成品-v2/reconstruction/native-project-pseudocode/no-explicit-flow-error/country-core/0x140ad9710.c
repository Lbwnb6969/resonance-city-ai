// VA 0x140ad9710, PDB extent 98 bytes
// country_core::systems::audio::music::music_player::get_timeline_beat_properties
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::get_timeline_beat_properties
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 98 */

undefined8 pdb_140ad9710(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulonglong uVar1;
  
  if (param_3 != (int *)0x0) {
    _DAT_143cb2c38 = (longlong)param_3[1];
    uVar1 = (ulonglong)*param_3;
    _DAT_143cb2c28 = param_3[3];
    _DAT_143cb2c50 = (_DAT_143cb2c30 != uVar1) + _DAT_143cb2c50;
    if (_DAT_143cb2c50 < uVar1) {
      _DAT_143cb2c50 = uVar1;
    }
    _DAT_143cb2c48 = (longlong)param_3[4];
    _DAT_143cb2c40 = (longlong)param_3[5];
    _DAT_143cb2c30 = uVar1;
  }
  return 0;
}

