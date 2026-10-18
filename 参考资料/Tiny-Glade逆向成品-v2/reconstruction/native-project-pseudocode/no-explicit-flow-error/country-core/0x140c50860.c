// VA 0x140c50860, PDB extent 381 bytes
// country_core::systems::audio::music::music_debug_gui::music_debug_gui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_debug_gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::music::music_debug_gui::music_debug_gui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_debug_gui.rs
   Extent: 381 */

void pdb_140c50860(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_3c0 [296];
  longlong lStack_298;
  undefined1 auStack_238 [392];
  undefined1 auStack_b0 [16];
  longlong *aplStack_a0 [6];
  int iStack_70;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar2 = *param_2;
    lVar3 = *param_3;
    uStack_39 = *(undefined1 *)(lVar3 + 0xd0);
    pdb_140a7ae00(auStack_3c0,&UNK_14306e3a0,10);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lStack_298 = lVar3 + 0xc6;
    pub_142e32760(auStack_238,auStack_3c0,0x188);
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(0x18,8);
    if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *(undefined1 **)pbStack_48 = &uStack_39;
    *(longlong *)(pbStack_48 + 8) = lVar2;
    *(longlong *)(pbStack_48 + 0x10) = lVar2 + 0x1c0;
    pdb_140a7b150(auStack_b0,auStack_238,lVar1,pbStack_48,&UNK_14306e460);
    if (iStack_70 != 2) {
      LOCK();
      *aplStack_a0[0] = *aplStack_a0[0] + -1;
      UNLOCK();
      if (*aplStack_a0[0] == 0) {
        pdb_140d71bf0(aplStack_a0);
      }
    }
  }
  return;
}

