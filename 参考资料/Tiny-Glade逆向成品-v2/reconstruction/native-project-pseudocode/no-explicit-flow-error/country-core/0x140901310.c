// VA 0x140901310, PDB extent 12 bytes
// country_core::resources::walls::decorator::DecoratorType::can_place_on_stair_top
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorType::can_place_on_stair_top
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 12 */

undefined4 pdb_140901310(int *param_1)

{
  return CONCAT31((int3)(*param_1 - 4U >> 8),*param_1 - 4U < 3);
}

