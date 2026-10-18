// VA 0x140812d70, PDB extent 2193 bytes
// system_wall_constructor::construct_fences::construct_fences
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_fences::construct_fences
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/mod.rs
   Extent: 2193 */

void pdb_140812d70(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulonglong uVar23;
  ushort uVar24;
  longlong lVar25;
  undefined *unaff_R12;
  longlong lVar26;
  longlong unaff_R14;
  char *unaff_R15;
  bool bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  longlong alStack_150 [2];
  undefined8 *puStack_140;
  longlong lStack_138;
  byte *pbStack_130;
  undefined8 *puStack_120;
  char *pcStack_118;
  longlong lStack_110;
  ulonglong *puStack_108;
  undefined *puStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  longlong *plStack_70;
  char cStack_62;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar13 = param_2;
  cStack_61 = pdb_140e94b40();
  if (cStack_61 == '\0') goto LAB_140812f28;
  unaff_R14 = 0x3b;
  lVar10 = pdb_140813610(0x3b);
  unaff_R15 = 
  "system_wall_constructor::construct_fences::construct_fences::f/home/h3/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/puffin-0.14.1/src/lib.rs"
  ;
  if (lVar10 == 1) {
    if ((undefined8 *)0x3b < puVar13) {
LAB_140813434:
      pdb_142dc8070(&UNK_1430085b0,0x3b,0);
LAB_140813454:
      pdb_142dc8070(&UNK_1430085b0,0x3b);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = pdb_140813610(puVar13);
    if ((uVar11 & 1) != 0) {
      if (0x3b < (longlong)puVar13 + 2U) goto LAB_140813454;
      unaff_R14 = 0x39 - (longlong)puVar13;
      unaff_R15 = (char *)((longlong)puVar13 + 0x1430085b2);
    }
  }
  puVar21 = &UNK_1430084bd;
  unaff_R12 = &UNK_143008482;
  do {
    bVar28 = puVar21[-1];
    uVar9 = (uint)(char)bVar28;
    if ((char)bVar28 < '\0') {
      bVar4 = puVar21[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar21[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar9 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar9 = bVar5 & 0xf;
        }
        uVar9 = bVar4 & 0x3f | uVar9 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar9 = bVar4 & 0x1f;
      }
      uVar9 = (uint)(bVar28 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_140812e94;
LAB_140812ea5:
      puVar22 = puVar21 + -0x143008481;
      if ((undefined *)0x3b < puVar22) {
        pdb_142dc8070(&UNK_143008482,0x3b,puVar22,0x3b,&UNK_143008648);
        goto LAB_140813434;
      }
      plVar20 = (longlong *)(0x3b - (longlong)puVar22);
      unaff_R12 = puVar21 + 1;
      goto LAB_140812ec7;
    }
    puVar21 = puVar21 + -1;
    if (uVar9 == 0x5c) goto LAB_140812ea5;
LAB_140812e94:
    if (uVar9 == 0x2f) goto LAB_140812ea5;
  } while (puVar21 != &UNK_143008482);
  plVar20 = (longlong *)0x3b;
LAB_140812ec7:
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_1408133b7;
LAB_140812ed6:
  if (*plVar12 == 0) {
    *plVar12 = -1;
    plStack_70 = plVar12;
    uStack_80 = pdb_140e94f10(plVar12 + 1,unaff_R15,unaff_R14,unaff_R12,plVar20,1,0);
    *plStack_70 = *plStack_70 + 1;
LAB_140812f28:
    puVar13 = (undefined8 *)pdb_1413e4400(*param_3,&UNK_1433056b0);
    if ((puVar13 == (undefined8 *)0x0) ||
       (lStack_88 = (**(code **)(puVar13[1] + 0x18))(*puVar13), lStack_88 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430084c0);
    }
    cStack_62 = '\0';
    puStack_108 = (ulonglong *)*param_1;
    lVar10 = param_1[1];
    uVar11 = *puStack_108;
    uVar19 = 0;
    uVar16 = uVar11 - *(ulonglong *)(lVar10 + 0x18);
    if (uVar11 < *(ulonglong *)(lVar10 + 0x18)) {
      uVar16 = uVar19;
    }
    uVar23 = uVar11 - *(ulonglong *)(lVar10 + 0x38);
    if (uVar11 < *(ulonglong *)(lVar10 + 0x38)) {
      uVar23 = uVar19;
    }
    plVar12 = (longlong *)(uVar16 * 0x10 + *(longlong *)(lVar10 + 8));
    uVar11 = *(ulonglong *)(lVar10 + 0x10) - uVar16;
    if (*(ulonglong *)(lVar10 + 0x10) < uVar16) {
      plVar12 = (longlong *)0x8;
      uVar11 = uVar19;
    }
    plVar17 = (longlong *)(uVar23 * 0x10 + *(longlong *)(lVar10 + 0x28));
    uVar16 = *(ulonglong *)(lVar10 + 0x30) - uVar23;
    if (*(ulonglong *)(lVar10 + 0x30) < uVar23) {
      plVar17 = (longlong *)0x8;
      uVar16 = uVar19;
    }
    *puStack_108 = (*(longlong *)(lVar10 + 0x40) - uVar16) - uVar11;
    param_1 = plVar12 + uVar11 * 2;
    plVar20 = plVar17 + uVar16 * 2;
    param_3 = (longlong *)*param_2;
    puStack_100 = (undefined *)(lStack_88 + 0x78);
    lStack_f8 = lStack_88 + 0x58;
    iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    unaff_XMM6_Ba = (char)iVar15;
    unaff_XMM6_Bb = (char)((uint)iVar15 >> 8);
    unaff_XMM6_Bc = (char)((uint)iVar15 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)iVar15 >> 0x18);
    iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    unaff_XMM6_Be = (char)iVar15;
    unaff_XMM6_Bf = (char)((uint)iVar15 >> 8);
    unaff_XMM6_Bg = (char)((uint)iVar15 >> 0x10);
    unaff_XMM6_Bh = (char)((uint)iVar15 >> 0x18);
    iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    unaff_XMM6_Bi = (char)iVar15;
    unaff_XMM6_Bj = (char)((uint)iVar15 >> 8);
    unaff_XMM6_Bk = (char)((uint)iVar15 >> 0x10);
    unaff_XMM6_Bl = (char)((uint)iVar15 >> 0x18);
    iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    unaff_XMM6_Bm = (char)iVar15;
    unaff_XMM6_Bn = (char)((uint)iVar15 >> 8);
    unaff_XMM6_Bo = (char)((uint)iVar15 >> 0x10);
    unaff_XMM6_Bp = (char)((uint)iVar15 >> 0x18);
LAB_140812ff9:
    if ((plVar12 == (longlong *)0x0) || (plVar12 == param_1)) {
      if ((plVar17 == (longlong *)0x0) || (plVar17 == plVar20)) goto LAB_1408132a2;
      plStack_70 = plVar17 + 2;
      plStack_90 = (longlong *)0x0;
      plVar12 = plVar17;
    }
    else {
      plStack_90 = plVar12 + 2;
      plStack_70 = plVar17;
    }
    *puStack_108 = *puStack_108 + 1;
    lVar10 = plVar12[1];
    lStack_110 = lVar10;
    if (param_3[3] != 0) {
      uVar11 = pdb_1400af0a0(param_3 + 4,&lStack_110);
      lVar26 = *param_3;
      bVar28 = (byte)(uVar11 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar18 = 0;
      while( true ) {
        uVar11 = uVar11 & param_3[1];
        auVar3 = *(undefined1 (*) [16])(lVar26 + uVar11);
        auVar31[0] = -(auVar3[0] == auVar29[0]);
        auVar31[1] = -(auVar3[1] == auVar29[1]);
        auVar31[2] = -(auVar3[2] == auVar29[2]);
        auVar31[3] = -(auVar3[3] == auVar29[3]);
        auVar31[4] = -(auVar3[4] == auVar29[4]);
        auVar31[5] = -(auVar3[5] == auVar29[5]);
        auVar31[6] = -(auVar3[6] == auVar29[6]);
        auVar31[7] = -(auVar3[7] == auVar29[7]);
        auVar31[8] = -(auVar3[8] == auVar29[0]);
        auVar31[9] = -(auVar3[9] == auVar29[1]);
        auVar31[10] = -(auVar3[10] == auVar29[2]);
        auVar31[0xb] = -(auVar3[0xb] == auVar29[3]);
        auVar31[0xc] = -(auVar3[0xc] == auVar29[4]);
        auVar31[0xd] = -(auVar3[0xd] == auVar29[5]);
        auVar31[0xe] = -(auVar3[0xe] == auVar29[6]);
        auVar31[0xf] = -(auVar3[0xf] == auVar29[7]);
        uVar24 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar24;
        while (uVar24 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar25 = (uVar7 + uVar11 & param_3[1]) * -0x2b0;
          if (lVar10 == *(longlong *)(lVar26 + -0x2b0 + lVar25)) {
            lVar26 = lVar26 + lVar25;
            if (*(char *)(lVar26 + -8) == '\x01') {
              puVar21 = *(undefined **)(lVar26 + -0x178);
              if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b70);
              }
              LOCK();
              bVar27 = puVar21[0x18] == '\0';
              if (bVar27) {
                puVar21[0x18] = '\x01';
              }
              UNLOCK();
              if (!bVar27) {
                pdb_142dbd1a0(puVar21 + 0x18,CONCAT71((int7)((ulonglong)lVar18 >> 8),1),1000000000);
              }
              pdb_140e9a150(puVar21 + 0x18);
              if ((*(longlong *)(puVar21 + 0x10) == 0) ||
                 (piVar14 = (int *)(*(longlong *)(puVar21 + 8) + *(longlong *)(puVar21 + 0x10) * 4 +
                                   -4), piVar14 == (int *)0x0)) {
                puVar22 = *(undefined **)(lStack_88 + 0x10);
                if (puVar22 == (undefined *)0x0) goto LAB_1408133d7;
                iVar15 = (int)puVar22 + -1;
              }
              else {
                iVar15 = *piVar14;
                puVar22 = *(undefined **)(lStack_88 + 0x10);
              }
              uStack_f0 = *(undefined8 *)(lStack_88 + 8);
              uStack_e0 = *(undefined8 *)(lStack_88 + 0x18);
              uStack_d8 = *(undefined8 *)(lStack_88 + 0x20);
              uStack_c8 = *(undefined8 *)(lStack_88 + 0x28);
              uStack_c0 = *(undefined8 *)(lStack_88 + 0x30);
              uStack_a8 = *(undefined8 *)(lStack_88 + 0x38);
              puStack_a0 = *(undefined **)(lStack_88 + 0x40);
              uStack_98 = CONCAT44(uStack_98._4_4_,iVar15);
              puStack_b8 = puStack_100;
              lStack_b0 = lStack_f8;
              puStack_120 = &uStack_f0;
              pcStack_118 = &cStack_62;
              puStack_e8 = puVar22;
              puStack_d0 = puVar21;
              pdb_1414677e0(alStack_150,lVar10,lVar26 + -0x2a8,&puStack_120);
              param_2 = puStack_140;
              unaff_R14 = alStack_150[0];
              if (lStack_138 != 0) {
                pub_1406abac0(pbStack_130,lStack_138 << 4,8);
              }
              unaff_R15 = puStack_d0 + 0x18;
              pdb_140e9a350();
              LOCK();
              cVar2 = *unaff_R15;
              if (cVar2 == '\x01') {
                *unaff_R15 = '\0';
              }
              UNLOCK();
              if (cVar2 != '\x01') {
                pdb_142dbcef0(unaff_R15,0);
              }
            }
            else {
              unaff_R14 = 0;
              param_2 = (undefined8 *)0x0;
            }
            unaff_R12 = (undefined *)(lVar26 + -0x120);
            pdb_140aa9c90(unaff_R12,unaff_R14);
            pdb_140b2e900(unaff_R12);
            plVar12 = plStack_90;
            plVar17 = plStack_70;
            goto LAB_140812ff9;
          }
          uVar24 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar24);
        }
        auVar30[0] = -(auVar3[0] == unaff_XMM6_Ba);
        auVar30[1] = -(auVar3[1] == unaff_XMM6_Bb);
        auVar30[2] = -(auVar3[2] == unaff_XMM6_Bc);
        auVar30[3] = -(auVar3[3] == unaff_XMM6_Bd);
        auVar30[4] = -(auVar3[4] == unaff_XMM6_Be);
        auVar30[5] = -(auVar3[5] == unaff_XMM6_Bf);
        auVar30[6] = -(auVar3[6] == unaff_XMM6_Bg);
        auVar30[7] = -(auVar3[7] == unaff_XMM6_Bh);
        auVar30[8] = -(auVar3[8] == unaff_XMM6_Bi);
        auVar30[9] = -(auVar3[9] == unaff_XMM6_Bj);
        auVar30[10] = -(auVar3[10] == unaff_XMM6_Bk);
        auVar30[0xb] = -(auVar3[0xb] == unaff_XMM6_Bl);
        auVar30[0xc] = -(auVar3[0xc] == unaff_XMM6_Bm);
        auVar30[0xd] = -(auVar3[0xd] == unaff_XMM6_Bn);
        auVar30[0xe] = -(auVar3[0xe] == unaff_XMM6_Bo);
        auVar30[0xf] = -(auVar3[0xf] == unaff_XMM6_Bp);
        if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x1f,0) & 1) != 0) || (SUB161(auVar30 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
        uVar11 = uVar11 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_143008430,0x16,&UNK_143008538);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  goto LAB_1408133ab;
LAB_1408132a2:
  if ((cStack_62 != '\0') && (*_DAT_143ca8e90 != 0)) {
    uStack_f0 = 0;
    puStack_e8 = &UNK_143008508;
    uStack_e0 = 0x29;
    uStack_d8 = 0;
    puStack_d0 = &UNK_143008446;
    uStack_c8 = 0x3b;
    uStack_c0 = 1;
    puStack_b8 = &UNK_143008508;
    lStack_b0 = 0x29;
    uStack_a8 = 0x4900000001;
    puStack_a0 = &UNK_1430084d8;
    uStack_98 = 0x61;
    pdb_140f332f0(&uStack_71,&uStack_f0);
  }
  if (cStack_61 != '\0') {
    plVar12 = (longlong *)pdb_140e97000();
    if (((char)plVar12[0xd] != '\x01') &&
       (plVar12 = (longlong *)pdb_142dd9610(plVar12,0), plVar12 == (longlong *)0x0))
    goto LAB_1408133ca;
    if (*plVar12 != 0) {
LAB_1408133ab:
      plVar12 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1408133b7:
      plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
      if (plVar12 == (longlong *)0x0) {
LAB_1408133ca:
        pdb_142dc7890(&UNK_143307940);
LAB_1408133d7:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      goto LAB_140812ed6;
    }
    *plVar12 = -1;
    plStack_70 = plVar12;
    pdb_140e95370(plVar12 + 1);
    *plStack_70 = *plStack_70 + 1;
  }
  return;
}

