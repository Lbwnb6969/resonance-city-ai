// VA 0x140a99c50, PDB extent 1562 bytes
// country_core::systems::audio::garden_audio::garden_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/garden_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::garden_audio::garden_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/garden_audio.rs
   Extent: 1562 */

void pdb_140a99c50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [280];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uStack_420 = 3;
  uStack_418 = 0x32;
  puStack_430 = &UNK_143045ebc;
  uStack_428 = 0x1c;
  pdb_140a87c40(&uStack_318,uVar1,&puStack_430);
  if (SBORROW8(0,(longlong)uStack_318)) {
    puStack_430 = uStack_310;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430461b0,0x2b,&puStack_430,&UNK_143046190,&UNK_143045ed8);
  }
  uStack_68 = puStack_2e8;
  uStack_78 = (undefined4)uStack_2f8;
  uStack_74 = uStack_2f8._4_4_;
  uStack_70 = (undefined4)uStack_2f0;
  uStack_6c = uStack_2f0._4_4_;
  uStack_88 = (undefined4)uStack_308;
  uStack_84 = uStack_308._4_4_;
  uStack_80 = (undefined4)uStack_300;
  uStack_7c = uStack_300._4_4_;
  uStack_98 = (undefined4)uStack_318;
  uStack_94 = uStack_318._4_4_;
  uStack_90 = (undefined4)uStack_310;
  uStack_8c = uStack_310._4_4_;
  uStack_420 = 3;
  uStack_418 = 0x32;
  puStack_430 = &UNK_143045ef0;
  uStack_428 = 0x21;
  pdb_140a87c40(&uStack_318,uVar1,&puStack_430);
  if (SBORROW8(0,(longlong)uStack_318)) {
    puStack_430 = uStack_310;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430461b0,0x2b,&puStack_430,&UNK_143046190,&UNK_143045f18);
  }
  uStack_a8 = puStack_2e8;
  uStack_b8 = (undefined4)uStack_2f8;
  uStack_b4 = uStack_2f8._4_4_;
  uStack_b0 = (undefined4)uStack_2f0;
  uStack_ac = uStack_2f0._4_4_;
  uStack_c8 = (undefined4)uStack_308;
  uStack_c4 = uStack_308._4_4_;
  uStack_c0 = (undefined4)uStack_300;
  uStack_bc = uStack_300._4_4_;
  uStack_d8 = (undefined4)uStack_318;
  uStack_d4 = uStack_318._4_4_;
  uStack_d0 = (undefined4)uStack_310;
  uStack_cc = uStack_310._4_4_;
  uStack_318 = &UNK_143045f30;
  uStack_310 = (undefined *)0x1b;
  uStack_308 = &UNK_143045f4b;
  uStack_300 = 0x1f;
  uStack_2f8 = &UNK_143045f6a;
  uStack_2f0 = 0x21;
  puStack_2e8 = &UNK_143045f8b;
  uStack_2e0 = 0x1b;
  uStack_2d8 = &UNK_143045fa6;
  uStack_2d0 = 0x1b;
  pdb_1417ccb10(&puStack_430,&uStack_318,param_1);
  uStack_50 = 3;
  uStack_48 = 0x32;
  puStack_60 = &UNK_143045fc1;
  uStack_58 = 0x1d;
  pdb_140a87c40(&uStack_318,uVar1,&puStack_60);
  if (SBORROW8(0,(longlong)uStack_318)) {
    puStack_60 = uStack_310;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430461b0,0x2b,&puStack_60,&UNK_143046190,&UNK_143045fe0);
  }
  puStack_e8 = puStack_2e8;
  uStack_f8 = (undefined4)uStack_2f8;
  uStack_f4 = uStack_2f8._4_4_;
  uStack_f0 = (undefined4)uStack_2f0;
  uStack_ec = uStack_2f0._4_4_;
  uStack_108 = (undefined4)uStack_308;
  uStack_104 = uStack_308._4_4_;
  uStack_100 = (undefined4)uStack_300;
  uStack_fc = uStack_300._4_4_;
  uStack_118 = (undefined4)uStack_318;
  uStack_114 = uStack_318._4_4_;
  uStack_110 = (undefined4)uStack_310;
  uStack_10c = uStack_310._4_4_;
  uStack_308 = (undefined *)0x3;
  uStack_300 = CONCAT44(uStack_300._4_4_,0x32);
  uStack_318 = &UNK_143045ff8;
  uStack_310 = (undefined *)0x22;
  pdb_140a87c40(&puStack_60,uVar1,&uStack_318);
  if (!SBORROW8(0,(longlong)puStack_60)) {
    uStack_128 = uStack_30;
    uStack_140 = CONCAT44(uStack_44,uStack_48);
    uStack_138 = uStack_40;
    uStack_130 = uStack_38;
    uStack_148 = uStack_50;
    puStack_158 = puStack_60;
    uStack_150 = uStack_58;
    uStack_318 = (undefined *)CONCAT44(uStack_94,uStack_98);
    uStack_310 = (undefined *)CONCAT44(uStack_8c,uStack_90);
    uStack_308 = (undefined *)CONCAT44(uStack_84,uStack_88);
    uStack_300 = CONCAT44(uStack_7c,uStack_80);
    uStack_2f8 = (undefined *)CONCAT44(uStack_74,uStack_78);
    uStack_2f0 = CONCAT44(uStack_6c,uStack_70);
    puStack_2e8 = (undefined *)uStack_68;
    uStack_2b0 = uStack_a8;
    uStack_2c0 = uStack_b8;
    uStack_2bc = uStack_b4;
    uStack_2b8 = uStack_b0;
    uStack_2b4 = uStack_ac;
    uStack_2d0 = CONCAT44(uStack_c4,uStack_c8);
    uStack_2c8 = uStack_c0;
    uStack_2c4 = uStack_bc;
    uStack_2e0 = CONCAT44(uStack_d4,uStack_d8);
    uStack_2d8 = (undefined *)CONCAT44(uStack_cc,uStack_d0);
    pub_142e32760(auStack_2a8,&puStack_430,0x118);
    uStack_190 = uStack_118;
    uStack_18c = uStack_114;
    uStack_188 = uStack_110;
    uStack_184 = uStack_10c;
    uStack_180 = uStack_108;
    uStack_17c = uStack_104;
    uStack_178 = uStack_100;
    uStack_174 = uStack_fc;
    uStack_170 = uStack_f8;
    uStack_16c = uStack_f4;
    uStack_168 = uStack_f0;
    uStack_164 = uStack_ec;
    puStack_160 = puStack_e8;
    pdb_14161abc0(param_2,&uStack_318,&UNK_143046038);
    return;
  }
  uStack_318 = (undefined *)uStack_58;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1430461b0,0x2b,&uStack_318,&UNK_143046190,&UNK_143046020);
}

