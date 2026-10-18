// VA 0x140ad7ee0, PDB extent 431 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::stop_immediately
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::stop_immediately
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 431 */

void pdb_140ad7ee0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (param_1[0x1f] != 0) {
    lVar2 = param_1[0x1f] * 0x30;
    lVar1 = param_1[0x1e] + 8;
    do {
      if (*(int *)(lVar1 + -8) == 1) {
        pdb_141808d70(&uStack_b0,lVar1,1);
        if (CONCAT44(uStack_ac,uStack_b0) != -0x7ffffffffffffffc) {
          uStack_48 = uStack_80;
          uStack_58 = uStack_90;
          uStack_54 = uStack_8c;
          uStack_50 = uStack_88;
          uStack_4c = uStack_84;
          uStack_68 = uStack_a0;
          uStack_64 = uStack_9c;
          uStack_60 = uStack_98;
          uStack_5c = uStack_94;
          uStack_78 = uStack_b0;
          uStack_74 = uStack_ac;
          uStack_70 = uStack_a8;
          uStack_6c = uStack_a4;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143044570,0x2b,&uStack_78,&UNK_143044530,&UNK_143043d48);
        }
      }
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 1) {
    pdb_141808d70(&uStack_b0,param_1 + 3,1);
    if (CONCAT44(uStack_ac,uStack_b0) != -0x7ffffffffffffffc) {
      uStack_48 = uStack_80;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      uStack_60 = uStack_98;
      uStack_5c = uStack_94;
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_78,&UNK_143044530,&UNK_143043d48);
    }
  }
  return;
}

