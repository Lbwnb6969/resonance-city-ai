// VA 0x14080e370, PDB extent 1999 bytes
// system_wall_constructor::plaster_systems::create_plaster
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::plaster_systems::create_plaster
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
   Extent: 1999 */

void pdb_14080e370(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  char cVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulonglong uVar27;
  ushort uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong *puVar31;
  ulonglong *unaff_R13;
  longlong unaff_R14;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  
  uVar11 = pdb_140e94b40();
  puVar23 = (ulonglong *)(ulonglong)uVar11;
  cVar22 = '\0';
  if ((char)uVar11 == '\0') goto LAB_14080e52f;
  puVar31 = (ulonglong *)&UNK_1430080eb;
  unaff_R14 = 0x38;
  uVar18 = 0x38;
  lVar13 = pdb_140811400(&UNK_1430080eb);
  if (lVar13 == 1) {
    if (0x38 < uVar18) {
LAB_14080e9cd:
      pdb_142dc8070(&UNK_1430080eb,0x38,0);
LAB_14080e9ed:
      pdb_142dc8070(&UNK_1430080eb,0x38);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar31 = (ulonglong *)&UNK_1430080eb;
    uVar14 = pdb_140811400(&UNK_1430080eb);
    if ((uVar14 & 1) != 0) {
      if (0x38 < uVar18 + 2) goto LAB_14080e9ed;
      unaff_R14 = 0x36 - uVar18;
      puVar31 = (ulonglong *)(&UNK_1430080ed + uVar18);
    }
  }
  puVar25 = &UNK_143007f05;
  unaff_R13 = (ulonglong *)&UNK_143007ecf;
  do {
    bVar32 = puVar25[-1];
    uVar11 = (uint)(char)bVar32;
    if ((char)bVar32 < '\0') {
      bVar3 = puVar25[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar25[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar11 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar11 = bVar4 & 0xf;
        }
        uVar11 = bVar3 & 0x3f | uVar11 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar11 = bVar3 & 0x1f;
      }
      uVar11 = (uint)(bVar32 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_14080e4a4;
LAB_14080e4b5:
      puVar26 = puVar25 + -0x143007ece;
      if ((undefined *)0x36 < puVar26) {
        pdb_142dc8070(&UNK_143007ecf,0x36,puVar26,0x36,&UNK_1430081c0);
        goto LAB_14080e9cd;
      }
      puVar24 = (ulonglong *)(0x36 - (longlong)puVar26);
      unaff_R13 = (ulonglong *)(puVar25 + 1);
      goto LAB_14080e4d7;
    }
    puVar25 = puVar25 + -1;
    if (uVar11 == 0x5c) goto LAB_14080e4b5;
LAB_14080e4a4:
    if (uVar11 == 0x2f) goto LAB_14080e4b5;
  } while (puVar25 != &UNK_143007ecf);
  puVar24 = (ulonglong *)0x36;
LAB_14080e4d7:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_14080e976;
LAB_14080e4e6:
  cVar22 = (char)puVar23;
  if (*plVar15 != 0) goto LAB_14080e96a;
  *plVar15 = -1;
  pdb_140e94f10(plVar15 + 1,puVar31,unaff_R14,unaff_R13,puVar24,1,0);
  *plVar15 = *plVar15 + 1;
LAB_14080e52f:
  puVar5 = (ulonglong *)*param_8;
  lVar13 = param_8[1];
  uVar18 = *puVar5;
  uVar27 = 0;
  uVar14 = uVar18 - *(ulonglong *)(lVar13 + 0x18);
  if (uVar18 < *(ulonglong *)(lVar13 + 0x18)) {
    uVar14 = uVar27;
  }
  uVar29 = uVar18 - *(ulonglong *)(lVar13 + 0x38);
  if (uVar18 < *(ulonglong *)(lVar13 + 0x38)) {
    uVar29 = uVar27;
  }
  puVar17 = (ulonglong *)(uVar14 * 0x10 + *(longlong *)(lVar13 + 8));
  uVar18 = *(ulonglong *)(lVar13 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar13 + 0x10) < uVar14) {
    puVar17 = (ulonglong *)0x8;
    uVar18 = uVar27;
  }
  puVar19 = (ulonglong *)(uVar29 * 0x10 + *(longlong *)(lVar13 + 0x28));
  uVar14 = *(ulonglong *)(lVar13 + 0x30) - uVar29;
  if (*(ulonglong *)(lVar13 + 0x30) < uVar29) {
    puVar19 = (ulonglong *)0x8;
    uVar14 = uVar27;
  }
  *puVar5 = (*(longlong *)(lVar13 + 0x40) - uVar14) - uVar18;
  puVar23 = puVar17 + uVar18 * 2;
  puVar31 = puVar19 + uVar14 * 2;
  uVar18 = *param_4;
  plVar15 = (longlong *)*param_5;
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  unaff_XMM6_Ba = (char)iVar12;
  unaff_XMM6_Bb = (char)((uint)iVar12 >> 8);
  unaff_XMM6_Bc = (char)((uint)iVar12 >> 0x10);
  unaff_XMM6_Bd = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  unaff_XMM6_Be = (char)iVar12;
  unaff_XMM6_Bf = (char)((uint)iVar12 >> 8);
  unaff_XMM6_Bg = (char)((uint)iVar12 >> 0x10);
  unaff_XMM6_Bh = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  unaff_XMM6_Bi = (char)iVar12;
  unaff_XMM6_Bj = (char)((uint)iVar12 >> 8);
  unaff_XMM6_Bk = (char)((uint)iVar12 >> 0x10);
  unaff_XMM6_Bl = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  unaff_XMM6_Bm = (char)iVar12;
  unaff_XMM6_Bn = (char)((uint)iVar12 >> 8);
  unaff_XMM6_Bo = (char)((uint)iVar12 >> 0x10);
  unaff_XMM6_Bp = (char)((uint)iVar12 >> 0x18);
  puVar24 = puVar5;
LAB_14080e5d3:
  if ((puVar17 == (ulonglong *)0x0) || (puVar17 == puVar23)) {
    if ((puVar19 == (ulonglong *)0x0) || (puVar19 == puVar31)) goto LAB_14080e91b;
    puVar17 = (ulonglong *)0x0;
    puVar24 = puVar19;
    puVar19 = puVar19 + 2;
  }
  else {
    puVar24 = puVar17;
    puVar17 = puVar17 + 2;
  }
  *puVar5 = *puVar5 + 1;
  plVar6 = (longlong *)*param_3;
  if (plVar6[3] != 0) {
    unaff_R13 = puVar24 + 1;
    uVar14 = pdb_1400af0a0(plVar6 + 4,unaff_R13);
    lVar13 = *plVar6;
    bVar32 = (byte)(uVar14 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar20 = 0;
    while( true ) {
      uVar14 = uVar14 & plVar6[1];
      auVar39 = *(undefined1 (*) [16])(lVar13 + uVar14);
      auVar37[0] = -(auVar39[0] == auVar33[0]);
      auVar37[1] = -(auVar39[1] == auVar33[1]);
      auVar37[2] = -(auVar39[2] == auVar33[2]);
      auVar37[3] = -(auVar39[3] == auVar33[3]);
      auVar37[4] = -(auVar39[4] == auVar33[4]);
      auVar37[5] = -(auVar39[5] == auVar33[5]);
      auVar37[6] = -(auVar39[6] == auVar33[6]);
      auVar37[7] = -(auVar39[7] == auVar33[7]);
      auVar37[8] = -(auVar39[8] == auVar33[0]);
      auVar37[9] = -(auVar39[9] == auVar33[1]);
      auVar37[10] = -(auVar39[10] == auVar33[2]);
      auVar37[0xb] = -(auVar39[0xb] == auVar33[3]);
      auVar37[0xc] = -(auVar39[0xc] == auVar33[4]);
      auVar37[0xd] = -(auVar39[0xd] == auVar33[5]);
      auVar37[0xe] = -(auVar39[0xe] == auVar33[6]);
      auVar37[0xf] = -(auVar39[0xf] == auVar33[7]);
      uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar28;
      if (uVar28 != 0) {
        do {
          uVar8 = 0;
          for (uVar9 = uVar11; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar30 = (uVar8 + uVar14 & plVar6[1]) * -0x2b0;
          if (*unaff_R13 == *(ulonglong *)(lVar13 + -0x2b0 + lVar30)) {
            unaff_R14 = lVar13 + lVar30;
            cVar10 = pdb_1408ff980(unaff_R14 + -9);
            puVar24 = puVar19;
            param_4 = puVar17;
            if ((cVar10 != '\0') || (cVar10 = pdb_1408ff980(unaff_R14 + -8), cVar10 != '\0'))
            goto LAB_14080e5d3;
            puVar21 = (ulonglong *)*unaff_R13;
            iVar12 = pdb_1409cf7d0(uVar18);
            if ((6 < iVar12 - 4U) && (puVar21 = puVar19, iVar12 != 0xc)) goto LAB_14080e5d3;
            if (plVar15[3] == 0) goto LAB_14080e7b7;
            uVar14 = pdb_1400af0a0(plVar15 + 4,unaff_R13);
            lVar13 = *plVar15;
            puVar21 = (ulonglong *)plVar15[1];
            bVar32 = (byte)(uVar14 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar20 = 0;
            goto LAB_14080e758;
          }
          uVar28 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar28);
        } while (uVar28 != 0);
      }
      auVar34[0] = -(auVar39[0] == unaff_XMM6_Ba);
      auVar34[1] = -(auVar39[1] == unaff_XMM6_Bb);
      auVar34[2] = -(auVar39[2] == unaff_XMM6_Bc);
      auVar34[3] = -(auVar39[3] == unaff_XMM6_Bd);
      auVar34[4] = -(auVar39[4] == unaff_XMM6_Be);
      auVar34[5] = -(auVar39[5] == unaff_XMM6_Bf);
      auVar34[6] = -(auVar39[6] == unaff_XMM6_Bg);
      auVar34[7] = -(auVar39[7] == unaff_XMM6_Bh);
      auVar34[8] = -(auVar39[8] == unaff_XMM6_Bi);
      auVar34[9] = -(auVar39[9] == unaff_XMM6_Bj);
      auVar34[10] = -(auVar39[10] == unaff_XMM6_Bk);
      auVar34[0xb] = -(auVar39[0xb] == unaff_XMM6_Bl);
      auVar34[0xc] = -(auVar39[0xc] == unaff_XMM6_Bm);
      auVar34[0xd] = -(auVar39[0xd] == unaff_XMM6_Bn);
      auVar34[0xe] = -(auVar39[0xe] == unaff_XMM6_Bo);
      auVar34[0xf] = -(auVar39[0xf] == unaff_XMM6_Bp);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      uVar14 = uVar14 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143007f08);
LAB_14080e91b:
  if (cVar22 == '\0') {
    return;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_14080e995;
  while( true ) {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      pdb_140e95370(plVar15 + 1);
      *plVar15 = *plVar15 + 1;
      return;
    }
LAB_14080e96a:
    plVar15 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14080e976:
    plVar15 = (longlong *)pdb_142dd9610(plVar15,0);
    if (plVar15 != (longlong *)0x0) break;
    do {
      plVar15 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_14080e995:
      plVar15 = (longlong *)pdb_142dd9610(plVar15,0);
    } while (plVar15 == (longlong *)0x0);
  }
  goto LAB_14080e4e6;
LAB_14080e758:
  uVar14 = uVar14 & (ulonglong)puVar21;
  auVar39 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar38[0] = -(auVar39[0] == auVar33[0]);
  auVar38[1] = -(auVar39[1] == auVar33[1]);
  auVar38[2] = -(auVar39[2] == auVar33[2]);
  auVar38[3] = -(auVar39[3] == auVar33[3]);
  auVar38[4] = -(auVar39[4] == auVar33[4]);
  auVar38[5] = -(auVar39[5] == auVar33[5]);
  auVar38[6] = -(auVar39[6] == auVar33[6]);
  auVar38[7] = -(auVar39[7] == auVar33[7]);
  auVar38[8] = -(auVar39[8] == auVar33[0]);
  auVar38[9] = -(auVar39[9] == auVar33[1]);
  auVar38[10] = -(auVar39[10] == auVar33[2]);
  auVar38[0xb] = -(auVar39[0xb] == auVar33[3]);
  auVar38[0xc] = -(auVar39[0xc] == auVar33[4]);
  auVar38[0xd] = -(auVar39[0xd] == auVar33[5]);
  auVar38[0xe] = -(auVar39[0xe] == auVar33[6]);
  auVar38[0xf] = -(auVar39[0xf] == auVar33[7]);
  uVar28 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar28;
  if (uVar28 != 0) {
    do {
      uVar8 = 0;
      for (uVar9 = uVar11; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      lVar30 = (uVar8 + uVar14 & (ulonglong)puVar21) * -0x68;
      if (*unaff_R13 == *(ulonglong *)(lVar13 + -0x68 + lVar30)) {
        uVar16 = pdb_140c2abc0(lVar13 + lVar30 + -0x60);
        uVar16 = pdb_140c2b5c0(uVar16);
        plVar6 = (longlong *)*param_1;
        lVar13 = plVar6[3];
        goto joined_r0x00014080e7f2;
      }
      uVar28 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar28);
    } while (uVar28 != 0);
  }
  auVar35[0] = -(auVar39[0] == unaff_XMM6_Ba);
  auVar35[1] = -(auVar39[1] == unaff_XMM6_Bb);
  auVar35[2] = -(auVar39[2] == unaff_XMM6_Bc);
  auVar35[3] = -(auVar39[3] == unaff_XMM6_Bd);
  auVar35[4] = -(auVar39[4] == unaff_XMM6_Be);
  auVar35[5] = -(auVar39[5] == unaff_XMM6_Bf);
  auVar35[6] = -(auVar39[6] == unaff_XMM6_Bg);
  auVar35[7] = -(auVar39[7] == unaff_XMM6_Bh);
  auVar35[8] = -(auVar39[8] == unaff_XMM6_Bi);
  auVar35[9] = -(auVar39[9] == unaff_XMM6_Bj);
  auVar35[10] = -(auVar39[10] == unaff_XMM6_Bk);
  auVar35[0xb] = -(auVar39[0xb] == unaff_XMM6_Bl);
  auVar35[0xc] = -(auVar39[0xc] == unaff_XMM6_Bm);
  auVar35[0xd] = -(auVar39[0xd] == unaff_XMM6_Bn);
  auVar35[0xe] = -(auVar39[0xe] == unaff_XMM6_Bo);
  auVar35[0xf] = -(auVar39[0xf] == unaff_XMM6_Bp);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') goto LAB_14080e7b7;
  uVar14 = uVar14 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_14080e758;
LAB_14080e7b7:
  uVar16 = 0;
  plVar6 = (longlong *)*param_1;
  lVar13 = plVar6[3];
joined_r0x00014080e7f2:
  if (lVar13 != 0) {
    uVar14 = pdb_1400af0a0(plVar6 + 4);
    bVar32 = (byte)(uVar14 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar13 = 0;
    while( true ) {
      uVar14 = uVar14 & plVar6[1];
      pcVar2 = (char *)(*plVar6 + uVar14);
      auVar39[0] = -(*pcVar2 == auVar33[0]);
      auVar39[1] = -(pcVar2[1] == auVar33[1]);
      auVar39[2] = -(pcVar2[2] == auVar33[2]);
      auVar39[3] = -(pcVar2[3] == auVar33[3]);
      auVar39[4] = -(pcVar2[4] == auVar33[4]);
      auVar39[5] = -(pcVar2[5] == auVar33[5]);
      auVar39[6] = -(pcVar2[6] == auVar33[6]);
      auVar39[7] = -(pcVar2[7] == auVar33[7]);
      auVar39[8] = -(pcVar2[8] == auVar33[0]);
      auVar39[9] = -(pcVar2[9] == auVar33[1]);
      auVar39[10] = -(pcVar2[10] == auVar33[2]);
      auVar39[0xb] = -(pcVar2[0xb] == auVar33[3]);
      auVar39[0xc] = -(pcVar2[0xc] == auVar33[4]);
      auVar39[0xd] = -(pcVar2[0xd] == auVar33[5]);
      auVar39[0xe] = -(pcVar2[0xe] == auVar33[6]);
      auVar39[0xf] = -(pcVar2[0xf] == auVar33[7]);
      uVar28 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar11; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        if (*unaff_R13 == *(ulonglong *)(*plVar6 + (uVar8 + uVar14 & plVar6[1]) * -0x20 + -0x20))
        goto LAB_14080e5d3;
        uVar28 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar28);
      }
      auVar36[0] = -(*pcVar2 == unaff_XMM6_Ba);
      auVar36[1] = -(pcVar2[1] == unaff_XMM6_Bb);
      auVar36[2] = -(pcVar2[2] == unaff_XMM6_Bc);
      auVar36[3] = -(pcVar2[3] == unaff_XMM6_Bd);
      auVar36[4] = -(pcVar2[4] == unaff_XMM6_Be);
      auVar36[5] = -(pcVar2[5] == unaff_XMM6_Bf);
      auVar36[6] = -(pcVar2[6] == unaff_XMM6_Bg);
      auVar36[7] = -(pcVar2[7] == unaff_XMM6_Bh);
      auVar36[8] = -(pcVar2[8] == unaff_XMM6_Bi);
      auVar36[9] = -(pcVar2[9] == unaff_XMM6_Bj);
      auVar36[10] = -(pcVar2[10] == unaff_XMM6_Bk);
      auVar36[0xb] = -(pcVar2[0xb] == unaff_XMM6_Bl);
      auVar36[0xc] = -(pcVar2[0xc] == unaff_XMM6_Bm);
      auVar36[0xd] = -(pcVar2[0xd] == unaff_XMM6_Bn);
      auVar36[0xe] = -(pcVar2[0xe] == unaff_XMM6_Bo);
      auVar36[0xf] = -(pcVar2[0xf] == unaff_XMM6_Bp);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar14 = uVar14 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  unaff_R14 = unaff_R14 + -0x2a8;
  pdb_141456da0(param_1,param_2,param_3,param_6,param_7,unaff_R13,unaff_R14,uVar16,puVar21);
  goto LAB_14080e5d3;
}

