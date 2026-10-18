// VA 0x1409a5820, PDB extent 661 bytes
// country_core::resources::critters::impl$6::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::critters::impl$6::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
   Extent: 661 */

void pdb_1409a5820(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pbStack_58 = (byte *)param_1[2];
  if (pbStack_58 != (byte *)0xffffffffffffffff) {
    lVar7 = *(longlong *)pbStack_58;
    do {
      if (lVar7 == 0) goto LAB_1409a5965;
      if (lVar7 < 0) {
        uStack_88 = &UNK_1430739f8;
        uStack_80 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143073a08,&uStack_88,&UNK_143073a78);
      }
      lVar1 = lVar7 + 1;
      LOCK();
      lVar8 = *(longlong *)pbStack_58;
      bVar9 = lVar7 == lVar8;
      if (bVar9) {
        *(longlong *)pbStack_58 = lVar1;
        lVar8 = lVar7;
      }
      UNLOCK();
      lVar7 = lVar8;
    } while (!bVar9);
    pbVar2 = pbStack_58 + 0x10;
    LOCK();
    bVar9 = pbStack_58[0x10] == 0;
    if (bVar9) {
      pbStack_58[0x10] = 1;
    }
    UNLOCK();
    pbStack_60 = pbStack_58;
    if (!bVar9) {
      pdb_142dbd1a0(pbVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),1000000000);
    }
    pdb_140e9a150(pbVar2);
    lVar7 = param_1[1];
    pbStack_68 = pbVar2;
    if (lVar7 != 0) {
      lVar1 = *param_1;
      pbVar2 = pbStack_58 + 0x18;
      lVar8 = 0;
      do {
        uStack_78 = *(undefined8 *)(lVar1 + 0x10 + lVar8);
        uStack_88 = *(undefined **)(lVar1 + lVar8);
        uStack_80 = (code *)((undefined8 *)(lVar1 + lVar8))[1];
        *(undefined8 *)(lVar1 + lVar8) = 0;
        ((undefined8 *)(lVar1 + lVar8))[1] = 0;
        *(undefined8 *)(lVar1 + 0x10 + lVar8) = 0;
        lVar6 = *(longlong *)(pbStack_58 + 0x28);
        if (lVar6 == *(longlong *)(pbStack_58 + 0x18)) {
          pdb_142d7e830(pbVar2);
        }
        lVar5 = *(longlong *)(pbStack_58 + 0x20);
        *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18) = uStack_78;
        puVar3 = (undefined4 *)(lVar5 + lVar6 * 0x18);
        *puVar3 = (undefined4)uStack_88;
        puVar3[1] = uStack_88._4_4_;
        puVar3[2] = (undefined4)uStack_80;
        puVar3[3] = uStack_80._4_4_;
        *(longlong *)(pbStack_58 + 0x28) = lVar6 + 1;
        lVar8 = lVar8 + 0x18;
      } while (lVar7 * 0x18 != lVar8);
    }
    pbVar2 = pbStack_68;
    pdb_140e9a350();
    LOCK();
    bVar4 = *pbVar2;
    if (bVar4 == 1) {
      *pbVar2 = 0;
    }
    UNLOCK();
    if (bVar4 != 1) {
      pdb_142dbcef0(pbVar2,0);
    }
    LOCK();
    *(longlong *)pbStack_60 = *(longlong *)pbStack_60 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_60 == 0) {
      pdb_140c79da0(&pbStack_60);
    }
LAB_1409a5965:
    LOCK();
    pbVar2 = pbStack_58 + 8;
    *(longlong *)pbVar2 = *(longlong *)pbVar2 + -1;
    UNLOCK();
    if (*(longlong *)pbVar2 == 0) {
      pub_1406abac0(pbStack_58,0x30,8);
    }
  }
  return;
}

