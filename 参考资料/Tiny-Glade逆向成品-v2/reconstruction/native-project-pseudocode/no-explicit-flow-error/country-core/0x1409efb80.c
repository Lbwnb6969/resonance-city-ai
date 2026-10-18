// VA 0x1409efb80, PDB extent 57 bytes
// country_core::systems::collision::world::RaycastWorld::raycast_simple_exclude_wall_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::raycast_simple_exclude_wall_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 57 */

undefined8
pdb_1409efb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  pdb_1409f9030(param_1,param_2,param_3,param_6,param_7,param_4,param_5);
  return param_1;
}

