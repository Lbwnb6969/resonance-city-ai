// VA 0x140abbb70, PDB extent 719 bytes
// country_core::systems::audio::roof_audio::instantiate_audio_w_position_and_volume
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::roof_audio::instantiate_audio_w_position_and_volume
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
   Extent: 719 */

void pdb_140abbb70(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined1 auStack_a0 [8];
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    uVar2 = param_3 == 0;
    if (-1 < (longlong)param_3) goto LAB_140abbc06;
    uVar1 = 0;
    do {
      uVar2 = 1;
      pdb_142dc7e2a(uVar1,param_3);
LAB_140abbc06:
      if ((bool)uVar2) {
        pbStack_60 = (byte *)0x1;
        goto LAB_140abbc3e;
      }
      pdb_14007ee60();
      uVar1 = 1;
      pbStack_60 = pub_1406abab0(param_3,1);
    } while (pbStack_60 == (byte *)0x0);
    pub_142e32760(pbStack_60,param_2,param_3);
LAB_140abbc3e:
    lStack_78 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_68 = param_3;
    uStack_58 = param_3;
  }
  else {
    pdb_140a8b180(&lStack_78,*param_1 + 0x10,param_2,param_3);
    if ((int)lStack_78 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304c468,0x2b,&lStack_e0,&UNK_14304c448,&UNK_14304b248);
    }
  }
  uStack_88 = uStack_58;
  uStack_80 = (undefined1)uStack_50;
  uStack_7f = CONCAT13(uStack_4c,uStack_50._1_3_);
  uStack_7b = uStack_4b;
  uStack_79 = uStack_49;
  uStack_98 = uStack_68;
  pbStack_90 = pbStack_60;
  lStack_a8 = lStack_78;
  pdb_140a8e190(&lStack_a8,param_4);
  pdb_140a8a6f0(&lStack_a8);
  if (lStack_a8 == 1) {
    pdb_141807fa0(&lStack_e0,auStack_a0,param_5);
    if (lStack_e0 != -0x7ffffffffffffffc) {
      uStack_48 = uStack_b0;
      uStack_50 = uStack_b8;
      uStack_4c = (undefined1)uStack_b4;
      uStack_4b = (undefined2)((uint)uStack_b4 >> 8);
      uStack_49 = (undefined1)((uint)uStack_b4 >> 0x18);
      uStack_70 = uStack_d8;
      uStack_6c = uStack_d4;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_78,&UNK_143044530,&UNK_143044350);
    }
  }
  pdb_1409a5ed0(&lStack_a8);
  if (uStack_98 != 0) {
    pub_1406abac0(pbStack_90,uStack_98,1);
  }
  return;
}

