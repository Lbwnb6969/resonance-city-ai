// VA 0x1411b66f0, PDB extent 791 bytes
// toolbar::mei::layout::_::impl$0::deserialize<enum2$<toolbar::mei::layout::LengthPercentage>,ref_mut$<ron::de::Deserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::layout::_::impl$0::deserialize<enum2$<toolbar::mei::layout::LengthPercentage>,ref_mut$<ron::de::Deserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 791 */

char * pdb_1411b66f0(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint unaff_R12D;
  uint unaff_R13D;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_110 [8];
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_54;
  uint uStack_50;
  undefined2 uStack_4c;
  char cStack_4a;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_142311ff0(&uStack_a0);
  uVar4 = uStack_a0 & 0xff;
  if ((char)uStack_a0 != '2') {
    cStack_4a = uStack_a0._3_1_;
    uStack_4c = uStack_a0._1_2_;
    uStack_e8 = CONCAT44(uStack_74,uStack_78);
    uStack_e0 = CONCAT44(uStack_6c,uStack_70);
    uStack_d8 = uStack_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
    uStack_50 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_f0 = uStack_88;
    uStack_ec = uStack_84;
LAB_1411b67ca:
    *param_1 = (char)uStack_a0;
    *(undefined2 *)(param_1 + 1) = uStack_4c;
    param_1[3] = cStack_4a;
    *(uint *)(param_1 + 4) = uStack_9c;
    *(uint *)(param_1 + 8) = uStack_98;
    *(uint *)(param_1 + 0xc) = uStack_94;
    *(uint *)(param_1 + 0x10) = uStack_50;
    *(uint *)(param_1 + 0x14) = uStack_54;
    *(uint *)(param_1 + 0x18) = uStack_f0;
    *(uint *)(param_1 + 0x1c) = uStack_ec;
    *(uint *)(param_1 + 0x20) = uStack_80;
    *(undefined4 *)(param_1 + 0x24) = uStack_7c;
    *(undefined8 *)(param_1 + 0x28) = uStack_e8;
    *(undefined8 *)(param_1 + 0x30) = uStack_e0;
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_d4,uStack_d8);
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_cc,uStack_d0);
    return param_1;
  }
  uStack_108 = uStack_90;
  uStack_104 = uStack_8c;
  uStack_100 = uStack_88;
  uStack_fc = uStack_84;
  uStack_f8 = uStack_80;
  uStack_f4 = uStack_7c;
  pdb_1411b6a10(&uStack_a0,auStack_110);
  if ((char)uStack_a0 == '2') {
    uVar2 = uStack_9c;
    uVar1 = uStack_98;
    uVar3 = 2;
  }
  else {
    uStack_e8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0._0_4_ = uStack_98;
    uStack_e0._4_4_ = uStack_94;
    uStack_b8 = uStack_70;
    uStack_b4 = uStack_6c;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_c0 = uStack_78;
    uStack_bc = uStack_74;
    uStack_d8 = uStack_90;
    uStack_d4 = uStack_8c;
    uStack_d0 = uStack_88;
    uStack_cc = uStack_84;
    if ((char)uStack_a0 != '2') {
      pdb_1411b5480(&uStack_e8);
      pdb_142366c30(&uStack_a0,auStack_110,4);
      if ((char)uStack_a0 == '2') {
        uStack_d4 = uStack_8c;
        uStack_d0 = uStack_88;
        uStack_cc = uStack_84;
        uStack_c8 = uStack_80;
        uStack_e8 = CONCAT44(uStack_9c,(undefined4)uStack_e8);
        uStack_e0._0_4_ = uStack_98;
        uStack_e0._4_4_ = uStack_94;
        uStack_d8 = uStack_90;
      }
      else {
        uStack_e8 = CONCAT44(uStack_9c,uStack_a0);
        uStack_e0._0_4_ = uStack_98;
        uStack_e0._4_4_ = uStack_94;
        uStack_b8 = uStack_70;
        uStack_b4 = uStack_6c;
        uStack_b0 = uStack_68;
        uStack_ac = uStack_64;
        uStack_c8 = uStack_80;
        uStack_c4 = uStack_7c;
        uStack_c0 = uStack_78;
        uStack_bc = uStack_74;
        uStack_d8 = uStack_90;
        uStack_d4 = uStack_8c;
        uStack_d0 = uStack_88;
        uStack_cc = uStack_84;
        if ((char)uStack_a0 != '2') {
          pdb_1411b5480(&uStack_e8);
          pdb_142d862b0(&uStack_a0,&UNK_1432a816a,0x39);
          uStack_4c = uStack_a0._1_2_;
          cStack_4a = uStack_a0._3_1_;
          uStack_50 = uStack_90;
          uStack_54 = uStack_8c;
          uStack_f0 = uStack_88;
          uStack_ec = uStack_84;
          uStack_e8 = CONCAT44(uStack_74,uStack_78);
          uStack_e0 = CONCAT44(uStack_6c,uStack_70);
          uStack_d8 = uStack_68;
          uStack_d4 = uStack_64;
          uStack_d0 = uStack_60;
          uStack_cc = uStack_5c;
          pdb_1411b5540(auStack_110);
          unaff_R13D = uStack_50;
          if ((char)uStack_a0 != '2') goto LAB_1411b67ca;
          goto LAB_1411b68e2;
        }
      }
    }
    uStack_54 = uStack_d4;
    uStack_50 = uStack_c8;
    uVar2 = (uint)uStack_e0;
    uVar1 = uStack_e0._4_4_;
    uVar3 = uStack_e8._4_4_;
    uVar4 = uStack_d0;
    unaff_R13D = uStack_d8;
    unaff_R12D = uStack_cc;
  }
  pdb_1411b5540(auStack_110);
  uStack_98 = uVar2;
  uStack_94 = uVar1;
  uStack_9c = uVar3;
  uStack_f0 = uVar4;
  uStack_ec = unaff_R12D;
  uStack_80 = uStack_50;
LAB_1411b68e2:
  uVar4 = uStack_98;
  if (uStack_9c == 2) {
    uStack_54 = uStack_98;
    unaff_R13D = uStack_94;
    uStack_9c = uStack_98;
    uStack_f0 = uStack_94;
    uStack_ec = uStack_98;
    uStack_80 = uStack_94;
    uVar4 = uStack_94;
    uStack_94 = uStack_98;
  }
  *(uint *)(param_1 + 4) = uStack_9c;
  *(uint *)(param_1 + 8) = uVar4;
  *(uint *)(param_1 + 0xc) = uStack_54;
  *(uint *)(param_1 + 0x10) = uStack_f0;
  *(uint *)(param_1 + 0x14) = uStack_94;
  *(uint *)(param_1 + 0x18) = unaff_R13D;
  *(uint *)(param_1 + 0x1c) = uStack_ec;
  *(uint *)(param_1 + 0x20) = uStack_80;
  *param_1 = '2';
  return param_1;
}

