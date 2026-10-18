// VA 0x14092f880, PDB extent 40 bytes
// country_core::resources::walls::public_wall_state::PublicWallState::flat_roof_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::public_wall_state::PublicWallState::flat_roof_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/public_wall_state.rs
   Extent: 40 */

ulonglong pdb_14092f880(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    return (ulonglong)(uint)(*(float *)(param_1 + 0x10c) + _DAT_142e3c604);
  }
  pdb_142d8e040();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

