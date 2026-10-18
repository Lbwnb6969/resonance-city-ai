// VA 0x1405c83f0, PDB extent 1057 bytes
// country_core::resources::stairs::stairs_state::impl$10::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::stairs::stairs_state::impl$10::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 1057 */

void pdb_1405c83f0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
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
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    uStack_b0 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    uStack_b0 = pdb_140f4fd10();
    *plVar5 = uStack_b0;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = uStack_b0 + 1;
  uVar4 = _UNK_142f70768;
  uVar3 = _DAT_142f70760;
  uVar2 = _UNK_142f70758;
  uVar1 = _DAT_142f70750;
  uStack_e8 = 0;
  uStack_e0 = 8;
  uStack_d8 = 0;
  uStack_d0 = _DAT_142f70750;
  uStack_c8 = _UNK_142f70758;
  uStack_c0 = _DAT_142f70760;
  uStack_b8 = _UNK_142f70768;
  lStack_a8 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lStack_148 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lStack_148 = pdb_140f4fd10();
    *plVar5 = lStack_148;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lStack_148 + 1;
  lStack_188 = lStack_a8;
  uStack_198 = (undefined4)uStack_b8;
  uStack_194 = uStack_b8._4_4_;
  uStack_190 = (undefined4)uStack_b0;
  uStack_18c = uStack_b0._4_4_;
  uStack_1a8 = (undefined4)uStack_c8;
  uStack_1a4 = uStack_c8._4_4_;
  uStack_1a0 = (undefined4)uStack_c0;
  uStack_19c = uStack_c0._4_4_;
  uStack_1b8 = (undefined4)uStack_d8;
  uStack_1b4 = uStack_d8._4_4_;
  uStack_1b0 = (undefined4)uStack_d0;
  uStack_1ac = uStack_d0._4_4_;
  uStack_1c8 = (undefined4)uStack_e8;
  uStack_1c4 = uStack_e8._4_4_;
  uStack_1c0 = (undefined4)uStack_e0;
  uStack_1bc = uStack_e0._4_4_;
  uStack_180 = 0;
  uStack_178 = 8;
  uStack_170 = 0;
  uStack_168 = uVar1;
  uStack_160 = uVar2;
  uStack_158 = uVar3;
  uStack_150 = uVar4;
  lStack_140 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lStack_f8 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lStack_f8 = pdb_140f4fd10();
    *plVar5 = lStack_f8;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lStack_f8 + 1;
  uStack_130 = 0;
  uStack_128 = 8;
  uStack_120 = 0;
  uStack_118 = uVar1;
  uStack_110 = uVar2;
  uStack_108 = uVar3;
  uStack_100 = uVar4;
  lStack_f0 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lStack_68 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lStack_68 = pdb_140f4fd10();
    *plVar5 = lStack_68;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lStack_68 + 1;
  lStack_a8 = lStack_f0;
  uStack_b8 = uStack_100;
  uStack_b0 = lStack_f8;
  uStack_c8 = uStack_110;
  uStack_c0 = uStack_108;
  uStack_d8 = uStack_120;
  uStack_d0 = uStack_118;
  uStack_e8 = uStack_130;
  uStack_e0 = uStack_128;
  uStack_a0 = 0;
  uStack_98 = 8;
  uStack_90 = 0;
  uStack_88 = uVar1;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  lStack_60 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  pub_142e32760(param_1 + 5,&uStack_1c8,0x90);
  pub_142e32760(param_1 + 0x17,&uStack_e8,0x90);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = 0;
  param_1[2] = 3;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  param_1[0x2c] = uVar4;
  param_1[0x2d] = lVar6;
  param_1[0x2e] = param_2;
  return;
}

