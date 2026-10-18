// VA 0x140ad9b00, PDB extent 148 bytes
// country_core::systems::mod_editor::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 148 */

void pdb_140ad9b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [112];
  
  uVar1 = pdb_1418f1270(param_2);
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x48,8);
  if (pbVar2 != (byte *)0x0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[0x40] = 0;
    pbVar2[0x41] = 0;
    pbVar2[0x42] = 0;
    pbVar2[0x43] = 0;
    pbVar2[0x44] = 0;
    pdb_140ed3cd0(auStack_88,pbVar2,&UNK_143356648);
    pdb_1417e46d0(auStack_f8,auStack_88,1);
    pdb_140c95fe0(uVar1,auStack_f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

