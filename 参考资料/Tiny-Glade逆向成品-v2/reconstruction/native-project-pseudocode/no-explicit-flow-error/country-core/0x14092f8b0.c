// VA 0x14092f8b0, PDB extent 32 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::max_y_gable
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::max_y_gable
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 32 */

ulonglong pdb_14092f8b0(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x110) != '\0') {
    return (ulonglong)*(uint *)(param_1 + 0x114);
  }
  pdb_142d8e000();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

