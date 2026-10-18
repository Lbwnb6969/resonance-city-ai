// VA 0x140668050, PDB extent 1424 bytes
// country_core::game_config::impl$12::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_config::impl$12::clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 1424 */

void pdb_140668050(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  bool bVar20;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  uint uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined1 uStack_12a;
  undefined8 uStack_129;
  undefined8 uStack_121;
  undefined4 uStack_119;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined4 uStack_bc;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  bVar20 = *(int *)(param_2 + 0x68) == 1;
  if (bVar20) {
    uStack_218 = *(undefined4 *)(param_2 + 0x6c);
    uStack_214 = *(undefined4 *)(param_2 + 0x70);
    uStack_210 = *(undefined4 *)(param_2 + 0x74);
    uStack_20c = *(undefined4 *)(param_2 + 0x78);
  }
  uVar19 = (uint)bVar20;
  uStack_d4 = *(undefined4 *)(param_2 + 0x90);
  uVar8 = *(undefined1 *)(param_2 + 0x7c);
  uVar9 = *(undefined1 *)(param_2 + 0x7d);
  uVar10 = *(undefined1 *)(param_2 + 0x7e);
  uVar12 = *(undefined8 *)(param_2 + 0x60);
  lStack_c8 = *(longlong *)(param_2 + 0x38);
  if (!SBORROW8(0,lStack_c8)) {
    if (lStack_c8 == -0x7fffffffffffffff) goto LAB_140668126;
    pdb_140f60be0(&lStack_1d8,param_2 + 0x38);
    uStack_e0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
    lStack_c8 = lStack_1d8;
  }
  unaff_XMM6_Da = *(undefined4 *)(param_2 + 0x50);
  unaff_XMM6_Db = *(undefined4 *)(param_2 + 0x54);
  unaff_XMM6_Dc = *(undefined4 *)(param_2 + 0x58);
  unaff_XMM6_Dd = *(undefined4 *)(param_2 + 0x5c);
LAB_140668126:
  uStack_d0 = *(undefined4 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uStack_cc = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0xaa);
  uStack_b5 = *(undefined1 *)(param_2 + 0xc5);
  uStack_b4 = *(undefined1 *)(param_2 + 0xc6);
  uVar14 = *(undefined8 *)(param_2 + 0x94);
  uVar15 = *(undefined8 *)(param_2 + 0x9c);
  uVar18 = pdb_140174fb0(&lStack_1f0,param_2);
  if (*(char *)(param_2 + 0xae) == '\x01') {
    uStack_208 = *(undefined4 *)(param_2 + 0xaf);
    uStack_204 = *(undefined4 *)(param_2 + 0xb3);
    uStack_200 = *(undefined4 *)(param_2 + 0xb7);
    uStack_1fc = *(undefined4 *)(param_2 + 0xbb);
    uStack_bc = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
  }
  else {
    uStack_bc = 0;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xbf);
  uStack_b1 = *(undefined1 *)(param_2 + 0xc3);
  uStack_b2 = *(undefined1 *)(param_2 + 0xc4);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uStack_b3 = uVar10;
  pdb_140175e80(&uStack_108,param_2 + 0x18);
  uStack_148 = uStack_d4;
  lStack_1a0 = lStack_c8;
  uStack_198 = uStack_e0;
  uStack_190 = uStack_e8;
  uStack_16c = CONCAT44(uStack_214,uStack_218);
  uStack_164 = CONCAT44(uStack_20c,uStack_210);
  uStack_15a = uStack_b3;
  uStack_158 = uStack_d0;
  uStack_150 = uStack_cc;
  uStack_113 = uStack_b5;
  uStack_112 = uStack_b4;
  uStack_1c8 = uStack_1e0;
  lStack_1d8 = lStack_1f0;
  uStack_1d0 = uStack_1e8;
  uStack_12a = (undefined1)uStack_bc;
  uStack_129 = CONCAT44(uStack_204,uStack_208);
  uStack_121 = CONCAT44(uStack_1fc,uStack_200);
  uStack_115 = uStack_b1;
  uStack_114 = uStack_b2;
  uStack_1c0 = (undefined4)uStack_108;
  uStack_1bc = uStack_108._4_4_;
  uStack_1b8 = uStack_100;
  uStack_1b4 = uStack_fc;
  uStack_1b0 = uStack_f8;
  uStack_1ac = uStack_f4;
  uStack_1a4 = uStack_ec;
  uStack_130 = (undefined2)*(undefined4 *)(param_2 + 0xa8);
  uStack_134 = *(undefined4 *)(param_2 + 0xa4);
  uVar18 = *(undefined8 *)(param_2 + 0xf0);
  uVar10 = *(undefined1 *)(param_2 + 0xf4);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  uVar13 = *(undefined8 *)(param_2 + 0xe0);
  uVar16 = *(undefined8 *)(param_2 + 0x108);
  uVar17 = *(undefined8 *)(param_2 + 0x110);
  uVar5 = *(undefined4 *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x11c);
  uStack_1a8 = uVar11;
  uStack_188 = unaff_XMM6_Da;
  uStack_184 = unaff_XMM6_Db;
  uStack_180 = unaff_XMM6_Dc;
  uStack_17c = unaff_XMM6_Dd;
  uStack_178 = uVar12;
  uStack_170 = uVar19;
  uStack_15c = uVar8;
  uStack_15b = uVar9;
  uStack_154 = uVar1;
  uStack_14c = uVar2;
  uStack_144 = uVar14;
  uStack_13c = uVar15;
  uStack_12e = uVar3;
  uStack_119 = uVar4;
  uStack_f0 = uVar11;
  if (SBORROW8(0,*(longlong *)(param_2 + 200))) {
    uStack_108 = 0x8000000000000000;
  }
  else {
    pdb_140f60be0(&uStack_108,param_2 + 200);
  }
  pub_142e32760(param_1,&lStack_1d8,200);
  uVar12 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar12;
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  *(int *)(param_1 + 0xf0) = (int)uVar18;
  *(undefined1 *)(param_1 + 0xf4) = uVar10;
  *(undefined8 *)(param_1 + 0xe0) = uVar13;
  *(undefined8 *)(param_1 + 0x108) = uVar16;
  *(undefined8 *)(param_1 + 0x110) = uVar17;
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  *(undefined8 *)(param_1 + 0x11c) = uVar7;
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_f4,uStack_f8);
  *(undefined8 *)(param_1 + 200) = uStack_108;
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_fc,uStack_100);
  return;
}

