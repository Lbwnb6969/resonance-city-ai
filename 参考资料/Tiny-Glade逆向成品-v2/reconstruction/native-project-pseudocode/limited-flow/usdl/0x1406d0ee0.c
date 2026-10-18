// VA 0x1406d0ee0, PDB extent 14 bytes
// usdl::mouse::MouseUtil::warp_mouse_in_window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::mouse::MouseUtil::warp_mouse_in_window
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/mouse.rs
   Extent: 14 */

void pdb_1406d0ee0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (_DAT_143ca3368 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100ab1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000143ca3308)(*param_2,param_3,param_4);
    return;
  }
  if (_DAT_143ca3378 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014100ab0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_143ca3370 + 0x100))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f9aba9,0x1d,&UNK_142f9abd8);
}

