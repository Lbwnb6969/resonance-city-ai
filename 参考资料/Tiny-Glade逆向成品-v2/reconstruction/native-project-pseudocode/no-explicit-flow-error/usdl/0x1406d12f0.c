// VA 0x1406d12f0, PDB extent 59 bytes
// usdl::video::VideoSubsystem::num_video_displays
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::num_video_displays
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 59 */

undefined8 * pdb_1406d12f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = pdb_14100b0b0();
  if (-1 < iVar1) {
    *(int *)(param_1 + 1) = iVar1;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pdb_1406d0840(param_1);
  return param_1;
}

