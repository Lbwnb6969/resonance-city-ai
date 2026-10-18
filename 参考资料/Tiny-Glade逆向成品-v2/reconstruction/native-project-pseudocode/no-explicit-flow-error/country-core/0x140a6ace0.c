// VA 0x140a6ace0, PDB extent 20 bytes
// country_core::resources::window::WindowSize::aspect_ratio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::window::WindowSize::aspect_ratio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
   Extent: 20 */

float pdb_140a6ace0(uint *param_1)

{
  return (float)*param_1 / (float)param_1[1];
}

