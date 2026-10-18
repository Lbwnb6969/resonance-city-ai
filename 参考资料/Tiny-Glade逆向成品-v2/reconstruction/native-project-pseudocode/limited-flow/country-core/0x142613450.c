// VA 0x142613450, PDB extent 407 bytes
// core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::startup::load_clutter_packs::impl$0::spawn::async_block_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 407 */

void pdb_142613450(longlong param_1)

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
  byte *pbVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined *puVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  bool bVar25;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined *puStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  puVar12 = &uStack_58;
  puVar14 = &uStack_58;
  puVar15 = &uStack_58;
  puVar16 = &uStack_58;
  puVar17 = &uStack_58;
  puVar18 = &uStack_58;
  uStack_30 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x2b2) == '\0') {
    pbVar10 = *(byte **)(param_1 + 0x2a0);
    lVar22 = *(longlong *)(param_1 + 0x2a8);
    if (lVar22 != 0) {
      pbVar8 = pbVar10 + 0x20;
      do {
        if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x38;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      pub_1406abac0(pbVar10,*(longlong *)(param_1 + 0x298) * 0x38,8);
    }
    plVar11 = *(longlong **)(param_1 + 0x290);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      lStack_38 = 0xfffffffffffffffe;
      puStack_40 = *(undefined **)(param_1 + 0x290);
      pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
      pdb_140e50100();
      plVar11 = *(longlong **)((longlong)puStack_40 + 0x670);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        pdb_140e40750((longlong)puStack_40 + 0x670);
      }
      plVar11 = *(longlong **)((longlong)puStack_40 + 0x678);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        pdb_140e411d0((longlong)puStack_40 + 0x678);
      }
      plVar11 = *(longlong **)((longlong)puStack_40 + 0x680);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        pdb_140e41090((longlong)puStack_40 + 0x680);
      }
      puVar21 = puStack_40;
      plVar11 = *(longlong **)((longlong)puStack_40 + 0x688);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        pdb_140740180((longlong)puStack_40 + 0x688);
      }
      pbVar10 = (byte *)((longlong)puVar21 + 0x698);
      pdb_140e3b6a0();
      puVar5 = puStack_40;
      lVar22 = *(longlong *)((longlong)puVar21 + 0x698);
      if (lVar22 == 0) {
        puVar12 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = lVar22 << 4;
        pbVar10 = *(byte **)((longlong)puStack_40 + 0x6a0);
        uStack_48 = 8;
      }
      *puVar12 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      pdb_140e3c5c0((longlong)puVar5 + 0x7b8);
      plVar11 = *(longlong **)((longlong)puStack_40 + 0x6b8);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        pdb_140e404d0((longlong)puStack_40 + 0x6b8);
      }
      puVar21 = puStack_40;
      lVar22 = *(longlong *)((longlong)puStack_40 + 0x6c8);
      if (lVar22 != 0) {
        uVar6 = lVar22 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar13 = lVar22 + uVar6 + 0x11;
        if (uVar13 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar6),uVar13,0x10);
        }
      }
      lVar22 = *(longlong *)((longlong)puVar21 + 0x890);
      if (lVar22 != 0) {
        lVar20 = *(longlong *)((longlong)puVar21 + 0x8a0);
        if (lVar20 != 0) {
          pauVar19 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
          auVar1 = *pauVar19;
          pauVar23 = pauVar19 + 1;
          uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            if ((short)uVar24 == 0) {
              do {
                auVar1 = *pauVar23;
                pauVar19 = pauVar19 + -0x28;
                pauVar23 = pauVar23 + 1;
                uVar24 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar24 == 0);
            }
            uVar2 = 0;
            for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            pdb_140e70a60((longlong)pauVar19 + (ulonglong)uVar2 * -0x28 + -8);
            uVar24 = uVar24 - 1 & uVar24;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        uVar6 = lVar22 * 0x28 + 0x37U & 0xfffffffffffffff0;
        uVar13 = lVar22 + uVar6 + 0x11;
        if (uVar13 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar6),uVar13,0x10);
        }
      }
      if (*(longlong *)pbStack_50 != 0) {
        pdb_140e71180((longlong)puStack_40 + 0x20);
      }
      pdb_140e71180((longlong)puStack_40 + 0x6e0);
      pbVar10 = (byte *)((longlong)puStack_40 + 0x8b8);
      lVar22 = *(longlong *)((longlong)puStack_40 + 0x8e0);
      if (lVar22 != 0) {
        lVar20 = lVar22 * 0x20 + 0x20;
        uVar6 = lVar22 + lVar20 + 0x11;
        if (uVar6 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar20),uVar6,0x10);
        }
      }
      pbStack_50 = pbVar10;
      pdb_140e3b920();
      puVar21 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        puVar14 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = *(longlong *)pbStack_50 * 0x28;
        pbVar10 = *(byte **)((longlong)puStack_40 + 0x8c0);
        uStack_48 = 8;
      }
      *puVar14 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      pbVar10 = (byte *)((longlong)puVar21 + 0xa68);
      pbStack_50 = pbVar10;
      pdb_141e5de20();
      puVar21 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        puVar15 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = *(longlong *)pbStack_50 * 0x18;
        pbVar10 = *(byte **)((longlong)puStack_40 + 0xa70);
        uStack_48 = 8;
      }
      *puVar15 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      if (*(longlong *)((longlong)puVar21 + 0xa88) == 0) {
        puVar16 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = *(longlong *)((longlong)puVar21 + 0xa88) << 3;
        pbVar10 = *(byte **)((longlong)puVar21 + 0xa90);
        uStack_48 = 8;
      }
      *puVar16 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      pbVar10 = (byte *)((longlong)puVar21 + 0xaa0);
      pdb_140e3cd40();
      lVar22 = *(longlong *)((longlong)puStack_40 + 0xb20);
      puVar21 = puStack_40;
      if (lVar22 != 0) {
        lVar20 = *(longlong *)((longlong)puStack_40 + 0xb30);
        if (lVar20 != 0) {
          pauVar19 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
          auVar1 = *pauVar19;
          pauVar23 = pauVar19 + 1;
          uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            if ((short)uVar24 == 0) {
              do {
                auVar1 = *pauVar23;
                pauVar19 = pauVar19 + -0x10;
                pauVar23 = pauVar23 + 1;
                uVar24 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar24 == 0);
            }
            iVar3 = 0;
            for (uVar2 = uVar24; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
              iVar3 = iVar3 + 1;
            }
            pbVar10 = (byte *)((longlong)pauVar19 + (-8 - (ulonglong)(uint)(iVar3 << 4)));
            pdb_140e71920();
            uVar24 = uVar24 - 1 & uVar24;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        puVar21 = puStack_40;
        uVar6 = lVar22 * 0x11 + 0x21;
        if (uVar6 != 0) {
          pbVar10 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar22 * -0x10 + -0x10);
          pub_1406abac0(pbVar10,uVar6,0x10);
        }
      }
      if (*(longlong *)((longlong)puVar21 + 0x7a0) != 0) {
        pbVar10 = *(byte **)((longlong)puVar21 + 0x798);
        pub_1406abac0(pbVar10,*(longlong *)((longlong)puVar21 + 0x7a0) << 3,8);
      }
      if (*(longlong *)((longlong)puVar21 + 0x50) == 0) {
        puVar17 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = *(longlong *)((longlong)puVar21 + 0x50) << 3;
        pbVar10 = *(byte **)((longlong)puVar21 + 0x58);
        uStack_48 = 8;
      }
      *puVar17 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      pbVar10 = (byte *)((longlong)puVar21 + 0xb58);
      pbStack_50 = pbVar10;
      pdb_141e5e2b0();
      puVar21 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        puVar18 = &uStack_48;
        uVar6 = 0;
      }
      else {
        uVar6 = *(longlong *)pbStack_50 * 0x50;
        pbVar10 = *(byte **)((longlong)puStack_40 + 0xb60);
        uStack_48 = 8;
      }
      *puVar18 = uVar6;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar10,uStack_58,uStack_48);
      }
      if (puVar21 != (undefined *)0xffffffffffffffff) {
        LOCK();
        plVar11 = (longlong *)((longlong)puVar21 + 8);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          puStack_40 = &UNK_140f3c37e;
          uVar7 = GetProcessHeap(puVar21,0xbb0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          HeapFree(uVar7,0,puVar21);
          return;
        }
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2b2) == '\x03') {
    lStack_38 = param_1;
    pdb_142613760(param_1);
    plVar11 = *(longlong **)(lStack_38 + 0x280);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      pdb_140dd78e0(lStack_38 + 0x280);
    }
    plVar11 = *(longlong **)(lStack_38 + 0x288);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    plVar11 = plVar11 + 1;
    puStack_40 = &UNK_142d8fec3;
    uVar7 = pdb_140f2ee90(1);
    LOCK();
    UNLOCK();
    pbVar10 = (byte *)*plVar11;
    if ((byte *)*plVar11 == (byte *)0x0) {
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
      pbVar9 = (byte *)*plVar11;
      bVar25 = pbVar9 == (byte *)0x0;
      if (bVar25) {
        *plVar11 = (longlong)(pbVar8 + 0x10);
        pbVar9 = (byte *)0x0;
      }
      UNLOCK();
      pbVar10 = pbVar8 + 0x10;
      if (!bVar25) {
        LOCK();
        *(longlong *)pbVar8 = *(longlong *)pbVar8 + -1;
        UNLOCK();
        pbVar10 = pbVar9;
        if (*(longlong *)pbVar8 == 0) {
          puStack_40 = &UNK_142d8ff56;
          pdb_140c7a9d0(&stack0xffffffffffffffe8);
        }
      }
    }
    puStack_40 = &UNK_142d8ff64;
    pdb_142dc5860(pbVar10,uVar7);
    return;
  }
  return;
}

