// VA 0x1409d6eb0, PDB extent 2452 bytes
// country_core::systems::steam::workshop_mods::register_subscribed_workshop_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_mods::register_subscribed_workshop_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_mods.rs
   Extent: 2452 */

void pdb_1409d6eb0(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  byte *pbVar15;
  code *pcVar16;
  code *pcVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  ushort uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  bool bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined1 (*pauStack_1d8) [16];
  code *pcStack_1d0;
  longlong lStack_1c8;
  undefined1 uStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  code *pcStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined *puStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 (**ppauStack_160) [16];
  undefined1 (*pauStack_108) [16];
  code *pcStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined *puStack_e8;
  longlong *plStack_e0;
  longlong lStack_d8;
  undefined4 *puStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  undefined1 (*pauStack_b8) [16];
  code *pcStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined *puStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  byte *pbStack_78;
  code *pcStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  param_1 = (undefined8 *)*param_1;
  lStack_c8 = *param_2;
  if ((byte)(lStack_c8 == 0 | param_1 == (undefined8 *)0x0 | DAT_143cb2d0c) != 1) {
    puStack_d0 = (undefined4 *)param_2[2];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    pdb_140d8ead0(&pauStack_b8);
    lVar21 = lStack_a8;
    pcVar16 = pcStack_b0;
    puVar12 = (undefined8 *)pdb_140f3bda0();
    if (*(char *)(puVar12 + 2) == '\x01') {
      puStack_198 = (undefined *)*puVar12;
      param_2 = (longlong *)puVar12[1];
    }
    else {
      puStack_198 = (undefined *)pdb_140f4fd10();
      *puVar12 = puStack_198;
      puVar12[1] = param_2;
      *(undefined1 *)(puVar12 + 2) = 1;
    }
    *puVar12 = puStack_198 + 1;
    lStack_1a8 = _DAT_14302ee70;
    lStack_1a0 = _UNK_14302ee78;
    pauStack_1b8 = _DAT_14302ee60;
    pcStack_1b0 = _UNK_14302ee68;
    plStack_190 = param_2;
    if (lVar21 != 0) {
      pcVar17 = pcVar16 + 0x50;
      lVar23 = lVar21;
      do {
        if ((pcVar17[-0x50] == (code)0x0) &&
           (lVar13 = pdb_140c8a840(*(undefined8 *)(pcVar17 + -8),*(undefined8 *)pcVar17),
           lVar13 == 1)) {
          pdb_1403b05d0(&pauStack_1b8);
        }
        pcVar17 = pcVar17 + 0xb0;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    pbStack_78 = (byte *)lVar21;
    puStack_e8 = puStack_198;
    plStack_e0 = plStack_190;
    lStack_f8 = lStack_1a8;
    lStack_f0 = lStack_1a0;
    pauStack_108 = pauStack_1b8;
    pcStack_100 = pcStack_1b0;
    puStack_80 = (undefined8 *)0x0;
    pcStack_70 = pcVar16;
    while (pbStack_78 != (byte *)puStack_80) {
      puStack_80 = (undefined8 *)((longlong)puStack_80 + 1);
      pdb_1404b3c90(pcVar16);
      pcVar16 = pcVar16 + 0xb0;
    }
    puStack_80 = param_1;
    if (pauStack_b8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pcStack_70,(longlong)pauStack_b8 * 0xb0,8);
    }
    auVar27 = *pauStack_108;
    pauVar18 = pauStack_108 + 1;
    uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
    lVar23 = lStack_c8 + 0x38;
    lVar21 = lStack_f0;
    pauVar24 = pauStack_108;
    while (bVar25 = lVar21 != 0, lVar21 = lVar21 + -1, bVar25) {
      if ((short)uVar22 == 0) {
        do {
          auVar27 = *pauVar18;
          pauVar24 = pauVar24 + -8;
          pauVar18 = pauVar18 + 1;
          uVar22 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar22 == 0);
      }
      iVar5 = 0;
      for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      uVar14 = *(undefined8 *)((longlong)pauVar24 + (-8 - (ulonglong)(uint)(iVar5 << 3)));
      *puStack_d0 = uVar3;
      pauStack_1b8 = (undefined1 (*) [16])0x0;
      pcStack_1b0 = (code *)0x8;
      lStack_1a8 = 0;
      lStack_1a0 = CONCAT71(lStack_1a0._1_7_,1);
      pdb_1417b9370(&pauStack_b8,lVar23,uVar14);
      if ((!SBORROW8(0,(longlong)pauStack_b8)) && (pauStack_b8 != (undefined1 (*) [16])0x0)) {
        pub_1406abac0((byte *)pcStack_b0,(longlong)pauStack_b8 << 3,8);
      }
      uVar22 = uVar22 - 1 & uVar22;
    }
    uVar14 = pub_142e32030();
    plVar4 = (longlong *)*puStack_80;
    LOCK();
    lVar21 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 == 0 || SCARRY8(lVar21,1) != *plVar4 < 0) {
LAB_1409d75c0:
                    /* WARNING: Does not return */
      pcVar16 = (code *)invalidInstructionException();
      (*pcVar16)();
    }
    plStack_90 = plVar4;
    uStack_88 = uVar14;
    uVar22 = pub_142e32050(uVar14);
    uVar19 = (ulonglong)uVar22 * 8;
    if (uVar22 == 0) {
      pbVar15 = (byte *)0x8;
    }
    else {
      pdb_14007ee60();
      pbVar15 = pub_1406abae0(uVar19,8);
      if (pbVar15 == (byte *)0x0) {
        pdb_142dc7e2a(8,uVar19);
        goto LAB_1409d75c0;
      }
    }
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,uVar22);
    pub_142e32060(uVar14,pbVar15,uVar22);
    uStack_c0 = uVar19;
    pbStack_78 = pbVar15;
    if ((ulonglong)uVar22 != 0) {
      pbVar1 = pbVar15 + uVar19;
      iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      do {
        lVar21 = *(longlong *)pbVar15;
        lStack_d8 = lVar21;
        if (lStack_f0 != 0) {
          uVar19 = pdb_1400af0a0(&puStack_e8,(undefined1 (*) [16])&lStack_d8);
          bVar26 = (byte)(uVar19 >> 0x39);
          auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
          auVar27 = pshuflw(auVar27,auVar27,0);
          lVar23 = 0;
          while( true ) {
            uVar19 = uVar19 & (ulonglong)pcStack_100;
            auVar2 = *(undefined1 (*) [16])(*pauStack_108 + uVar19);
            auVar29[0] = -(auVar2[0] == auVar27[0]);
            auVar29[1] = -(auVar2[1] == auVar27[1]);
            auVar29[2] = -(auVar2[2] == auVar27[2]);
            auVar29[3] = -(auVar2[3] == auVar27[3]);
            auVar29[4] = -(auVar2[4] == auVar27[4]);
            auVar29[5] = -(auVar2[5] == auVar27[5]);
            auVar29[6] = -(auVar2[6] == auVar27[6]);
            auVar29[7] = -(auVar2[7] == auVar27[7]);
            auVar29[8] = -(auVar2[8] == auVar27[0]);
            auVar29[9] = -(auVar2[9] == auVar27[1]);
            auVar29[10] = -(auVar2[10] == auVar27[2]);
            auVar29[0xb] = -(auVar2[0xb] == auVar27[3]);
            auVar29[0xc] = -(auVar2[0xc] == auVar27[4]);
            auVar29[0xd] = -(auVar2[0xd] == auVar27[5]);
            auVar29[0xe] = -(auVar2[0xe] == auVar27[6]);
            auVar29[0xf] = -(auVar2[0xf] == auVar27[7]);
            uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar29[0xf] >> 7) << 0xf;
            uVar22 = (uint)uVar20;
            while (uVar20 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (lStack_d8 ==
                  *(longlong *)
                   ((longlong)pauStack_108 + (uVar6 + uVar19 & (ulonglong)pcStack_100) * -8 + -8)) {
                if (2 < *_DAT_143ca8e90) {
                  pcStack_b0 = pdb_140c91ab0;
                  pauStack_1b8 = (undefined1 (*) [16])0x0;
                  pcStack_1b0 = (code *)&UNK_14302f0c8;
                  lStack_1a8 = 0x2b;
                  lStack_1a0 = 0;
                  puStack_198 = &UNK_14302f077;
                  plStack_190 = (longlong *)0x36;
                  uStack_188 = 3;
                  puStack_180 = &UNK_14302f0c8;
                  uStack_178 = 0x2b;
                  uStack_170 = 0x3f00000001;
                  puStack_168 = &UNK_14302f1b6;
                  ppauStack_160 = &pauStack_b8;
                  pauStack_b8 = (undefined1 (*) [16])&lStack_d8;
                  pdb_140f332f0(&uStack_61,&pauStack_1b8);
                }
                goto LAB_1409d72a0;
              }
              uVar20 = (ushort)(uVar22 - 1) & (ushort)uVar22;
              uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar20);
            }
            auVar28[0] = -(auVar2[0] == (char)iVar5);
            auVar28[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
            auVar28[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
            auVar28[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
            auVar28[4] = -(auVar2[4] == (char)iVar8);
            auVar28[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
            auVar28[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
            auVar28[7] = -(auVar2[7] == (char)((uint)iVar8 >> 0x18));
            auVar28[8] = -(auVar2[8] == (char)iVar9);
            auVar28[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
            auVar28[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
            auVar28[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
            auVar28[0xc] = -(auVar2[0xc] == (char)iVar10);
            auVar28[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
            auVar28[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
            auVar28[0xf] = -(auVar2[0xf] == (char)((uint)iVar10 >> 0x18));
            if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
            uVar19 = uVar19 + lVar23 + 0x10;
            lVar23 = lVar23 + 0x10;
          }
        }
        uVar19 = pub_142e32070(uStack_88,lVar21);
        if ((uVar19 & 4) == 0) {
          cVar11 = pub_142e32040(uStack_88,lVar21,1);
          if ((cVar11 == '\0') && (1 < *_DAT_143ca8e90)) {
            pcStack_b0 = pdb_140c91ab0;
            pauStack_1b8 = (undefined1 (*) [16])0x0;
            pcStack_1b0 = (code *)&UNK_14302f0c8;
            lStack_1a8 = 0x2b;
            lStack_1a0 = 0;
            puStack_198 = &UNK_14302f077;
            plStack_190 = (longlong *)0x36;
            uStack_188 = 2;
            puStack_180 = &UNK_14302f0c8;
            uStack_178 = 0x2b;
            uStack_170 = 0x4700000001;
            puStack_168 = &UNK_14302f186;
            ppauStack_160 = &pauStack_b8;
            pauStack_b8 = (undefined1 (*) [16])&lStack_d8;
            pdb_140f332f0(&uStack_61,&pauStack_1b8);
          }
        }
        else {
          pdb_141a56080(&pauStack_1b8,&plStack_90,lVar21);
          if (!SBORROW8(0,(longlong)pauStack_1b8)) {
            puStack_98 = puStack_198;
            lStack_a8 = lStack_1a8;
            lStack_a0 = lStack_1a0;
            pauStack_b8 = pauStack_1b8;
            pcStack_b0 = pcStack_1b0;
            lStack_1c8 = lStack_1a8;
            pauStack_1d8 = pauStack_1b8;
            pcStack_1d0 = pcStack_1b0;
            uStack_1c0 = 1;
            *puStack_d0 = uVar3;
            pdb_1409d5f90(&pauStack_1b8,lVar21,&pauStack_1d8,lStack_c8,puStack_80);
            if ((int)pauStack_1b8 != 2) {
              pdb_1404b3c90(&pauStack_1b8);
            }
          }
        }
LAB_1409d72a0:
        pbVar15 = pbVar15 + 8;
      } while (pbVar15 != pbVar1);
    }
    if ((int)pcStack_70 != 0) {
      pub_1406abac0(pbStack_78,uStack_c0,8);
    }
    LOCK();
    *plStack_90 = *plStack_90 + -1;
    UNLOCK();
    if (*plStack_90 == 0) {
      pdb_140cb1c10(&plStack_90);
    }
    if (pcStack_100 != (code *)0x0) {
      uVar19 = (longlong)pcStack_100 * 8 + 0x17U & 0xfffffffffffffff0;
      if (pcStack_100 + uVar19 + 0x11 != (code *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_108 - uVar19),
                      (ulonglong)(pcStack_100 + uVar19 + 0x11),0x10);
      }
    }
  }
  return;
}

