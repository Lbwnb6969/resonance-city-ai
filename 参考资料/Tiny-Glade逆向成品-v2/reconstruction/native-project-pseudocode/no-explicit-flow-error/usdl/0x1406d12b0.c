// VA 0x1406d12b0, PDB extent 62 bytes
// usdl::video::VideoSubsystem::num_display_modes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::num_display_modes
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 62 */

undefined8 * pdb_1406d12b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = pdb_14100b060(param_3);
  if (-1 < iVar1) {
    *(int *)(param_1 + 1) = iVar1;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pdb_1406d0840(param_1);
  return param_1;
}

