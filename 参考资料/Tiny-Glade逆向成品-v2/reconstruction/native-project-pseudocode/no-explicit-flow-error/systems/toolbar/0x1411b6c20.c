// VA 0x1411b6c20, PDB extent 663 bytes
// toolbar::mei::layout::_::impl$0::deserialize<ref_mut$<ron::de::Deserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::layout::_::impl$0::deserialize<ref_mut$<ron::de::Deserializer> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 663 */

char * pdb_1411b6c20(char *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 auStack_108 [5];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_2c;
  char cStack_2a;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_142311ff0(&uStack_78);
  if ((char)uStack_78 != '2') {
    cStack_2a = uStack_78._3_1_;
    uStack_2c = uStack_78._1_2_;
    uVar2 = CONCAT44(uStack_70,uStack_74);
    uStack_ac = uStack_50;
    uStack_a8 = uStack_4c;
    uStack_a4 = uStack_48;
    uStack_a0 = uStack_44;
    uStack_94 = CONCAT44(uStack_34,uStack_38);
    uStack_9c = uStack_40;
    uStack_98 = uStack_3c;
    uStack_c8 = uStack_6c;
    uStack_c4 = uStack_68;
    uStack_c0 = uStack_64;
    uStack_bc = uStack_60;
    uStack_b8 = uStack_5c;
    uStack_b4 = uStack_58;
    uStack_b0 = uStack_54;
LAB_1411b6cea:
    *param_1 = (char)uStack_78;
    *(undefined2 *)(param_1 + 1) = uStack_2c;
    param_1[3] = cStack_2a;
    *(ulonglong *)(param_1 + 4) = uVar2;
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_c4,uStack_c8);
    *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_bc,uStack_c0);
    *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_b4,uStack_b8);
    *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_ac,uStack_b0);
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_9c,uStack_a0);
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_98,uStack_9c);
    *(undefined8 *)(param_1 + 0x40) = uStack_94;
    return param_1;
  }
  auStack_108[0] = uStack_70;
  uStack_f4 = uStack_5c;
  uStack_f0 = uStack_58;
  uStack_ec = uStack_54;
  pdb_142366aa0(&uStack_78,auStack_108);
  if ((char)uStack_78 == '2') {
    uVar2 = (ulonglong)uStack_74 << 0x20 | 2;
  }
  else {
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    uStack_98 = uStack_48;
    uStack_8c = uStack_3c;
    uStack_a8 = uStack_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    if ((char)uStack_78 != '2') {
      pdb_1411b5480(&uStack_c8);
      pdb_142366ba0(&uStack_78,auStack_108,&UNK_1432a8145,0x1a,&UNK_1432a8058,2);
      if ((char)uStack_78 == '2') {
        uVar2 = CONCAT44(uStack_70,uStack_74);
        goto LAB_1411b6da5;
      }
      uStack_c8 = uStack_78;
      uStack_c4 = uStack_74;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      uStack_b8 = uStack_68;
      uStack_b4 = uStack_64;
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      uStack_a8 = uStack_58;
      uStack_a4 = uStack_54;
      uStack_a0 = uStack_50;
      uStack_9c = uStack_4c;
      uStack_98 = uStack_48;
      uStack_8c = uStack_3c;
      if ((char)uStack_78 != '2') {
        pdb_1411b5480(&uStack_c8);
        pdb_142d862b0(&uStack_78,&UNK_1432a8100,0x45);
        uStack_2c = uStack_78._1_2_;
        cStack_2a = uStack_78._3_1_;
        uVar2 = CONCAT44(uStack_70,uStack_74);
        uStack_c8 = uStack_6c;
        uStack_c4 = uStack_68;
        uStack_c0 = uStack_64;
        uStack_bc = uStack_60;
        uStack_b8 = uStack_5c;
        uStack_b4 = uStack_58;
        uStack_b0 = uStack_54;
        uStack_ac = uStack_50;
        uStack_a8 = uStack_4c;
        uStack_a4 = uStack_48;
        uStack_a0 = uStack_44;
        uStack_9c = uStack_40;
        uStack_98 = uStack_3c;
        uStack_94 = CONCAT44(uStack_34,uStack_38);
        pdb_1411b5540();
        if ((char)uStack_78 != '2') goto LAB_1411b6cea;
        goto LAB_1411b6dae;
      }
    }
    uVar2 = CONCAT44(uStack_c0,uStack_c4);
  }
LAB_1411b6da5:
  pdb_1411b5540();
LAB_1411b6dae:
  uVar1 = 0;
  if ((uint)uVar2 != 2) {
    uVar1 = (uint)uVar2 & 1;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(int *)(param_1 + 8) = (int)(uVar2 >> 0x20);
  *param_1 = '2';
  return param_1;
}

