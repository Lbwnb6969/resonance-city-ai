// VA 0x1408ffdd0, PDB extent 48 bytes
// country_core::systems::ui::resources::ui_state::UiState::current_intersection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiState::current_intersection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 48 */

void pdb_1408ffdd0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 0x18) != '\0') {
    param_1[6] = *(undefined8 *)(param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    param_1[4] = *(undefined8 *)(param_2 + 0x48);
    param_1[5] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    return;
  }
  *(undefined4 *)param_1 = 2;
  return;
}

