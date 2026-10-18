// VA 0x140a61500, PDB extent 19 bytes
// country_core::resources::stairs::stairs_state::StairsState::endpoint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::endpoint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 19 */

void pdb_140a61500(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return;
}

