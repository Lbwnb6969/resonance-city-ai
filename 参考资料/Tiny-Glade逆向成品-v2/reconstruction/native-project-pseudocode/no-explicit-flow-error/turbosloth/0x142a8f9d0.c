// VA 0x142a8f9d0, PDB extent 2400 bytes
// redb::tree_store::btree_mutator::MutateHelper::insert<ref$<str$>,u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   redb::tree_store::btree_mutator::MutateHelper::insert<ref$<str$>,u64>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 2400 */

longlong *
pdb_142a8f9d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  longlong lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  byte *pbStack_58;
  byte bStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar1 = (byte *)*param_2;
  if ((*pbVar1 & 1) == 0) {
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uStack_88 = *param_4;
    uVar6 = 8;
    pdb_141aa6a20(&lStack_2a8,param_2[1] + 0x10,param_2[3] + 0x10,1,0);
    uStack_4a = 1;
    uVar5 = 8;
    pdb_141aa6b00(&lStack_2a8,uVar2,uVar4,&uStack_88,8);
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
    pdb_141aa6b70(&lStack_170,&lStack_408);
    uStack_e8._0_4_ = uStack_168;
    uStack_e8._4_4_ = uStack_164;
    uStack_e0 = uStack_160;
    uStack_dc = uStack_15c;
    lStack_d8 = CONCAT44(uStack_154,uStack_158);
    if (lStack_170 != 0) {
      lStack_98 = CONCAT44(uStack_14c,uStack_150);
      lStack_90 = CONCAT44(uStack_144,uStack_148);
      uStack_b0 = CONCAT44(uStack_164,uStack_168);
      uStack_a8 = CONCAT44(uStack_15c,uStack_160);
      lStack_b8 = lStack_170;
      lStack_a0 = lStack_d8;
      pdb_141aa92e0(&lStack_408,uStack_b0 + 0x10,uStack_a8,0,uVar5,1,8,uVar6);
      lStack_1d8 = pdb_141aa9270(&lStack_408);
      uStack_60 = (undefined4)lStack_90;
      lStack_68 = lStack_98;
      lStack_1a8 = lStack_b8;
      lStack_1a0 = uStack_b0;
      lStack_198 = uStack_a8;
      lStack_190 = lStack_a0;
      lStack_188 = lStack_98;
      lStack_180 = lStack_90;
      uStack_1c8 = 999;
      lStack_1d0 = 8;
      lStack_f8 = 1;
      lStack_408 = 3;
      uStack_1c0 = 0;
LAB_142a90036:
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
      *(longlong *)(pbVar1 + 0x20) = lStack_f8;
      *(longlong *)(pbVar1 + 0x28) = lStack_68;
      *(undefined4 *)(pbVar1 + 0x30) = uStack_60;
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
  }
  else {
    uStack_100 = *(undefined4 *)(pbVar1 + 0x30);
    uStack_108 = *(undefined8 *)(pbVar1 + 0x28);
    pbStack_58 = *(byte **)(pbVar1 + 0x10);
    uVar2 = *(undefined8 *)(pbVar1 + 0x18);
    lStack_f8 = *(longlong *)(pbVar1 + 0x20);
    lVar3 = param_2[1];
    pdb_141e12d10(&lStack_170,lVar3 + 0x10,&uStack_108,0);
    uStack_e8._0_4_ = uStack_168;
    uStack_e8._4_4_ = uStack_164;
    uStack_e0 = uStack_160;
    uStack_dc = uStack_15c;
    lStack_d8 = CONCAT44(uStack_154,uStack_158);
    if (lStack_170 != 0) {
      lStack_b8 = lStack_170;
      lStack_170 = *param_4;
      lStack_a0 = lStack_d8;
      uStack_b0._0_4_ = (undefined4)uStack_e8;
      uStack_b0._4_4_ = uStack_e8._4_4_;
      uStack_a8._0_4_ = uStack_e0;
      uStack_a8._4_4_ = uStack_dc;
      pdb_142a88a60(&lStack_408,param_2,&lStack_b8,pbStack_58,uVar2,*param_3,param_3[1],&lStack_170)
      ;
      uStack_88._0_4_ = uStack_400;
      uStack_88._4_4_ = uStack_3fc;
      uStack_80 = uStack_3f8;
      uStack_7c = uStack_3f4;
      lStack_78 = CONCAT44(uStack_3ec,uStack_3f0);
      if (lStack_408 != 4) {
        pub_142e32760(&uStack_288,&uStack_3e8,0xe0);
        uStack_2a0 = (undefined4)uStack_88;
        uStack_29c = uStack_88._4_4_;
        uStack_298 = uStack_80;
        uStack_294 = uStack_7c;
        uStack_290 = lStack_78;
        lStack_2a8 = lStack_408;
        bStack_4b = lStack_408 == 3;
        if (SBORROW8(0,uStack_248)) {
          uStack_60 = uStack_1b0;
          lStack_68 = lStack_1b8;
        }
        else {
          uStack_70 = uStack_248;
          pbStack_58 = pbStack_240;
          uStack_118 = uStack_230;
          uStack_110 = uStack_228;
          uStack_f0 = uStack_210;
          pdb_141aaa350(&lStack_170,lVar3 + 0x10,param_2[3] + 0x10,2,0);
          uStack_400 = uStack_1b0;
          lStack_408 = lStack_1b8;
          uStack_49 = 1;
          pdb_141aa9580(&lStack_170,&lStack_408,uStack_1c8,uStack_1c0);
          uStack_49 = 1;
          pdb_141aaae20(&lStack_170,pbStack_58,uStack_238);
          uStack_49 = 1;
          pdb_141aa9580(&lStack_170,&uStack_118,uStack_218,uStack_f0);
          lStack_3b8 = uStack_120;
          lStack_3c8 = uStack_130;
          lStack_3c0 = uStack_128;
          uStack_3d8 = uStack_140;
          uStack_3d4 = uStack_13c;
          uStack_3d0 = uStack_138;
          uStack_3cc = uStack_134;
          uStack_3e8 = uStack_150;
          uStack_3e4 = uStack_14c;
          uStack_3e0 = uStack_148;
          uStack_3dc = uStack_144;
          uStack_3f8 = uStack_160;
          uStack_3f4 = uStack_15c;
          uStack_3f0 = uStack_158;
          uStack_3ec = uStack_154;
          lStack_408 = lStack_170;
          uStack_400 = uStack_168;
          uStack_3fc = uStack_164;
          uStack_49 = 0;
          pdb_141aaa500(&lStack_b8,&lStack_408);
          lStack_78 = lStack_a0;
          if (lStack_b8 == 0) {
            param_1[3] = lStack_a0;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_b0._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a8;
            *(undefined4 *)((longlong)param_1 + 0x14) = uStack_a8._4_4_;
            *param_1 = 4;
            if (uStack_70 != 0) {
              pub_1406abac0(pbStack_58,uStack_70,1);
            }
            pdb_1409987a0(&lStack_208);
            if ((int)lStack_2a8 == 3) {
              return param_1;
            }
            pdb_141ac4dd0(&lStack_2a8);
            return param_1;
          }
          lStack_c8 = lStack_98;
          uStack_c0 = lStack_90;
          uVar2 = uStack_c0;
          lStack_d0 = lStack_a0;
          uStack_e8 = lStack_b8;
          lStack_68 = lStack_98;
          uStack_c0._0_4_ = (undefined4)lStack_90;
          uStack_60 = (undefined4)uStack_c0;
          uStack_49 = 0;
          uStack_c0 = uVar2;
          pdb_1409987a0(&uStack_e8);
          if (uStack_70 != 0) {
            pub_1406abac0(pbStack_58,uStack_70,1);
          }
          uStack_1c8 = 999;
          uStack_1c0 = 0;
          lStack_408 = lStack_2a8;
        }
        lStack_f8 = lStack_f8 + (ulonglong)bStack_4b;
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
        goto LAB_142a90036;
      }
      param_1[3] = lStack_78;
      goto LAB_142a8fd0a;
    }
  }
  param_1[3] = lStack_d8;
  uStack_400 = (undefined4)uStack_e8;
  uStack_3fc = uStack_e8._4_4_;
  uStack_3f8 = uStack_e0;
  uStack_3f4 = uStack_dc;
LAB_142a8fd0a:
  *(undefined4 *)(param_1 + 1) = uStack_400;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3fc;
  *(undefined4 *)(param_1 + 2) = uStack_3f8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3f4;
  *param_1 = 4;
  return param_1;
}

