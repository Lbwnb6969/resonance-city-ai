// VA 0x1408f1e20, PDB extent 1265 bytes
// system_decorator::backup::impl$3::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::backup::impl$3::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
   Extent: 1265 */

void pdb_1408f1e20(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong lStack_258;
  longlong lStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_158;
  undefined1 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  uVar4 = _UNK_14301ccd8;
  uVar3 = _DAT_14301ccd0;
  uVar2 = _UNK_14301ccc8;
  uVar1 = _DAT_14301ccc0;
  uStack_78 = _DAT_14301ccd0;
  uStack_70 = _UNK_14301ccd8;
  uStack_88 = _DAT_14301ccc0;
  uStack_80 = _UNK_14301ccc8;
  lStack_60 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    uStack_98 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    uStack_98 = pdb_140f4fd10();
    *plVar5 = uStack_98;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = uStack_98 + 1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_b8 = uVar1;
  uStack_b0 = uVar2;
  uStack_90 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lStack_1f8 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lStack_1f8 = pdb_140f4fd10();
    *plVar5 = lStack_1f8;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lStack_1f8 + 1;
  lStack_258 = lStack_68;
  lStack_250 = lStack_60;
  uStack_268 = uStack_78;
  uStack_260 = uStack_70;
  uStack_278 = uStack_88;
  uStack_270 = uStack_80;
  uStack_1e8 = 0;
  uStack_158 = 0;
  uStack_248 = (undefined4)uStack_b8;
  uStack_244 = uStack_b8._4_4_;
  uStack_240 = (undefined4)uStack_b0;
  uStack_23c = uStack_b0._4_4_;
  uStack_238 = (undefined4)uStack_a8;
  uStack_234 = uStack_a8._4_4_;
  uStack_230 = (undefined4)uStack_a0;
  uStack_22c = uStack_a0._4_4_;
  uStack_228 = (undefined4)uStack_98;
  uStack_224 = uStack_98._4_4_;
  uStack_220 = (undefined4)uStack_90;
  uStack_21c = uStack_90._4_4_;
  uStack_218 = uVar1;
  uStack_210 = uVar2;
  uStack_208 = uVar3;
  uStack_200 = uVar4;
  uStack_c8 = 0;
  lStack_1f0 = param_2;
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
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  uStack_88 = uVar1;
  uStack_80 = uVar2;
  lStack_60 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    uStack_98 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    uStack_98 = pdb_140f4fd10();
    *plVar5 = uStack_98;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = uStack_98 + 1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_b8 = uVar1;
  uStack_b0 = uVar2;
  uStack_90 = param_2;
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
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  pub_142e32760(param_1 + 3,&uStack_278,0x1b8);
  param_1[0x3a] = uStack_88;
  param_1[0x3b] = uStack_80;
  param_1[0x3c] = uStack_78;
  param_1[0x3d] = uStack_70;
  param_1[0x3e] = lStack_68;
  param_1[0x3f] = lStack_60;
  param_1[0x40] = uStack_b8;
  param_1[0x41] = uStack_b0;
  param_1[0x42] = uStack_a8;
  param_1[0x43] = uStack_a0;
  param_1[0x44] = uStack_98;
  param_1[0x45] = uStack_90;
  param_1[0x48] = uVar3;
  param_1[0x49] = uVar4;
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar2;
  param_1[0x4a] = lVar6;
  param_1[0x4b] = param_2;
  param_1[0x4e] = 8;
  param_1[0x4f] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x282) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  return;
}

