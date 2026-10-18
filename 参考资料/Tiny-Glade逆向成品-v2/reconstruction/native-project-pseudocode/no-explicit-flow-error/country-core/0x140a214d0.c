// VA 0x140a214d0, PDB extent 79 bytes
// country_core::meta_commander::MetaCommandFence::new_pair_blocked
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::MetaCommandFence::new_pair_blocked
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 79 */

void pdb_140a214d0(void)

{
  longlong lVar1;
  code *pcVar2;
  byte *pbVar3;
  
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x18,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
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
  pbVar3[0x10] = 1;
  LOCK();
  lVar1 = *(longlong *)pbVar3;
  *(longlong *)pbVar3 = *(longlong *)pbVar3 + 1;
  UNLOCK();
  if (*(longlong *)pbVar3 != 0 && SCARRY8(lVar1,1) == *(longlong *)pbVar3 < 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

