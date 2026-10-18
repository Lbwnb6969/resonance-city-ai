// VA 0x141acf220, PDB extent 819 bytes
// country_core::systems::audio::game_loading_audio::init_game_loading_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/game_loading_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::game_loading_audio::init_game_loading_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/game_loading_audio.rs
   Extent: 819 */

void pdb_141acf220(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong alStack_d0 [5];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  longlong *plStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (*(longlong *)*param_1 == 0) {
    pdb_14007ee60();
    pbStack_40 = pub_1406abab0(0x11,1);
    uVar4 = _UNK_1433879ac;
    uVar3 = _UNK_1433879a8;
    uVar2 = _UNK_1433879a4;
    if (pbStack_40 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x11);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)pbStack_40 = _DAT_1433879a0;
    *(undefined4 *)(pbStack_40 + 4) = uVar2;
    *(undefined4 *)(pbStack_40 + 8) = uVar3;
    *(undefined4 *)(pbStack_40 + 0xc) = uVar4;
    pbStack_40[0x10] = 0x67;
    lStack_58 = 0;
    lStack_48 = 0x11;
    lStack_38 = 0x11;
    uStack_30 = CONCAT31(uStack_30._1_3_,2);
  }
  else {
    pdb_140a8b180(&lStack_58,*(longlong *)*param_1 + 0x10,&DAT_1433879a0,0x11);
    if ((int)lStack_58 == 2) {
      alStack_d0[0] = lStack_50;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143388100,0x2b,alStack_d0,&UNK_1433880e0,&UNK_1433879b8);
    }
  }
  lStack_78 = lStack_38;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_6b = uStack_2b;
  uStack_6a = uStack_2a;
  uStack_69 = uStack_29;
  lStack_88 = lStack_48;
  pbStack_80 = pbStack_40;
  lStack_98 = lStack_58;
  lStack_90 = lStack_50;
  if (lStack_58 == 1) {
    uStack_19 = 1;
    pdb_141808ec0(alStack_d0,&lStack_90);
    if (alStack_d0[0] != -0x7ffffffffffffffc) {
      uStack_28 = uStack_a0;
      uStack_30 = uStack_a8;
      uStack_2c = (undefined1)uStack_a4;
      uStack_2b = (undefined1)((uint)uStack_a4 >> 8);
      uStack_2a = (undefined1)((uint)uStack_a4 >> 0x10);
      uStack_29 = (undefined1)((uint)uStack_a4 >> 0x18);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_58,&UNK_143044530,&UNK_143043dc0);
    }
  }
  lStack_38 = lStack_78;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uStack_2b = uStack_6b;
  uStack_2a = uStack_6a;
  uStack_29 = uStack_69;
  lStack_48 = lStack_88;
  pbStack_40 = pbStack_80;
  lStack_58 = lStack_98;
  lStack_50 = lStack_90;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar5 = (longlong *)*param_2;
  if ((int)*plVar5 != 2) {
    plStack_60 = plVar5;
    pdb_1409a5ed0(plVar5);
    plVar5 = plStack_60;
    if (plStack_60[2] != 0) {
      pub_1406abac0((byte *)plStack_60[3],plStack_60[2],1);
    }
  }
  plVar5[4] = lStack_38;
  plVar5[5] = CONCAT17(uStack_29,
                       CONCAT16(uStack_2a,CONCAT15(uStack_2b,CONCAT14(uStack_2c,uStack_30))));
  plVar5[2] = lStack_48;
  plVar5[3] = (longlong)pbStack_40;
  *plVar5 = lStack_58;
  plVar5[1] = lStack_50;
  return;
}

