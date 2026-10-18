// VA 0x1408af430, PDB extent 390 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_railing_shared::railing_tip_placements
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_railing_shared.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_railing_shared::railing_tip_placements
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_railing_shared.rs
   Extent: 390 */

undefined8
pdb_1408af430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,longlong param_10,undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 *puStack_48;
  
  uStack_f2 = 0;
  puStack_a0 = &stack0x00000068;
  uStack_88 = param_12;
  uStack_80 = param_9;
  lStack_78 = param_10;
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_11;
  puStack_48 = &uStack_f2;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uStack_98 = param_3;
  uStack_90 = param_2;
  pdb_1408af5c0(&puStack_a0,uVar1,uVar2,0,0);
  pdb_1408af5c0(&puStack_a0,uVar2,uVar1,param_10 + -1,1);
  uStack_f0 = param_9;
  lStack_e8 = param_10;
  uStack_e0 = param_7;
  uStack_d8 = param_8;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  uStack_c0 = 0;
  uStack_b8 = 2;
  uStack_b0 = uStack_f2;
  uStack_a8 = 0;
  pdb_141498680(param_1,&uStack_f0);
  return param_1;
}

