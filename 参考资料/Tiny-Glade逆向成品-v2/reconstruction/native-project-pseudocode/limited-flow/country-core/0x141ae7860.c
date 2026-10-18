// VA 0x141ae7860, PDB extent 4447 bytes
// core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 4447 */

void pdb_141ae7860(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulonglong **ppuVar12;
  undefined1 (*pauVar13) [16];
  undefined8 unaff_RBX;
  byte *pbVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  ulonglong *puStack_58;
  byte *pbStack_50;
  ulonglong *puStack_48;
  ulonglong *puStack_40;
  ulonglong *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  cVar2 = (char)param_1[0x1f];
  if (cVar2 == '\0') {
    if (*param_1 != 0) {
      pub_1406abac0((byte *)param_1[1],*param_1,1);
    }
    plVar4 = (longlong *)param_1[4];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 != 0) {
      return;
    }
    puStack_38 = (ulonglong *)0xfffffffffffffffe;
    puStack_40 = (ulonglong *)param_1[4];
    pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
    uStack_30 = unaff_RBX;
    pdb_140e50100();
    plVar4 = *(longlong **)((longlong)puStack_40 + 0x670);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e40750((longlong)puStack_40 + 0x670);
    }
    plVar4 = *(longlong **)((longlong)puStack_40 + 0x678);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e411d0((longlong)puStack_40 + 0x678);
    }
    plVar4 = *(longlong **)((longlong)puStack_40 + 0x680);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e41090((longlong)puStack_40 + 0x680);
    }
    puVar8 = puStack_40;
    plVar4 = *(longlong **)((longlong)puStack_40 + 0x688);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140740180((longlong)puStack_40 + 0x688);
    }
    pbVar11 = (byte *)((longlong)puVar8 + 0x698U);
    pdb_140e3b6a0();
    puVar9 = puStack_40;
    lVar3 = *(longlong *)((longlong)puVar8 + 0x698U);
    if (lVar3 == 0) {
      ppuVar12 = &puStack_48;
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)(lVar3 << 4);
      pbVar11 = *(byte **)((longlong)puStack_40 + 0x6a0);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar8;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pdb_140e3c5c0((longlong)puVar9 + 0x7b8);
    plVar4 = *(longlong **)((longlong)puStack_40 + 0x6b8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e404d0((longlong)puStack_40 + 0x6b8);
    }
    puVar8 = puStack_40;
    lVar3 = *(longlong *)((longlong)puStack_40 + 0x6c8);
    if (lVar3 != 0) {
      uVar18 = lVar3 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar19 = lVar3 + uVar18 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar18),uVar19,0x10);
      }
    }
    lVar3 = *(longlong *)((longlong)puVar8 + 0x890);
    if (lVar3 != 0) {
      lVar17 = *(longlong *)((longlong)puVar8 + 0x8a0);
      if (lVar17 != 0) {
        pauVar13 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
        auVar1 = *pauVar13;
        pauVar20 = pauVar13 + 1;
        uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar21 == 0) {
            do {
              auVar1 = *pauVar20;
              pauVar13 = pauVar13 + -0x28;
              pauVar20 = pauVar20 + 1;
              uVar21 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar21 == 0);
          }
          uVar5 = 0;
          for (uVar7 = uVar21; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          pdb_140e70a60((longlong)pauVar13 + (ulonglong)uVar5 * -0x28 + -8);
          uVar21 = uVar21 - 1 & uVar21;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar18 = lVar3 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar19 = lVar3 + uVar18 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar18),uVar19,0x10);
      }
    }
    if (*(longlong *)pbStack_50 != 0) {
      pdb_140e71180((longlong)puStack_40 + 0x20);
    }
    pdb_140e71180((longlong)puStack_40 + 0x6e0);
    pbVar11 = (byte *)((longlong)puStack_40 + 0x8b8);
    lVar3 = *(longlong *)((longlong)puStack_40 + 0x8e0);
    if (lVar3 != 0) {
      lVar17 = lVar3 * 0x20 + 0x20;
      uVar18 = lVar3 + lVar17 + 0x11;
      if (uVar18 != 0) {
        pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar17),uVar18,0x10);
      }
    }
    pbStack_50 = pbVar11;
    pdb_140e3b920();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppuVar12 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*(longlong *)pbStack_50 * 0x28);
      pbVar11 = *(byte **)((longlong)puStack_40 + 0x8c0);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pbVar11 = (byte *)((longlong)puVar8 + 0xa68);
    pbStack_50 = pbVar11;
    pdb_141e5de20();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppuVar12 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*(longlong *)pbStack_50 * 0x18);
      pbVar11 = *(byte **)((longlong)puStack_40 + 0xa70);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    if (*(longlong *)((longlong)puVar8 + 0xa88) == 0) {
      ppuVar12 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*(longlong *)((longlong)puVar8 + 0xa88) << 3);
      pbVar11 = *(byte **)((longlong)puVar8 + 0xa90);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pbVar11 = (byte *)((longlong)puVar8 + 0xaa0);
    pdb_140e3cd40();
    lVar3 = *(longlong *)((longlong)puStack_40 + 0xb20);
    puVar8 = puStack_40;
    if (lVar3 != 0) {
      lVar17 = *(longlong *)((longlong)puStack_40 + 0xb30);
      if (lVar17 != 0) {
        pauVar13 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
        auVar1 = *pauVar13;
        pauVar20 = pauVar13 + 1;
        uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if ((short)uVar21 == 0) {
            do {
              auVar1 = *pauVar20;
              pauVar13 = pauVar13 + -0x10;
              pauVar20 = pauVar20 + 1;
              uVar21 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar21 == 0);
          }
          iVar6 = 0;
          for (uVar5 = uVar21; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            iVar6 = iVar6 + 1;
          }
          pbVar11 = (byte *)((longlong)pauVar13 + (-8 - (ulonglong)(uint)(iVar6 << 4)));
          pdb_140e71920();
          uVar21 = uVar21 - 1 & uVar21;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      puVar8 = puStack_40;
      uVar18 = lVar3 * 0x11 + 0x21;
      if (uVar18 != 0) {
        pbVar11 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar3 * -0x10 + -0x10);
        pub_1406abac0(pbVar11,uVar18,0x10);
      }
    }
    if (*(longlong *)((longlong)puVar8 + 0x7a0) != 0) {
      pbVar11 = *(byte **)((longlong)puVar8 + 0x798);
      pub_1406abac0(pbVar11,*(longlong *)((longlong)puVar8 + 0x7a0) << 3,8);
    }
    if (*(longlong *)((longlong)puVar8 + 0x50) == 0) {
      ppuVar12 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*(longlong *)((longlong)puVar8 + 0x50) << 3);
      pbVar11 = *(byte **)((longlong)puVar8 + 0x58);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    pbVar11 = (byte *)((longlong)puVar8 + 0xb58);
    pbStack_50 = pbVar11;
    pdb_141e5e2b0();
    puVar8 = puStack_40;
    if (*(longlong *)pbStack_50 == 0) {
      ppuVar12 = &puStack_48;
      puVar9 = (ulonglong *)0x0;
    }
    else {
      puVar9 = (ulonglong *)(*(longlong *)pbStack_50 * 0x50);
      pbVar11 = *(byte **)((longlong)puStack_40 + 0xb60);
      puStack_48 = (ulonglong *)0x8;
      ppuVar12 = &puStack_58;
    }
    *ppuVar12 = puVar9;
    if ((puStack_48 != (ulonglong *)0x0) && (puStack_58 != (ulonglong *)0x0)) {
      pub_1406abac0(pbVar11,(ulonglong)puStack_58,(ulonglong)puStack_48);
    }
    if (puVar8 == (ulonglong *)0xffffffffffffffff) {
      return;
    }
    LOCK();
    plVar4 = (longlong *)((longlong)puVar8 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 != 0) {
      return;
    }
    uVar18 = 0xbb0;
    uVar19 = 8;
    goto code_r0x0001406abac0;
  }
  puStack_38 = param_1;
  if (cVar2 != '\x03') {
    if (cVar2 != '\x04') {
      return;
    }
    cVar2 = (char)param_1[0x47];
    if (cVar2 == '\x04') {
      puStack_48 = (ulonglong *)param_1[0x48];
      puStack_40 = (ulonglong *)param_1[0x49];
      if ((code *)*puStack_40 != (code *)0x0) {
        (*(code *)*puStack_40)(puStack_48);
      }
      if (puStack_40[1] != 0) {
        pub_1406abac0((byte *)puStack_48,puStack_40[1],puStack_40[2]);
      }
      plVar4 = (longlong *)puStack_38[0x4c];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140c79e90(puStack_38 + 0x4c);
      }
LAB_141ae7a7e:
      puVar8 = puStack_38;
      if (puStack_38[0x43] != 0) {
        pub_1406abac0((byte *)puStack_38[0x44],puStack_38[0x43],1);
      }
      uVar18 = puVar8[0x3d] - puVar8[0x3b];
      if (uVar18 != 0) {
        uVar18 = uVar18 >> 5;
        puVar16 = (undefined8 *)(puVar8[0x3b] + 8);
        do {
          if (puVar16[-1] != 0) {
            pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
          }
          puVar16 = puVar16 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (puVar8[0x3c] != 0) {
        pub_1406abac0((byte *)puVar8[0x3a],puVar8[0x3c] << 5,8);
      }
      pbVar11 = (byte *)puVar8[0x38];
      uVar18 = puVar8[0x39];
      if (uVar18 != 0) {
        pbVar14 = pbVar11 + 8;
        do {
          if (*(ulonglong *)(pbVar14 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
          }
          pbVar14 = pbVar14 + 0x18;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (puVar8[0x37] != 0) {
        pub_1406abac0(pbVar11,puVar8[0x37] * 0x18,8);
      }
      pdb_14098a860(puVar8 + 0x33);
      *(undefined2 *)((longlong)puStack_38 + 0x239) = 0;
    }
    else {
      if (cVar2 == '\x03') {
        puStack_48 = (ulonglong *)param_1[0x48];
        puStack_40 = (ulonglong *)param_1[0x49];
        if ((code *)*puStack_40 != (code *)0x0) {
          (*(code *)*puStack_40)(puStack_48);
        }
        if (puStack_40[1] != 0) {
          pub_1406abac0((byte *)puStack_48,puStack_40[1],puStack_40[2]);
        }
        goto LAB_141ae7a7e;
      }
      if (cVar2 == '\0') {
        pbVar11 = (byte *)param_1[0x2f];
        uVar18 = param_1[0x30];
        if (uVar18 != 0) {
          pbVar14 = pbVar11 + 8;
          do {
            if (*(ulonglong *)(pbVar14 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
            }
            pbVar14 = pbVar14 + 0x20;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (param_1[0x2e] != 0) {
          pub_1406abac0(pbVar11,param_1[0x2e] << 5,8);
        }
        plVar4 = (longlong *)param_1[0x32];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          pdb_140e3f860(puStack_38 + 0x32);
        }
      }
    }
    plVar4 = (longlong *)puStack_38[0x23];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd78e0(puStack_38 + 0x23);
    }
    plVar4 = (longlong *)puStack_38[0x24];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    pdb_142d8feb0(plVar4 + 1);
    *(undefined1 *)((longlong)puStack_38 + 0xfa) = 0;
    pdb_140967580(puStack_38 + 0x1c);
    goto LAB_141ae808d;
  }
  if (7 < *(byte *)((longlong)param_1 + 0x2dd)) goto LAB_141ae7fd8;
  puVar8 = param_1 + 0x32;
  switch(*(byte *)((longlong)param_1 + 0x2dd)) {
  case 0:
    pbVar11 = (byte *)param_1[0x59];
    uVar18 = param_1[0x5a];
    if (uVar18 != 0) {
      pbVar14 = pbVar11 + 0x20;
      do {
        if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar14 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
        }
        pbVar14 = pbVar14 + 0x38;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (param_1[0x58] != 0) {
      pub_1406abac0(pbVar11,param_1[0x58] * 0x38,8);
    }
    plVar4 = (longlong *)param_1[0x57];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e3f860(puStack_38 + 0x57);
    }
  default:
    goto LAB_141ae7fd8;
  case 3:
    puStack_40 = (ulonglong *)param_1[0x5c];
    pbStack_50 = (byte *)param_1[0x5d];
    puStack_48 = puVar8;
    if (*(code **)pbStack_50 != (code *)0x0) {
      (**(code **)pbStack_50)(puStack_40);
    }
    if (*(ulonglong *)(pbStack_50 + 8) != 0) {
      pub_1406abac0((byte *)puStack_40,*(ulonglong *)(pbStack_50 + 8),
                    *(ulonglong *)(pbStack_50 + 0x10));
    }
    goto code_r0x000141ae7e00;
  case 4:
    puStack_40 = (ulonglong *)param_1[0x5c];
    pbStack_50 = (byte *)param_1[0x5d];
    puStack_48 = puVar8;
    if (*(code **)pbStack_50 != (code *)0x0) {
      (**(code **)pbStack_50)(puStack_40);
    }
    if (*(ulonglong *)(pbStack_50 + 8) != 0) {
      pub_1406abac0((byte *)puStack_40,*(ulonglong *)(pbStack_50 + 8),
                    *(ulonglong *)(pbStack_50 + 0x10));
    }
    goto code_r0x000141ae7dbc;
  case 5:
    puStack_48 = puVar8;
    if (*(char *)((longlong)param_1 + 0x3e5) == '\x03') {
      pdb_1400d68e0(param_1 + 0x70);
      pdb_140973e80(puStack_38 + 0x68);
    }
    plVar4 = (longlong *)puStack_38[0x80];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140c7b710(puStack_38 + 0x80);
    }
code_r0x000141ae7dbc:
    plVar4 = (longlong *)puStack_38[0x55];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140c7a060(puStack_38 + 0x55);
    }
    plVar4 = (longlong *)puStack_38[0x40];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140c79e90(puStack_38 + 0x40);
    }
code_r0x000141ae7e00:
    pdb_140987940(puStack_48);
    break;
  case 6:
    pdb_141702d80(param_1 + 0x5c);
    break;
  case 7:
    puStack_48 = (ulonglong *)param_1[0x5c];
    puStack_40 = (ulonglong *)param_1[0x5d];
    if ((code *)*puStack_40 != (code *)0x0) {
      (*(code *)*puStack_40)(puStack_48);
    }
    if (puStack_40[1] != 0) {
      pub_1406abac0((byte *)puStack_48,puStack_40[1],puStack_40[2]);
    }
    plVar4 = (longlong *)puStack_38[0x60];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_141746a60(puStack_38 + 0x60);
    }
  }
  if (*(char *)((longlong)puStack_38 + 0x2da) != '\0') {
    pdb_14096d580(puStack_38 + 0x4e);
  }
  puVar8 = puStack_38;
  *(undefined1 *)((longlong)puStack_38 + 0x2da) = 0;
  pbVar11 = (byte *)puStack_38[0x4c];
  uVar18 = puStack_38[0x4d];
  if (uVar18 != 0) {
    pbVar14 = pbVar11 + 0x20;
    do {
      if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar14 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
      }
      pbVar14 = pbVar14 + 0x30;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (puVar8[0x4b] != 0) {
    pub_1406abac0(pbVar11,puVar8[0x4b] * 0x30,8);
  }
  *(undefined1 *)((longlong)puVar8 + 0x2db) = 0;
  if ((char)puVar8[0x5b] != '\0') {
    pbStack_50 = (byte *)puVar8[0x49];
    puStack_40 = (ulonglong *)puVar8[0x4a];
    puStack_48 = (ulonglong *)0x0;
    pbVar11 = pbStack_50;
    while (puVar8 = puStack_38, puStack_40 != puStack_48) {
      puStack_48 = (ulonglong *)((longlong)puStack_48 + 1);
      pdb_14098f040(pbVar11);
      pbVar11 = pbVar11 + 0x60;
    }
    if (puStack_38[0x48] != 0) {
      pub_1406abac0(pbStack_50,puStack_38[0x48] * 0x60,0x10);
    }
  }
  *(undefined1 *)(puVar8 + 0x5b) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x2dc) = 0;
  pdb_14098a860(puVar8 + 0x3a);
  puVar8 = puStack_38;
  *(undefined1 *)((longlong)puStack_38 + 0x2d9) = 0;
  pbVar11 = (byte *)puStack_38[0x46];
  uVar18 = puStack_38[0x47];
  if (uVar18 != 0) {
    pbVar14 = pbVar11 + 0x20;
    do {
      if (*(ulonglong *)(pbVar14 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar14 + -0x18),*(ulonglong *)(pbVar14 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar14 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar14,*(ulonglong *)(pbVar14 + -8),1);
      }
      pbVar14 = pbVar14 + 0x38;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (puVar8[0x45] != 0) {
    pub_1406abac0(pbVar11,puVar8[0x45] * 0x38,8);
  }
LAB_141ae7fd8:
  plVar4 = (longlong *)puStack_38[0x23];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    pdb_140dd78e0(puStack_38 + 0x23);
  }
  plVar4 = (longlong *)puStack_38[0x24];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  pdb_142d8feb0(plVar4 + 1);
  pdb_140967580(puStack_38 + 0x20);
  puVar8 = puStack_38;
  *(undefined1 *)((longlong)puStack_38 + 0xfb) = 0;
  if (puStack_38[0x27] != 0) {
    pub_1406abac0((byte *)puStack_38[0x28],puStack_38[0x27],1);
  }
  if (puVar8[0x2b] != 0) {
    pub_1406abac0((byte *)puVar8[0x2c],puVar8[0x2b],1);
  }
  if (puVar8[0x2e] != 0) {
    pub_1406abac0((byte *)puStack_38[0x2f],puVar8[0x2e],1);
  }
LAB_141ae808d:
  puVar8 = puStack_38;
  if (puStack_38[0x19] != 0) {
    pub_1406abac0((byte *)puStack_38[0x1a],puStack_38[0x19],1);
  }
  *(undefined1 *)((longlong)puVar8 + 0xfc) = 0;
  uVar18 = puVar8[0x14];
  if ((!SBORROW8(0,uVar18)) && (uVar18 != 0)) {
    pub_1406abac0((byte *)puVar8[0x15],uVar18,1);
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
    plVar4 = (longlong *)puStack_38[9];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140e3f860(puStack_38 + 9);
    }
  }
  *(undefined1 *)((longlong)puStack_38 + 0xf9) = 0;
  uVar18 = puStack_38[5];
  if (uVar18 == 0) {
    return;
  }
  puVar8 = (ulonglong *)puStack_38[6];
  uVar19 = 1;
code_r0x0001406abac0:
  uVar15 = (ulonglong)puVar8;
  if (0x10 < uVar19) {
    uVar15 = *(ulonglong *)((longlong)puVar8 - 8);
  }
  puStack_40 = (ulonglong *)&UNK_140f3c37e;
  uVar10 = GetProcessHeap(puVar8,uVar18);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar10,0,uVar15);
  return;
}

