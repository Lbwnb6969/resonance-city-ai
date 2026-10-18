// VA 0x140a6ad10, PDB extent 7 bytes
// country_core::resources::window::WindowSize::set
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::window::WindowSize::set
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
   Extent: 7 */

void pdb_140a6ad10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

