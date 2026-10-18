// VA 0x1409010e0, PDB extent 8 bytes
// country_core::resources::walls::decorator::DecoratorDst::is_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::DecoratorDst::is_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 8 */

bool pdb_1409010e0(longlong param_1)

{
  return *(byte *)(param_1 + 0x22) < 2;
}

