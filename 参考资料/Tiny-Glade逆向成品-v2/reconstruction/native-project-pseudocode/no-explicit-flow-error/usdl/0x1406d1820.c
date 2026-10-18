// VA 0x1406d1820, PDB extent 113 bytes
// usdl::video::Window::set_display_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::Window::set_display_mode
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 113 */

undefined8 * pdb_1406d1820(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined8 uStack_10;
  
  piVar2 = &iStack_20;
  if (*param_3 == 1) {
    iStack_20 = param_3[1];
    iStack_1c = param_3[2];
    iStack_18 = param_3[3];
    iStack_14 = param_3[4];
    uStack_10 = 0;
  }
  else {
    piVar2 = (int *)0x0;
  }
  iVar1 = pdb_14100b160(*param_2,piVar2,param_3,param_4,*param_3 == 1);
  if (iVar1 != 0) {
    pdb_1406d0840(param_1);
    return param_1;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}

