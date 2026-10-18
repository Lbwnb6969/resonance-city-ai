// VA 0x1409cb300, PDB extent 8 bytes
// country_core::systems::ui::resources::widget_params::UiFocus::is_none
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::widget_params::UiFocus::is_none
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 8 */

bool pdb_1409cb300(longlong *param_1)

{
  return *param_1 == 0;
}

