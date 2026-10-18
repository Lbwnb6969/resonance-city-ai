// VA 0x140934cc0, PDB extent 16 bytes
// country_core::resources::critters::sheep::Sheep::being_petted
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::critters::sheep::Sheep::being_petted
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 16 */

bool pdb_140934cc0(longlong param_1)

{
  return _DAT_142e37848 < *(float *)(param_1 + 0x58);
}

