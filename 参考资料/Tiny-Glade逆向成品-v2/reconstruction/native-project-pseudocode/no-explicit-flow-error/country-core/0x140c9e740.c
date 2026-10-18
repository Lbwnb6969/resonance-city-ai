// VA 0x140c9e740, PDB extent 885 bytes
// country_core::systems::audio::timberframe_audio::timberframe_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/timberframe_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::timberframe_audio::timberframe_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/timberframe_audio.rs
   Extent: 885 */

void pdb_140c9e740(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  undefined8 uStack_50;
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
  puStack_58 = &UNK_143077755;
  uStack_50 = 0x1a;
  pdb_140a87c40(&uStack_108,uVar1,&puStack_58);
  if (SBORROW8(0,(longlong)uStack_108)) {
    puStack_58 = uStack_100;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143077ea8,0x2b,&puStack_58,&UNK_143077e88,&UNK_143077770);
  }
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_143077788;
  uStack_50 = 0x1c;
  pdb_140a87c40(&uStack_108,uVar1,&puStack_58);
  if (!SBORROW8(0,(longlong)uStack_108)) {
    uVar2 = (undefined4)uStack_108;
    uVar3 = uStack_108._4_4_;
    uVar4 = (undefined4)uStack_100;
    uVar5 = uStack_100._4_4_;
    uVar6 = (undefined4)uStack_f8;
    uVar7 = uStack_f8._4_4_;
    uVar8 = uStack_f0;
    uVar9 = uStack_ec;
    uStack_f8 = 3;
    _uStack_f0 = CONCAT44(uStack_ec,0x32);
    uStack_108 = &UNK_1430777c0;
    uStack_100 = (undefined *)0x1b;
    pdb_140a87c40(&puStack_58,uVar1,&uStack_108);
    if (!SBORROW8(0,(longlong)puStack_58)) {
      uStack_68 = uStack_28;
      uStack_80 = CONCAT44(uStack_3c,uStack_40);
      uStack_78 = uStack_38;
      uStack_70 = uStack_30;
      uStack_88 = uStack_48;
      puStack_98 = puStack_58;
      uStack_90 = uStack_50;
      uStack_a0 = uStack_d8;
      uStack_b0 = uStack_e8;
      uStack_ac = uStack_e4;
      uStack_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_c0 = uVar6;
      uStack_bc = uVar7;
      uStack_b8 = uVar8;
      uStack_b4 = uVar9;
      uStack_d0 = uVar2;
      uStack_cc = uVar3;
      uStack_c8 = uVar4;
      uStack_c4 = uVar5;
      pdb_141619930(param_2,&uStack_108,&UNK_1430777f8);
      return;
    }
    uStack_108 = (undefined *)uStack_50;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143077ea8,0x2b,&uStack_108,&UNK_143077e88,&UNK_1430777e0);
  }
  puStack_58 = uStack_100;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143077ea8,0x2b,&puStack_58,&UNK_143077e88,&UNK_1430777a8);
}

