// VA 0x141ae89c0, PDB extent 2959 bytes
// core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 2959 */

void pdb_141ae89c0(byte *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte **ppbVar12;
  undefined1 (*pauVar13) [16];
  byte *pbVar14;
  longlong lVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  bool bVar20;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined *puStack_40;
  
  puStack_40 = (undefined *)0xfffffffffffffffe;
  if (param_1[0x2b2] == 0) {
    pbVar9 = *(byte **)(param_1 + 0x2a0);
    lVar17 = *(longlong *)(param_1 + 0x2a8);
    if (lVar17 != 0) {
      pbVar8 = pbVar9 + 0x20;
      do {
        if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x38;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      pub_1406abac0(pbVar9,*(longlong *)(param_1 + 0x298) * 0x38,8);
    }
    plVar10 = *(longlong **)(param_1 + 0x290);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 != 0) {
      return;
    }
    puStack_40 = *(undefined **)(param_1 + 0x290);
    pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
    pdb_140e50100();
    plVar10 = *(longlong **)((longlong)puStack_40 + 0x670);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140e40750((longlong)puStack_40 + 0x670);
    }
    plVar10 = *(longlong **)((longlong)puStack_40 + 0x678);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140e411d0((longlong)puStack_40 + 0x678);
    }
    plVar10 = *(longlong **)((longlong)puStack_40 + 0x680);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140e41090((longlong)puStack_40 + 0x680);
    }
    puVar16 = puStack_40;
    plVar10 = *(longlong **)((longlong)puStack_40 + 0x688);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140740180((longlong)puStack_40 + 0x688);
    }
    pbVar9 = (byte *)((longlong)puVar16 + 0x698);
    pdb_140e3b6a0();
    puVar5 = puStack_40;
    lVar17 = *(longlong *)((longlong)puVar16 + 0x698);
    if (lVar17 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(lVar17 << 4);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0x6a0);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pdb_140e3c5c0((longlong)puVar5 + 0x7b8);
    plVar10 = *(longlong **)((longlong)puStack_40 + 0x6b8);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140e404d0((longlong)puStack_40 + 0x6b8);
    }
    puVar16 = puStack_40;
    lVar17 = *(longlong *)((longlong)puStack_40 + 0x6c8);
    if (lVar17 != 0) {
      uVar6 = lVar17 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar11 = lVar17 + uVar6 + 0x11;
      if (uVar11 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar6),uVar11,0x10);
      }
    }
    lVar17 = *(longlong *)((longlong)puVar16 + 0x890);
    if (lVar17 != 0) {
      lVar15 = *(longlong *)((longlong)puVar16 + 0x8a0);
      if (lVar15 != 0) {
        pauVar13 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
        auVar1 = *pauVar13;
        pauVar18 = pauVar13 + 1;
        uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar19 == 0) {
            do {
              auVar1 = *pauVar18;
              pauVar13 = pauVar13 + -0x28;
              pauVar18 = pauVar18 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar19 == 0);
          }
          uVar2 = 0;
          for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          pdb_140e70a60((longlong)pauVar13 + (ulonglong)uVar2 * -0x28 + -8);
          uVar19 = uVar19 - 1 & uVar19;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      uVar6 = lVar17 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar11 = lVar17 + uVar6 + 0x11;
      if (uVar11 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar6),uVar11,0x10);
      }
    }
    if (*(longlong *)pbStack_50 != 0) {
      pdb_140e71180((longlong)puStack_40 + 0x20);
    }
    pdb_140e71180((longlong)puStack_40 + 0x6e0);
    pbVar9 = (byte *)((longlong)puStack_40 + 0x8b8);
    lVar17 = *(longlong *)((longlong)puStack_40 + 0x8e0);
    if (lVar17 != 0) {
      lVar15 = lVar17 * 0x20 + 0x20;
      uVar6 = lVar17 + lVar15 + 0x11;
      if (uVar6 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar15),uVar6,0x10);
      }
    }
    pbStack_50 = pbVar9;
    pdb_140e3b920();
    puVar16 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)pbStack_50 * 0x28);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0x8c0);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar16 + 0xa68);
    pbStack_50 = pbVar9;
    pdb_141e5de20();
    puVar16 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)pbStack_50 * 0x18);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0xa70);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (*(longlong *)((longlong)puVar16 + 0xa88) == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)((longlong)puVar16 + 0xa88) << 3);
      pbVar9 = *(byte **)((longlong)puVar16 + 0xa90);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar16 + 0xaa0);
    pdb_140e3cd40();
    lVar17 = *(longlong *)((longlong)puStack_40 + 0xb20);
    puVar16 = puStack_40;
    if (lVar17 != 0) {
      lVar15 = *(longlong *)((longlong)puStack_40 + 0xb30);
      if (lVar15 != 0) {
        pauVar13 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
        auVar1 = *pauVar13;
        pauVar18 = pauVar13 + 1;
        uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar19 == 0) {
            do {
              auVar1 = *pauVar18;
              pauVar13 = pauVar13 + -0x10;
              pauVar18 = pauVar18 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar19 == 0);
          }
          iVar3 = 0;
          for (uVar2 = uVar19; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            iVar3 = iVar3 + 1;
          }
          pbVar9 = (byte *)((longlong)pauVar13 + (-8 - (ulonglong)(uint)(iVar3 << 4)));
          pdb_140e71920();
          uVar19 = uVar19 - 1 & uVar19;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      puVar16 = puStack_40;
      uVar6 = lVar17 * 0x11 + 0x21;
      if (uVar6 != 0) {
        pbVar9 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar17 * -0x10 + -0x10);
        pub_1406abac0(pbVar9,uVar6,0x10);
      }
    }
    if (*(longlong *)((longlong)puVar16 + 0x7a0) != 0) {
      pbVar9 = *(byte **)((longlong)puVar16 + 0x798);
      pub_1406abac0(pbVar9,*(longlong *)((longlong)puVar16 + 0x7a0) << 3,8);
    }
    if (*(longlong *)((longlong)puVar16 + 0x50) == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)((longlong)puVar16 + 0x50) << 3);
      pbVar9 = *(byte **)((longlong)puVar16 + 0x58);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar16 + 0xb58);
    pbStack_50 = pbVar9;
    pdb_141e5e2b0();
    puVar16 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)pbStack_50 * 0x50);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0xb60);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (puVar16 != (undefined *)0xffffffffffffffff) {
      LOCK();
      plVar10 = (longlong *)((longlong)puVar16 + 8);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        puStack_40 = &UNK_140f3c37e;
        uVar7 = GetProcessHeap(puVar16,0xbb0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar7,0,puVar16);
        return;
      }
    }
    return;
  }
  if (param_1[0x2b2] != 3) {
    return;
  }
  pbStack_48 = param_1;
  switch(param_1[0x14d]) {
  case 0:
    pbVar9 = *(byte **)(param_1 + 0x138);
    lVar17 = *(longlong *)(param_1 + 0x140);
    if (lVar17 != 0) {
      pbVar8 = pbVar9 + 0x20;
      do {
        if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x38;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (*(longlong *)(param_1 + 0x130) != 0) {
      pub_1406abac0(pbVar9,*(longlong *)(param_1 + 0x130) * 0x38,8);
    }
    plVar10 = *(longlong **)(param_1 + 0x128);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140e3f860(pbStack_48 + 0x128);
    }
  default:
    goto LAB_141ae8edc;
  case 3:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    pbStack_50 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_50 != (code *)0x0) {
      (**(code **)pbStack_50)(pbStack_58);
    }
    if (*(ulonglong *)(pbStack_50 + 8) != 0) {
      pub_1406abac0(pbStack_58,*(ulonglong *)(pbStack_50 + 8),*(ulonglong *)(pbStack_50 + 0x10));
    }
    goto code_r0x000141ae8d3b;
  case 4:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    pbStack_50 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_50 != (code *)0x0) {
      (**(code **)pbStack_50)(pbStack_58);
    }
    if (*(ulonglong *)(pbStack_50 + 8) != 0) {
      pub_1406abac0(pbStack_58,*(ulonglong *)(pbStack_50 + 8),*(ulonglong *)(pbStack_50 + 0x10));
    }
    goto code_r0x000141ae8cfd;
  case 5:
    if (param_1[0x255] == 3) {
      pbStack_58 = *(byte **)(param_1 + 0x1f0);
      pbStack_50 = *(byte **)(param_1 + 0x1f8);
      if (*(code **)pbStack_50 != (code *)0x0) {
        (**(code **)pbStack_50)(pbStack_58);
      }
      if (*(ulonglong *)(pbStack_50 + 8) != 0) {
        pub_1406abac0(pbStack_58,*(ulonglong *)(pbStack_50 + 8),*(ulonglong *)(pbStack_50 + 0x10));
      }
      param_1 = pbStack_48;
      lVar17 = *(longlong *)(pbStack_48 + 0x1b8);
      if (lVar17 != 0) {
        lVar15 = *(longlong *)(pbStack_48 + 0x1c8);
        if (lVar15 != 0) {
          pauVar13 = *(undefined1 (**) [16])(pbStack_48 + 0x1b0);
          auVar1 = *pauVar13;
          pauVar18 = pauVar13 + 1;
          uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar19 == 0) {
              do {
                auVar1 = *pauVar18;
                pauVar13 = pauVar13 + -0x20;
                pauVar18 = pauVar18 + 1;
                uVar19 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar19 == 0);
            }
            iVar3 = 0;
            for (uVar2 = uVar19; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
              iVar3 = iVar3 + 1;
            }
            uVar6 = *(ulonglong *)((longlong)pauVar13 + (-0x18 - (ulonglong)(uint)(iVar3 << 5)));
            if (uVar6 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar3 << 5)))
                            ,uVar6,1);
            }
            uVar19 = uVar19 - 1 & uVar19;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        lVar15 = lVar17 * 0x20 + 0x20;
        uVar6 = lVar17 + lVar15 + 0x11;
        if (uVar6 != 0) {
          pub_1406abac0((byte *)(*(longlong *)(param_1 + 0x1b0) - lVar15),uVar6,0x10);
        }
      }
    }
    plVar10 = *(longlong **)(param_1 + 0x270);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140c7b710(pbStack_48 + 0x270);
    }
code_r0x000141ae8cfd:
    plVar10 = *(longlong **)(pbStack_48 + 0x118);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140c7a060(pbStack_48 + 0x118);
    }
    plVar10 = *(longlong **)(pbStack_48 + 0x70);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_140c79e90(pbStack_48 + 0x70);
    }
code_r0x000141ae8d3b:
    pdb_140987940(pbStack_48);
    break;
  case 6:
    pdb_141702d80(param_1 + 0x150);
    break;
  case 7:
    pbStack_58 = *(byte **)(param_1 + 0x150);
    pbStack_50 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_50 != (code *)0x0) {
      (**(code **)pbStack_50)(pbStack_58);
    }
    if (*(ulonglong *)(pbStack_50 + 8) != 0) {
      pub_1406abac0(pbStack_58,*(ulonglong *)(pbStack_50 + 8),*(ulonglong *)(pbStack_50 + 0x10));
    }
    plVar10 = *(longlong **)(pbStack_48 + 0x170);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      pdb_141746a60(pbStack_48 + 0x170);
    }
  }
  if (pbStack_48[0x14a] != 0) {
    pdb_14096d580(pbStack_48 + 0xe0);
  }
  pbVar8 = pbStack_48;
  pbStack_48[0x14a] = 0;
  pbVar9 = *(byte **)(pbStack_48 + 0xd0);
  lVar17 = *(longlong *)(pbStack_48 + 0xd8);
  if (lVar17 != 0) {
    pbVar14 = pbVar9 + 0x20;
    do {
      if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar14 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
      }
      pbVar14 = pbVar14 + 0x30;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)(pbVar8 + 200) != 0) {
    pub_1406abac0(pbVar9,*(longlong *)(pbVar8 + 200) * 0x30,8);
  }
  pbVar8[0x14b] = 0;
  if (pbVar8[0x148] != 0) {
    pbVar9 = *(byte **)(pbVar8 + 0xb8);
    pbStack_58 = *(byte **)(pbVar8 + 0xc0);
    pbStack_50 = (byte *)0x0;
    pbVar14 = pbVar9;
    while (pbVar8 = pbStack_48, pbStack_58 != pbStack_50) {
      pbStack_50 = pbStack_50 + 1;
      pdb_14098f040(pbVar14);
      pbVar14 = pbVar14 + 0x60;
    }
    if (*(longlong *)(pbStack_48 + 0xb0) != 0) {
      pub_1406abac0(pbVar9,*(longlong *)(pbStack_48 + 0xb0) * 0x60,0x10);
    }
  }
  pbVar8[0x148] = 0;
  pbVar8[0x14c] = 0;
  pdb_14098a860(pbVar8 + 0x40);
  pbVar8 = pbStack_48;
  pbStack_48[0x149] = 0;
  pbVar9 = *(byte **)(pbStack_48 + 0xa0);
  lVar17 = *(longlong *)(pbStack_48 + 0xa8);
  if (lVar17 != 0) {
    pbVar14 = pbVar9 + 0x20;
    do {
      if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar14 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
      }
      pbVar14 = pbVar14 + 0x38;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)(pbVar8 + 0x98) != 0) {
    pub_1406abac0(pbVar9,*(longlong *)(pbVar8 + 0x98) * 0x38,8);
  }
LAB_141ae8edc:
  plVar10 = *(longlong **)(pbStack_48 + 0x280);
  LOCK();
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (*plVar10 == 0) {
    pdb_140dd78e0(pbStack_48 + 0x280);
  }
  plVar10 = *(longlong **)(pbStack_48 + 0x288);
  LOCK();
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  plVar10 = plVar10 + 1;
  puStack_40 = &UNK_142d8fec3;
  uVar7 = pdb_140f2ee90(1);
  LOCK();
  UNLOCK();
  pbVar9 = (byte *)*plVar10;
  if ((byte *)*plVar10 == (byte *)0x0) {
    puStack_40 = &UNK_142d8fee5;
    pdb_14007ee60();
    puStack_40 = &UNK_142d8fef4;
    pbVar8 = pub_1406abab0(0x48,8);
    if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_40 = &UNK_142d8ff7b;
      pdb_142dc7e11(8,0x48);
    }
    pbVar8[0] = 1;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 1;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    pbVar8[0xc] = 0;
    pbVar8[0xd] = 0;
    pbVar8[0xe] = 0;
    pbVar8[0xf] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x18] = 0;
    pbVar8[0x19] = 0;
    pbVar8[0x1a] = 0;
    pbVar8[0x1b] = 0;
    pbVar8[0x1c] = 0;
    pbVar8[0x1d] = 0;
    pbVar8[0x1e] = 0;
    pbVar8[0x1f] = 0;
    pbVar8[0x20] = 0;
    pbVar8[0x21] = 0;
    pbVar8[0x22] = 0;
    pbVar8[0x23] = 0;
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0;
    pbVar8[0x27] = 0;
    pbVar8[0x28] = 0;
    pbVar8[0x29] = 0;
    pbVar8[0x2a] = 0;
    pbVar8[0x2b] = 0;
    pbVar8[0x2c] = 0;
    pbVar8[0x2d] = 0;
    pbVar8[0x2e] = 0;
    pbVar8[0x2f] = 0;
    pbVar8[0x30] = 0;
    pbVar8[0x31] = 0;
    pbVar8[0x32] = 0;
    pbVar8[0x33] = 0;
    pbVar8[0x34] = 0;
    pbVar8[0x35] = 0;
    pbVar8[0x36] = 0;
    pbVar8[0x37] = 0;
    pbVar8[0x38] = 0;
    pbVar8[0x39] = 0;
    pbVar8[0x3a] = 0;
    pbVar8[0x3b] = 0;
    pbVar8[0x3c] = 0;
    pbVar8[0x3d] = 0;
    pbVar8[0x3e] = 0;
    pbVar8[0x3f] = 0;
    pbVar8[0x40] = 0xff;
    pbVar8[0x41] = 0xff;
    pbVar8[0x42] = 0xff;
    pbVar8[0x43] = 0xff;
    pbVar8[0x44] = 0xff;
    pbVar8[0x45] = 0xff;
    pbVar8[0x46] = 0xff;
    pbVar8[0x47] = 0xff;
    LOCK();
    pbVar14 = (byte *)*plVar10;
    bVar20 = pbVar14 == (byte *)0x0;
    if (bVar20) {
      *plVar10 = (longlong)(pbVar8 + 0x10);
      pbVar14 = (byte *)0x0;
    }
    UNLOCK();
    pbVar9 = pbVar8 + 0x10;
    if (!bVar20) {
      LOCK();
      *(longlong *)pbVar8 = *(longlong *)pbVar8 + -1;
      UNLOCK();
      pbVar9 = pbVar14;
      if (*(longlong *)pbVar8 == 0) {
        puStack_40 = &UNK_142d8ff56;
        pdb_140c7a9d0(&stack0xffffffffffffffe8);
      }
    }
  }
  puStack_40 = &UNK_142d8ff64;
  pdb_142dc5860(pbVar9,uVar7);
  return;
}

