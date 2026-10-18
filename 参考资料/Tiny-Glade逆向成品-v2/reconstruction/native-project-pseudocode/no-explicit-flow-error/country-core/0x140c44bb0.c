// VA 0x140c44bb0, PDB extent 15 bytes
// country_core::resources::walls::decorator_subtype::DecoratorSubtype::can_be_on_corner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DecoratorSubtype::can_be_on_corner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 15 */

bool pdb_140c44bb0(byte *param_1)

{
  return (0x91008U >> (*param_1 & 0x1f) & 1) != 0;
}

