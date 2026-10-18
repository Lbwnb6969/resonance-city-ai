// VA 0x140c9dbe0, PDB extent 35 bytes
// country_core::systems::ui::resources::widget_params::WidgetParams::occlude_by_world
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::WidgetParams::occlude_by_world
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 35 */

undefined8 pdb_140c9dbe0(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + 0xa8) = param_3;
  pub_142e32760(param_1,param_2,0xb0);
  return param_1;
}

