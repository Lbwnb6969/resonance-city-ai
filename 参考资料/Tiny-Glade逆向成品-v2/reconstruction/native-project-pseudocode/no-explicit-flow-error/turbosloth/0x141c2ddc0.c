// VA 0x141c2ddc0, PDB extent 20 bytes
// turbosloth::store::missing_asset_error
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f37112) */
/* Matched PDB project procedure: turbosloth::store::missing_asset_error
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 20 */

byte * pdb_141c2ddc0(void)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x2b,1);
  if (pbVar2 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x2b);
    pcVar1 = (code *)swi(3);
    pbVar2 = (byte *)(*pcVar1)();
    return pbVar2;
  }
  pub_142e32760(pbVar2,&UNK_14339eeb8,0x2b);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x18,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pbVar3[0] = 0x2b;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  *(byte **)(pbVar3 + 8) = pbVar2;
  pbVar3[0x10] = 0x2b;
  pbVar3[0x11] = 0;
  pbVar3[0x12] = 0;
  pbVar3[0x13] = 0;
  pbVar3[0x14] = 0;
  pbVar3[0x15] = 0;
  pbVar3[0x16] = 0;
  pbVar3[0x17] = 0;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x18,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *(byte **)pbVar2 = pbVar3;
  *(undefined **)(pbVar2 + 8) = &UNK_143241350;
  pbVar2[0x10] = 0;
  return pbVar2 + 1;
}

