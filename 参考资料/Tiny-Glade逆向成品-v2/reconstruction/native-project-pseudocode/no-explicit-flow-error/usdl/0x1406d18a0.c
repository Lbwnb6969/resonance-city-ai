// VA 0x1406d18a0, PDB extent 63 bytes
// usdl::video::Window::vulkan_drawable_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: usdl::video::Window::vulkan_drawable_size
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 63 */

int pdb_1406d18a0(undefined8 *param_1)

{
  int aiStack_8 [2];
  
  aiStack_8[0] = 0;
  aiStack_8[1] = 0;
  pdb_14100b330(*param_1,aiStack_8,aiStack_8 + 1);
  if (aiStack_8[0] < 1) {
    aiStack_8[0] = 0;
  }
  return aiStack_8[0];
}

