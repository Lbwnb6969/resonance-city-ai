// VA 0x14088ed80, PDB extent 4119 bytes
// system_decorator::decorator_visual::flag_connections::greedily_connect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::flag_connections::greedily_connect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
   Extent: 4119 */

ulonglong *
pdb_14088ed80(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5,byte param_6,float param_7,float param_8,float param_9)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  float fVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte *pbVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  byte *pbVar24;
  ulonglong *puVar25;
  undefined *puVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  uint uVar29;
  ushort uVar30;
  longlong lVar31;
  ulonglong *in_R11;
  ulonglong *puVar32;
  ulonglong *puVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  ulonglong *puVar36;
  undefined *puVar37;
  byte bVar38;
  float fVar39;
  float fVar41;
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar47;
  undefined1 auVar46 [16];
  char unaff_XMM10_Ba;
  char unaff_XMM10_Bb;
  char unaff_XMM10_Bc;
  char unaff_XMM10_Bd;
  char unaff_XMM10_Be;
  char unaff_XMM10_Bf;
  char unaff_XMM10_Bg;
  char unaff_XMM10_Bh;
  char unaff_XMM10_Bi;
  char unaff_XMM10_Bj;
  char unaff_XMM10_Bk;
  char unaff_XMM10_Bl;
  char unaff_XMM10_Bm;
  char unaff_XMM10_Bn;
  char unaff_XMM10_Bo;
  char unaff_XMM10_Bp;
  float fVar48;
  float fVar49;
  float fVar50;
  longlong lStack_188;
  ulonglong *puStack_180;
  ulonglong *puStack_178;
  ulonglong *puStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong *puStack_130;
  undefined *puStack_120;
  ulonglong uStack_118;
  undefined *puStack_110;
  ulonglong *puStack_108;
  ulonglong *puStack_100;
  ulonglong *puStack_f8;
  ulonglong *puStack_f0;
  ulonglong *puStack_e8;
  ulonglong *puStack_e0;
  ulonglong *puStack_d8;
  byte *pbStack_d0;
  undefined1 uStack_c2;
  char cStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puStack_d8 = param_2;
  cStack_c1 = pdb_140e94b40();
  puStack_e0 = param_3;
  if (cStack_c1 == '\0') goto LAB_14088ef9d;
  puVar34 = &UNK_1430127a0;
  puVar22 = (ulonglong *)0x46;
  uVar20 = 0x46;
  lVar15 = pdb_140892540(&UNK_1430127a0);
  if (lVar15 == 1) {
    if (0x46 < uVar20) {
      pdb_142dc8070(&UNK_1430127a0,0x46,0,uVar20,&UNK_1430128c0);
LAB_14088f8d8:
      pdb_142dc8070(&UNK_1430127a0,0x46);
      pcVar5 = (code *)swi(3);
      pbVar17 = (byte *)(*pcVar5)();
      return (ulonglong *)pbVar17;
    }
    puVar34 = &UNK_1430127a0;
    uVar16 = pdb_140892540(&UNK_1430127a0);
    if ((uVar16 & 1) != 0) {
      if (0x46 < uVar20 + 2) goto LAB_14088f8d8;
      puVar22 = (ulonglong *)(0x44 - uVar20);
      puVar34 = &UNK_1430127a2 + uVar20;
    }
  }
  puVar26 = &UNK_14301261b;
  puVar37 = &UNK_1430125da;
  do {
    bVar38 = puVar26[-1];
    uVar14 = (uint)(char)bVar38;
    if ((char)bVar38 < '\0') {
      bVar2 = puVar26[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar26[-3];
        if ((char)bVar3 < -0x40) {
          pbVar17 = puVar26 + -4;
          puVar26 = puVar26 + -4;
          uVar14 = bVar3 & 0x3f | (*pbVar17 & 7) << 6;
        }
        else {
          puVar26 = puVar26 + -3;
          uVar14 = bVar3 & 0xf;
        }
        uVar14 = bVar2 & 0x3f | uVar14 << 6;
      }
      else {
        puVar26 = puVar26 + -2;
        uVar14 = bVar2 & 0x1f;
      }
      uVar14 = (uint)(bVar38 & 0x3f) | uVar14 << 6;
      if (uVar14 != 0x5c) goto LAB_14088eef4;
LAB_14088ef0c:
      puVar37 = puVar26 + -0x1430125d9;
      if ((undefined *)0x41 < puVar37) {
        pdb_142dc8070(&UNK_1430125da,0x41,puVar37,0x41,&UNK_1430128a0);
        puVar23 = param_1;
        goto LAB_14088f89f;
      }
      puVar23 = (ulonglong *)(0x41 - (longlong)puVar37);
      puVar37 = puVar26 + 1;
      goto LAB_14088ef2e;
    }
    puVar26 = puVar26 + -1;
    if (uVar14 == 0x5c) goto LAB_14088ef0c;
LAB_14088eef4:
    if (uVar14 == 0x2f) goto LAB_14088ef0c;
  } while (puVar26 != &UNK_1430125da);
  puVar23 = (ulonglong *)0x41;
LAB_14088ef2e:
  pbVar17 = (byte *)pdb_140e97000();
  if (pbVar17[0x68] != 1) goto LAB_14088f834;
  do {
    if (*(longlong *)pbVar17 == 0) {
      pbVar17[0] = 0xff;
      pbVar17[1] = 0xff;
      pbVar17[2] = 0xff;
      pbVar17[3] = 0xff;
      pbVar17[4] = 0xff;
      pbVar17[5] = 0xff;
      pbVar17[6] = 0xff;
      pbVar17[7] = 0xff;
      pbStack_d0 = pbVar17;
      pdb_140e94f10(pbVar17 + 8,puVar34,puVar22,puVar37,puVar23,1,0);
      *(longlong *)pbStack_d0 = *(longlong *)pbStack_d0 + 1;
LAB_14088ef9d:
      puVar22 = puStack_e0;
      auStack_158._0_8_ = &uStack_c2;
      puVar23 = param_1;
      if ((ulonglong *)0x1 < puStack_e0) {
        if (puStack_e0 < (ulonglong *)0x15) {
          pdb_1414a0b40(puStack_d8,puStack_e0,1,auStack_158);
        }
        else {
LAB_14088f89f:
          pdb_1414e0ab0(puStack_d8,puVar22,auStack_158);
        }
      }
      auStack_158 = ZEXT816(8) << 0x40;
      uStack_148 = 0;
      puVar19 = (ulonglong *)auStack_158;
      pdb_1414950b0(&lStack_188);
      fVar12 = _DAT_142e3788c;
      puVar37 = (undefined *)(ulonglong)param_6;
      puVar32 = puStack_d8 + (longlong)puVar22 * 10;
      puVar22 = puStack_d8;
      puVar36 = (ulonglong *)0x0;
LAB_14088f03e:
      puVar27 = puVar36;
      puVar25 = puVar22;
      puVar36 = puStack_178;
      if (puVar25 != puVar32) {
        puVar28 = (ulonglong *)((longlong)puVar27 + 1);
        puVar22 = puVar25 + 10;
        puVar36 = puVar28;
        in_R11 = puVar27;
        if (*(byte *)((longlong)puVar25 + 0x4d) != 0) {
          puStack_108 = (ulonglong *)((longlong)puVar27 * 3);
          pbVar17 = (byte *)0x0;
          puVar33 = puStack_d8;
          puStack_100 = puVar27;
          puStack_f0 = puVar28;
          puStack_e8 = puVar25 + 10;
LAB_14088f0c0:
          pbVar24 = pbVar17;
          puVar36 = puStack_f0;
          if (puVar28 == (ulonglong *)0x0) {
            puVar22 = puStack_e8;
            puVar19 = puVar33;
            if (puVar33 == puVar32) goto LAB_14088f03e;
          }
          else {
            puVar22 = puStack_e8;
            if ((ulonglong *)
                (((ulonglong)((longlong)puVar32 - (longlong)puVar33) >> 4) * -0x3333333333333333) <=
                puVar28) goto LAB_14088f03e;
            puVar19 = puVar33 + (longlong)puVar28 * 10;
            pbVar24 = pbVar24 + (longlong)puVar28;
          }
          puVar33 = puVar19 + 10;
          pbVar17 = pbVar24 + 1;
          puVar28 = (ulonglong *)0x0;
          if (*(byte *)((longlong)puVar19 + 0x4d) == 1) {
            uVar20 = puVar19[6];
            uVar16 = puVar25[6];
            if ((param_6 != 0) || (puVar28 = (ulonglong *)0x0, uVar20 != uVar16)) {
              fVar42 = *(float *)((longlong)puVar25 + 0x14) - *(float *)((longlong)puVar19 + 0x14);
              fVar47 = (*(float *)(puVar25 + 3) - *(float *)(puVar19 + 3)) *
                       (*(float *)(puVar25 + 3) - *(float *)(puVar19 + 3));
              fVar42 = fVar47 + fVar42 * fVar42 +
                                (*(float *)(puVar25 + 2) - *(float *)(puVar19 + 2)) *
                                (*(float *)(puVar25 + 2) - *(float *)(puVar19 + 2));
              if (((uVar20 != uVar16) && (fVar42 < param_7 * param_7)) ||
                 (((puVar28 = (ulonglong *)0x0, param_9 * param_9 < fVar42 &&
                   (puVar28 = (ulonglong *)0x0, uVar20 == uVar16)) &&
                  (puVar28 = (ulonglong *)0x0, fVar42 < param_8 * param_8)))) {
                fVar42 = SQRT(fVar42);
                unaff_XMM10_Bc = (char)((uint)fVar42 >> 0x10);
                unaff_XMM10_Bd = (char)((uint)fVar42 >> 0x18);
                unaff_XMM10_Bg = (char)((uint)fVar47 >> 0x10);
                unaff_XMM10_Bh = (char)((uint)fVar47 >> 0x18);
                unaff_XMM10_Bk = '\0';
                unaff_XMM10_Bl = '\0';
                fVar43 = fVar42 + fVar12;
                unaff_XMM10_Be = SUB41(fVar47,0);
                unaff_XMM10_Bf = (char)((uint)fVar47 >> 8);
                unaff_XMM10_Bi = '\0';
                unaff_XMM10_Bj = '\0';
                unaff_XMM10_Ba = SUB41(fVar42,0);
                unaff_XMM10_Bb = (char)((uint)fVar42 >> 8);
                cVar13 = unaff_XMM10_Bc;
                cVar9 = unaff_XMM10_Bd;
                cVar10 = unaff_XMM10_Ba;
                cVar11 = unaff_XMM10_Bb;
                if (uVar20 == uVar16) {
                  cVar13 = (char)((uint)fVar43 >> 0x10);
                  cVar9 = (char)((uint)fVar43 >> 0x18);
                  cVar10 = SUB41(fVar43,0);
                  cVar11 = (char)((uint)fVar43 >> 8);
                }
                if (param_6 != 0) {
                  unaff_XMM10_Ba = cVar10;
                  unaff_XMM10_Bb = cVar11;
                  unaff_XMM10_Bc = cVar13;
                  unaff_XMM10_Bd = cVar9;
                }
                pbStack_d0 = pbVar17;
                if (puStack_178 <= in_R11) goto LAB_14088f869;
                puVar22 = puStack_180 + (longlong)puStack_108;
                uVar20 = puStack_180[(longlong)((longlong)puStack_108 + 2)];
                puVar19 = puStack_178;
                if (uVar20 == puStack_180[(longlong)puStack_108]) {
                  pdb_142d7e980(puVar22);
                }
                uVar16 = puVar22[1];
                *(byte **)(uVar16 + uVar20 * 0x10) = pbVar24;
                *(uint *)(uVar16 + 8 + uVar20 * 0x10) =
                     CONCAT13(unaff_XMM10_Bd,
                              CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba)));
                puVar22[2] = uVar20 + 1;
                puVar28 = (ulonglong *)0x0;
                pbVar17 = pbStack_d0;
                in_R11 = puStack_100;
                unaff_XMM10_Bm = unaff_XMM10_Bi;
                unaff_XMM10_Bn = unaff_XMM10_Bj;
                unaff_XMM10_Bo = unaff_XMM10_Bk;
                unaff_XMM10_Bp = unaff_XMM10_Bl;
              }
            }
          }
          goto LAB_14088f0c0;
        }
        goto LAB_14088f03e;
      }
      puVar32 = puStack_180 + (longlong)puStack_178 * 3;
      puStack_f8 = puStack_180;
      for (puVar22 = puStack_180; puVar22 != puVar32; puVar22 = puVar22 + 3) {
        puVar19 = (ulonglong *)puVar22[2];
        auStack_158._0_8_ = &uStack_c2;
        if ((ulonglong *)0x1 < puVar19) {
          if (puVar19 < (ulonglong *)0x15) {
            pdb_1414a0640(puVar22[1],puVar19,1,auStack_158);
          }
          else {
            pdb_1414e0910(puVar22[1],puVar19,auStack_158);
          }
        }
      }
      puStack_120 = (undefined *)0x0;
      uStack_118 = 8;
      puStack_110 = (undefined *)0x0;
      plVar18 = (longlong *)pdb_140f3bda0();
      puVar25 = puStack_e0;
      if ((char)plVar18[2] == '\x01') {
        lStack_138 = *plVar18;
        puVar19 = (ulonglong *)plVar18[1];
      }
      else {
        lStack_138 = pdb_140f4fd10();
        *plVar18 = lStack_138;
        plVar18[1] = (longlong)puVar19;
        *(undefined1 *)(plVar18 + 2) = 1;
      }
      *plVar18 = lStack_138 + 1;
      uStack_148 = _DAT_143012730;
      lStack_140 = _UNK_143012738;
      auStack_158 = _DAT_143012720;
      puVar22 = (ulonglong *)((longlong)puVar25 * 8);
      puStack_130 = puVar19;
      if (puVar25 == (ulonglong *)0x0) {
        pbStack_d0 = (byte *)0x8;
      }
      else {
        pdb_14007ee60();
        pbStack_d0 = pub_1406abae0((ulonglong)puVar22,8);
        if (pbStack_d0 == (byte *)0x0) {
          pdb_142dc7e2a(8,puVar22);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
      fVar47 = _DAT_14300d240;
      fVar42 = _DAT_142e37ad0;
      uVar14 = _DAT_142e377e0;
      fVar12 = _DAT_142e36f28;
      iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                               CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))) ==
                     CONCAT13(unaff_XMM10_Bd,
                              CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))));
      unaff_XMM10_Ba = (char)iVar8;
      unaff_XMM10_Bb = (char)((uint)iVar8 >> 8);
      unaff_XMM10_Bc = (char)((uint)iVar8 >> 0x10);
      unaff_XMM10_Bd = (char)((uint)iVar8 >> 0x18);
      iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                               CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))) ==
                     CONCAT13(unaff_XMM10_Bh,
                              CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))));
      unaff_XMM10_Be = (char)iVar8;
      unaff_XMM10_Bf = (char)((uint)iVar8 >> 8);
      unaff_XMM10_Bg = (char)((uint)iVar8 >> 0x10);
      unaff_XMM10_Bh = (char)((uint)iVar8 >> 0x18);
      iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                               CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))) ==
                     CONCAT13(unaff_XMM10_Bl,
                              CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))));
      unaff_XMM10_Bi = (char)iVar8;
      unaff_XMM10_Bj = (char)((uint)iVar8 >> 8);
      unaff_XMM10_Bk = (char)((uint)iVar8 >> 0x10);
      unaff_XMM10_Bl = (char)((uint)iVar8 >> 0x18);
      iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                               CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))) ==
                     CONCAT13(unaff_XMM10_Bp,
                              CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))));
      unaff_XMM10_Bm = (char)iVar8;
      unaff_XMM10_Bn = (char)((uint)iVar8 >> 8);
      unaff_XMM10_Bo = (char)((uint)iVar8 >> 0x10);
      unaff_XMM10_Bp = (char)((uint)iVar8 >> 0x18);
      puVar19 = puStack_f8;
      puVar27 = (ulonglong *)0x0;
      puStack_e8 = puVar32;
      while (param_1 = puVar27, puVar32 = puStack_d8, puVar19 != puStack_e8) {
        puStack_100 = puVar19 + 3;
        puStack_f0 = (ulonglong *)((longlong)param_1 + 1);
        puVar35 = (undefined8 *)puVar19[1];
        puVar21 = puVar35 + puVar19[2] * 2;
LAB_14088f450:
        puVar19 = puStack_100;
        puVar27 = puStack_f0;
        if (puVar35 != puVar21) {
          if (puVar25 <= param_1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(param_1,puVar25,&UNK_143012620);
          }
          puVar22 = (ulonglong *)*puVar35;
          if (puVar25 <= puVar22) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(puVar22,puVar25,&UNK_143012638);
          }
          puVar35 = puVar35 + 2;
          if (((param_1 != puVar22) &&
              (*(ulonglong *)(pbStack_d0 + (longlong)param_1 * 8) < param_5)) &&
             (*(ulonglong *)(pbStack_d0 + (longlong)puVar22 * 8) < param_5)) {
            fStack_168 = SUB84(puVar22,0);
            fStack_164 = (float)((ulonglong)puVar22 >> 0x20);
            puStack_170 = param_1;
            if (lStack_140 != 0) {
              uVar20 = pdb_14148b350(&lStack_138,&puStack_170);
              bVar38 = (byte)(uVar20 >> 0x39);
              auVar40 = ZEXT216(CONCAT11(bVar38,bVar38));
              auVar40 = pshuflw(auVar40,auVar40,0);
              lVar15 = 0;
              while( true ) {
                uVar20 = uVar20 & auStack_158._8_8_;
                auVar1 = *(undefined1 (*) [16])(auStack_158._0_8_ + uVar20);
                auVar46[0] = -(auVar1[0] == auVar40[0]);
                auVar46[1] = -(auVar1[1] == auVar40[1]);
                auVar46[2] = -(auVar1[2] == auVar40[2]);
                auVar46[3] = -(auVar1[3] == auVar40[3]);
                auVar46[4] = -(auVar1[4] == auVar40[4]);
                auVar46[5] = -(auVar1[5] == auVar40[5]);
                auVar46[6] = -(auVar1[6] == auVar40[6]);
                auVar46[7] = -(auVar1[7] == auVar40[7]);
                auVar46[8] = -(auVar1[8] == auVar40[0]);
                auVar46[9] = -(auVar1[9] == auVar40[1]);
                auVar46[10] = -(auVar1[10] == auVar40[2]);
                auVar46[0xb] = -(auVar1[0xb] == auVar40[3]);
                auVar46[0xc] = -(auVar1[0xc] == auVar40[4]);
                auVar46[0xd] = -(auVar1[0xd] == auVar40[5]);
                auVar46[0xe] = -(auVar1[0xe] == auVar40[6]);
                auVar46[0xf] = -(auVar1[0xf] == auVar40[7]);
                uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar46[0xf] >> 7) << 0xf;
                uVar29 = (uint)uVar30;
                while (puVar25 = puStack_e0, uVar30 != 0) {
                  uVar6 = 0;
                  for (uVar7 = uVar29; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  uVar16 = uVar6 + uVar20 & auStack_158._8_8_;
                  in_R11 = (ulonglong *)(uVar16 * 0x10);
                  lVar31 = auStack_158._0_8_ + uVar16 * -0x10;
                  if ((param_1 == *(ulonglong **)(lVar31 + -0x10)) &&
                     (puVar22 == *(ulonglong **)(lVar31 + -8))) goto LAB_14088f450;
                  uVar30 = (ushort)(uVar29 - 1) & (ushort)uVar29;
                  uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar30);
                }
                auVar44[0] = -(auVar1[0] == unaff_XMM10_Ba);
                auVar44[1] = -(auVar1[1] == unaff_XMM10_Bb);
                auVar44[2] = -(auVar1[2] == unaff_XMM10_Bc);
                auVar44[3] = -(auVar1[3] == unaff_XMM10_Bd);
                auVar44[4] = -(auVar1[4] == unaff_XMM10_Be);
                auVar44[5] = -(auVar1[5] == unaff_XMM10_Bf);
                auVar44[6] = -(auVar1[6] == unaff_XMM10_Bg);
                auVar44[7] = -(auVar1[7] == unaff_XMM10_Bh);
                auVar44[8] = -(auVar1[8] == unaff_XMM10_Bi);
                auVar44[9] = -(auVar1[9] == unaff_XMM10_Bj);
                auVar44[10] = -(auVar1[10] == unaff_XMM10_Bk);
                auVar44[0xb] = -(auVar1[0xb] == unaff_XMM10_Bl);
                auVar44[0xc] = -(auVar1[0xc] == unaff_XMM10_Bm);
                auVar44[0xd] = -(auVar1[0xd] == unaff_XMM10_Bn);
                auVar44[0xe] = -(auVar1[0xe] == unaff_XMM10_Bo);
                auVar44[0xf] = -(auVar1[0xf] == unaff_XMM10_Bp);
                if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar44 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x5f,0) & 1) != 0) || (SUB161(auVar44 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
                uVar20 = uVar20 + lVar15 + 0x10;
                lVar15 = lVar15 + 0x10;
              }
            }
            fVar45 = *(float *)(puVar32 + (longlong)param_1 * 10 + 2);
            fVar43 = *(float *)((longlong)puVar32 + (longlong)param_1 * 0x50 + 0x14);
            fVar4 = *(float *)(puVar32 + (longlong)param_1 * 10 + 3);
            fVar41 = (float)(puStack_d8[(longlong)puVar22 * 10 + 2] >> 0x20);
            fVar39 = (float)puStack_d8[(longlong)puVar22 * 10 + 2];
            fVar48 = fVar45 - fVar39;
            fVar49 = fVar4 - *(float *)(puStack_d8 + (longlong)puVar22 * 10 + 3);
            fVar50 = (float)((uint)(fVar43 - fVar41) & uVar14);
            if (fVar50 + fVar50 <= SQRT(fVar49 * fVar49 + fVar48 * fVar48)) {
              fVar39 = fVar39 - fVar45;
              fVar41 = fVar41 - fVar43;
              fVar43 = *(float *)(puStack_d8 + (longlong)puVar22 * 10 + 3) - fVar4;
              fVar45 = SQRT(fVar43 * fVar43 + fVar41 * fVar41 + fVar39 * fVar39);
              if (fVar42 < fVar45) {
                fStack_160 = fVar12 / fVar45;
                fStack_15c = fVar43 * fStack_160;
                fStack_164 = fVar39 * fStack_160;
                fStack_160 = fVar41 * fStack_160;
                puStack_170 = (ulonglong *)puVar32[(longlong)param_1 * 10 + 2];
                fStack_168 = fVar4;
                cVar13 = pdb_1409eda30(param_4,&puStack_170,fVar45 + fVar47,0x30db);
                puVar34 = puStack_110;
                puVar25 = puStack_e0;
                if (cVar13 == '\0') {
                  puStack_108 = param_1;
                  if (puVar22 < param_1) {
                    puStack_108 = puVar22;
                  }
                  puVar19 = param_1;
                  if (param_1 < puVar22) {
                    puVar19 = puVar22;
                  }
                  if (puStack_110 == puStack_120) {
                    pdb_142d8a210(&puStack_120);
                  }
                  lVar15 = (longlong)puVar34 * 0x10;
                  *(ulonglong **)(uStack_118 + lVar15) = puStack_108;
                  *(ulonglong **)(uStack_118 + 8 + lVar15) = puVar19;
                  puVar37 = puVar34 + 1;
                  puStack_110 = puVar37;
                  pdb_1414b5420(auStack_158,puStack_108,puVar19);
                  *(longlong *)(pbStack_d0 + (longlong)param_1 * 8) =
                       *(longlong *)(pbStack_d0 + (longlong)param_1 * 8) + 1;
                  *(longlong *)(pbStack_d0 + (longlong)puVar22 * 8) =
                       *(longlong *)(pbStack_d0 + (longlong)puVar22 * 8) + 1;
                  puVar25 = puStack_e0;
                }
              }
            }
          }
          goto LAB_14088f450;
        }
      }
      puVar23[2] = (ulonglong)puStack_110;
      *puVar23 = (ulonglong)puStack_120;
      puVar23[1] = uStack_118;
      puVar23[3] = (ulonglong)puVar25;
      puVar23[4] = (ulonglong)pbStack_d0;
      puVar23[5] = (ulonglong)puVar25;
      if (auStack_158._8_8_ != 0) {
        lVar15 = auStack_158._8_8_ * 0x10 + 0x10;
        uVar20 = auStack_158._8_8_ + lVar15 + 0x11;
        if (uVar20 != 0) {
          pub_1406abac0((byte *)(auStack_158._0_8_ - lVar15),uVar20,0x10);
        }
      }
      cVar13 = cStack_c1;
      if (puVar36 != (ulonglong *)0x0) {
        puVar22 = puStack_f8 + 1;
        do {
          if (puVar22[-1] != 0) {
            pub_1406abac0((byte *)*puVar22,puVar22[-1] << 4,8);
          }
          puVar22 = puVar22 + 3;
          puVar36 = (ulonglong *)((longlong)puVar36 + -1);
        } while (puVar36 != (ulonglong *)0x0);
      }
      puVar34 = (undefined *)0x0;
      if (lStack_188 != 0) {
        pub_1406abac0((byte *)puStack_f8,lStack_188 * 0x18,8);
      }
      if (cVar13 == '\0') {
        return puVar23;
      }
      plVar18 = (longlong *)pdb_140e97000();
      if (((char)plVar18[0xd] != '\x01') &&
         (plVar18 = (longlong *)pdb_142dde6e0(plVar18,0), plVar18 == (longlong *)0x0)) break;
      if (*plVar18 == 0) {
        *plVar18 = -1;
        pbStack_d0 = (byte *)plVar18;
        pdb_140e95370(plVar18 + 1);
        *(longlong *)pbStack_d0 = *(longlong *)pbStack_d0 + 1;
        return puVar23;
      }
    }
    pbVar17 = (byte *)pdb_142dc8090(&UNK_14330e608);
LAB_14088f834:
    pbVar17 = (byte *)pdb_142dde6e0(pbVar17,0);
  } while (pbVar17 != (byte *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_14088f869:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(in_R11);
}

