// VA 0x140b86db0, PDB extent 342 bytes
// country_core::render::nani::cull_shaders::impl$5::nani_cull_shader
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/cull_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::cull_shaders::impl$5::nani_cull_shader
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/cull_shaders.rs
   Extent: 342 */

undefined8 pdb_140b86db0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [136];
  
  uStack_178 = param_3[8];
  uStack_158 = param_3[0xb];
  uStack_168 = param_3[9];
  uStack_160 = param_3[10];
  uStack_1b8 = *param_3;
  uStack_1b0 = param_3[1];
  uStack_1a8 = param_3[2];
  uStack_1a0 = param_3[3];
  uStack_198 = param_3[4];
  uStack_190 = param_3[5];
  uStack_188 = param_3[6];
  uStack_180 = param_3[7];
  uStack_150 = *(undefined4 *)(param_3 + 0xc);
  uStack_14c = *(undefined4 *)((longlong)param_3 + 100);
  uStack_148 = *(undefined4 *)(param_3 + 0xd);
  uStack_144 = *(undefined4 *)((longlong)param_3 + 0x6c);
  uStack_170 = param_4;
  pdb_1409d0490(auStack_c0,&uStack_1b8);
  uVar1 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331687,0x2c,auStack_c0);
  pdb_140e291c0(auStack_a8,&UNK_143331687,0x2c,uVar1,param_2);
  uStack_c8 = CONCAT44(uStack_144,uStack_148);
  uStack_d0 = CONCAT44(uStack_14c,uStack_150);
  uStack_d8 = uStack_158;
  uStack_e8 = uStack_168;
  uStack_e0 = uStack_160;
  uStack_f8 = uStack_178;
  uStack_f0 = uStack_170;
  uStack_108 = (undefined4)uStack_188;
  uStack_104 = uStack_188._4_4_;
  uStack_100 = (undefined4)uStack_180;
  uStack_fc = uStack_180._4_4_;
  uStack_118 = (undefined4)uStack_198;
  uStack_114 = uStack_198._4_4_;
  uStack_110 = (undefined4)uStack_190;
  uStack_10c = uStack_190._4_4_;
  uStack_128 = (undefined4)uStack_1a8;
  uStack_124 = uStack_1a8._4_4_;
  uStack_120 = (undefined4)uStack_1a0;
  uStack_11c = uStack_1a0._4_4_;
  uStack_138 = (undefined4)uStack_1b8;
  uStack_134 = uStack_1b8._4_4_;
  uStack_130 = (undefined4)uStack_1b0;
  uStack_12c = uStack_1b0._4_4_;
  pdb_14178a8f0(param_1,auStack_a8,&uStack_138);
  return param_1;
}

