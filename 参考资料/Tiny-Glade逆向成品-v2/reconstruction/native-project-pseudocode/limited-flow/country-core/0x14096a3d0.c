// VA 0x14096a3d0, PDB extent 5070 bytes
// core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 5070 */

void pdb_14096a3d0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulonglong *puVar11;
  byte **ppbVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  byte *pbStack_58;
  ulonglong *puStack_50;
  byte *pbStack_48;
  
  pbStack_48 = (byte *)0xfffffffffffffffe;
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
    uVar14 = param_1[4];
    puStack_50 = (ulonglong *)(uVar14 + 0x10);
    pdb_140e50100();
    plVar3 = *(longlong **)(uVar14 + 0x670);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e40750(uVar14 + 0x670);
    }
    plVar3 = *(longlong **)(uVar14 + 0x678);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e411d0(uVar14 + 0x678);
    }
    plVar3 = *(longlong **)(uVar14 + 0x680);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e41090(uVar14 + 0x680);
    }
    plVar3 = *(longlong **)(uVar14 + 0x688);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140740180(uVar14 + 0x688);
    }
    pbVar10 = (byte *)(uVar14 + 0x698);
    pdb_140e3b6a0();
    lVar4 = *(longlong *)(uVar14 + 0x698);
    if (lVar4 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(lVar4 << 4);
      pbVar10 = *(byte **)(uVar14 + 0x6a0);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar10,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pdb_140e3c5c0(uVar14 + 0x7b8);
    plVar3 = *(longlong **)(uVar14 + 0x6b8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e404d0(uVar14 + 0x6b8);
    }
    lVar4 = *(longlong *)(uVar14 + 0x6c8);
    if (lVar4 != 0) {
      uVar18 = lVar4 * 0x18 + 0x27U & 0xfffffffffffffff0;
      uVar19 = lVar4 + uVar18 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(uVar14 + 0x6c0) - uVar18),uVar19,0x10);
      }
    }
    lVar4 = *(longlong *)(uVar14 + 0x890);
    if (lVar4 != 0) {
      lVar17 = *(longlong *)(uVar14 + 0x8a0);
      if (lVar17 != 0) {
        pauVar13 = *(undefined1 (**) [16])(uVar14 + 0x888);
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
      uVar18 = lVar4 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar19 = lVar4 + uVar18 + 0x11;
      if (uVar19 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(uVar14 + 0x888) - uVar18),uVar19,0x10);
      }
    }
    if (*puStack_50 != 0) {
      pdb_140e71180(uVar14 + 0x20);
    }
    pdb_140e71180(uVar14 + 0x6e0);
    pbVar10 = (byte *)(uVar14 + 0x8b8);
    lVar4 = *(longlong *)(uVar14 + 0x8e0);
    if (lVar4 != 0) {
      lVar17 = lVar4 * 0x20 + 0x20;
      uVar18 = lVar4 + lVar17 + 0x11;
      if (uVar18 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(uVar14 + 0x8d8) - lVar17),uVar18,0x10);
      }
    }
    puStack_50 = (ulonglong *)pbVar10;
    pdb_140e3b920();
    if (*puStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*puStack_50 * 0x28);
      pbVar10 = *(byte **)(uVar14 + 0x8c0);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar10,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar10 = (byte *)(uVar14 + 0xa68);
    puStack_50 = (ulonglong *)pbVar10;
    pdb_141e5de20();
    if (*puStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*puStack_50 * 0x18);
      pbVar10 = *(byte **)(uVar14 + 0xa70);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar10,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (*(longlong *)(uVar14 + 0xa88) == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)(uVar14 + 0xa88) << 3);
      pbVar10 = *(byte **)(uVar14 + 0xa90);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar10,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    pbVar10 = (byte *)(uVar14 + 0xaa0);
    pdb_140e3cd40();
    lVar4 = *(longlong *)(uVar14 + 0xb20);
    if (lVar4 != 0) {
      lVar17 = *(longlong *)(uVar14 + 0xb30);
      if (lVar17 != 0) {
        pauVar13 = *(undefined1 (**) [16])(uVar14 + 0xb18);
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
          pbVar10 = (byte *)((longlong)pauVar13 + (-8 - (ulonglong)(uint)(iVar6 << 4)));
          pdb_140e71920();
          uVar21 = uVar21 - 1 & uVar21;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar18 = lVar4 * 0x11 + 0x21;
      if (uVar18 != 0) {
        pbVar10 = (byte *)(*(longlong *)(uVar14 + 0xb18) + lVar4 * -0x10 + -0x10);
        pub_1406abac0(pbVar10,uVar18,0x10);
      }
    }
    if (*(longlong *)(uVar14 + 0x7a0) != 0) {
      pbVar10 = *(byte **)(uVar14 + 0x798);
      pub_1406abac0(pbVar10,*(longlong *)(uVar14 + 0x7a0) << 3,8);
    }
    if (*(longlong *)(uVar14 + 0x50) == 0) {
      ppbVar12 = &pbStack_48;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)(*(longlong *)(uVar14 + 0x50) << 3);
      pbVar10 = *(byte **)(uVar14 + 0x58);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar8;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0(pbVar10,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    puVar11 = (ulonglong *)(uVar14 + 0xb58);
    puStack_50 = puVar11;
    pdb_141e5e2b0();
    if (*puStack_50 == 0) {
      ppbVar12 = &pbStack_48;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = (byte *)(*puStack_50 * 0x50);
      puVar11 = *(ulonglong **)(uVar14 + 0xb60);
      pbStack_48 = (byte *)0x8;
      ppbVar12 = &pbStack_58;
    }
    *ppbVar12 = pbVar10;
    if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
      pub_1406abac0((byte *)puVar11,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
    }
    if (uVar14 == 0xffffffffffffffff) {
      return;
    }
    LOCK();
    plVar3 = (longlong *)(uVar14 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    uVar18 = 0xbb0;
    uVar19 = 8;
    goto code_r0x0001406abac0;
  }
  puStack_50 = param_1;
  if (cVar2 != '\x03') {
    if (cVar2 != '\x04') {
      return;
    }
    cVar2 = (char)param_1[0x47];
    if (cVar2 == '\x04') {
      pbVar10 = (byte *)param_1[0x48];
      pbStack_58 = (byte *)param_1[0x49];
      if (*(code **)pbStack_58 != (code *)0x0) {
        (**(code **)pbStack_58)(pbVar10);
      }
      if (*(ulonglong *)(pbStack_58 + 8) != 0) {
        pub_1406abac0(pbVar10,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
      }
      plVar3 = (longlong *)puStack_50[0x4c];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140c79e90(puStack_50 + 0x4c);
      }
LAB_14096a5f4:
      puVar11 = puStack_50;
      if (puStack_50[0x43] != 0) {
        pub_1406abac0((byte *)puStack_50[0x44],puStack_50[0x43],1);
      }
      uVar14 = puVar11[0x3d] - puVar11[0x3b];
      if (uVar14 != 0) {
        uVar14 = uVar14 >> 5;
        puVar16 = (undefined8 *)(puVar11[0x3b] + 8);
        do {
          if (puVar16[-1] != 0) {
            pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
          }
          puVar16 = puVar16 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (puVar11[0x3c] != 0) {
        pub_1406abac0((byte *)puVar11[0x3a],puVar11[0x3c] << 5,8);
      }
      uVar14 = puVar11[0x39];
      if (uVar14 != 0) {
        puVar16 = (undefined8 *)(puVar11[0x38] + 8);
        do {
          if (puVar16[-1] != 0) {
            pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
          }
          puVar16 = puVar16 + 3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (puVar11[0x37] != 0) {
        pub_1406abac0((byte *)puVar11[0x38],puVar11[0x37] * 0x18,8);
      }
      pdb_14098a860(puVar11 + 0x33);
      *(undefined2 *)((longlong)puStack_50 + 0x239) = 0;
    }
    else {
      if (cVar2 == '\x03') {
        pbVar10 = (byte *)param_1[0x48];
        pbStack_58 = (byte *)param_1[0x49];
        if (*(code **)pbStack_58 != (code *)0x0) {
          (**(code **)pbStack_58)(pbVar10);
        }
        if (*(ulonglong *)(pbStack_58 + 8) != 0) {
          pub_1406abac0(pbVar10,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
        }
        goto LAB_14096a5f4;
      }
      if (cVar2 == '\0') {
        uVar14 = param_1[0x30];
        if (uVar14 != 0) {
          puVar16 = (undefined8 *)(param_1[0x2f] + 8);
          do {
            if (puVar16[-1] != 0) {
              pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
            }
            puVar16 = puVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (param_1[0x2e] != 0) {
          pub_1406abac0((byte *)param_1[0x2f],param_1[0x2e] << 5,8);
        }
        plVar3 = (longlong *)param_1[0x32];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          pdb_140e3f860(puStack_50 + 0x32);
        }
      }
    }
    plVar3 = (longlong *)puStack_50[0x23];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140dd78e0(puStack_50 + 0x23);
    }
    plVar3 = (longlong *)puStack_50[0x24];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    pdb_142d8feb0(plVar3 + 1);
    puVar11 = puStack_50;
    *(undefined1 *)((longlong)puStack_50 + 0xfa) = 0;
    uVar14 = puStack_50[0x1e];
    if (uVar14 != 0) {
      puVar16 = (undefined8 *)(puStack_50[0x1d] + 0x78);
      do {
        if (puVar16[-0xb] != 0) {
          pub_1406abac0((byte *)puVar16[-10],puVar16[-0xb],1);
        }
        if (puVar16[-8] != 0) {
          pub_1406abac0((byte *)puVar16[-7],puVar16[-8],1);
        }
        if (puVar16[-4] != 0) {
          pub_1406abac0((byte *)puVar16[-3],puVar16[-4],1);
        }
        if (puVar16[-1] != 0) {
          pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
        }
        puVar16 = puVar16 + 0x12;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (puVar11[0x1c] != 0) {
      pbVar10 = (byte *)puVar11[0x1d];
      uVar14 = puVar11[0x1c] * 0x90;
      uVar18 = 8;
      goto LAB_14096ae1f;
    }
    goto LAB_14096ae24;
  }
  if (7 < *(byte *)((longlong)param_1 + 0x2dd)) goto LAB_14096acd8;
  switch(*(byte *)((longlong)param_1 + 0x2dd)) {
  case 0:
    pbVar10 = (byte *)param_1[0x59];
    uVar14 = param_1[0x5a];
    if (uVar14 != 0) {
      pbVar8 = pbVar10 + 0x20;
      do {
        if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
        }
        pbVar8 = pbVar8 + 0x38;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (param_1[0x58] != 0) {
      pub_1406abac0(pbVar10,param_1[0x58] * 0x38,8);
    }
    plVar3 = (longlong *)param_1[0x57];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e3f860(puStack_50 + 0x57);
    }
  default:
    goto LAB_14096acd8;
  case 3:
    pbStack_58 = (byte *)param_1[0x5c];
    puVar16 = (undefined8 *)param_1[0x5d];
    if ((code *)*puVar16 != (code *)0x0) {
      (*(code *)*puVar16)(pbStack_58);
    }
    if (puVar16[1] != 0) {
      pub_1406abac0(pbStack_58,puVar16[1],puVar16[2]);
    }
    goto code_r0x00014096aa12;
  case 4:
    pbStack_58 = (byte *)param_1[0x5c];
    puVar16 = (undefined8 *)param_1[0x5d];
    if ((code *)*puVar16 != (code *)0x0) {
      (*(code *)*puVar16)(pbStack_58);
    }
    if (puVar16[1] != 0) {
      pub_1406abac0(pbStack_58,puVar16[1],puVar16[2]);
    }
    goto code_r0x00014096a9ce;
  case 5:
    pdb_1409a0c30(param_1 + 0x5c);
    plVar3 = (longlong *)puStack_50[0x80];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c7b710(puStack_50 + 0x80);
    }
code_r0x00014096a9ce:
    plVar3 = (longlong *)puStack_50[0x55];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c7a060(puStack_50 + 0x55);
    }
    plVar3 = (longlong *)puStack_50[0x40];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140c79e90(puStack_50 + 0x40);
    }
code_r0x00014096aa12:
    pdb_140987940(param_1 + 0x32);
    break;
  case 6:
    pdb_1409a1520(param_1 + 0x5c);
    break;
  case 7:
    pbVar10 = (byte *)param_1[0x5c];
    pbStack_58 = (byte *)param_1[0x5d];
    if (*(code **)pbStack_58 != (code *)0x0) {
      (**(code **)pbStack_58)(pbVar10);
    }
    if (*(ulonglong *)(pbStack_58 + 8) != 0) {
      pub_1406abac0(pbVar10,*(ulonglong *)(pbStack_58 + 8),*(ulonglong *)(pbStack_58 + 0x10));
    }
    plVar3 = (longlong *)puStack_50[0x60];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_141746a60(puStack_50 + 0x60);
    }
  }
  puVar11 = puStack_50;
  if (*(char *)((longlong)puStack_50 + 0x2da) != '\0') {
    pbVar10 = (byte *)puStack_50[0x4f];
    uVar14 = puStack_50[0x50];
    if (uVar14 != 0) {
      pbVar8 = pbVar10 + 0x20;
      do {
        if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
        }
        pdb_14098ced0(pbVar8);
        pbVar8 = pbVar8 + 0x70;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (puVar11[0x4e] != 0) {
      pub_1406abac0(pbVar10,puVar11[0x4e] * 0x70,0x10);
    }
  }
  *(undefined1 *)((longlong)puVar11 + 0x2da) = 0;
  pbVar10 = (byte *)puVar11[0x4c];
  uVar14 = puVar11[0x4d];
  if (uVar14 != 0) {
    pbVar8 = pbVar10 + 0x20;
    do {
      if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar8 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
      }
      pbVar8 = pbVar8 + 0x30;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (puVar11[0x4b] != 0) {
    pub_1406abac0(pbVar10,puVar11[0x4b] * 0x30,8);
  }
  *(undefined1 *)((longlong)puVar11 + 0x2db) = 0;
  if ((char)puVar11[0x5b] != '\0') {
    uVar14 = puVar11[0x4a];
    if (uVar14 != 0) {
      uVar18 = puStack_50[0x49];
      uVar19 = 0;
      do {
        lVar4 = uVar18 + uVar19 * 0x60;
        uVar15 = *(ulonglong *)(uVar18 + 0x10 + uVar19 * 0x60);
        if (uVar15 != 0) {
          pub_1406abac0(*(byte **)(lVar4 + 0x18),uVar15,1);
        }
        pbVar10 = *(byte **)(lVar4 + 0x30);
        pbVar8 = pbVar10;
        for (lVar17 = *(longlong *)(lVar4 + 0x38); lVar17 != 0; lVar17 = lVar17 + -1) {
          pdb_14098e1e0(pbVar8);
          pbVar8 = pbVar8 + 0x78;
        }
        if (*(longlong *)(lVar4 + 0x28) != 0) {
          pub_1406abac0(pbVar10,*(longlong *)(lVar4 + 0x28) * 0x78,8);
        }
        if (*(ulonglong *)(lVar4 + 0x40) != 0) {
          pub_1406abac0(*(byte **)(lVar4 + 0x48),*(ulonglong *)(lVar4 + 0x40),1);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar14);
    }
    puVar11 = puStack_50;
    if (puStack_50[0x48] != 0) {
      pub_1406abac0((byte *)puStack_50[0x49],puStack_50[0x48] * 0x60,0x10);
    }
  }
  *(undefined1 *)(puVar11 + 0x5b) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x2dc) = 0;
  pdb_14098a860(puVar11 + 0x3a);
  puVar11 = puStack_50;
  *(undefined1 *)((longlong)puStack_50 + 0x2d9) = 0;
  pbVar10 = (byte *)puStack_50[0x46];
  uVar14 = puStack_50[0x47];
  if (uVar14 != 0) {
    pbVar8 = pbVar10 + 0x20;
    do {
      if (*(ulonglong *)(pbVar8 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(ulonglong *)(pbVar8 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar8 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
      }
      pbVar8 = pbVar8 + 0x38;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (puVar11[0x45] != 0) {
    pub_1406abac0(pbVar10,puVar11[0x45] * 0x38,8);
  }
LAB_14096acd8:
  plVar3 = (longlong *)puStack_50[0x23];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    pdb_140dd78e0(puStack_50 + 0x23);
  }
  plVar3 = (longlong *)puStack_50[0x24];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  pdb_142d8feb0(plVar3 + 1);
  puVar11 = puStack_50;
  uVar14 = puStack_50[0x22];
  if (uVar14 != 0) {
    puVar16 = (undefined8 *)(puStack_50[0x21] + 0x78);
    do {
      if (puVar16[-0xb] != 0) {
        pub_1406abac0((byte *)puVar16[-10],puVar16[-0xb],1);
      }
      if (puVar16[-8] != 0) {
        pub_1406abac0((byte *)puVar16[-7],puVar16[-8],1);
      }
      if (puVar16[-4] != 0) {
        pub_1406abac0((byte *)puVar16[-3],puVar16[-4],1);
      }
      if (puVar16[-1] != 0) {
        pub_1406abac0((byte *)*puVar16,puVar16[-1],1);
      }
      puVar16 = puVar16 + 0x12;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (puVar11[0x20] != 0) {
    pub_1406abac0((byte *)puVar11[0x21],puVar11[0x20] * 0x90,8);
  }
  *(undefined1 *)((longlong)puVar11 + 0xfb) = 0;
  if (puVar11[0x27] != 0) {
    pub_1406abac0((byte *)puVar11[0x28],puVar11[0x27],1);
  }
  if (puVar11[0x2b] != 0) {
    pub_1406abac0((byte *)puVar11[0x2c],puVar11[0x2b],1);
  }
  uVar14 = puVar11[0x2e];
  if (uVar14 != 0) {
    pbVar10 = (byte *)puVar11[0x2f];
    uVar18 = 1;
LAB_14096ae1f:
    pub_1406abac0(pbVar10,uVar14,uVar18);
  }
LAB_14096ae24:
  if (puVar11[0x19] != 0) {
    pub_1406abac0((byte *)puVar11[0x1a],puVar11[0x19],1);
  }
  *(undefined1 *)((longlong)puVar11 + 0xfc) = 0;
  uVar14 = puVar11[0x14];
  if ((!SBORROW8(0,uVar14)) && (uVar14 != 0)) {
    pub_1406abac0((byte *)puVar11[0x15],uVar14,1);
  }
  *(undefined1 *)((longlong)puVar11 + 0xfd) = 0;
  if (puVar11[0xd] != 0) {
    pub_1406abac0((byte *)puVar11[0xe],puVar11[0xd],1);
  }
  *(undefined1 *)((longlong)puVar11 + 0xfe) = 0;
  if (puVar11[10] != 0) {
    pub_1406abac0((byte *)puVar11[0xb],puVar11[10],1);
  }
  *(undefined1 *)((longlong)puVar11 + 0xff) = 0;
  if (*(char *)((longlong)puVar11 + 0xf9) != '\0') {
    plVar3 = (longlong *)puStack_50[9];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140e3f860(puStack_50 + 9);
    }
  }
  *(undefined1 *)((longlong)puStack_50 + 0xf9) = 0;
  uVar18 = puStack_50[5];
  if (uVar18 == 0) {
    return;
  }
  uVar14 = puStack_50[6];
  uVar19 = 1;
code_r0x0001406abac0:
  uVar15 = uVar14;
  if (0x10 < uVar19) {
    uVar15 = *(ulonglong *)(uVar14 - 8);
  }
  uVar9 = GetProcessHeap(uVar14,uVar18);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar9,0,uVar15);
  return;
}

