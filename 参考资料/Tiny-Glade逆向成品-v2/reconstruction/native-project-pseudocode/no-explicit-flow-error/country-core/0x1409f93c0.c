// VA 0x1409f93c0, PDB extent 50 bytes
// country_core::systems::collision::world::Rapier::on_collider_upserted
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::Rapier::on_collider_upserted
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 50 */

void pdb_1409f93c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uStack_10;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  uStack_4 = *(undefined4 *)(param_2 + 1);
  uStack_c = *param_2;
  uStack_10 = 0;
  pdb_1409c4dd0(param_1 + 0x3cb0,&uStack_10);
  return;
}

