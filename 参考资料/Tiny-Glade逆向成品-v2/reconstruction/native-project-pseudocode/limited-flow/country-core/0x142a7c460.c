// VA 0x142a7c460, PDB extent 1342 bytes
// core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::systems::steam::workshop_publish::prepare_mod::async_fn_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 1342 */

void pdb_142a7c460(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  byte *pbVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar13 = &uStack_48;
  puVar14 = &uStack_48;
  puVar15 = &uStack_48;
  puVar16 = &uStack_48;
  puVar17 = &uStack_48;
  puVar18 = &uStack_48;
  cVar2 = (char)param_1[0x1f];
  if (cVar2 == '\0') {
    if (*param_1 != 0) {
      pbStack_50 = (byte *)0x142a7c6b4;
      pub_1406abac0((byte *)param_1[1],*param_1,1);
    }
    plVar4 = (longlong *)param_1[4];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      uStack_38 = 0xfffffffffffffffe;
      puStack_40 = (undefined *)param_1[4];
      pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
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
      puVar11 = puStack_40;
      plVar4 = *(longlong **)((longlong)puStack_40 + 0x688);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140740180((longlong)puStack_40 + 0x688);
      }
      pbVar12 = (byte *)((longlong)puVar11 + 0x698U);
      pdb_140e3b6a0();
      puVar8 = puStack_40;
      lVar3 = *(longlong *)((longlong)puVar11 + 0x698U);
      if (lVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = lVar3 << 4;
        pbVar12 = *(byte **)((longlong)puStack_40 + 0x6a0);
        uStack_48 = 8;
        puVar13 = &uStack_58;
      }
      *puVar13 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      pdb_140e3c5c0((longlong)puVar8 + 0x7b8);
      plVar4 = *(longlong **)((longlong)puStack_40 + 0x6b8);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140e404d0((longlong)puStack_40 + 0x6b8);
      }
      puVar11 = puStack_40;
      lVar3 = *(longlong *)((longlong)puStack_40 + 0x6c8);
      if (lVar3 != 0) {
        uVar9 = lVar3 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar22 = lVar3 + uVar9 + 0x11;
        if (uVar22 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar9),uVar22,0x10);
        }
      }
      lVar3 = *(longlong *)((longlong)puVar11 + 0x890);
      if (lVar3 != 0) {
        lVar21 = *(longlong *)((longlong)puVar11 + 0x8a0);
        if (lVar21 != 0) {
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
            uVar5 = 0;
            for (uVar7 = uVar24; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            pdb_140e70a60((longlong)pauVar19 + (ulonglong)uVar5 * -0x28 + -8);
            uVar24 = uVar24 - 1 & uVar24;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        uVar9 = lVar3 * 0x28 + 0x37U & 0xfffffffffffffff0;
        uVar22 = lVar3 + uVar9 + 0x11;
        if (uVar22 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar9),uVar22,0x10);
        }
      }
      if (*(longlong *)pbStack_50 != 0) {
        pdb_140e71180((longlong)puStack_40 + 0x20);
      }
      pdb_140e71180((longlong)puStack_40 + 0x6e0);
      pbVar12 = (byte *)((longlong)puStack_40 + 0x8b8);
      lVar3 = *(longlong *)((longlong)puStack_40 + 0x8e0);
      if (lVar3 != 0) {
        lVar21 = lVar3 * 0x20 + 0x20;
        uVar9 = lVar3 + lVar21 + 0x11;
        if (uVar9 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar21),uVar9,0x10);
        }
      }
      pbStack_50 = pbVar12;
      pdb_140e3b920();
      puVar11 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(longlong *)pbStack_50 * 0x28;
        pbVar12 = *(byte **)((longlong)puStack_40 + 0x8c0);
        uStack_48 = 8;
        puVar14 = &uStack_58;
      }
      *puVar14 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      pbVar12 = (byte *)((longlong)puVar11 + 0xa68);
      pbStack_50 = pbVar12;
      pdb_141e5de20();
      puVar11 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(longlong *)pbStack_50 * 0x18;
        pbVar12 = *(byte **)((longlong)puStack_40 + 0xa70);
        uStack_48 = 8;
        puVar15 = &uStack_58;
      }
      *puVar15 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      if (*(longlong *)((longlong)puVar11 + 0xa88) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(longlong *)((longlong)puVar11 + 0xa88) << 3;
        pbVar12 = *(byte **)((longlong)puVar11 + 0xa90);
        uStack_48 = 8;
        puVar16 = &uStack_58;
      }
      *puVar16 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      pbVar12 = (byte *)((longlong)puVar11 + 0xaa0);
      pdb_140e3cd40();
      lVar3 = *(longlong *)((longlong)puStack_40 + 0xb20);
      puVar11 = puStack_40;
      if (lVar3 != 0) {
        lVar21 = *(longlong *)((longlong)puStack_40 + 0xb30);
        if (lVar21 != 0) {
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
            iVar6 = 0;
            for (uVar5 = uVar24; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            pbVar12 = (byte *)((longlong)pauVar19 + (-8 - (ulonglong)(uint)(iVar6 << 4)));
            pdb_140e71920();
            uVar24 = uVar24 - 1 & uVar24;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        puVar11 = puStack_40;
        uVar9 = lVar3 * 0x11 + 0x21;
        if (uVar9 != 0) {
          pbVar12 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar3 * -0x10 + -0x10);
          pub_1406abac0(pbVar12,uVar9,0x10);
        }
      }
      if (*(longlong *)((longlong)puVar11 + 0x7a0) != 0) {
        pbVar12 = *(byte **)((longlong)puVar11 + 0x798);
        pub_1406abac0(pbVar12,*(longlong *)((longlong)puVar11 + 0x7a0) << 3,8);
      }
      if (*(longlong *)((longlong)puVar11 + 0x50) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(longlong *)((longlong)puVar11 + 0x50) << 3;
        pbVar12 = *(byte **)((longlong)puVar11 + 0x58);
        uStack_48 = 8;
        puVar17 = &uStack_58;
      }
      *puVar17 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      pbVar12 = (byte *)((longlong)puVar11 + 0xb58);
      pbStack_50 = pbVar12;
      pdb_141e5e2b0();
      puVar11 = puStack_40;
      if (*(longlong *)pbStack_50 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(longlong *)pbStack_50 * 0x50;
        pbVar12 = *(byte **)((longlong)puStack_40 + 0xb60);
        uStack_48 = 8;
        puVar18 = &uStack_58;
      }
      *puVar18 = uVar9;
      if ((uStack_48 != 0) && (uStack_58 != 0)) {
        pub_1406abac0(pbVar12,uStack_58,uStack_48);
      }
      if (puVar11 != (undefined *)0xffffffffffffffff) {
        LOCK();
        plVar4 = (longlong *)((longlong)puVar11 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          uVar9 = 0xbb0;
          uVar22 = 8;
          goto code_r0x0001406abac0;
        }
      }
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      pbStack_50 = (byte *)0x142a7c505;
      pdb_142a7c9a0(param_1 + 0x32);
      plVar4 = (longlong *)param_1[0x23];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pbStack_50 = (byte *)0x142a7c527;
        pdb_140dd78e0(param_1 + 0x23);
      }
      plVar4 = (longlong *)param_1[0x24];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      pbStack_50 = (byte *)0x142a7c540;
      pdb_142d8feb0(plVar4 + 1);
      pbStack_50 = (byte *)0x142a7c551;
      pdb_140967580(param_1 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0xfb) = 0;
      if (param_1[0x27] != 0) {
        pbStack_50 = (byte *)0x142a7c57b;
        pub_1406abac0((byte *)param_1[0x28],param_1[0x27],1);
      }
      if (param_1[0x2b] != 0) {
        pbStack_50 = (byte *)0x142a7c599;
        pub_1406abac0((byte *)param_1[0x2c],param_1[0x2b],1);
      }
      if (param_1[0x2e] != 0) {
        pbStack_50 = (byte *)0x142a7c5bb;
        pub_1406abac0((byte *)param_1[0x2f],param_1[0x2e],1);
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      pbStack_50 = (byte *)0x142a7c4a0;
      pdb_142a7d3d0(param_1 + 0x2e);
      plVar4 = (longlong *)param_1[0x23];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pbStack_50 = (byte *)0x142a7c4c2;
        pdb_140dd78e0(param_1 + 0x23);
      }
      plVar4 = (longlong *)param_1[0x24];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      pbStack_50 = (byte *)0x142a7c4db;
      pdb_142d8feb0(plVar4 + 1);
      *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
      pbStack_50 = (byte *)0x142a7c4f3;
      pdb_140967580(param_1 + 0x1c);
    }
    if (param_1[0x19] != 0) {
      pbStack_50 = (byte *)0x142a7c5dd;
      pub_1406abac0((byte *)param_1[0x1a],param_1[0x19],1);
    }
    *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
    uVar9 = param_1[0x14];
    if ((!SBORROW8(0,uVar9)) && (uVar9 != 0)) {
      pbStack_50 = (byte *)0x142a7c607;
      pub_1406abac0((byte *)param_1[0x15],uVar9,1);
    }
    *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
    if (param_1[0xd] != 0) {
      pbStack_50 = (byte *)0x142a7c626;
      pub_1406abac0((byte *)param_1[0xe],param_1[0xd],1);
    }
    *(undefined1 *)((longlong)param_1 + 0xfe) = 0;
    if (param_1[10] != 0) {
      pbStack_50 = (byte *)0x142a7c645;
      pub_1406abac0((byte *)param_1[0xb],param_1[10],1);
    }
    *(undefined1 *)((longlong)param_1 + 0xff) = 0;
    if (*(char *)((longlong)param_1 + 0xf9) != '\0') {
      plVar4 = (longlong *)param_1[9];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pbStack_50 = (byte *)0x142a7c670;
        pdb_140e3f860(param_1 + 9);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
    uVar9 = param_1[5];
    if (uVar9 != 0) {
      puVar11 = (undefined *)param_1[6];
      uVar22 = 1;
code_r0x0001406abac0:
      uVar20 = (ulonglong)puVar11;
      if (0x10 < uVar22) {
        uVar20 = *(ulonglong *)((longlong)puVar11 - 8);
      }
      puStack_40 = &UNK_140f3c37e;
      uVar10 = GetProcessHeap(puVar11,uVar9);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar10,0,uVar20);
      return;
    }
  }
  return;
}

