// VA 0x1406f2930, PDB extent 259 bytes
// forest::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: forest::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/lib.rs
   Extent: 259 */

void pdb_1406f2930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141083680(&uStack_90);
  uStack_19 = 0x24;
  puVar2 = &uStack_19;
  uVar1 = pdb_141083fb0(_DAT_143ca8dd0,puVar2,&UNK_143280180);
  pdb_140676be0(&uStack_90,uVar1,puVar2);
  uStack_a8 = uStack_30;
  uStack_a0 = uStack_28;
  uStack_b8 = uStack_40;
  uStack_b0 = uStack_38;
  uStack_c8 = uStack_50;
  uStack_c0 = uStack_48;
  uStack_d8 = uStack_60;
  uStack_d4 = uStack_5c;
  uStack_d0 = uStack_58;
  uStack_cc = uStack_54;
  uStack_e8 = uStack_70;
  uStack_e4 = uStack_6c;
  uStack_e0 = uStack_68;
  uStack_dc = uStack_64;
  uStack_f8 = (undefined4)uStack_80;
  uStack_f4 = uStack_80._4_4_;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uStack_108 = (undefined4)uStack_90;
  uStack_104 = uStack_90._4_4_;
  uStack_100 = (undefined4)uStack_88;
  uStack_fc = uStack_88._4_4_;
  pdb_1410844d0(param_2,&uStack_108);
  uStack_90 = 0;
  uStack_88 = 8;
  uStack_80 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  pdb_1410846a0(param_2,&uStack_90);
  return;
}

