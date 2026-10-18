// VA 0x140945ba0, PDB extent 570 bytes
// country_core::systems::terrain::impl$0::add_terrain_systems
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::terrain::impl$0::add_terrain_systems
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
   Extent: 570 */

undefined8 pdb_140945ba0(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x60,8);
  if (pbVar1 != (byte *)0x0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[0x58] = 0;
    pbVar1[0x59] = 0;
    pbVar1[0x5a] = 0;
    pbVar1[0x5b] = 0;
    pbVar1[0x5c] = 0;
    pdb_140ed3cd0(&uStack_178,pbVar1,&UNK_14306c0b8);
    pdb_1417e31e0(&uStack_1e8,&uStack_178);
    pdb_1409e3a00(&uStack_178,&uStack_1e8);
    uStack_1e8 = 0xf;
    puVar3 = &uStack_1e8;
    uVar2 = pdb_140950ee0(_DAT_143ca8dd0,puVar3,&UNK_14305af38);
    pdb_140676be0(&uStack_178,uVar2,puVar3);
    uStack_38 = uStack_118;
    uStack_30 = uStack_110;
    uStack_48 = uStack_128;
    uStack_40 = uStack_120;
    uStack_58 = uStack_138;
    uStack_50 = uStack_130;
    uStack_68 = (undefined4)uStack_148;
    uStack_64 = uStack_148._4_4_;
    uStack_60 = (undefined4)uStack_140;
    uStack_5c = uStack_140._4_4_;
    uStack_78 = (undefined4)uStack_158;
    uStack_74 = uStack_158._4_4_;
    uStack_70 = (undefined4)uStack_150;
    uStack_6c = uStack_150._4_4_;
    uStack_88 = (undefined4)uStack_168;
    uStack_84 = uStack_168._4_4_;
    uStack_80 = (undefined4)uStack_160;
    uStack_7c = uStack_160._4_4_;
    uStack_98 = (undefined4)uStack_178;
    uStack_94 = uStack_178._4_4_;
    uStack_90 = (undefined4)uStack_170;
    uStack_8c = uStack_170._4_4_;
    pdb_1414df260(&uStack_1e8,0x22,&UNK_1430239e0);
    uStack_118 = uStack_38;
    uStack_110 = uStack_30;
    uStack_128 = uStack_48;
    uStack_120 = uStack_40;
    uStack_138 = uStack_58;
    uStack_130 = uStack_50;
    uStack_178 = CONCAT44(uStack_94,uStack_98);
    uStack_170 = CONCAT44(uStack_8c,uStack_90);
    uStack_168 = CONCAT44(uStack_84,uStack_88);
    uStack_160 = CONCAT44(uStack_7c,uStack_80);
    uStack_158 = CONCAT44(uStack_74,uStack_78);
    uStack_150 = CONCAT44(uStack_6c,uStack_70);
    uStack_148 = CONCAT44(uStack_64,uStack_68);
    uStack_140 = CONCAT44(uStack_5c,uStack_60);
    uStack_108 = CONCAT71(uStack_1e7,uStack_1e8);
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f4 = uStack_1d4;
    uStack_f0 = uStack_1d0;
    uStack_ec = uStack_1cc;
    uStack_e8 = uStack_1c8;
    uStack_e4 = uStack_1c4;
    uStack_e0 = uStack_1c0;
    uStack_dc = uStack_1bc;
    uStack_d8 = uStack_1b8;
    uStack_d4 = uStack_1b4;
    uStack_d0 = uStack_1b0;
    uStack_cc = uStack_1ac;
    uStack_c8 = uStack_1a8;
    uStack_c0 = uStack_1a0;
    uStack_b8 = uStack_198;
    uStack_b0 = uStack_190;
    uStack_a8 = uStack_188;
    uStack_a4 = uStack_184;
    uStack_a0 = uStack_180;
    uStack_9c = uStack_17c;
    pdb_140c971f0(param_1,&uStack_178);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x60);
}

