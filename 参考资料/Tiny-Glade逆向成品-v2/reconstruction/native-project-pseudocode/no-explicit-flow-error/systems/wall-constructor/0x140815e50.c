// VA 0x140815e50, PDB extent 10732 bytes
// system_wall_constructor::construct_lintels::construct_lintels
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_lintels::construct_lintels
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/mod.rs
   Extent: 10732 */

void pdb_140815e50(char *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  byte *pbVar1;
  char cVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  ulonglong *puVar25;
  int *piVar26;
  ulonglong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulonglong *puVar30;
  int iVar31;
  ulonglong *puVar32;
  float *pfVar33;
  float *pfVar34;
  byte *pbVar35;
  ulonglong *puVar36;
  char *pcVar37;
  longlong lVar38;
  char *pcVar39;
  char *pcVar40;
  ulonglong *unaff_RDI;
  undefined *puVar41;
  undefined *puVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ushort uVar45;
  ulonglong uVar46;
  longlong lVar47;
  undefined4 *puVar48;
  longlong *plVar49;
  ulonglong *puVar50;
  ulonglong *puVar51;
  longlong *plVar52;
  bool bVar53;
  byte bVar54;
  undefined4 extraout_XMM0_Da;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  float fVar67;
  ulonglong **ppuStack_300;
  char *pcStack_2f8;
  undefined *puStack_2f0;
  longlong lStack_2e8;
  longlong *plStack_2e0;
  undefined4 *puStack_2d8;
  longlong *plStack_2d0;
  undefined8 uStack_2c8;
  undefined4 *puStack_2c0;
  ulonglong *puStack_2b8;
  ulonglong *puStack_2b0;
  ulonglong *puStack_2a8;
  ulonglong *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  longlong lStack_288;
  undefined *puStack_280;
  longlong lStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  longlong lStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  ulonglong **ppuStack_240;
  byte *pbStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  ulonglong uStack_220;
  byte *pbStack_218;
  ulonglong uStack_210;
  longlong lStack_208;
  ulonglong *puStack_200;
  undefined8 uStack_1f8;
  ulonglong *puStack_1f0;
  ulonglong *puStack_1e8;
  longlong *plStack_1e0;
  longlong *plStack_1d8;
  undefined4 *puStack_1d0;
  longlong lStack_1c8;
  byte *pbStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong **ppuStack_1a8;
  char *pcStack_1a0;
  ulonglong *puStack_198;
  char *pcStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  ulonglong **ppuStack_168;
  code *pcStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  float *pfStack_130;
  ulonglong *puStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte *pbStack_118;
  ulonglong *puStack_110;
  undefined1 uStack_101;
  ulonglong *puStack_100;
  char cStack_f3;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar36 = param_2;
  puStack_100 = param_4;
  cStack_f2 = pdb_140e94b40();
  if (cStack_f2 == '\0') goto LAB_140816058;
  plVar52 = (longlong *)0x3d;
  lVar21 = pdb_140818840(0x3d);
  puVar48 = (undefined4 *)&UNK_143008fd0;
  if (lVar21 == 1) {
    if ((ulonglong *)0x3d < puVar36) {
      pdb_142dc8070(&UNK_143008fd0,0x3d,0,puVar36,&UNK_143009088);
LAB_140817d49:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
    uVar22 = pdb_140818840(puVar36);
    if ((uVar22 & 1) != 0) {
      if (0x3d < (longlong)puVar36 + 2U) {
        pdb_142dc8070(&UNK_143008fd0,0x3d,(longlong)puVar36 + 2U,0x3d,&UNK_1430090a0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar52 = (longlong *)(0x3b - (longlong)puVar36);
      puVar48 = (undefined4 *)((longlong)puVar36 + 0x143008fd2);
    }
  }
  puVar41 = &UNK_143008d29;
  plVar49 = (longlong *)&UNK_143008ced;
  do {
    bVar54 = puVar41[-1];
    uVar18 = (uint)(char)bVar54;
    if ((char)bVar54 < '\0') {
      bVar4 = puVar41[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar41[-3];
        if ((char)bVar5 < -0x40) {
          pbVar28 = puVar41 + -4;
          puVar41 = puVar41 + -4;
          uVar18 = bVar5 & 0x3f | (*pbVar28 & 7) << 6;
        }
        else {
          puVar41 = puVar41 + -3;
          uVar18 = bVar5 & 0xf;
        }
        uVar18 = bVar4 & 0x3f | uVar18 << 6;
      }
      else {
        puVar41 = puVar41 + -2;
        uVar18 = bVar4 & 0x1f;
      }
      uVar18 = (uint)(bVar54 & 0x3f) | uVar18 << 6;
      if (uVar18 != 0x5c) goto LAB_140815fc4;
LAB_140815fd5:
      puVar42 = puVar41 + -0x143008cec;
      if ((undefined *)0x3c < puVar42) {
        pdb_142dc8070(&UNK_143008ced,0x3c,puVar42,0x3c,&UNK_143009068);
        pcVar40 = param_1;
        goto LAB_140817d10;
      }
      unaff_RDI = (ulonglong *)(0x3c - (longlong)puVar42);
      plVar49 = (longlong *)(puVar41 + 1);
      goto LAB_140815ff7;
    }
    puVar41 = puVar41 + -1;
    if (uVar18 == 0x5c) goto LAB_140815fd5;
LAB_140815fc4:
    if (uVar18 == 0x2f) goto LAB_140815fd5;
  } while (puVar41 != &UNK_143008ced);
  unaff_RDI = (ulonglong *)0x3c;
LAB_140815ff7:
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_1408178b1;
  do {
    if (*plVar23 == 0) {
      *plVar23 = -1;
      puStack_110 = (ulonglong *)plVar23;
      uStack_1f8 = pdb_140e94f10(plVar23 + 1,puVar48,plVar52,plVar49,unaff_RDI,1,0);
      *puStack_110 = *puStack_110 + 1;
LAB_140816058:
      puStack_110 = param_3;
      puVar24 = (undefined8 *)pdb_1413e4400(*param_5,&UNK_1433056b0);
      if ((puVar24 == (undefined8 *)0x0) ||
         (lVar21 = (**(code **)(puVar24[1] + 0x18))(*puVar24), lVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143008d30);
      }
      cStack_f3 = '\0';
      puStack_2a0 = *(ulonglong **)param_1;
      lVar38 = *(longlong *)(param_1 + 8);
      uVar22 = *puStack_2a0;
      uVar27 = 0;
      uVar44 = uVar22 - *(ulonglong *)(lVar38 + 0x18);
      if (uVar22 < *(ulonglong *)(lVar38 + 0x18)) {
        uVar44 = uVar27;
      }
      uVar43 = uVar22 - *(ulonglong *)(lVar38 + 0x38);
      if (uVar22 < *(ulonglong *)(lVar38 + 0x38)) {
        uVar43 = uVar27;
      }
      puStack_298 = (undefined *)(uVar44 * 0x10 + *(longlong *)(lVar38 + 8));
      uVar22 = *(ulonglong *)(lVar38 + 0x10) - uVar44;
      if (*(ulonglong *)(lVar38 + 0x10) < uVar44) {
        puStack_298 = (undefined *)0x8;
        uVar22 = uVar27;
      }
      lStack_288 = uVar43 * 0x10 + *(longlong *)(lVar38 + 0x28);
      uVar44 = *(ulonglong *)(lVar38 + 0x30) - uVar43;
      if (*(ulonglong *)(lVar38 + 0x30) < uVar43) {
        lStack_288 = 8;
        uVar44 = uVar27;
      }
      lStack_278 = uVar44 + uVar22;
      *puStack_2a0 = *(longlong *)(lVar38 + 0x40) - lStack_278;
      puStack_290 = puStack_298 + uVar22 * 0x10;
      puStack_280 = (undefined *)(uVar44 * 0x10 + lStack_288);
      pdb_140fc81a0(&pcStack_1a0,&puStack_2a0);
      puVar36 = (ulonglong *)*param_2;
      uVar22 = param_2[1];
      uVar44 = *puVar36;
      uVar43 = 0;
      uVar27 = uVar44 - *(ulonglong *)(uVar22 + 0x18);
      if (uVar44 < *(ulonglong *)(uVar22 + 0x18)) {
        uVar27 = uVar43;
      }
      uVar46 = uVar44 - *(ulonglong *)(uVar22 + 0x38);
      if (uVar44 < *(ulonglong *)(uVar22 + 0x38)) {
        uVar46 = uVar43;
      }
      puVar25 = (ulonglong *)(uVar27 * 0x40 + *(longlong *)(uVar22 + 8));
      uVar44 = *(ulonglong *)(uVar22 + 0x10) - uVar27;
      if (*(ulonglong *)(uVar22 + 0x10) < uVar27) {
        puVar25 = (ulonglong *)0x8;
        uVar44 = uVar43;
      }
      puVar32 = (ulonglong *)(uVar46 * 0x40 + *(longlong *)(uVar22 + 0x28));
      uVar27 = *(ulonglong *)(uVar22 + 0x30) - uVar46;
      if (*(ulonglong *)(uVar22 + 0x30) < uVar46) {
        puVar32 = (ulonglong *)0x8;
        uVar27 = uVar43;
      }
      *puVar36 = (*(longlong *)(uVar22 + 0x40) - uVar27) - uVar44;
      puVar50 = puVar25 + uVar44 * 8;
      unaff_RDI = puVar32 + uVar27 * 8;
      lStack_208 = lVar21;
      do {
        pcVar40 = pcStack_190;
        if ((puVar25 == (ulonglong *)0x0) || (puVar25 == puVar50)) {
          if ((puVar32 == (ulonglong *)0x0) || (puVar32 == unaff_RDI)) goto LAB_140816282;
          puVar25 = (ulonglong *)0x0;
          puVar51 = puVar32;
          puVar32 = puVar32 + 8;
        }
        else {
          puVar51 = puVar25;
          puVar25 = puVar25 + 8;
        }
        *puVar36 = *puVar36 + 1;
        uVar22 = puVar51[1];
        if (pcStack_190 == pcStack_1a0) {
          if (puVar25 == (ulonglong *)0x0) {
            if (puVar32 == (ulonglong *)0x0) {
              uVar44 = 0;
            }
            else {
              uVar44 = (ulonglong)((longlong)unaff_RDI - (longlong)puVar32) >> 6;
            }
          }
          else {
            uVar44 = (ulonglong)((longlong)puVar50 - (longlong)puVar25) >> 6;
            if (puVar32 != (ulonglong *)0x0) {
              uVar44 = uVar44 + ((ulonglong)((longlong)unaff_RDI - (longlong)puVar32) >> 6);
            }
          }
          pdb_142d7f1b0(&pcStack_1a0,pcStack_190,uVar44 + 1,8,8);
        }
        puStack_198[(longlong)pcVar40] = uVar22;
        pcStack_190 = pcVar40 + 1;
      } while( true );
    }
LAB_1408178a5:
    plVar23 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1408178b1:
    plVar23 = (longlong *)pdb_142dd9610(plVar23,0);
    if (plVar23 == (longlong *)0x0) {
LAB_1408178c4:
      pbVar29 = (byte *)pdb_142dc7890(&UNK_143307940);
LAB_1408178d0:
      uStack_178 = &pbStack_218;
      pcStack_170 = pdb_140f72a40;
      ppuStack_168 = (ulonglong **)&uStack_220;
      pcStack_160 = pdb_140f72a40;
      pbStack_138 = pbVar29;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433069b0,&uStack_178,&UNK_1433069d0);
    }
  } while( true );
LAB_140816282:
  param_2 = puStack_198;
  param_1 = pcStack_190;
  if ((char *)0x1 < pcStack_190) {
    if (pcStack_190 < (char *)0x15) {
      puVar36 = puStack_198 + 1;
      lVar21 = 8;
      do {
        uVar44 = puVar36[-1];
        uVar22 = *puVar36;
        lVar38 = lVar21;
        if (uVar22 < uVar44) {
          do {
            *(ulonglong *)((longlong)puStack_198 + lVar38) = uVar44;
            puVar25 = puStack_198;
            if (lVar38 == 8) goto LAB_14081781d;
            uVar44 = *(ulonglong *)((longlong)puStack_198 + lVar38 + -0x10);
            lVar38 = lVar38 + -8;
          } while (uVar22 < uVar44);
          puVar25 = (ulonglong *)(lVar38 + (longlong)puStack_198);
LAB_14081781d:
          *puVar25 = uVar22;
        }
        puVar36 = puVar36 + 1;
        lVar21 = lVar21 + 8;
      } while (puVar36 != puStack_198 + (longlong)pcStack_190);
      if (pcStack_190 < (char *)0x2) goto LAB_14081629a;
    }
    else {
LAB_140817d10:
      pdb_140a91360(param_2,pcVar40,&uStack_101);
    }
    pcVar39 = (char *)0x0;
    do {
      if (param_2[(longlong)(pcVar39 + 1)] == param_2[(longlong)pcVar39]) {
        pcVar37 = pcVar39 + 2;
        pcStack_190 = pcVar39 + 1;
        param_1 = pcStack_190;
        if (pcVar37 < pcVar40) {
          if (((int)pcVar40 - (int)pcVar39 & 1U) != 0) {
            if (param_2[(longlong)(pcVar39 + 2)] != param_2[(longlong)pcVar39]) {
              param_2[(longlong)(pcVar39 + 1)] = param_2[(longlong)(pcVar39 + 2)];
              pcStack_190 = pcVar39 + 2;
            }
            pcVar37 = pcVar39 + 3;
          }
          param_1 = pcStack_190;
          if (pcVar40 + -3 != pcVar39) goto LAB_1408179c4;
        }
        break;
      }
      pcVar39 = pcVar39 + 1;
      param_1 = pcVar40;
    } while (pcVar40 + -1 != pcVar39);
  }
  goto LAB_14081629a;
LAB_1408179c4:
  do {
    if (param_2[(longlong)pcVar37] == param_2[(longlong)(pcStack_190 + -1)]) {
      uVar22 = param_2[(longlong)(pcVar37 + 1)];
      if (uVar22 != param_2[(longlong)(pcStack_190 + -1)]) {
LAB_1408179f0:
        param_2[(longlong)pcStack_190] = uVar22;
        pcStack_190 = pcStack_190 + 1;
      }
    }
    else {
      param_2[(longlong)pcStack_190] = param_2[(longlong)pcVar37];
      pcStack_190 = pcStack_190 + 1;
      uVar22 = param_2[(longlong)(pcVar37 + 1)];
      if (uVar22 != param_2[(longlong)(pcStack_190 + -1)]) goto LAB_1408179f0;
    }
    pcVar37 = pcVar37 + 2;
    param_1 = pcStack_190;
  } while (pcVar40 != pcVar37);
LAB_14081629a:
  fVar17 = _DAT_143008c24;
  fVar16 = _UNK_143008c1c;
  fVar15 = _UNK_143008c18;
  fVar14 = _UNK_143008c14;
  fVar13 = _DAT_143008c10;
  fVar12 = _DAT_142f60fec;
  param_3 = param_2 + (longlong)param_1;
  plVar52 = (longlong *)*puStack_110;
  puVar48 = (undefined4 *)puStack_110[2];
  plVar49 = plVar52 + 4;
  uStack_22c = *(undefined4 *)((longlong)puStack_100 + 0x1c);
  plStack_2e0 = (longlong *)*puStack_100;
  puStack_2d8 = (undefined4 *)puStack_100[2];
  uStack_230 = *(undefined4 *)((longlong)puStack_110 + 0x1c);
  uStack_228 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_2c8 = *param_7;
  puStack_2c0 = (undefined4 *)param_7[2];
  puStack_2f0 = (undefined *)(lStack_208 + 0x78);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  unaff_XMM7_Ba = (char)iVar31;
  unaff_XMM7_Bb = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bc = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bd = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  unaff_XMM7_Be = (char)iVar31;
  unaff_XMM7_Bf = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bg = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bh = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  unaff_XMM7_Bi = (char)iVar31;
  unaff_XMM7_Bj = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bk = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bl = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  unaff_XMM7_Bm = (char)iVar31;
  unaff_XMM7_Bn = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bo = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bp = (char)((uint)iVar31 >> 0x18);
  lStack_2e8 = lStack_208 + 0x58;
  plStack_2d0 = plStack_2e0 + 4;
LAB_14081633d:
  if (param_2 != param_3) {
    uStack_210 = *param_2;
    uStack_188 = uStack_210;
    if (plVar52[3] != 0) {
      param_2 = param_2 + 1;
      uVar22 = pdb_1400af0a0(plVar49,&uStack_210);
      lVar21 = *plVar52;
      bVar54 = (byte)(uVar22 >> 0x39);
      auVar57 = ZEXT216(CONCAT11(bVar54,bVar54));
      auVar57 = pshuflw(auVar57,auVar57,0);
      lVar38 = 0;
      while( true ) {
        uVar22 = uVar22 & plVar52[1];
        auVar62 = *(undefined1 (*) [16])(lVar21 + uVar22);
        auVar64[0] = -(auVar62[0] == auVar57[0]);
        auVar64[1] = -(auVar62[1] == auVar57[1]);
        auVar64[2] = -(auVar62[2] == auVar57[2]);
        auVar64[3] = -(auVar62[3] == auVar57[3]);
        auVar64[4] = -(auVar62[4] == auVar57[4]);
        auVar64[5] = -(auVar62[5] == auVar57[5]);
        auVar64[6] = -(auVar62[6] == auVar57[6]);
        auVar64[7] = -(auVar62[7] == auVar57[7]);
        auVar64[8] = -(auVar62[8] == auVar57[0]);
        auVar64[9] = -(auVar62[9] == auVar57[1]);
        auVar64[10] = -(auVar62[10] == auVar57[2]);
        auVar64[0xb] = -(auVar62[0xb] == auVar57[3]);
        auVar64[0xc] = -(auVar62[0xc] == auVar57[4]);
        auVar64[0xd] = -(auVar62[0xd] == auVar57[5]);
        auVar64[0xe] = -(auVar62[0xe] == auVar57[6]);
        auVar64[0xf] = -(auVar62[0xf] == auVar57[7]);
        uVar45 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar45;
        while (uVar45 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar47 = (uVar8 + uVar22 & plVar52[1]) * -0x2b0;
          if (uStack_188 == *(ulonglong *)(lVar21 + -0x2b0 + lVar47)) {
            puStack_110 = (ulonglong *)(lVar21 + lVar47);
            puVar41 = (undefined *)puStack_110[-0x2f];
            if (puVar41 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143305b70);
            }
            LOCK();
            bVar53 = puVar41[0x18] == '\0';
            if (bVar53) {
              puVar41[0x18] = '\x01';
            }
            UNLOCK();
            if (!bVar53) {
              pdb_142dbd1a0(puVar41 + 0x18,CONCAT71((int7)((ulonglong)lVar38 >> 8),1),1000000000);
            }
            pdb_140e9a150(puVar41 + 0x18);
            unaff_RDI = puStack_110;
            plVar23 = plStack_2e0;
            if ((*(longlong *)(puVar41 + 0x10) == 0) ||
               (piVar26 = (int *)(*(longlong *)(puVar41 + 8) + *(longlong *)(puVar41 + 0x10) * 4 +
                                 -4), piVar26 == (int *)0x0)) {
              puVar42 = *(undefined **)(lStack_208 + 0x10);
              if (puVar42 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143305b88);
              }
              iVar31 = (int)puVar42 + -1;
            }
            else {
              iVar31 = *piVar26;
              puVar42 = *(undefined **)(lStack_208 + 0x10);
            }
            puStack_2a0 = *(ulonglong **)(lStack_208 + 8);
            puStack_290 = *(undefined **)(lStack_208 + 0x18);
            lStack_288 = *(longlong *)(lStack_208 + 0x20);
            lStack_278 = *(longlong *)(lStack_208 + 0x28);
            uStack_270 = *(undefined8 *)(lStack_208 + 0x30);
            uStack_258 = *(undefined8 *)(lStack_208 + 0x38);
            puStack_250 = *(undefined **)(lStack_208 + 0x40);
            uStack_248 = CONCAT44(uStack_248._4_4_,iVar31);
            puStack_268 = puStack_2f0;
            lStack_260 = lStack_2e8;
            ppuStack_300 = &puStack_2a0;
            pcStack_2f8 = &cStack_f3;
            puStack_1b8 = (ulonglong *)0x0;
            puStack_1b0 = (ulonglong *)0x8;
            ppuStack_1a8 = (ulonglong **)0x0;
            puStack_298 = puVar42;
            puStack_280 = puVar41;
            if ((char)puStack_110[-1] == '\0') goto LAB_140817310;
            *puStack_2d8 = uStack_22c;
            if (plStack_2e0[3] == 0) goto LAB_14081766e;
            puStack_200 = puStack_110 + -0x55;
            uVar44 = pdb_1400af0a0(plStack_2d0,&uStack_210);
            lVar21 = *plVar23;
            uVar22 = plVar23[1];
            bVar54 = (byte)(uVar44 >> 0x39);
            auVar57 = ZEXT216(CONCAT11(bVar54,bVar54));
            auVar57 = pshuflw(auVar57,auVar57,0);
            lVar38 = 0;
            goto LAB_140816576;
          }
          uVar45 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar45);
        }
        auVar60[0] = -(auVar62[0] == unaff_XMM7_Ba);
        auVar60[1] = -(auVar62[1] == unaff_XMM7_Bb);
        auVar60[2] = -(auVar62[2] == unaff_XMM7_Bc);
        auVar60[3] = -(auVar62[3] == unaff_XMM7_Bd);
        auVar60[4] = -(auVar62[4] == unaff_XMM7_Be);
        auVar60[5] = -(auVar62[5] == unaff_XMM7_Bf);
        auVar60[6] = -(auVar62[6] == unaff_XMM7_Bg);
        auVar60[7] = -(auVar62[7] == unaff_XMM7_Bh);
        auVar60[8] = -(auVar62[8] == unaff_XMM7_Bi);
        auVar60[9] = -(auVar62[9] == unaff_XMM7_Bj);
        auVar60[10] = -(auVar62[10] == unaff_XMM7_Bk);
        auVar60[0xb] = -(auVar62[0xb] == unaff_XMM7_Bl);
        auVar60[0xc] = -(auVar62[0xc] == unaff_XMM7_Bm);
        auVar60[0xd] = -(auVar62[0xd] == unaff_XMM7_Bn);
        auVar60[0xe] = -(auVar62[0xe] == unaff_XMM7_Bo);
        auVar60[0xf] = -(auVar62[0xf] == unaff_XMM7_Bp);
        if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x1f,0) & 1) != 0) || (SUB161(auVar60 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x37,0) & 1) != 0) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') break;
        uVar22 = uVar22 + lVar38 + 0x10;
        lVar38 = lVar38 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143008da8);
  }
  if ((cStack_f3 != '\0') && (*_DAT_143ca8e90 != 0)) {
    puStack_2a0 = (ulonglong *)0x0;
    puStack_298 = &UNK_143008d78;
    puStack_290 = (undefined *)0x2a;
    lStack_288 = 0;
    puStack_280 = &UNK_143008cb0;
    lStack_278 = 0x3c;
    uStack_270 = 1;
    puStack_268 = &UNK_143008d78;
    lStack_260 = 0x2a;
    uStack_258 = 0xf400000001;
    puStack_250 = &UNK_143008d48;
    uStack_248 = 0x61;
    pdb_140f332f0(&uStack_101,&puStack_2a0);
  }
  if (pcStack_1a0 != (char *)0x0) {
    pub_1406abac0((byte *)puStack_198,(longlong)pcStack_1a0 << 3,8);
  }
  if (cStack_f2 == '\0') {
    return;
  }
  plVar23 = (longlong *)pdb_140e97000();
  if (((char)plVar23[0xd] != '\x01') &&
     (plVar23 = (longlong *)pdb_142dd9610(plVar23,0), plVar23 == (longlong *)0x0))
  goto LAB_1408178c4;
  if (*plVar23 == 0) {
    *plVar23 = -1;
    puStack_100 = (ulonglong *)plVar23;
    pdb_140e95370(plVar23 + 1);
    *puStack_100 = *puStack_100 + 1;
    return;
  }
  goto LAB_1408178a5;
LAB_140816576:
  uVar44 = uVar44 & uVar22;
  auVar62 = *(undefined1 (*) [16])(lVar21 + uVar44);
  auVar65[0] = -(auVar62[0] == auVar57[0]);
  auVar65[1] = -(auVar62[1] == auVar57[1]);
  auVar65[2] = -(auVar62[2] == auVar57[2]);
  auVar65[3] = -(auVar62[3] == auVar57[3]);
  auVar65[4] = -(auVar62[4] == auVar57[4]);
  auVar65[5] = -(auVar62[5] == auVar57[5]);
  auVar65[6] = -(auVar62[6] == auVar57[6]);
  auVar65[7] = -(auVar62[7] == auVar57[7]);
  auVar65[8] = -(auVar62[8] == auVar57[0]);
  auVar65[9] = -(auVar62[9] == auVar57[1]);
  auVar65[10] = -(auVar62[10] == auVar57[2]);
  auVar65[0xb] = -(auVar62[0xb] == auVar57[3]);
  auVar65[0xc] = -(auVar62[0xc] == auVar57[4]);
  auVar65[0xd] = -(auVar62[0xd] == auVar57[5]);
  auVar65[0xe] = -(auVar62[0xe] == auVar57[6]);
  auVar65[0xf] = -(auVar62[0xf] == auVar57[7]);
  uVar45 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
  uVar18 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar47 = lVar21 + (uVar8 + uVar44 & uVar22) * -0x20;
    if (uStack_188 == *(ulonglong *)(lVar47 + -0x20)) {
      puVar36 = *(ulonglong **)(lVar47 + -0x10);
      puStack_2a8 = puVar36 + *(longlong *)(lVar47 + -8) * 0x11;
      puStack_1f0 = param_2;
      puStack_1e8 = param_3;
      plStack_1e0 = plVar49;
      plStack_1d8 = plVar52;
      puStack_1d0 = puVar48;
      if (puVar36 == puStack_2a8) goto LAB_140817310;
      goto LAB_140816627;
    }
    uVar45 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar45);
  }
  auVar61[0] = -(auVar62[0] == unaff_XMM7_Ba);
  auVar61[1] = -(auVar62[1] == unaff_XMM7_Bb);
  auVar61[2] = -(auVar62[2] == unaff_XMM7_Bc);
  auVar61[3] = -(auVar62[3] == unaff_XMM7_Bd);
  auVar61[4] = -(auVar62[4] == unaff_XMM7_Be);
  auVar61[5] = -(auVar62[5] == unaff_XMM7_Bf);
  auVar61[6] = -(auVar62[6] == unaff_XMM7_Bg);
  auVar61[7] = -(auVar62[7] == unaff_XMM7_Bh);
  auVar61[8] = -(auVar62[8] == unaff_XMM7_Bi);
  auVar61[9] = -(auVar62[9] == unaff_XMM7_Bj);
  auVar61[10] = -(auVar62[10] == unaff_XMM7_Bk);
  auVar61[0xb] = -(auVar62[0xb] == unaff_XMM7_Bl);
  auVar61[0xc] = -(auVar62[0xc] == unaff_XMM7_Bm);
  auVar61[0xd] = -(auVar62[0xd] == unaff_XMM7_Bn);
  auVar61[0xe] = -(auVar62[0xe] == unaff_XMM7_Bo);
  auVar61[0xf] = -(auVar62[0xf] == unaff_XMM7_Bp);
  if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') {
LAB_14081766e:
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143008dc0);
  }
  uVar44 = uVar44 + lVar38 + 0x10;
  lVar38 = lVar38 + 0x10;
  goto LAB_140816576;
LAB_140816627:
  do {
    ppuStack_240 = ppuStack_1a8;
    uStack_140 = unaff_RDI[-0x3c];
    pfStack_130 = (float *)unaff_RDI[-0x3b];
    uVar22 = unaff_RDI[-0x39];
    uVar44 = unaff_RDI[-0x38];
    uVar27 = unaff_RDI[-0x43];
    uVar43 = unaff_RDI[-0x42];
    uVar46 = unaff_RDI[-0x40];
    uVar6 = unaff_RDI[-0x3f];
    uVar11 = unaff_RDI[-10];
    uStack_f1 = 1;
    puStack_100 = puVar36;
    uVar19 = pdb_1409303b0(puStack_200);
    uStack_178 = (byte **)CONCAT44(extraout_XMM0_Da,uVar19);
    uStack_f1 = 1;
    pdb_1413fb850(&puStack_128,puStack_100,uStack_140,pfStack_130,uVar22,uVar44,uVar27,uVar43,uVar46
                  ,uVar6,(uint)uVar11 < 2,&uStack_178);
    pcStack_160 = (code *)pbStack_118;
    uStack_178 = (byte **)CONCAT44(uStack_11c,uStack_120);
    pbStack_118 = (byte *)0x0;
    pcStack_170 = (code *)(uStack_178 + (longlong)pcStack_160 * 0xd);
    pbStack_158 = (byte *)0x0;
    ppuStack_168 = &puStack_128;
    pdb_1413e7730(&puStack_1b8,&uStack_178);
    uStack_f1 = 1;
    pdb_14049d240(&puStack_128);
    if (ppuStack_1a8 < ppuStack_240) {
      uStack_f1 = 1;
      pdb_142dc8420(ppuStack_240,ppuStack_1a8,ppuStack_1a8,&UNK_143008dd8);
LAB_140817d77:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    puStack_2b0 = puStack_100 + 0x11;
    lVar21 = (longlong)ppuStack_240 * 0x68;
    puVar25 = puStack_1b0 + (longlong)ppuStack_1a8 * 0xd;
    uStack_140 = 0;
    lStack_1c8 = lVar21;
    puVar36 = puStack_1b0 + (longlong)ppuStack_240 * 0xd;
    unaff_RDI = puStack_110;
    while (puVar36 != puVar25) {
      uVar22 = puVar36[2];
      if (uVar22 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14330b4f0);
      }
      uVar44 = puVar36[5];
      if (uVar44 == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14330b508);
      }
      uVar27 = uVar22 - 1 & 0x3fffffffffffffff;
      if (uVar44 <= uVar27) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar44,uVar44,&UNK_14330b520);
      }
      pfStack_130 = (float *)puVar36[1];
      uVar43 = puVar36[4];
      auVar57 = ZEXT416((uint)*(float *)(uVar43 + 4));
      fVar55 = *pfStack_130 + *(float *)(uVar43 + 4);
      pfVar33 = pfStack_130;
      if ((uVar22 & 0x3fffffffffffffff) == 1) {
        uVar22 = 0;
LAB_1408168d4:
        fVar56 = *(float *)(uVar43 + 4 + uVar22 * 0xc);
        uVar18 = -(uint)(fVar55 < *pfVar33 + fVar56);
        auVar58._0_4_ = ~uVar18 & auVar57._0_4_;
        auVar58._4_4_ = 0;
        auVar58._8_4_ = auVar57._8_4_;
        auVar58._12_4_ = auVar57._12_4_;
        auVar57 = auVar58 | ZEXT416((uint)fVar56 & uVar18);
      }
      else {
        uVar27 = uVar27 + 1;
        pfVar34 = (float *)(uVar43 + 0x10);
        uVar22 = 0;
        do {
          fVar59 = *pfVar33 + pfVar34[-3];
          fVar56 = fVar59;
          if (fVar59 <= fVar55) {
            fVar56 = fVar55;
          }
          uVar22 = uVar22 + 2;
          fVar67 = pfVar33[1] + *pfVar34;
          pfVar33 = pfVar33 + 2;
          auVar62._0_4_ =
               ~-(uint)(fVar56 < fVar67) &
               (~-(uint)(fVar55 < fVar59) & auVar57._0_4_ |
               (uint)pfVar34[-3] & -(uint)(fVar55 < fVar59));
          auVar62._4_4_ = 0;
          auVar62._8_4_ = auVar57._8_4_;
          auVar62._12_4_ = auVar57._12_4_;
          auVar57 = ZEXT416(-(uint)(fVar56 < fVar67) & (uint)*pfVar34) | auVar62;
          fVar55 = fVar67;
          if (fVar67 <= fVar56) {
            fVar55 = fVar56;
          }
          pfVar34 = pfVar34 + 6;
        } while ((uVar27 & 0xfffffffffffffffe) != uVar22);
        if ((uVar27 & 1) != 0) goto LAB_1408168d4;
      }
      fVar55 = *(float *)((longlong)unaff_RDI + -0x1c);
      unaff_XMM7_Be = '\0';
      unaff_XMM7_Bf = '\0';
      unaff_XMM7_Bg = '\0';
      unaff_XMM7_Bh = '\0';
      unaff_XMM7_Bi = '\0';
      unaff_XMM7_Bj = '\0';
      unaff_XMM7_Bk = '\0';
      unaff_XMM7_Bl = '\0';
      unaff_XMM7_Bm = '\0';
      unaff_XMM7_Bn = '\0';
      unaff_XMM7_Bo = '\0';
      unaff_XMM7_Bp = '\0';
      fVar56 = *(float *)(unaff_RDI + -4) + _DAT_142e36f50;
      unaff_XMM7_Ba = SUB41(fVar56,0);
      unaff_XMM7_Bb = (char)((uint)fVar56 >> 8);
      unaff_XMM7_Bc = (char)((uint)fVar56 >> 0x10);
      unaff_XMM7_Bd = (char)((uint)fVar56 >> 0x18);
      pdb_14007ee60();
      pbVar28 = pub_1406abab0(uVar44 * 4,4);
      lVar21 = lStack_1c8;
      if (pbVar28 == (byte *)0x0) {
        uStack_f1 = 1;
        pdb_142dc7e2a(4,uVar44 * 4);
        goto LAB_140817d77;
      }
      if (fVar56 <= fVar55) {
        unaff_XMM7_Ba = SUB41(fVar55,0);
        unaff_XMM7_Bb = (char)((uint)fVar55 >> 8);
        unaff_XMM7_Bc = (char)((uint)fVar55 >> 0x10);
        unaff_XMM7_Bd = (char)((uint)fVar55 >> 0x18);
      }
      fVar55 = (float)(~-(uint)NAN(fVar55) &
                       CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) |
                      -(uint)NAN(fVar55) & (uint)fVar56);
      fVar56 = auVar57._0_4_;
      if (uVar44 < 5) {
        uVar22 = 0;
      }
      else if (pbVar28 < (byte *)(uVar44 * 0xc + -4 + uVar43) &&
               (byte *)(uVar43 + 4) < pbVar28 + uVar44 * 4) {
        uVar22 = 0;
      }
      else {
        uVar22 = (ulonglong)((uint)uVar44 & 3);
        if ((uVar44 & 3) == 0) {
          uVar22 = 4;
        }
        uVar22 = uVar44 - uVar22;
        pfVar33 = (float *)(uVar43 + 0x28);
        uVar27 = 0;
        do {
          auVar57._0_4_ = (fVar56 - pfVar33[-9]) + fVar13;
          auVar57._4_4_ = (fVar56 - pfVar33[-6]) + fVar14;
          auVar57._8_4_ = (fVar56 - pfVar33[-3]) + fVar15;
          auVar57._12_4_ = (fVar56 - *pfVar33) + fVar16;
          auVar57 = maxps(auVar57,ZEXT816(0));
          pfVar34 = (float *)(pbVar28 + uVar27 * 4);
          *pfVar34 = auVar57._0_4_ + fVar55;
          pfVar34[1] = auVar57._4_4_ + fVar55;
          pfVar34[2] = auVar57._8_4_ + fVar55;
          pfVar34[3] = auVar57._12_4_ + fVar55;
          uVar27 = uVar27 + 4;
          pfVar33 = pfVar33 + 0xc;
        } while (uVar22 != uVar27);
      }
      puStack_2b8 = puVar36 + 0xd;
      uStack_224 = (int)uStack_140 + 1;
      pfVar33 = (float *)(uVar43 + uVar22 * 0xc + 4);
      do {
        fVar59 = (fVar56 - *pfVar33) + fVar12;
        if (fVar59 <= 0.0) {
          fVar59 = 0.0;
        }
        *(float *)(pbVar28 + uVar22 * 4) = fVar59 + fVar55;
        uVar22 = uVar22 + 1;
        pfVar33 = pfVar33 + 3;
      } while (uVar44 != uVar22);
      if (*puVar36 != 0) {
        pub_1406abac0((byte *)pfStack_130,*puVar36 << 2,4);
      }
      *puVar36 = uVar44;
      puVar36[1] = (ulonglong)pbVar28;
      puVar36[2] = uVar44;
      ppuStack_168 = (ulonglong **)CONCAT44(ppuStack_168._4_4_,(int)puVar36[0xc]);
      pcStack_170 = (code *)puVar36[0xb];
      pbStack_158 = pbVar28 + uVar44 * 4;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_178 = (byte **)puStack_200;
      uStack_f1 = 1;
      pcStack_160 = (code *)pbVar28;
      pdb_1413e8cf0(&puStack_128,&uStack_178);
      pfVar33 = (float *)puVar36[2];
      pfStack_130 = pfVar33;
      if (pfVar33 == (float *)0x0) {
        pbStack_138 = (byte *)0x1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143008ee0);
      }
      pdb_14007ee60();
      pbVar29 = pub_1406abae0((ulonglong)pfVar33,1);
      unaff_RDI = puStack_110;
      pbVar28 = pbStack_118;
      if (pbVar29 == (byte *)0x0) {
        pdb_142dc7e2a(1,pfVar33);
        goto LAB_140817d77;
      }
      *pbVar29 = 8;
      pfVar34 = (float *)(puVar36[2] - 1);
      if (pfVar33 <= pfVar34) {
        pbStack_138 = pbVar29;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar34,pfVar33,&UNK_143008ef8);
      }
      pbVar29[(longlong)pfVar34] = 8;
      uStack_220 = puVar36[2];
      pbStack_218 = (byte *)0x0;
      if (uStack_220 == 1) {
        pbStack_138 = pbVar29;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143306a00);
      }
      if (uStack_220 == 0) goto LAB_1408178d0;
      pbStack_1c0 = pbVar29;
      if (pbStack_118 == (byte *)0x0) {
        pbVar29 = (byte *)0x4;
        pbStack_180 = (byte *)0x0;
      }
      else {
        uVar22 = (longlong)pbStack_118 * 8;
        pdb_14007ee60();
        pbVar29 = pub_1406abab0(uVar22,4);
        if (pbVar29 == (byte *)0x0) {
          pbStack_138 = pbStack_1c0;
          pdb_142dc7e2a(4,uVar22);
          goto LAB_140817d77;
        }
        pbStack_180 = (byte *)0x1;
        pbVar35 = pbVar29;
        if (pbVar28 != (byte *)0x1) {
          pub_142e32780(pbVar29,0,(longlong)pbVar28 * 8 + -8);
          pbVar35 = pbVar29 + (longlong)pbVar28 * 8 + -8;
          pbStack_180 = pbVar28;
        }
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
      }
      pbVar35 = pbStack_1c0;
      uStack_220 = puVar36[2];
      pbStack_218 = (byte *)(uStack_220 - 1);
      pbStack_238 = pbVar29;
      if (uStack_220 == 0) {
        uStack_178 = &pbStack_218;
        pcStack_170 = pdb_140f72a40;
        ppuStack_168 = (ulonglong **)&uStack_220;
        pcStack_160 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1433069b0,&uStack_178,&UNK_1433069d0);
      }
      if (pbStack_218 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143306a00);
      }
      if (pbVar28 <= pbStack_218) goto LAB_140817d49;
      *(int *)(pbVar29 + (longlong)pbStack_218 * 8) = (int)uStack_220 + -2;
      pbVar1 = pbVar29 + (longlong)pbStack_218 * 8 + 4;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0x80;
      pbVar1[3] = 0x3f;
      pbVar1 = (byte *)CONCAT44(uStack_11c,uStack_120);
      pdb_14146dba0(puStack_200,puVar36[1],puVar36[2],puVar36[4],puVar36[5],pbVar1,pbVar28,
                    &ppuStack_300,pbStack_1c0,pfVar33,pbVar29,pbVar28,(int)uStack_140);
      pub_1406abac0(pbStack_238,(longlong)pbStack_180 << 3,4);
      pub_1406abac0(pbVar35,(ulonglong)pfStack_130,1);
      if (puStack_128 != (ulonglong *)0x0) {
        pub_1406abac0(pbVar1,(longlong)puStack_128 * 0xc,4);
      }
      uStack_140 = (ulonglong)uStack_224;
      puVar36 = puStack_2b8;
    }
    iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    unaff_XMM7_Ba = (char)iVar31;
    unaff_XMM7_Bb = (char)((uint)iVar31 >> 8);
    unaff_XMM7_Bc = (char)((uint)iVar31 >> 0x10);
    unaff_XMM7_Bd = (char)((uint)iVar31 >> 0x18);
    iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    unaff_XMM7_Be = (char)iVar31;
    unaff_XMM7_Bf = (char)((uint)iVar31 >> 8);
    unaff_XMM7_Bg = (char)((uint)iVar31 >> 0x10);
    unaff_XMM7_Bh = (char)((uint)iVar31 >> 0x18);
    iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    unaff_XMM7_Bi = (char)iVar31;
    unaff_XMM7_Bj = (char)((uint)iVar31 >> 8);
    unaff_XMM7_Bk = (char)((uint)iVar31 >> 0x10);
    unaff_XMM7_Bl = (char)((uint)iVar31 >> 0x18);
    iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    unaff_XMM7_Bm = (char)iVar31;
    unaff_XMM7_Bn = (char)((uint)iVar31 >> 8);
    unaff_XMM7_Bo = (char)((uint)iVar31 >> 0x10);
    unaff_XMM7_Bp = (char)((uint)iVar31 >> 0x18);
    if (ppuStack_1a8 < ppuStack_240) {
      uStack_f1 = 1;
      pdb_142dc8420(ppuStack_240,ppuStack_1a8,ppuStack_1a8,&UNK_143008df0);
      goto LAB_140817d77;
    }
    puVar50 = puStack_1b0 + (longlong)ppuStack_1a8 * 0xd;
    puVar36 = puStack_100 + 6;
    puVar25 = puStack_100 + 0xc;
    puVar32 = puStack_100 + 9;
    for (puVar51 = (ulonglong *)(lVar21 + (longlong)puStack_1b0); puVar51 != puVar50;
        puVar51 = puVar51 + 0xd) {
      if (puVar51[5] == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143008e08);
      }
      if (puVar51[2] == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143008e20);
      }
      fVar55 = *(float *)puVar51[1] + _DAT_143008c20;
      if (puVar51[5] == 1) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_143008e38);
      }
      if (puVar51[8] == 0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143008e50);
      }
      uVar22 = puVar51[9];
      pfVar33 = (float *)puVar51[4];
      fVar67 = pfVar33[5] - pfVar33[2];
      fVar56 = pfVar33[3] - *pfVar33;
      fVar59 = _DAT_142e36f28 / SQRT(fVar67 * fVar67 + fVar56 * fVar56);
      fVar67 = fVar67 * fVar59;
      fVar59 = fVar59 * fVar56;
      uVar19 = *(undefined4 *)puVar51[7];
      fVar56 = pfVar33[2];
      uStack_178 = *(byte ***)pfVar33;
      pcStack_170._0_4_ = fVar56;
      if (((puStack_100[0xe] == 0) ||
          (puVar30 = (ulonglong *)(puStack_100[0xd] + puStack_100[0xe] * 8 + -8),
          puVar30 == (ulonglong *)0x0)) || (*puVar30 != uVar22)) {
        uVar44 = puStack_100[0xb];
        if (uVar44 == puStack_100[9]) {
          uStack_f1 = 1;
          pdb_142d89720(puVar32);
        }
        *(float *)(puStack_100[10] + uVar44 * 4) = fVar55;
        puStack_100[0xb] = uVar44 + 1;
        uVar44 = puStack_100[8];
        if (uVar44 == puStack_100[6]) {
          uStack_f1 = 1;
          pdb_142d8dbe0(puVar36);
        }
        uVar27 = puStack_100[7];
        lVar21 = uVar44 * 0x1c;
        *(float *)(uVar27 + lVar21) = fVar59;
        *(float *)(uVar27 + 4 + lVar21) = fVar67;
        *(byte ***)(uVar27 + 8 + lVar21) = uStack_178;
        *(float *)(uVar27 + 0x10 + lVar21) = pcStack_170._0_4_;
        *(float *)(uVar27 + 0x14 + lVar21) = fVar55;
        *(undefined4 *)(uVar27 + 0x18 + lVar21) = uVar19;
        puStack_100[8] = uVar44 + 1;
        uVar44 = puStack_100[0xe];
        if (uVar44 == puStack_100[0xc]) {
          uStack_f1 = 1;
          pdb_142d896b0(puVar25);
        }
        *(ulonglong *)(puStack_100[0xd] + uVar44 * 8) = uVar22;
        puStack_100[0xe] = uVar44 + 1;
      }
      else {
        if ((puStack_100[0xb] == 0) ||
           (pfVar33 = (float *)(puStack_100[10] + puStack_100[0xb] * 4 + -4),
           pfVar33 == (float *)0x0)) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007610);
        }
        fVar3 = *pfVar33;
        fVar10 = fVar55;
        if (fVar3 <= fVar55) {
          fVar10 = fVar3;
        }
        *pfVar33 = (float)(~-(uint)NAN(fVar3) & (uint)fVar10 | -(uint)NAN(fVar3) & (uint)fVar55);
        if (puStack_100[8] == 0) {
LAB_140817aaa:
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007628);
        }
        lVar21 = puStack_100[8] * 0x1c;
        if (puStack_100[7] + lVar21 == 0x1c) goto LAB_140817aaa;
        lVar21 = puStack_100[7] + lVar21;
        if (*(float *)(lVar21 + -8) <= fVar55 && fVar55 != *(float *)(lVar21 + -8)) {
          *(float *)(lVar21 + -0x1c) = fVar59;
          *(float *)(lVar21 + -0x18) = fVar67;
          *(byte ***)(lVar21 + -0x14) = uStack_178;
          *(float *)(lVar21 + -0xc) = fVar56;
          *(float *)(lVar21 + -8) = fVar55;
          *(undefined4 *)(lVar21 + -4) = uVar19;
        }
      }
      uVar22 = puVar51[10];
      uStack_f1 = 1;
      lVar21 = pdb_140a0c8f0(puVar51);
      uVar44 = lVar21 - 1;
      if (puVar51[5] <= uVar44) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar44,puVar51[5],&UNK_143008e68);
      }
      pcStack_170 = (code *)CONCAT44(pcStack_170._4_4_,
                                     *(undefined4 *)(puVar51[4] + 8 + uVar44 * 0xc));
      uStack_178 = *(byte ***)(puVar51[4] + uVar44 * 0xc);
      uStack_f1 = 1;
      lVar21 = pdb_140a0c8f0(puVar51);
      if (puVar51[2] <= lVar21 - 1U) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar21 - 1U,puVar51[2],&UNK_143008e80);
      }
      fVar55 = *(float *)((puVar51[1] - 4) + lVar21 * 4) + _DAT_143008c20;
      uStack_f1 = 1;
      lVar21 = pdb_140a0c8f0(puVar51);
      uVar44 = lVar21 - 1;
      if (puVar51[5] <= uVar44) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar44,puVar51[5],&UNK_143008e98);
      }
      fVar56 = *(float *)(puVar51[4] + uVar44 * 0xc);
      fVar59 = *(float *)(puVar51[4] + 8 + uVar44 * 0xc);
      uStack_f1 = 1;
      lVar21 = pdb_140a0c8f0(puVar51);
      uVar44 = lVar21 - 2;
      if (puVar51[5] <= uVar44) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar44,puVar51[5],&UNK_143008eb0);
      }
      fVar56 = fVar56 - *(float *)(puVar51[4] + uVar44 * 0xc);
      fVar59 = fVar59 - *(float *)(puVar51[4] + 8 + uVar44 * 0xc);
      uStack_f1 = 1;
      lVar21 = pdb_140a0c8f0(puVar51);
      if (puVar51[8] <= lVar21 - 1U) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar21 - 1U,puVar51[8],&UNK_143008ec8);
      }
      fVar67 = _DAT_142e36f28 / SQRT(fVar59 * fVar59 + fVar56 * fVar56);
      fVar56 = fVar56 * fVar67;
      fVar67 = fVar67 * fVar59;
      uVar19 = *(undefined4 *)((puVar51[7] - 4) + lVar21 * 4);
      uStack_120 = pcStack_170._0_4_;
      puStack_128 = (ulonglong *)uStack_178;
      if (((puStack_100[0xe] == 0) ||
          (plVar52 = (longlong *)(puStack_100[0xd] + puStack_100[0xe] * 8 + -8),
          plVar52 == (longlong *)0x0)) || (*plVar52 != uVar22 - 1)) {
        uVar44 = puStack_100[0xb];
        if (uVar44 == puStack_100[9]) {
          uStack_f1 = 1;
          pdb_142d89720(puVar32);
        }
        *(float *)(puStack_100[10] + uVar44 * 4) = fVar55;
        puStack_100[0xb] = uVar44 + 1;
        uVar44 = puStack_100[8];
        if (uVar44 == puStack_100[6]) {
          uStack_f1 = 1;
          pdb_142d8dbe0(puVar36);
        }
        uVar27 = puStack_100[7];
        lVar21 = uVar44 * 0x1c;
        *(float *)(uVar27 + lVar21) = fVar56;
        *(float *)(uVar27 + 4 + lVar21) = fVar67;
        *(ulonglong **)(uVar27 + 8 + lVar21) = puStack_128;
        *(undefined4 *)(uVar27 + 0x10 + lVar21) = uStack_120;
        *(float *)(uVar27 + 0x14 + lVar21) = fVar55;
        *(undefined4 *)(uVar27 + 0x18 + lVar21) = uVar19;
        puStack_100[8] = uVar44 + 1;
        uVar44 = puStack_100[0xe];
        if (uVar44 == puStack_100[0xc]) {
          uStack_f1 = 1;
          pdb_142d896b0();
        }
        *(ulonglong *)(puStack_100[0xd] + uVar44 * 8) = uVar22 - 1;
        puStack_100[0xe] = uVar44 + 1;
      }
      else {
        if ((puStack_100[0xb] == 0) ||
           (pfVar33 = (float *)(puStack_100[10] + puStack_100[0xb] * 4 + -4),
           pfVar33 == (float *)0x0)) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007610);
        }
        fVar59 = *pfVar33;
        fVar3 = fVar55;
        if (fVar59 <= fVar55) {
          fVar3 = fVar59;
        }
        *pfVar33 = (float)(~-(uint)NAN(fVar59) & (uint)fVar3 | -(uint)NAN(fVar59) & (uint)fVar55);
        if (puStack_100[8] == 0) {
LAB_140817ac3:
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143007628);
        }
        lVar21 = puStack_100[8] * 0x1c;
        if (puStack_100[7] + lVar21 == 0x1c) goto LAB_140817ac3;
        lVar21 = puStack_100[7] + lVar21;
        if (*(float *)(lVar21 + -8) <= fVar55 && fVar55 != *(float *)(lVar21 + -8)) {
          *(float *)(lVar21 + -0x1c) = fVar56;
          *(float *)(lVar21 + -0x18) = fVar67;
          *(byte ***)(lVar21 + -0x14) = uStack_178;
          *(float *)(lVar21 + -0xc) = pcStack_170._0_4_;
          *(float *)(lVar21 + -8) = fVar55;
          *(undefined4 *)(lVar21 + -4) = uVar19;
        }
      }
      unaff_XMM7_Ba = -1;
      unaff_XMM7_Bb = -1;
      unaff_XMM7_Bc = -1;
      unaff_XMM7_Bd = -1;
      unaff_XMM7_Be = -1;
      unaff_XMM7_Bf = -1;
      unaff_XMM7_Bg = -1;
      unaff_XMM7_Bh = -1;
      unaff_XMM7_Bi = -1;
      unaff_XMM7_Bj = -1;
      unaff_XMM7_Bk = -1;
      unaff_XMM7_Bl = -1;
      unaff_XMM7_Bm = -1;
      unaff_XMM7_Bn = -1;
      unaff_XMM7_Bo = -1;
      unaff_XMM7_Bp = -1;
      unaff_RDI = puStack_110;
    }
    puVar36 = puStack_2b0;
    param_2 = puStack_1f0;
    puVar48 = puStack_1d0;
    plVar49 = plStack_1e0;
    param_3 = puStack_1e8;
    plVar52 = plStack_1d8;
  } while (puStack_2b0 != puStack_2a8);
LAB_140817310:
  *puVar48 = uStack_230;
  if (plVar52[3] == 0) {
LAB_140817655:
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143008f28);
  }
  uVar22 = pdb_1400af0a0(plVar49,&uStack_210);
  lVar21 = *plVar52;
  bVar54 = (byte)(uVar22 >> 0x39);
  auVar57 = ZEXT216(CONCAT11(bVar54,bVar54));
  auVar57 = pshuflw(auVar57,auVar57,0);
  lVar38 = 0;
  while( true ) {
    uVar22 = uVar22 & plVar52[1];
    auVar62 = *(undefined1 (*) [16])(lVar21 + uVar22);
    auVar66[0] = -(auVar62[0] == auVar57[0]);
    auVar66[1] = -(auVar62[1] == auVar57[1]);
    auVar66[2] = -(auVar62[2] == auVar57[2]);
    auVar66[3] = -(auVar62[3] == auVar57[3]);
    auVar66[4] = -(auVar62[4] == auVar57[4]);
    auVar66[5] = -(auVar62[5] == auVar57[5]);
    auVar66[6] = -(auVar62[6] == auVar57[6]);
    auVar66[7] = -(auVar62[7] == auVar57[7]);
    auVar66[8] = -(auVar62[8] == auVar57[0]);
    auVar66[9] = -(auVar62[9] == auVar57[1]);
    auVar66[10] = -(auVar62[10] == auVar57[2]);
    auVar66[0xb] = -(auVar62[0xb] == auVar57[3]);
    auVar66[0xc] = -(auVar62[0xc] == auVar57[4]);
    auVar66[0xd] = -(auVar62[0xd] == auVar57[5]);
    auVar66[0xe] = -(auVar62[0xe] == auVar57[6]);
    auVar66[0xf] = -(auVar62[0xf] == auVar57[7]);
    uVar45 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
    uVar18 = (uint)uVar45;
    if (uVar45 != 0) break;
LAB_1408173a3:
    auVar63[0] = -(auVar62[0] == unaff_XMM7_Ba);
    auVar63[1] = -(auVar62[1] == unaff_XMM7_Bb);
    auVar63[2] = -(auVar62[2] == unaff_XMM7_Bc);
    auVar63[3] = -(auVar62[3] == unaff_XMM7_Bd);
    auVar63[4] = -(auVar62[4] == unaff_XMM7_Be);
    auVar63[5] = -(auVar62[5] == unaff_XMM7_Bf);
    auVar63[6] = -(auVar62[6] == unaff_XMM7_Bg);
    auVar63[7] = -(auVar62[7] == unaff_XMM7_Bh);
    auVar63[8] = -(auVar62[8] == unaff_XMM7_Bi);
    auVar63[9] = -(auVar62[9] == unaff_XMM7_Bj);
    auVar63[10] = -(auVar62[10] == unaff_XMM7_Bk);
    auVar63[0xb] = -(auVar62[0xb] == unaff_XMM7_Bl);
    auVar63[0xc] = -(auVar62[0xc] == unaff_XMM7_Bm);
    auVar63[0xd] = -(auVar62[0xd] == unaff_XMM7_Bn);
    auVar63[0xe] = -(auVar62[0xe] == unaff_XMM7_Bo);
    auVar63[0xf] = -(auVar62[0xf] == unaff_XMM7_Bp);
    if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') goto LAB_140817655;
    uVar22 = uVar22 + lVar38 + 0x10;
    lVar38 = lVar38 + 0x10;
  }
  while( true ) {
    uVar8 = 0;
    for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar47 = (uVar8 + uVar22 & plVar52[1]) * -0x2b0;
    if (uStack_188 == *(ulonglong *)(lVar21 + -0x2b0 + lVar47)) break;
    uVar45 = (ushort)(uVar18 - 1) & (ushort)uVar18;
    uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar45);
    if (uVar45 == 0) goto LAB_1408173a3;
  }
  lVar21 = lVar21 + lVar47;
  puStack_110 = puStack_1b0 + (longlong)ppuStack_1a8 * 0xd;
  puVar36 = puStack_1b0;
  puStack_1f0 = param_2;
  puStack_1e8 = param_3;
  plStack_1e0 = plVar49;
  plStack_1d8 = plVar52;
  puStack_1d0 = puVar48;
  while (puVar25 = puVar36, puVar25 != puStack_110) {
    puStack_100 = puVar25 + 0xd;
    uStack_120 = (undefined4)puVar25[0xc];
    puStack_128 = (ulonglong *)puVar25[0xb];
    while( true ) {
      uStack_f1 = 1;
      pdb_1413f86f0(&uStack_178,&puStack_128);
      pcVar7 = pcStack_170;
      puVar36 = puStack_100;
      if ((int)uStack_178 != 1) break;
      uVar19 = uStack_178._4_4_;
      uStack_f1 = 1;
      uVar44 = pdb_1413f8440(uStack_178._4_4_,(ulonglong)pcStack_170 & 0xffffffff);
      uVar22 = *(ulonglong *)(lVar21 + -0x1a8);
      if (uVar22 <= uVar44) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar44,uVar22,&UNK_143008f40);
      }
      unaff_RDI = *(ulonglong **)(lVar21 + -0x1b0);
      fVar55 = *(float *)((longlong)unaff_RDI + uVar44 * 4);
      unaff_XMM7_Ba = SUB41(fVar55,0);
      unaff_XMM7_Bb = (char)((uint)fVar55 >> 8);
      unaff_XMM7_Bc = (char)((uint)fVar55 >> 0x10);
      unaff_XMM7_Bd = (char)((uint)fVar55 >> 0x18);
      unaff_XMM7_Be = '\0';
      unaff_XMM7_Bf = '\0';
      unaff_XMM7_Bg = '\0';
      unaff_XMM7_Bh = '\0';
      unaff_XMM7_Bi = '\0';
      unaff_XMM7_Bj = '\0';
      unaff_XMM7_Bk = '\0';
      unaff_XMM7_Bl = '\0';
      unaff_XMM7_Bm = '\0';
      unaff_XMM7_Bn = '\0';
      unaff_XMM7_Bo = '\0';
      unaff_XMM7_Bp = '\0';
      uStack_f1 = 1;
      uVar20 = pdb_1413f84c0(puVar25 + 0xb);
      uStack_f1 = 1;
      uVar22 = pdb_1413f86e0(uVar19,(ulonglong)pcVar7 & 0xffffffff,uVar20,uVar22 & 0xffffffff);
      if (puVar25[2] <= uVar22) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar22,puVar25[2],&UNK_143008f58);
      }
      fVar59 = *(float *)(puVar25[1] + uVar22 * 4) + fVar17;
      fVar56 = fVar59;
      if (fVar59 <= fVar55) {
        fVar56 = fVar55;
      }
      *(uint *)((longlong)unaff_RDI + uVar44 * 4) =
           ~-(uint)NAN(fVar55) & (uint)fVar56 | -(uint)NAN(fVar55) & (uint)fVar59;
    }
  }
  uStack_f1 = 1;
  pdb_14007e770(lVar21 + -0x120,ppuStack_1a8);
  uStack_f1 = 1;
  pdb_140b2e4a0(lVar21 + -0x120);
  *puStack_2c0 = uStack_228;
  ppuStack_168 = ppuStack_1a8;
  uStack_178 = (byte **)puStack_1b8;
  pcStack_170 = (code *)puStack_1b0;
  uStack_f1 = 0;
  pdb_141406d30(&puStack_128,uStack_2c8,uStack_188,&uStack_178);
  if (!SBORROW8(0,(longlong)puStack_128)) {
    uStack_f1 = 0;
    pdb_14049d240(&puStack_128);
  }
  param_1 = puStack_280 + 0x18;
  pdb_140e9a350();
  puVar48 = puStack_1d0;
  plVar52 = plStack_1d8;
  plVar49 = plStack_1e0;
  param_3 = puStack_1e8;
  param_2 = puStack_1f0;
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  unaff_XMM7_Ba = (char)iVar31;
  unaff_XMM7_Bb = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bc = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bd = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  unaff_XMM7_Be = (char)iVar31;
  unaff_XMM7_Bf = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bg = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bh = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  unaff_XMM7_Bi = (char)iVar31;
  unaff_XMM7_Bj = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bk = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bl = (char)((uint)iVar31 >> 0x18);
  iVar31 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  unaff_XMM7_Bm = (char)iVar31;
  unaff_XMM7_Bn = (char)((uint)iVar31 >> 8);
  unaff_XMM7_Bo = (char)((uint)iVar31 >> 0x10);
  unaff_XMM7_Bp = (char)((uint)iVar31 >> 0x18);
  LOCK();
  cVar2 = *param_1;
  if (cVar2 == '\x01') {
    *param_1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    pdb_142dbcef0(param_1,0);
  }
  goto LAB_14081633d;
}

