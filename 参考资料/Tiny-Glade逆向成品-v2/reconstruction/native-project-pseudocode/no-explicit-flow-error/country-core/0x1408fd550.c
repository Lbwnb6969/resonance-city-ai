// VA 0x1408fd550, PDB extent 13 bytes
// country_core::components::drawable::impl$5::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::impl$5::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 13 */

undefined4 * pdb_1408fd550(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = 1;
  return param_1;
}

