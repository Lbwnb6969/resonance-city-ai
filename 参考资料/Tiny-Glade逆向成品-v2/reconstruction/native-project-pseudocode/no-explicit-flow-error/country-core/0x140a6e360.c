// VA 0x140a6e360, PDB extent 604 bytes
// country_core::systems::camera_rig::free::FreeCamera::set
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::free::FreeCamera::set
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
   Extent: 604 */

void pdb_140a6e360(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_148 = 0;
  uStack_140 = 8;
  uStack_138 = 0;
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_88 = *param_2;
  pdb_141a63d70(&uStack_100,&uStack_148,&uStack_88);
  pdb_141a638b0(&uStack_88,&uStack_100,param_3,param_4);
  uStack_118 = _DAT_142e37950;
  uStack_110 = 0x3f800000;
  uStack_128 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  pdb_141a63c40(&uStack_100,&uStack_88,&uStack_148);
  _uStack_e8 = CONCAT44(_UNK_14337fab4,_DAT_14337fab0);
  uStack_e0 = _UNK_14337fab8;
  uStack_dc = _DAT_14337fabc;
  uStack_d8 = _UNK_14337fac0;
  uStack_d4 = _UNK_14337fac4;
  uStack_d0 = _UNK_14337fac8;
  uStack_78 = _UNK_14337fac0;
  uStack_74 = _UNK_14337fac4;
  uStack_70 = _UNK_14337fac8;
  uStack_88._0_4_ = _DAT_14337fab0;
  uStack_88._4_4_ = _UNK_14337fab4;
  uStack_80 = _UNK_14337fab8;
  uStack_7c = _DAT_14337fabc;
  if (CONCAT44(uStack_ec,uStack_f0) != 0) {
    puVar2 = (undefined8 *)CONCAT44(uStack_f4,uStack_f8);
    puVar1 = puVar2 + CONCAT44(uStack_ec,uStack_f0) * 2;
    do {
      (**(code **)(puVar2[1] + 0x30))(&uStack_148,*puVar2,&uStack_88,0);
      puVar2 = puVar2 + 2;
      uStack_80 = (undefined4)uStack_140;
      uStack_7c = uStack_140._4_4_;
      uStack_78 = (undefined4)uStack_138;
      uStack_74 = uStack_138._4_4_;
      uStack_70 = uStack_130;
      uStack_88._0_4_ = (undefined4)uStack_148;
      uStack_88._4_4_ = uStack_148._4_4_;
    } while (puVar2 != puVar1);
  }
  uStack_d8 = uStack_78;
  uStack_d4 = uStack_74;
  uStack_d0 = uStack_70;
  uStack_e8 = (undefined4)uStack_88;
  uStack_e4 = uStack_88._4_4_;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  uStack_c8 = uStack_100;
  uStack_c4 = uStack_fc;
  uStack_c0 = uStack_f8;
  uStack_bc = uStack_f4;
  uStack_b8 = uStack_f0;
  uStack_b4 = uStack_ec;
  uStack_b0 = (undefined4)uStack_88;
  uStack_ac = uStack_88._4_4_;
  uStack_a8 = uStack_80;
  uStack_a4 = uStack_7c;
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
  uStack_98 = CONCAT44(uStack_cc,uStack_70);
  puStack_90 = param_1;
  pdb_140498c40(param_1);
  puStack_90[6] = uStack_98;
  puStack_90[4] = CONCAT44(uStack_a4,uStack_a8);
  puStack_90[5] = CONCAT44(uStack_9c,uStack_a0);
  puStack_90[2] = CONCAT44(uStack_b4,uStack_b8);
  puStack_90[3] = CONCAT44(uStack_ac,uStack_b0);
  *puStack_90 = CONCAT44(uStack_c4,uStack_c8);
  puStack_90[1] = CONCAT44(uStack_bc,uStack_c0);
  return;
}

