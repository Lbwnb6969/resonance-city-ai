// VA 0x140a6ad20, PDB extent 34 bytes
// country_core::resources::window::WindowSize::as_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::window::WindowSize::as_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/window.rs
   Extent: 34 */

uint pdb_140a6ad20(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (0xfffe < *param_1) {
    uVar1 = 0xffff;
  }
  uVar2 = 0xffff;
  if (param_1[1] < 0xffff) {
    uVar2 = param_1[1];
  }
  return uVar2 << 0x10 | uVar1;
}

