// VA 0x1409ed410, PDB extent 23 bytes
// country_core::systems::collision::world::RaycastMesh::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::RaycastMesh::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 23 */

void pdb_1409ed410(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1[3] = param_2;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3[2];
  return;
}

