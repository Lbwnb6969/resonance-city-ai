// VA 0x140c25f40, PDB extent 63 bytes
// country_core::resources::clutter_registry::ClutterRegistry::set_placeholder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::set_placeholder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 63 */

void pdb_140c25f40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  param_1[4] = param_2;
  param_1[5] = &UNK_14306ae60;
  param_1[6] = 0x12;
  param_1[7] = &UNK_14306ae72;
  param_1[8] = 0x16;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0x203;
  return;
}

