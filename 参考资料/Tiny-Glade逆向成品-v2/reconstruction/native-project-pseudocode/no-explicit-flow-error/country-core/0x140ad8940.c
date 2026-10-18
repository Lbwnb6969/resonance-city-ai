// VA 0x140ad8940, PDB extent 403 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::pause
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::pause
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 403 */

void pdb_140ad8940(int *param_1)

{
  longlong lVar1;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if ((*param_1 == 1) && (*(ulonglong *)(param_1 + 2) < *(ulonglong *)(param_1 + 0x3e))) {
    lVar1 = *(ulonglong *)(param_1 + 2) * 0x30;
    if ((*(int *)(*(longlong *)(param_1 + 0x3c) + lVar1) == 1) &&
       (pdb_141807e40(&uStack_90,*(longlong *)(param_1 + 0x3c) + lVar1 + 8,1),
       CONCAT44(uStack_8c,uStack_90) != -0x7ffffffffffffffc)) {
      uStack_28 = uStack_60;
      uStack_38 = uStack_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uStack_40 = uStack_78;
      uStack_3c = uStack_74;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_58,&UNK_143044530,&UNK_143043da8);
    }
  }
  if ((param_1[4] == 1) &&
     (pdb_141807e40(&uStack_90,param_1 + 6,1), CONCAT44(uStack_8c,uStack_90) != -0x7ffffffffffffffc)
     ) {
    uStack_28 = uStack_60;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    uStack_40 = uStack_78;
    uStack_3c = uStack_74;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143044570,0x2b,&uStack_58,&UNK_143044530,&UNK_143043da8);
  }
  return;
}

