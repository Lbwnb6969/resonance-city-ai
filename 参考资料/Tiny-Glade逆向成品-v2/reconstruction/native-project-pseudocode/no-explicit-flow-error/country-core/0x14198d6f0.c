// VA 0x14198d6f0, PDB extent 15 bytes
// country_core::resources::history::EditType::Garden::constructor$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::EditType::Garden::constructor$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 15 */

undefined8 * pdb_14198d6f0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = 6;
  return param_1;
}

