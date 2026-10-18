// VA 0x140c6edd0, PDB extent 3380 bytes
// country_core::systems::save::shadow_file::ShadowFile::create
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::shadow_file::ShadowFile::create
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
   Extent: 3380 */

undefined8 *
pdb_140c6edd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined2 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char cStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong *plStack_148;
  code *pcStack_140;
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
  longlong lStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  longlong **pplStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_3d = 1;
  puStack_58 = param_2;
  pdb_140f3e9e0(&uStack_1a8,param_3,param_4,param_5,param_6);
  uStack_1c0 = 6;
  uStack_1e0 = &UNK_143072f08;
  uStack_1d8 = 4;
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  uStack_1b8 = 0;
  uStack_1e8 = 0;
  uStack_39 = 0;
  uStack_3a = 1;
  pdb_141708fe0(&uStack_218,param_3,param_4,&UNK_143072f08,4,1,0,6,&uStack_1e8);
  if ((char)uStack_200 != '\x02') {
    uStack_108 = uStack_208;
    uStack_104 = uStack_204;
    uStack_100 = uStack_200;
    uStack_fc = uStack_1fc;
    uStack_118 = uStack_218;
    uStack_114 = uStack_214;
    uStack_110 = uStack_210;
    uStack_10c = uStack_20c;
    lVar3 = puStack_58[2];
    uStack_3b = 0;
    uStack_3c = 1;
    lVar1 = pdb_1409dd580(&uStack_118,puStack_58[1],lVar3);
    if (lVar1 == 0) {
      uStack_3b = 0;
      uStack_3c = 1;
      lVar1 = pdb_140f3f0a0(&uStack_118);
      if (lVar1 != 0) goto LAB_140c6f09d;
      uStack_a8 = CONCAT44(uStack_104,uStack_108);
      uStack_a0 = CONCAT44(uStack_fc,uStack_100);
      uStack_b8 = (longlong *)CONCAT44(uStack_114,uStack_118);
      uStack_b0 = (code *)CONCAT44(uStack_10c,uStack_110);
      uStack_3b = 0;
      uStack_3c = 0;
      pdb_1401174f0(&lStack_188,&uStack_b8,&uStack_1a8);
      if (cStack_168 == '\x02') {
        param_1[2] = uStack_198;
        param_1[3] = uStack_190;
        *param_1 = uStack_1a8;
        param_1[1] = uStack_1a0;
        param_1[6] = puStack_58[2];
        uVar2 = puStack_58[1];
        param_1[4] = *puStack_58;
        param_1[5] = uVar2;
        param_1[7] = 0;
        param_1[8] = 0x8000000000000000;
        param_1[9] = lStack_188;
        uVar2 = CONCAT44(_UNK_143072df4,_UNK_143072df0);
        param_1[0xc] = CONCAT44(_UNK_143072dec,_DAT_143072de8);
        param_1[0xd] = uVar2;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        return param_1;
      }
      uStack_e8 = uStack_178;
      uStack_e4 = uStack_174;
      uStack_e0 = uStack_170;
      uStack_dc = uStack_16c;
      lStack_f8 = lStack_188;
      uStack_f0 = uStack_180;
      uStack_ec = uStack_17c;
      if (*_DAT_143ca8e90 != 0) {
        plStack_148 = &lStack_f8;
        pcStack_140 = pdb_140f56800;
        uStack_b8 = (longlong *)0x0;
        uStack_b0 = (code *)&UNK_14307265f;
        uStack_a8 = 0x28;
        uStack_a0 = 0;
        uStack_98 = &UNK_14307262b;
        uStack_90 = 0x33;
        uStack_88 = 1;
        puStack_80 = &UNK_14307265f;
        uStack_78 = 0x28;
        uStack_70 = 0x3d00000001;
        puStack_68 = &UNK_143072772;
        pplStack_60 = &plStack_148;
        uStack_3e = 1;
        pdb_140f332f0(&uStack_41,&uStack_b8);
      }
      lVar1 = lStack_f8;
      lStack_1f0 = lStack_f8;
      uStack_42 = 1;
      pdb_140f3f5b0(&uStack_b8);
      uStack_128 = (undefined4)uStack_98;
      uStack_124 = uStack_98._4_4_;
      uStack_120 = (undefined4)uStack_90;
      uStack_11c = uStack_90._4_4_;
      uStack_138 = (undefined4)uStack_a8;
      uStack_134 = uStack_a8._4_4_;
      uStack_130 = (undefined4)uStack_a0;
      uStack_12c = uStack_a0._4_4_;
      plStack_148 = uStack_b8;
      pcStack_140 = uStack_b0;
      uStack_b8 = (longlong *)&UNK_1430726bd;
      uStack_b0 = (code *)0x11;
      uStack_a8 = lVar1;
      uStack_42 = 0;
      uStack_d0 = pdb_142dea990(&uStack_b8,&plStack_148);
      uStack_50 = uStack_d0;
      pdb_140cb07d0(&uStack_e8);
      if (CONCAT44(uStack_dc,uStack_e0) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_e4,uStack_e8),CONCAT44(uStack_dc,uStack_e0),1);
      }
      uVar2 = CONCAT44(uStack_ec,uStack_f0);
    }
    else {
LAB_140c6f09d:
      lStack_188 = lVar1;
      if (*_DAT_143ca8e90 == 0) {
LAB_140c6f187:
        lVar1 = lStack_188;
        uStack_43 = 1;
        lStack_f8 = lStack_188;
        pdb_140f3f5b0(&uStack_b8);
        uStack_128 = (undefined4)uStack_98;
        uStack_124 = uStack_98._4_4_;
        uStack_120 = (undefined4)uStack_90;
        uStack_11c = uStack_90._4_4_;
        uStack_138 = (undefined4)uStack_a8;
        uStack_134 = uStack_a8._4_4_;
        uStack_130 = (undefined4)uStack_a0;
        uStack_12c = uStack_a0._4_4_;
        plStack_148 = uStack_b8;
        pcStack_140 = uStack_b0;
        uStack_b8 = (longlong *)&UNK_1430726aa;
        uStack_b0 = (code *)0xa;
        uStack_43 = 0;
        uStack_a8 = lVar1;
        uStack_d0 = pdb_142dea990(&uStack_b8,&plStack_148);
      }
      else {
        plStack_148 = &lStack_188;
        pcStack_140 = pdb_140f56800;
        uStack_b8 = (longlong *)0x0;
        uStack_b0 = (code *)&UNK_14307265f;
        uStack_a8 = 0x28;
        uStack_a0 = 0;
        uStack_98 = &UNK_14307262b;
        uStack_90 = 0x33;
        uStack_88 = 1;
        puStack_80 = &UNK_14307265f;
        uStack_78 = 0x28;
        uStack_70 = 0x4500000001;
        puStack_68 = &UNK_1430727a3;
        pplStack_60 = &plStack_148;
        uStack_3f = 1;
        pdb_140f332f0(&uStack_41,&uStack_b8);
        if (lStack_188 != 0) goto LAB_140c6f187;
        uStack_d0 = 0;
      }
      uStack_50 = uStack_d0;
      pdb_140cb07d0(&uStack_110);
      if (CONCAT44(uStack_104,uStack_108) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_10c,uStack_110),CONCAT44(uStack_104,uStack_108),1);
      }
      uVar2 = CONCAT44(uStack_114,uStack_118);
    }
    CloseHandle(uVar2);
    goto LAB_140c6f26e;
  }
  lStack_188 = CONCAT44(uStack_214,uStack_218);
  if (*_DAT_143ca8e90 == 0) {
LAB_140c6efa6:
    lVar3 = lStack_188;
    uStack_44 = 1;
    lStack_f8 = lStack_188;
    pdb_140f3f5b0(&uStack_b8);
    uStack_128 = (undefined4)uStack_98;
    uStack_124 = uStack_98._4_4_;
    uStack_120 = (undefined4)uStack_90;
    uStack_11c = uStack_90._4_4_;
    uStack_138 = (undefined4)uStack_a8;
    uStack_134 = uStack_a8._4_4_;
    uStack_130 = (undefined4)uStack_a0;
    uStack_12c = uStack_a0._4_4_;
    plStack_148 = uStack_b8;
    pcStack_140 = uStack_b0;
    uStack_b8 = (longlong *)&UNK_14307269a;
    uStack_b0 = (code *)0x10;
    uStack_44 = 0;
    uStack_a8 = lVar3;
    uStack_d0 = pdb_142dea990(&uStack_b8,&plStack_148);
  }
  else {
    plStack_148 = &lStack_188;
    pcStack_140 = pdb_140f56800;
    uStack_b8 = (longlong *)0x0;
    uStack_b0 = (code *)&UNK_14307265f;
    uStack_a8 = 0x28;
    uStack_a0 = 0;
    uStack_98 = &UNK_14307262b;
    uStack_90 = 0x33;
    uStack_88 = 1;
    puStack_80 = &UNK_14307265f;
    uStack_78 = 0x28;
    uStack_70 = 0x4a00000001;
    puStack_68 = &UNK_1430727cc;
    pplStack_60 = &plStack_148;
    uStack_40 = 1;
    pdb_140f332f0(&uStack_41,&uStack_b8);
    if (lStack_188 != 0) goto LAB_140c6efa6;
    uStack_d0 = 0;
  }
  lVar3 = puStack_58[2];
  uStack_50 = uStack_d0;
LAB_140c6f26e:
  uStack_1e8 = _DAT_143072de8;
  uStack_1e4 = _UNK_143072dec;
  uStack_1e0 = (undefined *)CONCAT44(_UNK_143072df4,_UNK_143072df0);
  uStack_1d8 = 0;
  uStack_45 = 1;
  pdb_140c71cb0(&uStack_1e8,lVar3 + 0xfffU >> 0xc,1);
  uStack_150 = uStack_1a8;
  uStack_158 = uStack_1a0;
  uStack_c8 = *puStack_58;
  uStack_160 = puStack_58[1];
  pdb_140f3e010(&uStack_b8,param_3,param_4);
  param_1[10] = uStack_a8;
  param_1[0xb] = uStack_a0;
  param_1[8] = uStack_b8;
  param_1[9] = uStack_b0;
  param_1[0xe] = uStack_1d8;
  param_1[0xc] = CONCAT44(uStack_1e4,uStack_1e8);
  param_1[0xd] = uStack_1e0;
  *param_1 = uStack_150;
  param_1[1] = uStack_158;
  param_1[2] = uStack_198;
  param_1[3] = uStack_190;
  param_1[4] = uStack_c8;
  param_1[5] = uStack_160;
  param_1[6] = lVar3;
  param_1[7] = 0;
  param_1[0xf] = uStack_50;
  return param_1;
}

