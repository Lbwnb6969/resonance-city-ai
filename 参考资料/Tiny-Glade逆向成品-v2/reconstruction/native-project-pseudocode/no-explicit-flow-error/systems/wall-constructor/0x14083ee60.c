// VA 0x14083ee60, PDB extent 3276 bytes
// system_wall_constructor::construct_elevation_supports::maintain_stone_column_colliders::maintain_stone_column_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/maintain_stone_column_colliders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::maintain_stone_column_colliders::maintain_stone_column_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/maintain_stone_column_colliders.rs
   Extent: 3276 */

void pdb_14083ee60(longlong *param_1,ulonglong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  byte *pbVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  longlong lStack_2a8;
  ulonglong *puStack_2a0;
  longlong lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  longlong *plStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 auStack_220 [3];
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  longlong lStack_1d8;
  ulonglong *puStack_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong *plStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined8 *puStack_d8;
  longlong lStack_d0;
  ulonglong *puStack_c8;
  undefined4 *puStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  ulonglong *puStack_98;
  longlong lStack_90;
  undefined4 uStack_84;
  longlong *plStack_80;
  char cStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar16 = param_2;
  puStack_d8 = param_4;
  cStack_72 = pdb_140e94b40();
  if (cStack_72 == '\0') goto LAB_14083f02a;
  lVar26 = 0x77;
  lVar10 = pdb_14083fb30(0x77);
  puVar17 = (ulonglong *)&UNK_14300aff8;
  if (lVar10 == 1) {
    if ((ulonglong *)0x77 < puVar16) {
LAB_14083f83b:
      pdb_142dc8070(&UNK_14300aff8,0x77,0);
LAB_14083f85b:
      pdb_142dc8070(&UNK_14300aff8,0x77);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = pdb_14083fb30(puVar16);
    if ((uVar11 & 1) != 0) {
      if ((byte *)0x77 < (byte *)((longlong)puVar16 + 2)) goto LAB_14083f85b;
      lVar26 = 0x75 - (longlong)puVar16;
      puVar17 = (ulonglong *)((longlong)puVar16 + 0x14300affa);
    }
  }
  puVar18 = &UNK_14300af7f;
  plVar24 = (longlong *)&UNK_14300af1c;
  do {
    bVar27 = puVar18[-1];
    uVar9 = (uint)(char)bVar27;
    if ((char)bVar27 < '\0') {
      bVar2 = puVar18[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar18[-3];
        if ((char)bVar3 < -0x40) {
          pbVar14 = puVar18 + -4;
          puVar18 = puVar18 + -4;
          uVar9 = bVar3 & 0x3f | (*pbVar14 & 7) << 6;
        }
        else {
          puVar18 = puVar18 + -3;
          uVar9 = bVar3 & 0xf;
        }
        uVar9 = bVar2 & 0x3f | uVar9 << 6;
      }
      else {
        puVar18 = puVar18 + -2;
        uVar9 = bVar2 & 0x1f;
      }
      uVar9 = (uint)(bVar27 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_14083ef94;
LAB_14083efa6:
      puVar19 = puVar18 + -0x14300af1b;
      if ((undefined *)0x63 < puVar19) {
        pdb_142dc8070(&UNK_14300af1c,99,puVar19,99,&UNK_14300b0d0);
        goto LAB_14083f83b;
      }
      uVar11 = 99 - (longlong)puVar19;
      plVar24 = (longlong *)(puVar18 + 1);
      goto LAB_14083efc9;
    }
    puVar18 = puVar18 + -1;
    if (uVar9 == 0x5c) goto LAB_14083efa6;
LAB_14083ef94:
    if (uVar9 == 0x2f) goto LAB_14083efa6;
  } while (puVar18 != &UNK_14300af1c);
  uVar11 = 99;
LAB_14083efc9:
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_14083f7c6;
LAB_14083efd8:
  if (*plVar12 != 0) goto LAB_14083f7ba;
  *plVar12 = -1;
  plStack_80 = plVar12;
  uStack_a0 = pdb_140e94f10(plVar12 + 1,puVar17,lVar26,plVar24,uVar11,1,0);
  *plStack_80 = *plStack_80 + 1;
LAB_14083f02a:
  puVar16 = (ulonglong *)*param_3;
  lVar26 = param_3[1];
  uVar13 = *puVar16;
  uVar11 = 0;
  uVar25 = uVar13 - *(ulonglong *)(lVar26 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar26 + 0x18)) {
    uVar25 = uVar11;
  }
  uVar20 = uVar13 - *(ulonglong *)(lVar26 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar26 + 0x38)) {
    uVar20 = uVar11;
  }
  lVar10 = uVar25 * 0x10 + *(longlong *)(lVar26 + 8);
  uVar13 = *(ulonglong *)(lVar26 + 0x10) - uVar25;
  if (*(ulonglong *)(lVar26 + 0x10) < uVar25) {
    lVar10 = 8;
    uVar13 = uVar11;
  }
  lVar15 = uVar20 * 0x10 + *(longlong *)(lVar26 + 0x28);
  uVar25 = *(ulonglong *)(lVar26 + 0x30) - uVar20;
  if (*(ulonglong *)(lVar26 + 0x30) < uVar20) {
    lVar15 = 8;
    uVar25 = uVar11;
  }
  *puVar16 = (*(longlong *)(lVar26 + 0x40) - uVar25) - uVar13;
  lVar26 = uVar13 * 0x10 + lVar10;
  puStack_98 = (ulonglong *)(uVar25 * 0x10 + lVar15);
  plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  lStack_90 = *param_1;
  param_1 = (longlong *)param_1[2];
  lStack_a8 = lStack_90 + 0x18;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_b8 = *param_2;
  puStack_c0 = (undefined4 *)param_2[2];
  lStack_b0 = lStack_90 + 0x48;
  do {
    if ((lVar10 == 0) || (lVar10 == lVar26)) {
      if ((lVar15 == 0) || ((ulonglong *)lVar15 == puStack_98)) break;
      lVar10 = 0;
      lVar21 = lVar15;
      lVar15 = lVar15 + 0x10;
    }
    else {
      lVar21 = lVar10;
      lVar10 = lVar10 + 0x10;
    }
    *puVar16 = *puVar16 + 1;
    *(undefined4 *)param_1 = plStack_80._0_4_;
    uVar4 = *(undefined8 *)(lVar21 + 8);
    lStack_1e8 = 0;
    uStack_1e0 = 4;
    lStack_1d8 = 0;
    pdb_1414084a0(&lStack_2a8,lStack_a8,uVar4,&lStack_1e8);
    if ((!SBORROW8(0,lStack_2a8)) && (lStack_2a8 != 0)) {
      pub_1406abac0((byte *)puStack_2a0,lStack_2a8 << 5,4);
    }
    *puStack_c0 = uStack_84;
    *(undefined4 *)param_1 = plStack_80._0_4_;
    pdb_14140a7d0(&lStack_1e8,uStack_b8,lStack_b0,uVar4);
    if ((char)lStack_1c8 != '\x11') {
      LOCK();
      *plStack_1b0 = *plStack_1b0 + -1;
      UNLOCK();
      if (*plStack_1b0 == 0) {
        pdb_140c7b7a0(&plStack_1b0);
      }
    }
    uVar11 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  } while( true );
  *(undefined4 *)param_1 = plStack_80._0_4_;
  lStack_1e8 = *(longlong *)(lStack_90 + 8);
  puStack_1d0 = *(ulonglong **)(lStack_90 + 0x10);
  *(undefined8 *)(lStack_90 + 0x10) = 0;
  uStack_1e0 = lStack_1e8 + (longlong)puStack_1d0 * 8;
  lStack_1d8 = lStack_90;
  lStack_1c8 = 0;
  param_3 = &lStack_2a8;
  pdb_1413ec440(param_3,&lStack_1e8);
  lVar15 = _UNK_142e4e658;
  lVar10 = _DAT_142e4e650;
  lStack_d0 = lStack_2a8;
  puStack_98 = puStack_2a0 + lStack_298;
  lStack_a8 = lStack_90 + 0x38;
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  unaff_XMM6_Ba = (char)iVar8;
  unaff_XMM6_Bb = (char)((uint)iVar8 >> 8);
  unaff_XMM6_Bc = (char)((uint)iVar8 >> 0x10);
  unaff_XMM6_Bd = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  unaff_XMM6_Be = (char)iVar8;
  unaff_XMM6_Bf = (char)((uint)iVar8 >> 8);
  unaff_XMM6_Bg = (char)((uint)iVar8 >> 0x10);
  unaff_XMM6_Bh = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  unaff_XMM6_Bi = (char)iVar8;
  unaff_XMM6_Bj = (char)((uint)iVar8 >> 8);
  unaff_XMM6_Bk = (char)((uint)iVar8 >> 0x10);
  unaff_XMM6_Bl = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  unaff_XMM6_Bm = (char)iVar8;
  unaff_XMM6_Bn = (char)((uint)iVar8 >> 8);
  unaff_XMM6_Bo = (char)((uint)iVar8 >> 0x10);
  unaff_XMM6_Bp = (char)((uint)iVar8 >> 0x18);
  puStack_c8 = puStack_2a0;
  lVar26 = lStack_90;
  param_2 = puStack_2a0;
  if (puStack_2a0 != puStack_98) {
    while( true ) {
      uVar11 = *param_2;
      uStack_e0 = uVar11;
      if (*(longlong *)(lVar26 + 0x30) == 0) break;
      param_2 = param_2 + 1;
      uVar13 = pdb_1400af0a0(lStack_a8,&uStack_e0);
      bVar27 = (byte)(uVar13 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
      auVar28 = pshuflw(auVar28,auVar28,0);
      lVar21 = 0;
      while( true ) {
        uVar13 = uVar13 & *(ulonglong *)(lVar26 + 0x20);
        auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar26 + 0x18) + uVar13);
        auVar30[0] = -(auVar1[0] == auVar28[0]);
        auVar30[1] = -(auVar1[1] == auVar28[1]);
        auVar30[2] = -(auVar1[2] == auVar28[2]);
        auVar30[3] = -(auVar1[3] == auVar28[3]);
        auVar30[4] = -(auVar1[4] == auVar28[4]);
        auVar30[5] = -(auVar1[5] == auVar28[5]);
        auVar30[6] = -(auVar1[6] == auVar28[6]);
        auVar30[7] = -(auVar1[7] == auVar28[7]);
        auVar30[8] = -(auVar1[8] == auVar28[0]);
        auVar30[9] = -(auVar1[9] == auVar28[1]);
        auVar30[10] = -(auVar1[10] == auVar28[2]);
        auVar30[0xb] = -(auVar1[0xb] == auVar28[3]);
        auVar30[0xc] = -(auVar1[0xc] == auVar28[4]);
        auVar30[0xd] = -(auVar1[0xd] == auVar28[5]);
        auVar30[0xe] = -(auVar1[0xe] == auVar28[6]);
        auVar30[0xf] = -(auVar1[0xf] == auVar28[7]);
        uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar22;
        if (uVar22 != 0) break;
LAB_14083f350:
        auVar29[0] = -(auVar1[0] == unaff_XMM6_Ba);
        auVar29[1] = -(auVar1[1] == unaff_XMM6_Bb);
        auVar29[2] = -(auVar1[2] == unaff_XMM6_Bc);
        auVar29[3] = -(auVar1[3] == unaff_XMM6_Bd);
        auVar29[4] = -(auVar1[4] == unaff_XMM6_Be);
        auVar29[5] = -(auVar1[5] == unaff_XMM6_Bf);
        auVar29[6] = -(auVar1[6] == unaff_XMM6_Bg);
        auVar29[7] = -(auVar1[7] == unaff_XMM6_Bh);
        auVar29[8] = -(auVar1[8] == unaff_XMM6_Bi);
        auVar29[9] = -(auVar1[9] == unaff_XMM6_Bj);
        auVar29[10] = -(auVar1[10] == unaff_XMM6_Bk);
        auVar29[0xb] = -(auVar1[0xb] == unaff_XMM6_Bl);
        auVar29[0xc] = -(auVar1[0xc] == unaff_XMM6_Bm);
        auVar29[0xd] = -(auVar1[0xd] == unaff_XMM6_Bn);
        auVar29[0xe] = -(auVar1[0xe] == unaff_XMM6_Bo);
        auVar29[0xf] = -(auVar1[0xf] == unaff_XMM6_Bp);
        if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x1f,0) & 1) != 0) || (SUB161(auVar29 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') goto LAB_14083f799;
        uVar13 = uVar13 + lVar21 + 0x10;
        lVar21 = lVar21 + 0x10;
      }
LAB_14083f31f:
      uVar6 = 0;
      for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar23 = *(longlong *)(lVar26 + 0x18) +
               (uVar6 + uVar13 & *(ulonglong *)(lVar26 + 0x20)) * -0x20;
      if (uVar11 != *(ulonglong *)(lVar23 + -0x20)) goto code_r0x00014083f33a;
      if (*(longlong *)(lVar23 + -8) == 0) {
        *puStack_c0 = uStack_84;
        *(undefined4 *)param_1 = plStack_80._0_4_;
        pdb_14140a7d0(&lStack_1e8,uStack_b8,lStack_b0,uVar11);
        if ((char)lStack_1c8 != '\x11') {
          LOCK();
          *plStack_1b0 = *plStack_1b0 + -1;
          UNLOCK();
          if (*plStack_1b0 == 0) {
            pdb_140c7b7a0(&plStack_1b0);
          }
        }
        goto LAB_14083f6b7;
      }
      lStack_1a0 = *(longlong *)(lVar23 + -0x10);
      lStack_198 = *(longlong *)(lVar23 + -8) * 0x20 + lStack_1a0;
      lStack_1e8 = 1;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_190 = 0;
      uStack_150 = 0;
      pdb_1413eaff0(&uStack_f8,&lStack_1e8);
      uVar13 = uStack_e8;
      if (uStack_e8 < 3) {
        pbVar14 = (byte *)0x4;
        uVar25 = 0;
        goto LAB_14083f534;
      }
      uVar25 = uStack_e8 / 3;
      pdb_14007ee60();
      pbVar14 = pub_1406abab0(uVar25 * 0xc,4);
      if (pbVar14 == (byte *)0x0) {
        uStack_71 = 1;
        pdb_142dc7e2a(4,uVar25 * 0xc);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar26 = lStack_90;
      if (uVar13 - 3 < 3) {
        uVar13 = 0;
        goto LAB_14083f514;
      }
      lVar21 = 0;
      uVar13 = 0;
      do {
        iVar8 = (int)lVar21;
        *(int *)(pbVar14 + lVar21 * 4) = iVar8;
        *(int *)(pbVar14 + lVar21 * 4 + 4) = iVar8 + 1;
        *(int *)(pbVar14 + lVar21 * 4 + 8) = iVar8 + 2;
        uVar13 = uVar13 + 2;
        *(int *)(pbVar14 + lVar21 * 4 + 0xc) = iVar8 + 3;
        *(int *)(pbVar14 + lVar21 * 4 + 0x10) = iVar8 + 4;
        *(int *)(pbVar14 + lVar21 * 4 + 0x14) = iVar8 + 5;
        lVar21 = lVar21 + 6;
      } while ((uVar25 & 0x7fffffffffffffe) != uVar13);
      if ((uVar25 & 1) != 0) {
LAB_14083f514:
        iVar8 = (int)uVar13;
        *(int *)(pbVar14 + uVar13 * 0xc) = iVar8 * 3;
        *(int *)(pbVar14 + uVar13 * 0xc + 4) = iVar8 * 3 + 1;
        *(int *)(pbVar14 + uVar13 * 0xc + 8) = iVar8 * 3 + 2;
      }
LAB_14083f534:
      *puStack_c0 = uStack_84;
      *(undefined4 *)param_1 = plStack_80._0_4_;
      uStack_1f8 = uStack_e8;
      uStack_208 = uStack_f8;
      uStack_200 = uStack_f0;
      auStack_220[0] = 0x8000000000000000;
      lStack_1e8 = -0x8000000000000000;
      uStack_71 = 0;
      uStack_110 = uVar25;
      pbStack_108 = pbVar14;
      uStack_100 = uVar25;
      pdb_1409f0070(param_3,&uStack_110,&uStack_208,auStack_220,&lStack_1e8);
      lStack_1e8 = 1;
      uStack_1e0 = 1;
      uStack_168 = uStack_238;
      uStack_160 = uStack_230;
      uStack_178 = uStack_248;
      uStack_170 = uStack_240;
      uStack_188 = uStack_258;
      uStack_180 = uStack_250;
      lStack_198 = uStack_268;
      uStack_190 = uStack_260;
      uStack_1a8 = uStack_278;
      uStack_1a4 = uStack_274;
      uStack_1b8 = uStack_288;
      plStack_1b0 = plStack_280;
      lStack_1c8 = lStack_298;
      uStack_1c0 = uStack_290;
      lStack_1d8 = lStack_2a8;
      puStack_1d0 = puStack_2a0;
      pdb_14007ee60();
      pbVar14 = pub_1406abab0(0x90,0x10);
      if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x90);
      }
      pub_142e32760(pbVar14,&lStack_1e8,0x90);
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,6);
      uStack_71 = 0;
      uStack_1e0 = uVar11;
      pdb_1409ed410(param_3,pbVar14,&lStack_1e8);
      uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
      lStack_1e8 = 0;
      lStack_1d8 = lVar10;
      puStack_1d0 = (ulonglong *)lVar15;
      uStack_71 = 0;
      pdb_14140a950(auStack_220,uStack_b8,lStack_b0,uVar11,param_3,&lStack_1e8);
LAB_14083f6b7:
      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
      if (param_2 == puStack_98) goto LAB_14083f6ca;
    }
LAB_14083f799:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300af80);
  }
LAB_14083f6ca:
  puVar17 = puStack_98;
  plVar24 = &lStack_1e8;
  if (lStack_d0 != 0) {
    pub_1406abac0((byte *)puStack_c8,lStack_d0 << 3,8);
  }
  if ((uVar11 & 1) != 0) {
    *(undefined4 *)puStack_d8[2] = *(undefined4 *)((longlong)puStack_d8 + 0x1c);
    puVar17 = (ulonglong *)*puStack_d8;
    uVar13 = puVar17[6];
    param_3 = (longlong *)puVar17[8];
    if (uVar13 == puVar17[4]) {
      pdb_142d7e8a0(puVar17 + 4);
    }
    *(longlong **)(puVar17[5] + uVar13 * 8) = param_3;
    param_1 = (longlong *)(uVar13 + 1);
    puVar17[6] = (ulonglong)param_1;
    puVar17[8] = puVar17[8] + 1;
  }
  if (cStack_72 == '\0') {
    return;
  }
  plVar12 = (longlong *)pdb_140e97000();
  if ((char)plVar12[0xd] != '\x01') goto LAB_14083f7e5;
  while( true ) {
    if (*plVar12 == 0) {
      *plVar12 = -1;
      plStack_80 = plVar12;
      pdb_140e95370(plVar12 + 1);
      *plStack_80 = *plStack_80 + 1;
      return;
    }
LAB_14083f7ba:
    plVar12 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14083f7c6:
    plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
    if (plVar12 != (longlong *)0x0) break;
    do {
      plVar12 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_14083f7e5:
      plVar12 = (longlong *)pdb_142dd9610(plVar12,0);
    } while (plVar12 == (longlong *)0x0);
  }
  goto LAB_14083efd8;
code_r0x00014083f33a:
  uVar22 = (ushort)(uVar9 - 1) & (ushort)uVar9;
  uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar22);
  if (uVar22 == 0) goto LAB_14083f350;
  goto LAB_14083f31f;
}

