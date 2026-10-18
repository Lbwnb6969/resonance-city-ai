// VA 0x1406d1100, PDB extent 8 bytes
// usdl::video::WindowBuilder::resizable
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::WindowBuilder::resizable
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 8 */

longlong pdb_1406d1100(longlong param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x20;
  return param_1;
}

