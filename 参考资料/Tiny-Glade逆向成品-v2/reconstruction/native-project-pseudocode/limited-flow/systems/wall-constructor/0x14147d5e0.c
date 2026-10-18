// VA 0x14147d5e0, PDB extent 9334 bytes
// system_wall_constructor::construct_elevation_supports::rectangle_large_brackets::construct_rectangle_large_brackets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_large_brackets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::rectangle_large_brackets::construct_rectangle_large_brackets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_large_brackets.rs
   Extent: 9334 */

longlong *
pdb_14147d5e0(undefined8 param_1,ulonglong param_2,longlong param_3,byte *param_4,undefined *param_5
             ,longlong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 (**ppauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined *puVar30;
  undefined *puVar31;
  byte *pbVar32;
  ushort uVar33;
  ulonglong uVar34;
  undefined1 (*pauVar35) [16];
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uVar38;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar46;
  float fVar47;
  float fVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  char cVar53;
  char cVar54;
  char cVar55;
  float fVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  undefined1 auVar52 [16];
  float fVar68;
  undefined *in_stack_fffffffffffffbb8;
  undefined1 auStack_430 [40];
  longlong lStack_408;
  longlong lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  longlong lStack_3e8;
  undefined1 auStack_3e0 [16];
  longlong lStack_3d0;
  longlong lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  int iStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  longlong lStack_360;
  byte *pbStack_358;
  undefined *puStack_350;
  longlong lStack_348;
  byte *pbStack_340;
  undefined *puStack_338;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined1 auStack_2d0 [8];
  float fStack_2c8;
  undefined8 uStack_2c4;
  float fStack_2bc;
  undefined1 (*pauStack_2b8) [16];
  ulonglong uStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  ulonglong uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  ulonglong *puStack_268;
  longlong lStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 (*pauStack_248) [16];
  ulonglong uStack_240;
  undefined8 uStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_200;
  uint uStack_1fc;
  ulonglong *puStack_1f8;
  undefined *puStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  ulonglong *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  byte *pbStack_188;
  ulonglong uStack_180;
  undefined4 uStack_178;
  longlong lStack_150;
  ulonglong *puStack_148;
  longlong lStack_140;
  undefined1 (**ppauStack_138) [16];
  int *piStack_130;
  ulonglong uStack_128;
  undefined *puStack_120;
  longlong *plStack_118;
  ulonglong uStack_110;
  undefined *puStack_108;
  byte *pbStack_100;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_278 = param_1;
  uStack_258 = param_1;
  uStack_128 = param_2;
  plStack_118 = (longlong *)param_3;
  uVar13 = pdb_140e94b40();
  uVar34 = (ulonglong)uVar13;
  if ((char)uVar13 == '\0') goto LAB_14147d7f8;
  ppauVar28 = (undefined1 (**) [16])0x73;
  lVar14 = pdb_14147fa60(0x73);
  puVar36 = &UNK_14330cb60;
  if (lVar14 == 1) {
    if (0x73 < param_2) {
LAB_14147edd2:
      pdb_142dc8070(&UNK_14330cb60,0x73,0);
LAB_14147edf2:
      pdb_142dc8070(&UNK_14330cb60,0x73);
      pcVar5 = (code *)swi(3);
      plVar20 = (longlong *)(*pcVar5)();
      return plVar20;
    }
    uVar15 = pdb_14147fa60(param_2);
    if ((uVar15 & 1) != 0) {
      if (0x73 < param_2 + 2) goto LAB_14147edf2;
      ppauVar28 = (undefined1 (**) [16])(0x71 - param_2);
      puVar36 = &UNK_14330cb62 + param_2;
    }
  }
  puVar30 = &UNK_14330ca11;
  puVar37 = &UNK_14330c9b5;
  do {
    bVar12 = puVar30[-1];
    uVar13 = (uint)(char)bVar12;
    if ((char)bVar12 < '\0') {
      bVar2 = puVar30[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar30[-3];
        if ((char)bVar3 < -0x40) {
          pbVar16 = puVar30 + -4;
          puVar30 = puVar30 + -4;
          uVar13 = bVar3 & 0x3f | (*pbVar16 & 7) << 6;
        }
        else {
          puVar30 = puVar30 + -3;
          uVar13 = bVar3 & 0xf;
        }
        uVar13 = bVar2 & 0x3f | uVar13 << 6;
      }
      else {
        puVar30 = puVar30 + -2;
        uVar13 = bVar2 & 0x1f;
      }
      uVar13 = (uint)(bVar12 & 0x3f) | uVar13 << 6;
      if (uVar13 != 0x5c) goto LAB_14147d764;
LAB_14147d775:
      puVar31 = puVar30 + -0x14330c9b4;
      if (puVar31 < (undefined *)0x5d) {
        puVar31 = (undefined *)(0x5c - (longlong)puVar31);
        puVar37 = puVar30 + 1;
        goto LAB_14147d797;
      }
      pdb_142dc8070(&UNK_14330c9b5,0x5c,puVar31,0x5c,&UNK_14330cc30);
      goto LAB_14147edd2;
    }
    puVar30 = puVar30 + -1;
    if (uVar13 == 0x5c) goto LAB_14147d775;
LAB_14147d764:
    if (uVar13 == 0x2f) goto LAB_14147d775;
  } while (puVar30 != &UNK_14330c9b5);
  puVar31 = (undefined *)0x5c;
LAB_14147d797:
  pbVar16 = (byte *)pdb_140e97000();
  if (pbVar16[0x68] != 1) goto LAB_14147ed45;
  do {
    if (*(longlong *)pbVar16 == 0) {
      pbVar16[0] = 0xff;
      pbVar16[1] = 0xff;
      pbVar16[2] = 0xff;
      pbVar16[3] = 0xff;
      pbVar16[4] = 0xff;
      pbVar16[5] = 0xff;
      pbVar16[6] = 0xff;
      pbVar16[7] = 0xff;
      pbStack_100 = pbVar16;
      uStack_1b0 = pdb_140e94f10(pbVar16 + 8,puVar36,ppauVar28,puVar37,puVar31,1,0);
      *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
      in_stack_fffffffffffffbb8 = puVar31;
LAB_14147d7f8:
      cStack_f2 = (char)uVar34;
      puVar17 = (undefined8 *)pdb_1413e4400(param_7,&UNK_1433056b0);
      if ((puVar17 == (undefined8 *)0x0) ||
         (lVar14 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330ca18);
      }
      lVar22 = *(longlong *)(uStack_128 + 0x140);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b70);
      }
      LOCK();
      bVar39 = *(char *)(lVar22 + 0x18) == '\0';
      if (bVar39) {
        *(char *)(lVar22 + 0x18) = '\x01';
      }
      UNLOCK();
      if (!bVar39) {
        pdb_142dbd1a0(lVar22 + 0x18,1,1000000000);
      }
      pdb_140e9a150(lVar22 + 0x18);
      if ((*(longlong *)(lVar22 + 0x10) == 0) ||
         (piVar18 = (int *)(*(longlong *)(lVar22 + 8) + *(longlong *)(lVar22 + 0x10) * 4 + -4),
         piVar18 == (int *)0x0)) {
        lVar19 = *(longlong *)(lVar14 + 0x10);
        if (lVar19 == 0) goto LAB_14147ed65;
        iStack_3b0 = (int)lVar19 + -1;
      }
      else {
        iStack_3b0 = *piVar18;
        lVar19 = *(longlong *)(lVar14 + 0x10);
      }
      lVar26 = *(longlong *)(lVar14 + 8);
      uStack_3f8 = *(undefined8 *)(lVar14 + 0x18);
      uStack_3f0 = *(undefined8 *)(lVar14 + 0x20);
      auVar49 = *(undefined1 (*) [16])(lVar14 + 0x28);
      lStack_3d0 = lVar14 + 0x78;
      lStack_3c8 = lVar14 + 0x58;
      uStack_3c0 = *(undefined8 *)(lVar14 + 0x38);
      uStack_3b8 = *(undefined8 *)(lVar14 + 0x40);
      lStack_408 = lVar26;
      lStack_400 = lVar19;
      lStack_3e8 = lVar22;
      auStack_3e0 = auVar49;
      plVar20 = (longlong *)pdb_140f3bda0();
      if ((char)plVar20[2] == '\x01') {
        lStack_228 = *plVar20;
        lVar26 = plVar20[1];
      }
      else {
        lStack_228 = pdb_140f4fd10();
        *plVar20 = lStack_228;
        plVar20[1] = lVar26;
        *(undefined1 *)(plVar20 + 2) = 1;
      }
      *plVar20 = lStack_228 + 1;
      lVar14 = _UNK_14330caf8;
      uVar38 = _DAT_14330caf0;
      uVar15 = _UNK_14330cae8;
      pauVar35 = _DAT_14330cae0;
      uStack_238 = _DAT_14330caf0;
      lStack_230 = _UNK_14330caf8;
      pauStack_248 = _DAT_14330cae0;
      uStack_240 = _UNK_14330cae8;
      lStack_220 = lVar26;
      plVar20 = (longlong *)pdb_140f3bda0();
      if ((char)plVar20[2] == '\x01') {
        lStack_298 = *plVar20;
        lVar26 = plVar20[1];
      }
      else {
        lStack_298 = pdb_140f4fd10();
        *plVar20 = lStack_298;
        plVar20[1] = lVar26;
        *(undefined1 *)(plVar20 + 2) = 1;
      }
      *plVar20 = lStack_298 + 1;
      uStack_2a8 = uVar38;
      lStack_2a0 = lVar14;
      pauStack_2b8 = pauVar35;
      uStack_2b0 = uVar15;
      puVar36 = param_5 + param_6 * 0x50;
      ppauVar28 = &pauStack_2b8;
      lStack_290 = lVar26;
      for (puVar31 = param_5; puVar31 != puVar36; puVar31 = puVar31 + 0x50) {
        pdb_1403b05d0(ppauVar28,*(undefined8 *)(puVar31 + 0x38));
      }
      uStack_378 = *(undefined8 *)((longlong)plStack_118 + 8);
      uStack_370 = 0;
      uStack_1d0 = *(undefined4 *)((longlong)plStack_118 + 0x10);
      uStack_1cc = *(undefined4 *)((longlong)plStack_118 + 0x14);
      puVar37 = param_5;
      puStack_120 = puVar36;
      if (param_5 != puVar36) {
LAB_14147d9e6:
        puStack_280 = puVar37 + 0x38;
        uVar34 = *(ulonglong *)(puVar37 + 0x38);
        puStack_1f0 = puStack_280;
        puStack_108 = puVar37;
        lVar14 = pdb_140b54f80(param_4,uVar34,&UNK_14330ca30);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330ca48);
        }
        piStack_130 = (int *)pdb_14092f900(lVar14);
        lStack_150 = 0;
        puStack_148 = (ulonglong *)0x4;
        lStack_140 = 0;
        lStack_260 = lVar14;
        if (lStack_230 != 0) {
          uStack_f1 = 1;
          uVar15 = pdb_1413f0640(&lStack_228,&puStack_280);
          bVar12 = (byte)(uVar15 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar12,bVar12));
          auVar44 = pshuflw(auVar49,auVar49,0);
          lVar14 = 0;
          while( true ) {
            uVar15 = uVar15 & uStack_240;
            auVar49 = *(undefined1 (*) [16])(*pauStack_248 + uVar15);
            auVar48[0] = -(auVar49[0] == auVar44[0]);
            cVar11 = auVar49[1];
            auVar48[1] = -(cVar11 == auVar44[1]);
            cVar53 = auVar49[2];
            auVar48[2] = -(cVar53 == auVar44[2]);
            cVar54 = auVar49[3];
            auVar48[3] = -(cVar54 == auVar44[3]);
            cVar55 = auVar49[4];
            auVar48[4] = -(cVar55 == auVar44[4]);
            cVar57 = auVar49[5];
            auVar48[5] = -(cVar57 == auVar44[5]);
            cVar58 = auVar49[6];
            auVar48[6] = -(cVar58 == auVar44[6]);
            cVar59 = auVar49[7];
            auVar48[7] = -(cVar59 == auVar44[7]);
            cVar60 = auVar49[8];
            auVar48[8] = -(cVar60 == auVar44[0]);
            cVar61 = auVar49[9];
            auVar48[9] = -(cVar61 == auVar44[1]);
            cVar62 = auVar49[10];
            auVar48[10] = -(cVar62 == auVar44[2]);
            cVar63 = auVar49[0xb];
            auVar48[0xb] = -(cVar63 == auVar44[3]);
            cVar64 = auVar49[0xc];
            auVar48[0xc] = -(cVar64 == auVar44[4]);
            cVar65 = auVar49[0xd];
            auVar48[0xd] = -(cVar65 == auVar44[5]);
            cVar66 = auVar49[0xe];
            cVar67 = auVar49[0xf];
            auVar48[0xe] = -(cVar66 == auVar44[6]);
            auVar48[0xf] = -(cVar67 == auVar44[7]);
            uVar33 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar48[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar33;
            while (uVar33 != 0) {
              uVar6 = 0;
              for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (uVar34 == **(ulonglong **)
                              ((longlong)pauStack_248 + (uVar6 + uVar15 & uStack_240) * -8 + -8))
              goto LAB_14147dc4b;
              uVar33 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar33);
            }
            auVar49[0] = -(auVar49[0] == -1);
            auVar49[1] = -(cVar11 == -1);
            auVar49[2] = -(cVar53 == -1);
            auVar49[3] = -(cVar54 == -1);
            auVar49[4] = -(cVar55 == -1);
            auVar49[5] = -(cVar57 == -1);
            auVar49[6] = -(cVar58 == -1);
            auVar49[7] = -(cVar59 == -1);
            auVar49[8] = -(cVar60 == -1);
            auVar49[9] = -(cVar61 == -1);
            auVar49[10] = -(cVar62 == -1);
            auVar49[0xb] = -(cVar63 == -1);
            auVar49[0xc] = -(cVar64 == -1);
            auVar49[0xd] = -(cVar65 == -1);
            auVar49[0xe] = -(cVar66 == -1);
            auVar49[0xf] = -(cVar67 == -1);
            if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar49 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x3f,0) & 1) != 0) || (SUB161(auVar49 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
            uVar15 = uVar15 + lVar14 + 0x10;
            lVar14 = lVar14 + 0x10;
          }
        }
        if ((char)*piStack_130 != '\0') {
          piVar18 = piStack_130 + 1;
          uVar15 = 0;
          auVar44 = auVar49;
          while (auVar49 = auVar44, uVar27 = uVar15, uVar27 < 4) {
            uStack_f1 = 1;
            auVar45._0_8_ = pdb_140df3e10(piVar18,uVar27);
            auVar45._8_8_ = extraout_XMM0_Qb;
            uStack_f1 = 1;
            auVar44 = auVar45;
            cVar11 = pdb_140df1700(plStack_118,auVar45._0_8_,auVar49._0_8_);
            uVar15 = uVar27 + 1;
            if (cVar11 != '\0') {
              uStack_f1 = 1;
              uVar40 = pdb_140df0700(piVar18,uVar27);
              uStack_f1 = 1;
              uVar41 = pdb_140df1dc0(piVar18,uVar27);
              lVar14 = lStack_140;
              auVar48 = auVar44;
              if (lStack_140 == lStack_150) {
                uStack_f1 = 1;
                pdb_142d8d5c0(&lStack_150);
              }
              *(int *)((longlong)puStack_148 + lVar14 * 0x14) = (int)auVar45._0_8_;
              *(int *)((longlong)puStack_148 + lVar14 * 0x14 + 4) = auVar49._0_4_;
              *(undefined4 *)((longlong)puStack_148 + lVar14 * 0x14 + 8) = uVar40;
              *(undefined4 *)((longlong)puStack_148 + lVar14 * 0x14 + 0xc) = uVar41;
              *(int *)((longlong)puStack_148 + lVar14 * 0x14 + 0x10) = auVar44._0_4_;
              lStack_140 = lVar14 + 1;
              auVar44 = auVar48;
            }
          }
        }
        uStack_f1 = 1;
        pdb_1414078a0(&pauStack_248,puStack_1f0);
LAB_14147dc4b:
        if (*piStack_130 == 0) {
          uVar27 = *(ulonglong *)(puStack_108 + 0x10);
          uVar15 = uVar27 * 8;
          if (0x7ffffffffffffffc < uVar15 || uVar27 >> 0x3d != 0) {
            uVar38 = 0;
LAB_14147ebe4:
            uStack_f1 = 1;
            pdb_142dc7e2a(uVar38,uVar15);
            goto LAB_14147edad;
          }
          uVar23 = *(undefined8 *)(puStack_108 + 8);
          if (uVar15 == 0) {
            pbStack_100 = (byte *)0x4;
            uStack_110 = 0;
            uVar24 = uStack_110;
          }
          else {
            pdb_14007ee60();
            uVar38 = 4;
            pbStack_100 = pub_1406abab0(uVar15,4);
            uVar24 = uVar27;
            if (pbStack_100 == (byte *)0x0) goto LAB_14147ebe4;
          }
          uStack_110 = uVar24;
          if (uVar27 != 0) {
            pub_142e32760(pbStack_100,uVar23);
          }
          uVar15 = *(ulonglong *)(puStack_108 + 0x28);
          ppauVar28 = (undefined1 (**) [16])(uVar15 * 4);
          ppauStack_138 = ppauVar28;
          if ((undefined1 (**) [16])0x7ffffffffffffffc < ppauVar28 || uVar15 >> 0x3e != 0) {
            uVar38 = 0;
LAB_14147ec19:
            pdb_142dc7e2a(uVar38,ppauStack_138);
            goto LAB_14147edad;
          }
          if (ppauVar28 == (undefined1 (**) [16])0x0) {
            pbVar16 = (byte *)0x4;
          }
          else {
            puVar4 = *(undefined4 **)(puStack_108 + 0x20);
            pdb_14007ee60();
            uVar38 = 4;
            pbVar16 = pub_1406abab0((ulonglong)ppauVar28,4);
            if (pbVar16 == (byte *)0x0) goto LAB_14147ec19;
            puVar36 = puStack_120;
            if (uVar15 != 0) {
              uVar24 = uVar15 - 1;
              if (uVar15 < uVar15 - 1) {
                uVar24 = uVar15;
              }
              if (uVar24 < 8) {
                lVar14 = 0;
                uVar24 = uVar15;
                puVar25 = puVar4;
              }
              else {
                uVar24 = uVar24 + 1;
                uVar21 = (ulonglong)((uint)uVar24 & 7);
                if ((uVar24 & 7) == 0) {
                  uVar21 = 8;
                }
                lVar14 = uVar24 - uVar21;
                uVar24 = uVar15 - lVar14;
                puVar25 = puVar4 + lVar14;
                lVar22 = 0;
                do {
                  uVar38 = *(undefined8 *)((longlong)(puVar4 + lVar22) + 8);
                  auVar49 = *(undefined1 (*) [16])(puVar4 + lVar22 + 4);
                  *(undefined8 *)(pbVar16 + lVar22 * 4) = *(undefined8 *)(puVar4 + lVar22);
                  *(undefined8 *)(pbVar16 + lVar22 * 4 + 8) = uVar38;
                  *(undefined1 (*) [16])(pbVar16 + lVar22 * 4 + 0x10) = auVar49;
                  lVar22 = lVar22 + 8;
                } while (lVar14 != lVar22);
              }
              pbVar32 = pbVar16 + lVar14 * 4;
              do {
                if (puVar25 == puVar4 + uVar15) break;
                uVar40 = *puVar25;
                puVar25 = puVar25 + 1;
                *(undefined4 *)pbVar32 = uVar40;
                pbVar32 = pbVar32 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          uVar24 = uStack_110;
          uStack_178 = *(undefined4 *)(puStack_108 + 0x30);
          uStack_1a0 = (code *)pbStack_100;
          uStack_1a8 = (float *)uStack_110;
          uStack_198 = uVar27;
          uStack_190 = uVar15;
          pbStack_188 = pbVar16;
          uStack_180 = uVar15;
          pdb_1413f9210(&lStack_360,&uStack_1a8,_DAT_14330c8a0);
          if (uVar24 != 0) {
            pub_1406abac0(pbStack_100,uVar24 << 3,4);
          }
          ppauVar28 = ppauStack_138;
          puVar37 = puStack_108;
          if (uVar15 == 0) goto LAB_14147e19a;
        }
        else {
          uVar27 = *(ulonglong *)(puStack_108 + 0x10);
          uVar15 = uVar27 * 8;
          if (0x7ffffffffffffffc < uVar15 || uVar27 >> 0x3d != 0) {
            uVar38 = 0;
LAB_14147ebc9:
            uStack_f1 = 1;
            pdb_142dc7e2a(uVar38,uVar15);
            goto LAB_14147edad;
          }
          uVar23 = *(undefined8 *)(puStack_108 + 8);
          if (uVar15 == 0) {
            pbStack_100 = (byte *)0x4;
            uVar24 = 0;
          }
          else {
            pdb_14007ee60();
            uVar38 = 4;
            pbStack_100 = pub_1406abab0(uVar15,4);
            uVar24 = uVar27;
            if (pbStack_100 == (byte *)0x0) goto LAB_14147ebc9;
          }
          if (uVar27 != 0) {
            pub_142e32760(pbStack_100,uVar23,uVar15);
          }
          uVar21 = *(ulonglong *)(puStack_108 + 0x28);
          uVar15 = uVar21 * 4;
          if (0x7ffffffffffffffc < uVar15 || uVar21 >> 0x3e != 0) {
            uVar38 = 0;
            uStack_110 = uVar24;
LAB_14147ec06:
            pdb_142dc7e2a(uVar38,uVar15);
LAB_14147edad:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar15 == 0) {
            pbVar16 = (byte *)0x4;
            uStack_1a8 = (float *)uVar24;
          }
          else {
            puVar4 = *(undefined4 **)(puStack_108 + 0x20);
            uStack_110 = uVar24;
            pdb_14007ee60();
            uVar38 = 4;
            pbVar16 = pub_1406abab0(uVar15,4);
            if (pbVar16 == (byte *)0x0) goto LAB_14147ec06;
            puVar36 = puStack_120;
            uStack_1a8 = (float *)uStack_110;
            if (uVar21 != 0) {
              uVar15 = uVar21 - 1;
              if (uVar21 < uVar21 - 1) {
                uVar15 = uVar21;
              }
              if (uVar15 < 8) {
                lVar14 = 0;
                uVar15 = uVar21;
                puVar25 = puVar4;
              }
              else {
                uVar15 = uVar15 + 1;
                uVar24 = (ulonglong)((uint)uVar15 & 7);
                if ((uVar15 & 7) == 0) {
                  uVar24 = 8;
                }
                lVar14 = uVar15 - uVar24;
                uVar15 = uVar21 - lVar14;
                puVar25 = puVar4 + lVar14;
                lVar22 = 0;
                do {
                  uVar38 = *(undefined8 *)((longlong)(puVar4 + lVar22) + 8);
                  auVar49 = *(undefined1 (*) [16])(puVar4 + lVar22 + 4);
                  *(undefined8 *)(pbVar16 + lVar22 * 4) = *(undefined8 *)(puVar4 + lVar22);
                  *(undefined8 *)(pbVar16 + lVar22 * 4 + 8) = uVar38;
                  *(undefined1 (*) [16])(pbVar16 + lVar22 * 4 + 0x10) = auVar49;
                  lVar22 = lVar22 + 8;
                } while (lVar14 != lVar22);
              }
              pbVar32 = pbVar16 + lVar14 * 4;
              do {
                if (puVar25 == puVar4 + uVar21) break;
                uVar40 = *puVar25;
                puVar25 = puVar25 + 1;
                *(undefined4 *)pbVar32 = uVar40;
                pbVar32 = pbVar32 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          uStack_178 = *(undefined4 *)(puStack_108 + 0x30);
          uStack_1a0 = (code *)pbStack_100;
          uStack_198 = uVar27;
          uStack_190 = uVar21;
          pbStack_188 = pbVar16;
          uStack_180 = uVar21;
          pdb_1413fa460(&lStack_360,&uStack_1a8,_DAT_14300798c);
          if (uStack_1a8 != (float *)0x0) {
            pub_1406abac0((byte *)uStack_1a0,(longlong)uStack_1a8 << 3,4);
          }
          puVar37 = puStack_108;
          if (uStack_190 == 0) goto LAB_14147e19a;
          pbVar16 = pbStack_188;
          ppauVar28 = (undefined1 (**) [16])(uStack_190 << 2);
        }
        puVar37 = puStack_108;
        pub_1406abac0(pbVar16,(ulonglong)ppauVar28,4);
LAB_14147e19a:
        puStack_250 = puVar37 + 0x50;
        pbStack_1b8 = pbStack_340;
        puStack_270 = puStack_350;
        if (puStack_338 < puStack_350) {
          puStack_270 = puStack_338;
        }
        lStack_1e8 = lStack_150;
        puStack_268 = (ulonglong *)((longlong)puStack_148 + lStack_140 * 0x14);
        ppauVar28 = (undefined1 (**) [16])0x0;
        pbStack_1e0 = pbStack_358;
        pbStack_100 = pbStack_358;
        puVar31 = (undefined *)0x0;
        puStack_1d8 = puStack_148;
        puStack_1f8 = puStack_148;
        do {
          fVar43 = _DAT_142e36f28;
          if ((pbStack_100 == (byte *)0x0) || (puStack_270 <= puVar31)) {
            if (puStack_1f8 == puStack_268) goto LAB_14147ea14;
            uVar15 = *puStack_1f8;
            uVar38 = *(undefined8 *)((longlong)puStack_1f8 + 0xc);
            puStack_1f8 = (ulonglong *)((longlong)puStack_1f8 + 0x14);
            pbStack_100 = (byte *)0x0;
          }
          else {
            uVar15 = *(ulonglong *)(pbStack_100 + (longlong)puVar31 * 8);
            fVar42 = *(float *)(pbStack_1b8 + (longlong)puVar31 * 4);
            fVar47 = *(float *)(puStack_108 + 0x40);
            fVar1 = *(float *)(puStack_108 + 0x44);
            if (fVar47 <= fVar1) {
              if (NAN(fVar1 * fVar42 + (_DAT_142e36f28 - fVar42) * fVar47)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
              }
            }
            else if (NAN((fVar1 + _DAT_142e36f28) * fVar42 + (_DAT_142e36f28 - fVar42) * fVar47)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            fVar42 = (float)pub_142e32a70();
            auVar44._0_4_ = (uint)(fVar42 + fVar43) & -(uint)(fVar42 < 0.0);
            auVar44._4_4_ = 0;
            auVar44._8_4_ = (int)extraout_XMM0_Qb_00;
            auVar44._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
            auVar44 = ZEXT416(~-(uint)(fVar42 < 0.0) & (uint)fVar42) | auVar44;
            fStack_328 = auVar44._0_4_;
            if ((fStack_328 < 0.0) || (fVar43 < fStack_328)) {
              uStack_1a8 = &fStack_328;
              uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143307a98);
            }
            uVar40 = pdb_140a850d0(piStack_130);
            puVar31 = puVar31 + 1;
            uVar38 = CONCAT44(auVar44._0_4_,uVar40);
          }
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)ppauVar28 + 1);
          auVar49 = *pauStack_2b8;
          pauVar35 = pauStack_2b8 + 1;
          uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
          fVar43 = (float)(uVar15 >> 0x20);
          pauVar29 = pauStack_2b8;
          lVar14 = lStack_2a0;
          uStack_288 = uVar15;
          ppauStack_138 = ppauVar28;
          do {
            do {
              uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffbb8 >> 0x20);
              if (lVar14 == 0) {
                fVar68 = (float)((ulonglong)uVar38 >> 0x20);
                pdb_140de88f0(&uStack_1a8);
                pdb_140df1c10(&fStack_328,plStack_118);
                fVar10 = fStack_31c;
                fVar1 = fStack_320;
                fVar47 = fStack_324;
                fVar42 = fStack_328;
                pdb_140df1c10(&uStack_1a8,plStack_118);
                fVar46 = fVar10 * fVar42;
                fVar50 = fVar1 * fVar47;
                auVar52._0_4_ = fVar46 - fVar50;
                auVar52._4_4_ = fVar46 - fVar50;
                auVar52._8_4_ = fVar46 - fVar50;
                auVar52._12_4_ = fVar46 - fVar50;
                auVar49 = divps(_DAT_14301bc40,auVar52);
                fVar46 = (float)uVar15 - (float)uStack_378;
                fVar50 = fVar43 - uStack_378._4_4_;
                fVar51 = uStack_1a0._4_4_ * (float)uStack_1a8;
                fVar56 = (float)uStack_1a0 * uStack_1a8._4_4_;
                auVar9._4_4_ = fVar51 - fVar56;
                auVar9._0_4_ = fVar51 - fVar56;
                auVar9._8_4_ = fVar51 - fVar56;
                auVar9._12_4_ = fVar51 - fVar56;
                auVar44 = divps(_DAT_14301bc40,auVar9);
                fVar51 = (float)uVar38;
                fStack_3a8 = fVar50 * auVar49._8_4_ * fVar1 + fVar46 * auVar49._0_4_ * fVar10;
                fStack_3a4 = fVar50 * auVar49._12_4_ * fVar42 + fVar46 * auVar49._4_4_ * fVar47;
                fStack_3a0 = fVar68 * (float)uStack_1a0 * auVar44._8_4_ +
                             fVar51 * uStack_1a0._4_4_ * auVar44._0_4_;
                fStack_39c = fVar68 * (float)uStack_1a8 * auVar44._12_4_ +
                             fVar51 * uStack_1a8._4_4_ * auVar44._4_4_;
                in_stack_fffffffffffffbb8 = (undefined *)CONCAT44(uVar40,uStack_1cc);
                auVar49 = ZEXT816(0);
                pdb_140deead0(&uStack_1a8);
                fVar42 = (float)pdb_140deea90(&uStack_1a8,&fStack_3a8);
                uVar13 = auVar49._0_4_;
                fStack_200 = fVar42;
                uStack_1fc = uVar13;
                bVar12 = pdb_140dee720(&fStack_200);
                uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffbb8 >> 0x20);
                if ((bVar12 & _DAT_142f6e3f0 <
                              (float)(~-(uint)(fVar42 < 0.0) & (uint)fVar42 |
                                     uVar13 & -(uint)(fVar42 < 0.0))) != 0) {
                  uStack_1a8 = (float *)CONCAT44(fVar68 * _UNK_142e6ada4 + fVar43,
                                                 fVar51 * _DAT_142e6ada0 + (float)uVar15);
                  pdb_140df4540(&fStack_1c8,&uStack_1a8);
                  fVar42 = *(float *)(uStack_128 + 0x284) + _DAT_143019208;
                  fVar47 = *(float *)(lStack_260 + 0x284) + _DAT_14300b140;
                  fVar43 = fVar47;
                  if (fVar47 <= fVar42) {
                    fVar43 = fVar42;
                  }
                  pdb_140df4540(&fStack_210,&uStack_288,
                                ~-(uint)NAN(fVar42) & (uint)fVar43 |
                                -(uint)NAN(fVar42) & (uint)fVar47);
                  fVar42 = fStack_208 - fStack_1c0;
                  auVar49 = ZEXT416((uint)fVar42);
                  fStack_2c8 = fStack_1c0;
                  fVar43 = (fStack_20c + _DAT_142f60fec) - fStack_1c4;
                  fVar47 = fStack_210 - fStack_1c8;
                  fStack_2bc = _DAT_142e36f28 /
                               SQRT(fVar43 * fVar43 + fVar47 * fVar47 + fVar42 * fVar42);
                  uStack_2c4 = CONCAT44(fStack_2bc * fVar43,fStack_2bc * fVar47);
                  fStack_2bc = fStack_2bc * fVar42;
                  in_stack_fffffffffffffbb8 = (undefined *)CONCAT44(uVar40,0x31cf);
                  pdb_1409efb80(auStack_430,param_9,auStack_2d0,_DAT_142e36f3c,
                                in_stack_fffffffffffffbb8,1,uStack_258);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                  switch(auStack_430[0]) {
                  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                goto LAB_14147e230;
              }
              if ((short)uVar13 == 0) {
                do {
                  auVar49 = *pauVar35;
                  pauVar29 = pauVar29 + -8;
                  pauVar35 = pauVar35 + 1;
                  uVar13 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar13 == 0);
              }
              iVar7 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                iVar7 = iVar7 + 1;
              }
              uVar13 = uVar13 - 1 & uVar13;
              lVar14 = lVar14 + -1;
              uVar27 = *(ulonglong *)((longlong)pauVar29 + (-8 - (ulonglong)(uint)(iVar7 << 3)));
            } while (uVar27 == uVar34);
            lVar22 = pdb_140b54f80(param_4,uVar27,&UNK_14330caa0);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14330cab8);
            }
            uVar23 = pdb_14092f900(lVar22);
            auVar49._8_8_ = 0;
            auVar49._0_8_ = uVar15;
            cVar11 = pdb_140a84de0(uVar23);
          } while (cVar11 == '\0');
LAB_14147e230:
          ppauVar28 = (undefined1 (**) [16])(uStack_110 & 0xffffffff);
          puVar36 = puStack_120;
        } while( true );
      }
LAB_14147ea8e:
      if (uStack_2b0 != 0) {
        uVar15 = uStack_2b0 * 8 + 0x17 & 0xfffffffffffffff0;
        uVar27 = uStack_2b0 + uVar15 + 0x11;
        if (uVar27 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_2b8 - uVar15),uVar27,0x10);
        }
      }
      if (uStack_240 != 0) {
        uVar15 = uStack_240 * 8 + 0x17 & 0xfffffffffffffff0;
        uVar27 = uStack_240 + uVar15 + 0x11;
        if (uVar27 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_248 - uVar15),uVar27,0x10);
        }
      }
      param_4 = (byte *)(lStack_3e8 + 0x18);
      pdb_140e9a350();
      plVar20 = (longlong *)0x1;
      LOCK();
      bVar12 = *param_4;
      if (bVar12 == 1) {
        *param_4 = 0;
      }
      else {
        plVar20 = (longlong *)(ulonglong)bVar12;
      }
      UNLOCK();
      if (bVar12 != 1) {
        plVar20 = (longlong *)pdb_142dbcef0(param_4,0);
      }
      if (cStack_f2 == '\0') {
        return plVar20;
      }
      plVar20 = (longlong *)pdb_140e97000();
      if (((char)plVar20[0xd] != '\x01') &&
         (plVar20 = (longlong *)pdb_142dd9610(plVar20,0), plVar20 == (longlong *)0x0)) break;
      if (*plVar20 == 0) {
        *plVar20 = -1;
        plStack_118 = plVar20;
        pdb_140e95370(plVar20 + 1);
        *plStack_118 = *plStack_118 + 1;
        return plStack_118;
      }
    }
    pbVar16 = (byte *)pdb_142dc8090(&UNK_1433079b0);
LAB_14147ed45:
    pbVar16 = (byte *)pdb_142dd9610(pbVar16,0);
  } while (pbVar16 != (byte *)0x0);
  pdb_142dc7890(&UNK_143307940);
LAB_14147ed65:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143305b88);
LAB_14147ea14:
  if (lStack_1e8 != 0) {
    pub_1406abac0((byte *)puStack_1d8,lStack_1e8 * 0x14,4);
  }
  if (lStack_360 != 0) {
    pub_1406abac0(pbStack_1e0,lStack_360 << 3,4);
  }
  if (lStack_348 != 0) {
    pub_1406abac0(pbStack_1b8,lStack_348 << 2,4);
  }
  puVar37 = puStack_250;
  if (puStack_250 == puVar36) goto LAB_14147ea8e;
  goto LAB_14147d9e6;
}

