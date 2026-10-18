// VA 0x1409f9830, PDB extent 30 bytes
// country_core::systems::collision::world::Rapier::subworlds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::Rapier::subworlds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 30 */

void pdb_1409f9830(longlong *param_1,longlong param_2)

{
  *param_1 = param_2 + 0x20;
  param_1[1] = param_2 + 0x3cb0;
  param_1[2] = 0;
  return;
}

