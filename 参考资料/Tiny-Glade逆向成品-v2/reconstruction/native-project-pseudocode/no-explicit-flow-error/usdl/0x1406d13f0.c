// VA 0x1406d13f0, PDB extent 90 bytes
// usdl::video::VideoSubsystem::desktop_display_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::desktop_display_mode
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 90 */

undefined8 * pdb_1406d13f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  iVar1 = pdb_14100b270(param_3,&uStack_28);
  if (iVar1 != 0) {
    pdb_1406d0840(param_1);
    return param_1;
  }
  param_1[1] = uStack_28;
  param_1[2] = uStack_20;
  *param_1 = 0x8000000000000000;
  return param_1;
}

