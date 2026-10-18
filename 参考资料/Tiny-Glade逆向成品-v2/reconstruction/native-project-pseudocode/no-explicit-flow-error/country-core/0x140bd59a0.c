// VA 0x140bd59a0, PDB extent 16 bytes
// country_core::resources::logo_animation::LogoAnimation::is_finished
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::logo_animation::LogoAnimation::is_finished
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 16 */

bool pdb_140bd59a0(longlong param_1)

{
  return _DAT_142e36f28 <= *(float *)(param_1 + 0x20);
}

