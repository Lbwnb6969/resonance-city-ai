// VA 0x1409014e0, PDB extent 11 bytes
// country_core::resources::walls::decorator::DecoratorExtraInfo::try_as_stair
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorExtraInfo::try_as_stair
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 11 */

longlong pdb_1409014e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(byte *)(param_1 + 0x17) < 2) {
    lVar1 = param_1;
  }
  return lVar1;
}

