// VA 0x141ab0010, PDB extent 548 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::mod_icons::build_mod_clutter_icons::async_fn_env$0<country_core::startup::load_mod_clutter_icons::rebake_modded_clutter_icons::closure_env$1> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::mod_icons::build_mod_clutter_icons::async_fn_env$0<country_core::startup::load_mod_clutter_icons::rebake_modded_clutter_icons::closure_env$1>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
   Extent: 548 */

void pdb_141ab0010(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar12 = &uStack_48;
  puVar14 = &uStack_48;
  puVar15 = &uStack_48;
  puVar16 = &uStack_48;
  puVar17 = &uStack_48;
  puVar18 = &uStack_48;
  cVar2 = *(char *)(param_1 + 0x98);
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      pbVar11 = *(byte **)(param_1 + 0xc0);
      puVar22 = *(undefined8 **)(param_1 + 200);
      if ((code *)*puVar22 != (code *)0x0) {
        pbStack_50 = (byte *)0x141ab007a;
        (*(code *)*puVar22)(pbVar11);
      }
      if (puVar22[1] != 0) {
        pbStack_50 = (byte *)0x141ab0095;
        pub_1406abac0(pbVar11,puVar22[1],puVar22[2]);
      }
      pbStack_50 = (byte *)0x141ab00a5;
      pdb_140986a00(param_1 + 0xd0);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      pbStack_50 = (byte *)0x141ab004f;
      pdb_141702d80(param_1 + 0xa0);
    }
    if (*(char *)(param_1 + 0x9a) != '\0') {
      pbStack_50 = (byte *)0x141ab00c3;
      pdb_14096d580(param_1 + 0x80);
    }
    *(undefined2 *)(param_1 + 0x9a) = 0;
    pbStack_50 = (byte *)0x141ab00da;
    pdb_14098a860(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x99) = 0;
    puVar10 = *(undefined **)(param_1 + 0x38);
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 != 0) {
      puVar22 = (undefined8 *)((longlong)puVar10 + 0x40);
      do {
        if (puVar22[-8] != 0) {
          pbStack_50 = &UNK_1409670b1;
          pub_1406abac0((byte *)puVar22[-7],puVar22[-8],1);
        }
        if (puVar22[-5] != 0) {
          pbStack_50 = &UNK_1409670c9;
          pub_1406abac0((byte *)puVar22[-4],puVar22[-5],1);
        }
        uVar8 = puVar22[-1];
        if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
          pbStack_50 = &UNK_1409670e5;
          pub_1406abac0((byte *)*puVar22,uVar8,1);
        }
        puVar22 = puVar22 + 10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      return;
    }
    lVar19 = *(longlong *)(param_1 + 0x30) * 0x50;
code_r0x0001406abac0:
    puStack_40 = &UNK_140f3c37e;
    uVar9 = GetProcessHeap(puVar10,lVar19);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar9,0,puVar10);
    return;
  }
  pbStack_50 = (byte *)0x141ab00fd;
  pdb_140967070();
  plVar3 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 != 0) {
    return;
  }
  uStack_38 = 0xfffffffffffffffe;
  puStack_40 = *(undefined **)(param_1 + 0x20);
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
  puVar10 = puStack_40;
  plVar3 = *(longlong **)((longlong)puStack_40 + 0x688);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    pdb_140740180((longlong)puStack_40 + 0x688);
  }
  pbVar11 = (byte *)((longlong)puVar10 + 0x698);
  pdb_140e3b6a0();
  puVar7 = puStack_40;
  lVar19 = *(longlong *)((longlong)puVar10 + 0x698);
  if (lVar19 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = lVar19 << 4;
    pbVar11 = *(byte **)((longlong)puStack_40 + 0x6a0);
    uStack_48 = 8;
    puVar12 = &uStack_58;
  }
  *puVar12 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  pdb_140e3c5c0((longlong)puVar7 + 0x7b8);
  plVar3 = *(longlong **)((longlong)puStack_40 + 0x6b8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    pdb_140e404d0((longlong)puStack_40 + 0x6b8);
  }
  puVar10 = puStack_40;
  lVar19 = *(longlong *)((longlong)puStack_40 + 0x6c8);
  if (lVar19 != 0) {
    uVar8 = lVar19 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar13 = lVar19 + uVar8 + 0x11;
    if (uVar13 != 0) {
      pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x6c0) - uVar8),uVar13,0x10);
    }
  }
  lVar19 = *(longlong *)((longlong)puVar10 + 0x890);
  if (lVar19 != 0) {
    lVar21 = *(longlong *)((longlong)puVar10 + 0x8a0);
    if (lVar21 != 0) {
      pauVar20 = *(undefined1 (**) [16])((longlong)puStack_40 + 0x888);
      auVar1 = *pauVar20;
      pauVar23 = pauVar20 + 1;
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
            pauVar20 = pauVar20 + -0x28;
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
        uVar4 = 0;
        for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        pdb_140e70a60((longlong)pauVar20 + (ulonglong)uVar4 * -0x28 + -8);
        uVar24 = uVar24 - 1 & uVar24;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar8 = lVar19 * 0x28 + 0x37U & 0xfffffffffffffff0;
    uVar13 = lVar19 + uVar8 + 0x11;
    if (uVar13 != 0) {
      pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x888) - uVar8),uVar13,0x10);
    }
  }
  if (*(longlong *)pbStack_50 != 0) {
    pdb_140e71180((longlong)puStack_40 + 0x20);
  }
  pdb_140e71180((longlong)puStack_40 + 0x6e0);
  pbVar11 = (byte *)((longlong)puStack_40 + 0x8b8);
  lVar19 = *(longlong *)((longlong)puStack_40 + 0x8e0);
  if (lVar19 != 0) {
    lVar21 = lVar19 * 0x20 + 0x20;
    uVar8 = lVar19 + lVar21 + 0x11;
    if (uVar8 != 0) {
      pub_1406abac0((byte *)(*(longlong *)((longlong)puStack_40 + 0x8d8) - lVar21),uVar8,0x10);
    }
  }
  pbStack_50 = pbVar11;
  pdb_140e3b920();
  puVar10 = puStack_40;
  if (*(longlong *)pbStack_50 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(longlong *)pbStack_50 * 0x28;
    pbVar11 = *(byte **)((longlong)puStack_40 + 0x8c0);
    uStack_48 = 8;
    puVar14 = &uStack_58;
  }
  *puVar14 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  pbVar11 = (byte *)((longlong)puVar10 + 0xa68);
  pbStack_50 = pbVar11;
  pdb_141e5de20();
  puVar10 = puStack_40;
  if (*(longlong *)pbStack_50 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(longlong *)pbStack_50 * 0x18;
    pbVar11 = *(byte **)((longlong)puStack_40 + 0xa70);
    uStack_48 = 8;
    puVar15 = &uStack_58;
  }
  *puVar15 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  if (*(longlong *)((longlong)puVar10 + 0xa88) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(longlong *)((longlong)puVar10 + 0xa88) << 3;
    pbVar11 = *(byte **)((longlong)puVar10 + 0xa90);
    uStack_48 = 8;
    puVar16 = &uStack_58;
  }
  *puVar16 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  pbVar11 = (byte *)((longlong)puVar10 + 0xaa0);
  pdb_140e3cd40();
  lVar19 = *(longlong *)((longlong)puStack_40 + 0xb20);
  puVar10 = puStack_40;
  if (lVar19 != 0) {
    lVar21 = *(longlong *)((longlong)puStack_40 + 0xb30);
    if (lVar21 != 0) {
      pauVar20 = *(undefined1 (**) [16])((longlong)puStack_40 + 0xb18);
      auVar1 = *pauVar20;
      pauVar23 = pauVar20 + 1;
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
            pauVar20 = pauVar20 + -0x10;
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
        iVar5 = 0;
        for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        pbVar11 = (byte *)((longlong)pauVar20 + (-8 - (ulonglong)(uint)(iVar5 << 4)));
        pdb_140e71920();
        uVar24 = uVar24 - 1 & uVar24;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    puVar10 = puStack_40;
    uVar8 = lVar19 * 0x11 + 0x21;
    if (uVar8 != 0) {
      pbVar11 = (byte *)(*(longlong *)((longlong)puStack_40 + 0xb18) + lVar19 * -0x10 + -0x10);
      pub_1406abac0(pbVar11,uVar8,0x10);
    }
  }
  if (*(longlong *)((longlong)puVar10 + 0x7a0) != 0) {
    pbVar11 = *(byte **)((longlong)puVar10 + 0x798);
    pub_1406abac0(pbVar11,*(longlong *)((longlong)puVar10 + 0x7a0) << 3,8);
  }
  if (*(longlong *)((longlong)puVar10 + 0x50) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(longlong *)((longlong)puVar10 + 0x50) << 3;
    pbVar11 = *(byte **)((longlong)puVar10 + 0x58);
    uStack_48 = 8;
    puVar17 = &uStack_58;
  }
  *puVar17 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  pbVar11 = (byte *)((longlong)puVar10 + 0xb58);
  pbStack_50 = pbVar11;
  pdb_141e5e2b0();
  puVar10 = puStack_40;
  if (*(longlong *)pbStack_50 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(longlong *)pbStack_50 * 0x50;
    pbVar11 = *(byte **)((longlong)puStack_40 + 0xb60);
    uStack_48 = 8;
    puVar18 = &uStack_58;
  }
  *puVar18 = uVar8;
  if ((uStack_48 != 0) && (uStack_58 != 0)) {
    pub_1406abac0(pbVar11,uStack_58,uStack_48);
  }
  if (puVar10 != (undefined *)0xffffffffffffffff) {
    LOCK();
    plVar3 = (longlong *)((longlong)puVar10 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar19 = 0xbb0;
      goto code_r0x0001406abac0;
    }
  }
  return;
}

