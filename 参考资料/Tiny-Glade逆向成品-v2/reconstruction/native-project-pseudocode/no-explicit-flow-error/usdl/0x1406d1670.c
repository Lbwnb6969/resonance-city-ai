// VA 0x1406d1670, PDB extent 175 bytes
// usdl::video::Window::window_handle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::Window::window_handle
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 175 */

undefined4 * pdb_1406d1670(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  int iStack_5c;
  longlong alStack_58 [2];
  undefined8 uStack_48;
  
  uVar1 = *param_2;
  pdb_14100b390(alStack_58);
  uStack_5e = 0;
  uStack_60 = 0;
  iStack_5c = 0;
  pdb_14100b3b0(&uStack_60);
  iVar2 = pdb_14100b400(uVar1,&uStack_60);
  if (iVar2 == 0) {
    uStack_60._0_1_ = 1;
LAB_1406d16d8:
    *(byte *)(param_1 + 1) = (byte)uStack_60 & 1;
  }
  else {
    if (iStack_5c == 1) {
      if (alStack_58[0] != 0) {
        *param_1 = 8;
        *(longlong *)(param_1 + 2) = alStack_58[0];
        *(undefined8 *)(param_1 + 4) = uStack_48;
        return param_1;
      }
    }
    else if (iStack_5c == 8) {
      if (alStack_58[0] != 0) {
        *param_1 = 9;
        *(longlong *)(param_1 + 2) = alStack_58[0];
        return param_1;
      }
    }
    else if (iStack_5c == 0xf) {
      goto LAB_1406d16d8;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = 0xf;
  return param_1;
}

