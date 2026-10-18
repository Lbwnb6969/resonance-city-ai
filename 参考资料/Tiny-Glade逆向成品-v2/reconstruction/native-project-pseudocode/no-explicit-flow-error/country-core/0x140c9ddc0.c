// VA 0x140c9ddc0, PDB extent 74 bytes
// country_core::systems::ui::resources::widget_params::UiSounds::on_drag_start
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::UiSounds::on_drag_start
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 74 */

void pdb_140c9ddc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_2[5] = param_3[2];
  uVar1 = param_3[1];
  param_2[3] = *param_3;
  param_2[4] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  return;
}

