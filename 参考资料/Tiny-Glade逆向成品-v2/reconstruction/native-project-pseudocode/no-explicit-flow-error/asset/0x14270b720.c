// VA 0x14270b720, PDB extent 1402 bytes
// asset::inheritable::deserialize_inheritable_option<ref_mut$<ron::de::Deserializer>,asset::prefab::config::PrefabRtConfig>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::inheritable::deserialize_inheritable_option<ref_mut$<ron::de::Deserializer>,asset::prefab::config::PrefabRtConfig>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 1402 */

char * pdb_14270b720(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_138 [4];
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  char cStack_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
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
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
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
  undefined1 uStack_2a;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_142a93550(&uStack_80);
  if ((char)uStack_80 != '2') {
    uStack_a8 = (undefined4)(CONCAT44(uStack_5c,uStack_60) >> 8);
    uStack_f8 = CONCAT17(cStack_78,CONCAT43(uStack_7c,uStack_80._1_3_));
    uStack_f0 = CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,CONCAT12(uStack_75,uStack_77)));
    uStack_b8 = (undefined4)CONCAT43(uStack_6c,uStack_70._1_3_);
    uStack_b4 = (undefined4)
                (CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_)) >> 0x20);
    uStack_b0 = (undefined4)CONCAT43(uStack_64,uStack_68._1_3_);
    uStack_ac = (undefined4)
                (CONCAT17((undefined1)uStack_60,CONCAT43(uStack_64,uStack_68._1_3_)) >> 0x20);
    uStack_118 = CONCAT44(uStack_54,uStack_58);
    uStack_110 = uStack_50;
    uStack_10c = uStack_4c;
    uStack_108 = uStack_48;
    uStack_104 = uStack_44;
    uStack_100 = uStack_40;
    uStack_fc = uStack_3c;
    uStack_e8 = CONCAT44(uStack_b4,uStack_b8);
    uStack_e0 = (undefined7)CONCAT44(uStack_ac,uStack_b0);
    uStack_d9 = (undefined1)uStack_60;
    uStack_d8 = (undefined7)
                (CONCAT35((int3)((uint)uStack_5c >> 8),CONCAT41(uStack_a8,(undefined1)uStack_60)) >>
                8);
    goto LAB_14270b839;
  }
  uStack_134 = uStack_74;
  uStack_130 = uStack_70;
  uStack_12c = uStack_6c;
  uStack_128 = uStack_68;
  uStack_124 = uStack_64;
  uStack_120 = uStack_60;
  uStack_11c = uStack_5c;
  uVar5 = 3;
  if (cStack_78 != '\x10') {
    if (cStack_78 == '\x11') {
      pdb_142706cc0(&cStack_c8,CONCAT44(uStack_6c,uStack_70),&UNK_143589a0f,0xe,&UNK_1435897a8,6);
    }
    else {
      if (cStack_78 == '\x12') goto LAB_14270b931;
      pdb_142706cc0(&cStack_c8,auStack_138,&UNK_143589a0f,0xe,&UNK_1435897a8,6);
    }
    if (cStack_c8 != '2') {
      uStack_2a = uStack_c5;
      uStack_2c = uStack_c7;
    }
    uStack_1c8 = CONCAT44(uStack_bc,uStack_c0);
    uStack_1c0 = CONCAT44(uStack_b4,uStack_b8);
    uStack_1b8 = CONCAT44(uStack_ac,uStack_b0);
    uStack_1b0 = CONCAT44(uStack_a4,uStack_a8);
    uStack_1a8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_1a0 = CONCAT44(uStack_94,uStack_98);
    uStack_198 = CONCAT44(uStack_8c,uStack_90);
    uStack_190 = CONCAT44(uStack_84,uStack_88);
    uVar5 = uStack_c4;
    if (cStack_c8 != '2') {
      cStack_78 = cStack_c8;
      uStack_77 = uStack_2c;
      uStack_75 = uStack_2a;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uStack_68 = uStack_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      uStack_4c = uStack_9c;
      uStack_48 = uStack_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      uStack_34 = uStack_84;
      uStack_80 = 1;
      pdb_14270a9f0(&cStack_78);
      pdb_142706cc0(&cStack_c8,auStack_138,&UNK_143589a0f,0xe,&UNK_1435897a8,6);
      if (cStack_c8 != '2') {
        uStack_48 = uStack_98;
        uStack_44 = uStack_94;
        uStack_40 = uStack_90;
        uStack_3c = uStack_8c;
        uStack_58 = uStack_a8;
        uStack_54 = uStack_a4;
        uStack_50 = uStack_a0;
        uStack_4c = uStack_9c;
        uStack_68 = uStack_b8;
        uStack_64 = uStack_b4;
        uStack_60 = uStack_b0;
        uStack_5c = uStack_ac;
        uStack_77 = (undefined2)((uint)_cStack_c8 >> 8);
        uStack_75 = (undefined1)((uint)_cStack_c8 >> 0x18);
        uStack_74 = uStack_c4;
        uStack_70 = uStack_c0;
        uStack_6c = uStack_bc;
        uStack_80 = 1;
        cStack_78 = cStack_c8;
        pdb_14270a9f0(&cStack_78);
        pdb_142d862b0(&uStack_80,&UNK_14358a3ba,0x3b);
        cVar1 = (char)uStack_80;
        uStack_f8 = CONCAT17(cStack_78,CONCAT43(uStack_7c,uStack_80._1_3_));
        uStack_f0 = CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,CONCAT12(uStack_75,uStack_77))
                            );
        uStack_e8 = CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
        uStack_e0 = CONCAT43(uStack_64,uStack_68._1_3_);
        uStack_d9 = (undefined1)uStack_60;
        uStack_d8 = (undefined7)(CONCAT44(uStack_5c,uStack_60) >> 8);
        uStack_118 = CONCAT44(uStack_54,uStack_58);
        uStack_110 = uStack_50;
        uStack_10c = uStack_4c;
        uStack_108 = uStack_48;
        uStack_104 = uStack_44;
        uStack_100 = uStack_40;
        uStack_fc = uStack_3c;
        pdb_14270aab0(auStack_138);
        uStack_80._0_1_ = cVar1;
LAB_14270b839:
        *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_d8,uStack_d9);
        *(undefined8 *)(param_1 + 0x11) = uStack_e8;
        *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_d9,uStack_e0);
        *(undefined8 *)(param_1 + 1) = uStack_f8;
        *(undefined8 *)(param_1 + 9) = uStack_f0;
        *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_104,uStack_108);
        *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_fc,uStack_100);
        *(undefined8 *)(param_1 + 0x28) = uStack_118;
        *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_10c,uStack_110);
        *param_1 = (char)uStack_80;
        return param_1;
      }
      _uStack_38 = CONCAT44(uStack_34,uStack_84);
      uStack_64 = uStack_b0;
      uStack_5c = uStack_a8;
      uStack_58 = uStack_a4;
      uStack_54 = uStack_a0;
      uStack_50 = uStack_9c;
      uStack_4c = uStack_98;
      uStack_48 = uStack_94;
      uStack_44 = uStack_90;
      uStack_40 = uStack_8c;
      uStack_3c = uStack_88;
      cStack_78 = (char)uStack_c4;
      uStack_77 = (undefined2)(uStack_c4 >> 8);
      uStack_75 = (undefined1)(uStack_c4 >> 0x18);
      uStack_74 = uStack_c0;
      uStack_70 = uStack_bc;
      uVar2 = uStack_70;
      uStack_6c = uStack_b8;
      uVar5 = uStack_c4 & 0xff;
      uStack_70._0_1_ = (undefined1)uStack_bc;
      uStack_f8 = CONCAT17((undefined1)uStack_70,CONCAT43(uStack_c0,(int3)(uStack_c4 >> 8)));
      uStack_70._1_3_ = (undefined3)((uint)uStack_bc >> 8);
      uStack_68._0_1_ = (undefined1)uStack_b4;
      uStack_f0 = CONCAT17((undefined1)uStack_68,CONCAT43(uStack_b8,uStack_70._1_3_));
      uStack_68._1_3_ = (undefined3)((uint)uStack_b4 >> 8);
      uStack_60._0_1_ = (undefined1)uStack_ac;
      uStack_e8 = CONCAT17((undefined1)uStack_60,CONCAT43(uStack_b0,uStack_68._1_3_));
      uStack_60._1_3_ = (undefined3)((uint)uStack_ac >> 8);
      uStack_e0 = CONCAT43(uStack_a8,uStack_60._1_3_);
      uStack_d9 = (undefined1)uStack_a4;
      uStack_d8 = (undefined7)(CONCAT44(uStack_a0,uStack_a4) >> 8);
      uStack_100 = uStack_84;
      uStack_70 = uVar2;
      uStack_68 = uStack_b4;
      uStack_60 = uStack_ac;
      goto LAB_14270b994;
    }
  }
LAB_14270b931:
  cStack_78 = (char)uVar5;
  uStack_77 = (undefined2)(uVar5 >> 8);
  uStack_75 = (undefined1)(uVar5 >> 0x18);
  uStack_74 = (uint)uStack_1c8;
  uStack_70 = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
  uVar2 = uStack_70;
  uStack_6c = (undefined4)uStack_1c0;
  uStack_68 = (undefined4)((ulonglong)uStack_1c0 >> 0x20);
  uVar3 = uStack_68;
  uStack_44 = (undefined4)uStack_198;
  uStack_40 = uStack_198._4_4_;
  uStack_3c = (undefined4)uStack_190;
  _uStack_38 = CONCAT44(uStack_34,uStack_190._4_4_);
  uStack_54 = (undefined4)uStack_1a8;
  uStack_50 = uStack_1a8._4_4_;
  uStack_4c = (undefined4)uStack_1a0;
  uStack_48 = uStack_1a0._4_4_;
  uStack_64 = (undefined4)uStack_1b8;
  uStack_60 = uStack_1b8._4_4_;
  uVar4 = uStack_60;
  uStack_5c = (undefined4)uStack_1b0;
  uStack_58 = uStack_1b0._4_4_;
  uStack_70._0_1_ = (undefined1)((ulonglong)uStack_1c8 >> 0x20);
  uStack_f8 = CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,(int3)(uVar5 >> 8)));
  uStack_70._1_3_ = (undefined3)((ulonglong)uStack_1c8 >> 0x28);
  uStack_68._0_1_ = (undefined1)((ulonglong)uStack_1c0 >> 0x20);
  uStack_f0 = CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
  uStack_68._1_3_ = (undefined3)((ulonglong)uStack_1c0 >> 0x28);
  uStack_60._0_1_ = (undefined1)((ulonglong)uStack_1b8 >> 0x20);
  uStack_e8 = CONCAT17((undefined1)uStack_60,CONCAT43((undefined4)uStack_1b8,uStack_68._1_3_));
  uStack_60._1_3_ = (undefined3)((ulonglong)uStack_1b8 >> 0x28);
  uStack_e0 = CONCAT43((undefined4)uStack_1b0,uStack_60._1_3_);
  uStack_d9 = (undefined1)((ulonglong)uStack_1b0 >> 0x20);
  uStack_d8 = (undefined7)(CONCAT44((undefined4)uStack_1a8,uStack_1b0._4_4_) >> 8);
  uStack_100 = uStack_190._4_4_;
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  uStack_60 = uVar4;
LAB_14270b994:
  uStack_118 = CONCAT44(uStack_4c,uStack_50);
  uStack_110 = uStack_48;
  uStack_10c = uStack_44;
  uStack_108 = uStack_40;
  uStack_104 = uStack_3c;
  pdb_14270aab0(auStack_138);
  *(ulonglong *)(param_1 + 0x24) = CONCAT71(uStack_d8,uStack_d9);
  *(undefined8 *)(param_1 + 0x15) = uStack_e8;
  *(ulonglong *)(param_1 + 0x1d) = CONCAT17(uStack_d9,uStack_e0);
  *(undefined8 *)(param_1 + 5) = uStack_f8;
  *(undefined8 *)(param_1 + 0xd) = uStack_f0;
  *(undefined8 *)(param_1 + 0x2c) = uStack_118;
  *(ulonglong *)(param_1 + 0x34) = CONCAT44(uStack_10c,uStack_110);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_108,uStack_10c);
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_100,uStack_104);
  param_1[4] = (char)uVar5;
  *param_1 = '2';
  return param_1;
}

