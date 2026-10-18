// VA 0x140bd5990, PDB extent 8 bytes
// country_core::resources::logo_animation::LogoAnimation::finish_wait
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::logo_animation::LogoAnimation::finish_wait
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 8 */

void pdb_140bd5990(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return;
}

