// VA 0x142a7d3d0, PDB extent 923 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::bake_pack_preview_jpeg::async_fn_env$0<void (*)(core::pin::Pin<alloc::boxed::Box<dyn$<core::future::future::Future<assoc$<Output,tuple$<> > >,core::marker::Send>,alloc::alloc::Global> >)> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::bake_pack_preview_jpeg::async_fn_env$0<void
   (*)(core::pin::Pin<alloc::boxed::Box<dyn$<core::future::future::Future<assoc$<Output,tuple$<> >
   >,core::marker::Send>,alloc::alloc::Global> >)> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 923 */

void pdb_142a7d3d0(longlong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte **ppbVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined8 *puStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  cVar2 = (char)param_1[0x19];
  if (cVar2 == '\0') {
    pbVar9 = (byte *)param_1[1];
    lVar17 = param_1[2];
    if (lVar17 != 0) {
      pbVar13 = pbVar9 + 8;
      do {
        if (*(ulonglong *)(pbVar13 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar13,*(ulonglong *)(pbVar13 + -8),1);
        }
        pbVar13 = pbVar13 + 0x20;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (*param_1 != 0) {
      pub_1406abac0(pbVar9,*param_1 << 5,8);
    }
    plVar3 = (longlong *)param_1[4];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      plStack_38 = (longlong *)0xfffffffffffffffe;
      puStack_40 = (undefined8 *)param_1[4];
      pbStack_50 = (byte *)((longlong)puStack_40 + 0x10);
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
      puVar14 = puStack_40;
      plVar3 = *(longlong **)((longlong)puStack_40 + 0x688);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140740180((longlong)puStack_40 + 0x688);
      }
      pbVar9 = (byte *)((longlong)puVar14 + 0x698);
      pdb_140e3b6a0();
      puVar7 = puStack_40;
      lVar17 = *(longlong *)((longlong)puVar14 + 0x698);
      if (lVar17 == 0) {
        ppbVar11 = &pbStack_48;
        pbVar13 = (byte *)0x0;
      }
      else {
        pbVar13 = (byte *)(lVar17 << 4);
        pbVar9 = *(byte **)((longlong)puStack_40 + 0x6a0);
        pbStack_48 = (byte *)0x8;
        ppbVar11 = &pbStack_58;
      }
      *ppbVar11 = pbVar13;
      if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
        pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
      }
      pdb_140e3c5c0((longlong)puVar7 + 0x7b8);
      plVar3 = *(longlong **)((longlong)puStack_40 + 0x6b8);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140e404d0((longlong)puStack_40 + 0x6b8);
      }
      puVar14 = puStack_40;
      lVar17 = *(longlong *)((longlong)puStack_40 + 0x6c8);
      if (lVar17 != 0) {
        uVar16 = lVar17 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar10 = lVar17 + uVar16 + 0x11;
        if (uVar10 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar16),uVar10,0x10);
        }
      }
      lVar17 = *(longlong *)((longlong)puVar14 + 0x890);
      if (lVar17 != 0) {
        lVar15 = *(longlong *)((longlong)puVar14 + 0x8a0);
        if (lVar15 != 0) {
          pauVar12 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
          auVar1 = *pauVar12;
          pauVar18 = pauVar12 + 1;
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
                pauVar12 = pauVar12 + -0x28;
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
            uVar4 = 0;
            for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            pdb_140e70a60((longlong)pauVar12 + (ulonglong)uVar4 * -0x28 + -8);
            uVar19 = uVar19 - 1 & uVar19;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        uVar16 = lVar17 * 0x28 + 0x37U & 0xfffffffffffffff0;
        uVar10 = lVar17 + uVar16 + 0x11;
        if (uVar10 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar16),uVar10,0x10);
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
        uVar16 = lVar17 + lVar15 + 0x11;
        if (uVar16 != 0) {
          pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar15),uVar16,0x10);
        }
      }
      pbStack_50 = pbVar9;
      pdb_140e3b920();
      puVar14 = puStack_40;
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
      pbVar9 = (byte *)((longlong)puVar14 + 0xa68);
      pbStack_50 = pbVar9;
      pdb_141e5de20();
      puVar14 = puStack_40;
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
      if (*(longlong *)((longlong)puVar14 + 0xa88) == 0) {
        ppbVar11 = &pbStack_48;
        pbVar13 = (byte *)0x0;
      }
      else {
        pbVar13 = (byte *)(*(longlong *)((longlong)puVar14 + 0xa88) << 3);
        pbVar9 = *(byte **)((longlong)puVar14 + 0xa90);
        pbStack_48 = (byte *)0x8;
        ppbVar11 = &pbStack_58;
      }
      *ppbVar11 = pbVar13;
      if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
        pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
      }
      pbVar9 = (byte *)((longlong)puVar14 + 0xaa0);
      pdb_140e3cd40();
      lVar17 = *(longlong *)((longlong)puStack_40 + 0xb20);
      puVar14 = puStack_40;
      if (lVar17 != 0) {
        lVar15 = *(longlong *)((longlong)puStack_40 + 0xb30);
        if (lVar15 != 0) {
          pauVar12 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
          auVar1 = *pauVar12;
          pauVar18 = pauVar12 + 1;
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
                pauVar12 = pauVar12 + -0x10;
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
            iVar5 = 0;
            for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            pbVar9 = (byte *)((longlong)pauVar12 + (-8 - (ulonglong)(uint)(iVar5 << 4)));
            pdb_140e71920();
            uVar19 = uVar19 - 1 & uVar19;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar14 = puStack_40;
        uVar16 = lVar17 * 0x11 + 0x21;
        if (uVar16 != 0) {
          pbVar9 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar17 * -0x10 + -0x10);
          pub_1406abac0(pbVar9,uVar16,0x10);
        }
      }
      if (*(longlong *)((longlong)puVar14 + 0x7a0) != 0) {
        pbVar9 = *(byte **)((longlong)puVar14 + 0x798);
        pub_1406abac0(pbVar9,*(longlong *)((longlong)puVar14 + 0x7a0) << 3,8);
      }
      if (*(longlong *)((longlong)puVar14 + 0x50) == 0) {
        ppbVar11 = &pbStack_48;
        pbVar13 = (byte *)0x0;
      }
      else {
        pbVar13 = (byte *)(*(longlong *)((longlong)puVar14 + 0x50) << 3);
        pbVar9 = *(byte **)((longlong)puVar14 + 0x58);
        pbStack_48 = (byte *)0x8;
        ppbVar11 = &pbStack_58;
      }
      *ppbVar11 = pbVar13;
      if ((pbStack_48 != (byte *)0x0) && (pbStack_58 != (byte *)0x0)) {
        pub_1406abac0(pbVar9,(ulonglong)pbStack_58,(ulonglong)pbStack_48);
      }
      pbVar9 = (byte *)((longlong)puVar14 + 0xb58);
      pbStack_50 = pbVar9;
      pdb_141e5e2b0();
      puVar14 = puStack_40;
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
      if (puVar14 != (undefined8 *)0xffffffffffffffff) {
        LOCK();
        plVar3 = (longlong *)((longlong)puVar14 + 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          puStack_40 = (undefined8 *)&UNK_140f3c37e;
          uVar8 = GetProcessHeap(puVar14,0xbb0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          HeapFree(uVar8,0,puVar14);
          return;
        }
      }
      return;
    }
  }
  else {
    plStack_38 = param_1;
    if (cVar2 == '\x03') {
      pbStack_48 = (byte *)param_1[0x1a];
      puStack_40 = (undefined8 *)param_1[0x1b];
      if ((code *)*puStack_40 != (code *)0x0) {
        (*(code *)*puStack_40)(pbStack_48);
      }
      if (puStack_40[1] != 0) {
        pub_1406abac0(pbStack_48,puStack_40[1],puStack_40[2]);
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      pbStack_48 = (byte *)param_1[0x1a];
      puStack_40 = (undefined8 *)param_1[0x1b];
      if ((code *)*puStack_40 != (code *)0x0) {
        (*(code *)*puStack_40)(pbStack_48);
      }
      if (puStack_40[1] != 0) {
        pub_1406abac0(pbStack_48,puStack_40[1],puStack_40[2]);
      }
      plVar3 = (longlong *)plStack_38[0x1e];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140c79e90(plStack_38 + 0x1e);
      }
    }
    plVar3 = plStack_38;
    if (plStack_38[0x15] != 0) {
      pub_1406abac0((byte *)plStack_38[0x16],plStack_38[0x15],1);
    }
    uVar16 = plVar3[0xf] - plVar3[0xd];
    if (uVar16 != 0) {
      uVar16 = uVar16 >> 5;
      puVar14 = (undefined8 *)(plVar3[0xd] + 8);
      do {
        if (puVar14[-1] != 0) {
          pub_1406abac0((byte *)*puVar14,puVar14[-1],1);
        }
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (plVar3[0xe] != 0) {
      pub_1406abac0((byte *)plVar3[0xc],plVar3[0xe] << 5,8);
    }
    pbVar9 = (byte *)plVar3[10];
    lVar17 = plVar3[0xb];
    if (lVar17 != 0) {
      pbVar13 = pbVar9 + 8;
      do {
        if (*(ulonglong *)(pbVar13 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar13,*(ulonglong *)(pbVar13 + -8),1);
        }
        pbVar13 = pbVar13 + 0x18;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (plVar3[9] != 0) {
      pub_1406abac0(pbVar9,plVar3[9] * 0x18,8);
    }
    pdb_14098a860(plVar3 + 5);
    *(undefined2 *)((longlong)plStack_38 + 0xc9) = 0;
  }
  return;
}

