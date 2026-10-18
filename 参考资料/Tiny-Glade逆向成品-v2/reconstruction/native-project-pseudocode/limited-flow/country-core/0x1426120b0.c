// VA 0x1426120b0, PDB extent 5018 bytes
// core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 5018 */

void pdb_1426120b0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined *puVar12;
  byte *pbVar13;
  ulonglong **ppuVar14;
  undefined1 (*pauVar15) [16];
  byte *pbVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  ulonglong *puStack_58;
  ulonglong *puStack_50;
  ulonglong *puStack_48;
  undefined *puStack_40;
  
  puStack_40 = (undefined *)0xfffffffffffffffe;
  cVar2 = (char)param_1[0x1f];
  if (cVar2 == '\0') {
    if (*param_1 != 0) {
      pub_1406abac0((byte *)param_1[1],*param_1,1);
    }
    plVar3 = (longlong *)param_1[4];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    puStack_40 = (undefined *)param_1[4];
    puStack_50 = (ulonglong *)((longlong)puStack_40 + 0x10);
    pdb_140e50100();
    plVar3 = *(longlong **)((longlong)puStack_40 + 0x670);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e40750((longlong)puStack_40 + 0x670);
    }
    plVar3 = *(longlong **)((longlong)puStack_40 + 0x678);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e411d0((longlong)puStack_40 + 0x678);
    }
    plVar3 = *(longlong **)((longlong)puStack_40 + 0x680);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e41090((longlong)puStack_40 + 0x680);
    }
    puVar12 = puStack_40;
    plVar3 = *(longlong **)((longlong)puStack_40 + 0x688);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140740180((longlong)puStack_40 + 0x688);
    }
    pbVar13 = (byte *)((longlong)puVar12 + 0x698U);
    pdb_140e3b6a0();
    puVar7 = puStack_40;
    lVar11 = *(longlong *)((longlong)puVar12 + 0x698U);
    if (lVar11 == 0) {
      ppuVar14 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(lVar11 << 4);
      pbVar13 = *(byte **)((longlong)puStack_40 + 0x6a0);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar13,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pdb_140e3c5c0((longlong)puVar7 + 0x7b8);
    plVar3 = *(longlong **)((longlong)puStack_40 + 0x6b8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e404d0((longlong)puStack_40 + 0x6b8);
    }
    puVar12 = puStack_40;
    lVar11 = *(longlong *)((longlong)puStack_40 + 0x6c8);
    if (lVar11 != 0) {
      uVar20 = lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar21 = lVar11 + uVar20 + 0x11;
      if (uVar21 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar20),uVar21,0x10);
      }
    }
    lVar11 = *(longlong *)((longlong)puVar12 + 0x890);
    if (lVar11 != 0) {
      lVar19 = *(longlong *)((longlong)puVar12 + 0x8a0);
      if (lVar19 != 0) {
        pauVar15 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
        auVar1 = *pauVar15;
        pauVar22 = pauVar15 + 1;
        uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar23 == 0) {
            do {
              auVar1 = *pauVar22;
              pauVar15 = pauVar15 + -0x28;
              pauVar22 = pauVar22 + 1;
              uVar23 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar23 == 0);
          }
          uVar4 = 0;
          for (uVar6 = uVar23; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          pdb_140e70a60((longlong)pauVar15 + (ulonglong)uVar4 * -0x28 + -8);
          uVar23 = uVar23 - 1 & uVar23;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      uVar20 = lVar11 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar21 = lVar11 + uVar20 + 0x11;
      if (uVar21 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar20),uVar21,0x10);
      }
    }
    if (*puStack_50 != 0) {
      pdb_140e71180((longlong)puStack_40 + 0x20);
    }
    pdb_140e71180((longlong)puStack_40 + 0x6e0);
    pbVar13 = (byte *)((longlong)puStack_40 + 0x8b8);
    lVar11 = *(longlong *)((longlong)puStack_40 + 0x8e0);
    if (lVar11 != 0) {
      lVar19 = lVar11 * 0x20 + 0x20;
      uVar20 = lVar11 + lVar19 + 0x11;
      if (uVar20 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar19),uVar20,0x10);
      }
    }
    puStack_50 = (ulonglong *)pbVar13;
    pdb_140e3b920();
    puVar12 = puStack_40;
    if (*puStack_50 == 0) {
      ppuVar14 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(*puStack_50 * 0x28);
      pbVar13 = *(byte **)((longlong)puStack_40 + 0x8c0);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar13,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pbVar13 = (byte *)((longlong)puVar12 + 0xa68);
    puStack_50 = (ulonglong *)pbVar13;
    pdb_141e5de20();
    puVar12 = puStack_40;
    if (*puStack_50 == 0) {
      ppuVar14 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(*puStack_50 * 0x18);
      pbVar13 = *(byte **)((longlong)puStack_40 + 0xa70);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar13,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    if (*(longlong *)((longlong)puVar12 + 0xa88) == 0) {
      ppuVar14 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(*(longlong *)((longlong)puVar12 + 0xa88) << 3);
      pbVar13 = *(byte **)((longlong)puVar12 + 0xa90);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar13,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pbVar13 = (byte *)((longlong)puVar12 + 0xaa0);
    pdb_140e3cd40();
    lVar11 = *(longlong *)((longlong)puStack_40 + 0xb20);
    puVar12 = puStack_40;
    if (lVar11 != 0) {
      lVar19 = *(longlong *)((longlong)puStack_40 + 0xb30);
      if (lVar19 != 0) {
        pauVar15 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
        auVar1 = *pauVar15;
        pauVar22 = pauVar15 + 1;
        uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar23 == 0) {
            do {
              auVar1 = *pauVar22;
              pauVar15 = pauVar15 + -0x10;
              pauVar22 = pauVar22 + 1;
              uVar23 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar23 == 0);
          }
          iVar5 = 0;
          for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          pbVar13 = (byte *)((longlong)pauVar15 + (-8 - (ulonglong)(uint)(iVar5 << 4)));
          pdb_140e71920();
          uVar23 = uVar23 - 1 & uVar23;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      puVar12 = puStack_40;
      uVar20 = lVar11 * 0x11 + 0x21;
      if (uVar20 != 0) {
        pbVar13 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar11 * -0x10 + -0x10);
        pub_1406abac0(pbVar13,uVar20,0x10);
      }
    }
    if (*(longlong *)((longlong)puVar12 + 0x7a0) != 0) {
      pbVar13 = *(byte **)((longlong)puVar12 + 0x798);
      pub_1406abac0(pbVar13,*(longlong *)((longlong)puVar12 + 0x7a0) << 3,8);
    }
    if (*(longlong *)((longlong)puVar12 + 0x50) == 0) {
      ppuVar14 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(*(longlong *)((longlong)puVar12 + 0x50) << 3);
      pbVar13 = *(byte **)((longlong)puVar12 + 0x58);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar13,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    puVar8 = (ulonglong *)((longlong)puVar12 + 0xb58);
    puStack_50 = puVar8;
    pdb_141e5e2b0();
    puVar12 = puStack_40;
    if (*puStack_50 == 0) {
      ppuVar14 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*puStack_50 * 0x50);
      puVar8 = *(ulonglong **)((longlong)puStack_40 + 0xb60);
      puStack_48 = (ulonglong *)0x8;
      ppuVar14 = &puStack_58;
    }
    *ppuVar14 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0((byte *)puVar8,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    if (puVar12 == (undefined *)0xffffffffffffffff) {
      return;
    }
    LOCK();
    plVar3 = (longlong *)((longlong)puVar12 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    uVar20 = 0xbb0;
    uVar21 = 8;
    goto code_r0x0001406abac0;
  }
  puStack_48 = param_1;
  if (cVar2 != '\x03') {
    if (cVar2 != '\x04') {
      return;
    }
    cVar2 = (char)param_1[0x47];
    if (cVar2 == '\x04') {
      puStack_58 = (ulonglong *)param_1[0x48];
      puStack_50 = (ulonglong *)param_1[0x49];
      if ((code *)*puStack_50 != (code *)0x0) {
        (*(code *)*puStack_50)(puStack_58);
      }
      if (puStack_50[1] != 0) {
        pub_1406abac0((byte *)puStack_58,puStack_50[1],puStack_50[2]);
      }
      plVar3 = (longlong *)puStack_48[0x4c];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140c79e90(puStack_48 + 0x4c);
      }
LAB_1426122d2:
      puVar8 = puStack_48;
      if (puStack_48[0x43] != 0) {
        pub_1406abac0((byte *)puStack_48[0x44],puStack_48[0x43],1);
      }
      uVar20 = puVar8[0x3d] - puVar8[0x3b];
      if (uVar20 != 0) {
        uVar20 = uVar20 >> 5;
        puVar18 = (undefined8 *)(puVar8[0x3b] + 8);
        do {
          if (puVar18[-1] != 0) {
            pub_1406abac0((byte *)*puVar18,puVar18[-1],1);
          }
          puVar18 = puVar18 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (puVar8[0x3c] != 0) {
        pub_1406abac0((byte *)puVar8[0x3a],puVar8[0x3c] << 5,8);
      }
      pbVar13 = (byte *)puVar8[0x38];
      uVar20 = puVar8[0x39];
      if (uVar20 != 0) {
        pbVar16 = pbVar13 + 8;
        do {
          if (*(ulonglong *)(pbVar16 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
          }
          pbVar16 = pbVar16 + 0x18;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (puVar8[0x37] != 0) {
        pub_1406abac0(pbVar13,puVar8[0x37] * 0x18,8);
      }
      pdb_14098a860(puVar8 + 0x33);
      *(undefined2 *)((longlong)puStack_48 + 0x239) = 0;
    }
    else {
      if (cVar2 == '\x03') {
        puStack_58 = (ulonglong *)param_1[0x48];
        puStack_50 = (ulonglong *)param_1[0x49];
        if ((code *)*puStack_50 != (code *)0x0) {
          (*(code *)*puStack_50)(puStack_58);
        }
        if (puStack_50[1] != 0) {
          pub_1406abac0((byte *)puStack_58,puStack_50[1],puStack_50[2]);
        }
        goto LAB_1426122d2;
      }
      if (cVar2 == '\0') {
        pbVar13 = (byte *)param_1[0x2f];
        uVar20 = param_1[0x30];
        if (uVar20 != 0) {
          pbVar16 = pbVar13 + 8;
          do {
            if (*(ulonglong *)(pbVar16 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
            }
            pbVar16 = pbVar16 + 0x20;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        if (param_1[0x2e] != 0) {
          pub_1406abac0(pbVar13,param_1[0x2e] << 5,8);
        }
        plVar3 = (longlong *)param_1[0x32];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          pdb_140e3f860(puStack_48 + 0x32);
        }
      }
    }
    plVar3 = (longlong *)puStack_48[0x23];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140dd78e0(puStack_48 + 0x23);
    }
    plVar3 = (longlong *)puStack_48[0x24];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    pdb_142d8feb0(plVar3 + 1);
    *(undefined1 *)((longlong)puStack_48 + 0xfa) = 0;
    pdb_140967580(puStack_48 + 0x1c);
    goto LAB_1426129ed;
  }
  if (7 < *(byte *)((longlong)param_1 + 0x2dd)) goto LAB_142612938;
  puVar8 = param_1 + 0x32;
  switch(*(byte *)((longlong)param_1 + 0x2dd)) {
  case 0:
    pbVar13 = (byte *)param_1[0x59];
    uVar20 = param_1[0x5a];
    if (uVar20 != 0) {
      pbVar16 = pbVar13 + 0x20;
      do {
        if (*(ulonglong *)(pbVar16 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar16 + -0x18),*(ulonglong *)(pbVar16 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar16 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
        }
        pbVar16 = pbVar16 + 0x38;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (param_1[0x58] != 0) {
      pub_1406abac0(pbVar13,param_1[0x58] * 0x38,8);
    }
    plVar3 = (longlong *)param_1[0x57];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e3f860(puStack_48 + 0x57);
    }
  default:
    goto LAB_142612938;
  case 3:
    puStack_50 = (ulonglong *)param_1[0x5c];
    puVar18 = (undefined8 *)param_1[0x5d];
    puStack_58 = puVar8;
    if ((code *)*puVar18 != (code *)0x0) {
      (*(code *)*puVar18)(puStack_50);
    }
    if (puVar18[1] != 0) {
      pub_1406abac0((byte *)puStack_50,puVar18[1],puVar18[2]);
    }
    goto code_r0x000142612770;
  case 4:
    puStack_50 = (ulonglong *)param_1[0x5c];
    puVar18 = (undefined8 *)param_1[0x5d];
    puStack_58 = puVar8;
    if ((code *)*puVar18 != (code *)0x0) {
      (*(code *)*puVar18)(puStack_50);
    }
    if (puVar18[1] != 0) {
      pub_1406abac0((byte *)puStack_50,puVar18[1],puVar18[2]);
    }
    goto code_r0x00014261272c;
  case 5:
    puStack_58 = puVar8;
    if (*(char *)((longlong)param_1 + 0x3e5) == '\x03') {
      puStack_50 = (ulonglong *)param_1[0x70];
      puVar18 = (undefined8 *)param_1[0x71];
      if ((code *)*puVar18 != (code *)0x0) {
        (*(code *)*puVar18)(puStack_50);
      }
      if (puVar18[1] != 0) {
        pub_1406abac0((byte *)puStack_50,puVar18[1],puVar18[2]);
      }
      param_1 = puStack_48;
      uVar20 = puStack_48[0x69];
      if (uVar20 != 0) {
        uVar21 = puStack_48[0x6b];
        if (uVar21 != 0) {
          pauVar15 = (undefined1 (*) [16])puStack_48[0x68];
          auVar1 = *pauVar15;
          pauVar22 = pauVar15 + 1;
          uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            if ((short)uVar23 == 0) {
              do {
                auVar1 = *pauVar22;
                pauVar15 = pauVar15 + -0x20;
                pauVar22 = pauVar22 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar23 == 0);
            }
            iVar5 = 0;
            for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            uVar17 = *(ulonglong *)((longlong)pauVar15 + (-0x18 - (ulonglong)(uint)(iVar5 << 5)));
            if (uVar17 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar15 + (-0x10 - (ulonglong)(uint)(iVar5 << 5)))
                            ,uVar17,1);
            }
            uVar23 = uVar23 - 1 & uVar23;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        lVar11 = uVar20 * 0x20 + 0x20;
        uVar20 = uVar20 + lVar11 + 0x11;
        if (uVar20 != 0) {
          pub_1406abac0((byte *)(param_1[0x68] - lVar11),uVar20,0x10);
        }
      }
    }
    plVar3 = (longlong *)param_1[0x80];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c7b710(puStack_48 + 0x80);
    }
code_r0x00014261272c:
    plVar3 = (longlong *)puStack_48[0x55];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c7a060(puStack_48 + 0x55);
    }
    plVar3 = (longlong *)puStack_48[0x40];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c79e90(puStack_48 + 0x40);
    }
code_r0x000142612770:
    pdb_140987940(puStack_58);
    break;
  case 6:
    pdb_141702d80(param_1 + 0x5c);
    break;
  case 7:
    puStack_58 = (ulonglong *)param_1[0x5c];
    puStack_50 = (ulonglong *)param_1[0x5d];
    if ((code *)*puStack_50 != (code *)0x0) {
      (*(code *)*puStack_50)(puStack_58);
    }
    if (puStack_50[1] != 0) {
      pub_1406abac0((byte *)puStack_58,puStack_50[1],puStack_50[2]);
    }
    plVar3 = (longlong *)puStack_48[0x60];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_141746a60(puStack_48 + 0x60);
    }
  }
  if (*(char *)((longlong)puStack_48 + 0x2da) != '\0') {
    pdb_14096d580(puStack_48 + 0x4e);
  }
  puVar8 = puStack_48;
  *(undefined1 *)((longlong)puStack_48 + 0x2da) = 0;
  pbVar13 = (byte *)puStack_48[0x4c];
  uVar20 = puStack_48[0x4d];
  if (uVar20 != 0) {
    pbVar16 = pbVar13 + 0x20;
    do {
      if (*(ulonglong *)(pbVar16 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar16 + -0x18),*(ulonglong *)(pbVar16 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar16 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
      }
      pbVar16 = pbVar16 + 0x30;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (puVar8[0x4b] != 0) {
    pub_1406abac0(pbVar13,puVar8[0x4b] * 0x30,8);
  }
  *(undefined1 *)((longlong)puVar8 + 0x2db) = 0;
  if ((char)puVar8[0x5b] != '\0') {
    pbVar13 = (byte *)puVar8[0x49];
    puStack_50 = (ulonglong *)puVar8[0x4a];
    puStack_58 = (ulonglong *)0x0;
    pbVar16 = pbVar13;
    while (puVar8 = puStack_48, puStack_50 != puStack_58) {
      puStack_58 = (ulonglong *)((longlong)puStack_58 + 1);
      pdb_14098f040(pbVar16);
      pbVar16 = pbVar16 + 0x60;
    }
    if (puStack_48[0x48] != 0) {
      pub_1406abac0(pbVar13,puStack_48[0x48] * 0x60,0x10);
    }
  }
  *(undefined1 *)(puVar8 + 0x5b) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x2dc) = 0;
  pdb_14098a860(puVar8 + 0x3a);
  puVar8 = puStack_48;
  *(undefined1 *)((longlong)puStack_48 + 0x2d9) = 0;
  pbVar13 = (byte *)puStack_48[0x46];
  uVar20 = puStack_48[0x47];
  if (uVar20 != 0) {
    pbVar16 = pbVar13 + 0x20;
    do {
      if (*(ulonglong *)(pbVar16 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar16 + -0x18),*(ulonglong *)(pbVar16 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar16 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
      }
      pbVar16 = pbVar16 + 0x38;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (puVar8[0x45] != 0) {
    pub_1406abac0(pbVar13,puVar8[0x45] * 0x38,8);
  }
LAB_142612938:
  plVar3 = (longlong *)puStack_48[0x23];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    pdb_140dd78e0(puStack_48 + 0x23);
  }
  plVar3 = (longlong *)puStack_48[0x24];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  pdb_142d8feb0(plVar3 + 1);
  pdb_140967580(puStack_48 + 0x20);
  puVar8 = puStack_48;
  *(undefined1 *)((longlong)puStack_48 + 0xfb) = 0;
  if (puStack_48[0x27] != 0) {
    pub_1406abac0((byte *)puStack_48[0x28],puStack_48[0x27],1);
  }
  if (puVar8[0x2b] != 0) {
    pub_1406abac0((byte *)puVar8[0x2c],puVar8[0x2b],1);
  }
  if (puVar8[0x2e] != 0) {
    pub_1406abac0((byte *)puStack_48[0x2f],puVar8[0x2e],1);
  }
LAB_1426129ed:
  puVar8 = puStack_48;
  if (puStack_48[0x19] != 0) {
    pub_1406abac0((byte *)puStack_48[0x1a],puStack_48[0x19],1);
  }
  *(undefined1 *)((longlong)puVar8 + 0xfc) = 0;
  uVar20 = puVar8[0x14];
  if ((!SBORROW8(0,uVar20)) && (uVar20 != 0)) {
    pub_1406abac0((byte *)puVar8[0x15],uVar20,1);
  }
  *(undefined1 *)((longlong)puVar8 + 0xfd) = 0;
  if (puVar8[0xd] != 0) {
    pub_1406abac0((byte *)puVar8[0xe],puVar8[0xd],1);
  }
  *(undefined1 *)((longlong)puVar8 + 0xfe) = 0;
  if (puVar8[10] != 0) {
    pub_1406abac0((byte *)puVar8[0xb],puVar8[10],1);
  }
  *(undefined1 *)((longlong)puVar8 + 0xff) = 0;
  if (*(char *)((longlong)puVar8 + 0xf9) != '\0') {
    plVar3 = (longlong *)puStack_48[9];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e3f860(puStack_48 + 9);
    }
  }
  *(undefined1 *)((longlong)puStack_48 + 0xf9) = 0;
  uVar20 = puStack_48[5];
  if (uVar20 == 0) {
    return;
  }
  puVar12 = (undefined *)puStack_48[6];
  uVar21 = 1;
code_r0x0001406abac0:
  uVar17 = (ulonglong)puVar12;
  if (0x10 < uVar21) {
    uVar17 = *(ulonglong *)((longlong)puVar12 - 8);
  }
  puStack_40 = &UNK_140f3c37e;
  uVar10 = GetProcessHeap(puVar12,uVar20);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar10,0,uVar17);
  return;
}

