// VA 0x1409012b0, PDB extent 15 bytes
// country_core::resources::walls::decorator::DecoratorInfo::try_dst_as_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorInfo::try_dst_as_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 15 */

longlong pdb_1409012b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(byte *)(param_1 + 0x32) < 2) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}

