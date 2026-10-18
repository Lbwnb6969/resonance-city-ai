// VA 0x1409e2e30, PDB extent 46 bytes
// country_core::resources::time::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::time::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time.rs
   Extent: 46 */

undefined8 * pdb_1409e2e30(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}

