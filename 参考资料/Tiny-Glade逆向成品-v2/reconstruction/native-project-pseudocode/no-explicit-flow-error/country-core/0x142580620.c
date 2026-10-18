// VA 0x142580620, PDB extent 2126 bytes
// country_core::render::nani::systems::nani_update_wooden_arch_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_wooden_arch_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2126 */

longlong * pdb_142580620(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong lVar23;
  uint *puVar24;
  undefined *puVar25;
  ushort uVar26;
  longlong lVar27;
  undefined *puVar28;
  char *pcVar29;
  longlong *plVar30;
  bool bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  uint uStack_84;
  longlong *plStack_80;
  longlong lStack_78;
  longlong lStack_70;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar30 = param_2;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_c0 = 0;
    goto LAB_1425807ee;
  }
  plVar30 = (longlong *)&UNK_14351c472;
  lVar23 = 0x42;
  uVar21 = 0x42;
  lVar17 = pdb_142585200(&UNK_14351c472);
  if (lVar17 != 1) {
LAB_1425806c6:
    puVar25 = &UNK_14351bdcd;
    puVar28 = &UNK_14351bd9f;
    do {
      bVar32 = puVar25[-1];
      uVar14 = (uint)(char)bVar32;
      if ((char)bVar32 < '\0') {
        bVar5 = puVar25[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar25[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar14 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar14 = bVar6 & 0xf;
          }
          uVar14 = bVar5 & 0x3f | uVar14 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar14 = bVar5 & 0x1f;
        }
        uVar14 = (uint)(bVar32 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_142580754;
LAB_14258076d:
        if ((undefined *)0x2e < puVar25 + -0x14351bd9e) goto LAB_142580ccc;
        lVar17 = 0x2e - (longlong)(puVar25 + -0x14351bd9e);
        puVar28 = puVar25 + 1;
        goto LAB_142580790;
      }
      puVar25 = puVar25 + -1;
      if (uVar14 == 0x5c) goto LAB_14258076d;
LAB_142580754:
      if (uVar14 == 0x2f) goto LAB_14258076d;
    } while (puVar25 != &UNK_14351bd9f);
    lVar17 = 0x2e;
LAB_142580790:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] == '\x01') ||
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 != (longlong *)0x0)) {
      if (*plVar19 != 0) goto LAB_142580c82;
      *plVar19 = -1;
      plStack_80 = plVar19;
      uStack_b8 = pdb_140e94f10(plVar19 + 1,plVar30,lVar23,puVar28,lVar17,1,0);
      *plStack_80 = *plStack_80 + 1;
      lStack_c0 = 1;
LAB_1425807ee:
      uVar22 = CONCAT71((int7)((ulonglong)plVar30 >> 8),0x1a);
      param_2 = (longlong *)pdb_1409d2d80(*param_2);
      lStack_90 = *param_1;
      lVar17 = param_1[1];
      puVar24 = *(uint **)(lStack_90 + 0xf8);
      puVar2 = puVar24 + *(longlong *)(lStack_90 + 0x100);
      cStack_61 = *(char *)(lStack_90 + 0x108);
      plStack_b0 = (longlong *)*param_3;
      plStack_d8 = plStack_b0 + 4;
      plStack_a0 = plStack_b0 + 6;
      lVar23 = 0;
      lStack_a8 = 8;
      iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                      CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                      CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      lStack_78 = 0;
      lStack_70 = 0;
      uVar14 = 0;
      uStack_e0 = uVar22;
      do {
        plStack_98 = param_2;
        if (cStack_61 == '\0') {
          if (uVar14 == (uint)lVar23) {
            do {
              if (puVar24 == puVar2) goto LAB_142580c07;
              uVar14 = *puVar24;
              puVar24 = puVar24 + 1;
              lVar23 = *(longlong *)
                        (*(longlong *)(lVar17 + 0x100) + 0x58 + (ulonglong)uVar14 * 0xa0);
            } while (lVar23 == 0);
            lVar20 = *(longlong *)(lVar17 + 0x100) + (ulonglong)uVar14 * 0xa0;
            uVar21 = (ulonglong)*(uint *)(lVar20 + 0x94);
            lVar3 = *(longlong *)(lVar17 + 0x1a0) + uVar21 * 0x48;
            uVar21 = *(ulonglong *)(*(longlong *)(lVar17 + 0x1a0) + 0x40 + uVar21 * 0x48);
            if ((*(ulonglong *)(lStack_90 + 0x110) < uVar21) &&
               (uVar18 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_90 + 0x110) * 8),
               uVar18 != 0)) {
              lStack_78 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar18 * 0x30);
              uVar18 = *(ulonglong *)(lStack_90 + 0x118);
              if (uVar21 <= uVar18) goto LAB_14258095b;
LAB_142580934:
              uVar21 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar18 * 8);
              if (uVar21 == 0) goto LAB_14258095b;
              lStack_70 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar21 * 0x30);
            }
            else {
              lStack_78 = 0;
              uVar18 = *(ulonglong *)(lStack_90 + 0x118);
              if (uVar18 < uVar21) goto LAB_142580934;
LAB_14258095b:
              lStack_70 = 0;
            }
            lStack_a8 = *(longlong *)(lVar20 + 0x50);
            uVar14 = 0;
          }
          uVar15 = ~*(uint *)(lStack_a8 + 8 + (ulonglong)uVar14 * 0x10);
        }
        else {
          uVar15 = uVar14;
          if (uVar14 == (uint)lVar23) {
            do {
              if (puVar24 == puVar2) goto LAB_142580c07;
              uVar14 = *puVar24;
              puVar24 = puVar24 + 1;
              lVar23 = *(longlong *)
                        (*(longlong *)(lVar17 + 0x1a0) + 0x10 + (ulonglong)uVar14 * 0x48);
            } while (lVar23 == 0);
            lVar3 = *(longlong *)(lVar17 + 0x1a0) + (ulonglong)uVar14 * 0x48;
            uVar21 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_90 + 0x110) < uVar21) &&
               (uVar18 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_90 + 0x110) * 8),
               uVar18 != 0)) {
              lStack_78 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar18 * 0x30);
              uVar18 = *(ulonglong *)(lStack_90 + 0x118);
              if (uVar21 <= uVar18) goto LAB_142580a52;
LAB_142580a2b:
              uVar21 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar18 * 8);
              if (uVar21 == 0) goto LAB_142580a52;
              lStack_70 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar21 * 0x30);
            }
            else {
              lStack_78 = 0;
              uVar18 = *(ulonglong *)(lStack_90 + 0x118);
              if (uVar18 < uVar21) goto LAB_142580a2b;
LAB_142580a52:
              lStack_70 = 0;
            }
            uVar15 = 0;
            uVar14 = uVar15;
          }
        }
        uStack_84 = uVar14;
        plStack_80 = (longlong *)(lStack_78 + (ulonglong)uVar15 * 0xc);
        pcVar29 = (char *)((ulonglong)uVar15 * 0x58 + lStack_70);
        uStack_f8 = *(undefined8 *)(pcVar29 + 0x50);
        lStack_128 = *(longlong *)(pcVar29 + 0x20);
        uStack_120 = *(undefined8 *)(pcVar29 + 0x28);
        uStack_118 = *(undefined8 *)(pcVar29 + 0x30);
        uStack_110 = *(undefined8 *)(pcVar29 + 0x38);
        uStack_108 = *(undefined8 *)(pcVar29 + 0x40);
        uStack_100 = *(undefined8 *)(pcVar29 + 0x48);
        if (*pcVar29 == '\0') {
          lVar3 = *(longlong *)(pcVar29 + 8);
          plVar30 = plStack_a0;
          lStack_d0 = lVar3;
          if (plStack_b0[3] != 0) {
            uVar21 = pdb_1400af0a0(plStack_d8,&lStack_d0);
            bVar32 = (byte)(uVar21 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar20 = 0;
            while( true ) {
              uVar21 = uVar21 & plStack_b0[1];
              pcVar4 = (char *)(*plStack_b0 + uVar21);
              auVar35[0] = -(*pcVar4 == auVar33[0]);
              auVar35[1] = -(pcVar4[1] == auVar33[1]);
              auVar35[2] = -(pcVar4[2] == auVar33[2]);
              auVar35[3] = -(pcVar4[3] == auVar33[3]);
              auVar35[4] = -(pcVar4[4] == auVar33[4]);
              auVar35[5] = -(pcVar4[5] == auVar33[5]);
              auVar35[6] = -(pcVar4[6] == auVar33[6]);
              auVar35[7] = -(pcVar4[7] == auVar33[7]);
              auVar35[8] = -(pcVar4[8] == auVar33[0]);
              auVar35[9] = -(pcVar4[9] == auVar33[1]);
              auVar35[10] = -(pcVar4[10] == auVar33[2]);
              auVar35[0xb] = -(pcVar4[0xb] == auVar33[3]);
              auVar35[0xc] = -(pcVar4[0xc] == auVar33[4]);
              auVar35[0xd] = -(pcVar4[0xd] == auVar33[5]);
              auVar35[0xe] = -(pcVar4[0xe] == auVar33[6]);
              auVar35[0xf] = -(pcVar4[0xf] == auVar33[7]);
              uVar26 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar35[0xf] >> 7) << 0xf;
              uVar14 = (uint)uVar26;
              while (uVar26 != 0) {
                uVar15 = 0;
                for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar15 = uVar15 + 1;
                }
                lVar27 = *plStack_b0 + (uVar15 + uVar21 & plStack_b0[1]) * -0x10;
                if (lVar3 == *(longlong *)(lVar27 + -0x10)) {
                  plVar30 = (longlong *)(lVar27 + -8);
                  goto LAB_142580b90;
                }
                uVar26 = (ushort)(uVar14 - 1) & (ushort)uVar14;
                uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar26);
              }
              auVar34[0] = -(*pcVar4 == (char)iVar9);
              auVar34[1] = -(pcVar4[1] == (char)((uint)iVar9 >> 8));
              auVar34[2] = -(pcVar4[2] == (char)((uint)iVar9 >> 0x10));
              auVar34[3] = -(pcVar4[3] == (char)((uint)iVar9 >> 0x18));
              auVar34[4] = -(pcVar4[4] == (char)iVar10);
              auVar34[5] = -(pcVar4[5] == (char)((uint)iVar10 >> 8));
              auVar34[6] = -(pcVar4[6] == (char)((uint)iVar10 >> 0x10));
              auVar34[7] = -(pcVar4[7] == (char)((uint)iVar10 >> 0x18));
              auVar34[8] = -(pcVar4[8] == (char)iVar11);
              auVar34[9] = -(pcVar4[9] == (char)((uint)iVar11 >> 8));
              auVar34[10] = -(pcVar4[10] == (char)((uint)iVar11 >> 0x10));
              auVar34[0xb] = -(pcVar4[0xb] == (char)((uint)iVar11 >> 0x18));
              auVar34[0xc] = -(pcVar4[0xc] == (char)iVar12);
              auVar34[0xd] = -(pcVar4[0xd] == (char)((uint)iVar12 >> 8));
              auVar34[0xe] = -(pcVar4[0xe] == (char)((uint)iVar12 >> 0x10));
              auVar34[0xf] = -(pcVar4[0xf] == (char)((uint)iVar12 >> 0x18));
              plVar30 = plStack_a0;
              if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
              uVar21 = uVar21 + lVar20 + 0x10;
              lVar20 = lVar20 + 0x10;
            }
          }
LAB_142580b90:
          uVar16 = (undefined4)*plVar30;
        }
        else {
          uVar16 = *(undefined4 *)(pcVar29 + 4);
        }
        uStack_110 = CONCAT44(uVar16,(undefined4)uStack_110);
        pdb_140fb49c0(&lStack_d0,pcVar29 + 0x10);
        uStack_120 = CONCAT44(uStack_c4,uStack_c8);
        lStack_128 = lStack_d0;
        uStack_c8 = *(undefined4 *)(pcVar29 + 0x18);
        lStack_d0 = *(longlong *)(pcVar29 + 0x10);
        pdb_140954740(uStack_e0,plStack_80,&lStack_d0,*(undefined4 *)(pcVar29 + 0x1c),&lStack_128,
                      &UNK_14351c158);
        uVar14 = uStack_84 + 1;
        param_2 = plStack_98;
      } while( true );
    }
    goto LAB_142580cc0;
  }
  if (uVar21 < 0x43) {
    plVar30 = (longlong *)&UNK_14351c472;
    uVar18 = pdb_142585200(&UNK_14351c472);
    if ((uVar18 & 1) != 0) {
      if (0x42 < uVar21 + 2) goto LAB_142580d0f;
      lVar23 = 0x40 - uVar21;
      plVar30 = (longlong *)(&UNK_14351c474 + uVar21);
    }
    goto LAB_1425806c6;
  }
  goto LAB_142580cef;
LAB_142580c07:
  pdb_140e9a350(param_2);
  pdb_140e9a350();
  LOCK();
  plVar30 = (longlong *)*param_2;
  bVar31 = plVar30 == (longlong *)0x8;
  if (bVar31) {
    *param_2 = 0;
    plVar30 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar31) goto LAB_142580c8f;
  while( true ) {
    if (lStack_c0 == 0) {
      return plVar30;
    }
    plVar30 = (longlong *)pdb_140e97000();
    if (((char)plVar30[0xd] != '\x01') &&
       (plVar30 = (longlong *)pdb_142d8ec20(plVar30,0), plVar30 == (longlong *)0x0)) break;
    if (*plVar30 == 0) {
      *plVar30 = -1;
      plStack_80 = plVar30;
      pdb_140e95370(plVar30 + 1,uStack_b8);
      *plStack_80 = *plStack_80 + 1;
      return plStack_80;
    }
LAB_142580c82:
    pdb_142dc8090(&UNK_143326a50);
LAB_142580c8f:
    plVar30 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142580cc0:
  pdb_142dc7890(&UNK_143326860);
LAB_142580ccc:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142580cef:
  pdb_142dc8070(&UNK_14351c472,0x42,0);
LAB_142580d0f:
  pdb_142dc8070(&UNK_14351c472,0x42);
  pcVar7 = (code *)swi(3);
  plVar30 = (longlong *)(*pcVar7)();
  return plVar30;
}

