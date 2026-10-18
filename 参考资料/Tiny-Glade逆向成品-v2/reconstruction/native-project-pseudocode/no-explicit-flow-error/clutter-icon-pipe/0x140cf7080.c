// VA 0x140cf7080, PDB extent 495 bytes
// clutter_icon_pipe::icon_texture_recipe
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::icon_texture_recipe
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 495 */

ulonglong *
pdb_140cf7080(ulonglong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong arg0;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 auStack_c8 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_2 + 2);
  arg0 = *(ulonglong *)(param_2 + 4);
  puStack_70 = param_2;
  uStack_68 = uVar1;
  if ((longlong)arg0 < 0) {
    uVar3 = 0;
LAB_140cf70ba:
    uStack_49 = 1;
    pdb_142dc7e2a(uVar3,arg0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_60 = arg0;
  if (arg0 == 0) {
    pbStack_58 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar3 = 1;
    pbStack_58 = pub_1406abab0(arg0,1);
    if (pbStack_58 == (byte *)0x0) goto LAB_140cf70ba;
    pub_142e32760(pbStack_58,uVar1,arg0);
  }
  uStack_80 = *(undefined8 *)(param_2 + 4);
  uStack_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  auStack_c8[0] = 0x8000000000000000;
  uStack_a8 = 1;
  uStack_a4 = 0x80000000a0;
  uStack_9c = 1;
  uStack_94 = 1;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  pdb_140d9d030(&uStack_118,auStack_c8);
  *param_1 = uStack_60;
  param_1[1] = (ulonglong)pbStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uStack_118;
  param_1[5] = uStack_110;
  param_1[6] = uStack_108;
  param_1[7] = uStack_100;
  param_1[8] = uStack_f8;
  param_1[9] = uStack_f0;
  param_1[10] = uStack_e8;
  param_1[0xb] = uStack_e0;
  param_1[0xc] = uStack_d8;
  param_1[0xd] = uStack_d0;
  return param_1;
}

