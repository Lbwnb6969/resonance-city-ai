// VA 0x140901300, PDB extent 7 bytes
// country_core::resources::walls::decorator::DecoratorType::can_place_on_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorType::can_place_on_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 7 */

bool pdb_140901300(uint *param_1)

{
  return 3 < *param_1;
}

