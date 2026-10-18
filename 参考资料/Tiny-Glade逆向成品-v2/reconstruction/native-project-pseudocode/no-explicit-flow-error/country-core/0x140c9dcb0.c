// VA 0x140c9dcb0, PDB extent 101 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 101 */

undefined8 * pdb_140c9dcb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[0x13] = param_2[2];
  param_1[0x14] = uVar3;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  uVar1 = param_3[1];
  param_1[0xf] = *param_3;
  param_1[0x10] = uVar1;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined4 *)(param_1 + 9) = 3;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x101;
  return param_1;
}

