// VA 0x141f46490, PDB extent 2917 bytes
// system_roof::visual::assemble_roof_tiles::assemble_roof_tiles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/assemble_roof_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::visual::assemble_roof_tiles::assemble_roof_tiles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/assemble_roof_tiles.rs
   Extent: 2917 */

void pdb_141f46490(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined *puVar23;
  undefined *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  ushort uVar28;
  int iVar29;
  longlong lVar30;
  longlong *unaff_R12;
  longlong *plVar31;
  undefined8 *puVar32;
  bool bVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  ulonglong *puStack_e8;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  byte *pbStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined4 uStack_6c;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar31 = param_2;
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') {
    lStack_a8 = 0;
    plVar31 = param_4;
    goto LAB_141f4666e;
  }
  lVar22 = 0x3d;
  lVar11 = pdb_141f47000(0x3d);
  unaff_R12 = (longlong *)&UNK_143431bdb;
  if (lVar11 == 1) {
    if ((longlong *)0x3d < plVar31) {
LAB_141f46dee:
      pdb_142dc8070(&UNK_143431bdb,0x3d,0);
LAB_141f46e0e:
      pdb_142dc8070(&UNK_143431bdb,0x3d);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar12 = pdb_141f47000(plVar31);
    if ((uVar12 & 1) != 0) {
      if ((char *)0x3d < (char *)((longlong)plVar31 + 2)) goto LAB_141f46e0e;
      lVar22 = 0x3b - (longlong)plVar31;
      unaff_R12 = (longlong *)((longlong)plVar31 + 0x143431bdd);
    }
  }
  puVar23 = &UNK_143431acb;
  plVar31 = (longlong *)&UNK_143431a96;
  do {
    bVar34 = puVar23[-1];
    uVar10 = (uint)(char)bVar34;
    plStack_68 = param_4;
    if ((char)bVar34 < '\0') {
      bVar3 = puVar23[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar23[-3];
        if ((char)bVar4 < -0x40) {
          pbVar18 = puVar23 + -4;
          puVar23 = puVar23 + -4;
          uVar10 = bVar4 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          puVar23 = puVar23 + -3;
          uVar10 = bVar4 & 0xf;
        }
        uVar10 = bVar3 & 0x3f | uVar10 << 6;
      }
      else {
        puVar23 = puVar23 + -2;
        uVar10 = bVar3 & 0x1f;
      }
      uVar10 = (uint)(bVar34 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_141f465c4;
LAB_141f465dd:
      puVar24 = puVar23 + -0x143431a95;
      if ((undefined *)0x35 < puVar24) {
        pdb_142dc8070(&UNK_143431a96,0x35,puVar24,0x35,&UNK_143431c80);
        goto LAB_141f46dee;
      }
      puVar32 = (undefined8 *)(0x35 - (longlong)puVar24);
      plVar31 = (longlong *)(puVar23 + 1);
      goto LAB_141f46600;
    }
    puVar23 = puVar23 + -1;
    if (uVar10 == 0x5c) goto LAB_141f465dd;
LAB_141f465c4:
    if (uVar10 == 0x2f) goto LAB_141f465dd;
  } while (puVar23 != &UNK_143431a96);
  puVar32 = (undefined8 *)0x35;
LAB_141f46600:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_141f46d3f;
LAB_141f4660f:
  if (*plVar13 == 0) {
    *plVar13 = -1;
    plStack_78 = plVar13;
    uStack_a0 = pdb_140e94f10(plVar13 + 1,unaff_R12,lVar22,plVar31,puVar32,1,0);
    *plStack_78 = *plStack_78 + 1;
    lStack_a8 = 1;
    plVar31 = plStack_68;
LAB_141f4666e:
    puStack_e8 = (ulonglong *)*param_1;
    lVar22 = param_1[1];
    uVar12 = *puStack_e8;
    uVar26 = 0;
    uVar20 = uVar12 - *(ulonglong *)(lVar22 + 0x18);
    if (uVar12 < *(ulonglong *)(lVar22 + 0x18)) {
      uVar20 = uVar26;
    }
    uVar21 = uVar12 - *(ulonglong *)(lVar22 + 0x38);
    if (uVar12 < *(ulonglong *)(lVar22 + 0x38)) {
      uVar21 = uVar26;
    }
    param_1 = (undefined8 *)(uVar20 * 0x20 + *(longlong *)(lVar22 + 8));
    uVar12 = *(ulonglong *)(lVar22 + 0x10) - uVar20;
    if (*(ulonglong *)(lVar22 + 0x10) < uVar20) {
      param_1 = (undefined8 *)0x8;
      uVar12 = uVar26;
    }
    puVar32 = (undefined8 *)(uVar21 * 0x20 + *(longlong *)(lVar22 + 0x28));
    uVar20 = *(ulonglong *)(lVar22 + 0x30) - uVar21;
    if (*(ulonglong *)(lVar22 + 0x30) < uVar21) {
      puVar32 = (undefined8 *)0x8;
      uVar20 = uVar26;
    }
    *puStack_e8 = (*(longlong *)(lVar22 + 0x40) - uVar20) - uVar12;
    puStack_d8 = param_1 + uVar12 * 4;
    puStack_d0 = puVar32 + uVar20 * 4;
    lStack_e0 = *param_3;
    lVar22 = *param_2;
    plStack_68 = (longlong *)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_c8 = *param_5;
    plStack_c0 = (longlong *)*plVar31;
    uStack_b0 = *param_6;
    iVar29 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    unaff_XMM6_Ba = (char)iVar29;
    unaff_XMM6_Bb = (char)((uint)iVar29 >> 8);
    unaff_XMM6_Bc = (char)((uint)iVar29 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)iVar29 >> 0x18);
    iVar29 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    unaff_XMM6_Be = (char)iVar29;
    unaff_XMM6_Bf = (char)((uint)iVar29 >> 8);
    unaff_XMM6_Bg = (char)((uint)iVar29 >> 0x10);
    unaff_XMM6_Bh = (char)((uint)iVar29 >> 0x18);
    iVar29 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    unaff_XMM6_Bi = (char)iVar29;
    unaff_XMM6_Bj = (char)((uint)iVar29 >> 8);
    unaff_XMM6_Bk = (char)((uint)iVar29 >> 0x10);
    unaff_XMM6_Bl = (char)((uint)iVar29 >> 0x18);
    iVar29 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    unaff_XMM6_Bm = (char)iVar29;
    unaff_XMM6_Bn = (char)((uint)iVar29 >> 8);
    unaff_XMM6_Bo = (char)((uint)iVar29 >> 0x10);
    unaff_XMM6_Bp = (char)((uint)iVar29 >> 0x18);
    plStack_b8 = plStack_c0 + 4;
    puStack_98 = puVar32;
    do {
      if ((param_1 == (undefined8 *)0x0) || (param_1 == puStack_d8)) {
        if ((puStack_98 == (undefined8 *)0x0) || (puStack_98 == puStack_d0)) goto LAB_141f46c4e;
        puVar14 = (undefined8 *)0x0;
        param_1 = puStack_98;
        puStack_98 = puStack_98 + 4;
      }
      else {
        puVar14 = param_1 + 4;
      }
      *puStack_e8 = *puStack_e8 + 1;
      puVar15 = (undefined8 *)pdb_141f4aec0(lStack_e0,&UNK_143432200);
      if ((puVar15 == (undefined8 *)0x0) ||
         (lVar11 = (**(code **)(puVar15[1] + 0x18))(*puVar15), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143431ad0);
      }
      puVar23 = (undefined *)param_1[1];
      if ((((ulonglong)plStack_68[2] <= (ulonglong)~(uint)puVar23) ||
          (piVar16 = (int *)((ulonglong)~(uint)puVar23 * 0x18 + plStack_68[1]),
          piVar16[4] != (int)((ulonglong)puVar23 >> 0x20))) || (*piVar16 == 0)) goto LAB_141f46d73;
      uVar12 = *(ulonglong *)(piVar16 + 2);
      if ((*(ulonglong *)(lVar22 + 0x38) <= (uVar12 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar22 + 0x28) + (uVar12 >> 6 & 0x3ffffff) * 8) >>
           (uVar12 & 0x3f) & 1) == 0)) {
        puStack_158 = (undefined *)(uVar12 << 0x20);
        goto LAB_141f46d89;
      }
      uVar12 = uVar12 >> 0x20;
      lVar25 = plStack_68[0x34];
      lVar30 = *(longlong *)(lVar25 + 0x18 + uVar12 * 0x48);
      lVar6 = *(longlong *)(lVar25 + 0x38 + uVar12 * 0x48);
      if ((*(ulonglong *)(lVar22 + 0x118) < *(ulonglong *)(lVar25 + 0x40 + uVar12 * 0x48)) &&
         (uVar12 = *(ulonglong *)(lVar6 + *(ulonglong *)(lVar22 + 0x118) * 8), uVar12 != 0)) {
        lVar25 = *(longlong *)(lVar30 + 0x10 + ~uVar12 * 0x30);
      }
      else {
        lVar25 = 0;
      }
      lVar17 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar22 + 0x110) * 8) * 0x30;
      lVar6 = *(longlong *)(lVar30 + 0x10 + lVar17);
      plStack_78 = *(longlong **)(lVar30 + 0x20 + lVar17);
      lVar30 = *(longlong *)(lVar30 + 0x28 + lVar17);
      uVar12 = (ulonglong)(uint)~piVar16[1];
      plVar31 = (longlong *)(lVar6 + uVar12 * 0x10);
      if (*(longlong *)(lVar6 + uVar12 * 0x10) == 0) {
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x20,8);
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar18[0] = 0;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        pbVar18[8] = 4;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0x10] = 0;
        pbVar18[0x11] = 0;
        pbVar18[0x12] = 0;
        pbVar18[0x13] = 0;
        pbVar18[0x14] = 0;
        pbVar18[0x15] = 0;
        pbVar18[0x16] = 0;
        pbVar18[0x17] = 0;
        pbVar18[0x18] = 0;
        lVar6 = *(longlong *)(lVar11 + 0x48);
        do {
          lVar17 = *(longlong *)(lVar6 + 8);
          while (lVar17 != -1) {
            if (lVar17 < 0) {
              puStack_158 = &UNK_1434297f8;
              pcStack_150 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143429808,&puStack_158,&UNK_143429890);
            }
            LOCK();
            lVar19 = *(longlong *)(lVar6 + 8);
            bVar33 = lVar17 == lVar19;
            if (bVar33) {
              *(longlong *)(lVar6 + 8) = lVar17 + 1;
              lVar19 = lVar17;
            }
            UNLOCK();
            lVar17 = lVar19;
            if (bVar33) {
              *(undefined4 *)(lVar30 + uVar12 * 4) = uStack_6c;
              pbStack_90 = pbVar18;
              lStack_88 = lVar6;
              plStack_80 = plVar31;
              if (*plVar31 != 0) {
                pdb_140fc8bd0(plVar31);
              }
              *plStack_80 = lStack_88;
              plStack_80[1] = (longlong)pbStack_90;
              plVar31 = plStack_80;
              goto LAB_141f469a9;
            }
          }
        } while( true );
      }
LAB_141f469a9:
      *(undefined4 *)(lVar30 + uVar12 * 4) = uStack_6c;
      if (*plVar31 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143431b00);
      }
      param_3 = (longlong *)plVar31[1];
      if (param_3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143432350);
      }
      unaff_R12 = param_3 + 3;
      LOCK();
      bVar33 = (char)param_3[3] == '\0';
      if (bVar33) {
        *(char *)(param_3 + 3) = '\x01';
      }
      UNLOCK();
      if (!bVar33) {
        pdb_142dbd1a0(unaff_R12);
      }
      pdb_140e9a150(unaff_R12);
      if ((param_3[2] == 0) ||
         (piVar16 = (int *)(param_3[1] + param_3[2] * 4 + -4), piVar16 == (int *)0x0)) {
        lVar30 = *(longlong *)(lVar11 + 0x10);
        if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143432368);
        }
        iStack_100 = (int)lVar30 + -1;
      }
      else {
        iStack_100 = *piVar16;
        lVar30 = *(longlong *)(lVar11 + 0x10);
      }
      puStack_158 = *(undefined **)(lVar11 + 8);
      uStack_148 = *(undefined8 *)(lVar11 + 0x18);
      uStack_140 = *(undefined8 *)(lVar11 + 0x20);
      uStack_130 = *(undefined8 *)(lVar11 + 0x28);
      uStack_128 = *(undefined8 *)(lVar11 + 0x30);
      lStack_120 = lVar11 + 0x78;
      lStack_118 = lVar11 + 0x58;
      uStack_110 = *(undefined8 *)(lVar11 + 0x38);
      uStack_108 = *(undefined8 *)(lVar11 + 0x40);
      pcStack_150 = (code *)lVar30;
      plStack_138 = param_3;
      pdb_141f4a6c0(&puStack_158);
      plVar31 = (longlong *)(lVar25 + uVar12 * 0x58);
      cVar9 = pdb_140b77b50(plVar31);
      if ((cVar9 == '\0') &&
         (lVar11 = pdb_140b54f80(uStack_c8,*plVar31,&UNK_143431b18), plVar13 = plStack_c0,
         lVar11 != 0)) {
        uVar5 = *(undefined4 *)(lVar11 + 0x274);
        if (plStack_c0[3] != 0) {
          uVar20 = pdb_140fc4ba0(plStack_b8,plVar31);
          lVar11 = *plVar13;
          puVar1 = (ulonglong *)(plVar13 + 1);
          bVar34 = (byte)(uVar20 >> 0x39);
          auVar35 = ZEXT216(CONCAT11(bVar34,bVar34));
          auVar35 = pshuflw(auVar35,auVar35,0);
          lVar25 = 0;
          while( true ) {
            uVar20 = uVar20 & *puVar1;
            pcVar2 = (char *)(lVar11 + uVar20);
            auVar37[0] = -(*pcVar2 == auVar35[0]);
            auVar37[1] = -(pcVar2[1] == auVar35[1]);
            auVar37[2] = -(pcVar2[2] == auVar35[2]);
            auVar37[3] = -(pcVar2[3] == auVar35[3]);
            auVar37[4] = -(pcVar2[4] == auVar35[4]);
            auVar37[5] = -(pcVar2[5] == auVar35[5]);
            auVar37[6] = -(pcVar2[6] == auVar35[6]);
            auVar37[7] = -(pcVar2[7] == auVar35[7]);
            auVar37[8] = -(pcVar2[8] == auVar35[0]);
            auVar37[9] = -(pcVar2[9] == auVar35[1]);
            auVar37[10] = -(pcVar2[10] == auVar35[2]);
            auVar37[0xb] = -(pcVar2[0xb] == auVar35[3]);
            auVar37[0xc] = -(pcVar2[0xc] == auVar35[4]);
            auVar37[0xd] = -(pcVar2[0xd] == auVar35[5]);
            auVar37[0xe] = -(pcVar2[0xe] == auVar35[6]);
            auVar37[0xf] = -(pcVar2[0xf] == auVar35[7]);
            uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar37[0xf] >> 7) << 0xf;
            uVar26 = (ulonglong)uVar28;
            if (uVar28 != 0) {
              do {
                uVar10 = 0;
                for (uVar8 = (uint)uVar26; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar10 = uVar10 + 1;
                }
                uVar21 = uVar10 + uVar20 & *puVar1;
                plVar13 = (longlong *)(uVar21 * 0x20);
                lVar30 = lVar11 + uVar21 * -0x20;
                if (*plVar31 == *(longlong *)(lVar30 + -0x20)) {
                  uVar27 = CONCAT71((int7)(uVar26 >> 8),*(longlong *)(lVar30 + -8) != 0);
                  cVar9 = (char)plVar31[1];
                  param_3 = plVar13;
                  goto joined_r0x000141f46be7;
                }
                iVar29 = (uint)uVar26 - 1;
                uVar28 = (ushort)iVar29 & (ushort)uVar26;
                uVar26 = (ulonglong)CONCAT22((short)((uint)iVar29 >> 0x10),uVar28);
              } while (uVar28 != 0);
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
            if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
            uVar20 = uVar20 + lVar25 + 0x10;
            lVar25 = lVar25 + 0x10;
          }
        }
        uVar27 = 0;
        cVar9 = (char)plVar31[1];
        param_3 = plVar13;
joined_r0x000141f46be7:
        if (cVar9 == '\0') {
          uStack_168 = *(undefined8 *)((longlong)plVar31 + 0xc);
          uStack_160 = *(undefined8 *)((longlong)plVar31 + 0x14);
          pdb_142816ba0(&uStack_168,plVar31,uVar5,uVar27,&puStack_158);
        }
        else {
          uStack_178 = *(undefined8 *)((longlong)plVar31 + 0x1c);
          uStack_188 = *(undefined8 *)((longlong)plVar31 + 0xc);
          uStack_180 = *(undefined8 *)((longlong)plVar31 + 0x14);
          pdb_142812c70(&uStack_188,plVar31,uVar5,uVar27,uStack_b0,&puStack_158);
        }
        param_2 = plStack_138 + 3;
        pdb_140e9a350();
        LOCK();
        bVar33 = (char)*param_2 == '\x01';
        if (bVar33) {
          *(char *)param_2 = '\0';
        }
        UNLOCK();
        if (!bVar33) {
          pdb_142dbcef0(param_2);
        }
      }
      else {
        param_2 = plStack_138 + 3;
        pdb_140e9a350();
        LOCK();
        bVar33 = (char)*param_2 == '\x01';
        if (bVar33) {
          *(char *)param_2 = '\0';
        }
        UNLOCK();
        if (!bVar33) {
          pdb_142dbcef0(param_2);
        }
      }
      puVar32 = (undefined8 *)((longlong)plStack_78 + uVar12 * 4);
      param_1 = puVar14;
    } while( true );
  }
  goto LAB_141f46d33;
LAB_141f46c4e:
  if (lStack_a8 != 0) {
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142e293d0(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_141f46d67;
    if (*plVar13 != 0) {
LAB_141f46d33:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f46d3f:
      plVar13 = (longlong *)pdb_142e293d0(plVar13,0);
      if (plVar13 == (longlong *)0x0) {
LAB_141f46d67:
        puVar23 = &UNK_14359bf00;
        pdb_142dc7890();
LAB_141f46d73:
        puStack_158 = (undefined *)(((ulonglong)puVar32 & 0xffffffff00000000) + 1);
LAB_141f46d89:
        pcStack_150 = (code *)puVar23;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143431bb0,0x2b,&puStack_158,&UNK_143431b90,&UNK_143431ae8);
      }
      goto LAB_141f4660f;
    }
    *plVar13 = -1;
    plStack_68 = plVar13;
    pdb_140e95370(plVar13 + 1,uStack_a0);
    *plStack_68 = *plStack_68 + 1;
  }
  return;
}

