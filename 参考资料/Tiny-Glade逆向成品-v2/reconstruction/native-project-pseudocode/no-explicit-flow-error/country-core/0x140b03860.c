// VA 0x140b03860, PDB extent 1769 bytes
// country_core::systems::render_loop::compute_passes::ray_trace_gi::ray_trace_gi
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/ray_trace_gi.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::ray_trace_gi::ray_trace_gi
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/ray_trace_gi.rs
   Extent: 1769 */

undefined8 *
pdb_140b03860(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined4 uVar13;
  undefined8 uVar14;
  short sVar15;
  ushort uVar16;
  short sVar18;
  undefined2 uStack_268;
  ushort uStack_266;
  short sStack_264;
  undefined2 uStack_262;
  undefined4 uStack_260;
  undefined2 uStack_25c;
  undefined1 uStack_25a;
  undefined1 uStack_259;
  undefined4 uStack_258;
  uint uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 *puStack_128;
  longlong lStack_120;
  undefined4 *puStack_118;
  undefined4 *puStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uVar17;
  
  lVar1 = *(longlong *)(param_2 + 0x130);
  if (lVar1 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  lVar2 = *(longlong *)(param_2 + 0x128);
  *(undefined **)(lVar2 + lVar1 * 0x10) = &UNK_143053242;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = 8;
  *(longlong *)(param_2 + 0x130) = lVar1 + 1;
  sVar15 = (*(ushort *)(param_3 + 8) & _DAT_143052770) + (*(ushort *)(param_3 + 8) >> 1);
  sVar18 = (*(ushort *)(param_3 + 10) & _UNK_143052772) + (*(ushort *)(param_3 + 10) >> 1);
  uVar16 = sVar15 + (ushort)(sVar15 == 0);
  sVar18 = sVar18 + (ushort)(sVar18 == 0);
  uVar17 = CONCAT22(sVar18,uVar16);
  uStack_268 = 0;
  uStack_262 = 1;
  uStack_260 = 0x61010001;
  uStack_25c = 0x201;
  uStack_25a = 0;
  uStack_258 = 0x4305324a;
  uStack_254 = 1;
  uStack_250 = 0x15;
  uStack_266 = uVar16;
  sStack_264 = sVar18;
  uVar13 = pdb_140e2b4e0(param_2,&uStack_268);
  sStack_264 = (short)uVar13;
  uStack_262 = (undefined2)((uint)uVar13 >> 0x10);
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0;
  uStack_258 = 0x2016101;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_260 = uVar17;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_268,param_2);
  }
  uStack_158 = CONCAT44(uStack_254,uStack_258);
  uStack_168 = CONCAT22(uStack_266,uStack_268);
  uStack_164 = CONCAT22(uStack_262,sStack_264);
  uStack_160 = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  uStack_268 = 0;
  uStack_262 = 1;
  uStack_260 = 0x6d010001;
  uStack_25c = 0x201;
  uStack_25a = 0;
  uStack_258 = 0x4305325f;
  uStack_254 = 1;
  uStack_250 = 0x10;
  uStack_266 = uVar16;
  sStack_264 = sVar18;
  uVar13 = pdb_140e2b4e0(param_2,&uStack_268);
  sStack_264 = (short)uVar13;
  uStack_262 = (undefined2)((uint)uVar13 >> 0x10);
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0;
  uStack_258 = 0x2016d01;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_260 = uVar17;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_268,param_2);
  }
  uStack_138 = CONCAT44(uStack_254,uStack_258);
  uStack_148 = CONCAT22(uStack_266,uStack_268);
  uStack_144 = CONCAT22(uStack_262,sStack_264);
  uStack_140 = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  uStack_1e0 = 0;
  uStack_1d8 = 8;
  uStack_1d0 = 0;
  uVar14 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433319c0,0x28,&uStack_1e0);
  pdb_140e291c0(&uStack_e0,&UNK_1433319c0,0x28,uVar14,param_2);
  puStack_128 = &uStack_148;
  puStack_118 = &uStack_168;
  puStack_110 = (undefined4 *)param_6;
  puStack_108 = (undefined4 *)param_5;
  puStack_100 = (undefined4 *)param_8;
  uStack_f0 = param_9;
  uStack_e8 = (uint)param_7;
  lStack_120 = param_3;
  uStack_f8 = param_4;
  pdb_141799f90(&uStack_268,&uStack_e0,&puStack_128);
  auVar3[0xc] = 1;
  auVar3._0_12_ = ZEXT112(1) << 0x40;
  auVar4[9] = 0;
  auVar4._0_9_ = (unkuint9)1 << 0x40;
  auVar4._10_3_ = auVar3._10_3_;
  auVar11._5_8_ = 0;
  auVar11._0_5_ = auVar4._8_5_;
  auVar5._4_2_ = sVar18;
  auVar5._0_4_ = uVar17;
  auVar5._6_7_ = SUB137(auVar11 << 0x40,6);
  auVar6._2_2_ = 0;
  auVar6._0_2_ = uVar16;
  auVar6._4_9_ = auVar5._4_9_;
  uStack_dc = auVar6._0_8_;
  uStack_d4 = 1;
  uStack_e0 = 1;
  pdb_140e28810(&uStack_268,&uStack_e0);
  uStack_268 = 0;
  uStack_262 = 1;
  uStack_260 = 0x61010001;
  uStack_25c = 0x201;
  uStack_25a = 0;
  uStack_258 = 0x4305326f;
  uStack_254 = 1;
  uStack_250 = 0xf;
  uStack_266 = uVar16;
  sStack_264 = sVar18;
  uVar13 = pdb_140e2b4e0(param_2,&uStack_268);
  sStack_264 = (short)uVar13;
  uStack_262 = (undefined2)((uint)uVar13 >> 0x10);
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0;
  uStack_258 = 0x2016101;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_260 = uVar17;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_268,param_2);
  }
  uStack_1b8 = CONCAT44(uStack_254,uStack_258);
  uStack_1c8 = CONCAT22(uStack_266,uStack_268);
  uStack_1c4 = CONCAT22(uStack_262,sStack_264);
  uStack_1c0 = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  uStack_268 = 0;
  uStack_262 = 1;
  uStack_260 = 0x61010001;
  uStack_25c = 0x201;
  uStack_25a = 0;
  uStack_258 = 0x4305327e;
  uStack_254 = 1;
  uStack_250 = 0xe;
  uStack_266 = uVar16;
  sStack_264 = sVar18;
  uVar13 = pdb_140e2b4e0(param_2,&uStack_268);
  sStack_264 = (short)uVar13;
  uStack_262 = (undefined2)((uint)uVar13 >> 0x10);
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0;
  uStack_258 = 0x2016101;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_260 = uVar17;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_268,param_2);
  }
  uStack_198 = CONCAT44(uStack_254,uStack_258);
  uStack_1a8 = CONCAT22(uStack_266,uStack_268);
  uStack_1a4 = CONCAT22(uStack_262,sStack_264);
  uStack_1a0 = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  uStack_268 = 0;
  uStack_262 = 1;
  uStack_260 = 0x65010001;
  uStack_25c = 0x201;
  uStack_25a = 0;
  uStack_258 = 0x4305328c;
  uStack_254 = 1;
  uStack_250 = 0x10;
  uStack_266 = uVar16;
  sStack_264 = sVar18;
  uVar13 = pdb_140e2b4e0(param_2,&uStack_268);
  sStack_264 = (short)uVar13;
  uStack_262 = (undefined2)((uint)uVar13 >> 0x10);
  uStack_25c = 1;
  uStack_25a = 1;
  uStack_259 = 0;
  uStack_258 = 0x2016501;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_268 = 0;
  uStack_266 = 0;
  uStack_260 = uVar17;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_268,param_2);
  }
  uStack_178 = CONCAT44(uStack_254,uStack_258);
  uStack_188 = CONCAT22(uStack_266,uStack_268);
  uStack_184 = CONCAT22(uStack_262,sStack_264);
  uStack_180 = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  uStack_1e0 = 0;
  uStack_1d8 = 8;
  uStack_1d0 = 0;
  uVar14 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331c26,0x23,&uStack_1e0);
  pdb_140e291c0(&uStack_e0,&UNK_143331c26,0x23,uVar14,param_2);
  puStack_128 = &uStack_188;
  puStack_118 = &uStack_1a8;
  puStack_110 = &uStack_168;
  puStack_108 = &uStack_1c8;
  puStack_100 = &uStack_148;
  lStack_120 = param_3;
  pdb_141789190(&uStack_268,&uStack_e0,&puStack_128);
  auVar7[0xc] = 1;
  auVar7._0_12_ = ZEXT112(1) << 0x40;
  auVar8[9] = 0;
  auVar8._0_9_ = (unkuint9)1 << 0x40;
  auVar8._10_3_ = auVar7._10_3_;
  auVar12._5_8_ = 0;
  auVar12._0_5_ = auVar8._8_5_;
  auVar9._4_2_ = sVar18;
  auVar9._0_4_ = uVar17;
  auVar9._6_7_ = SUB137(auVar12 << 0x40,6);
  auVar10._2_2_ = 0;
  auVar10._0_2_ = uVar16;
  auVar10._4_9_ = auVar9._4_9_;
  uStack_dc = auVar10._0_8_;
  uStack_d4 = 1;
  uStack_e0 = 1;
  pdb_140e28810(&uStack_268,&uStack_e0);
  uStack_268 = (undefined2)uStack_1c8;
  uStack_266 = (ushort)((uint)uStack_1c8 >> 0x10);
  sStack_264 = (short)uStack_1c4;
  uStack_262 = (undefined2)((uint)uStack_1c4 >> 0x10);
  uStack_260 = (undefined4)uStack_1c0;
  uStack_25c = (undefined2)((ulonglong)uStack_1c0 >> 0x20);
  uStack_25a = (undefined1)((ulonglong)uStack_1c0 >> 0x30);
  uStack_259 = (undefined1)((ulonglong)uStack_1c0 >> 0x38);
  uStack_258 = (undefined4)uStack_1b8;
  uStack_254 = (uint)((ulonglong)uStack_1b8 >> 0x20);
  uStack_250 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_248 = uStack_1a0;
  uStack_240 = uStack_198;
  uStack_238 = CONCAT44(uStack_184,uStack_188);
  uStack_230 = uStack_180;
  uStack_228 = uStack_178;
  lVar1 = *(longlong *)(param_2 + 0x130);
  if (lVar1 == *(longlong *)(param_2 + 0x120)) {
    pdb_142d8afd0(param_2 + 0x120);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x128) + lVar1 * 0x10) = 0;
  *(longlong *)(param_2 + 0x130) = lVar1 + 1;
  param_1[8] = uStack_228;
  param_1[6] = uStack_238;
  param_1[7] = uStack_230;
  param_1[4] = uStack_248;
  param_1[5] = uStack_240;
  param_1[2] = CONCAT44(uStack_254,uStack_258);
  param_1[3] = uStack_250;
  *param_1 = CONCAT26(uStack_262,CONCAT24(sStack_264,CONCAT22(uStack_266,uStack_268)));
  param_1[1] = CONCAT17(uStack_259,CONCAT16(uStack_25a,CONCAT24(uStack_25c,uStack_260)));
  return param_1;
}

