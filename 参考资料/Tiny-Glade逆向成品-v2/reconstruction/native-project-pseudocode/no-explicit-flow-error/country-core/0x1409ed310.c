// VA 0x1409ed310, PDB extent 33 bytes
// country_core::systems::collision::world::Raycasting::intersects_any
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::Raycasting::intersects_any
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 33 */

void pdb_1409ed310(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  pdb_1409ef5a0(*param_1,param_2,param_1[4],param_3,param_4);
  return;
}

