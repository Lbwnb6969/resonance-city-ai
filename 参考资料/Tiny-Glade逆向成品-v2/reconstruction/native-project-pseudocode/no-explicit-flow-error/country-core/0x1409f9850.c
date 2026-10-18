// VA 0x1409f9850, PDB extent 26 bytes
// country_core::systems::collision::world::impl$47::as_collider_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$47::as_collider_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 26 */

longlong pdb_1409f9850(longlong *param_1)

{
  return *param_1 + (*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
}

