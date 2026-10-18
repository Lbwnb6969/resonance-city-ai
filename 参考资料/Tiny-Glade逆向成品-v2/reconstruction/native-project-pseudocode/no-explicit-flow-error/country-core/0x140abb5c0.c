// VA 0x140abb5c0, PDB extent 901 bytes
// country_core::systems::audio::roof_audio::roof_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::roof_audio::roof_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
   Extent: 901 */

void pdb_140abb5c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14304b17b;
  puStack_50 = (undefined *)0x14;
  pdb_140a87c40(&puStack_108,uVar1,&puStack_58);
  if (SBORROW8(0,(longlong)puStack_108)) {
    puStack_58 = puStack_100;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14304c468,0x2b,&puStack_58,&UNK_14304c448,&UNK_14304b190);
  }
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14304b1a8;
  puStack_50 = (undefined *)0x16;
  pdb_140a87c40(&puStack_108,uVar1,&puStack_58);
  if (!SBORROW8(0,(longlong)puStack_108)) {
    uVar2 = (undefined4)uStack_f8;
    uVar3 = uStack_f8._4_4_;
    uVar4 = uStack_f0;
    uVar5 = uStack_ec;
    uStack_f8 = 3;
    _uStack_f0 = CONCAT44(uStack_ec,0x32);
    puStack_108 = &UNK_14304b1d8;
    puStack_100 = (undefined *)0x24;
    pdb_140a87c40(&puStack_58,uVar1,&puStack_108);
    if (!SBORROW8(0,(longlong)puStack_58)) {
      uStack_68 = uStack_28;
      uStack_80 = CONCAT44(uStack_3c,uStack_40);
      uStack_78 = uStack_38;
      uStack_70 = uStack_30;
      uStack_88 = uStack_48;
      puStack_98 = puStack_58;
      puStack_90 = puStack_50;
      uStack_a0 = uStack_d8;
      uStack_b0 = uStack_e8;
      uStack_ac = uStack_e4;
      uStack_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_c0 = uVar2;
      uStack_bc = uVar3;
      uStack_b8 = uVar4;
      uStack_b4 = uVar5;
      uStack_60 = _DAT_1430151c0;
      pdb_1416197d0(param_2,&puStack_108,&UNK_14304b218);
      return;
    }
    puStack_108 = puStack_50;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14304c468,0x2b,&puStack_108,&UNK_14304c448,&UNK_14304b200);
  }
  puStack_58 = puStack_100;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14304c468,0x2b,&puStack_58,&UNK_14304c448,&UNK_14304b1c0);
}

