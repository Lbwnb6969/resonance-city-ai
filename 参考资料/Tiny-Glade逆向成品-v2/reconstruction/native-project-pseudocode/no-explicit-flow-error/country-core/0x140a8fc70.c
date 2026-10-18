// VA 0x140a8fc70, PDB extent 1114 bytes
// country_core::render::RenderParams::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::RenderParams::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mod.rs
   Extent: 1114 */

undefined8 * pdb_140a8fc70(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar3 = *param_2 + 0x10;
  puStack_1d0 = &UNK_14304492b;
  uStack_1c8 = 0x26;
  puStack_1c0 = &UNK_143044951;
  uStack_1b8 = 0x2c;
  puStack_1b0 = &UNK_14304497d;
  uStack_1a8 = 0x20;
  puStack_1a0 = &UNK_14304499d;
  uStack_198 = 0x24;
  puStack_190 = &UNK_1430449c1;
  uStack_188 = 0x2c;
  puStack_180 = &UNK_1430449ed;
  uStack_178 = 0x36;
  puStack_170 = &UNK_143044a23;
  uStack_168 = 0x38;
  puStack_160 = &UNK_143044a5b;
  uStack_158 = 0x27;
  uStack_30 = pdb_1415c0a40(lVar3,&UNK_143044a82,6,&puStack_1d0);
  uStack_38 = pdb_140e51790(lVar3,&uStack_30);
  puStack_1d0 = &UNK_143044b23;
  uStack_1c8 = 0x24;
  puStack_1c0 = &UNK_143044b47;
  uStack_1b8 = 0x21;
  puStack_1b0 = &UNK_143044b68;
  uStack_1a8 = 0x24;
  puStack_1a0 = &UNK_143044b8c;
  uStack_198 = 0x22;
  puStack_190 = &UNK_143044bae;
  uStack_188 = 0x23;
  puStack_180 = &UNK_143044bd1;
  uStack_178 = 0x20;
  puStack_170 = &UNK_143044a88;
  uStack_168 = 0x29;
  puStack_160 = &UNK_143044ab1;
  uStack_158 = 0x28;
  puStack_150 = &UNK_143044ad9;
  uStack_148 = 0x20;
  puStack_140 = &UNK_143044af9;
  uStack_138 = 0x2a;
  puStack_130 = &UNK_143044bf1;
  uStack_128 = 0x2d;
  puStack_120 = &UNK_143044c1e;
  uStack_118 = 0x22;
  puStack_110 = &UNK_143044c40;
  uStack_108 = 0x31;
  puStack_100 = &UNK_143044c71;
  uStack_f8 = 0x39;
  puStack_f0 = &UNK_143044caa;
  uStack_e8 = 0x36;
  puStack_e0 = &UNK_143044ce0;
  uStack_d8 = 0x39;
  puStack_d0 = &UNK_143044d19;
  uStack_c8 = 0x41;
  puStack_c0 = &UNK_143044d5a;
  uStack_b8 = 0x43;
  puStack_b0 = &UNK_143044d9d;
  uStack_a8 = 0x4d;
  puStack_a0 = &UNK_143044dea;
  uStack_98 = 0x2c;
  puStack_90 = &UNK_143044e16;
  uStack_88 = 0x3b;
  puStack_80 = &UNK_143044e51;
  uStack_78 = 0x26;
  puStack_70 = &UNK_143044e77;
  uStack_68 = 0x3b;
  puStack_60 = &UNK_143044eb2;
  uStack_58 = 0x28;
  puStack_50 = &UNK_143044eda;
  uStack_48 = 0x23;
  uVar1 = pdb_1415c7820(lVar3,&UNK_143044efd,5,&puStack_1d0);
  puStack_1d0 = &UNK_143044f02;
  uStack_1c8 = 0x26;
  puStack_1c0 = &UNK_143044f28;
  uStack_1b8 = 0x21;
  puStack_1b0 = &UNK_143044f49;
  uStack_1a8 = 0x1f;
  puStack_1a0 = &UNK_143044f68;
  uStack_198 = 0x30;
  uStack_40 = uVar1;
  uVar2 = pdb_1415caf10(lVar3,&UNK_143044f98,10,&puStack_1d0);
  *param_1 = uStack_30;
  param_1[1] = uStack_38;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}

