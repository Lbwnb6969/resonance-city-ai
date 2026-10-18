// VA 0x140bc10b0, PDB extent 118 bytes
// country_core::systems::wall::structure_outline::OutlineWallCmd::single
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::OutlineWallCmd::single
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 118 */

undefined8 *
pdb_140bc10b0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  byte *pbVar1;
  
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x10,8);
  if (pbVar1 != (byte *)0x0) {
    *(undefined8 *)pbVar1 = param_2;
    pbVar1[8] = 0;
    pbVar1[9] = 0;
    pbVar1[10] = 0x80;
    pbVar1[0xb] = 0x3f;
    *param_1 = 1;
    param_1[1] = pbVar1;
    param_1[2] = 1;
    *(undefined1 *)((longlong)param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 3) = param_4;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x10);
}

