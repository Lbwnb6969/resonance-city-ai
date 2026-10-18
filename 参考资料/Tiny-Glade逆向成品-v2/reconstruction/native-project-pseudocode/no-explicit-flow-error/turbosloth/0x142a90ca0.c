// VA 0x142a90ca0, PDB extent 2874 bytes
// redb::tree_store::btree_mutator::MutateHelper::insert<ref$<str$>,enum2$<redb::tree_store::table_tree_base::InternalTableDefinition> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   redb::tree_store::btree_mutator::MutateHelper::insert<ref$<str$>,enum2$<redb::tree_store::table_tree_base::InternalTableDefinition>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 2874 */

longlong *
pdb_142a90ca0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  ulonglong uStack_248;
  byte *pbStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  longlong lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  ulonglong uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte bStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar1 = (byte *)*param_2;
  if ((*pbVar1 & 1) == 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    pdb_142e05c60(&uStack_88,param_4);
    pbStack_58 = uStack_80;
    uVar6 = 0;
    pdb_141aa6a20(&lStack_2a8,param_2[1] + 0x10,param_2[3] + 0x10,1,0);
    uStack_4a = 1;
    lVar5 = lStack_78;
    pdb_141aa6b00(&lStack_2a8,uVar3,uVar4,pbStack_58,lStack_78);
    lStack_3b8 = lStack_258;
    lStack_3c8 = lStack_268;
    lStack_3c0 = lStack_260;
    uStack_3d8 = uStack_278;
    uStack_3d4 = uStack_274;
    uStack_3d0 = uStack_270;
    uStack_3cc = uStack_26c;
    uStack_3e8 = uStack_288;
    uStack_3e4 = uStack_284;
    uStack_3e0 = uStack_280;
    uStack_3dc = uStack_27c;
    uStack_3f8 = uStack_298;
    uStack_3f4 = uStack_294;
    uStack_3f0 = (undefined4)uStack_290;
    uStack_3ec = uStack_290._4_4_;
    uStack_400 = uStack_2a0;
    uStack_3fc = uStack_29c;
    uStack_4a = 0;
    pdb_141aa6b70(&uStack_150,&lStack_408);
    lStack_c8 = CONCAT44(uStack_14c,uStack_150);
    lStack_b0 = CONCAT44(uStack_134,uStack_138);
    if (lStack_c8 == 0) {
      param_1[3] = lStack_b0;
      param_1[1] = CONCAT44(uStack_144,uStack_148);
      param_1[2] = CONCAT44(uStack_13c,uStack_140);
      *param_1 = 4;
      if (uStack_88 == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_58,uStack_88,1);
      return param_1;
    }
    lStack_a8 = CONCAT44(uStack_12c,uStack_130);
    lStack_a0 = CONCAT44(uStack_124,uStack_128);
    uStack_c0 = uStack_148;
    uStack_bc = uStack_144;
    uStack_b8 = uStack_140;
    uStack_b4 = uStack_13c;
    pdb_141aa92e0(&lStack_408,CONCAT44(uStack_144,uStack_148) + 0x10,CONCAT44(uStack_13c,uStack_140)
                  ,0,lVar5,0,uVar6);
    lStack_1d8 = pdb_141aa9270(&lStack_408);
    uStack_90 = (undefined4)lStack_a0;
    lStack_98 = lStack_a8;
    lStack_1a0 = CONCAT44(uStack_bc,uStack_c0);
    lStack_198 = CONCAT44(uStack_b4,uStack_b8);
    lStack_1a8 = lStack_c8;
    lStack_190 = lStack_b0;
    lStack_188 = lStack_a8;
    lStack_180 = lStack_a0;
    if (uStack_88 != 0) {
      pub_1406abac0(pbStack_58,uStack_88,1);
    }
    uStack_1c8 = 999;
    lStack_158 = 1;
    lStack_408 = 3;
    uStack_1c0 = 0;
    lStack_1d0 = lStack_78;
  }
  else {
    uStack_160 = *(undefined4 *)(pbVar1 + 0x30);
    uStack_168 = *(undefined8 *)(pbVar1 + 0x28);
    pbStack_58 = *(byte **)(pbVar1 + 0x10);
    uStack_68 = *(ulonglong *)(pbVar1 + 0x18);
    lVar5 = *(longlong *)(pbVar1 + 0x20);
    lVar2 = param_2[1];
    pdb_141e12d10(&uStack_150,lVar2 + 0x10,&uStack_168,0);
    lStack_c8 = CONCAT44(uStack_14c,uStack_150);
    lStack_b0 = CONCAT44(uStack_134,uStack_138);
    if (lStack_c8 == 0) {
      param_1[3] = lStack_b0;
      param_1[1] = CONCAT44(uStack_144,uStack_148);
      param_1[2] = CONCAT44(uStack_13c,uStack_140);
      *param_1 = 4;
      return param_1;
    }
    uStack_c0 = uStack_148;
    uStack_bc = uStack_144;
    uStack_b8 = uStack_140;
    uStack_b4 = uStack_13c;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    lStack_158 = lVar5;
    pdb_142e05c60(&uStack_150,param_4);
    pbStack_60 = (byte *)CONCAT44(uStack_144,uStack_148);
    pdb_142a853f0(&lStack_408,param_2,&lStack_c8,pbStack_58,uStack_68,uVar3,uVar4,pbStack_60,
                  CONCAT44(uStack_13c,uStack_140));
    uStack_88 = CONCAT44(uStack_3fc,uStack_400);
    uStack_80 = (byte *)CONCAT44(uStack_3f4,uStack_3f8);
    lStack_78 = CONCAT44(uStack_3ec,uStack_3f0);
    if (lStack_408 == 4) {
      param_1[3] = lStack_78;
      param_1[1] = uStack_88;
      param_1[2] = (longlong)uStack_80;
      *param_1 = 4;
      if (CONCAT44(uStack_14c,uStack_150) == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_60,CONCAT44(uStack_14c,uStack_150),1);
      return param_1;
    }
    pub_142e32760(&uStack_288,&uStack_3e8,0xe0);
    uStack_2a0 = (undefined4)uStack_88;
    uStack_29c = uStack_88._4_4_;
    uStack_298 = (undefined4)uStack_80;
    uStack_294 = uStack_80._4_4_;
    uStack_290 = lStack_78;
    lStack_2a8 = lStack_408;
    if (CONCAT44(uStack_14c,uStack_150) != 0) {
      pub_1406abac0(pbStack_60,CONCAT44(uStack_14c,uStack_150),1);
    }
    bStack_4b = (int)lStack_408 == 3;
    if (SBORROW8(0,uStack_248)) {
      uStack_90 = uStack_1b0;
      lStack_98 = lStack_1b8;
    }
    else {
      uStack_68 = uStack_248;
      pbStack_58 = pbStack_240;
      uStack_178 = uStack_230;
      uStack_170 = uStack_228;
      pbStack_60 = (byte *)uStack_210;
      pdb_141aaa350(&uStack_150,lVar2 + 0x10,param_2[3] + 0x10,2,0);
      uStack_400 = uStack_1b0;
      lStack_408 = lStack_1b8;
      uStack_49 = 1;
      pdb_141aa9580(&uStack_150,&lStack_408,uStack_1c8,uStack_1c0);
      uStack_49 = 1;
      pdb_141aaae20(&uStack_150,pbStack_58,uStack_238);
      uStack_49 = 1;
      pdb_141aa9580(&uStack_150,&uStack_178,uStack_218,pbStack_60);
      lStack_3b8 = uStack_100;
      lStack_3c8 = uStack_110;
      lStack_3c0 = uStack_108;
      uStack_3d8 = uStack_120;
      uStack_3d4 = uStack_11c;
      uStack_3d0 = uStack_118;
      uStack_3cc = uStack_114;
      uStack_3e8 = uStack_130;
      uStack_3e4 = uStack_12c;
      uStack_3e0 = uStack_128;
      uStack_3dc = uStack_124;
      uStack_3f8 = uStack_140;
      uStack_3f4 = uStack_13c;
      uStack_3f0 = uStack_138;
      uStack_3ec = uStack_134;
      uStack_400 = uStack_148;
      uStack_3fc = uStack_144;
      uStack_49 = 0;
      pdb_141aaa500(&lStack_c8,&lStack_408);
      uStack_88 = CONCAT44(uStack_bc,uStack_c0);
      uStack_80 = (byte *)CONCAT44(uStack_b4,uStack_b8);
      lStack_78 = lStack_b0;
      if (lStack_c8 == 0) {
        param_1[3] = lStack_b0;
        *(undefined4 *)(param_1 + 1) = uStack_c0;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_bc;
        *(undefined4 *)(param_1 + 2) = uStack_b8;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_b4;
        *param_1 = 4;
        if (uStack_68 != 0) {
          pub_1406abac0(pbStack_58,uStack_68,1);
        }
        pdb_1409987a0(&lStack_208);
        if ((int)lStack_2a8 == 3) {
          return param_1;
        }
        pdb_141ac36e0(&lStack_2a8);
        return param_1;
      }
      lStack_d8 = lStack_a8;
      uStack_d0 = lStack_a0;
      uVar3 = uStack_d0;
      uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
      uStack_e8 = CONCAT44(uStack_b4,uStack_b8);
      lStack_e0 = lStack_b0;
      lStack_f8 = lStack_c8;
      lStack_98 = lStack_a8;
      uStack_d0._0_4_ = (undefined4)lStack_a0;
      uStack_90 = (undefined4)uStack_d0;
      uStack_49 = 0;
      uStack_d0 = uVar3;
      pdb_1409987a0();
      if (uStack_68 != 0) {
        pub_1406abac0(pbStack_58,uStack_68,1);
      }
      uStack_1c8 = 999;
      uStack_1c0 = 0;
      lStack_408 = lStack_2a8;
    }
    lStack_158 = lStack_158 + (ulonglong)bStack_4b;
    lStack_2b8 = lStack_250;
    lStack_2c8 = lStack_260;
    lStack_2c0 = lStack_258;
    lStack_308 = CONCAT44(uStack_29c,uStack_2a0);
    lStack_300 = CONCAT44(uStack_294,uStack_298);
    lStack_2f0 = CONCAT44(uStack_284,uStack_288);
    lStack_2e8 = CONCAT44(uStack_27c,uStack_280);
    lStack_2e0 = CONCAT44(uStack_274,uStack_278);
    lStack_2d8 = CONCAT44(uStack_26c,uStack_270);
    lStack_2d0 = lStack_268;
    lStack_2f8 = uStack_290;
    lStack_1a8 = lStack_208;
    lStack_1a0 = lStack_200;
    lStack_198 = lStack_1f8;
    lStack_190 = lStack_1f0;
    lStack_188 = lStack_1e8;
    lStack_180 = lStack_1e0;
  }
  pbVar1[8] = 0;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  pbVar1[0] = 1;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  *(undefined8 *)(pbVar1 + 0x10) = uStack_1c8;
  *(undefined8 *)(pbVar1 + 0x18) = uStack_1c0;
  *(longlong *)(pbVar1 + 0x20) = lStack_158;
  *(longlong *)(pbVar1 + 0x28) = lStack_98;
  *(undefined4 *)(pbVar1 + 0x30) = uStack_90;
  *param_1 = lStack_408;
  param_1[1] = lStack_308;
  param_1[2] = lStack_300;
  param_1[3] = lStack_2f8;
  param_1[4] = lStack_2f0;
  param_1[5] = lStack_2e8;
  param_1[6] = lStack_2e0;
  param_1[7] = lStack_2d8;
  param_1[8] = lStack_2d0;
  param_1[9] = lStack_2c8;
  param_1[10] = lStack_2c0;
  param_1[0xb] = lStack_2b8;
  param_1[0xc] = lStack_1a8;
  param_1[0xd] = lStack_1a0;
  param_1[0xe] = lStack_198;
  param_1[0xf] = lStack_190;
  param_1[0x10] = lStack_188;
  param_1[0x11] = lStack_180;
  param_1[0x12] = lStack_1d8;
  param_1[0x13] = lStack_1d0;
  return param_1;
}

