// VA 0x14270b220, PDB extent 1275 bytes
// asset::inheritable::deserialize_inheritable_option<ref_mut$<ron::de::tag::Deserializer>,asset::prefab::config::PrefabAudioConfig>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::inheritable::deserialize_inheritable_option<ref_mut$<ron::de::tag::Deserializer>,asset::prefab::config::PrefabAudioConfig>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 1275 */

char * pdb_14270b220(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  undefined4 uStack_38;
  undefined3 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_1402cda70(&uStack_88,*param_2);
  if ((char)uStack_88 != '2') {
    uStack_38 = CONCAT13((undefined1)uStack_84,uStack_88._1_3_);
    uStack_34 = (undefined3)((uint)uStack_84 >> 8);
    uVar1 = CONCAT44(uStack_7c,uStack_80);
    uStack_108 = CONCAT44(uStack_74,uStack_78);
    uStack_100 = CONCAT44(uStack_6c,uStack_70);
    uStack_f8 = CONCAT44(uStack_64,uStack_68);
    uStack_f0 = CONCAT44(uStack_5c,uStack_60);
    uStack_e8 = CONCAT44(uStack_54,uStack_58);
    uStack_e0 = CONCAT44(uStack_4c,uStack_50);
    goto LAB_14270b345;
  }
  uStack_160 = uStack_78;
  uStack_15c = uStack_74;
  uStack_158 = uStack_70;
  uStack_154 = uStack_6c;
  uStack_c8 = 0x8000000000000004;
  if ((char)uStack_80 == '\x10') {
LAB_14270b525:
    uStack_c0 = uStack_148;
    uStack_b8 = uStack_140;
    uStack_a0 = uStack_128;
    uStack_b0 = (undefined4)uStack_138;
    uStack_ac = uStack_138._4_4_;
    uStack_a8 = uStack_130;
    uStack_f0 = uStack_138;
  }
  else {
    if ((uStack_80 & 0xff) == 0x11) {
      pdb_142708b40(&uStack_88,CONCAT44(uStack_74,uStack_78),&UNK_143589a3b,0x11,&UNK_1435898e8,1);
    }
    else {
      if ((uStack_80 & 0xff) == 0x12) goto LAB_14270b525;
      pdb_142708b40(&uStack_88,auStack_168,&UNK_143589a3b,0x11,&UNK_1435898e8,1);
    }
    if ((char)uStack_88 == '2') {
      uStack_c8 = CONCAT44(uStack_7c,uStack_80);
      uStack_148 = CONCAT44(uStack_74,uStack_78);
      uStack_140 = CONCAT44(uStack_6c,uStack_70);
      uStack_138 = CONCAT44(uStack_64,uStack_68);
      uStack_130 = CONCAT44(uStack_5c,uStack_60);
      uStack_128 = CONCAT44(uStack_54,uStack_58);
      goto LAB_14270b525;
    }
    uStack_40 = CONCAT13((undefined1)uStack_84,uStack_88._1_3_);
    uStack_3c = (undefined3)((uint)uStack_84 >> 8);
    uStack_c8 = CONCAT44(uStack_7c,uStack_80);
    uStack_148 = CONCAT44(uStack_74,uStack_78);
    uStack_140 = CONCAT44(uStack_6c,uStack_70);
    uStack_138 = CONCAT44(uStack_64,uStack_68);
    uStack_130 = CONCAT44(uStack_5c,uStack_60);
    uStack_128 = CONCAT44(uStack_54,uStack_58);
    uStack_118 = uStack_48;
    if ((char)uStack_88 == '2') goto LAB_14270b525;
    _auStack_d8 = CONCAT41(uStack_40,(char)uStack_88);
    _auStack_d8 = CONCAT44(uStack_84,auStack_d8);
    uStack_98 = uStack_48;
    pdb_14270a9f0(auStack_d8);
    pdb_142708b40(&uStack_88,auStack_168,&UNK_143589a3b,0x11,&UNK_1435898e8,1);
    if ((char)uStack_88 == '2') {
      uStack_c8 = CONCAT44(uStack_7c,uStack_80);
      uStack_c0 = CONCAT44(uStack_74,uStack_78);
      uStack_b8 = CONCAT44(uStack_6c,uStack_70);
      uStack_b0 = uStack_68;
      uStack_ac = uStack_64;
      uStack_a8 = CONCAT44(uStack_5c,uStack_60);
      uStack_a0 = CONCAT44(uStack_54,uStack_58);
    }
    else {
      _auStack_d8 = CONCAT44(uStack_84,uStack_88);
      uStack_98 = uStack_48;
      uStack_a8 = CONCAT44(uStack_54,uStack_58);
      uStack_a0 = CONCAT44(uStack_4c,uStack_50);
      uStack_b8 = CONCAT44(uStack_64,uStack_68);
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      uStack_c8 = CONCAT44(uStack_74,uStack_78);
      uStack_c0 = CONCAT44(uStack_6c,uStack_70);
      if ((char)uStack_88 != '2') {
        pdb_14270a9f0(auStack_d8);
        pdb_142d862b0(&uStack_88,&UNK_14358a3ba,0x3b);
        uStack_38._0_3_ = (undefined3)((uint)uStack_88 >> 8);
        uStack_38._3_1_ = (undefined1)uStack_84;
        uStack_34 = (undefined3)((uint)uStack_84 >> 8);
        uVar1 = CONCAT44(uStack_7c,uStack_80);
        uStack_108 = CONCAT44(uStack_74,uStack_78);
        uStack_100 = CONCAT44(uStack_6c,uStack_70);
        uStack_f8 = CONCAT44(uStack_64,uStack_68);
        uStack_f0 = CONCAT44(uStack_5c,uStack_60);
        uStack_e8 = CONCAT44(uStack_54,uStack_58);
        uStack_e0 = CONCAT44(uStack_4c,uStack_50);
        pdb_14270aab0(auStack_168);
        if ((char)uStack_88 != '2') {
LAB_14270b345:
          *(uint *)(param_1 + 4) = CONCAT31(uStack_34,uStack_38._3_1_);
          *(undefined4 *)(param_1 + 1) = uStack_38;
          *(undefined8 *)(param_1 + 0x30) = uStack_e8;
          *(undefined8 *)(param_1 + 0x38) = uStack_e0;
          *(undefined8 *)(param_1 + 0x20) = uStack_f8;
          *(undefined8 *)(param_1 + 0x28) = uStack_f0;
          *(undefined8 *)(param_1 + 0x10) = uStack_108;
          *(undefined8 *)(param_1 + 0x18) = uStack_100;
          *param_1 = (char)uStack_88;
          *(undefined8 *)(param_1 + 8) = uVar1;
          *(undefined8 *)(param_1 + 0x40) = uStack_48;
          return param_1;
        }
        goto LAB_14270b596;
      }
    }
    uStack_f0 = CONCAT44(uStack_ac,uStack_b0);
  }
  uStack_108 = uStack_c8;
  uStack_100 = uStack_c0;
  uStack_f8 = uStack_b8;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  pdb_14270aab0(auStack_168);
LAB_14270b596:
  *(undefined8 *)(param_1 + 0x28) = uStack_e8;
  *(undefined8 *)(param_1 + 0x30) = uStack_e0;
  *(undefined8 *)(param_1 + 0x18) = uStack_f8;
  *(undefined8 *)(param_1 + 0x20) = uStack_f0;
  *(undefined8 *)(param_1 + 8) = uStack_108;
  *(undefined8 *)(param_1 + 0x10) = uStack_100;
  *param_1 = '2';
  return param_1;
}

