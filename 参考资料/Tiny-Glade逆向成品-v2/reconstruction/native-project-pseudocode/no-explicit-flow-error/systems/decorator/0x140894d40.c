// VA 0x140894d40, PDB extent 9086 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_interpolate_and_compare
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_interpolate_and_compare
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
   Extent: 9086 */

void pdb_140894d40(byte **param_1,byte *param_2,byte *param_3,undefined1 (*param_4) [16],
                  undefined8 *param_5)

{
  char *pcVar1;
  byte *pbVar2;
  float *pfVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte *pbVar21;
  longlong *plVar22;
  undefined8 uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  byte *pbVar26;
  ulonglong unaff_RBX;
  undefined1 (*pauVar27) [16];
  byte *pbVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 *******pppppppuVar31;
  longlong lVar32;
  ushort uVar33;
  longlong lVar34;
  ulonglong in_R11;
  byte **ppbVar35;
  byte **ppbVar36;
  bool bVar37;
  byte bVar38;
  float fVar39;
  float fVar40;
  float extraout_XMM0_Da;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar54;
  undefined1 auVar52 [16];
  float fVar55;
  uint uVar56;
  uint uVar57;
  longlong lStack_430;
  byte *pbStack_428;
  undefined8 uStack_420;
  longlong lStack_418;
  undefined1 auStack_410 [16];
  undefined8 uStack_400;
  byte *pbStack_3f8;
  byte *pbStack_3f0;
  byte *pbStack_3e8;
  longlong lStack_3d8;
  byte *pbStack_3d0;
  longlong lStack_3c0;
  longlong lStack_3b8;
  undefined8 *******pppppppuStack_398;
  ulonglong uStack_390;
  ulonglong uStack_388;
  int iStack_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  byte bStack_370;
  char cStack_36f;
  char cStack_36e;
  undefined1 (*pauStack_368) [16];
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  longlong lStack_338;
  byte *pbStack_330;
  undefined8 uStack_328;
  longlong lStack_320;
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  undefined1 (*pauStack_2e8) [16];
  longlong *plStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  ulonglong uStack_2b0;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  ulonglong uStack_218;
  byte *pbStack_210;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  byte **ppbStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  byte **ppbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  longlong *plStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  undefined1 (*pauStack_160) [16];
  byte *pbStack_158;
  byte *pbStack_150;
  ulonglong uStack_148;
  undefined1 (*pauStack_140) [16];
  byte **ppbStack_138;
  byte *pbStack_130;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_1a8 = 0;
    goto LAB_140894f6c;
  }
  param_2 = &UNK_1430130de;
  ppbVar36 = (byte **)0x74;
  uVar25 = 0x74;
  pbStack_100 = param_3;
  lVar19 = pdb_140897970(&UNK_1430130de);
  if (lVar19 == 1) {
    if (0x74 < uVar25) {
LAB_140896636:
      pdb_142dc8070(&UNK_1430130de,0x74,0);
LAB_140896656:
      pdb_142dc8070(&UNK_1430130de,0x74);
LAB_140896679:
      cStack_f2 = '\x01';
      uStack_f3 = 1;
      pdb_142dc7e2a(4,unaff_RBX);
LAB_140896695:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    param_2 = &UNK_1430130de;
    uVar20 = pdb_140897970(&UNK_1430130de);
    if ((uVar20 & 1) != 0) {
      if (0x74 < uVar25 + 2) goto LAB_140896656;
      ppbVar36 = (byte **)(0x72 - uVar25);
      param_2 = &UNK_1430130e0 + uVar25;
    }
  }
  puVar29 = &UNK_143012f55;
  ppbVar35 = (byte **)&UNK_143012f00;
  do {
    bVar38 = puVar29[-1];
    uVar18 = (uint)(char)bVar38;
    if ((char)bVar38 < '\0') {
      bVar17 = puVar29[-2];
      if ((char)bVar17 < -0x40) {
        bVar5 = puVar29[-3];
        if ((char)bVar5 < -0x40) {
          pbVar21 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          uVar18 = bVar5 & 0x3f | (*pbVar21 & 7) << 6;
        }
        else {
          puVar29 = puVar29 + -3;
          uVar18 = bVar5 & 0xf;
        }
        uVar18 = bVar17 & 0x3f | uVar18 << 6;
      }
      else {
        puVar29 = puVar29 + -2;
        uVar18 = bVar17 & 0x1f;
      }
      uVar18 = (uint)(bVar38 & 0x3f) | uVar18 << 6;
      if (uVar18 != 0x5c) goto LAB_140894ec4;
LAB_140894edc:
      puVar30 = puVar29 + -0x143012eff;
      if ((undefined *)0x55 < puVar30) {
        pdb_142dc8070(&UNK_143012f00,0x55,puVar30,0x55,&UNK_1430131b8);
        goto LAB_140896636;
      }
      pauVar27 = (undefined1 (*) [16])(0x55 - (longlong)puVar30);
      ppbVar35 = (byte **)(puVar29 + 1);
      goto LAB_140894efe;
    }
    puVar29 = puVar29 + -1;
    if (uVar18 == 0x5c) goto LAB_140894edc;
LAB_140894ec4:
    if (uVar18 == 0x2f) goto LAB_140894edc;
  } while (puVar29 != &UNK_143012f00);
  pauVar27 = (undefined1 (*) [16])0x55;
LAB_140894efe:
  pbVar21 = (byte *)pdb_140e97000();
  if (pbVar21[0x68] != 1) goto LAB_1408964ca;
  while( true ) {
    if (*(longlong *)pbVar21 != 0) goto LAB_1408964be;
    pbVar21[0] = 0xff;
    pbVar21[1] = 0xff;
    pbVar21[2] = 0xff;
    pbVar21[3] = 0xff;
    pbVar21[4] = 0xff;
    pbVar21[5] = 0xff;
    pbVar21[6] = 0xff;
    pbVar21[7] = 0xff;
    pbStack_108 = pbVar21;
    uStack_1a0 = pdb_140e94f10(pbVar21 + 8,param_2,ppbVar36,ppbVar35,pauVar27,1,0);
    *(longlong *)pbStack_108 = *(longlong *)pbStack_108 + 1;
    lStack_1a8 = 1;
    param_3 = pbStack_100;
LAB_140894f6c:
    pbVar21 = param_1[2];
    *(undefined4 *)pbVar21 = *(undefined4 *)((longlong)param_1 + 0x1c);
    ppbVar36 = (byte **)*param_1;
    fVar39 = (float)pdb_140de9cd0(pbVar21,_DAT_142f895fc);
    plVar22 = (longlong *)pdb_140f3bda0();
    if ((char)plVar22[2] == '\x01') {
      pbVar21 = (byte *)*plVar22;
      param_2 = (byte *)plVar22[1];
    }
    else {
      pbVar21 = (byte *)pdb_140f4fd10();
      *plVar22 = (longlong)pbVar21;
      plVar22[1] = (longlong)param_2;
      *(undefined1 *)(plVar22 + 2) = 1;
    }
    ppbVar35 = ppbVar36 + 0x27;
    *plVar22 = (longlong)(pbVar21 + 1);
    pbVar28 = _UNK_143013228;
    pauStack_368 = (undefined1 (*) [16])*ppbVar35;
    pbStack_360 = ppbVar36[0x28];
    pbStack_358 = ppbVar36[0x29];
    pbStack_350 = ppbVar36[0x2a];
    pbStack_348 = ppbVar36[0x2b];
    pbStack_340 = ppbVar36[0x2c];
    *ppbVar35 = _DAT_143013220;
    ppbVar36[0x28] = pbVar28;
    pbVar28 = _UNK_143013238;
    ppbVar36[0x29] = _DAT_143013230;
    ppbVar36[0x2a] = pbVar28;
    ppbVar36[0x2b] = pbVar21;
    ppbVar36[0x2c] = param_2;
    pbVar21 = ppbVar36[1];
    pbVar28 = ppbVar36[2];
    pbVar26 = (byte *)((ulonglong)(pbVar28 + 1) >> 1);
    if (ppbVar36[0x36] == (byte *)0x0) {
      pbVar26 = pbVar28;
    }
    if (ppbVar36[0x35] < pbVar26) {
      pdb_142dda2e0(ppbVar36 + 0x33,pbStack_358,ppbVar36 + 0x37,1);
    }
    pdb_1414e2400(pbVar21,pbVar21 + (longlong)pbVar28 * 0x150,ppbVar36 + 0x33);
    fVar14 = _DAT_143012e00;
    fVar13 = _DAT_143009d64;
    uVar10 = _UNK_142e37824;
    uVar8 = _DAT_142e37820;
    uVar18 = _DAT_142e377e0;
    fVar12 = _DAT_142e36f28;
    pbVar21 = ppbVar36[1];
    pbStack_188 = pbVar21 + (longlong)ppbVar36[2] * 0x150;
    pauVar27 = (undefined1 (*) [16])*param_5;
    param_4 = *(undefined1 (**) [16])*param_4;
    plStack_180 = *(longlong **)param_3;
    plStack_2e0 = plStack_180 + 4;
    pauStack_2e8 = param_4 + 2;
    pauStack_160 = pauVar27;
    if (pbVar21 != pbStack_188) break;
LAB_1408962a7:
    pbVar21 = pbStack_360;
    param_1 = &pbStack_248;
    if (pbStack_360 != (byte *)0x0) {
      if (pbStack_350 != (byte *)0x0) {
        auVar41 = *pauStack_368;
        param_4 = pauStack_368 + 1;
        ppbVar36 = (byte **)(ulonglong)
                            ~(uint)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar41[0xf] >> 7) << 0xf);
        pauVar27 = pauStack_368;
        pbVar28 = pbStack_350;
        do {
          uVar18 = (uint)ppbVar36;
          if ((short)ppbVar36 == 0) {
            do {
              auVar41 = *param_4;
              pauVar27 = pauVar27 + -0x98;
              param_4 = param_4 + 1;
              uVar18 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar18 == 0);
          }
          uVar8 = 0;
          for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          pdb_1404df150((longlong)pauVar27 + (ulonglong)uVar8 * -0x98 + -0x90);
          ppbVar36 = (byte **)(ulonglong)(uVar18 - 1 & uVar18);
          pbVar28 = pbVar28 + -1;
        } while (pbVar28 != (byte *)0x0);
      }
      param_1 = (byte **)0x0;
      uVar25 = (longlong)pbVar21 * 0x98 + 0xa7U & 0xfffffffffffffff0;
      pbVar21 = pbVar21 + uVar25 + 0x11;
      if (pbVar21 != (byte *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_368 - uVar25),(ulonglong)pbVar21,0x10);
      }
    }
    if (lStack_1a8 == 0) {
      return;
    }
    plVar22 = (longlong *)pdb_140e97000();
    if ((char)plVar22[0xd] != '\x01') goto LAB_1408964e9;
    while( true ) {
      param_2 = param_3;
      if (*plVar22 == 0) {
        *plVar22 = -1;
        pbStack_100 = (byte *)plVar22;
        pdb_140e95370(plVar22 + 1,uStack_1a0);
        *(longlong *)pbStack_100 = *(longlong *)pbStack_100 + 1;
        return;
      }
LAB_1408964be:
      pbVar21 = (byte *)pdb_142dc8090(&UNK_14330e608);
LAB_1408964ca:
      pbVar21 = (byte *)pdb_142dde6e0(pbVar21,0);
      param_3 = param_2;
      if (pbVar21 != (byte *)0x0) break;
      do {
        plVar22 = (longlong *)pdb_142dc7890(&UNK_14330e598);
LAB_1408964e9:
        plVar22 = (longlong *)pdb_142dde6e0(plVar22,0);
      } while (plVar22 == (longlong *)0x0);
    }
  }
LAB_1408950e7:
  ppbVar36 = (byte **)pdb_140c017b0(*(undefined4 *)(pbVar21 + 0x128),*(undefined4 *)(pbVar21 + 300))
  ;
  pbStack_248 = *(byte **)(pbVar21 + 8);
  pbStack_220 = *(byte **)(pbVar21 + 0x10);
  pbStack_240 = pbStack_248 + (longlong)pbStack_220 * 8;
  pbStack_238 = *(byte **)(pbVar21 + 0x40);
  pbVar28 = *(byte **)(pbVar21 + 0x48);
  pbStack_230 = pbStack_238 + (longlong)pbVar28 * 4;
  if (pbVar28 < pbStack_220) {
    pbStack_220 = pbVar28;
  }
  pbStack_228 = (byte *)0x0;
  ppbStack_1b0 = ppbVar36;
  pdb_14017fb10(&pbStack_178,&pbStack_248);
  uStack_f1 = 1;
  ppbStack_198 = ppbVar36;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  if (lVar19 == 0) {
    iStack_118 = 0;
  }
  else {
    iStack_118 = *(int *)(lVar19 + 0x50);
  }
  uStack_f1 = 1;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  iStack_124 = 0;
  if (lVar19 != 0) {
    uStack_f1 = 1;
    lVar19 = pdb_1409014e0(lVar19 + 0x38);
    if (lVar19 != 0) {
      iStack_124 = *(int *)(lVar19 + 0xc);
    }
  }
  uStack_f1 = 1;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  iStack_120 = 0;
  if (lVar19 != 0) {
    uStack_f1 = 1;
    lVar19 = pdb_1409014e0(lVar19 + 0x38);
    if (lVar19 != 0) {
      iStack_120 = *(int *)(lVar19 + 8);
    }
  }
  uStack_f1 = 1;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  if (lVar19 == 0) {
LAB_140895280:
    uStack_110 = 0;
  }
  else {
    uStack_f1 = 1;
    lVar19 = pdb_1409014e0(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_140895280;
    uStack_110 = (uint)*(byte *)(lVar19 + 0x14);
  }
  uStack_f1 = 1;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  iStack_11c = 0;
  if (lVar19 != 0) {
    uStack_f1 = 1;
    lVar19 = pdb_1409014e0(lVar19 + 0x38);
    if (lVar19 != 0) {
      iStack_11c = *(int *)(lVar19 + 0x10);
    }
  }
  uStack_f1 = 1;
  lVar19 = pdb_140c40010(pauVar27,*(undefined4 *)(pbVar21 + 0x128));
  if (lVar19 == 0) {
LAB_140895330:
    uStack_10c = 0;
    lVar19 = *(longlong *)(param_4[1] + 8);
  }
  else {
    uStack_f1 = 1;
    lVar19 = pdb_1409014e0(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_140895330;
    uStack_10c = (uint)*(byte *)(lVar19 + 0x16);
    lVar19 = *(longlong *)(param_4[1] + 8);
  }
  if (lVar19 != 0) {
    uStack_f1 = 1;
    uVar25 = pdb_1400af680(pauStack_2e8,pbVar21 + 0x128);
    bVar38 = (byte)(uVar25 >> 0x39);
    auVar41 = ZEXT216(CONCAT11(bVar38,bVar38));
    auVar41 = pshuflw(auVar41,auVar41,0);
    lVar19 = 0;
    while( true ) {
      uVar25 = uVar25 & *(ulonglong *)(*param_4 + 8);
      pcVar1 = (char *)(*(longlong *)*param_4 + uVar25);
      auVar50[0] = -(*pcVar1 == auVar41[0]);
      auVar50[1] = -(pcVar1[1] == auVar41[1]);
      auVar50[2] = -(pcVar1[2] == auVar41[2]);
      auVar50[3] = -(pcVar1[3] == auVar41[3]);
      auVar50[4] = -(pcVar1[4] == auVar41[4]);
      auVar50[5] = -(pcVar1[5] == auVar41[5]);
      auVar50[6] = -(pcVar1[6] == auVar41[6]);
      auVar50[7] = -(pcVar1[7] == auVar41[7]);
      auVar50[8] = -(pcVar1[8] == auVar41[0]);
      auVar50[9] = -(pcVar1[9] == auVar41[1]);
      auVar50[10] = -(pcVar1[10] == auVar41[2]);
      auVar50[0xb] = -(pcVar1[0xb] == auVar41[3]);
      auVar50[0xc] = -(pcVar1[0xc] == auVar41[4]);
      auVar50[0xd] = -(pcVar1[0xd] == auVar41[5]);
      auVar50[0xe] = -(pcVar1[0xe] == auVar41[6]);
      auVar50[0xf] = -(pcVar1[0xf] == auVar41[7]);
      uVar33 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
      uVar57 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar56 = 0;
        for (uVar9 = uVar57; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar56 = uVar56 + 1;
        }
        uVar20 = uVar56 + uVar25 & *(ulonglong *)(*param_4 + 8);
        lVar32 = *(longlong *)*param_4 + uVar20 * -8;
        uVar23 = *(undefined8 *)(lVar32 + -8);
        auVar51._0_4_ = -(uint)((int)uVar23 == (int)*(undefined8 *)(pbVar21 + 0x128));
        iVar54 = -(uint)((int)((ulonglong)uVar23 >> 0x20) ==
                        (int)((ulonglong)*(undefined8 *)(pbVar21 + 0x128) >> 0x20));
        auVar51._4_4_ = auVar51._0_4_;
        auVar51._8_4_ = iVar54;
        auVar51._12_4_ = iVar54;
        iVar54 = movmskpd((int)uVar20 * 8,auVar51);
        in_R11 = CONCAT71((int7)((ulonglong)lVar32 >> 8),1);
        uStack_114 = (undefined4)in_R11;
        if (iVar54 == 3) goto LAB_14089542a;
        uVar33 = (ushort)(uVar57 - 1) & (ushort)uVar57;
        uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar33);
      }
      auVar46[0] = -(*pcVar1 == -1);
      auVar46[1] = -(pcVar1[1] == -1);
      auVar46[2] = -(pcVar1[2] == -1);
      auVar46[3] = -(pcVar1[3] == -1);
      auVar46[4] = -(pcVar1[4] == -1);
      auVar46[5] = -(pcVar1[5] == -1);
      auVar46[6] = -(pcVar1[6] == -1);
      auVar46[7] = -(pcVar1[7] == -1);
      auVar46[8] = -(pcVar1[8] == -1);
      auVar46[9] = -(pcVar1[9] == -1);
      auVar46[10] = -(pcVar1[10] == -1);
      auVar46[0xb] = -(pcVar1[0xb] == -1);
      auVar46[0xc] = -(pcVar1[0xc] == -1);
      auVar46[0xd] = -(pcVar1[0xd] == -1);
      auVar46[0xe] = -(pcVar1[0xe] == -1);
      auVar46[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar46 >> 0x3f,0) & 1) != 0) || (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar46 >> 0x4f,0) & 1) != 0) || (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar46 >> 0x5f,0) & 1) != 0) || (SUB161(auVar46 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar46 >> 0x6f,0) & 1) != 0) || (SUB161(auVar46 >> 0x77,0) & 1) != 0) ||
          auVar46[0xf] < '\0') break;
      uVar25 = uVar25 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
  uStack_114 = 0;
LAB_14089542a:
  uStack_f1 = 1;
  uVar23 = pdb_1400af0a0(&pbStack_348,&ppbStack_1b0);
  uStack_f1 = 1;
  pdb_140caa470(&pbStack_248,&pauStack_368,uVar23,&ppbStack_1b0);
  pbVar28 = pbStack_240;
  pbStack_190 = pbVar21 + 0x150;
  if (SBORROW8(0,(longlong)pbStack_240)) goto LAB_140895b35;
  pub_142e32760(&pbStack_3f0,&pbStack_238,0x88);
  pbVar26 = pbStack_3e8;
  param_3 = pbStack_3f0;
  pbStack_3f8 = pbVar28;
  uVar25 = (longlong)pbStack_3e8 * 0xc;
  if ((byte *)0xaaaaaaaaaaaaaaa < pbStack_3e8) {
    uVar23 = 0;
LAB_14089643b:
    uStack_f4 = 1;
    uStack_f5 = 1;
    pdb_142dc7e2a(uVar23,uVar25);
    goto LAB_140896695;
  }
  if (uVar25 == 0) {
    pbVar24 = (byte *)0x4;
    pbVar28 = (byte *)0x0;
  }
  else {
    pdb_14007ee60();
    uVar23 = 4;
    pbVar24 = pub_1406abab0(uVar25,4);
    pbVar28 = pbVar26;
    if (pbVar24 == (byte *)0x0) goto LAB_14089643b;
  }
  pbStack_238 = (byte *)0x0;
  pbStack_248 = pbVar28;
  pbStack_240 = pbVar24;
  if (pbVar26 != (byte *)0x0) {
    pub_142e32760(pbVar24,param_3,uVar25);
    pbStack_238 = pbVar26;
  }
  uStack_f4 = 1;
  uStack_f5 = 1;
  pdb_14148c570(&lStack_430,&pbStack_248,1);
  if (!SBORROW8(0,lStack_430)) {
    pauStack_140 = param_4;
    ppbStack_138 = ppbVar35;
    uStack_308 = uStack_400;
    auStack_318 = auStack_410;
    uStack_328 = uStack_420;
    lStack_320 = lStack_418;
    lStack_338 = lStack_430;
    pbStack_330 = pbStack_428;
    pbStack_130 = *(byte **)(pbVar21 + 0x20);
    uVar25 = *(ulonglong *)(pbVar21 + 0x10);
    if (*(ulonglong *)(pbVar21 + 0x28) < *(ulonglong *)(pbVar21 + 0x10)) {
      uVar25 = *(ulonglong *)(pbVar21 + 0x28);
    }
    pbVar24 = (byte *)0x0;
    bVar38 = 0;
    pbStack_108 = pbStack_170;
    pbStack_100 = pbStack_168;
    pbVar28 = pbStack_170;
    pbVar26 = pbStack_168;
    for (uVar20 = 0; uVar20 < uVar25; uVar20 = uVar20 + 1) {
      if (pbVar26 <= pbVar24) {
        cStack_f2 = 1;
        uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pbVar24,pbVar26,&UNK_143012f58);
      }
      if (*(byte **)(pbVar21 + 0x78) <= pbVar24) {
        cStack_f2 = 1;
        uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pbVar24,*(byte **)(pbVar21 + 0x78),&UNK_143012f70);
      }
      param_3 = *(byte **)(pbVar21 + 0x70);
      if (pbStack_3e8 == *(byte **)(pbVar21 + 0x10)) {
        if (pbStack_3e8 <= pbVar24) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar24,pbStack_3e8,&UNK_143012fb8);
        }
        if (pbStack_3d0 <= pbVar24) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar24,pbStack_3d0,&UNK_143012fd0);
        }
        fVar45 = *(float *)(pbStack_3f0 + (longlong)pbVar24 * 0xc + 8);
        fVar48 = *(float *)(pbStack_3f0 + (longlong)pbVar24 * 0xc);
        fVar55 = *(float *)((longlong)(pbStack_3f0 + (longlong)pbVar24 * 0xc) + 4);
        pfVar3 = (float *)(lStack_3d8 + (longlong)pbVar24 * 8);
        fVar49 = *pfVar3;
        fVar53 = pfVar3[1];
      }
      else {
        cStack_f2 = '\x01';
        uStack_f3 = 1;
        uVar57 = pdb_14148c300(&lStack_430,*(undefined4 *)(pbStack_130 + uVar20 * 4));
        pbVar28 = (byte *)(ulonglong)uVar57;
        if (pbStack_3e8 <= pbVar28) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar28,pbStack_3e8,&UNK_143012f88);
        }
        pbVar26 = pbVar28 + 1;
        if (pbStack_3e8 <= pbVar26) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar26,pbStack_3e8,&UNK_143012f88);
        }
        if (pbStack_3d0 <= pbVar28) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar28,pbStack_3d0,&UNK_143012fa0);
        }
        if (pbStack_3d0 <= pbVar26) {
          cStack_f2 = 1;
          uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pbVar26,pbStack_3d0,&UNK_143012fa0);
        }
        fVar48 = (float)*(undefined8 *)(pbStack_3f0 + (longlong)pbVar28 * 0xc);
        fVar55 = (float)((ulonglong)*(undefined8 *)(pbStack_3f0 + (longlong)pbVar28 * 0xc) >> 0x20);
        fVar48 = ((float)*(undefined8 *)(pbStack_3f0 + (longlong)pbVar26 * 0xc) - fVar48) *
                 extraout_XMM0_Da + fVar48;
        fVar55 = ((float)((ulonglong)*(undefined8 *)(pbStack_3f0 + (longlong)pbVar26 * 0xc) >> 0x20)
                 - fVar55) * extraout_XMM0_Da + fVar55;
        fVar45 = (*(float *)(pbStack_3f0 + (longlong)pbVar26 * 0xc + 8) -
                 *(float *)(pbStack_3f0 + (longlong)pbVar28 * 0xc + 8)) * extraout_XMM0_Da +
                 *(float *)(pbStack_3f0 + (longlong)pbVar28 * 0xc + 8);
        uVar23 = *(undefined8 *)(lStack_3d8 + (longlong)pbVar28 * 8);
        uVar4 = *(undefined8 *)(lStack_3d8 + 8 + (longlong)pbVar28 * 8);
        fVar49 = (float)uVar23;
        fVar53 = (float)((ulonglong)uVar23 >> 0x20);
        fVar49 = ((float)uVar4 - fVar49) * extraout_XMM0_Da + fVar49;
        fVar53 = ((float)((ulonglong)uVar4 >> 0x20) - fVar53) * extraout_XMM0_Da + fVar53;
        pbVar28 = pbStack_108;
        pbVar26 = pbStack_100;
      }
      pbVar2 = pbVar28 + (longlong)pbVar24 * 0xc;
      uVar23 = *(undefined8 *)(param_3 + (longlong)pbVar24 * 8);
      fVar40 = *(float *)(pbVar2 + 8) - fVar45;
      fVar42 = (float)*(undefined8 *)pbVar2 - fVar48;
      fVar44 = (float)((ulonglong)*(undefined8 *)pbVar2 >> 0x20) - fVar55;
      *(ulonglong *)pbVar2 = CONCAT44(fVar39 * fVar44 + fVar55,fVar39 * fVar42 + fVar48);
      *(float *)(pbVar2 + 8) = fVar39 * fVar40 + fVar45;
      uVar57 = (uint)((float)((ulonglong)uVar23 >> 0x20) * fVar53 + (float)uVar23 * fVar49 < 0.0);
      uVar56 = (int)(uVar57 << 0x1f) >> 0x1f;
      uVar57 = (int)(uVar57 << 0x1f) >> 0x1f;
      fVar45 = (float)(~uVar56 & (uint)fVar49 | ((uint)fVar49 ^ uVar8) & uVar56);
      fVar48 = (float)(~uVar57 & (uint)fVar53 | ((uint)fVar53 ^ uVar10) & uVar57);
      fVar45 = ((float)*(undefined8 *)(param_3 + (longlong)pbVar24 * 8) - fVar45) * fVar39 + fVar45;
      fVar48 = ((float)((ulonglong)*(undefined8 *)(param_3 + (longlong)pbVar24 * 8) >> 0x20) -
               fVar48) * fVar39 + fVar48;
      fVar55 = fVar12 / SQRT(fVar48 * fVar48 + fVar45 * fVar45);
      uVar57 = (uint)((int)fVar55 - 1U < 0x7fffff ||
                     (int)ABS(fVar55) - 0x800000U < 0x7f000000 && -1 < (int)fVar55);
      uVar56 = (int)(uVar57 << 0x1f) >> 0x1f;
      *(ulonglong *)(param_3 + (longlong)pbVar24 * 8) =
           (ulonglong)(~uVar56 & (uint)fVar12) |
           CONCAT44((uint)(fVar55 * fVar48) & (int)(uVar57 << 0x1f) >> 0x1f,
                    (uint)(fVar55 * fVar45) & uVar56);
      pbVar24 = pbVar24 + 1;
      bVar38 = bVar38 | fVar14 < fVar40 * fVar40 + fVar44 * fVar44 + fVar42 * fVar42;
    }
    uVar25 = *(ulonglong *)(pbVar21 + 0x140);
    if (uVar25 < 2) {
      pbVar28 = pbVar21 + 0x130;
    }
    else {
      pbVar28 = *(byte **)(pbVar21 + 0x130);
      uVar25 = *(ulonglong *)(pbVar21 + 0x138);
    }
    pppppppuVar31 = &pppppppuStack_398;
    uVar20 = uStack_388;
    if (1 < uStack_388) {
      pppppppuVar31 = pppppppuStack_398;
      uVar20 = uStack_390;
    }
    bVar17 = 1;
    if (uVar25 == uVar20) {
      if (uVar25 != 0) {
        uVar20 = 0;
        do {
          if (*(short *)(pbVar28 + uVar20 * 4 + 2) !=
              *(short *)((longlong)pppppppuVar31 + uVar20 * 4 + 2)) goto LAB_1408958f7;
          bVar5 = pbVar28[uVar20 * 4];
          bVar37 = bVar5 < 2;
          bVar6 = *(byte *)((longlong)pppppppuVar31 + uVar20 * 4);
          bVar11 = bVar5 == bVar6 && !bVar37;
          if (bVar6 < 2) {
            bVar11 = bVar37;
          }
          in_R11 = (ulonglong)bVar11;
          if ((bVar5 == bVar6) && ((bool)(bVar37 & bVar11) != false)) {
            if (pbVar28[uVar20 * 4 + 1] != *(byte *)((longlong)pppppppuVar31 + uVar20 * 4 + 1))
            goto LAB_1408958f7;
          }
          else if (bVar11 == (bool)(bVar37 & bVar11)) goto LAB_1408958f7;
          uVar20 = uVar20 + 1;
        } while (uVar25 != uVar20);
      }
      bVar17 = 0;
    }
LAB_1408958f7:
    if ((!(bool)(bVar38 | (char)uStack_10c != cStack_36f | bVar17) &&
         (((((bStack_370 ^ (byte)uStack_114) & 1) == 0 && (char)uStack_110 == cStack_36e) &&
          iStack_11c == iStack_374) &&
         ((iStack_380 == iStack_118 && iStack_37c == iStack_120) && iStack_378 == iStack_124))) &&
       (lVar19 = *(longlong *)(pbVar21 + 0x60), lVar19 == lStack_3b8)) {
      if (lVar19 != 0) {
        lVar32 = 0;
        do {
          if (fVar13 < (float)((uint)(*(float *)(*(longlong *)(pbVar21 + 0x58) + lVar32 * 4) -
                                     *(float *)(lStack_3c0 + lVar32 * 4)) & uVar18))
          goto LAB_140895ad5;
          lVar32 = lVar32 + 1;
        } while (lVar19 != lVar32);
      }
      if ((*_DAT_143ca4330 == '\x01') && (plStack_180[3] != 0)) {
        cStack_f2 = '\x01';
        uStack_f3 = 1;
        uVar25 = pdb_1400af680(plStack_2e0,pbVar21 + 0x128);
        pbVar26 = pbStack_100;
        pbVar28 = pbStack_3f0;
        lVar19 = *plStack_180;
        bVar38 = (byte)(uVar25 >> 0x39);
        auVar41 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar41 = pshuflw(auVar41,auVar41,0);
        lVar32 = 0;
        while( true ) {
          uVar25 = uVar25 & plStack_180[1];
          auVar50 = *(undefined1 (*) [16])(lVar19 + uVar25);
          auVar47[0] = -(auVar50[0] == auVar41[0]);
          auVar47[1] = -(auVar50[1] == auVar41[1]);
          auVar47[2] = -(auVar50[2] == auVar41[2]);
          auVar47[3] = -(auVar50[3] == auVar41[3]);
          auVar47[4] = -(auVar50[4] == auVar41[4]);
          auVar47[5] = -(auVar50[5] == auVar41[5]);
          auVar47[6] = -(auVar50[6] == auVar41[6]);
          auVar47[7] = -(auVar50[7] == auVar41[7]);
          auVar47[8] = -(auVar50[8] == auVar41[0]);
          auVar47[9] = -(auVar50[9] == auVar41[1]);
          auVar47[10] = -(auVar50[10] == auVar41[2]);
          auVar47[0xb] = -(auVar50[0xb] == auVar41[3]);
          auVar47[0xc] = -(auVar50[0xc] == auVar41[4]);
          auVar47[0xd] = -(auVar50[0xd] == auVar41[5]);
          auVar47[0xe] = -(auVar50[0xe] == auVar41[6]);
          auVar47[0xf] = -(auVar50[0xf] == auVar41[7]);
          uVar33 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar47[0xf] >> 7) << 0xf;
          uVar57 = (uint)uVar33;
          if (uVar33 != 0) {
            do {
              uVar56 = 0;
              for (uVar9 = uVar57; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar56 = uVar56 + 1;
              }
              lVar34 = (uVar56 + uVar25 & plStack_180[1]) * -0x140;
              uVar23 = *(undefined8 *)(lVar19 + -0x140 + lVar34);
              auVar52._0_4_ = -(uint)((int)uVar23 == (int)*(undefined8 *)(pbVar21 + 0x128));
              iVar54 = -(uint)((int)((ulonglong)uVar23 >> 0x20) ==
                              (int)((ulonglong)*(undefined8 *)(pbVar21 + 0x128) >> 0x20));
              auVar52._4_4_ = auVar52._0_4_;
              auVar52._8_4_ = iVar54;
              auVar52._12_4_ = iVar54;
              uVar56 = movmskpd((int)in_R11,auVar52);
              in_R11 = (ulonglong)uVar56;
              if (uVar56 == 3) {
                lVar19 = lVar19 + lVar34;
                if (*(char *)(lVar19 + -7) != '\0') goto LAB_140895ad5;
                if (pbStack_100 == pbStack_3e8) {
                  if (pbStack_100 == (byte *)0x0) {
                    pbStack_2d8 = (byte *)0x0;
                    pbStack_2d0 = (byte *)0x4;
                    pbStack_2c8 = (byte *)0x0;
                    cVar16 = '\x01';
                  }
                  else {
                    unaff_RBX = (longlong)pbStack_100 * 0xc;
                    pdb_14007ee60(lVar19,&pbStack_2d8);
                    pbVar24 = pub_1406abab0(unaff_RBX,4);
                    if (pbVar24 == (byte *)0x0) goto LAB_140896679;
                    pbStack_2d8 = pbVar26;
                    pbStack_2d0 = pbVar24;
                    pub_142e32760(pbVar24,pbVar28,unaff_RBX);
                    pbStack_2c8 = pbVar26;
                    cVar16 = '\x01';
                  }
                }
                else {
                  pbStack_2c8 = pbStack_168;
                  pbStack_2d8 = pbStack_178;
                  pbStack_2d0 = pbStack_170;
                  cVar16 = '\0';
                }
                uStack_f3 = 1;
                cStack_f2 = cVar16;
                pdb_140080930(&pbStack_248,&pbStack_2d8,1);
                ppbVar35 = ppbStack_138;
                ppbVar36 = ppbStack_198;
                pbVar28 = pbStack_248;
                if (!SBORROW8(0,(longlong)pbStack_248)) {
                  pbStack_2b8 = pbStack_220;
                  uStack_2b0 = uStack_218;
                  pbStack_2c8 = pbStack_230;
                  pbStack_2c0 = pbStack_228;
                  pbStack_2d8 = pbStack_240;
                  pbStack_2d0 = pbStack_238;
                }
                lVar19 = *(longlong *)(pbVar21 + 0x98);
                if (!SBORROW8(0,lVar19)) {
                  if (lVar19 != 0) {
                    pub_1406abac0(*(byte **)(pbVar21 + 0xa0),lVar19 * 0xc,4);
                  }
                  if (*(longlong *)(pbVar21 + 0xb0) != 0) {
                    pub_1406abac0(*(byte **)(pbVar21 + 0xb8),*(longlong *)(pbVar21 + 0xb0) << 2,4);
                  }
                }
                *(byte **)(pbVar21 + 0x98) = pbVar28;
                *(byte **)(pbVar21 + 0xa0) = pbStack_2d8;
                *(byte **)(pbVar21 + 0xa8) = pbStack_2d0;
                *(byte **)(pbVar21 + 0xb0) = pbStack_2c8;
                *(byte **)(pbVar21 + 0xb8) = pbStack_2c0;
                *(byte **)(pbVar21 + 0xc0) = pbStack_2b8;
                *(ulonglong *)(pbVar21 + 200) = uStack_2b0;
                pub_142e32760(&pbStack_248,&pbStack_3f8,0x90);
                uStack_f3 = 0;
                cStack_f2 = cVar16;
                pdb_1414b5fd0(&pbStack_2d8,ppbVar35,ppbVar36,&pbStack_248);
                if (!SBORROW8(0,(longlong)pbStack_2d8)) {
                  uStack_f3 = 0;
                  cStack_f2 = cVar16;
                  pdb_1404df150(&pbStack_2d8);
                }
                if (lStack_338 != 0) {
                  pub_1406abac0(pbStack_330,lStack_338 * 0xc,4);
                }
                param_4 = pauStack_140;
                pauVar27 = pauStack_160;
                if (lStack_320 != 0) {
                  pub_1406abac0((byte *)auStack_318._0_8_,lStack_320 << 2,4);
                }
                if ((cVar16 != '\0') && (pbStack_178 != (byte *)0x0)) {
                  pub_1406abac0(pbStack_108,(longlong)pbStack_178 * 0xc,4);
                }
                pbVar21 = pbStack_190;
                ppbVar35 = ppbStack_138;
                if (pbStack_190 != pbStack_188) goto LAB_1408950e7;
                goto LAB_1408962a7;
              }
              uVar33 = (ushort)(uVar57 - 1) & (ushort)uVar57;
              uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar33);
            } while (uVar33 != 0);
          }
          auVar43[0] = -(auVar50[0] == -1);
          auVar43[1] = -(auVar50[1] == -1);
          auVar43[2] = -(auVar50[2] == -1);
          auVar43[3] = -(auVar50[3] == -1);
          auVar43[4] = -(auVar50[4] == -1);
          auVar43[5] = -(auVar50[5] == -1);
          auVar43[6] = -(auVar50[6] == -1);
          auVar43[7] = -(auVar50[7] == -1);
          auVar43[8] = -(auVar50[8] == -1);
          auVar43[9] = -(auVar50[9] == -1);
          auVar43[10] = -(auVar50[10] == -1);
          auVar43[0xb] = -(auVar50[0xb] == -1);
          auVar43[0xc] = -(auVar50[0xc] == -1);
          auVar43[0xd] = -(auVar50[0xd] == -1);
          auVar43[0xe] = -(auVar50[0xe] == -1);
          auVar43[0xf] = -(auVar50[0xf] == -1);
          if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x2f,0) & 1) != 0) || (SUB161(auVar43 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
          uVar25 = uVar25 + lVar32 + 0x10;
          lVar32 = lVar32 + 0x10;
        }
      }
    }
LAB_140895ad5:
    param_4 = pauStack_140;
    if (lStack_338 != 0) {
      pub_1406abac0(pbStack_330,lStack_338 * 0xc,4);
    }
    ppbVar35 = ppbStack_138;
    if (lStack_320 != 0) {
      pub_1406abac0((byte *)auStack_318._0_8_,lStack_320 << 2,4);
      ppbVar35 = ppbStack_138;
    }
  }
  uStack_f1 = 1;
  pdb_1404df150(&pbStack_3f8);
LAB_140895b35:
  pbVar26 = pbStack_168;
  pbVar28 = pbStack_170;
  uVar25 = (longlong)pbStack_168 * 0xc;
  if ((byte *)0xaaaaaaaaaaaaaaa < pbStack_168) {
    param_3 = (byte *)0x0;
LAB_140896420:
    uStack_f1 = 1;
    pdb_142dc7e2a(param_3,uVar25);
    goto LAB_140896695;
  }
  if (uVar25 == 0) {
    pbStack_100 = (byte *)0x4;
    pbStack_108 = (byte *)0x0;
    pbVar24 = pbStack_108;
  }
  else {
    pdb_14007ee60();
    param_3 = (byte *)0x4;
    pbStack_100 = pub_1406abab0(uVar25,4);
    pbVar24 = pbVar26;
    if (pbStack_100 == (byte *)0x0) goto LAB_140896420;
  }
  pbStack_108 = pbVar24;
  pauStack_140 = param_4;
  if (pbVar26 != (byte *)0x0) {
    pub_142e32760(pbStack_100,pbVar28,uVar25);
  }
  pbVar28 = *(byte **)(pbVar21 + 0x78);
  uVar25 = (longlong)pbVar28 * 8;
  if (0x7ffffffffffffffc < uVar25 || (ulonglong)pbVar28 >> 0x3d != 0) {
    param_3 = (byte *)0x0;
LAB_14089645d:
    pdb_142dc7e2a(param_3,uVar25);
    goto LAB_140896695;
  }
  uVar23 = *(undefined8 *)(pbVar21 + 0x70);
  if (uVar25 == 0) {
    pbStack_130 = (byte *)0x4;
    pbStack_158 = (byte *)0x0;
    pbVar24 = pbStack_158;
  }
  else {
    pdb_14007ee60();
    param_3 = (byte *)0x4;
    pbStack_130 = pub_1406abab0(uVar25,4);
    pbVar24 = pbVar28;
    if (pbStack_130 == (byte *)0x0) goto LAB_14089645d;
  }
  pbStack_158 = pbVar24;
  ppbStack_138 = ppbVar35;
  if (pbVar28 != (byte *)0x0) {
    pub_142e32760(pbStack_130,uVar23,uVar25);
  }
  uVar20 = *(ulonglong *)(pbVar21 + 0x60);
  uVar25 = uVar20 * 4;
  if (uVar25 < 0x7ffffffffffffffd && uVar20 >> 0x3e == 0) {
    uVar23 = *(undefined8 *)(pbVar21 + 0x58);
    if (uVar25 == 0) {
      pbStack_150 = (byte *)0x4;
      uStack_148 = 0;
      uVar15 = uStack_148;
    }
    else {
      pdb_14007ee60();
      param_3 = (byte *)0x4;
      pbStack_150 = pub_1406abab0(uVar25,4);
      uVar15 = uVar20;
      if (pbStack_150 == (byte *)0x0) goto LAB_140896471;
    }
    uStack_148 = uVar15;
    if (uVar20 != 0) {
      pub_142e32760(pbStack_150,uVar23,uVar25);
    }
    pauVar27 = pauStack_160;
    uVar25 = *(ulonglong *)(pbVar21 + 0x140);
    if (uVar25 < 2) {
      pbVar24 = pbVar21 + 0x130;
    }
    else {
      pbVar24 = *(byte **)(pbVar21 + 0x130);
      uVar25 = *(ulonglong *)(pbVar21 + 0x138);
    }
    pbStack_2c8 = (byte *)0x0;
    ppbVar36 = &pbStack_2d8;
    pdb_1414e3700(ppbVar36,pbVar24,pbVar24 + uVar25 * 4);
    ppbVar35 = ppbStack_138;
    uStack_1d8 = pbStack_2c8;
    pbStack_1e8 = pbStack_2d8;
    pbStack_1e0 = pbStack_2d0;
    pbStack_248 = pbStack_108;
    pbStack_240 = pbStack_100;
    pbStack_238 = pbVar26;
    pbStack_230 = pbStack_158;
    pbStack_228 = pbStack_130;
    uStack_218 = uStack_148;
    pbStack_210 = pbStack_150;
    uStack_200 = 0;
    uStack_1f8 = 4;
    uStack_1f0 = 0;
    iStack_1d0 = iStack_118;
    iStack_1cc = iStack_120;
    iStack_1c8 = iStack_124;
    uStack_1be = (undefined1)uStack_110;
    uStack_1c0 = (undefined1)uStack_114;
    iStack_1c4 = iStack_11c;
    uStack_1bf = (undefined1)uStack_10c;
    uStack_f1 = 1;
    pbStack_220 = pbVar28;
    uStack_208 = uVar20;
    pdb_1414b5fd0(ppbVar36,ppbStack_138,ppbStack_198,&pbStack_248);
    param_4 = pauStack_140;
    if (!SBORROW8(0,(longlong)pbStack_2d8)) {
      uStack_f1 = 1;
      pdb_1404df150(&pbStack_2d8);
    }
    pbStack_2c8 = pbStack_168;
    pbStack_2d8 = pbStack_178;
    pbStack_2d0 = pbStack_170;
    uStack_f1 = 0;
    pdb_140080930(&pbStack_248,&pbStack_2d8,1);
    pbVar28 = pbStack_248;
    if (!SBORROW8(0,(longlong)pbStack_248)) {
      pbStack_2b8 = pbStack_220;
      uStack_2b0 = uStack_218;
      pbStack_2c8 = pbStack_230;
      pbStack_2c0 = pbStack_228;
      pbStack_2d8 = pbStack_240;
      pbStack_2d0 = pbStack_238;
    }
    lVar19 = *(longlong *)(pbVar21 + 0x98);
    if (!SBORROW8(0,lVar19)) {
      if (lVar19 != 0) {
        pub_1406abac0(*(byte **)(pbVar21 + 0xa0),lVar19 * 0xc,4);
      }
      if (*(longlong *)(pbVar21 + 0xb0) != 0) {
        pub_1406abac0(*(byte **)(pbVar21 + 0xb8),*(longlong *)(pbVar21 + 0xb0) << 2,4);
      }
    }
    *(byte **)(pbVar21 + 0x98) = pbVar28;
    *(byte **)(pbVar21 + 0xa0) = pbStack_2d8;
    *(byte **)(pbVar21 + 0xa8) = pbStack_2d0;
    *(byte **)(pbVar21 + 0xb0) = pbStack_2c8;
    *(byte **)(pbVar21 + 0xb8) = pbStack_2c0;
    *(byte **)(pbVar21 + 0xc0) = pbStack_2b8;
    *(ulonglong *)(pbVar21 + 200) = uStack_2b0;
    pbVar21[0x148] = 1;
    pbVar21 = pbStack_190;
    if (pbStack_190 == pbStack_188) goto LAB_1408962a7;
    goto LAB_1408950e7;
  }
  param_3 = (byte *)0x0;
LAB_140896471:
  pdb_142dc7e2a(param_3,uVar25);
  goto LAB_140896695;
}

