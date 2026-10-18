// VA 0x14092f8d0, PDB extent 44 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::is_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::is_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 44 */

void pdb_14092f8d0(uint *param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_2 + 600) == 1;
  if (bVar2) {
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 0x26c);
    uVar1 = *(undefined8 *)(param_2 + 0x264);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0x25c);
    *(undefined8 *)(param_1 + 3) = uVar1;
  }
  *param_1 = (uint)bVar2;
  return;
}

