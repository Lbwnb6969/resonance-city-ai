// VA 0x140a007b0, PDB extent 21 bytes
// country_core::resources::roofs::roof_animation::RoofAnimation::is_being_animated
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_animation::RoofAnimation::is_being_animated
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_animation.rs
   Extent: 21 */

byte pdb_140a007b0(float *param_1)

{
  return -(_DAT_142e36f28 != *param_1) & 1;
}

