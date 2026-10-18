// VA 0x140c9dd80, PDB extent 24 bytes
// country_core::systems::ui::resources::widget_params::WidgetVolumeShape::clearing_canvas
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetVolumeShape::clearing_canvas
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 24 */

void pdb_140c9dd80(undefined1 *param_1,undefined1 param_2)

{
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 4) = 0x4302000043020000;
  *param_1 = 4;
  return;
}

