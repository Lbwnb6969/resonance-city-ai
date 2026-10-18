// VA 0x141a5eef0, PDB extent 20 bytes
// country_core::systems::collision::world::impl$31::to_rapier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$31::to_rapier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 20 */

undefined8 * pdb_141a5eef0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}

