// VA 0x1408ff9a0, PDB extent 61 bytes
// country_core::systems::ui::resources::ui_state::UiWidgetContext::intersecting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiWidgetContext::intersecting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 61 */

void pdb_1408ff9a0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *param_2;
  if ((*(char *)(lVar1 + 0x18) != '\0') && (*(longlong *)(lVar1 + 0x38) == param_2[1])) {
    param_1[6] = *(undefined8 *)(lVar1 + 0x58);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
    uVar6 = *(undefined8 *)(lVar1 + 0x50);
    param_1[4] = *(undefined8 *)(lVar1 + 0x48);
    param_1[5] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    return;
  }
  *(undefined4 *)param_1 = 2;
  return;
}

