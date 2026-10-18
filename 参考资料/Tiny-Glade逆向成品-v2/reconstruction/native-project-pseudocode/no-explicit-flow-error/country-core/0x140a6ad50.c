// VA 0x140a6ad50, PDB extent 16 bytes
// country_core::resources::window::WindowSize::as_vec2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::window::WindowSize::as_vec2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
   Extent: 16 */

undefined4 pdb_140a6ad50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

