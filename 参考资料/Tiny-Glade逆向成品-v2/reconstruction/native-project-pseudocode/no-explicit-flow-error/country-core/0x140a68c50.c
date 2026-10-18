// VA 0x140a68c50, PDB extent 2633 bytes
// country_core::systems::steam::workshop_subscriptions::refresh_workshop_subscriptions::closure$6
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_subscriptions::refresh_workshop_subscriptions::closure$6
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
   Extent: 2633 */

void pdb_140a68c50(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong arg1;
  ulonglong unaff_RBX;
  byte *pbVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  longlong lVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  bool bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_418;
  undefined1 auStack_410 [184];
  undefined7 uStack_358;
  undefined1 uStack_351;
  undefined1 uStack_350;
  undefined6 uStack_34f;
  undefined1 uStack_349;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined8 *puStack_340;
  byte *pbStack_338;
  ulonglong uStack_330;
  longlong alStack_298 [24];
  undefined8 *puStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  longlong lStack_198;
  byte *pbStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  byte *pbStack_178;
  ulonglong uStack_168;
  byte *pbStack_160;
  undefined8 uStack_140;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 *puStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  longlong lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 *puStack_78;
  longlong lStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)*param_1;
  puStack_78 = param_1;
  if (*(char *)(param_2 + 3) == '\x02') {
    uVar15 = *(undefined1 *)param_2;
    lVar16 = -0x8000000000000000;
    puStack_340 = param_2;
    pbStack_338 = param_3;
    if (puVar3 != (undefined8 *)0x0) {
      puStack_340 = (undefined8 *)((longlong)puVar3 << 3);
      pbStack_338 = (byte *)0x8;
      pub_1406abac0((byte *)param_1[1],(ulonglong)puStack_340,8);
    }
  }
  else {
    lVar16 = param_1[2];
    uStack_108 = *param_2;
    uStack_100 = param_2[1];
    uStack_f8 = param_2[2];
    uStack_f0 = param_2[3];
    lStack_90 = 0;
    uStack_88 = 8;
    uStack_87 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    pbStack_a0 = (byte *)param_1[1];
    puStack_98 = puVar3;
    plVar11 = (longlong *)pdb_140f3bda0();
    if ((char)plVar11[2] == '\x01') {
      lStack_c8 = *plVar11;
      param_2 = (undefined8 *)plVar11[1];
    }
    else {
      lStack_c8 = pdb_140f4fd10();
      *plVar11 = lStack_c8;
      plVar11[1] = (longlong)param_2;
      *(undefined1 *)(plVar11 + 2) = 1;
    }
    *plVar11 = lStack_c8 + 1;
    uStack_d8 = _DAT_1430403f0;
    lStack_d0 = _UNK_1430403f8;
    lStack_e8 = _DAT_1430403e0;
    uStack_e0 = _UNK_1430403e8;
    uStack_358 = 1;
    uStack_351 = 0x80;
    alStack_298[0] = -0x7fffffffffffffff;
    puStack_1d8 = &uStack_108;
    uStack_1d0 = 0;
    uStack_1cc = (uint)uStack_f8;
    puStack_c0 = param_2;
    if (puStack_1d8 != (undefined8 *)0x0) {
      while (uVar18 = uStack_1cc, puVar3 = puStack_1d8, uVar22 = uStack_1d0, uStack_1d0 < uStack_1cc
            ) {
        while( true ) {
          uVar22 = uVar22 + 1;
          uStack_1d0 = uVar22;
          pdb_141ab74a0(&lStack_418,puVar3);
          lVar17 = lStack_418;
          if (!SBORROW8(0,lStack_418)) break;
          if (uVar22 == uVar18) goto LAB_140a68f7e;
        }
        if (lStack_418 == -0x7fffffffffffffff) break;
        pub_142e32760(&uStack_1c0,auStack_410,0xb8);
        uVar10 = uStack_140;
        lStack_70 = lVar17;
        lStack_1c8 = lVar17;
        uStack_62 = 0;
        pdb_1403b05d0(&lStack_e8,uStack_140);
        uVar9 = uStack_1b8;
        uStack_a8 = uStack_1c0;
        lVar17 = CONCAT71(uStack_7f,uStack_80);
        if (lVar17 == lStack_90) {
          pdb_142d7e6e0(&lStack_90);
        }
        lVar20 = CONCAT71(uStack_87,uStack_88);
        lVar13 = lVar17 * 0x20;
        *(undefined8 *)(lVar20 + lVar13) = uVar10;
        *(longlong *)(lVar20 + 8 + lVar13) = lStack_70;
        *(undefined8 *)(lVar20 + 0x10 + lVar13) = uStack_a8;
        *(undefined8 *)(lVar20 + 0x18 + lVar13) = uVar9;
        uStack_80 = (undefined1)(lVar17 + 1);
        uStack_7f = (undefined7)((ulonglong)(lVar17 + 1) >> 8);
        if (uStack_1b0 != 0) {
          pub_1406abac0(pbStack_1a8,uStack_1b0,1);
        }
        pbVar14 = pbStack_190;
        if (lStack_188 != 0) {
          pbVar21 = pbStack_190 + 8;
          lVar17 = lStack_188;
          do {
            if (*(ulonglong *)(pbVar21 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar21,*(ulonglong *)(pbVar21 + -8),1);
            }
            pbVar21 = pbVar21 + 0x18;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        if (lStack_198 != 0) {
          pub_1406abac0(pbVar14,lStack_198 * 0x18,8);
        }
        if (uStack_180 != 0) {
          pub_1406abac0(pbStack_178,uStack_180,1);
        }
        if (uStack_168 != 0) {
          pub_1406abac0(pbStack_160,uStack_168,1);
        }
        if (puStack_1d8 == (undefined8 *)0x0) break;
      }
    }
LAB_140a68f7e:
    if (-0x7fffffffffffffff < CONCAT17(uStack_351,uStack_358)) {
      pdb_140989530(&uStack_358);
    }
    if (-0x7fffffffffffffff < alStack_298[0]) {
      pdb_140989530(alStack_298);
    }
    pbVar14 = pbStack_a0;
    if (lVar16 != 0) {
      pbVar21 = pbStack_a0 + lVar16 * 8;
      iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                     CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      pbVar23 = pbStack_a0;
      do {
        lVar16 = *(longlong *)pbVar23;
        uStack_358 = (undefined7)lVar16;
        uStack_351 = (undefined1)((ulonglong)lVar16 >> 0x38);
        if (lStack_d0 != 0) {
          uVar12 = pdb_1400af0a0(&lStack_c8,&uStack_358);
          bVar25 = (byte)(uVar12 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar17 = 0;
          while( true ) {
            uVar12 = uVar12 & uStack_e0;
            pcVar1 = (char *)(lStack_e8 + uVar12);
            auVar28[0] = -(*pcVar1 == auVar26[0]);
            auVar28[1] = -(pcVar1[1] == auVar26[1]);
            auVar28[2] = -(pcVar1[2] == auVar26[2]);
            auVar28[3] = -(pcVar1[3] == auVar26[3]);
            auVar28[4] = -(pcVar1[4] == auVar26[4]);
            auVar28[5] = -(pcVar1[5] == auVar26[5]);
            auVar28[6] = -(pcVar1[6] == auVar26[6]);
            auVar28[7] = -(pcVar1[7] == auVar26[7]);
            auVar28[8] = -(pcVar1[8] == auVar26[0]);
            auVar28[9] = -(pcVar1[9] == auVar26[1]);
            auVar28[10] = -(pcVar1[10] == auVar26[2]);
            auVar28[0xb] = -(pcVar1[0xb] == auVar26[3]);
            auVar28[0xc] = -(pcVar1[0xc] == auVar26[4]);
            auVar28[0xd] = -(pcVar1[0xd] == auVar26[5]);
            auVar28[0xe] = -(pcVar1[0xe] == auVar26[6]);
            auVar28[0xf] = -(pcVar1[0xf] == auVar26[7]);
            uVar19 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar28[0xf] >> 7) << 0xf;
            uVar18 = (uint)uVar19;
            while (uVar19 != 0) {
              uVar22 = 0;
              for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar22 = uVar22 + 1;
              }
              if (lVar16 == *(longlong *)(lStack_e8 + (uVar22 + uVar12 & uStack_e0) * -8 + -8))
              goto LAB_140a690a7;
              uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
              uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
            }
            auVar27[0] = -(*pcVar1 == (char)iVar5);
            auVar27[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
            auVar27[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
            auVar27[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
            auVar27[4] = -(pcVar1[4] == (char)iVar6);
            auVar27[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
            auVar27[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
            auVar27[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
            auVar27[8] = -(pcVar1[8] == (char)iVar7);
            auVar27[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
            auVar27[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
            auVar27[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
            auVar27[0xc] = -(pcVar1[0xc] == (char)iVar8);
            auVar27[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
            auVar27[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
            auVar27[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
            if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
            uVar12 = uVar12 + lVar17 + 0x10;
            lVar17 = lVar17 + 0x10;
          }
        }
        *(longlong *)pbVar14 = lVar16;
        pbVar14 = pbVar14 + 8;
LAB_140a690a7:
        pbVar23 = pbVar23 + 8;
      } while (pbVar23 != pbVar21);
    }
    uVar15 = uStack_88;
    lVar16 = lStack_90;
    uStack_358 = uStack_87;
    uStack_351 = uStack_80;
    uStack_350 = (undefined1)uStack_7f;
    uStack_34f = (undefined6)((uint7)uStack_7f >> 8);
    if (uStack_e0 != 0) {
      uVar12 = uStack_e0 * 8 + 0x17 & 0xfffffffffffffff0;
      arg1 = uStack_e0 + uVar12 + 0x11;
      if (arg1 != 0) {
        pub_1406abac0((byte *)(lStack_e8 - uVar12),arg1,0x10);
      }
    }
    uStack_61 = 1;
    pdb_141ab7e60(&uStack_108);
    unaff_RBX = (ulonglong)((longlong)pbVar14 - (longlong)pbStack_a0) >> 3;
    uStack_b8 = uStack_358;
    uStack_b1 = uStack_351;
    uStack_b0 = (undefined7)(CONCAT62(uStack_34f,CONCAT11(uStack_350,uStack_351)) >> 8);
    puStack_340 = puStack_98;
    pbStack_338 = pbStack_a0;
    param_1 = puStack_78;
  }
  uStack_358 = (undefined7)lVar16;
  uStack_351 = (undefined1)((ulonglong)lVar16 >> 0x38);
  uStack_34f = (undefined6)uStack_b8;
  uStack_349 = (undefined1)((uint7)uStack_b8 >> 0x30);
  uStack_348 = uStack_b1;
  uStack_347 = uStack_b0;
  lVar16 = param_1[3];
  pcVar1 = (char *)(lVar16 + 0x10);
  LOCK();
  bVar24 = *(char *)(lVar16 + 0x10) == '\0';
  if (bVar24) {
    *(char *)(lVar16 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_350 = uVar15;
  uStack_330 = unaff_RBX;
  if (!bVar24) {
    pdb_142dbd1a0(pcVar1);
  }
  pdb_140e9a150(pcVar1);
  lVar17 = *(longlong *)(lVar16 + 0x18);
  if (-0x7fffffffffffffff < lVar17) {
    pbVar14 = *(byte **)(lVar16 + 0x20);
    lVar20 = *(longlong *)(lVar16 + 0x28);
    if (lVar20 != 0) {
      pbVar21 = pbVar14 + 0x10;
      do {
        if (*(ulonglong *)(pbVar21 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar21,*(ulonglong *)(pbVar21 + -8),1);
        }
        pbVar21 = pbVar21 + 0x20;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (lVar17 != 0) {
      pub_1406abac0(pbVar14,lVar17 << 5,8);
    }
    if (*(longlong *)(lVar16 + 0x30) != 0) {
      pub_1406abac0(*(byte **)(lVar16 + 0x38),*(longlong *)(lVar16 + 0x30) << 3,8);
    }
  }
  *(byte **)(lVar16 + 0x38) = pbStack_338;
  *(ulonglong *)(lVar16 + 0x40) = uStack_330;
  *(ulonglong *)(lVar16 + 0x28) = CONCAT71(uStack_347,uStack_348);
  *(undefined8 **)(lVar16 + 0x30) = puStack_340;
  *(ulonglong *)(lVar16 + 0x18) = CONCAT17(uStack_351,uStack_358);
  *(ulonglong *)(lVar16 + 0x20) = CONCAT17(uStack_349,CONCAT61(uStack_34f,uStack_350));
  pdb_140e9a350();
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    pdb_142dbcef0(pcVar1,0);
  }
  plVar11 = (longlong *)puStack_78[3];
  LOCK();
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (*plVar11 == 0) {
    pdb_140c7aa00();
  }
  return;
}

