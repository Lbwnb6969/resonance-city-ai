// VA 0x1409efe30, PDB extent 290 bytes
// country_core::systems::collision::world::RaycastMeshData::new_cuboid
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_cuboid
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 290 */

undefined8 * pdb_1409efe30(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uStack_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_44 = *(undefined4 *)(param_3 + 1);
  uStack_4c = (undefined4)*param_3;
  uStack_48 = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_58 = *(undefined8 *)param_2;
  fStack_50 = param_2[2];
  pfVar2 = param_2;
  uVar1 = pdb_140bbaff0(&uStack_58);
  uStack_38 = pdb_141b3b160(*param_2 * _DAT_142e36f50,param_2[1] * _DAT_142e36f50,
                            _DAT_142e36f50 * param_2[2]);
  pdb_140de80d0(&uStack_58,param_3);
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[4] = uStack_38;
  param_1[5] = pfVar2;
  param_1[10] = uStack_58;
  param_1[0xb] = CONCAT44(uStack_4c,fStack_50);
  param_1[0xc] = CONCAT44(uStack_44,uStack_48);
  param_1[0xd] = uStack_40;
  param_1[0xe] = uVar1;
  return param_1;
}

