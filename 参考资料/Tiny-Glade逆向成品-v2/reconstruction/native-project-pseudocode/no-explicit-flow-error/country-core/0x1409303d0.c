// VA 0x1409303d0, PDB extent 36 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::is_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::is_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 36 */

void pdb_1409303d0(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 600) != 0) {
    *param_1 = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x264);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0x25c);
  *(undefined8 *)(param_1 + 3) = uVar1;
  *param_1 = 1;
  return;
}

