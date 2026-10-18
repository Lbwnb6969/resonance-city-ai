// VA 0x1409012e0, PDB extent 12 bytes
// country_core::resources::walls::decorator::DecoratorType::can_change_seed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorType::can_change_seed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 12 */

bool pdb_1409012e0(uint param_1)

{
  return (0x27U >> (param_1 & 0x1f) & 1) != 0;
}

