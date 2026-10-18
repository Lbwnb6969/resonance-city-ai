// VA 0x140c9dee0, PDB extent 31 bytes
// country_core::systems::ui::resources::widget_params::UiSounds::empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::UiSounds::empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 31 */

undefined4 * pdb_140c9dee0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  return param_1;
}

