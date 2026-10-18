// VA 0x140901350, PDB extent 8 bytes
// country_core::resources::walls::decorator::DecoratorType::is_window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorType::is_window
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 8 */

bool pdb_140901350(ulonglong param_1)

{
  return param_1 < 3;
}

