// VA 0x140bf62f0, PDB extent 371 bytes
// country_core::systems::audio::ivy_audio::ivy_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/ivy_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::ivy_audio::ivy_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/ivy_audio.rs
   Extent: 371 */

void pdb_140bf62f0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined4 uStack_1f;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (*(longlong *)*param_1 == 0) {
    pdb_14007ee60();
    pbStack_30 = pub_1406abab0(0x12,1);
    uVar4 = _UNK_143066c0b;
    uVar3 = _UNK_143066c07;
    uVar2 = _UNK_143066c03;
    if (pbStack_30 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x12);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)pbStack_30 = _DAT_143066bff;
    *(undefined4 *)(pbStack_30 + 4) = uVar2;
    *(undefined4 *)(pbStack_30 + 8) = uVar3;
    *(undefined4 *)(pbStack_30 + 0xc) = uVar4;
    pbStack_30[0x10] = 0x6f;
    pbStack_30[0x11] = 0x77;
    uStack_48 = 0;
    uStack_38 = 0x12;
    uStack_28 = 0x12;
    uStack_20 = 2;
  }
  else {
    pdb_140a8b180(&uStack_48,*(longlong *)*param_1 + 0x10,&DAT_143066bff,0x12);
    if ((int)uStack_48 == 2) {
      uStack_78 = uStack_40;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143066d10,0x2b,&uStack_78,&UNK_143066cf0,&UNK_143066c48);
    }
  }
  uStack_58 = uStack_28;
  uStack_50 = uStack_20;
  uStack_4f = uStack_1f;
  uStack_4b = uStack_1b;
  uStack_49 = uStack_19;
  uStack_68 = uStack_38;
  pbStack_60 = pbStack_30;
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  pdb_141619c00(param_2,&uStack_78,&UNK_143066c60);
  return;
}

