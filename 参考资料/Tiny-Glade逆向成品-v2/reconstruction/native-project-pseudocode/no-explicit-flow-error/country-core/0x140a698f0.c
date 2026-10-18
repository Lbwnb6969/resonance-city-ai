// VA 0x140a698f0, PDB extent 5 bytes
// country_core::systems::terrain::delayed_terrain_changed_msg::ScheduledTerrainReadback::on_terrain_modified
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/delayed_terrain_changed_msg.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::terrain::delayed_terrain_changed_msg::ScheduledTerrainReadback::on_terrain_modified
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/delayed_terrain_changed_msg.rs
   Extent: 5 */

void pdb_140a698f0(longlong *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return;
}

