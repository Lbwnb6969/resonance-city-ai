// VA 0x140abb950, PDB extent 543 bytes
// country_core::systems::audio::roof_audio::instantiate_audio_w_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::roof_audio::instantiate_audio_w_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
   Extent: 543 */

void pdb_140abb950(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    uVar2 = param_3 == 0;
    if (-1 < (longlong)param_3) goto LAB_140abb9e3;
    uVar1 = 0;
    do {
      uVar2 = 1;
      pdb_142dc7e2a(uVar1,param_3);
LAB_140abb9e3:
      if ((bool)uVar2) {
        pbStack_80 = (byte *)0x1;
        goto LAB_140abba1b;
      }
      pdb_14007ee60();
      uVar1 = 1;
      pbStack_80 = pub_1406abab0(param_3,1);
    } while (pbStack_80 == (byte *)0x0);
    pub_142e32760(pbStack_80,param_2,param_3);
LAB_140abba1b:
    uStack_98 = 0;
    uStack_70 = 2;
    uStack_88 = param_3;
    uStack_78 = param_3;
  }
  else {
    pdb_140a8b180(&uStack_98,*param_1 + 0x10,param_2,param_3);
    if ((int)uStack_98 == 2) {
      uStack_68 = uStack_90;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_68,&UNK_14304c448,&UNK_14304b230);
    }
  }
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_3f = uStack_6f;
  uStack_3b = uStack_6b;
  uStack_39 = uStack_69;
  uStack_58 = uStack_88;
  pbStack_50 = pbStack_80;
  uStack_68 = uStack_98;
  uStack_60 = uStack_90;
  pdb_140a8e190(&uStack_68,param_4);
  pdb_140a8a6f0(&uStack_68);
  pdb_1409a5ed0(&uStack_68);
  if (uStack_58 != 0) {
    pub_1406abac0(pbStack_50,uStack_58,1);
  }
  return;
}

