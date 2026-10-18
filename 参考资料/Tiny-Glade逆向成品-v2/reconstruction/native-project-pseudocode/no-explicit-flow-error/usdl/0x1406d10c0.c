// VA 0x1406d10c0, PDB extent 8 bytes
// usdl::video::WindowBuilder::hidden
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::WindowBuilder::hidden
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 8 */

longlong pdb_1406d10c0(longlong param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 8;
  return param_1;
}

