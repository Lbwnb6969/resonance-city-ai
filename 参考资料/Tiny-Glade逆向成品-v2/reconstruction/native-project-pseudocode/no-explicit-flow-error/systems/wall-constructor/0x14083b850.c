// VA 0x14083b850, PDB extent 2786 bytes
// system_wall_constructor::construct_elevation_supports::construct_rectangle_columns
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::construct_rectangle_columns
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 2786 */

void pdb_14083b850(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  byte *unaff_RDI;
  undefined *puVar23;
  undefined *puVar24;
  longlong *plVar25;
  ushort uVar26;
  longlong lVar27;
  ulonglong *puVar28;
  longlong *plVar29;
  undefined1 (*pauVar30) [16];
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  int iStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  longlong *plStack_138;
  ulonglong *puStack_130;
  longlong *plStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d8;
  longlong lStack_d0;
  undefined8 *puStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined8 *puStack_88;
  longlong *plStack_80;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  cStack_71 = pdb_140e94b40();
  if (cStack_71 == '\0') goto LAB_14083ba2f;
  puVar28 = (ulonglong *)&UNK_14300acce;
  unaff_RDI = (byte *)0x52;
  uVar20 = 0x52;
  lVar14 = pdb_14083ea40(&UNK_14300acce);
  if (lVar14 == 1) {
    if (0x52 < uVar20) {
LAB_14083c18b:
      pdb_142dc8070(&UNK_14300acce,0x52,0);
LAB_14083c1ab:
      pdb_142dc8070(&UNK_14300acce,0x52);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar28 = (ulonglong *)&UNK_14300acce;
    uVar15 = pdb_14083ea40(&UNK_14300acce);
    if ((uVar15 & 1) != 0) {
      if (0x52 < uVar20 + 2) goto LAB_14083c1ab;
      unaff_RDI = (byte *)(0x50 - uVar20);
      puVar28 = (ulonglong *)(&UNK_14300acd0 + uVar20);
    }
  }
  puVar23 = &UNK_14300abb7;
  plVar29 = (longlong *)&UNK_14300ab70;
  do {
    bVar12 = puVar23[-1];
    uVar13 = (uint)(char)bVar12;
    plStack_80 = param_4;
    if ((char)bVar12 < '\0') {
      bVar31 = puVar23[-2];
      if ((char)bVar31 < -0x40) {
        bVar4 = puVar23[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar23 + -4;
          puVar23 = puVar23 + -4;
          uVar13 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar23 = puVar23 + -3;
          uVar13 = bVar4 & 0xf;
        }
        uVar13 = bVar31 & 0x3f | uVar13 << 6;
      }
      else {
        puVar23 = puVar23 + -2;
        uVar13 = bVar31 & 0x1f;
      }
      uVar13 = (uint)(bVar12 & 0x3f) | uVar13 << 6;
      if (uVar13 != 0x5c) goto LAB_14083b994;
LAB_14083b9a5:
      puVar24 = puVar23 + -0x14300ab6f;
      if (puVar24 < (undefined *)0x48) {
        plVar22 = (longlong *)(0x47 - (longlong)puVar24);
        plVar29 = (longlong *)(puVar23 + 1);
        goto LAB_14083b9c7;
      }
      pdb_142dc8070(&UNK_14300ab70,0x47,puVar24,0x47,&UNK_14300ade0);
      goto LAB_14083c18b;
    }
    puVar23 = puVar23 + -1;
    if (uVar13 == 0x5c) goto LAB_14083b9a5;
LAB_14083b994:
    if (uVar13 == 0x2f) goto LAB_14083b9a5;
  } while (puVar23 != &UNK_14300ab70);
  plVar22 = (longlong *)0x47;
LAB_14083b9c7:
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_14083c11d;
LAB_14083b9d6:
  if (*plVar16 != 0) goto LAB_14083c111;
  *plVar16 = -1;
  plStack_90 = plVar16;
  uStack_98 = pdb_140e94f10(plVar16 + 1,puVar28,unaff_RDI,plVar29,plVar22,1,0);
  *plStack_90 = *plStack_90 + 1;
  param_4 = plStack_80;
LAB_14083ba2f:
  puStack_130 = (ulonglong *)*param_1;
  lVar14 = param_1[1];
  uVar20 = *puStack_130;
  plVar16 = (longlong *)0x0;
  plVar29 = (longlong *)(uVar20 - *(ulonglong *)(lVar14 + 0x18));
  if (uVar20 < *(ulonglong *)(lVar14 + 0x18)) {
    plVar29 = plVar16;
  }
  plVar25 = (longlong *)(uVar20 - *(ulonglong *)(lVar14 + 0x38));
  if (uVar20 < *(ulonglong *)(lVar14 + 0x38)) {
    plVar25 = plVar16;
  }
  param_1 = (longlong *)((longlong)plVar29 * 0x28 + *(longlong *)(lVar14 + 8));
  plVar11 = (longlong *)((longlong)*(longlong **)(lVar14 + 0x10) - (longlong)plVar29);
  if (*(longlong **)(lVar14 + 0x10) < plVar29) {
    param_1 = (longlong *)0x8;
    plVar11 = plVar16;
  }
  plVar29 = (longlong *)((longlong)plVar25 * 0x28 + *(longlong *)(lVar14 + 0x28));
  plVar22 = (longlong *)((longlong)*(longlong **)(lVar14 + 0x30) - (longlong)plVar25);
  if (*(longlong **)(lVar14 + 0x30) < plVar25) {
    plVar29 = (longlong *)0x8;
    plVar22 = plVar16;
  }
  *puStack_130 = (*(longlong *)(lVar14 + 0x40) - (longlong)plVar22) - (longlong)plVar11;
  plStack_138 = param_1 + (longlong)plVar11 * 5;
  plStack_128 = plVar29 + (longlong)plVar22 * 5;
  param_3 = (longlong *)*param_3;
  uStack_ac = *(undefined4 *)((longlong)param_8 + 0x1c);
  uStack_120 = *param_8;
  puStack_118 = (undefined4 *)param_8[2];
  lStack_d0 = *param_2;
  lStack_110 = *param_4;
  uStack_108 = *param_5;
  uStack_100 = *param_6;
  uStack_a8 = *(undefined4 *)((longlong)param_7 + 0x1c);
  puStack_88 = (undefined8 *)*param_7;
  puStack_f8 = (undefined4 *)param_7[2];
  uStack_a4 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_c0 = *param_9;
  puStack_f0 = (undefined4 *)param_9[2];
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
  puStack_c8 = puStack_88 + 4;
  lStack_e8 = lStack_c0 + 0x20;
LAB_14083bb8e:
  puVar28 = puStack_130;
  if ((param_1 == (longlong *)0x0) || (param_1 == plStack_138)) {
    if ((plVar29 == (longlong *)0x0) || (plVar29 == plStack_128)) goto LAB_14083c0ac;
    plVar22 = plVar29 + 5;
    param_2 = (longlong *)0x0;
    plVar16 = plVar29;
  }
  else {
    param_2 = param_1 + 5;
    plVar22 = plVar29;
    plVar16 = param_1;
  }
  *puStack_130 = *puStack_130 + 1;
  unaff_RDI = (byte *)plVar16[3];
  pbStack_140 = unaff_RDI;
  if (param_3[3] != 0) {
    uVar20 = pdb_1400af0a0(param_3 + 4,&pbStack_140);
    lVar14 = *param_3;
    bVar12 = (byte)(uVar20 >> 0x39);
    auVar32 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar32 = pshuflw(auVar32,auVar32,0);
    lVar21 = 0;
    while( true ) {
      uVar20 = uVar20 & param_3[1];
      auVar36 = *(undefined1 (*) [16])(lVar14 + uVar20);
      auVar35[0] = -(auVar36[0] == auVar32[0]);
      auVar35[1] = -(auVar36[1] == auVar32[1]);
      auVar35[2] = -(auVar36[2] == auVar32[2]);
      auVar35[3] = -(auVar36[3] == auVar32[3]);
      auVar35[4] = -(auVar36[4] == auVar32[4]);
      auVar35[5] = -(auVar36[5] == auVar32[5]);
      auVar35[6] = -(auVar36[6] == auVar32[6]);
      auVar35[7] = -(auVar36[7] == auVar32[7]);
      auVar35[8] = -(auVar36[8] == auVar32[0]);
      auVar35[9] = -(auVar36[9] == auVar32[1]);
      auVar35[10] = -(auVar36[10] == auVar32[2]);
      auVar35[0xb] = -(auVar36[0xb] == auVar32[3]);
      auVar35[0xc] = -(auVar36[0xc] == auVar32[4]);
      auVar35[0xd] = -(auVar36[0xd] == auVar32[5]);
      auVar35[0xe] = -(auVar36[0xe] == auVar32[6]);
      auVar35[0xf] = -(auVar36[0xf] == auVar32[7]);
      uVar26 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar19 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        lVar27 = (uVar19 + uVar20 & param_3[1]) * -0x2b0;
        if (unaff_RDI == *(byte **)(lVar14 + -0x2b0 + lVar27)) {
          param_4 = (longlong *)(lVar14 + lVar27);
          plStack_90 = param_2;
          plStack_80 = plVar22;
          pdb_14092f8d0(&iStack_174);
          plVar29 = plStack_80;
          param_1 = plStack_90;
          if (iStack_174 != 1) goto LAB_14083bb8e;
          uStack_148 = uStack_160;
          uStack_158 = uStack_170;
          uStack_150 = uStack_168;
          *puStack_118 = uStack_ac;
          param_2 = (longlong *)pdb_140a6aaf0(uStack_120,unaff_RDI);
          uStack_a0 = 0;
          pdb_1414784f0(unaff_RDI,param_4 + -0x55,&uStack_158,lStack_d0);
          pdb_141479920(unaff_RDI,param_4 + -0x55,&uStack_158,param_3,plVar16[1],plVar16[2],
                        lStack_d0,lStack_110,uStack_108,uStack_100,&uStack_a0,param_2);
          *puStack_f8 = uStack_a8;
          pbStack_b8 = unaff_RDI;
          uVar17 = pdb_1400af0a0(puStack_c8);
          pauVar18 = (undefined1 (*) [16])*puStack_88;
          uVar20 = puStack_88[1];
          bVar12 = (byte)(uVar17 >> 0x38);
          bVar31 = bVar12 >> 1;
          auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
          auVar32 = pshuflw(auVar32,auVar32,0);
          lVar14 = 0;
          uVar15 = uVar17;
          goto LAB_14083bda8;
        }
        uVar26 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar26);
      }
      auVar33[0] = -(auVar36[0] == unaff_XMM6_Ba);
      auVar33[1] = -(auVar36[1] == unaff_XMM6_Bb);
      auVar33[2] = -(auVar36[2] == unaff_XMM6_Bc);
      auVar33[3] = -(auVar36[3] == unaff_XMM6_Bd);
      auVar33[4] = -(auVar36[4] == unaff_XMM6_Be);
      auVar33[5] = -(auVar36[5] == unaff_XMM6_Bf);
      auVar33[6] = -(auVar36[6] == unaff_XMM6_Bg);
      auVar33[7] = -(auVar36[7] == unaff_XMM6_Bh);
      auVar33[8] = -(auVar36[8] == unaff_XMM6_Bi);
      auVar33[9] = -(auVar36[9] == unaff_XMM6_Bj);
      auVar33[10] = -(auVar36[10] == unaff_XMM6_Bk);
      auVar33[0xb] = -(auVar36[0xb] == unaff_XMM6_Bl);
      auVar33[0xc] = -(auVar36[0xc] == unaff_XMM6_Bm);
      auVar33[0xd] = -(auVar36[0xd] == unaff_XMM6_Bn);
      auVar33[0xe] = -(auVar36[0xe] == unaff_XMM6_Bo);
      auVar33[0xf] = -(auVar36[0xf] == unaff_XMM6_Bp);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar20 = uVar20 + lVar21 + 0x10;
      lVar21 = lVar21 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14300abb8);
LAB_14083c0ac:
  if (cStack_71 == '\0') {
    return;
  }
  plVar16 = (longlong *)pdb_140e97000();
  if ((char)plVar16[0xd] != '\x01') goto LAB_14083c13c;
  while( true ) {
    plVar29 = param_4;
    if (*plVar16 == 0) {
      *plVar16 = -1;
      plStack_80 = plVar16;
      pdb_140e95370(plVar16 + 1);
      *plStack_80 = *plStack_80 + 1;
      return;
    }
LAB_14083c111:
    plVar16 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14083c11d:
    plVar16 = (longlong *)pdb_142dd9610(plVar16,0);
    param_4 = plVar29;
    if (plVar16 != (longlong *)0x0) break;
    do {
      plVar16 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_14083c13c:
      plVar16 = (longlong *)pdb_142dd9610(plVar16,0);
    } while (plVar16 == (longlong *)0x0);
  }
  goto LAB_14083b9d6;
LAB_14083bda8:
  uVar15 = uVar15 & uVar20;
  pcVar2 = *pauVar18 + uVar15;
  auVar36[0] = -(*pcVar2 == auVar32[0]);
  auVar36[1] = -(pcVar2[1] == auVar32[1]);
  auVar36[2] = -(pcVar2[2] == auVar32[2]);
  auVar36[3] = -(pcVar2[3] == auVar32[3]);
  auVar36[4] = -(pcVar2[4] == auVar32[4]);
  auVar36[5] = -(pcVar2[5] == auVar32[5]);
  auVar36[6] = -(pcVar2[6] == auVar32[6]);
  auVar36[7] = -(pcVar2[7] == auVar32[7]);
  auVar36[8] = -(pcVar2[8] == auVar32[0]);
  auVar36[9] = -(pcVar2[9] == auVar32[1]);
  auVar36[10] = -(pcVar2[10] == auVar32[2]);
  auVar36[0xb] = -(pcVar2[0xb] == auVar32[3]);
  auVar36[0xc] = -(pcVar2[0xc] == auVar32[4]);
  auVar36[0xd] = -(pcVar2[0xd] == auVar32[5]);
  auVar36[0xe] = -(pcVar2[0xe] == auVar32[6]);
  auVar36[0xf] = -(pcVar2[0xf] == auVar32[7]);
  uVar26 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar26;
  while (uVar26 != 0) {
    uVar19 = 0;
    for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    pauVar30 = pauVar18 + (uVar19 + uVar15 & uVar20) * -4;
    if (*(byte **)pauVar30[-4] == unaff_RDI) goto LAB_14083bea1;
    uVar26 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar26);
  }
  auVar34[0] = -(*pcVar2 == unaff_XMM6_Ba);
  auVar34[1] = -(pcVar2[1] == unaff_XMM6_Bb);
  auVar34[2] = -(pcVar2[2] == unaff_XMM6_Bc);
  auVar34[3] = -(pcVar2[3] == unaff_XMM6_Bd);
  auVar34[4] = -(pcVar2[4] == unaff_XMM6_Be);
  auVar34[5] = -(pcVar2[5] == unaff_XMM6_Bf);
  auVar34[6] = -(pcVar2[6] == unaff_XMM6_Bg);
  auVar34[7] = -(pcVar2[7] == unaff_XMM6_Bh);
  auVar34[8] = -(pcVar2[8] == unaff_XMM6_Bi);
  auVar34[9] = -(pcVar2[9] == unaff_XMM6_Bj);
  auVar34[10] = -(pcVar2[10] == unaff_XMM6_Bk);
  auVar34[0xb] = -(pcVar2[0xb] == unaff_XMM6_Bl);
  auVar34[0xc] = -(pcVar2[0xc] == unaff_XMM6_Bm);
  auVar34[0xd] = -(pcVar2[0xd] == unaff_XMM6_Bn);
  auVar34[0xe] = -(pcVar2[0xe] == unaff_XMM6_Bo);
  auVar34[0xf] = -(pcVar2[0xf] == unaff_XMM6_Bp);
  uVar26 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  if (uVar26 != 0) goto LAB_14083be0b;
  uVar15 = uVar15 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_14083bda8;
LAB_14083be0b:
  if (puStack_88[2] == 0) {
    pdb_142ddd4d0(puStack_88,1,puStack_c8,CONCAT71((uint7)(byte)(uVar26 >> 8),1));
    pauVar18 = (undefined1 (*) [16])*puStack_88;
    uVar20 = puStack_88[1];
  }
  uVar17 = uVar17 & uVar20;
  auVar32 = *(undefined1 (*) [16])(*pauVar18 + uVar17);
  uVar26 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar32[0xf] >> 7) << 0xf
  ;
  uVar13 = (uint)uVar26;
  if (uVar26 == 0) {
    lVar14 = 0x10;
    do {
      uVar17 = uVar17 + lVar14 & uVar20;
      auVar32 = *(undefined1 (*) [16])(*pauVar18 + uVar17);
      lVar14 = lVar14 + 0x10;
      uVar13 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
    } while (uVar13 == 0);
  }
  uVar19 = 0;
  for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
    uVar19 = uVar19 + 1;
  }
  uVar15 = uVar19 + uVar17 & uVar20;
  bVar31 = (*pauVar18)[uVar15];
  if (-1 < (char)bVar31) {
    auVar32 = *pauVar18;
    uVar13 = 0;
    for (uVar19 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar19 & 1) == 0;
        uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar15 = (ulonglong)uVar13;
    bVar31 = (*pauVar18)[uVar15];
  }
  bVar12 = bVar12 >> 1;
  (*pauVar18)[uVar15] = bVar12;
  pauVar18[1][uVar15 - 0x10 & uVar20] = bVar12;
  puStack_88[2] = puStack_88[2] - (ulonglong)(bVar31 & 1);
  pauVar30 = pauVar18 + uVar15 * -4;
  *(byte **)pauVar18[uVar15 * -4 + -4] = unaff_RDI;
  *(undefined8 *)(pauVar30[-4] + 8) = 0;
  *(undefined8 *)pauVar30[-3] = 4;
  *(undefined8 *)(pauVar30[-3] + 8) = 0;
  *(undefined8 *)pauVar30[-2] = 0;
  *(undefined8 *)(pauVar30[-2] + 8) = 0;
  *(undefined8 *)pauVar30[-1] = 0;
  pauVar30[-1][8] = 0;
  puStack_88[3] = puStack_88[3] + 1;
LAB_14083bea1:
  if (*(ulonglong *)pauVar30[-1] < uStack_a0) {
    pdb_140df4540(&pbStack_b8,&uStack_150,*(undefined4 *)((longlong)param_4 + -0x24));
    param_4 = (longlong *)((longlong)param_4 + -5);
    bVar12 = pdb_1408ff990(param_4);
    uStack_d8 = uStack_b0;
    pbStack_e0 = pbStack_b8;
    *puStack_f0 = uStack_a4;
    lVar14 = *(longlong *)(lStack_c0 + 0x30);
    uVar5 = *(undefined8 *)(lStack_c0 + 0x40);
    if (lVar14 == *(longlong *)(lStack_c0 + 0x20)) {
      pdb_142d7e830(lStack_e8);
    }
    lVar21 = *(longlong *)(lStack_c0 + 0x28);
    *(undefined8 *)(lVar21 + lVar14 * 0x18) = uVar5;
    *(byte **)(lVar21 + 8 + lVar14 * 0x18) = pbStack_e0;
    *(undefined4 *)(lVar21 + 0x10 + lVar14 * 0x18) = uStack_d8;
    *(byte *)(lVar21 + 0x14 + lVar14 * 0x18) = bVar12 | 2;
    *(longlong *)(lStack_c0 + 0x30) = lVar14 + 1;
    *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
  }
  *(ulonglong *)pauVar30[-1] = uStack_a0;
  plVar22 = (longlong *)param_2[2];
  if (plVar22 == (longlong *)0x0) {
    unaff_RDI = (byte *)0x4;
  }
  else {
    lVar14 = param_2[1];
    param_2 = (longlong *)((longlong)plVar22 << 5);
    pdb_14007ee60();
    unaff_RDI = pub_1406abab0((ulonglong)param_2,4);
    if (unaff_RDI == (byte *)0x0) {
      pdb_142dc7e2a(4,param_2);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (plVar22 == (longlong *)0x1) {
      uVar20 = 0;
    }
    else {
      lVar21 = 0x20;
      uVar20 = 0;
      do {
        puVar3 = (undefined8 *)(lVar14 + -0x20 + lVar21);
        uVar5 = *puVar3;
        uVar9 = puVar3[1];
        puVar3 = (undefined8 *)(lVar14 + -0x10 + lVar21);
        uVar10 = puVar3[1];
        *(undefined8 *)(unaff_RDI + lVar21 + -0x10) = *puVar3;
        *(undefined8 *)(unaff_RDI + lVar21 + -0x10 + 8) = uVar10;
        *(undefined8 *)(unaff_RDI + lVar21 + -0x20) = uVar5;
        *(undefined8 *)(unaff_RDI + lVar21 + -0x20 + 8) = uVar9;
        uVar5 = ((undefined8 *)(lVar14 + lVar21))[1];
        puVar3 = (undefined8 *)(lVar14 + 0x10 + lVar21);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        *(undefined8 *)(unaff_RDI + lVar21) = *(undefined8 *)(lVar14 + lVar21);
        *(undefined8 *)(unaff_RDI + lVar21 + 8) = uVar5;
        *(undefined8 *)(unaff_RDI + lVar21 + 0x10) = uVar9;
        *(undefined8 *)(unaff_RDI + lVar21 + 0x10 + 8) = uVar10;
        uVar20 = uVar20 + 2;
        lVar21 = lVar21 + 0x40;
      } while (((ulonglong)plVar22 & 0xfffffffffffffffe) != uVar20);
      if (((ulonglong)plVar22 & 1) == 0) goto LAB_14083c00c;
    }
    lVar21 = uVar20 * 0x20;
    uVar5 = *(undefined8 *)(lVar14 + lVar21);
    uVar9 = ((undefined8 *)(lVar14 + lVar21))[1];
    puVar3 = (undefined8 *)(lVar14 + 0x10 + lVar21);
    uVar10 = puVar3[1];
    *(undefined8 *)(unaff_RDI + lVar21 + 0x10) = *puVar3;
    *(undefined8 *)(unaff_RDI + lVar21 + 0x10 + 8) = uVar10;
    *(undefined8 *)(unaff_RDI + lVar21) = uVar5;
    *(undefined8 *)(unaff_RDI + lVar21 + 8) = uVar9;
  }
LAB_14083c00c:
  if (*(longlong *)(pauVar30[-4] + 8) != 0) {
    pub_1406abac0(*(byte **)pauVar30[-3],*(longlong *)(pauVar30[-4] + 8) << 5,4);
  }
  *(longlong **)(pauVar30[-4] + 8) = plVar22;
  *(byte **)pauVar30[-3] = unaff_RDI;
  *(longlong **)(pauVar30[-3] + 8) = plVar22;
  plVar29 = plStack_80;
  param_1 = plStack_90;
  goto LAB_14083bb8e;
}

