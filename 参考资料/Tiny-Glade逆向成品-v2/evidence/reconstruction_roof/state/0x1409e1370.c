// Matched PDB: country_core::resources::roofs::roof_tile_sim::RoofTileSimulation::new
// VA 0x1409e1370, PDB extent 31 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::roofs::roof_tile_sim::RoofTileSimulation::new
   Extent: 31 bytes. No whole-program auto-analysis. */

undefined4 * pdb_1409e1370(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  return param_1;
}

