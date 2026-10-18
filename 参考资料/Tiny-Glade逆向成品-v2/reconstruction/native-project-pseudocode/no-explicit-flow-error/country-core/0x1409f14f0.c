// VA 0x1409f14f0, PDB extent 14 bytes
// country_core::systems::collision::world::SubworldColliderHandle::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::SubworldColliderHandle::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 14 */

undefined4 *
pdb_1409f14f0(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}

