// VA 0x140ae4430, PDB extent 1315 bytes
// country_core::resources::history::History::restart_from_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::restart_from_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 1315 */

void pdb_140ae4430(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_30 = pub_1406abab0(0x28,8);
  if (pbStack_30 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  uStack_140 = 0;
  uStack_138 = 8;
  uStack_130 = 0;
  uVar1 = pdb_140c7d380();
  uStack_98 = uVar1;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x60,8);
  if (pbVar2 == (byte *)0x0) {
    uStack_38 = uVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x60);
  }
  pbVar2[0x40] = 0;
  pbVar2[0x41] = 0;
  pbVar2[0x42] = 0;
  pbVar2[0x43] = 0;
  pbVar2[0x44] = 0;
  pbVar2[0x45] = 0;
  pbVar2[0x46] = 0;
  pbVar2[0x47] = 0;
  pbVar2[0x48] = 0;
  pbVar2[0x49] = 0;
  pbVar2[0x4a] = 0;
  pbVar2[0x4b] = 0;
  pbVar2[0x4c] = 0;
  pbVar2[0x4d] = 0;
  pbVar2[0x4e] = 0;
  pbVar2[0x4f] = 0;
  pbVar2[0] = 1;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  pbVar2[8] = 1;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  pbVar2[0x10] = 0;
  pbVar2[0x11] = 0;
  pbVar2[0x12] = 0;
  pbVar2[0x13] = 0;
  pbVar2[0x14] = 0;
  pbVar2[0x15] = 0;
  pbVar2[0x16] = 0;
  pbVar2[0x17] = 0;
  pbVar2[0x20] = 0;
  pbVar2[0x21] = 0;
  pbVar2[0x22] = 0;
  pbVar2[0x23] = 0;
  pbVar2[0x24] = 0;
  pbVar2[0x25] = 0;
  pbVar2[0x26] = 0;
  pbVar2[0x27] = 0;
  pbVar2[0x30] = 0;
  pbVar2[0x31] = 0;
  pbVar2[0x32] = 0;
  pbVar2[0x33] = 0;
  pbVar2[0x34] = 0;
  pbVar2[0x35] = 0;
  pbVar2[0x36] = 0;
  pbVar2[0x37] = 0;
  pbVar2[0x38] = 4;
  pbVar2[0x39] = 0;
  pbVar2[0x3a] = 0;
  pbVar2[0x3b] = 0;
  pbVar2[0x3c] = 0;
  pbVar2[0x3d] = 0;
  pbVar2[0x3e] = 0;
  pbVar2[0x3f] = 0;
  pbVar2[0x50] = 4;
  pbVar2[0x51] = 0;
  pbVar2[0x52] = 0;
  pbVar2[0x53] = 0;
  pbVar2[0x54] = 0;
  pbVar2[0x55] = 0;
  pbVar2[0x56] = 0;
  pbVar2[0x57] = 0;
  pbVar2[0x58] = 0;
  pbVar2[0x59] = 0;
  pbVar2[0x5a] = 0;
  pbVar2[0x5b] = 0;
  pbVar2[0x5c] = 0;
  pbVar2[0x5d] = 0;
  pbVar2[0x5e] = 0;
  pbVar2[0x5f] = 0;
  *(ulonglong *)(pbStack_30 + 0x10) = uStack_130;
  *(undefined4 *)pbStack_30 = (undefined4)uStack_140;
  *(undefined4 *)(pbStack_30 + 4) = uStack_140._4_4_;
  *(undefined4 *)(pbStack_30 + 8) = (undefined4)uStack_138;
  *(undefined4 *)(pbStack_30 + 0xc) = uStack_138._4_4_;
  *(undefined8 *)(pbStack_30 + 0x18) = uVar1;
  *(byte **)(pbStack_30 + 0x20) = pbVar2;
  uStack_b0 = 1;
  pbStack_a8 = pbStack_30;
  uStack_a0 = 1;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x10,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x18,8);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0] = 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 1;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    *(undefined8 *)(pbVar3 + 0x10) = param_2;
    *(byte **)pbVar2 = pbVar3;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    uStack_c8 = 1;
    uStack_b8 = 1;
    uStack_140 = 0;
    uStack_138 = 0xffffffffffffffff;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    pbStack_c0 = pbVar2;
    pbStack_30 = (byte *)pdb_1416f96d0(&UNK_14304fab0,&uStack_140);
    uStack_38 = CONCAT44(uStack_38._4_4_,param_1[0x1c]);
    uStack_d8 = 0xffffffffffffffff;
    uStack_140 = 0;
    uStack_138 = 8;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 8;
    uStack_118 = 0;
    uStack_110 = 0x8000000000000000;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_98 = uStack_b0;
    uStack_90 = pbStack_a8;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_c8;
    pbStack_78 = pbStack_c0;
    uStack_70 = uStack_b8;
    uStack_48 = uStack_f0;
    uStack_58 = uStack_100;
    uStack_54 = uStack_fc;
    uStack_50 = uStack_f8;
    uStack_4c = uStack_f4;
    uStack_68 = 0x8000000000000000;
    uStack_60 = uStack_108;
    puStack_40 = param_1;
    pdb_14098f1a0(param_1);
    *(undefined8 *)(puStack_40 + 0x14) = uStack_48;
    *(ulonglong *)(puStack_40 + 0x10) = CONCAT44(uStack_54,uStack_58);
    *(ulonglong *)(puStack_40 + 0x12) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(puStack_40 + 0xc) = uStack_68;
    *(undefined8 *)(puStack_40 + 0xe) = uStack_60;
    *(byte **)(puStack_40 + 8) = pbStack_78;
    *(undefined8 *)(puStack_40 + 10) = uStack_70;
    *(undefined8 *)(puStack_40 + 4) = uStack_88;
    *(undefined8 *)(puStack_40 + 6) = uStack_80;
    *puStack_40 = (undefined4)uStack_98;
    puStack_40[1] = uStack_98._4_4_;
    puStack_40[2] = (undefined4)uStack_90;
    puStack_40[3] = uStack_90._4_4_;
    *(undefined8 *)(puStack_40 + 0x16) = 0;
    *(byte **)(puStack_40 + 0x18) = pbStack_30;
    *(undefined8 *)(puStack_40 + 0x1a) = 0;
    puStack_40[0x1c] = (undefined4)uStack_38;
    if (uStack_140 != 0) {
      pub_1406abac0((byte *)0x8,uStack_140 * 0x28,8);
    }
    pdb_1404d24f0(&uStack_128);
    return;
  }
  pbStack_30 = pbVar2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x18);
}

