// VA 0x14090e410, PDB extent 39 bytes
// country_core::asset_libraries::ssbo_library::BufferState::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::asset_libraries::ssbo_library::BufferState::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 39 */

void pdb_14090e410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

