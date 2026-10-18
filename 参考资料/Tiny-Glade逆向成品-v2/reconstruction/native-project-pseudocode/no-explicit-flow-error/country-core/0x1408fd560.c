// VA 0x1408fd560, PDB extent 14 bytes
// country_core::components::drawable::impl$2::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::impl$2::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 14 */

undefined4 * pdb_1408fd560(undefined4 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = 0;
  return param_1;
}

