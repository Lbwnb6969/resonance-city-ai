// VA 0x1406d17f0, PDB extent 38 bytes
// usdl::video::Window::fullscreen_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::Window::fullscreen_state
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 38 */

uint pdb_1406d17f0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = pdb_14100aee0(*param_1);
  uVar2 = uVar1 & 1;
  if ((~uVar1 & 0x1001) == 0) {
    uVar2 = 0x1001;
  }
  return uVar2;
}

