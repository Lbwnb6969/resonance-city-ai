// VA 0x14083c340, PDB extent 2798 bytes
// system_wall_constructor::construct_elevation_supports::construct_rectangle_brackets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::construct_rectangle_brackets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 2798 */

void pdb_14083c340(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ushort uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *unaff_R12;
  undefined8 *puVar25;
  ulonglong *puVar26;
  undefined1 (*pauVar27) [16];
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulonglong *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined4 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined4 *puStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 *puStack_b8;
  undefined4 uStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *puStack_98;
  longlong *plStack_90;
  char cStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  cStack_81 = pdb_140e94b40();
  if (cStack_81 == '\0') goto LAB_14083c52f;
  unaff_R12 = (undefined8 *)&UNK_14300ac78;
  puVar26 = (ulonglong *)0x53;
  uVar14 = 0x53;
  lVar9 = pdb_14083ea40(&UNK_14300ac78);
  if (lVar9 == 1) {
    if (0x53 < uVar14) {
LAB_14083cc69:
      pdb_142dc8070(&UNK_14300ac78,0x53,0);
LAB_14083cc89:
      pdb_142dc8070(&UNK_14300ac78,0x53);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    unaff_R12 = (undefined8 *)&UNK_14300ac78;
    uVar10 = pdb_14083ea40(&UNK_14300ac78);
    if ((uVar10 & 1) != 0) {
      if (0x53 < uVar14 + 2) goto LAB_14083cc89;
      puVar26 = (ulonglong *)(0x51 - uVar14);
      unaff_R12 = (undefined8 *)(&UNK_14300ac7a + uVar14);
    }
  }
  puVar19 = &UNK_14300abb7;
  puVar25 = (undefined8 *)&UNK_14300ab70;
  do {
    bVar16 = puVar19[-1];
    uVar8 = (uint)(char)bVar16;
    plStack_90 = param_4;
    if ((char)bVar16 < '\0') {
      bVar28 = puVar19[-2];
      if ((char)bVar28 < -0x40) {
        bVar3 = puVar19[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar19 + -4;
          puVar19 = puVar19 + -4;
          uVar8 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar19 = puVar19 + -3;
          uVar8 = bVar3 & 0xf;
        }
        uVar8 = bVar28 & 0x3f | uVar8 << 6;
      }
      else {
        puVar19 = puVar19 + -2;
        uVar8 = bVar28 & 0x1f;
      }
      uVar8 = (uint)(bVar16 & 0x3f) | uVar8 << 6;
      if (uVar8 != 0x5c) goto LAB_14083c494;
LAB_14083c4a5:
      puVar20 = puVar19 + -0x14300ab6f;
      if (puVar20 < (undefined *)0x48) {
        plVar17 = (longlong *)(0x47 - (longlong)puVar20);
        puVar25 = (undefined8 *)(puVar19 + 1);
        goto LAB_14083c4c7;
      }
      pdb_142dc8070(&UNK_14300ab70,0x47,puVar20,0x47,&UNK_14300ade0);
      goto LAB_14083cc69;
    }
    puVar19 = puVar19 + -1;
    if (uVar8 == 0x5c) goto LAB_14083c4a5;
LAB_14083c494:
    if (uVar8 == 0x2f) goto LAB_14083c4a5;
  } while (puVar19 != &UNK_14300ab70);
  plVar17 = (undefined8 *)0x47;
LAB_14083c4c7:
  plVar11 = (longlong *)pdb_140e97000();
  if ((char)plVar11[0xd] != '\x01') goto LAB_14083cc0b;
LAB_14083c4d6:
  if (*plVar11 != 0) goto LAB_14083cbff;
  *plVar11 = -1;
  plStack_c8 = plVar11;
  uStack_d0 = pdb_140e94f10(plVar11 + 1,unaff_R12,puVar26,puVar25,plVar17,1,0);
  *plStack_c8 = *plStack_c8 + 1;
  param_4 = plStack_90;
LAB_14083c52f:
  puStack_168 = (ulonglong *)*param_1;
  lVar9 = param_1[1];
  uVar14 = *puStack_168;
  puVar21 = (undefined8 *)0x0;
  puVar25 = (undefined8 *)(uVar14 - *(ulonglong *)(lVar9 + 0x18));
  if (uVar14 < *(ulonglong *)(lVar9 + 0x18)) {
    puVar25 = puVar21;
  }
  puVar23 = (undefined8 *)(uVar14 - *(ulonglong *)(lVar9 + 0x38));
  if (uVar14 < *(ulonglong *)(lVar9 + 0x38)) {
    puVar23 = puVar21;
  }
  plVar17 = (longlong *)((longlong)puVar25 * 0x28 + *(longlong *)(lVar9 + 8));
  puVar18 = (undefined8 *)((longlong)*(undefined8 **)(lVar9 + 0x10) - (longlong)puVar25);
  if (*(undefined8 **)(lVar9 + 0x10) < puVar25) {
    plVar17 = (undefined8 *)0x8;
    puVar18 = puVar21;
  }
  puVar25 = (undefined8 *)((longlong)puVar23 * 0x28 + *(longlong *)(lVar9 + 0x28));
  param_1 = (undefined8 *)((longlong)*(undefined8 **)(lVar9 + 0x30) - (longlong)puVar23);
  if (*(undefined8 **)(lVar9 + 0x30) < puVar23) {
    puVar25 = (undefined8 *)0x8;
    param_1 = puVar21;
  }
  *puStack_168 = (*(longlong *)(lVar9 + 0x40) - (longlong)param_1) - (longlong)puVar18;
  fVar7 = _DAT_14300a33c;
  plStack_c8 = plVar17 + (longlong)puVar18 * 5;
  puStack_160 = puVar25 + (longlong)param_1 * 5;
  param_3 = (longlong *)*param_3;
  uStack_158 = *param_4;
  uStack_110 = *param_2;
  uStack_108 = *param_5;
  uStack_148 = *param_6;
  uStack_140 = *param_7;
  uStack_e4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  puStack_98 = (undefined8 *)*param_8;
  puStack_150 = (undefined4 *)param_8[2];
  uStack_9c = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_c0 = *param_9;
  puStack_f8 = (undefined4 *)param_9[2];
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  unaff_XMM6_Ba = (char)iVar6;
  unaff_XMM6_Bb = (char)((uint)iVar6 >> 8);
  unaff_XMM6_Bc = (char)((uint)iVar6 >> 0x10);
  unaff_XMM6_Bd = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  unaff_XMM6_Be = (char)iVar6;
  unaff_XMM6_Bf = (char)((uint)iVar6 >> 8);
  unaff_XMM6_Bg = (char)((uint)iVar6 >> 0x10);
  unaff_XMM6_Bh = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  unaff_XMM6_Bi = (char)iVar6;
  unaff_XMM6_Bj = (char)((uint)iVar6 >> 8);
  unaff_XMM6_Bk = (char)((uint)iVar6 >> 0x10);
  unaff_XMM6_Bl = (char)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  unaff_XMM6_Bm = (char)iVar6;
  unaff_XMM6_Bn = (char)((uint)iVar6 >> 8);
  unaff_XMM6_Bo = (char)((uint)iVar6 >> 0x10);
  unaff_XMM6_Bp = (char)((uint)iVar6 >> 0x18);
  puStack_100 = puStack_98 + 4;
  lStack_f0 = lStack_c0 + 0x20;
LAB_14083c6bb:
  puVar26 = puStack_168;
  if ((plVar17 == (undefined8 *)0x0) || (plVar17 == plStack_c8)) {
    if ((puVar25 == (undefined8 *)0x0) || (puVar25 == puStack_160)) goto LAB_14083cb8e;
    puVar21 = (undefined8 *)0x0;
    puVar23 = puVar25 + 5;
    puVar18 = puVar25;
  }
  else {
    puVar21 = plVar17 + 5;
    puVar23 = puVar25;
    puVar18 = plVar17;
  }
  puVar25 = puVar23;
  *puStack_168 = *puStack_168 + 1;
  param_1 = (undefined8 *)puVar18[3];
  puStack_118 = param_1;
  if (param_3[3] != 0) {
    uVar14 = pdb_1400af0a0();
    lVar9 = *param_3;
    bVar16 = (byte)(uVar14 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar29 = pshuflw(auVar29,auVar29,0);
    lVar15 = 0;
    while( true ) {
      uVar14 = uVar14 & param_3[1];
      auVar33 = *(undefined1 (*) [16])(lVar9 + uVar14);
      auVar32[0] = -(auVar33[0] == auVar29[0]);
      auVar32[1] = -(auVar33[1] == auVar29[1]);
      auVar32[2] = -(auVar33[2] == auVar29[2]);
      auVar32[3] = -(auVar33[3] == auVar29[3]);
      auVar32[4] = -(auVar33[4] == auVar29[4]);
      auVar32[5] = -(auVar33[5] == auVar29[5]);
      auVar32[6] = -(auVar33[6] == auVar29[6]);
      auVar32[7] = -(auVar33[7] == auVar29[7]);
      auVar32[8] = -(auVar33[8] == auVar29[0]);
      auVar32[9] = -(auVar33[9] == auVar29[1]);
      auVar32[10] = -(auVar33[10] == auVar29[2]);
      auVar32[0xb] = -(auVar33[0xb] == auVar29[3]);
      auVar32[0xc] = -(auVar33[0xc] == auVar29[4]);
      auVar32[0xd] = -(auVar33[0xd] == auVar29[5]);
      auVar32[0xe] = -(auVar33[0xe] == auVar29[6]);
      auVar32[0xf] = -(auVar33[0xf] == auVar29[7]);
      uVar22 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar22;
      while (uVar22 != 0) {
        uVar13 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        lVar24 = (uVar13 + uVar14 & param_3[1]) * -0x2b0;
        if (param_1 == *(undefined8 **)(lVar9 + -0x2b0 + lVar24)) {
          param_4 = (longlong *)(lVar9 + lVar24);
          unaff_R12 = param_4 + -0x55;
          uStack_d8 = 0;
          uStack_e0 = 0;
          plStack_90 = puVar21;
          pdb_14092f8d0(&iStack_184,unaff_R12);
          param_2 = puVar25;
          plVar17 = plStack_90;
          if (iStack_184 != 1) goto LAB_14083c6bb;
          uStack_128 = uStack_170;
          uStack_138 = uStack_180;
          uStack_130 = uStack_178;
          pdb_14147a430(param_1,unaff_R12,&uStack_138,param_3,uStack_158,puVar18[1],puVar18[2],
                        uStack_110,uStack_108,&uStack_d8);
          if (fVar7 <= *(float *)(param_4 + -4)) {
            pdb_14147d5e0(param_1,unaff_R12,&uStack_138,param_3,puVar18[1],puVar18[2],uStack_110,
                          uStack_108,uStack_148,uStack_140,&uStack_e0);
          }
          *puStack_150 = uStack_e4;
          puStack_b8 = param_1;
          unaff_R12 = (undefined8 *)pdb_1400af0a0(puStack_100);
          pauVar12 = (undefined1 (*) [16])*puStack_98;
          uVar14 = puStack_98[1];
          bVar16 = (byte)((ulonglong)unaff_R12 >> 0x38);
          bVar28 = bVar16 >> 1;
          auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
          auVar29 = pshuflw(auVar29,auVar29,0);
          lVar9 = 0;
          puVar21 = unaff_R12;
          goto LAB_14083c8ed;
        }
        uVar22 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar22);
      }
      auVar30[0] = -(auVar33[0] == unaff_XMM6_Ba);
      auVar30[1] = -(auVar33[1] == unaff_XMM6_Bb);
      auVar30[2] = -(auVar33[2] == unaff_XMM6_Bc);
      auVar30[3] = -(auVar33[3] == unaff_XMM6_Bd);
      auVar30[4] = -(auVar33[4] == unaff_XMM6_Be);
      auVar30[5] = -(auVar33[5] == unaff_XMM6_Bf);
      auVar30[6] = -(auVar33[6] == unaff_XMM6_Bg);
      auVar30[7] = -(auVar33[7] == unaff_XMM6_Bh);
      auVar30[8] = -(auVar33[8] == unaff_XMM6_Bi);
      auVar30[9] = -(auVar33[9] == unaff_XMM6_Bj);
      auVar30[10] = -(auVar33[10] == unaff_XMM6_Bk);
      auVar30[0xb] = -(auVar33[0xb] == unaff_XMM6_Bl);
      auVar30[0xc] = -(auVar33[0xc] == unaff_XMM6_Bm);
      auVar30[0xd] = -(auVar33[0xd] == unaff_XMM6_Bn);
      auVar30[0xe] = -(auVar33[0xe] == unaff_XMM6_Bo);
      auVar30[0xf] = -(auVar33[0xf] == unaff_XMM6_Bp);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar14 = uVar14 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14300abd0);
LAB_14083cb8e:
  if (cStack_81 == '\0') {
    return;
  }
  plVar11 = (longlong *)pdb_140e97000(param_3 + 4,&puStack_118);
  if ((char)plVar11[0xd] != '\x01') goto LAB_14083cc2a;
  while( true ) {
    puVar25 = param_4;
    if (*plVar11 == 0) {
      *plVar11 = -1;
      plStack_90 = plVar11;
      pdb_140e95370(plVar11 + 1);
      *plStack_90 = *plStack_90 + 1;
      return;
    }
LAB_14083cbff:
    plVar11 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14083cc0b:
    plVar11 = (longlong *)pdb_142dd9610(plVar11,0);
    param_4 = puVar25;
    if (plVar11 != (longlong *)0x0) break;
    do {
      plVar11 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_14083cc2a:
      plVar11 = (longlong *)pdb_142dd9610(plVar11,0);
    } while (plVar11 == (longlong *)0x0);
  }
  goto LAB_14083c4d6;
LAB_14083c8ed:
  uVar10 = (ulonglong)puVar21 & uVar14;
  pcVar2 = *pauVar12 + uVar10;
  auVar33[0] = -(*pcVar2 == auVar29[0]);
  auVar33[1] = -(pcVar2[1] == auVar29[1]);
  auVar33[2] = -(pcVar2[2] == auVar29[2]);
  auVar33[3] = -(pcVar2[3] == auVar29[3]);
  auVar33[4] = -(pcVar2[4] == auVar29[4]);
  auVar33[5] = -(pcVar2[5] == auVar29[5]);
  auVar33[6] = -(pcVar2[6] == auVar29[6]);
  auVar33[7] = -(pcVar2[7] == auVar29[7]);
  auVar33[8] = -(pcVar2[8] == auVar29[0]);
  auVar33[9] = -(pcVar2[9] == auVar29[1]);
  auVar33[10] = -(pcVar2[10] == auVar29[2]);
  auVar33[0xb] = -(pcVar2[0xb] == auVar29[3]);
  auVar33[0xc] = -(pcVar2[0xc] == auVar29[4]);
  auVar33[0xd] = -(pcVar2[0xd] == auVar29[5]);
  auVar33[0xe] = -(pcVar2[0xe] == auVar29[6]);
  auVar33[0xf] = -(pcVar2[0xf] == auVar29[7]);
  uVar22 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar22;
  while (uVar22 != 0) {
    uVar13 = 0;
    for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    pauVar27 = pauVar12 + (uVar13 + uVar10 & uVar14) * -4;
    if (*(undefined8 **)pauVar27[-4] == param_1) goto LAB_14083c9f2;
    uVar22 = (ushort)(uVar8 - 1) & (ushort)uVar8;
    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar22);
  }
  auVar31[0] = -(*pcVar2 == unaff_XMM6_Ba);
  auVar31[1] = -(pcVar2[1] == unaff_XMM6_Bb);
  auVar31[2] = -(pcVar2[2] == unaff_XMM6_Bc);
  auVar31[3] = -(pcVar2[3] == unaff_XMM6_Bd);
  auVar31[4] = -(pcVar2[4] == unaff_XMM6_Be);
  auVar31[5] = -(pcVar2[5] == unaff_XMM6_Bf);
  auVar31[6] = -(pcVar2[6] == unaff_XMM6_Bg);
  auVar31[7] = -(pcVar2[7] == unaff_XMM6_Bh);
  auVar31[8] = -(pcVar2[8] == unaff_XMM6_Bi);
  auVar31[9] = -(pcVar2[9] == unaff_XMM6_Bj);
  auVar31[10] = -(pcVar2[10] == unaff_XMM6_Bk);
  auVar31[0xb] = -(pcVar2[0xb] == unaff_XMM6_Bl);
  auVar31[0xc] = -(pcVar2[0xc] == unaff_XMM6_Bm);
  auVar31[0xd] = -(pcVar2[0xd] == unaff_XMM6_Bn);
  auVar31[0xe] = -(pcVar2[0xe] == unaff_XMM6_Bo);
  auVar31[0xf] = -(pcVar2[0xf] == unaff_XMM6_Bp);
  uVar22 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
  if (uVar22 != 0) goto LAB_14083c95b;
  puVar21 = (undefined8 *)(uVar10 + lVar9 + 0x10);
  lVar9 = lVar9 + 0x10;
  goto LAB_14083c8ed;
LAB_14083c95b:
  if (puStack_98[2] == 0) {
    pdb_142ddd4d0(puStack_98,1,puStack_100,CONCAT71((uint7)(byte)(uVar22 >> 8),1));
    pauVar12 = (undefined1 (*) [16])*puStack_98;
    uVar14 = puStack_98[1];
  }
  unaff_R12 = (undefined8 *)((ulonglong)unaff_R12 & uVar14);
  auVar29 = *(undefined1 (*) [16])(*pauVar12 + (longlong)unaff_R12);
  uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar29[0xf] >> 7) << 0xf
  ;
  uVar8 = (uint)uVar22;
  if (uVar22 == 0) {
    lVar9 = 0x10;
    do {
      unaff_R12 = (undefined8 *)((ulonglong)((longlong)unaff_R12 + lVar9) & uVar14);
      auVar29 = *(undefined1 (*) [16])(*pauVar12 + (longlong)unaff_R12);
      lVar9 = lVar9 + 0x10;
      uVar8 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
    } while (uVar8 == 0);
  }
  uVar13 = 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    uVar13 = uVar13 + 1;
  }
  uVar10 = (ulonglong)((ulonglong)uVar13 + (longlong)unaff_R12) & uVar14;
  bVar28 = (*pauVar12)[uVar10];
  if (-1 < (char)bVar28) {
    auVar29 = *pauVar12;
    uVar8 = 0;
    for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
        uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar10 = (ulonglong)uVar8;
    bVar28 = (*pauVar12)[uVar10];
  }
  bVar16 = bVar16 >> 1;
  (*pauVar12)[uVar10] = bVar16;
  pauVar12[1][uVar10 - 0x10 & uVar14] = bVar16;
  puStack_98[2] = puStack_98[2] - (ulonglong)(bVar28 & 1);
  pauVar27 = pauVar12 + uVar10 * -4;
  *(undefined8 **)pauVar12[uVar10 * -4 + -4] = param_1;
  *(undefined8 *)(pauVar27[-4] + 8) = 0;
  *(undefined8 *)pauVar27[-3] = 4;
  *(undefined8 *)(pauVar27[-3] + 8) = 0;
  *(undefined8 *)pauVar27[-2] = 0;
  *(undefined8 *)(pauVar27[-2] + 8) = 0;
  *(undefined8 *)pauVar27[-1] = 0;
  pauVar27[-1][8] = 0;
  puStack_98[3] = puStack_98[3] + 1;
LAB_14083c9f2:
  if (*(ulonglong *)pauVar27[-2] < uStack_d8) {
    pdb_140df4540(&puStack_b8,&uStack_130,*(undefined4 *)((longlong)param_4 + -0x24));
    uStack_a0 = uStack_b0;
    puStack_a8 = puStack_b8;
    *puStack_f8 = uStack_9c;
    lVar9 = *(longlong *)(lStack_c0 + 0x30);
    param_1 = *(undefined8 **)(lStack_c0 + 0x40);
    if (lVar9 == *(longlong *)(lStack_c0 + 0x20)) {
      pdb_142d7e830(lStack_f0);
    }
    lVar15 = *(longlong *)(lStack_c0 + 0x28);
    *(undefined8 **)(lVar15 + lVar9 * 0x18) = param_1;
    *(undefined8 **)(lVar15 + 8 + lVar9 * 0x18) = puStack_a8;
    *(undefined4 *)(lVar15 + 0x10 + lVar9 * 0x18) = uStack_a0;
    *(undefined1 *)(lVar15 + 0x14 + lVar9 * 0x18) = 0;
    *(longlong *)(lStack_c0 + 0x30) = lVar9 + 1;
    *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
  }
  *(ulonglong *)pauVar27[-2] = uStack_d8;
  if (*(ulonglong *)(pauVar27[-2] + 8) < uStack_e0) {
    pdb_140df4540(&puStack_b8,&uStack_130,*(undefined4 *)((longlong)param_4 + -0x24));
    uStack_a0 = uStack_b0;
    puStack_a8 = puStack_b8;
    *puStack_f8 = uStack_9c;
    lVar9 = *(longlong *)(lStack_c0 + 0x30);
    param_1 = *(undefined8 **)(lStack_c0 + 0x40);
    if (lVar9 == *(longlong *)(lStack_c0 + 0x20)) {
      pdb_142d7e830(lStack_f0);
    }
    lVar15 = *(longlong *)(lStack_c0 + 0x28);
    *(undefined8 **)(lVar15 + lVar9 * 0x18) = param_1;
    *(undefined8 **)(lVar15 + 8 + lVar9 * 0x18) = puStack_a8;
    *(undefined4 *)(lVar15 + 0x10 + lVar9 * 0x18) = uStack_a0;
    *(undefined1 *)(lVar15 + 0x14 + lVar9 * 0x18) = 1;
    *(longlong *)(lStack_c0 + 0x30) = lVar9 + 1;
    *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
  }
  *(ulonglong *)(pauVar27[-2] + 8) = uStack_e0;
  plVar17 = plStack_90;
  goto LAB_14083c6bb;
}

