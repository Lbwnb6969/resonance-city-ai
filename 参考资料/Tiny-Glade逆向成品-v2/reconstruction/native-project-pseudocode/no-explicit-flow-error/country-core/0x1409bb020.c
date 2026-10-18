// VA 0x1409bb020, PDB extent 37 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::animation_easing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::animation_easing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 37 */

undefined8 pdb_1409bb020(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x60) = param_3;
  *(undefined4 *)(param_2 + 100) = param_4;
  pub_142e32760(param_1,param_2,0x90);
  return param_1;
}

