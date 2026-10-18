// VA 0x140ae4960, PDB extent 496 bytes
// country_core::resources::history::History::start_input_recording
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::start_input_recording
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 496 */

void pdb_140ae4960(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  cVar1 = pdb_140ae6da0(*param_2,&UNK_14304f470);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14304f488,0x2f,&UNK_14304f4b8);
  }
  uVar2 = pdb_140c7d380();
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x60,8);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0x40] = 0;
    pbVar3[0x41] = 0;
    pbVar3[0x42] = 0;
    pbVar3[0x43] = 0;
    pbVar3[0x44] = 0;
    pbVar3[0x45] = 0;
    pbVar3[0x46] = 0;
    pbVar3[0x47] = 0;
    pbVar3[0x48] = 0;
    pbVar3[0x49] = 0;
    pbVar3[0x4a] = 0;
    pbVar3[0x4b] = 0;
    pbVar3[0x4c] = 0;
    pbVar3[0x4d] = 0;
    pbVar3[0x4e] = 0;
    pbVar3[0x4f] = 0;
    pbVar3[0] = 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 1;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3[0x10] = 0;
    pbVar3[0x11] = 0;
    pbVar3[0x12] = 0;
    pbVar3[0x13] = 0;
    pbVar3[0x14] = 0;
    pbVar3[0x15] = 0;
    pbVar3[0x16] = 0;
    pbVar3[0x17] = 0;
    pbVar3[0x20] = 0;
    pbVar3[0x21] = 0;
    pbVar3[0x22] = 0;
    pbVar3[0x23] = 0;
    pbVar3[0x24] = 0;
    pbVar3[0x25] = 0;
    pbVar3[0x26] = 0;
    pbVar3[0x27] = 0;
    pbVar3[0x30] = 0;
    pbVar3[0x31] = 0;
    pbVar3[0x32] = 0;
    pbVar3[0x33] = 0;
    pbVar3[0x34] = 0;
    pbVar3[0x35] = 0;
    pbVar3[0x36] = 0;
    pbVar3[0x37] = 0;
    pbVar3[0x38] = 4;
    pbVar3[0x39] = 0;
    pbVar3[0x3a] = 0;
    pbVar3[0x3b] = 0;
    pbVar3[0x3c] = 0;
    pbVar3[0x3d] = 0;
    pbVar3[0x3e] = 0;
    pbVar3[0x3f] = 0;
    pbVar3[0x50] = 4;
    pbVar3[0x51] = 0;
    pbVar3[0x52] = 0;
    pbVar3[0x53] = 0;
    pbVar3[0x54] = 0;
    pbVar3[0x55] = 0;
    pbVar3[0x56] = 0;
    pbVar3[0x57] = 0;
    pbVar3[0x58] = 0;
    pbVar3[0x59] = 0;
    pbVar3[0x5a] = 0;
    pbVar3[0x5b] = 0;
    pbVar3[0x5c] = 0;
    pbVar3[0x5d] = 0;
    pbVar3[0x5e] = 0;
    pbVar3[0x5f] = 0;
    if (!SBORROW8(0,*(longlong *)(param_1 + 0x30))) {
      pdb_140990a30((undefined8 *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 8;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(byte **)(param_1 + 0x50) = pbVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x60);
}

