// VA 0x1409ed430, PDB extent 9 bytes
// country_core::systems::collision::world::RaycastMesh::data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::RaycastMesh::data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 9 */

longlong pdb_1409ed430(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) + 0x10;
}

