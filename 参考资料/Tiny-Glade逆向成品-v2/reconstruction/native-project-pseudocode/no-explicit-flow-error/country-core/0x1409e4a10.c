// VA 0x1409e4a10, PDB extent 1225 bytes
// country_core::startup::startup_nani::reload_nani
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_nani::reload_nani
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 1225 */

void pdb_1409e4a10(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  bool bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 *puStack_100;
  ushort uStack_f8;
  undefined1 (**ppauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  longlong lStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 *puStack_90;
  ulonglong uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 (***pppauStack_70) [16];
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar12 = param_2;
  puStack_80 = param_3;
  puStack_78 = param_1;
  plVar7 = (longlong *)pdb_140f3bda0();
  plStack_b0 = param_2;
  if ((char)plVar7[2] == '\x01') {
    lStack_c8 = *plVar7;
    plVar12 = (longlong *)plVar7[1];
  }
  else {
    lStack_c8 = pdb_140f4fd10();
    *plVar7 = lStack_c8;
    plVar7[1] = (longlong)plVar12;
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  *plVar7 = lStack_c8 + 1;
  uStack_d8 = _DAT_143032a90;
  lStack_d0 = _UNK_143032a98;
  pauStack_e8 = _DAT_143032a80;
  lStack_e0 = _UNK_143032a88;
  puVar3 = (ulonglong *)*param_4;
  lVar21 = param_4[1];
  uVar10 = *puVar3;
  uVar13 = 0;
  uVar8 = uVar10 - *(ulonglong *)(lVar21 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar21 + 0x18)) {
    uVar8 = uVar13;
  }
  uVar15 = uVar10 - *(ulonglong *)(lVar21 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar21 + 0x38)) {
    uVar15 = uVar13;
  }
  puVar24 = (undefined8 *)(uVar8 * 0x38 + *(longlong *)(lVar21 + 8));
  uVar10 = *(ulonglong *)(lVar21 + 0x10);
  uVar16 = uVar10 - uVar8;
  if (uVar10 < uVar8) {
    uVar16 = uVar13;
  }
  if (uVar10 < uVar8) {
    puVar24 = (undefined8 *)0x8;
  }
  puVar9 = (undefined8 *)(uVar15 * 0x38 + *(longlong *)(lVar21 + 0x28));
  uVar10 = *(ulonglong *)(lVar21 + 0x30) - uVar15;
  if (*(ulonglong *)(lVar21 + 0x30) < uVar15) {
    puVar9 = (undefined8 *)0x8;
    uVar10 = uVar13;
  }
  *puVar3 = (*(longlong *)(lVar21 + 0x40) - uVar10) - uVar16;
  puStack_90 = puVar9 + uVar10 * 7;
  puVar25 = puVar24;
  plStack_c0 = plVar12;
  do {
    while ((puVar25 == (undefined8 *)0x0 || (puVar25 == puVar24 + uVar16 * 7))) {
      if ((puVar9 == (undefined8 *)0x0) || (puVar9 == puStack_90)) {
        auVar29 = *pauStack_e8;
        lStack_a8 = lStack_e0;
        if (lStack_e0 == 0) {
          uStack_88 = 0;
        }
        else {
          uVar10 = lStack_e0 + 0x10U & 0xfffffffffffffff0;
          uStack_a0 = lStack_e0 + uVar10 + 0x11;
          pbStack_98 = (byte *)((longlong)pauStack_e8 - uVar10);
          uStack_88 = 0x10;
        }
        pauVar23 = pauStack_e8 + 1;
        uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
        plVar12 = (longlong *)*plStack_b0;
        puStack_90 = (undefined8 *)
                     CONCAT44(puStack_90._4_4_,*(undefined4 *)((longlong)puStack_80 + 0x1c));
        puVar24 = puStack_80 + 2;
        plVar7 = (longlong *)*puStack_78;
        lVar21 = lStack_d0;
        pauVar26 = pauStack_e8;
        puStack_80 = (undefined8 *)*puStack_80;
        puStack_78 = (undefined8 *)*puVar24;
LAB_1409e4d1d:
        bVar27 = lVar21 == 0;
        lVar21 = lVar21 + -1;
        if (bVar27) {
          if ((lStack_a8 != 0) && (uStack_a0 != 0)) {
            pub_1406abac0(pbStack_98,uStack_a0,uStack_88);
          }
          return;
        }
        if ((short)uVar14 == 0) {
          do {
            auVar29 = *pauVar23;
            pauVar26 = pauVar26 + -1;
            pauVar23 = pauVar23 + 1;
            uVar14 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar14 == 0);
        }
        uVar18 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar2 = (*pauVar26)[~(ulonglong)uVar18];
        pppauStack_70 = (undefined1 (***) [16])CONCAT71(pppauStack_70._1_7_,uVar2);
        if (plVar12[3] != 0) {
          uVar10 = pdb_1417c4b30(plVar12 + 4,&pppauStack_70);
          uVar14 = uVar14 - 1 & uVar14;
          lVar11 = *plVar12;
          bVar28 = (byte)(uVar10 >> 0x39);
          auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
          auVar29 = pshuflw(auVar29,auVar29,0);
          lVar17 = 0;
          while( true ) {
            uVar10 = uVar10 & plVar12[1];
            auVar1 = *(undefined1 (*) [16])(lVar11 + uVar10);
            auVar31[0] = -(auVar1[0] == auVar29[0]);
            auVar31[1] = -(auVar1[1] == auVar29[1]);
            auVar31[2] = -(auVar1[2] == auVar29[2]);
            auVar31[3] = -(auVar1[3] == auVar29[3]);
            auVar31[4] = -(auVar1[4] == auVar29[4]);
            auVar31[5] = -(auVar1[5] == auVar29[5]);
            auVar31[6] = -(auVar1[6] == auVar29[6]);
            auVar31[7] = -(auVar1[7] == auVar29[7]);
            auVar31[8] = -(auVar1[8] == auVar29[0]);
            auVar31[9] = -(auVar1[9] == auVar29[1]);
            auVar31[10] = -(auVar1[10] == auVar29[2]);
            auVar31[0xb] = -(auVar1[0xb] == auVar29[3]);
            auVar31[0xc] = -(auVar1[0xc] == auVar29[4]);
            auVar31[0xd] = -(auVar1[0xd] == auVar29[5]);
            auVar31[0xe] = -(auVar1[0xe] == auVar29[6]);
            auVar31[0xf] = -(auVar1[0xf] == auVar29[7]);
            uVar19 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar31[0xf] >> 7) << 0xf;
            uVar18 = (uint)uVar19;
            while (uVar19 != 0) {
              uVar5 = 0;
              for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar20 = (uVar5 + uVar10 & plVar12[1]) * -0xf0;
              if ((char)pppauStack_70 == *(char *)(lVar11 + -0xf0 + lVar20)) {
                lVar11 = lVar11 + lVar20;
                *(undefined4 *)puStack_78 = puStack_90._0_4_;
                pdb_1409d3790(puStack_80,*plVar7 + 0x10,uVar2,*(undefined8 *)(lVar11 + -0x50),
                              *(undefined8 *)(lVar11 + -0x48));
                goto LAB_1409e4d1d;
              }
              uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
              uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
            }
            auVar30[0] = -(auVar1[0] == -1);
            auVar30[1] = -(auVar1[1] == -1);
            auVar30[2] = -(auVar1[2] == -1);
            auVar30[3] = -(auVar1[3] == -1);
            auVar30[4] = -(auVar1[4] == -1);
            auVar30[5] = -(auVar1[5] == -1);
            auVar30[6] = -(auVar1[6] == -1);
            auVar30[7] = -(auVar1[7] == -1);
            auVar30[8] = -(auVar1[8] == -1);
            auVar30[9] = -(auVar1[9] == -1);
            auVar30[10] = -(auVar1[10] == -1);
            auVar30[0xb] = -(auVar1[0xb] == -1);
            auVar30[0xc] = -(auVar1[0xc] == -1);
            auVar30[0xd] = -(auVar1[0xd] == -1);
            auVar30[0xe] = -(auVar1[0xe] == -1);
            auVar30[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar30 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
            uVar10 = uVar10 + lVar17 + 0x10;
            lVar17 = lVar17 + 0x10;
          }
        }
        pauStack_110 = (undefined1 (*) [16])&pppauStack_70;
        pauStack_108 = (undefined1 (*) [16])pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303dd85,&pauStack_110,&UNK_14303dde0);
      }
      puVar22 = (undefined8 *)0x0;
      *puVar3 = *puVar3 + 1;
      puVar6 = puVar9 + 7;
      puVar25 = puVar9;
      if (lStack_d0 == 0) goto LAB_1409e4bb3;
LAB_1409e4b00:
      puVar9 = puVar6;
      pauVar23 = (undefined1 (*) [16])*puVar25;
      lVar21 = puVar25[1];
      auVar29 = *pauVar23;
      lVar11 = puVar25[3];
      uVar10 = lVar11 + 1U >> 1;
      if (uStack_d8 < uVar10) {
        uStack_61 = 1;
        pdb_142d952b0(&pauStack_e8,uVar10,&lStack_c8);
      }
      puStack_100 = *pauVar23 + lVar21 + 1;
      uStack_f8 = ~((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      ppauStack_f0 = &pauStack_e8;
      pppauStack_70 = &ppauStack_f0;
      pauStack_108 = pauVar23 + 1;
      uStack_61 = 1;
      pauStack_110 = pauVar23;
      pdb_140ca7f30(&pauStack_110,lVar11,&pppauStack_70);
      puVar25 = puVar22;
    }
    puVar22 = puVar25 + 7;
    *puVar3 = *puVar3 + 1;
    puVar6 = puVar9;
    if (lStack_d0 != 0) goto LAB_1409e4b00;
LAB_1409e4bb3:
    puVar9 = puVar6;
    uStack_61 = 1;
    pdb_140ca3270(&pauStack_e8,puVar25);
    lStack_c8 = puVar25[4];
    plStack_c0 = (longlong *)puVar25[5];
    puVar25 = puVar22;
  } while( true );
}

