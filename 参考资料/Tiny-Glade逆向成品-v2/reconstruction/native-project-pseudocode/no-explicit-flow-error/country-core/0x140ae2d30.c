// VA 0x140ae2d30, PDB extent 620 bytes
// country_core::resources::history::EditType::new_height_changed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::EditType::new_height_changed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_history.rs
   Extent: 620 */

undefined8 *
pdb_140ae2d30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte **ppbVar5;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 uStack_150;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x18,8);
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(8,8);
  pbStack_58 = pbVar1;
  if (pbVar2 != (byte *)0x0) {
    pbStack_178 = (byte *)0x1;
    pbStack_170 = (byte *)0x1;
    uStack_168 = 0x8000000000000002;
    uStack_150 = 0;
    pbStack_160 = (byte *)param_2;
    uStack_158 = param_3;
    uStack_154 = param_4;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0x110,0x10);
    if (pbVar3 != (byte *)0x0) {
      ppbVar5 = &pbStack_178;
      pub_142e32760(pbVar3,ppbVar5,0x110);
      *(byte **)pbVar2 = pbVar3;
      pbVar1[0] = 1;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(byte **)(pbVar1 + 8) = pbVar2;
      pbVar1[0x10] = 1;
      pbVar1[0x11] = 0;
      pbVar1[0x12] = 0;
      pbVar1[0x13] = 0;
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbStack_160 = pbVar1 + 0x18;
      uStack_168 = 1;
      pbStack_178 = pbVar1;
      pbStack_170 = pbVar1;
      uVar4 = pdb_140c69b60(&pbStack_178);
      param_1[1] = uVar4;
      param_1[2] = ppbVar5;
      *param_1 = 7;
      return param_1;
    }
    pbStack_60 = pbVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x110);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

