// VA 0x1406d1250, PDB extent 81 bytes
// usdl::video::VideoSubsystem::display_bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::display_bounds
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 81 */

undefined8 * pdb_1406d1250(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = 0;
  uStack_10 = 0;
  iVar1 = pdb_14100b000(param_3,&uStack_18);
  if (iVar1 != 0) {
    pdb_1406d0840(param_1);
    return param_1;
  }
  param_1[1] = uStack_18;
  param_1[2] = uStack_10;
  *param_1 = 0x8000000000000000;
  return param_1;
}

