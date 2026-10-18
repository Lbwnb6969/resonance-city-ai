// VA 0x14096f330, PDB extent 2595 bytes
// core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 2595 */

void pdb_14096f330(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  longlong *plVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte **ppbVar14;
  byte *pbVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  bool bVar22;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  
  pbStack_48 = (byte *)0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x2b2) == '\0') {
    pbVar12 = *(byte **)(param_1 + 0x2a0);
    lVar17 = *(longlong *)(param_1 + 0x2a8);
    if (lVar17 != 0) {
      pbVar10 = pbVar12 + 0x20;
      do {
        if (*(ulonglong *)(pbVar10 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar10 + -0x18),*(ulonglong *)(pbVar10 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar10 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar10,*(ulonglong *)(pbVar10 + -8),1);
        }
        pbVar10 = pbVar10 + 0x38;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      pub_1406abac0(pbVar12,*(longlong *)(param_1 + 0x298) * 0x38,8);
    }
    plVar11 = *(longlong **)(param_1 + 0x290);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 != 0) {
      return;
    }
    lVar17 = *(longlong *)(param_1 + 0x290);
    pbStack_50 = (byte *)(lVar17 + 0x10);
    pdb_140e50100();
    plVar11 = *(longlong **)(lVar17 + 0x670);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140e40750(lVar17 + 0x670);
    }
    plVar11 = *(longlong **)(lVar17 + 0x678);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140e411d0(lVar17 + 0x678);
    }
    plVar11 = *(longlong **)(lVar17 + 0x680);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140e41090(lVar17 + 0x680);
    }
    plVar11 = *(longlong **)(lVar17 + 0x688);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140740180(lVar17 + 0x688);
    }
    pbVar12 = (byte *)(lVar17 + 0x698);
    pdb_140e3b6a0();
    lVar4 = *(longlong *)(lVar17 + 0x698);
    if (lVar4 == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(lVar4 << 4);
      pbVar12 = *(byte **)(lVar17 + 0x6a0);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pdb_140e3c5c0(lVar17 + 0x7b8);
    plVar11 = *(longlong **)(lVar17 + 0x6b8);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140e404d0(lVar17 + 0x6b8);
    }
    lVar4 = *(longlong *)(lVar17 + 0x6c8);
    if (lVar4 != 0) {
      uVar8 = lVar4 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar13 = lVar4 + uVar8 + 0x11;
      if (uVar13 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(lVar17 + 0x6c0) - uVar8),uVar13,0x10);
      }
    }
    lVar4 = *(longlong *)(lVar17 + 0x890);
    if (lVar4 != 0) {
      lVar18 = *(longlong *)(lVar17 + 0x8a0);
      if (lVar18 != 0) {
        pauVar16 = *(undefined1 (**) [16])(lVar17 + 0x888);
        auVar2 = *pauVar16;
        pauVar20 = pauVar16 + 1;
        uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar21 == 0) {
            do {
              auVar2 = *pauVar20;
              pauVar16 = pauVar16 + -0x28;
              pauVar20 = pauVar20 + 1;
              uVar21 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar21 == 0);
          }
          uVar5 = 0;
          for (uVar7 = uVar21; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          pdb_140e70a60((longlong)pauVar16 + (ulonglong)uVar5 * -0x28 + -8);
          uVar21 = uVar21 - 1 & uVar21;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar8 = lVar4 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar13 = lVar4 + uVar8 + 0x11;
      if (uVar13 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(lVar17 + 0x888) - uVar8),uVar13,0x10);
      }
    }
    if (*(longlong *)pbStack_50 != 0) {
      pdb_140e71180(lVar17 + 0x20);
    }
    pdb_140e71180(lVar17 + 0x6e0);
    pbVar12 = (byte *)(lVar17 + 0x8b8);
    lVar4 = *(longlong *)(lVar17 + 0x8e0);
    if (lVar4 != 0) {
      lVar18 = lVar4 * 0x20 + 0x20;
      uVar8 = lVar4 + lVar18 + 0x11;
      if (uVar8 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(lVar17 + 0x8d8) - lVar18),uVar8,0x10);
      }
    }
    pbStack_50 = pbVar12;
    pdb_140e3b920();
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)pbStack_50 * 0x28);
      pbVar12 = *(byte **)(lVar17 + 0x8c0);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar12 = (byte *)(lVar17 + 0xa68);
    pbStack_50 = pbVar12;
    pdb_141e5de20();
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)pbStack_50 * 0x18);
      pbVar12 = *(byte **)(lVar17 + 0xa70);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (*(longlong *)(lVar17 + 0xa88) == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)(lVar17 + 0xa88) << 3);
      pbVar12 = *(byte **)(lVar17 + 0xa90);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar12 = (byte *)(lVar17 + 0xaa0);
    pdb_140e3cd40();
    lVar4 = *(longlong *)(lVar17 + 0xb20);
    if (lVar4 != 0) {
      lVar18 = *(longlong *)(lVar17 + 0xb30);
      if (lVar18 != 0) {
        pauVar16 = *(undefined1 (**) [16])(lVar17 + 0xb18);
        auVar2 = *pauVar16;
        pauVar20 = pauVar16 + 1;
        uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar21 == 0) {
            do {
              auVar2 = *pauVar20;
              pauVar16 = pauVar16 + -0x10;
              pauVar20 = pauVar20 + 1;
              uVar21 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar21 == 0);
          }
          iVar6 = 0;
          for (uVar5 = uVar21; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            iVar6 = iVar6 + 1;
          }
          pbVar12 = (byte *)((longlong)pauVar16 + (-8 - (ulonglong)(uint)(iVar6 << 4)));
          pdb_140e71920();
          uVar21 = uVar21 - 1 & uVar21;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar8 = lVar4 * 0x11 + 0x21;
      if (uVar8 != 0) {
        pbVar12 = (byte *)(*(longlong *)(lVar17 + 0xb18) + lVar4 * -0x10 + -0x10);
        pub_1406abac0(pbVar12,uVar8,0x10);
      }
    }
    if (*(longlong *)(lVar17 + 0x7a0) != 0) {
      pbVar12 = *(byte **)(lVar17 + 0x798);
      pub_1406abac0(pbVar12,*(longlong *)(lVar17 + 0x7a0) << 3,8);
    }
    if (*(longlong *)(lVar17 + 0x50) == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)(lVar17 + 0x50) << 3);
      pbVar12 = *(byte **)(lVar17 + 0x58);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar12 = (byte *)(lVar17 + 0xb58);
    pbStack_50 = pbVar12;
    pdb_141e5e2b0();
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar14 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)pbStack_50 * 0x50);
      pbVar12 = *(byte **)(lVar17 + 0xb60);
      pbStack_48 = (byte *)0x8;
      ppbVar14 = &pbStack_58;
    }
    *ppbVar14 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar12,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (lVar17 != -1) {
      LOCK();
      plVar11 = (longlong *)(lVar17 + 8);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        uVar9 = GetProcessHeap(lVar17,0xbb0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar9,0,lVar17);
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x2b2) != '\x03') {
    return;
  }
  pbStack_50 = (byte *)param_1;
  switch(*(undefined1 *)(param_1 + 0x14d)) {
  case 0:
    pdb_1404dd8b0(param_1 + 0x130);
    plVar11 = *(longlong **)(param_1 + 0x128);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140e3f860((longlong)pbStack_50 + 0x128);
    }
  default:
    goto LAB_14096f708;
  case 3:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    puVar3 = *(undefined8 **)(param_1 + 0x158);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pbStack_58);
    }
    if (puVar3[1] != 0) {
      pub_1406abac0(pbStack_58,puVar3[1],puVar3[2]);
    }
    goto code_r0x00014096f5e9;
  case 4:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    puVar3 = *(undefined8 **)(param_1 + 0x158);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pbStack_58);
    }
    if (puVar3[1] != 0) {
      pub_1406abac0(pbStack_58,puVar3[1],puVar3[2]);
    }
    goto code_r0x00014096f5ab;
  case 5:
    pdb_1409a0c30(param_1 + 0x150);
    plVar11 = *(longlong **)((longlong)pbStack_50 + 0x270);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140c7b710((longlong)pbStack_50 + 0x270);
    }
code_r0x00014096f5ab:
    plVar11 = *(longlong **)((longlong)pbStack_50 + 0x118);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140c7a060((longlong)pbStack_50 + 0x118);
    }
    plVar11 = *(longlong **)((longlong)pbStack_50 + 0x70);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140c79e90((longlong)pbStack_50 + 0x70);
    }
code_r0x00014096f5e9:
    pdb_140987940(pbStack_50);
    break;
  case 6:
    pdb_1409a1520(param_1 + 0x150);
    break;
  case 7:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    puVar3 = *(undefined8 **)(param_1 + 0x158);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(pbStack_58);
    }
    if (puVar3[1] != 0) {
      pub_1406abac0(pbStack_58,puVar3[1],puVar3[2]);
    }
    plVar11 = *(longlong **)((longlong)pbStack_50 + 0x170);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_141746a60((longlong)pbStack_50 + 0x170);
    }
  }
  pbVar12 = pbStack_50;
  if (*(char *)((longlong)pbStack_50 + 0x14a) != '\0') {
    pdb_14096d580((longlong)pbStack_50 + 0xe0);
  }
  *(undefined1 *)((longlong)pbVar12 + 0x14a) = 0;
  pbVar10 = *(byte **)((longlong)pbVar12 + 0xd0);
  lVar17 = *(longlong *)((longlong)pbVar12 + 0xd8);
  if (lVar17 != 0) {
    pbVar15 = pbVar10 + 0x20;
    do {
      if (*(ulonglong *)(pbVar15 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar15 + -0x18),*(ulonglong *)(pbVar15 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar15 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar15,*(ulonglong *)(pbVar15 + -8),1);
      }
      pbVar15 = pbVar15 + 0x30;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)((longlong)pbVar12 + 200) != 0) {
    pub_1406abac0(pbVar10,*(longlong *)((longlong)pbVar12 + 200) * 0x30,8);
  }
  *(undefined1 *)((longlong)pbVar12 + 0x14b) = 0;
  if (*(char *)((longlong)pbVar12 + 0x148) != '\0') {
    lVar17 = *(longlong *)((longlong)pbVar12 + 0xc0);
    if (lVar17 != 0) {
      lVar4 = *(longlong *)((longlong)pbStack_50 + 0xb8);
      lVar18 = 0;
      do {
        lVar1 = lVar4 + lVar18 * 0x60;
        uVar8 = *(ulonglong *)(lVar4 + 0x10 + lVar18 * 0x60);
        if (uVar8 != 0) {
          pub_1406abac0(*(byte **)(lVar1 + 0x18),uVar8,1);
        }
        pbVar12 = *(byte **)(lVar1 + 0x30);
        lVar19 = *(longlong *)(lVar1 + 0x38);
        if (lVar19 != 0) {
          pbVar10 = pbVar12 + 0x50;
          do {
            uVar8 = *(ulonglong *)(pbVar10 + -0x50);
            if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
              pub_1406abac0(*(byte **)(pbVar10 + -0x48),uVar8,1);
            }
            uVar8 = *(ulonglong *)(pbVar10 + -0x38);
            if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
              pub_1406abac0(*(byte **)(pbVar10 + -0x30),uVar8,1);
            }
            uVar8 = *(ulonglong *)(pbVar10 + -0x20);
            if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
              pub_1406abac0(*(byte **)(pbVar10 + -0x18),uVar8,1);
            }
            uVar8 = *(ulonglong *)(pbVar10 + -8);
            if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
              pub_1406abac0(*(byte **)pbVar10,uVar8,1);
            }
            pbVar10 = pbVar10 + 0x78;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          pub_1406abac0(pbVar12,*(longlong *)(lVar1 + 0x28) * 0x78,8);
        }
        if (*(ulonglong *)(lVar1 + 0x40) != 0) {
          pub_1406abac0(*(byte **)(lVar1 + 0x48),*(ulonglong *)(lVar1 + 0x40),1);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar17);
    }
    pbVar12 = pbStack_50;
    if (*(longlong *)((longlong)pbStack_50 + 0xb0) != 0) {
      pub_1406abac0(*(byte **)((longlong)pbStack_50 + 0xb8),
                    *(longlong *)((longlong)pbStack_50 + 0xb0) * 0x60,0x10);
    }
  }
  *(undefined1 *)((longlong)pbVar12 + 0x148) = 0;
  *(undefined1 *)((longlong)pbVar12 + 0x14c) = 0;
  pdb_14098a860((longlong)pbVar12 + 0x40);
  pbVar10 = pbStack_50;
  *(undefined1 *)((longlong)pbStack_50 + 0x149) = 0;
  pbVar12 = *(byte **)((longlong)pbStack_50 + 0xa0);
  lVar17 = *(longlong *)((longlong)pbStack_50 + 0xa8);
  if (lVar17 != 0) {
    pbVar15 = pbVar12 + 0x20;
    do {
      if (*(ulonglong *)(pbVar15 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar15 + -0x18),*(ulonglong *)(pbVar15 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar15 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar15,*(ulonglong *)(pbVar15 + -8),1);
      }
      pbVar15 = pbVar15 + 0x38;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)((longlong)pbVar10 + 0x98) != 0) {
    pub_1406abac0(pbVar12,*(longlong *)((longlong)pbVar10 + 0x98) * 0x38,8);
  }
LAB_14096f708:
  plVar11 = *(longlong **)((longlong)pbStack_50 + 0x280);
  LOCK();
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (*plVar11 == 0) {
    pdb_140dd78e0((longlong)pbStack_50 + 0x280);
  }
  plVar11 = *(longlong **)((longlong)pbStack_50 + 0x288);
  LOCK();
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  plVar11 = plVar11 + 1;
  uVar9 = pdb_140f2ee90(1);
  LOCK();
  UNLOCK();
  pbVar12 = (byte *)*plVar11;
  if ((byte *)*plVar11 == (byte *)0x0) {
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x48,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x48);
    }
    pbVar10[0] = 1;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 1;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    pbVar10[0x10] = 0;
    pbVar10[0x11] = 0;
    pbVar10[0x18] = 0;
    pbVar10[0x19] = 0;
    pbVar10[0x1a] = 0;
    pbVar10[0x1b] = 0;
    pbVar10[0x1c] = 0;
    pbVar10[0x1d] = 0;
    pbVar10[0x1e] = 0;
    pbVar10[0x1f] = 0;
    pbVar10[0x20] = 0;
    pbVar10[0x21] = 0;
    pbVar10[0x22] = 0;
    pbVar10[0x23] = 0;
    pbVar10[0x24] = 0;
    pbVar10[0x25] = 0;
    pbVar10[0x26] = 0;
    pbVar10[0x27] = 0;
    pbVar10[0x28] = 0;
    pbVar10[0x29] = 0;
    pbVar10[0x2a] = 0;
    pbVar10[0x2b] = 0;
    pbVar10[0x2c] = 0;
    pbVar10[0x2d] = 0;
    pbVar10[0x2e] = 0;
    pbVar10[0x2f] = 0;
    pbVar10[0x30] = 0;
    pbVar10[0x31] = 0;
    pbVar10[0x32] = 0;
    pbVar10[0x33] = 0;
    pbVar10[0x34] = 0;
    pbVar10[0x35] = 0;
    pbVar10[0x36] = 0;
    pbVar10[0x37] = 0;
    pbVar10[0x38] = 0;
    pbVar10[0x39] = 0;
    pbVar10[0x3a] = 0;
    pbVar10[0x3b] = 0;
    pbVar10[0x3c] = 0;
    pbVar10[0x3d] = 0;
    pbVar10[0x3e] = 0;
    pbVar10[0x3f] = 0;
    pbVar10[0x40] = 0xff;
    pbVar10[0x41] = 0xff;
    pbVar10[0x42] = 0xff;
    pbVar10[0x43] = 0xff;
    pbVar10[0x44] = 0xff;
    pbVar10[0x45] = 0xff;
    pbVar10[0x46] = 0xff;
    pbVar10[0x47] = 0xff;
    LOCK();
    pbVar15 = (byte *)*plVar11;
    bVar22 = pbVar15 == (byte *)0x0;
    if (bVar22) {
      *plVar11 = (longlong)(pbVar10 + 0x10);
      pbVar15 = (byte *)0x0;
    }
    UNLOCK();
    pbVar12 = pbVar10 + 0x10;
    if (!bVar22) {
      LOCK();
      *(longlong *)pbVar10 = *(longlong *)pbVar10 + -1;
      UNLOCK();
      pbVar12 = pbVar15;
      if (*(longlong *)pbVar10 == 0) {
        pdb_140c7a9d0(&stack0xffffffffffffffe8);
      }
    }
  }
  pdb_142dc5860(pbVar12,uVar9);
  return;
}

