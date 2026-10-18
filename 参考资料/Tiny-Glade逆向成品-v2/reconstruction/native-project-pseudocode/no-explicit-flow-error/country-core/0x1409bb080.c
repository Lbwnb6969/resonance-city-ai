// VA 0x1409bb080, PDB extent 35 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::parent_to_widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::parent_to_widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 35 */

undefined8 pdb_1409bb080(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x84) = 1;
  pub_142e32760(param_1,param_2,0x90);
  return param_1;
}

