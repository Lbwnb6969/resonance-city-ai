// VA 0x140a60a40, PDB extent 1818 bytes
// country_core::resources::stairs::stairs_state::StairsState::extract_diff_and_make_backup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::extract_diff_and_make_backup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 1818 */

undefined8 * pdb_140a60a40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong arg1;
  undefined8 *puVar14;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  longlong lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0xb8;
  uStack_158 = 0;
  uStack_150 = 4;
  uStack_148 = 0;
  uStack_72 = 1;
  pdb_1417cc1a0(lVar1,&uStack_158);
  uStack_198 = uStack_148;
  uStack_1a8 = (undefined4)uStack_158;
  uStack_1a4 = uStack_158._4_4_;
  uStack_1a0 = (undefined4)uStack_150;
  uStack_19c = uStack_150._4_4_;
  uStack_72 = 0;
  pdb_140a61530(&uStack_108,&uStack_1a8);
  if ((int)uStack_108 == 1) {
    arg1 = 0;
    uVar13 = uStack_100;
    if (uStack_f8 == 0) goto LAB_140a60b1d;
  }
  else {
    uVar13 = pdb_140bb9c30(&uStack_108);
    uStack_108 = 1;
    uStack_100 = uVar13;
    if (uStack_f8 == 0) {
      arg1 = 0;
      goto LAB_140a60b1d;
    }
  }
  uVar13 = uStack_100;
  arg1 = uStack_f8 << 3;
  pub_1406abac0(uStack_f0,arg1,4);
LAB_140a60b1d:
  plVar10 = (longlong *)pdb_140f3bda0();
  if ((char)plVar10[2] == '\x01') {
    uStack_e8 = *plVar10;
    arg1 = plVar10[1];
  }
  else {
    uStack_e8 = pdb_140f4fd10();
    *plVar10 = uStack_e8;
    plVar10[1] = arg1;
    *(undefined1 *)(plVar10 + 2) = 1;
  }
  *plVar10 = uStack_e8 + 1;
  uVar9 = _UNK_14303e558;
  uVar8 = _DAT_14303e550;
  uVar7 = _UNK_14303e548;
  uVar6 = _DAT_14303e540;
  uStack_f8 = _DAT_14303e550;
  uStack_f0 = (byte *)_UNK_14303e558;
  uStack_108 = _DAT_14303e540;
  uStack_100 = _UNK_14303e548;
  puVar14 = &uStack_108;
  uStack_e0 = (undefined8 *)arg1;
  pdb_1417cc050(lVar1);
  uStack_1b8 = (undefined4)uStack_e8;
  uStack_1b4 = uStack_e8._4_4_;
  uStack_1b0 = (undefined4)uStack_e0;
  uStack_1ac = uStack_e0._4_4_;
  uStack_1c8 = (undefined4)uStack_f8;
  uStack_1c4 = uStack_f8._4_4_;
  uStack_1c0 = (undefined4)uStack_f0;
  uStack_1bc = uStack_f0._4_4_;
  uStack_1d8 = (int)uStack_108;
  uStack_1d4 = uStack_108._4_4_;
  uStack_1d0 = (undefined4)uStack_100;
  uStack_1cc = uStack_100._4_4_;
  uStack_71 = 1;
  uVar11 = pdb_140a5f920(param_2);
  uStack_71 = 1;
  plVar10 = (longlong *)pdb_140f3bda0();
  if ((char)plVar10[2] == '\x01') {
    uStack_e8 = *plVar10;
    puVar14 = (undefined8 *)plVar10[1];
  }
  else {
    uStack_71 = 1;
    uStack_e8 = pdb_140f4fd10();
    *plVar10 = uStack_e8;
    plVar10[1] = (longlong)puVar14;
    *(undefined1 *)(plVar10 + 2) = 1;
  }
  *plVar10 = uStack_e8 + 1;
  uStack_f8 = uVar8;
  uStack_f0 = (byte *)uVar9;
  uStack_108 = uVar6;
  uStack_100 = uVar7;
  uStack_e0 = puVar14;
  pdb_1417cc050(param_2 + 0x28,&uStack_108);
  lStack_238 = uStack_e8;
  puStack_230 = uStack_e0;
  uStack_248 = uStack_f8;
  uStack_240 = uStack_f0;
  uStack_258 = uStack_108;
  uStack_250 = uStack_100;
  uStack_e8 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_e0 = (undefined8 *)CONCAT44(uStack_1ac,uStack_1b0);
  uStack_f8 = CONCAT44(uStack_1c4,uStack_1c8);
  uStack_f0 = (byte *)CONCAT44(uStack_1bc,uStack_1c0);
  uStack_108 = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_100 = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_71 = 0;
  pdb_140a5f000(&uStack_1a8,&uStack_108,uVar13,&uStack_258,uVar11);
  puVar2 = puStack_180 + lStack_178 * 2;
  puVar12 = puStack_180;
  while (puVar12 != puVar2) {
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    uVar5 = uVar4;
    if (uVar3 >= uVar4 && uVar3 != uVar4) {
      uVar5 = uVar3;
    }
    puVar12 = puVar12 + 2;
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    pdb_1403afce0(param_2 + 0x148,uVar4,uVar5);
  }
  pdb_1417c58d0(&uStack_220,param_2 + 0x28);
  uStack_1e8 = *(undefined4 *)(param_2 + 0x60);
  uStack_1e4 = *(undefined4 *)(param_2 + 100);
  uStack_1e0 = *(undefined4 *)(param_2 + 0x68);
  uStack_1dc = *(undefined4 *)(param_2 + 0x6c);
  pdb_1417c5a90(&uStack_158,param_2 + 0x70);
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  uStack_118 = *(undefined8 *)(param_2 + 0xb0);
  uStack_108 = uStack_220;
  uStack_100 = uStack_218;
  uStack_f8 = uStack_210;
  uStack_f0 = (byte *)uStack_208;
  uStack_e8 = uStack_200;
  uStack_e0 = (undefined8 *)uStack_1f8;
  uStack_d8 = uStack_1f0;
  uStack_d4 = uStack_1ec;
  uStack_d0 = uStack_1e8;
  uStack_cc = uStack_1e4;
  uStack_c8 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_c0 = uStack_158;
  uStack_b8 = uStack_150;
  uStack_b0 = (undefined4)uStack_148;
  uStack_ac = uStack_148._4_4_;
  uStack_a8 = uStack_140;
  uStack_a4 = uStack_13c;
  uStack_a0 = uStack_138;
  uStack_9c = uStack_134;
  uStack_98 = uStack_130;
  uStack_94 = uStack_12c;
  uStack_120._0_4_ = (undefined4)uVar13;
  uStack_120._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_90 = uStack_128;
  uStack_8c = uStack_124;
  uStack_88 = (undefined4)uStack_120;
  uStack_84 = uStack_120._4_4_;
  uStack_120 = uVar13;
  lStack_110 = lVar1;
  uStack_80 = uStack_118;
  pdb_1404a7820(lVar1);
  pub_142e32760(param_2 + 0xb8,&uStack_108,0x90);
  *(undefined1 *)(param_2 + 0x178) = 1;
  param_1[8] = uStack_168;
  param_1[9] = uStack_160;
  param_1[6] = lStack_178;
  param_1[7] = uStack_170;
  param_1[4] = uStack_188;
  param_1[5] = puStack_180;
  param_1[2] = uStack_198;
  param_1[3] = uStack_190;
  *param_1 = CONCAT44(uStack_1a4,uStack_1a8);
  param_1[1] = CONCAT44(uStack_19c,uStack_1a0);
  return param_1;
}

