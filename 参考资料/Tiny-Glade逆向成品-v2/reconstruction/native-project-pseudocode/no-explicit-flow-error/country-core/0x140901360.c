// VA 0x140901360, PDB extent 25 bytes
// country_core::resources::walls::decorator::StairMaterial::has_colorable_railings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::StairMaterial::has_colorable_railings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 25 */

bool pdb_140901360(char param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = param_2 == 3;
  if (param_1 != '\0') {
    bVar1 = 1 < param_2;
  }
  return bVar1;
}

