// VA 0x1409bb050, PDB extent 40 bytes
// country_core::systems::ui::signifiers::SignifierEntityBuilder::minimum_lifespan
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::SignifierEntityBuilder::minimum_lifespan
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 40 */

undefined8 pdb_1409bb050(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_2 + 0x4c) = param_3;
  pub_142e32760(param_1,param_2,0x90);
  return param_1;
}

