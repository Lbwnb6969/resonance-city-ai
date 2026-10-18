// VA 0x1409c5d10, PDB extent 367 bytes
// tabloid::Publisher::subscribe<country_core::utils::dirty_tiles::DirtyTiles>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tabloid::Publisher::subscribe<country_core::utils::dirty_tiles::DirtyTiles>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 367 */

void pdb_1409c5d10(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte *pbVar3;
  int iStack_6f;
  undefined3 uStack_6b;
  int iStack_48;
  
  iStack_48 = iStack_6f << 8;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x28,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar3[0x20] = 0;
  pbVar3[0x21] = 0;
  pbVar3[0x22] = 0;
  pbVar3[0x23] = 0;
  pbVar3[0x24] = 0;
  pbVar3[0x25] = 0;
  pbVar3[0x26] = 0;
  pbVar3[0x27] = 0;
  *(int *)(pbVar3 + 0x10) = iStack_48;
  *(uint *)(pbVar3 + 0x14) = CONCAT31(uStack_6b,(char)((uint)iStack_6f >> 0x18));
  pbVar3[0x18] = 0;
  pbVar3[0x19] = 0;
  pbVar3[0x1a] = 0;
  pbVar3[0x1b] = 0;
  pbVar3[0x1c] = 0;
  pbVar3[0x1d] = 0;
  pbVar3[0x1e] = 0;
  pbVar3[0x1f] = 0;
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
  LOCK();
  lVar1 = *(longlong *)pbVar3;
  *(longlong *)pbVar3 = *(longlong *)pbVar3 + 1;
  UNLOCK();
  if (*(longlong *)pbVar3 != 0 && SCARRY8(lVar1,1) == *(longlong *)pbVar3 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 == *(longlong *)(param_1 + 0x18)) {
      pdb_142d7e8a0(param_1 + 0x18);
    }
    *(byte **)(*(longlong *)(param_1 + 0x20) + lVar1 * 8) = pbVar3;
    *(longlong *)(param_1 + 0x28) = lVar1 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

