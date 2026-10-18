// VA 0x140c41ae0, PDB extent 1425 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_before_after_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_before_after_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 1425 */

undefined8 *
pdb_140c41ae0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined1 (*param_4) [16],
             undefined8 *param_5,char param_6,char param_7)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (**ppauVar19) [16];
  undefined1 *arg1;
  uint uVar20;
  ushort uVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 *puStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined1 (*pauStack_e0) [16];
  longlong *plStack_d8;
  code *pcStack_d0;
  undefined1 (**ppauStack_c8) [16];
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a0;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  longlong **pplStack_88;
  code *pcStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_e8 = param_3;
  pauStack_e0 = param_4;
  if (param_3 == 0) {
    pauStack_98 = param_4;
    if (param_2[3] == 0) {
      param_2 = (longlong *)0x0;
      goto joined_r0x000140c41c1a;
    }
    uVar13 = pdb_1400af0a0(param_2 + 4,&pauStack_98);
    lVar16 = *param_2;
    bVar23 = (byte)(uVar13 >> 0x39);
    auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar24 = pshuflw(auVar24,auVar24,0);
    lVar15 = 0;
    while( true ) {
      uVar13 = uVar13 & param_2[1];
      pcVar1 = (char *)(lVar16 + uVar13);
      auVar26[0] = -(*pcVar1 == auVar24[0]);
      auVar26[1] = -(pcVar1[1] == auVar24[1]);
      auVar26[2] = -(pcVar1[2] == auVar24[2]);
      auVar26[3] = -(pcVar1[3] == auVar24[3]);
      auVar26[4] = -(pcVar1[4] == auVar24[4]);
      auVar26[5] = -(pcVar1[5] == auVar24[5]);
      auVar26[6] = -(pcVar1[6] == auVar24[6]);
      auVar26[7] = -(pcVar1[7] == auVar24[7]);
      auVar26[8] = -(pcVar1[8] == auVar24[0]);
      auVar26[9] = -(pcVar1[9] == auVar24[1]);
      auVar26[10] = -(pcVar1[10] == auVar24[2]);
      auVar26[0xb] = -(pcVar1[0xb] == auVar24[3]);
      auVar26[0xc] = -(pcVar1[0xc] == auVar24[4]);
      auVar26[0xd] = -(pcVar1[0xd] == auVar24[5]);
      auVar26[0xe] = -(pcVar1[0xe] == auVar24[6]);
      auVar26[0xf] = -(pcVar1[0xf] == auVar24[7]);
      uVar21 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar22 = (uVar2 + uVar13 & param_2[1]) * -0x98;
        if (param_4 == *(undefined1 (**) [16])(lVar16 + -0x98 + lVar22)) {
          lVar16 = lVar16 + lVar22;
          goto LAB_140c41c23;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar25[0] = -(*pcVar1 == -1);
      auVar25[1] = -(pcVar1[1] == -1);
      auVar25[2] = -(pcVar1[2] == -1);
      auVar25[3] = -(pcVar1[3] == -1);
      auVar25[4] = -(pcVar1[4] == -1);
      auVar25[5] = -(pcVar1[5] == -1);
      auVar25[6] = -(pcVar1[6] == -1);
      auVar25[7] = -(pcVar1[7] == -1);
      auVar25[8] = -(pcVar1[8] == -1);
      auVar25[9] = -(pcVar1[9] == -1);
      auVar25[10] = -(pcVar1[10] == -1);
      auVar25[0xb] = -(pcVar1[0xb] == -1);
      auVar25[0xc] = -(pcVar1[0xc] == -1);
      auVar25[0xd] = -(pcVar1[0xd] == -1);
      auVar25[0xe] = -(pcVar1[0xe] == -1);
      auVar25[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar13 = uVar13 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
    lVar16 = 0;
LAB_140c41c23:
    param_2 = (longlong *)(lVar16 + -0x90);
    if (lVar16 == 0) {
      param_2 = (longlong *)0x0;
    }
    if (param_7 == '\0') goto LAB_140c41c40;
LAB_140c41cdd:
    if (param_2 != (longlong *)0x0) goto LAB_140c41ce6;
    pauVar18 = (undefined1 (*) [16])*param_5;
    ppauVar19 = (undefined1 (**) [16])0x0;
    if (pauVar18 == (undefined1 (*) [16])0x0) goto LAB_140c41ec0;
  }
  else {
    if (param_3 == 1) {
      lVar16 = param_2[0x12];
      param_2 = param_2 + 0x12;
    }
    else {
      lVar16 = param_2[0x24];
      param_2 = param_2 + 0x24;
    }
    if (lVar16 == 0) {
      param_2 = (longlong *)0x0;
    }
joined_r0x000140c41c1a:
    if (param_7 != '\0') goto LAB_140c41cdd;
LAB_140c41c40:
    if (param_2 == (longlong *)0x0) goto LAB_140c41cdd;
    lVar16 = param_2[9];
    if (lVar16 != 0) {
      pauVar17 = (undefined1 (*) [16])param_2[6];
      auVar24 = *pauVar17;
      uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
      pauVar18 = pauVar17 + 1;
      do {
        if ((short)uVar20 == 0) {
          do {
            auVar24 = *pauVar18;
            pauVar17 = pauVar17 + -0x68;
            pauVar18 = pauVar18 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar20 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar15 = (ulonglong)uVar2 * -0x68;
        lStack_a0 = (longlong)pauVar17 + lVar15 + -0x68;
        plStack_d8 = (longlong *)((longlong)pauVar17 + lVar15 + -0x60);
        if (*(char *)((longlong)pauVar17 + lVar15 + -8) != '\0') {
          pauStack_98 = (undefined1 (*) [16])&lStack_a0;
          pauStack_90 = (undefined1 (*) [16])pdb_1417c2610;
          pplStack_88 = &plStack_d8;
          pcStack_80 = pdb_1417c23d0;
          uStack_31 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14306d1d8,&pauStack_98,&UNK_14306d220);
        }
        uVar20 = uVar20 - 1 & uVar20;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      goto LAB_140c41cdd;
    }
LAB_140c41ce6:
    pauStack_98 = (undefined1 (*) [16])param_2[6];
    pplStack_88 = (longlong **)(*pauStack_98 + param_2[7] + 1);
    auVar24 = *pauStack_98;
    pcStack_80 = (code *)CONCAT62(pcStack_80._2_6_,
                                  ~((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar24[0xf] >> 7) << 0xf));
    pauStack_90 = pauStack_98 + 1;
    lStack_78 = param_2[9];
    uStack_31 = 0;
    ppauVar19 = &pauStack_98;
    pdb_141a32f30(&pauStack_118);
    pauVar18 = (undefined1 (*) [16])*param_5;
    if (pauVar18 == (undefined1 (*) [16])0x0) {
      if (pauStack_118 == (undefined1 (*) [16])0x0) {
LAB_140c41ec0:
        *param_1 = 0;
        return param_1;
      }
      lStack_78 = lStack_f8;
      uStack_70 = uStack_f0;
      pplStack_88 = (longlong **)puStack_108;
      pcStack_80 = (code *)uStack_100;
      pauStack_98 = pauStack_118;
      pauStack_90 = pauStack_110;
      if (param_6 != '\0') {
        plStack_d8 = &lStack_e8;
        pcStack_d0 = pdb_140c34b70;
        pcStack_c0 = pdb_140c34bf0;
        ppauStack_c8 = &pauStack_98;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d238,&plStack_d8,&UNK_14306d2a8);
      }
      *param_1 = 0;
      if (pauStack_110 == (undefined1 (*) [16])0x0) {
        return param_1;
      }
      lVar15 = (longlong)pauStack_110 * 0x70 + 0x70;
      arg1 = pauStack_110[(longlong)pauStack_110 * 7 + 8] + 1;
      pauVar18 = pauStack_118;
      goto joined_r0x000140c41eb8;
    }
    if (pauStack_118 != (undefined1 (*) [16])0x0) {
      uVar4 = *param_5;
      uVar5 = param_5[1];
      uVar6 = param_5[2];
      uVar7 = param_5[3];
      uVar8 = param_5[4];
      uVar9 = param_5[5];
      param_1[10] = lStack_f8;
      param_1[0xb] = uStack_f0;
      param_1[8] = puStack_108;
      param_1[9] = uStack_100;
      param_1[6] = pauStack_118;
      param_1[7] = pauStack_110;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      return param_1;
    }
  }
  if (param_5[3] != 0) {
    plStack_d8 = (longlong *)*param_5;
    pcStack_d0 = (code *)param_5[1];
    ppauStack_c8 = (undefined1 (**) [16])param_5[2];
    pcStack_c0 = (code *)param_5[3];
    uStack_b8 = param_5[4];
    uStack_b0 = param_5[5];
    plVar14 = (longlong *)pdb_140f3bda0();
    if ((char)plVar14[2] == '\x01') {
      lVar16 = *plVar14;
      ppauVar19 = (undefined1 (**) [16])plVar14[1];
    }
    else {
      lVar16 = pdb_140f4fd10();
      *plVar14 = lVar16;
      plVar14[1] = (longlong)ppauVar19;
      *(undefined1 *)(plVar14 + 2) = 1;
    }
    *plVar14 = lVar16 + 1;
    uVar12 = _UNK_14306c4f8;
    uVar11 = _UNK_14306c4e8;
    uVar10 = _DAT_14306c4e0;
    uVar4 = *param_5;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    uVar7 = param_5[3];
    uVar8 = param_5[4];
    uVar9 = param_5[5];
    param_1[8] = _DAT_14306c4f0;
    param_1[9] = uVar12;
    param_1[6] = uVar10;
    param_1[7] = uVar11;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[10] = lVar16;
    param_1[0xb] = ppauVar19;
    return param_1;
  }
  lVar16 = param_5[1];
  *param_1 = 0;
  if (lVar16 == 0) {
    return param_1;
  }
  lVar15 = lVar16 * 0x70 + 0x70;
  arg1 = (undefined1 *)(lVar16 + lVar15 + 0x11);
joined_r0x000140c41eb8:
  if (arg1 != (undefined1 *)0x0) {
    pub_1406abac0((byte *)((longlong)pauVar18 - lVar15),(ulonglong)arg1,0x10);
  }
  return param_1;
}

