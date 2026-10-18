// VA 0x140b05100, PDB extent 745 bytes
// country_core::systems::render_loop::compute_passes::half_res::extract_half_res_depth_normals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/half_res.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::half_res::extract_half_res_depth_normals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/half_res.rs
   Extent: 745 */

undefined8 * pdb_140b05100(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined4 uVar6;
  undefined8 uVar7;
  short sVar8;
  ushort uVar9;
  short sVar11;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  ushort uStack_1ae;
  short sStack_1ac;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  undefined2 uStack_1a4;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uVar10;
  
  sVar8 = (*(ushort *)(param_4 + 8) & _DAT_143052770) + (*(ushort *)(param_4 + 8) >> 1);
  sVar11 = (*(ushort *)(param_4 + 10) & _UNK_143052772) + (*(ushort *)(param_4 + 10) >> 1);
  uVar9 = sVar8 + (ushort)(sVar8 == 0);
  sVar11 = sVar11 + (ushort)(sVar11 == 0);
  uVar10 = CONCAT22(sVar11,uVar9);
  uStack_1b0 = 0;
  uStack_1aa = 1;
  uStack_1a8 = 0x64010001;
  uStack_1a4 = 0x201;
  uStack_1a2 = 0;
  uStack_1a0 = 0x430534c4;
  uStack_19c = 1;
  uStack_198 = 0xe;
  uStack_1ae = uVar9;
  sStack_1ac = sVar11;
  uVar6 = pdb_140e2b4e0(param_2,&uStack_1b0);
  sStack_1ac = (short)uVar6;
  uStack_1aa = (undefined2)((uint)uVar6 >> 0x10);
  uStack_1a4 = 1;
  uStack_1a2 = 1;
  uStack_1a1 = 0;
  uStack_1a0 = 0x2016401;
  uStack_19c = uStack_19c & 0xffffff00;
  uStack_1b0 = 0;
  uStack_1ae = 0;
  uStack_1a8 = uVar10;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_1b0,param_2);
  }
  uStack_1d8 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_1e8 = CONCAT22(uStack_1ae,uStack_1b0);
  uStack_1e4 = CONCAT22(uStack_1aa,sStack_1ac);
  uStack_1e0 = CONCAT17(uStack_1a1,CONCAT16(uStack_1a2,CONCAT24(uStack_1a4,uStack_1a8)));
  uStack_1b0 = 0;
  uStack_1aa = 1;
  uStack_1a8 = 0x26010001;
  uStack_1a4 = 0x201;
  uStack_1a2 = 0;
  uStack_1a0 = 0x430534d2;
  uStack_19c = 1;
  uStack_198 = 0x10;
  uStack_1ae = uVar9;
  sStack_1ac = sVar11;
  uVar6 = pdb_140e2b4e0(param_2,&uStack_1b0);
  sStack_1ac = (short)uVar6;
  uStack_1aa = (undefined2)((uint)uVar6 >> 0x10);
  uStack_1a4 = 1;
  uStack_1a2 = 1;
  uStack_1a1 = 0;
  uStack_1a0 = 0x2012601;
  uStack_19c = uStack_19c & 0xffffff00;
  uStack_1b0 = 0;
  uStack_1ae = 0;
  uStack_1a8 = uVar10;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_1b0,param_2);
  }
  uStack_1b8 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_1c8 = CONCAT22(uStack_1ae,uStack_1b0);
  uStack_1c4 = CONCAT22(uStack_1aa,sStack_1ac);
  uStack_1c0 = CONCAT17(uStack_1a1,CONCAT16(uStack_1a2,CONCAT24(uStack_1a4,uStack_1a8)));
  uStack_128 = pdb_140e26050(0);
  uStack_124 = *(undefined4 *)(param_4 + 4);
  uStack_120 = (undefined6)*(undefined8 *)(param_4 + 8);
  uStack_11a = (undefined2)*(undefined8 *)(param_4 + 0xe);
  uStack_118 = (undefined6)((ulonglong)*(undefined8 *)(param_4 + 0xe) >> 0x10);
  uStack_110 = 0;
  uStack_108 = 8;
  uStack_100 = 0;
  uVar7 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331e8f,0x30,&uStack_110);
  pdb_140e291c0(&uStack_d0,&UNK_143331e8f,0x30,uVar7,param_2);
  puStack_f8 = &uStack_128;
  puStack_f0 = &uStack_1c8;
  puStack_e0 = &uStack_1e8;
  lStack_e8 = param_4;
  uStack_d8 = param_3;
  pdb_141795de0(&uStack_1b0,&uStack_d0,&puStack_f8);
  auVar1[0xc] = 1;
  auVar1._0_12_ = ZEXT112(1) << 0x40;
  auVar2[9] = 0;
  auVar2._0_9_ = (unkuint9)1 << 0x40;
  auVar2._10_3_ = auVar1._10_3_;
  auVar5._5_8_ = 0;
  auVar5._0_5_ = auVar2._8_5_;
  auVar3._4_2_ = sVar11;
  auVar3._0_4_ = uVar10;
  auVar3._6_7_ = SUB137(auVar5 << 0x40,6);
  auVar4._2_2_ = 0;
  auVar4._0_2_ = uVar9;
  auVar4._4_9_ = auVar3._4_9_;
  uStack_cc = auVar4._0_8_;
  uStack_c4 = 1;
  uStack_d0 = 1;
  pdb_140e28810(&uStack_1b0,&uStack_d0);
  param_1[2] = uStack_1d8;
  *param_1 = CONCAT44(uStack_1e4,uStack_1e8);
  param_1[1] = uStack_1e0;
  param_1[3] = CONCAT44(uStack_1c4,uStack_1c8);
  param_1[4] = uStack_1c0;
  param_1[5] = uStack_1b8;
  return param_1;
}

