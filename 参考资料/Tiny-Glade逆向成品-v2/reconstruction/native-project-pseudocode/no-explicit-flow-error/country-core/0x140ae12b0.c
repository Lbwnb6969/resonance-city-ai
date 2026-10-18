// VA 0x140ae12b0, PDB extent 1188 bytes
// country_core::systems::wall::deferred_wall_history::history_record_wall_changed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::deferred_wall_history::history_record_wall_changed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
   Extent: 1188 */

void pdb_140ae12b0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte *pbStack_328;
  byte *pbStack_320;
  byte **ppbStack_318;
  byte *pbStack_310;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  longlong lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  byte *pbStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = *param_2;
  lStack_c8 = *(longlong *)(lVar1 + 0x128);
  uVar2 = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(lVar1 + 0x128) = 0x8000000000000000;
  if (!SBORROW8(0,lStack_c8)) {
    uStack_48 = *(undefined4 *)(lVar1 + 0x218);
    uStack_50 = *(undefined8 *)(lVar1 + 0x210);
    uStack_c0 = *(undefined8 *)(lVar1 + 0x130);
    uStack_b8 = *(undefined8 *)(lVar1 + 0x138);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x140);
    uStack_a8 = *(undefined8 *)(lVar1 + 0x148);
    uStack_a0 = *(undefined8 *)(lVar1 + 0x150);
    uStack_98 = *(undefined8 *)(lVar1 + 0x158);
    uStack_90 = *(undefined8 *)(lVar1 + 0x160);
    uStack_88 = *(undefined8 *)(lVar1 + 0x168);
    uStack_80 = *(undefined8 *)(lVar1 + 0x170);
    uStack_78 = *(undefined8 *)(lVar1 + 0x178);
    uStack_70 = *(undefined8 *)(lVar1 + 0x180);
    uStack_68 = *(undefined8 *)(lVar1 + 0x188);
    uStack_60 = *(undefined8 *)(lVar1 + 400);
    uStack_d8 = *(undefined8 *)(lVar1 + 0x1f8);
    uStack_d0 = *(undefined8 *)(lVar1 + 0x200);
    uStack_e8 = *(undefined8 *)(lVar1 + 0x1e8);
    uStack_e0 = *(undefined8 *)(lVar1 + 0x1f0);
    uStack_f8 = *(undefined8 *)(lVar1 + 0x1d8);
    uStack_f0 = *(undefined8 *)(lVar1 + 0x1e0);
    uStack_138 = *(undefined4 *)(lVar1 + 0x198);
    uStack_134 = *(undefined4 *)(lVar1 + 0x19c);
    uStack_130 = *(undefined4 *)(lVar1 + 0x1a0);
    uStack_12c = *(undefined4 *)(lVar1 + 0x1a4);
    uStack_128 = *(undefined4 *)(lVar1 + 0x1a8);
    uStack_124 = *(undefined4 *)(lVar1 + 0x1ac);
    uStack_120 = *(undefined4 *)(lVar1 + 0x1b0);
    uStack_11c = *(undefined4 *)(lVar1 + 0x1b4);
    uStack_118 = *(undefined4 *)(lVar1 + 0x1b8);
    uStack_114 = *(undefined4 *)(lVar1 + 0x1bc);
    uStack_110 = *(undefined4 *)(lVar1 + 0x1c0);
    uStack_10c = *(undefined4 *)(lVar1 + 0x1c4);
    uStack_108 = *(undefined4 *)(lVar1 + 0x1c8);
    uStack_104 = *(undefined4 *)(lVar1 + 0x1cc);
    uStack_100 = *(undefined4 *)(lVar1 + 0x1d0);
    uStack_fc = *(undefined4 *)(lVar1 + 0x1d4);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar3 = *param_1;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x18,8);
    if (pbVar4 == (byte *)0x0) {
      uStack_31 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(8,8);
    pbStack_40 = pbVar4;
    if (pbVar5 == (byte *)0x0) {
      uStack_32 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    uStack_1b8 = uStack_68;
    uStack_1b0 = uStack_60;
    uStack_1c8 = uStack_78;
    uStack_1c0 = uStack_70;
    uStack_1d8 = uStack_88;
    uStack_1d0 = uStack_80;
    uStack_1e8 = uStack_98;
    uStack_1e0 = uStack_90;
    uStack_1f8 = uStack_a8;
    uStack_1f0 = uStack_a0;
    uStack_208 = uStack_b8;
    uStack_200 = uStack_b0;
    lStack_218 = lStack_c8;
    uStack_210 = uStack_c0;
    uStack_1a8 = CONCAT44(uStack_134,uStack_138);
    uStack_1a0 = CONCAT44(uStack_12c,uStack_130);
    uStack_198 = uStack_128;
    uStack_194 = uStack_124;
    uStack_190 = uStack_120;
    uStack_18c = uStack_11c;
    uStack_188 = uStack_118;
    uStack_184 = uStack_114;
    uStack_180 = uStack_110;
    uStack_17c = uStack_10c;
    uStack_178 = uStack_108;
    uStack_174 = uStack_104;
    uStack_170 = uStack_100;
    uStack_16c = uStack_fc;
    uStack_168 = uStack_f8;
    uStack_160 = uStack_f0;
    uStack_158 = uStack_e8;
    uStack_150 = uStack_e0;
    uStack_148 = (undefined4)uStack_d8;
    uStack_144 = uStack_d8._4_4_;
    uStack_140 = (undefined4)uStack_d0;
    uStack_13c = uStack_d0._4_4_;
    uStack_228 = uStack_48;
    uStack_230 = uStack_50;
    pbStack_328 = (byte *)0x1;
    pbStack_320 = (byte *)0x1;
    pub_142e32760(&ppbStack_318,&lStack_218,0xe0);
    uStack_238 = uVar2;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x110,0x10);
    if (pbVar6 == (byte *)0x0) {
      pbStack_58 = pbVar5;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x110);
    }
    ppbVar7 = &pbStack_328;
    pub_142e32760(pbVar6,ppbVar7,0x110);
    *(byte **)pbVar5 = pbVar6;
    pbVar4[0] = 1;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    *(byte **)(pbVar4 + 8) = pbVar5;
    pbVar4[0x10] = 1;
    pbVar4[0x11] = 0;
    pbVar4[0x12] = 0;
    pbVar4[0x13] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
    pbStack_310 = pbVar4 + 0x18;
    ppbStack_318 = (byte **)0x1;
    uStack_31 = 0;
    pbStack_328 = pbVar4;
    pbStack_320 = pbVar4;
    pbStack_320 = (byte *)pdb_140c69b60(&pbStack_328);
    pbStack_328 = (byte *)0x7;
    uStack_31 = 0;
    ppbStack_318 = ppbVar7;
    pdb_140ae5180(uVar3,&pbStack_328,&UNK_14304f1c8);
  }
  return;
}

