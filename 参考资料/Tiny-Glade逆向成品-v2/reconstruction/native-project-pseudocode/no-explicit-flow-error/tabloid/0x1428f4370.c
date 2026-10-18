// VA 0x1428f4370, PDB extent 974 bytes
// tabloid::Publisher::publish<country_core::utils::dirty_tiles::DirtyTiles,country_core::utils::dirty_tiles::DirtyTiles>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tabloid::Publisher::publish<country_core::utils::dirty_tiles::DirtyTiles,country_core::utils::dirty_tiles::DirtyTiles>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 974 */

void pdb_1428f4370(longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  byte *pbVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_680 [512];
  undefined1 auStack_480 [512];
  byte *apbStack_280 [64];
  ulonglong uStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar8 = param_1[6] + 1;
  param_1[6] = uVar8;
  uStack_80 = uVar8;
  pdb_142059b40(param_1,param_2,&uStack_80);
  pub_142e32760(auStack_480,param_2,0x200);
  pbStack_58 = (byte *)0x0;
  plVar7 = (longlong *)param_1[4];
  plStack_70 = plVar7 + param_1[5];
  do {
    plStack_78 = plVar7;
    if (plVar7 == plStack_70) {
      if (pbStack_58 != (byte *)0x0) {
        pbStack_50 = pbStack_58;
        apbStack_280[0] = pbStack_58;
        lVar4 = param_1[2];
        if (lVar4 == *param_1) {
          pdb_142d7e8a0(param_1);
        }
        *(byte **)(param_1[1] + lVar4 * 8) = pbStack_50;
        param_1[2] = lVar4 + 1;
      }
      return;
    }
    lVar4 = *plVar7;
    pcVar1 = (char *)(lVar4 + 0x10);
    LOCK();
    bVar9 = *(char *)(lVar4 + 0x10) == '\0';
    if (bVar9) {
      *(char *)(lVar4 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      pdb_142dbd1a0(pcVar1);
    }
    pdb_140e9a150(pcVar1);
    pbStack_50 = (byte *)pcVar1;
    if ((*(longlong *)(lVar4 + 0x20) == 0) && (*(ulonglong *)(lVar4 + 0x18) < uVar8)) {
      if (pbStack_58 == (byte *)0x0) {
        pdb_140a84d70(auStack_680);
        pub_142e32760(apbStack_280,auStack_480,0x200);
        pdb_140a874b0(apbStack_280,auStack_680);
        pub_142e32760(apbStack_280,auStack_680,0x200);
        pdb_14007ee60();
        pbVar6 = pub_1406abab0(0x220,8);
        if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x220);
        }
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
        pbVar6[0x10] = 0;
        pbVar6[0x11] = 0;
        pbVar6[0x12] = 0;
        pbVar6[0x13] = 0;
        pbVar6[0x14] = 0;
        pbVar6[0x15] = 0;
        pbVar6[0x16] = 0;
        pbVar6[0x17] = 0;
        pub_142e32760(pbVar6 + 0x18,apbStack_280,0x200);
        *(ulonglong *)(pbVar6 + 0x218) = uVar8;
        pbStack_58 = pbVar6;
      }
      LOCK();
      lVar3 = *(longlong *)pbStack_58;
      *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
      UNLOCK();
      pbStack_68 = pbStack_58;
      if (*(longlong *)pbStack_58 == 0 || SCARRY8(lVar3,1) != *(longlong *)pbStack_58 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      puStack_60 = (undefined8 *)(lVar4 + 0x20);
      plVar7 = (longlong *)*puStack_60;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          pdb_140c7ba10(puStack_60);
        }
      }
      *puStack_60 = pbStack_68;
    }
    pbVar6 = pbStack_50;
    pdb_140e9a350(pbStack_50);
    plVar7 = plStack_78 + 1;
    LOCK();
    cVar2 = *pbVar6;
    if (cVar2 == '\x01') {
      *pbVar6 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      pdb_142dbcef0(pbVar6,0);
    }
  } while( true );
}

