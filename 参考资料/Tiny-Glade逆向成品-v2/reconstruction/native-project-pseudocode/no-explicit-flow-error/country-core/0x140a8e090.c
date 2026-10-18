// VA 0x140a8e090, PDB extent 34 bytes
// country_core::resources::cursor_terrain_raycast::CursorTerrainRaycast::position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/cursor_terrain_raycast.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::cursor_terrain_raycast::CursorTerrainRaycast::position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/cursor_terrain_raycast.rs
   Extent: 34 */

void pdb_140a8e090(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*param_2 != '\0') {
    pcVar1 = param_2 + 4;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(pcVar1 + 8);
  *param_1 = *(undefined8 *)pcVar1;
  return;
}

