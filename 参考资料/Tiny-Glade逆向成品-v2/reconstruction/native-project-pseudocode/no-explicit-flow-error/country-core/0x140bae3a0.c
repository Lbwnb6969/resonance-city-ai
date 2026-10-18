// VA 0x140bae3a0, PDB extent 211 bytes
// country_core::systems::wall::eraser::ui_bulldozer::wall_eraser_bulldoze::closure$10
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::ui_bulldozer::wall_eraser_bulldoze::closure$10
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
   Extent: 211 */

undefined8 *
pdb_140bae3a0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(8,8);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = pdb_140ba9e00(*param_2,param_2[1],*(undefined1 *)(param_2 + 2),param_3,param_4,param_5,
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

