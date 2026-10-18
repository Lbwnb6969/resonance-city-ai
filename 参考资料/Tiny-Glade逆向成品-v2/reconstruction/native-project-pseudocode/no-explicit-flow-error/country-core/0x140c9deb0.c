// VA 0x140c9deb0, PDB extent 39 bytes
// country_core::systems::ui::resources::widget_params::UiSounds::boop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::UiSounds::boop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/widget_params.rs
   Extent: 39 */

undefined4 * pdb_140c9deb0(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[6] = 2;
  param_1[0xc] = 3;
  param_1[0x12] = 3;
  return param_1;
}

