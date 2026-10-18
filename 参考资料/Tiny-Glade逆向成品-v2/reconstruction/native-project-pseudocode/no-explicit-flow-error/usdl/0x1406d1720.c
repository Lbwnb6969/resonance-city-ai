// VA 0x1406d1720, PDB extent 133 bytes
// usdl::video::Window::display_handle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::Window::display_handle
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 133 */

undefined4 * pdb_1406d1720(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  int iStack_5c;
  undefined1 auStack_58 [64];
  
  uVar1 = *param_2;
  pdb_14100b390(auStack_58);
  uStack_5e = 0;
  uStack_60 = 0;
  iStack_5c = 0;
  pdb_14100b3b0(&uStack_60);
  iVar2 = pdb_14100b400(uVar1,&uStack_60);
  if (iVar2 == 0) {
    uStack_60._0_1_ = 1;
LAB_1406d1788:
    *(byte *)(param_1 + 1) = (byte)uStack_60 & 1;
  }
  else {
    uVar3 = 8;
    if ((iStack_5c == 1) || (iStack_5c == 8)) goto LAB_1406d1798;
    if (iStack_5c == 0xf) {
      goto LAB_1406d1788;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar3 = 0xc;
LAB_1406d1798:
  *param_1 = uVar3;
  return param_1;
}

