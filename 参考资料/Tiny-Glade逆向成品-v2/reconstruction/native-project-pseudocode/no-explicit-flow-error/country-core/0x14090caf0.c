// VA 0x14090caf0, PDB extent 330 bytes
// country_core::systems::audio::wall_audio_utils::AudioLoopPlayer::request_play
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::wall_audio_utils::AudioLoopPlayer::request_play
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_utils.rs
   Extent: 330 */

void pdb_14090caf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar2,*(ulonglong *)(param_1 + 0x10),&UNK_143043a80);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = lVar3 + uVar2 * 0x30;
  pdb_140a8e190(lVar1);
  pdb_140a8e730(lVar1,&UNK_14301ef60,0xd,param_5);
  if (*(int *)(lVar3 + uVar2 * 0x30) == 1) {
    pdb_141807fa0(&uStack_c0,lVar1 + 8,param_4);
    if (CONCAT44(uStack_bc,uStack_c0) != -0x7ffffffffffffffc) {
      uStack_58 = uStack_90;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      uStack_60 = uStack_98;
      uStack_5c = uStack_94;
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_88 = uStack_c0;
      uStack_84 = uStack_bc;
      uStack_80 = uStack_b8;
      uStack_7c = uStack_b4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_88,&UNK_143044530,&UNK_143044350);
    }
  }
  return;
}

