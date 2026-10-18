// VA 0x140a60230, PDB extent 82 bytes
// country_core::resources::stairs::stairs_state::StairsState::try_set_endpoint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::try_set_endpoint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 82 */

void pdb_140a60230(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_2 + 2);
  lVar2 = pdb_140936c10(param_1 + 0x28,&uStack_14);
  if ((lVar2 != 0) && (1 < *(ulonglong *)(lVar2 + 0x10))) {
    *(undefined8 *)(param_1 + 0x10) = 3;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}

