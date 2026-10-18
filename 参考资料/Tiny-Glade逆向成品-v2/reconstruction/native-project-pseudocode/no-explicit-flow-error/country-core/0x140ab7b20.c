// VA 0x140ab7b20, PDB extent 367 bytes
// country_core::systems::camera_rig::walk::WalkCamera::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::walk::WalkCamera::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
   Extent: 367 */

undefined8 * pdb_140ab7b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x8;
  lStack_80 = 0;
  uStack_58 = _DAT_142e378e0;
  uStack_50 = 0;
  pdb_141a63d70(&uStack_b0,&uStack_90,&uStack_58);
  pdb_141a638b0(&uStack_90,&uStack_b0,0,0);
  _uStack_78 = CONCAT44(_UNK_14337fab4,_DAT_14337fab0);
  uStack_70 = _UNK_14337fab8;
  uStack_6c = _DAT_14337fabc;
  uStack_68 = _UNK_14337fac0;
  uStack_64 = _UNK_14337fac4;
  uStack_60 = _UNK_14337fac8;
  uStack_48 = _UNK_14337fac0;
  uStack_44 = _UNK_14337fac4;
  uStack_40 = _UNK_14337fac8;
  uStack_58 = CONCAT44(_UNK_14337fab4,_DAT_14337fab0);
  uStack_50 = _UNK_14337fab8;
  uStack_4c = _DAT_14337fabc;
  if (lStack_80 != 0) {
    puVar1 = puStack_88 + lStack_80 * 2;
    puVar2 = puStack_88;
    do {
      (**(code **)(puVar2[1] + 0x30))(&uStack_b0,*puVar2,&uStack_58,0);
      puVar2 = puVar2 + 2;
      uStack_50 = uStack_a8;
      uStack_4c = uStack_a4;
      uStack_48 = uStack_a0;
      uStack_44 = uStack_9c;
      uStack_40 = uStack_98;
      uStack_58 = CONCAT44(uStack_ac,uStack_b0);
    } while (puVar2 != puVar1);
  }
  param_1[6] = CONCAT44(uStack_5c,uStack_40);
  param_1[4] = CONCAT44(uStack_4c,uStack_50);
  param_1[5] = CONCAT44(uStack_44,uStack_48);
  param_1[2] = lStack_80;
  param_1[3] = uStack_58;
  *param_1 = uStack_90;
  param_1[1] = puStack_88;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 7) = 0x11;
  return param_1;
}

