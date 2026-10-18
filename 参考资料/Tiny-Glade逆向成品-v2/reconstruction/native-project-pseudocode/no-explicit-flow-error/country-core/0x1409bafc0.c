// VA 0x1409bafc0, PDB extent 39 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::set_ui_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::set_ui_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 39 */

undefined8 pdb_1409bafc0(undefined8 param_1,longlong param_2,byte param_3)

{
  *(byte *)(param_2 + 0x86) = param_3 ^ 1;
  pub_142e32760(param_1,param_2,0x90);
  return param_1;
}

