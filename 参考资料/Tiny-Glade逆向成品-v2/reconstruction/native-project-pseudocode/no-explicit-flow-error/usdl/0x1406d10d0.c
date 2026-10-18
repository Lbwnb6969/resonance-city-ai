// VA 0x1406d10d0, PDB extent 8 bytes
// usdl::video::WindowBuilder::vulkan
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::WindowBuilder::vulkan
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 8 */

longlong pdb_1406d10d0(longlong param_1)

{
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) | 0x10;
  return param_1;
}

