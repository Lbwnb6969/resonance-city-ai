// VA 0x140c9dc70, PDB extent 51 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::allow_negative_distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::allow_negative_distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 51 */

undefined8 pdb_140c9dc70(undefined8 param_1,longlong param_2,char param_3)

{
  *(byte *)(param_2 + 0xa9) = param_3 << 2 | *(byte *)(param_2 + 0xa9) & 0xfb;
  pub_142e32760(param_1,param_2,0xb0);
  return param_1;
}

