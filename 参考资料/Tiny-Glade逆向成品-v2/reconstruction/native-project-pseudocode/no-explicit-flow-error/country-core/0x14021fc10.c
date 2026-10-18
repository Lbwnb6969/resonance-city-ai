// VA 0x14021fc10, PDB extent 52 bytes
// country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 52 */

void pdb_14021fc10(longlong param_1)

{
  undefined8 uStack_18;
  longlong lStack_10;
  undefined8 uStack_8;
  
  uStack_18 = *(undefined8 *)(param_1 + 8);
  lStack_10 = *(longlong *)(param_1 + 0x10) * 2;
  uStack_8 = *(undefined8 *)(param_1 + 0x50);
  pdb_1402202d0(&uStack_18);
  return;
}

