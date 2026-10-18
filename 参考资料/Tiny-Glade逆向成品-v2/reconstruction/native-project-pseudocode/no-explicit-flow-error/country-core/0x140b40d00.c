// VA 0x140b40d00, PDB extent 22 bytes
// country_core::resources::placement_data::PlacementDataSsbo::position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/placement_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::placement_data::PlacementDataSsbo::position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/placement_data.rs
   Extent: 22 */

undefined8 * pdb_140b40d00(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}

