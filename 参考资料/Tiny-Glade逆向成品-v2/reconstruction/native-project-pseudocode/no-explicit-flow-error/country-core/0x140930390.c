// VA 0x140930390, PDB extent 32 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::max_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::max_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 32 */

ulonglong pdb_140930390(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    return (ulonglong)*(uint *)(param_1 + 0x10c);
  }
  pdb_142d8e040();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

