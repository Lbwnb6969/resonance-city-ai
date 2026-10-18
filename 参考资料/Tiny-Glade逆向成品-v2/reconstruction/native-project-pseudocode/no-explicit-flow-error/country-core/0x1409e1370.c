// VA 0x1409e1370, PDB extent 31 bytes
// country_core::resources::roofs::roof_tile_sim::RoofTileSimulation::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_tile_sim.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_tile_sim::RoofTileSimulation::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_tile_sim.rs
   Extent: 31 */

undefined4 * pdb_1409e1370(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  return param_1;
}

