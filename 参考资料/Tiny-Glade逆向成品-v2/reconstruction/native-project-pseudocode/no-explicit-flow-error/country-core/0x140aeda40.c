// VA 0x140aeda40, PDB extent 789 bytes
// country_core::systems::audio::replay_audio::replay_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/replay_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::replay_audio::replay_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/replay_audio.rs
   Extent: 789 */

void pdb_140aeda40(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined3 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0xe,1);
    if (pbVar8 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xe);
      goto LAB_140aedcb4;
    }
    pbVar8[6] = 0x2f;
    pbVar8[7] = 0x55;
    pbVar8[8] = 0x49;
    pbVar8[9] = 0x2f;
    pbVar8[10] = 0x55;
    pbVar8[0xb] = 0x6e;
    pbVar8[0xc] = 100;
    pbVar8[0xd] = 0x6f;
    pbVar8[0] = 0x65;
    pbVar8[1] = 0x76;
    pbVar8[2] = 0x65;
    pbVar8[3] = 0x6e;
    pbVar8[4] = 0x74;
    pbVar8[5] = 0x3a;
    pbVar8[6] = 0x2f;
    pbVar8[7] = 0x55;
    auStack_b8[0] = 0;
    uStack_a8 = 0xe;
    uStack_98 = 0xe;
    _uStack_90 = CONCAT31(uStack_8f,2);
    pbStack_a0 = pbVar8;
  }
  else {
    pdb_140a8b180(auStack_b8,lVar2 + 0x10,&UNK_143050248,0xe);
    if ((int)auStack_b8[0] == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143050468,0x2b,&uStack_50,&UNK_143050448,&UNK_143050258);
    }
  }
  uVar7 = _uStack_90;
  uVar6 = uStack_98;
  pbVar8 = pbStack_a0;
  uVar5 = uStack_a8;
  uVar4 = auStack_b8[0];
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    pdb_14007ee60();
    pbStack_38 = pub_1406abab0(0xe,1);
    if (pbStack_38 == (byte *)0x0) {
LAB_140aedcb4:
      pdb_142dc7e2a(1,0xe);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pbStack_38[6] = 0x2f;
    pbStack_38[7] = 0x55;
    pbStack_38[8] = 0x49;
    pbStack_38[9] = 0x2f;
    pbStack_38[10] = 0x52;
    pbStack_38[0xb] = 0x65;
    pbStack_38[0xc] = 100;
    pbStack_38[0xd] = 0x6f;
    pbStack_38[0] = 0x65;
    pbStack_38[1] = 0x76;
    pbStack_38[2] = 0x65;
    pbStack_38[3] = 0x6e;
    pbStack_38[4] = 0x74;
    pbStack_38[5] = 0x3a;
    pbStack_38[6] = 0x2f;
    pbStack_38[7] = 0x55;
    uStack_50 = 0;
    uStack_40 = 0xe;
    uStack_30 = 0xe;
    uStack_28 = 2;
  }
  else {
    pdb_140a8b180(&uStack_50,lVar2 + 0x10,&UNK_143050270,0xe);
    if ((int)uStack_50 == 2) {
      auStack_b8[0] = uStack_48;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143050468,0x2b,auStack_b8,&UNK_143050448,&UNK_143050280);
    }
  }
  uStack_68 = uStack_30;
  uStack_60 = uStack_28;
  uStack_5f = uStack_27;
  uStack_5b = uStack_23;
  uStack_59 = uStack_21;
  uStack_78 = uStack_40;
  pbStack_70 = pbStack_38;
  uStack_88 = uStack_50;
  uStack_80 = uStack_48;
  auStack_b8[0] = uVar4;
  uStack_a8 = uVar5;
  pbStack_a0 = pbVar8;
  uStack_98 = uVar6;
  _uStack_90 = uVar7;
  pdb_141618430(param_2,auStack_b8,&UNK_143050298);
  return;
}

