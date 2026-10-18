// VA 0x140a55390, PDB extent 1717 bytes
// country_core::systems::audio::path_audio::path_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::audio::path_audio::path_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
   Extent: 1717 */

void pdb_140a55390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined2 uStack_1ec;
  undefined1 uStack_1ea;
  undefined1 uStack_1e9;
  undefined *puStack_1e8;
  longlong lStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  undefined *puStack_1b0;
  longlong lStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined *puStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14303d987;
  lStack_50 = 0x1a;
  pdb_140a87c40(&puStack_178,uVar1,&puStack_58);
  if (SBORROW8(0,(longlong)puStack_178)) {
    puStack_178 = (undefined *)lStack_170;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303df10,0x2b,&puStack_178,&UNK_14303def0,&UNK_14303d9a8);
  }
  puStack_1b0 = puStack_178;
  lStack_1a8 = lStack_170;
  uStack_1a0 = (undefined4)uStack_168;
  uStack_19c = uStack_168._4_4_;
  uStack_198 = (undefined4)uStack_160;
  uStack_194 = uStack_160._4_4_;
  uStack_190 = (undefined4)uStack_158;
  uStack_188 = uStack_150;
  uStack_180 = (undefined4)uStack_148;
  uStack_17c = uStack_148._4_2_;
  uStack_17a = 1;
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14303d9c0;
  lStack_50 = 0x14;
  pdb_140a87c40(&puStack_178,uVar1,&puStack_58);
  if (SBORROW8(0,(longlong)puStack_178)) {
    puStack_178 = (undefined *)lStack_170;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303df10,0x2b,&puStack_178,&UNK_14303def0,&UNK_14303d9d8);
  }
  puStack_1e8 = puStack_178;
  lStack_1e0 = lStack_170;
  uStack_1d8 = (undefined4)uStack_168;
  uStack_1d4 = uStack_168._4_4_;
  uStack_1d0 = (undefined4)uStack_160;
  uStack_1cc = uStack_160._4_4_;
  uStack_1c8 = (undefined4)uStack_158;
  uStack_1c0 = uStack_150;
  uStack_1b8 = (undefined4)uStack_148;
  uStack_1b4 = uStack_148._4_2_;
  uStack_1b2 = 1;
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14303d9f0;
  lStack_50 = 0x15;
  pdb_140a87c40(&puStack_178,uVar1,&puStack_58);
  if (SBORROW8(0,(longlong)puStack_178)) {
    puStack_178 = (undefined *)lStack_170;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303df10,0x2b,&puStack_178,&UNK_14303def0,&UNK_14303da08);
  }
  uStack_220 = puStack_178;
  uStack_218 = (undefined *)lStack_170;
  uStack_210 = (undefined4)uStack_168;
  uStack_20c = uStack_168._4_4_;
  uStack_208 = (undefined4)uStack_160;
  uStack_204 = uStack_160._4_4_;
  uStack_200 = (undefined4)uStack_158;
  uStack_1f8 = uStack_150;
  uStack_1f0 = (undefined4)uStack_148;
  uStack_1ec = uStack_148._4_2_;
  uStack_1ea = 1;
  uStack_48 = 3;
  uStack_40 = 0x32;
  puStack_58 = &UNK_14303da20;
  lStack_50 = 0x1e;
  pdb_140a87c40(&puStack_178,uVar1,&puStack_58);
  if (!SBORROW8(0,(longlong)puStack_178)) {
    puStack_58 = puStack_178;
    lStack_50 = lStack_170;
    uStack_48 = uStack_168;
    uStack_40 = (undefined4)uStack_160;
    uStack_3c = uStack_160._4_4_;
    uStack_38 = (undefined4)uStack_158;
    uStack_30 = uStack_150;
    uStack_28 = (undefined4)uStack_148;
    uStack_24 = uStack_148._4_2_;
    uStack_22 = 1;
    uStack_230 = 3;
    uStack_228 = 0x32;
    puStack_240 = &UNK_14303da58;
    uStack_238 = 0x1f;
    pdb_140a87c40(&puStack_178,uVar1,&puStack_240);
    if (!SBORROW8(0,(longlong)puStack_178)) {
      puStack_98 = puStack_178;
      lStack_90 = lStack_170;
      uStack_88 = uStack_168;
      uStack_80 = uStack_160;
      uStack_78 = (undefined4)uStack_158;
      uStack_70 = uStack_150;
      uStack_68 = (undefined4)uStack_148;
      uStack_64 = uStack_148._4_2_;
      uStack_62 = 1;
      uStack_168 = CONCAT44(uStack_19c,uStack_1a0);
      uStack_160 = CONCAT44(uStack_194,uStack_198);
      uStack_158 = CONCAT44(uStack_18c,uStack_190);
      puStack_178 = puStack_1b0;
      lStack_170 = lStack_1a8;
      uStack_150 = uStack_188;
      uStack_148 = CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT24(uStack_17c,uStack_180)));
      uStack_110 = CONCAT17(uStack_1b1,CONCAT16(uStack_1b2,CONCAT24(uStack_1b4,uStack_1b8)));
      uStack_130 = CONCAT44(uStack_1d4,uStack_1d8);
      uStack_128 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_120 = CONCAT44(uStack_1c4,uStack_1c8);
      uStack_118 = uStack_1c0;
      puStack_140 = puStack_1e8;
      lStack_138 = lStack_1e0;
      uStack_d8 = CONCAT17(uStack_21,CONCAT16(uStack_22,CONCAT24(uStack_24,uStack_28)));
      uStack_f0 = CONCAT44(uStack_3c,uStack_40);
      uStack_e8 = CONCAT44(uStack_34,uStack_38);
      uStack_e0 = uStack_30;
      uStack_f8 = uStack_48;
      puStack_108 = puStack_58;
      lStack_100 = lStack_50;
      uStack_a0 = CONCAT17(uStack_1e9,CONCAT16(uStack_1ea,CONCAT24(uStack_1ec,uStack_1f0)));
      uStack_b0 = uStack_200;
      uStack_ac = uStack_1fc;
      uStack_a8 = (undefined4)uStack_1f8;
      uStack_a4 = uStack_1f8._4_4_;
      uStack_c0 = uStack_210;
      uStack_bc = uStack_20c;
      uStack_b8 = uStack_208;
      uStack_b4 = uStack_204;
      uStack_d0 = (undefined4)uStack_220;
      uStack_cc = uStack_220._4_4_;
      uStack_c8 = (undefined4)uStack_218;
      uStack_c4 = uStack_218._4_4_;
      pdb_1416182d0(param_2,&puStack_178,&UNK_14303da90);
      return;
    }
    puStack_178 = (undefined *)lStack_170;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303df10,0x2b,&puStack_178,&UNK_14303def0,&UNK_14303da78);
  }
  puStack_178 = (undefined *)lStack_170;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14303df10,0x2b,&puStack_178,&UNK_14303def0,&UNK_14303da40);
}

