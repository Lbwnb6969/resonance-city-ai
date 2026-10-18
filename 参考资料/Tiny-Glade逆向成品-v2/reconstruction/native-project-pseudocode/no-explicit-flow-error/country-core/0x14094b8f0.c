// VA 0x14094b8f0, PDB extent 487 bytes
// country_core::systems::audio::signifier_audio::signifier_audio_system::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::signifier_audio::signifier_audio_system::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
   Extent: 487 */

void pdb_14094b8f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  ulonglong uStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(param_3,1);
    if (pbVar2 == (byte *)0x0) {
      pdb_142dc7e2a(1,param_3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pub_142e32760(pbVar2,param_2,param_3);
    uStack_88 = 0;
    uStack_60 = 2;
    uStack_78 = param_3;
    pbStack_70 = pbVar2;
    uStack_68 = param_3;
  }
  else {
    pdb_140a8b180(&uStack_88,*param_1 + 0x10,param_2,param_3);
    if ((int)uStack_88 == 2) {
      uStack_58 = uStack_80;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143024e08,0x2b,&uStack_58,&UNK_143024de8,&UNK_1430248b8);
    }
  }
  uStack_38 = uStack_68;
  uStack_30 = uStack_60;
  uStack_2f = uStack_5f;
  uStack_2b = uStack_5b;
  uStack_29 = uStack_59;
  uStack_48 = uStack_78;
  pbStack_40 = pbStack_70;
  uStack_58 = uStack_88;
  uStack_50 = uStack_80;
  pdb_140a8a6f0(&uStack_58);
  pdb_1409a5ed0(&uStack_58);
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_40,uStack_48,1);
  }
  return;
}

