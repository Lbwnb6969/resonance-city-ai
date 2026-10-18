// VA 0x142613760, PDB extent 2605 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::build_clutter_packs::async_fn_env$0<country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure_env$0> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::build_clutter_packs::async_fn_env$0<country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure_env$0>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2605 */

void pdb_142613760(byte *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte **ppbVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined *puStack_40;
  
  puStack_40 = (undefined *)0xfffffffffffffffe;
  pbStack_48 = param_1;
  switch(param_1[0x14d]) {
  case 0:
    pbVar9 = *(byte **)(param_1 + 0x138);
    lVar18 = *(longlong *)(param_1 + 0x140);
    if (lVar18 != 0) {
      pbVar13 = pbVar9 + 0x20;
      do {
        if (*(ulonglong *)(pbVar13 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar13 + -0x18),*(ulonglong *)(pbVar13 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar13 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar13,*(ulonglong *)(pbVar13 + -8),1);
        }
        pbVar13 = pbVar13 + 0x38;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (*(longlong *)(param_1 + 0x130) != 0) {
      pub_1406abac0(pbVar9,*(longlong *)(param_1 + 0x130) * 0x38,8);
    }
    plVar2 = *(longlong **)(param_1 + 0x128);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    puStack_40 = *(undefined **)(param_1 + 0x128);
    pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
    pdb_140e50100();
    plVar2 = *(longlong **)((longlong)puStack_40 + 0x670);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140e40750((longlong)puStack_40 + 0x670);
    }
    plVar2 = *(longlong **)((longlong)puStack_40 + 0x678);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140e411d0((longlong)puStack_40 + 0x678);
    }
    plVar2 = *(longlong **)((longlong)puStack_40 + 0x680);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140e41090((longlong)puStack_40 + 0x680);
    }
    puVar8 = puStack_40;
    plVar2 = *(longlong **)((longlong)puStack_40 + 0x688);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140740180((longlong)puStack_40 + 0x688);
    }
    pbVar9 = (byte *)((longlong)puVar8 + 0x698);
    pdb_140e3b6a0();
    puVar6 = puStack_40;
    lVar18 = *(longlong *)((longlong)puVar8 + 0x698);
    if (lVar18 == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(lVar18 << 4);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0x6a0);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pdb_140e3c5c0((longlong)puVar6 + 0x7b8);
    plVar2 = *(longlong **)((longlong)puStack_40 + 0x6b8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140e404d0((longlong)puStack_40 + 0x6b8);
    }
    puVar8 = puStack_40;
    lVar18 = *(longlong *)((longlong)puStack_40 + 0x6c8);
    if (lVar18 != 0) {
      uVar16 = lVar18 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar10 = lVar18 + uVar16 + 0x11;
      if (uVar10 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar16),uVar10,0x10);
      }
    }
    lVar18 = *(longlong *)((longlong)puVar8 + 0x890);
    if (lVar18 != 0) {
      lVar17 = *(longlong *)((longlong)puVar8 + 0x8a0);
      if (lVar17 != 0) {
        pauVar12 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
        auVar1 = *pauVar12;
        pauVar19 = pauVar12 + 1;
        uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar20 == 0) {
            do {
              auVar1 = *pauVar19;
              pauVar12 = pauVar12 + -0x28;
              pauVar19 = pauVar19 + 1;
              uVar20 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar20 == 0);
          }
          uVar5 = 0;
          for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          pdb_140e70a60((longlong)pauVar12 + (ulonglong)uVar5 * -0x28 + -8);
          uVar20 = uVar20 - 1 & uVar20;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar16 = lVar18 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar10 = lVar18 + uVar16 + 0x11;
      if (uVar10 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar16),uVar10,0x10);
      }
    }
    if (*(longlong *)pbStack_50 != 0) {
      pdb_140e71180((longlong)puStack_40 + 0x20);
    }
    pdb_140e71180((longlong)puStack_40 + 0x6e0);
    pbVar9 = (byte *)((longlong)puStack_40 + 0x8b8);
    lVar18 = *(longlong *)((longlong)puStack_40 + 0x8e0);
    if (lVar18 != 0) {
      lVar17 = lVar18 * 0x20 + 0x20;
      uVar16 = lVar18 + lVar17 + 0x11;
      if (uVar16 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar17),uVar16,0x10);
      }
    }
    pbStack_50 = pbVar9;
    pdb_140e3b920();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(*(longlong *)pbStack_50 * 0x28);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0x8c0);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar8 + 0xa68);
    pbStack_50 = pbVar9;
    pdb_141e5de20();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(*(longlong *)pbStack_50 * 0x18);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0xa70);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (*(longlong *)((longlong)puVar8 + 0xa88) == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(*(longlong *)((longlong)puVar8 + 0xa88) << 3);
      pbVar9 = *(byte **)((longlong)puVar8 + 0xa90);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar8 + 0xaa0);
    pdb_140e3cd40();
    lVar18 = *(longlong *)((longlong)puStack_40 + 0xb20);
    puVar8 = puStack_40;
    if (lVar18 != 0) {
      lVar17 = *(longlong *)((longlong)puStack_40 + 0xb30);
      if (lVar17 != 0) {
        pauVar12 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
        auVar1 = *pauVar12;
        pauVar19 = pauVar12 + 1;
        uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar20 == 0) {
            do {
              auVar1 = *pauVar19;
              pauVar12 = pauVar12 + -0x10;
              pauVar19 = pauVar19 + 1;
              uVar20 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar20 == 0);
          }
          iVar3 = 0;
          for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            iVar3 = iVar3 + 1;
          }
          pbVar9 = (byte *)((longlong)pauVar12 + (-8 - (ulonglong)(uint)(iVar3 << 4)));
          pdb_140e71920();
          uVar20 = uVar20 - 1 & uVar20;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      puVar8 = puStack_40;
      uVar16 = lVar18 * 0x11 + 0x21;
      if (uVar16 != 0) {
        pbVar9 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar18 * -0x10 + -0x10);
        pub_1406abac0(pbVar9,uVar16,0x10);
      }
    }
    if (*(longlong *)((longlong)puVar8 + 0x7a0) != 0) {
      pbVar9 = *(byte **)((longlong)puVar8 + 0x798);
      pub_1406abac0(pbVar9,*(longlong *)((longlong)puVar8 + 0x7a0) << 3,8);
    }
    if (*(longlong *)((longlong)puVar8 + 0x50) == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(*(longlong *)((longlong)puVar8 + 0x50) << 3);
      pbVar9 = *(byte **)((longlong)puVar8 + 0x58);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar9 = (byte *)((longlong)puVar8 + 0xb58);
    pbStack_50 = pbVar9;
    pdb_141e5e2b0();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppbVar11 = &pbStack_48;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar13 = (byte *)(*(longlong *)pbStack_50 * 0x50);
      pbVar9 = *(byte **)((longlong)puStack_40 + 0xb60);
      pbStack_48 = (byte *)0x8;
      ppbVar11 = &pbStack_58;
    }
    *ppbVar11 = pbVar13;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (puVar8 == (undefined *)0xffffffffffffffff) {
      return;
    }
    LOCK();
    plVar2 = (longlong *)((longlong)puVar8 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    lVar18 = 0xbb0;
    goto code_r0x0001406abac0;
  default:
    goto LAB_142613cd6;
  case 3:
    pbStack_50 = *(byte **)(param_1 + 0x150);
    pbStack_58 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_58 != (code *)0x0) {
      (**(code **)pbStack_58)(pbStack_50);
    }
    if (*(ulonglong *)(pbStack_58 + 8) != 0) {
      pub_1406abac0(pbStack_50,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
    }
    goto code_r0x000142613af7;
  case 4:
    pbStack_50 = *(byte **)(param_1 + 0x150);
    pbStack_58 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_58 != (code *)0x0) {
      (**(code **)pbStack_58)(pbStack_50);
    }
    if (*(ulonglong *)(pbStack_58 + 8) != 0) {
      pub_1406abac0(pbStack_50,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
    }
    goto code_r0x000142613ab9;
  case 5:
    if (param_1[0x255] == 3) {
      pbStack_50 = *(byte **)(param_1 + 0x1f0);
      pbStack_58 = *(byte **)(param_1 + 0x1f8);
      if (*(code **)pbStack_58 != (code *)0x0) {
        (**(code **)pbStack_58)(pbStack_50);
      }
      if (*(ulonglong *)(pbStack_58 + 8) != 0) {
        pub_1406abac0(pbStack_50,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
      }
      param_1 = pbStack_48;
      lVar18 = *(longlong *)(pbStack_48 + 0x1b8);
      if (lVar18 != 0) {
        lVar17 = *(longlong *)(pbStack_48 + 0x1c8);
        if (lVar17 != 0) {
          pauVar12 = *(undefined1 (**) [16])(pbStack_48 + 0x1b0);
          auVar1 = *pauVar12;
          pauVar19 = pauVar12 + 1;
          uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            if ((short)uVar20 == 0) {
              do {
                auVar1 = *pauVar19;
                pauVar12 = pauVar12 + -0x20;
                pauVar19 = pauVar19 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar20 == 0);
            }
            iVar3 = 0;
            for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              iVar3 = iVar3 + 1;
            }
            uVar16 = *(ulonglong *)((longlong)pauVar12 + (-0x18 - (ulonglong)(uint)(iVar3 << 5)));
            if (uVar16 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar12 + (-0x10 - (ulonglong)(uint)(iVar3 << 5)))
                            ,uVar16,1);
            }
            uVar20 = uVar20 - 1 & uVar20;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar17 = lVar18 * 0x20 + 0x20;
        uVar16 = lVar18 + lVar17 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)(*(longlong *)(param_1 + 0x1b0) - lVar17),uVar16,0x10);
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x270);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140c7b710(pbStack_48 + 0x270);
    }
code_r0x000142613ab9:
    plVar2 = *(longlong **)(pbStack_48 + 0x118);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140c7a060(pbStack_48 + 0x118);
    }
    plVar2 = *(longlong **)(pbStack_48 + 0x70);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140c79e90(pbStack_48 + 0x70);
    }
code_r0x000142613af7:
    pdb_140987940(pbStack_48);
    break;
  case 6:
    pdb_141702d80(param_1 + 0x150);
    break;
  case 7:
    pbStack_50 = *(byte **)(param_1 + 0x150);
    pbStack_58 = *(byte **)(param_1 + 0x158);
    if (*(code **)pbStack_58 != (code *)0x0) {
      (**(code **)pbStack_58)(pbStack_50);
    }
    if (*(ulonglong *)(pbStack_58 + 8) != 0) {
      pub_1406abac0(pbStack_50,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
    }
    plVar2 = *(longlong **)(pbStack_48 + 0x170);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_141746a60(pbStack_48 + 0x170);
    }
  }
  if (pbStack_48[0x14a] != 0) {
    pdb_14096d580(pbStack_48 + 0xe0);
  }
  pbVar13 = pbStack_48;
  pbStack_48[0x14a] = 0;
  pbVar9 = *(byte **)(pbStack_48 + 0xd0);
  lVar18 = *(longlong *)(pbStack_48 + 0xd8);
  if (lVar18 != 0) {
    pbVar14 = pbVar9 + 0x20;
    do {
      if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar14 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
      }
      pbVar14 = pbVar14 + 0x30;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(longlong *)(pbVar13 + 200) != 0) {
    pub_1406abac0(pbVar9,*(longlong *)(pbVar13 + 200) * 0x30,8);
  }
  pbVar13[0x14b] = 0;
  if (pbVar13[0x148] != 0) {
    pbVar9 = *(byte **)(pbVar13 + 0xb8);
    pbStack_58 = *(byte **)(pbVar13 + 0xc0);
    pbStack_50 = (byte *)0x0;
    pbVar14 = pbVar9;
    while (pbVar13 = pbStack_48, pbStack_58 != pbStack_50) {
      pbStack_50 = pbStack_50 + 1;
      pdb_14098f040(pbVar14);
      pbVar14 = pbVar14 + 0x60;
    }
    if (*(longlong *)(pbStack_48 + 0xb0) != 0) {
      pub_1406abac0(pbVar9,*(longlong *)(pbStack_48 + 0xb0) * 0x60,0x10);
    }
  }
  pbVar13[0x148] = 0;
  pbVar13[0x14c] = 0;
  pdb_14098a860(pbVar13 + 0x40);
  pbVar9 = pbStack_48;
  pbStack_48[0x149] = 0;
  puVar8 = *(undefined **)(pbStack_48 + 0xa0);
  lVar18 = *(longlong *)(pbStack_48 + 0xa8);
  if (lVar18 != 0) {
    puVar15 = (undefined8 *)((longlong)puVar8 + 0x20);
    do {
      if (puVar15[-4] != 0) {
        pub_1406abac0((byte *)puVar15[-3],puVar15[-4],1);
      }
      if (puVar15[-1] != 0) {
        pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
      }
      puVar15 = puVar15 + 7;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(longlong *)(pbVar9 + 0x98) == 0) {
LAB_142613cd6:
    return;
  }
  lVar18 = *(longlong *)(pbVar9 + 0x98) * 0x38;
code_r0x0001406abac0:
  puStack_40 = &UNK_140f3c37e;
  uVar7 = GetProcessHeap(puVar8,lVar18);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar7,0,puVar8);
  return;
}

