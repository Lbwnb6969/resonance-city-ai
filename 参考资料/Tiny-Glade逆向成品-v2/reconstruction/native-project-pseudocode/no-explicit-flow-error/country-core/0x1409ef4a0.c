// VA 0x1409ef4a0, PDB extent 252 bytes
// country_core::systems::collision::world::RaycastWorld::legacy_raycast_w_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::legacy_raycast_w_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 252 */

undefined8 * pdb_1409ef4a0(undefined8 *param_1)

{
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pdb_1409f94a0(&uStack_48);
  if (iStack_14 == 2) {
    *(undefined4 *)(param_1 + 6) = 2;
    return param_1;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_40;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined8 *)((longlong)param_1 + 0x24) = uStack_24;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_1c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_30;
  param_1[6] = CONCAT44(uStack_10,iStack_14);
  param_1[7] = CONCAT44(uStack_4c,uStack_c);
  return param_1;
}

