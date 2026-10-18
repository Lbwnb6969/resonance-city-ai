// VA 0x140901c70, PDB extent 12 bytes
// country_core::resources::walls::decorator::impl$127::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$127::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 12 */

undefined4 * pdb_140901c70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 0x17) = 7;
  return param_1;
}

