// VA 0x1410b69d0, PDB extent 211 bytes
// system_color::ui_color_gates::ui_color_gates::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::ui_color_gates::ui_color_gates::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
   Extent: 211 */

undefined8 *
pdb_1410b69d0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(8,8);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = pdb_142152670(*param_2,param_2[1],1,param_3,param_4,param_5,pbVar1,uVar2);
    *(undefined8 *)pbVar1 = uVar2;
    *param_1 = 1;
    param_1[1] = pbVar1;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

