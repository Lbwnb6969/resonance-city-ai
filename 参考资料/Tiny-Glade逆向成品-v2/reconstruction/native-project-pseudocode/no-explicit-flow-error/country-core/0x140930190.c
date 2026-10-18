// VA 0x140930190, PDB extent 68 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::wooden_stone_foundation_surface_top_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 68 */

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

