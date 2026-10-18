// VA 0x142154df0, PDB extent 211 bytes
// system_color::ui_color_decorator::ui_color_windows_and_flags::closure$6
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::ui_color_decorator::ui_color_windows_and_flags::closure$6
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_decorator.rs
   Extent: 211 */

undefined8 *
pdb_142154df0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(8,8);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = pdb_142152670(*param_2,param_2[1],*(undefined1 *)(param_2 + 2),param_3,param_4,param_5,
                          pbVar1,uVar2);
    *(undefined8 *)pbVar1 = uVar2;
    *param_1 = 1;
    param_1[1] = pbVar1;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

