// VA 0x140901c40, PDB extent 10 bytes
// country_core::resources::walls::decorator::impl$125::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$125::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 10 */

undefined1 * pdb_140901c40(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[0x17] = 5;
  return param_1;
}

