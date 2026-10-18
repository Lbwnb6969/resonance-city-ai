// VA 0x140bd5980, PDB extent 15 bytes
// country_core::resources::logo_animation::LogoAnimation::is_waiting
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::logo_animation::LogoAnimation::is_waiting
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 15 */

bool pdb_140bd5980(longlong param_1)

{
  return 0.0 < *(float *)(param_1 + 0x1c);
}

