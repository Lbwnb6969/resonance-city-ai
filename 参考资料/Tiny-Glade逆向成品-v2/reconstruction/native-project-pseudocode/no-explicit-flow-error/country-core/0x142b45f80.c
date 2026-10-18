// VA 0x142b45f80, PDB extent 242 bytes
// country_core::resources::world_raster::WorldRaster::subscribe<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::world_raster::WorldRaster::subscribe<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 242 */

byte * pdb_142b45f80(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  bool bVar8;
  int iStack_6f;
  undefined3 uStack_6b;
  int iStack_48;
  
  uVar7 = *(longlong *)(param_1 + 0x60) + 0x8000000000000001;
  uVar5 = *(longlong *)(param_1 + 0x60) >> 0x3f & uVar7;
  if (uVar5 != 0) {
    if (uVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14366da95,0xa9,&UNK_14366daf0);
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    pcVar1 = (char *)(lVar3 + 0x10);
    LOCK();
    bVar8 = *(char *)(lVar3 + 0x10) == '\0';
    if (bVar8) {
      *(char *)(lVar3 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar8) {
      pdb_142dbd1a0(pcVar1,uVar7,1000000000);
    }
    pdb_140e9a150(pcVar1);
    pbVar6 = (byte *)pdb_1409c5d10(lVar3 + 0x18);
    pdb_140e9a350();
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      pdb_142dbcef0(pcVar1,0);
    }
    return pbVar6;
  }
  iStack_48 = iStack_6f << 8;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x28,8);
  if (pbVar6 != (byte *)0x0) {
    pbVar6[0x20] = 0;
    pbVar6[0x21] = 0;
    pbVar6[0x22] = 0;
    pbVar6[0x23] = 0;
    pbVar6[0x24] = 0;
    pbVar6[0x25] = 0;
    pbVar6[0x26] = 0;
    pbVar6[0x27] = 0;
    *(int *)(pbVar6 + 0x10) = iStack_48;
    *(uint *)(pbVar6 + 0x14) = CONCAT31(uStack_6b,(char)((uint)iStack_6f >> 0x18));
    pbVar6[0x18] = 0;
    pbVar6[0x19] = 0;
    pbVar6[0x1a] = 0;
    pbVar6[0x1b] = 0;
    pbVar6[0x1c] = 0;
    pbVar6[0x1d] = 0;
    pbVar6[0x1e] = 0;
    pbVar6[0x1f] = 0;
    pbVar6[0] = 1;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    pbVar6[8] = 1;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    LOCK();
    lVar3 = *(longlong *)pbVar6;
    *(longlong *)pbVar6 = *(longlong *)pbVar6 + 1;
    UNLOCK();
    if (*(longlong *)pbVar6 == 0 || SCARRY8(lVar3,1) != *(longlong *)pbVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (lVar3 == *(longlong *)(param_1 + 0x78)) {
      pdb_142d7e8a0(param_1 + 0x78);
    }
    *(byte **)(*(longlong *)(param_1 + 0x80) + lVar3 * 8) = pbVar6;
    *(longlong *)(param_1 + 0x88) = lVar3 + 1;
    return pbVar6;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

