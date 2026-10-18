// VA 0x140c9de60, PDB extent 70 bytes
// country_core::systems::ui::resources::widget_params::UiSounds::on_drag_release
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::UiSounds::on_drag_release
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 70 */

void pdb_140c9de60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_2[8] = param_3[2];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar9;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return;
}

