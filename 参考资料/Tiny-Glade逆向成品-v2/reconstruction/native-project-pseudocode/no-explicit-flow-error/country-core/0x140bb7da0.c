// VA 0x140bb7da0, PDB extent 1253 bytes
// country_core::systems::audio::terrain_audio::terrain_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::terrain_audio::terrain_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_audio.rs
   Extent: 1253 */

void pdb_140bb7da0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uStack_58 = 3;
  uStack_50 = 0x32;
  uStack_68 = &UNK_143061908;
  uStack_60 = 0x1b;
  pdb_140a87c40(&uStack_168,uVar1,&uStack_68);
  if (SBORROW8(0,(longlong)uStack_168)) {
    uStack_68 = (undefined *)uStack_160;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_68,&UNK_143061d80,&UNK_143061928);
  }
  uStack_178 = uStack_138;
  uStack_188 = (undefined4)uStack_148;
  uStack_184 = uStack_148._4_4_;
  uStack_180 = (undefined4)uStack_140;
  uStack_17c = uStack_140._4_4_;
  uStack_198 = (undefined4)uStack_158;
  uStack_194 = uStack_158._4_4_;
  uStack_190 = (undefined4)uStack_150;
  uStack_18c = uStack_150._4_4_;
  uStack_1a8 = (undefined4)uStack_168;
  uStack_1a4 = uStack_168._4_4_;
  uStack_1a0 = (undefined4)uStack_160;
  uStack_19c = uStack_160._4_4_;
  uStack_170 = 0;
  uStack_58 = 3;
  uStack_50 = 0x32;
  uStack_68 = &UNK_143061940;
  uStack_60 = 0x1c;
  pdb_140a87c40(&uStack_168,uVar1,&uStack_68);
  if (SBORROW8(0,(longlong)uStack_168)) {
    uStack_68 = (undefined *)uStack_160;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_68,&UNK_143061d80,&UNK_143061960);
  }
  uStack_1b8 = uStack_138;
  uStack_1c8 = (undefined4)uStack_148;
  uStack_1c4 = uStack_148._4_4_;
  uStack_1c0 = (undefined4)uStack_140;
  uStack_1bc = uStack_140._4_4_;
  uStack_1d8 = (undefined4)uStack_158;
  uStack_1d4 = uStack_158._4_4_;
  uStack_1d0 = (undefined4)uStack_150;
  uStack_1cc = uStack_150._4_4_;
  uStack_1e8 = (undefined4)uStack_168;
  uStack_1e4 = uStack_168._4_4_;
  uStack_1e0 = (undefined4)uStack_160;
  uStack_1dc = uStack_160._4_4_;
  uStack_1b0 = 0;
  uStack_58 = 3;
  uStack_50 = 0x32;
  uStack_68 = &UNK_143061978;
  uStack_60 = 0x17;
  pdb_140a87c40(&uStack_168,uVar1,&uStack_68);
  if (SBORROW8(0,(longlong)uStack_168)) {
    uStack_68 = (undefined *)uStack_160;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_68,&UNK_143061d80,&UNK_143061990);
  }
  uStack_38 = uStack_138;
  uStack_48 = (undefined4)uStack_148;
  uStack_44 = uStack_148._4_4_;
  uStack_40 = (undefined4)uStack_140;
  uStack_3c = uStack_140._4_4_;
  uStack_58._0_4_ = (undefined4)uStack_158;
  uStack_58._4_4_ = uStack_158._4_4_;
  uStack_50 = (undefined4)uStack_150;
  uStack_4c = uStack_150._4_4_;
  uStack_68._0_4_ = SUB84(uStack_168,0);
  uStack_68._4_4_ = uStack_168._4_4_;
  uStack_60._0_4_ = (undefined4)uStack_160;
  uStack_60._4_4_ = uStack_160._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  uStack_158 = 3;
  uStack_150 = CONCAT44(uStack_150._4_4_,0x32);
  uStack_168 = &UNK_1430619a8;
  uStack_160 = 0x16;
  pdb_140a87c40(&lStack_220,uVar1,&uStack_168);
  if (!SBORROW8(0,lStack_220)) {
    uStack_78 = uStack_1f0;
    uStack_88 = uStack_200;
    uStack_80 = uStack_1f8;
    uStack_98 = uStack_210;
    uStack_90 = uStack_208;
    lStack_a8 = lStack_220;
    uStack_a0 = uStack_218;
    uStack_168 = (undefined *)CONCAT44(uStack_1a4,uStack_1a8);
    uStack_160 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_158 = CONCAT44(uStack_194,uStack_198);
    uStack_150 = CONCAT44(uStack_18c,uStack_190);
    uStack_148 = CONCAT44(uStack_184,uStack_188);
    uStack_140 = CONCAT44(uStack_17c,uStack_180);
    uStack_130 = CONCAT71(uStack_16f,uStack_170);
    uStack_138 = uStack_178;
    uStack_128 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_120 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_118 = CONCAT44(uStack_1d4,uStack_1d8);
    uStack_110 = CONCAT44(uStack_1cc,uStack_1d0);
    uStack_108 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_100 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_f0 = CONCAT71(uStack_1af,uStack_1b0);
    uStack_f8 = uStack_1b8;
    uStack_b8 = (undefined4)uStack_38;
    uStack_b4 = uStack_38._4_4_;
    uStack_b0 = uStack_30;
    uStack_ac = uStack_2c;
    uStack_c8 = uStack_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    uStack_d8 = (undefined4)uStack_58;
    uStack_d4 = uStack_58._4_4_;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    uStack_e8 = (undefined4)uStack_68;
    uStack_e4 = uStack_68._4_4_;
    uStack_e0 = (undefined4)uStack_60;
    uStack_dc = uStack_60._4_4_;
    uStack_70 = 0;
    pdb_141617d20(param_2,&uStack_168,&UNK_1430619d8);
    return;
  }
  uStack_168 = (undefined *)uStack_218;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_168,&UNK_143061d80,&UNK_1430619c0);
}

