// Matched PDB: country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y
// VA 0x140930190, PDB extent 68 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y
   Extent: 68 bytes. No whole-program auto-analysis. */

bool pdb_140930190(longlong param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x29f) == '\x01') && (*(uint *)(param_1 + 600) < 2)) {
    bVar1 = 0.0 < *(float *)(param_1 + 0x294);
    if (bVar1) {
      pdb_14092ff30();
    }
    return bVar1;
  }
  return false;
}

