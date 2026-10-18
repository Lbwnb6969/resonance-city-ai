// VA 0x1409a5ac0, PDB extent 630 bytes
// country_core::systems::save::save_game::impl$5::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::save_game::impl$5::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 630 */

void pdb_1409a5ac0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  byte **ppbStack_58;
  code *pcStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    pbVar4 = (byte *)param_1[1];
    LOCK();
    pbVar1 = pbVar4 + 0x200;
    *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
    UNLOCK();
    if (*(longlong *)pbVar1 != 0) goto LAB_1409a5bd4;
    uVar5 = *(ulonglong *)(pbVar4 + 0x80);
    do {
      param_2 = (undefined8 *)(uVar5 | *(ulonglong *)(pbVar4 + 400));
      LOCK();
      uVar6 = *(ulonglong *)(pbVar4 + 0x80);
      bVar7 = uVar5 == uVar6;
      if (bVar7) {
        *(undefined8 **)(pbVar4 + 0x80) = param_2;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar7);
    if ((*(ulonglong *)(pbVar4 + 400) & uVar6) == 0) {
      pdb_141a98b00(pbVar4 + 0x140);
      LOCK();
      bVar3 = pbVar4[0x210];
      pbVar4[0x210] = 1;
      UNLOCK();
    }
    else {
      LOCK();
      bVar3 = pbVar4[0x210];
      pbVar4[0x210] = 1;
      UNLOCK();
    }
    if (bVar3 == 0) goto LAB_1409a5bd4;
    pbStack_28 = pbVar4;
    pdb_140972050(pbVar4);
    param_2 = (undefined8 *)0x280;
  }
  else {
    if ((int)*param_1 != 1) {
      pdb_140ca1b10();
      goto LAB_1409a5bd4;
    }
    pbVar4 = (byte *)param_1[1];
    LOCK();
    pbVar1 = pbVar4 + 0x180;
    *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
    UNLOCK();
    if (*(longlong *)pbVar1 != 0) goto LAB_1409a5bd4;
    LOCK();
    puVar2 = (ulonglong *)(pbVar4 + 0x80);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 | 1;
    UNLOCK();
    if ((uVar5 & 1) == 0) {
      pdb_141a93270(pbVar4 + 0x100);
      LOCK();
      bVar3 = pbVar4[400];
      pbVar4[400] = 1;
      UNLOCK();
    }
    else {
      LOCK();
      bVar3 = pbVar4[400];
      pbVar4[400] = 1;
      UNLOCK();
    }
    if (bVar3 == 0) goto LAB_1409a5bd4;
    pbStack_28 = pbVar4;
    pdb_140977da0(pbVar4);
    param_2 = (undefined8 *)0x200;
  }
  pub_1406abac0(pbStack_28,(ulonglong)param_2,0x80);
LAB_1409a5bd4:
  lStack_48 = param_1[0x2c];
  ppbStack_58 = (byte **)param_1[0x2a];
  pcStack_50 = (code *)param_1[0x2b];
  pbStack_40 = (byte *)pdb_1418c8f70(&ppbStack_58);
  if (pbStack_40 != (byte *)0x0) {
    ppbStack_58 = &pbStack_40;
    pcStack_50 = pdb_1400d73e0;
    puStack_38 = param_2;
    pdb_140f4e8b0(&UNK_143028080,&ppbStack_58);
    pbStack_28 = pbStack_40;
    puStack_30 = puStack_38;
    if ((code *)*puStack_38 != (code *)0x0) {
      (*(code *)*puStack_38)(pbStack_40);
    }
    if (puStack_30[1] != 0) {
      pub_1406abac0(pbStack_28,puStack_30[1],puStack_30[2]);
    }
  }
  return;
}

