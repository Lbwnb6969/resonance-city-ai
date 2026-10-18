// VA 0x1409ed440, PDB extent 194 bytes
// country_core::systems::collision::world::RaycastMesh::raycast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::RaycastMesh::raycast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 194 */

longlong pdb_1409ed440(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int aiStack_30 [6];
  
  uStack_68 = param_3[2];
  uStack_60 = param_3[3];
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_58 = *param_3;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x38);
  uStack_48 = *param_4;
  uStack_40 = param_4[1];
  uStack_38 = param_4[2];
  (**(code **)(lVar1 + 0x38))
            (aiStack_30,
             (*(longlong *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) +
             *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x10,&uStack_68,&uStack_48,
             param_5,1);
  if (aiStack_30[0] == 4) {
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  else {
    pdb_1409f8a10(param_1,param_4,aiStack_30,&uStack_68,param_2);
  }
  return param_1;
}

