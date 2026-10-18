// VA 0x1409eff60, PDB extent 267 bytes
// country_core::systems::collision::world::RaycastMeshData::new_sphere
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_sphere
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 267 */

undefined8 * pdb_1409eff60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 in_XMM1_Da;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_5c = *(undefined4 *)(param_3 + 1);
  uStack_64 = (undefined4)*param_3;
  uStack_60 = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_68 = in_XMM1_Da;
  uVar1 = pdb_140bba1f0(&uStack_68);
  uStack_48 = pdb_141b3b100(in_XMM1_Da);
  pdb_140de80d0(&uStack_68,param_3);
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[4] = uStack_48;
  param_1[5] = param_2;
  param_1[10] = CONCAT44(uStack_64,uStack_68);
  param_1[0xb] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xc] = uStack_58;
  param_1[0xd] = uStack_50;
  param_1[0xe] = uVar1;
  return param_1;
}

