// VA 0x140a34d30, PDB extent 552 bytes
// country_core::systems::camera_rig::MainCamera::match_free_camera_to_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::MainCamera::match_free_camera_to_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 552 */

void pdb_140a34d30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
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
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_118 = 0;
  uStack_110 = 8;
  uStack_108 = 0;
  uStack_50 = *(undefined4 *)(param_1 + 0x140);
  uStack_58 = *(undefined8 *)(param_1 + 0x138);
  pdb_141a63d70(&uStack_d0,&uStack_118,&uStack_58);
  pdb_141a638b0(&uStack_58,&uStack_d0,*(undefined4 *)(param_1 + 0x154),
                *(undefined4 *)(param_1 + 0x150));
  uStack_e8 = _DAT_142e37950;
  uStack_e0 = 0x3f800000;
  uStack_f8 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  pdb_141a63c40(&uStack_d0,&uStack_58,&uStack_118);
  _uStack_b8 = CONCAT44(_UNK_14337fab4,_DAT_14337fab0);
  uStack_b0 = _UNK_14337fab8;
  uStack_ac = _DAT_14337fabc;
  uStack_a8 = _UNK_14337fac0;
  uStack_a4 = _UNK_14337fac4;
  uStack_a0 = _UNK_14337fac8;
  uStack_48 = _UNK_14337fac0;
  uStack_44 = _UNK_14337fac4;
  uStack_40 = _UNK_14337fac8;
  uStack_58._0_4_ = _DAT_14337fab0;
  uStack_58._4_4_ = _UNK_14337fab4;
  uStack_50 = _UNK_14337fab8;
  uStack_4c = _DAT_14337fabc;
  if (CONCAT44(uStack_bc,uStack_c0) != 0) {
    puVar2 = (undefined8 *)CONCAT44(uStack_c4,uStack_c8);
    puVar1 = puVar2 + CONCAT44(uStack_bc,uStack_c0) * 2;
    do {
      (**(code **)(puVar2[1] + 0x30))(&uStack_118,*puVar2,&uStack_58,0);
      puVar2 = puVar2 + 2;
      uStack_50 = (undefined4)uStack_110;
      uStack_4c = uStack_110._4_4_;
      uStack_48 = (undefined4)uStack_108;
      uStack_44 = uStack_108._4_4_;
      uStack_40 = uStack_100;
      uStack_58._0_4_ = (undefined4)uStack_118;
      uStack_58._4_4_ = uStack_118._4_4_;
    } while (puVar2 != puVar1);
  }
  uStack_a8 = uStack_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  uStack_98 = uStack_d0;
  uStack_94 = uStack_cc;
  uStack_90 = uStack_c8;
  uStack_8c = uStack_c4;
  uStack_88 = uStack_c0;
  uStack_84 = uStack_bc;
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uStack_68 = CONCAT44(uStack_9c,uStack_40);
  puStack_60 = (undefined8 *)(param_1 + 0x270);
  pdb_140498c40(puStack_60);
  puStack_60[6] = uStack_68;
  puStack_60[4] = CONCAT44(uStack_74,uStack_78);
  puStack_60[5] = CONCAT44(uStack_6c,uStack_70);
  puStack_60[2] = CONCAT44(uStack_84,uStack_88);
  puStack_60[3] = CONCAT44(uStack_7c,uStack_80);
  *puStack_60 = CONCAT44(uStack_94,uStack_98);
  puStack_60[1] = CONCAT44(uStack_8c,uStack_90);
  return;
}

