// VA 0x1406d0f10, PDB extent 8 bytes
// usdl::video::WindowBuilder::allow_highdpi
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::WindowBuilder::allow_highdpi
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 8 */

longlong pdb_1406d0f10(longlong param_1)

{
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 0x20;
  return param_1;
}

