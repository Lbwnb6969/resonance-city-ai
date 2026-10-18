// VA 0x140b02c60, PDB extent 367 bytes
// country_core::systems::render_loop::draw_passes::transparency_pass::refraction_copy_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::transparency_pass::refraction_copy_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/transparency_pass.rs
   Extent: 367 */

undefined8 *
pdb_140b02c60(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  longlong lStack_48;
  
  uVar1 = *(undefined4 *)(param_4 + 8);
  uStack_b0 = 0;
  uStack_ae = (undefined2)uVar1;
  uStack_ac = (undefined2)((uint)uVar1 >> 0x10);
  uStack_aa = 1;
  uStack_a8 = 0x7a010001;
  uStack_a4 = 0x201;
  uStack_a2 = 0;
  uStack_a0 = 0x43053063;
  uStack_9c = 1;
  puStack_98 = (undefined4 *)0x11;
  uVar2 = pdb_140e2b4e0(param_2,&uStack_b0);
  uStack_ac = (undefined2)uVar2;
  uStack_aa = (undefined2)((uint)uVar2 >> 0x10);
  uStack_a4 = 1;
  uStack_a2 = 1;
  uStack_a1 = 0;
  uStack_a0 = 0x2017a01;
  uStack_9c = uStack_9c & 0xffffff00;
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_a8 = uVar1;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_b0,param_2);
  }
  uStack_68 = CONCAT44(uStack_9c,uStack_a0);
  uStack_78 = CONCAT22(uStack_ae,uStack_b0);
  uStack_74 = CONCAT22(uStack_aa,uStack_ac);
  uStack_70 = uStack_a8;
  uStack_6c = CONCAT13(uStack_a1,CONCAT12(uStack_a2,uStack_a4));
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_b0 = 1;
  uStack_ae = 0;
  puStack_98 = &uStack_78;
  uStack_90 = 1;
  uStack_88 = param_5;
  uStack_80 = 0;
  uStack_58 = param_6;
  puStack_50 = &uStack_60;
  uStack_60 = param_3;
  lStack_48 = param_4;
  pdb_1417618a0(param_2,&UNK_143053074,0x16,&uStack_b0,&uStack_58);
  param_1[2] = uStack_68;
  *param_1 = CONCAT44(uStack_74,uStack_78);
  param_1[1] = CONCAT44(uStack_6c,uStack_70);
  return param_1;
}

