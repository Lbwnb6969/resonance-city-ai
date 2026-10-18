// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::construct_wooden_wall_boards<system_wall_constructor::construct_walls::construct_walls::closure_env$9,system_wall_constructor::construct_walls::construct_walls::closure_env$10,system_wall_constructor::construct_walls::construct_walls::closure_env$11>
// VA 0x14144a4c0, PDB extent 35831 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::construct_wooden_wall_boards<system_wall_constructor::construct_walls::construct_walls::closure_env$9,system_wall_constructor::construct_walls::construct_walls::closure_env$10,system_wall_constructor::construct_walls::construct_walls::closure_env$11>
   Extent: 35831 bytes. No whole-program auto-analysis. */

ulonglong *
pdb_14144a4c0(ulonglong *param_1,float *param_2,float *param_3,float *param_4,longlong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             longlong param_10,undefined8 *param_11,undefined8 *param_12,undefined8 *param_13,
             undefined8 *param_14)

{
  float *pfVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  char *pcVar18;
  float *pfVar19;
  float *pfVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float *pfVar28;
  int iVar29;
  float **ppfVar30;
  undefined1 auVar31 [8];
  float *pfVar32;
  byte bVar33;
  longlong lVar34;
  ulonglong *puVar35;
  bool bVar36;
  float extraout_XMM0_Da;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float extraout_XMM0_Da_00;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar44 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar47 [16];
  undefined1 auVar51 [12];
  float fVar48;
  undefined1 auVar49 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar50 [12];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  float fVar84;
  undefined1 auVar85 [16];
  ulonglong in_stack_fffffffffffffa78;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined8 in_stack_fffffffffffffa90;
  undefined8 in_stack_fffffffffffffa98;
  undefined8 in_stack_fffffffffffffaa0;
  float *pfStack_538;
  longlong lStack_530;
  longlong lStack_528;
  undefined8 uStack_520;
  float *pfStack_518;
  float *pfStack_510;
  float **ppfStack_508;
  float fStack_4fc;
  undefined1 auStack_4e8 [16];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 auStack_4b8 [16];
  float *apfStack_4a8 [2];
  undefined8 uStack_498;
  undefined8 uStack_490;
  longlong lStack_488;
  undefined8 uStack_480;
  float *pfStack_478;
  ulonglong *puStack_468;
  float *pfStack_460;
  undefined8 uStack_458;
  float fStack_450;
  float fStack_44c;
  undefined8 uStack_448;
  float fStack_440;
  float fStack_43c;
  float *pfStack_438;
  float *pfStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  float *pfStack_418;
  ulonglong uStack_410;
  float **ppfStack_408;
  undefined8 uStack_400;
  float fStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  float *pfStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  float *pfStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  undefined1 auStack_398 [8];
  float fStack_390;
  float fStack_38c;
  undefined1 auStack_388 [16];
  float *pfStack_378;
  float *pfStack_370;
  float *pfStack_368;
  float fStack_360;
  char cStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  longlong lStack_348;
  longlong lStack_338;
  float *pfStack_330;
  float *pfStack_328;
  longlong lStack_320;
  float *pfStack_318;
  float *pfStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2d8 [4];
  undefined1 auStack_2d4 [8];
  float fStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  float *pfStack_2b8;
  float fStack_2b0;
  char cStack_2ac;
  float *pfStack_2a0;
  undefined1 auStack_298 [8];
  float fStack_290;
  float fStack_28c;
  float *pfStack_280;
  float *pfStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float *pfStack_260;
  longlong lStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [8];
  float fStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  float *pfStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float *pfStack_1f8;
  longlong *plStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  longlong lStack_1b8;
  longlong *plStack_1b0;
  float *pfStack_1a8;
  undefined1 uStack_19a;
  undefined1 uStack_199;
  float *pfStack_198;
  undefined8 uStack_190;
  float fStack_188;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  float *pfStack_128;
  undefined4 uStack_11c;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffaa0 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffa90 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  if (param_3[0xa4] <= _DAT_142e37848) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  puStack_468 = param_1;
  pfStack_1a8 = param_4;
  pfStack_100 = param_2;
  pfStack_f8 = param_3;
  if (((uint)param_3[0x96] < 2) && (*(char *)((longlong)param_3 + 0x29e) != '\x01')) {
    pcVar18 = (char *)pdb_14092fa10(param_3);
    pfVar20 = pfStack_f8;
    uVar15 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
    if (pcVar18 != (char *)0x0) {
      if (*pcVar18 == '\0') {
        auStack_1d8._0_8_ = *param_14;
        pdb_141483d90(&pfStack_438,pfStack_f8);
        pdb_141483630(apfStack_4a8,pfVar20,&pfStack_438);
        if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
           (cVar8 = pdb_140b77b50(param_10), cVar8 == '\0')) {
          fVar37 = _DAT_142e36f28;
          if ((uStack_498 != (float *)0x0) &&
             (fVar37 = apfStack_4a8[1][4], uStack_498 != (float *)0x1)) {
            lVar34 = ((longlong)uStack_498 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar19 = apfStack_4a8[1] + 9;
            do {
              fVar39 = *pfVar19;
              uVar23 = CONCAT44((uint)((int)fVar39 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                       CONCAT44(fVar39,fVar37);
              uVar11 = -(uint)((int)(uVar23 >> 0x20) < (int)uVar23);
              pfVar20 = (float *)(ulonglong)uVar11;
              if ((uVar11 & 1) == 0) {
                fVar37 = fVar39;
              }
              pfVar19 = pfVar19 + 5;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        else {
          fVar37 = (float)pdb_14092f880();
        }
        pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_400._4_4_);
        if (param_5 == 0) {
LAB_14144fca6:
          puVar21 = (undefined8 *)0x0;
          pfVar20 = (float *)0x0;
          uVar42 = 4;
        }
        else {
          uVar42 = pdb_140a6a370(param_5);
          uStack_178._0_4_ = (float)uVar42;
          uStack_178._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
          uStack_170._0_4_ = SUB84(pfVar20,0);
          uStack_170._4_4_ = (float)((ulonglong)pfVar20 >> 0x20);
          uStack_168 = &pfStack_438;
          pdb_1413e9710(auStack_248,&uStack_178);
          if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144fca6;
          puVar21 = uStack_238;
          pfVar20 = _auStack_248;
          uVar42 = stack0xfffffffffffffdc0;
        }
        lStack_148 = (longlong)puVar21 * 0xc;
        uStack_178._0_4_ = SUB84(pfVar20,0);
        uStack_178._4_4_ = (float)((ulonglong)pfVar20 >> 0x20);
        uStack_170._0_4_ = (float)uVar42;
        uStack_170._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
        uStack_168._0_4_ = SUB84(puVar21,0);
        uStack_168._4_4_ = (float)((ulonglong)puVar21 >> 0x20);
        uStack_138 = pfStack_198._0_4_;
        uStack_160._0_4_ = 0.0;
        uStack_160._4_4_ = 0.0;
        uStack_158 = 4;
        fStack_154 = 0.0;
        fStack_150 = 0.0;
        fStack_14c = 0.0;
        uStack_140 = 0;
        uStack_134 = 0;
        if (param_10 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = pdb_140b77b50();
        }
        uVar42 = CONCAT44(uVar15,fVar37 + _DAT_142e3787c);
        uVar71 = CONCAT44(uVar13,0x3ec9eecc);
        pdb_1414899d0(&pfStack_378,pfStack_100,pfStack_f8,&pfStack_438,uVar42,pfStack_1a8,param_6,
                      param_7,uVar71,uVar9);
        fVar39 = _DAT_142e37ad4;
        fVar37 = _DAT_142e36f28;
        pfVar20 = pfStack_370;
        pfVar19 = pfStack_378;
        if ((uStack_420._4_4_ != 2 & ((byte)(uStack_420 >> 0x20) ^ 1)) != 0) {
          lStack_528 = 0;
          uStack_520 = 0;
          pfStack_538 = (float *)0x0;
          lStack_530 = 0;
          pfStack_518 = (float *)0x0;
          pfStack_1f8 = pfStack_378;
          pfStack_3b8 = pfStack_370 + (longlong)pfStack_368 * 10;
          cVar8 = uStack_490._4_1_;
          fVar41 = (float)uStack_490;
          auStack_1e8 = ZEXT416(_DAT_142e377e0 & (uint)(float)uStack_490);
          pfStack_278 = pfStack_370;
          pfVar25 = pfStack_370;
          while ((pfVar20 = pfStack_278, pfVar19 = pfStack_1f8, pfVar25 != pfStack_3b8 &&
                 (uVar23 = *(ulonglong *)pfVar25, uVar23 != 2))) {
            uVar26 = *(ulonglong *)(pfVar25 + 2);
            uStack_268 = *(float **)(pfVar25 + 4);
            pfStack_260 = *(float **)(pfVar25 + 6);
            uVar27 = 4;
            if ((uVar23 & 1) != 0) {
              uVar27 = uVar26;
            }
            if (4 < uVar27) {
              pdb_142dc81f2(uVar27,5,&UNK_14330d158);
              goto LAB_14145130b;
            }
            pfStack_180 = pfVar25;
            pfVar20 = (&pfStack_538)[uVar27];
            (&pfStack_538)[uVar27] = (float *)((longlong)pfVar20 + 1);
            lVar34 = uVar26 * 1000000;
            if ((uVar23 & 1) == 0) {
              lVar34 = 0;
            }
            lVar34 = lVar34 + (longlong)pfVar20;
            uVar42 = CONCAT71((int7)((ulonglong)uVar42 >> 8),1);
            uVar43 = param_9;
            pdb_1414882c0(auStack_248,pfStack_100,lVar34,&uStack_268,uVar42,param_9);
            pfStack_110 = _auStack_248;
            pfStack_108 = stack0xfffffffffffffdc0;
            if (uStack_238 != (undefined8 *)0x0) {
              pfVar19 = stack0xfffffffffffffdc0 + (longlong)uStack_238 * 4;
              pfVar20 = stack0xfffffffffffffdc0;
              do {
                uStack_2c8 = *(float **)pfVar20;
                uStack_2c0 = *(float **)(pfVar20 + 2);
                fVar60 = (float)pdb_140deec10(&uStack_2c8);
                fVar79 = (float)uStack_2c8;
                fVar63 = (float)uStack_2c0;
                if (cVar8 == '\0') {
                  if (fVar41 < 0.0) {
                    uStack_358 = (float *)((ulonglong)uStack_358 & 0xffffffff00000000);
                    fStack_1c8 = fVar41;
                    stack0xfffffffffffffdc0 = (float *)pdb_140f705d0;
                    _auStack_248 = (float *)&uStack_358;
                    uStack_238 = (undefined8 *)&fStack_1c8;
                    uStack_230 = pdb_140f705d0;
                    pdb_142dc83d0(&UNK_14330d000,auStack_248,&UNK_14330d0a0);
                    goto LAB_14145130b;
                  }
                }
                else {
                  func_0x000142e32a70();
                }
                pdb_141483090(auStack_248,apfStack_4a8);
                uVar10 = (undefined4)((ulonglong)uVar42 >> 0x20);
                uVar13 = (undefined4)((ulonglong)uVar43 >> 0x20);
                uVar14 = (undefined4)((ulonglong)param_6 >> 0x20);
                uVar15 = (undefined4)((ulonglong)param_7 >> 0x20);
                uVar86 = (undefined4)((ulonglong)uVar71 >> 0x20);
                fVar40 = fVar37;
                if (auStack_248 == (undefined1  [4])0x1) {
                  fVar40 = uStack_220._4_4_ * (float)uStack_220 +
                           (fVar37 - uStack_220._4_4_) * uStack_238._4_4_;
                }
                if (0.0 < fVar60) {
                  fVar38 = uStack_2c8._4_4_;
                  fVar60 = fVar40;
                  if (uStack_2c0._4_4_ <= fVar40) {
                    fVar60 = uStack_2c0._4_4_;
                  }
                  fVar60 = (float)(~-(uint)NAN(uStack_2c0._4_4_) & (uint)fVar60 |
                                  -(uint)NAN(uStack_2c0._4_4_) & (uint)fVar40) - uStack_2c8._4_4_;
                  if (fVar39 <= fVar60) {
                    fStack_1c8 = SUB84(pfStack_100,0);
                    fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                    lVar22 = pdb_140315970(&fStack_1c8);
                    _auStack_248 = (float *)(lVar22 * 0x184b + lVar34 * 0x14b291 + 0x75);
                    fVar40 = (float)pdb_140e02880(auStack_248);
                    fStack_1c8 = SUB84(pfStack_100,0);
                    fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                    lVar22 = pdb_140315970(&fStack_1c8);
                    _auStack_248 = (float *)(lVar22 * 0xeb3b + lVar34 * 0x101eb1 + 0x11);
                    fVar73 = (float)pdb_140e02880(auStack_248);
                    unique0x10006953 = (float *)uStack_410;
                    _auStack_248 = pfStack_418;
                    uVar71 = CONCAT44(uVar86,(fVar73 * _DAT_142e37840 -
                                             (fVar37 - fVar73) * _DAT_142e37840) + _DAT_142e3c630);
                    param_7 = CONCAT44(uVar15,fVar60 + fVar40 * fVar39 + (fVar37 - fVar40) * 0.0);
                    param_6 = CONCAT44(uVar14,fVar38);
                    uVar43 = CONCAT44(uVar13,fVar63);
                    uVar42 = CONCAT44(uVar10,fVar79);
                    pdb_1414530c0(pfStack_100,lVar34,auStack_248,pfStack_198._0_4_,uVar42,uVar43,
                                  param_6,param_7,uVar71,&uStack_178,auStack_1d8._0_8_);
                  }
                }
                pfVar20 = pfVar20 + 4;
              } while (pfVar20 != pfVar19);
            }
            pfVar25 = pfStack_180 + 10;
            if (pfStack_110 != (float *)0x0) {
              func_0x0001406abac0(pfStack_108,(longlong)pfStack_110 << 4,4);
            }
          }
        }
        if (pfVar19 != (float *)0x0) {
          func_0x0001406abac0(pfVar20,(longlong)pfVar19 * 0x28,8);
        }
        pdb_141483d90(auStack_248,pfStack_f8);
        pdb_141483630(&pfStack_538,pfStack_f8,auStack_248);
        if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
           (cVar8 = pdb_140b77b50(param_10), cVar8 == '\0')) {
          fVar37 = _DAT_142e36f28;
          if ((lStack_528 != 0) && (fVar37 = *(float *)(lStack_530 + 0x10), lStack_528 != 1)) {
            lVar34 = (lStack_528 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar20 = (float *)(lStack_530 + 0x24);
            do {
              fVar39 = *pfVar20;
              uVar23 = CONCAT44((uint)((int)fVar39 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                       CONCAT44(fVar39,fVar37);
              if ((int)uVar23 <= (int)(uVar23 >> 0x20)) {
                fVar37 = fVar39;
              }
              pfVar20 = pfVar20 + 5;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        else {
          fVar37 = (float)pdb_14092f880(pfStack_f8);
        }
        if ((((uint)pfStack_f8[0x96] < 2) &&
            (cVar8 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3), param_10 != 0 && cVar8 == '\0'))
           && ((cVar8 = pdb_140b77b50(param_10), cVar8 != '\0' &&
               ((cVar8 = pdb_140901380(param_10 + 0x3d), cVar8 != '\0' &&
                (((ulonglong)uStack_230 & 0x100000000) == 0 && uStack_230._4_4_ != 2)))))) {
          fVar37 = fVar37 + _DAT_142e3787c;
          pdb_1414858e0(&uStack_2c8,auStack_248,pfStack_1a8,fVar37);
          uVar10 = uStack_210._4_4_;
          pdb_1414851c0(&uStack_268,0);
          pfStack_108 = uStack_268;
          auStack_1e8._0_8_ = pfStack_260;
          if (lStack_258 != 0) {
            pfStack_198 = pfStack_260 + lStack_258 * 2;
            pfStack_f8 = uStack_2c0;
            pfVar19 = uStack_2c0 + (longlong)pfStack_2b8 * 4;
            lVar34 = 0;
            pfVar20 = pfStack_260;
            do {
              uVar23 = *(ulonglong *)pfVar20;
              pfVar20 = pfVar20 + 2;
              pfVar25 = pfStack_f8;
              do {
                fVar39 = (float)(uVar23 >> 0x20);
                if (pfVar25 == pfVar19) {
                  uStack_268 = pfStack_228;
                  pfStack_260 = uStack_220;
                  pdb_1414530c0(pfStack_100,lVar34 + 4000000,&uStack_268,uVar10,uVar23 & 0xffffffff,
                                fVar39,fVar37,0x3f19999a,0x3ea3d70a,&uStack_178,auStack_1d8._0_8_);
                  break;
                }
                fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
                uStack_268 = (float *)CONCAT44(pfVar25[2],*pfVar25);
                pfStack_260 = (float *)((ulonglong)pfStack_260 & 0xffffffffffffff00);
                fStack_1c8 = (float)uVar23;
                fStack_1c4 = fVar39;
                cVar8 = pdb_1419ba150(&fStack_1c8,&uStack_268);
                pfVar25 = pfVar25 + 4;
              } while (cVar8 == '\0');
              lVar34 = lVar34 + 1;
            } while (pfVar20 != pfStack_198);
          }
          if (pfStack_108 != (float *)0x0) {
            func_0x0001406abac0(auStack_1e8._0_8_,(longlong)pfStack_108 << 3,4);
          }
          if (uStack_2c8 != (float *)0x0) {
            func_0x0001406abac0(uStack_2c0,(longlong)uStack_2c8 << 4,4);
          }
        }
        if (pfStack_538 != (float *)0x0) {
          func_0x0001406abac0(lStack_530,(longlong)pfStack_538 * 0x14,4);
        }
        puStack_468[2] = CONCAT44(fStack_14c,fStack_150);
        *puStack_468 = CONCAT44(uStack_160._4_4_,(float)uStack_160);
        puStack_468[1] = CONCAT44(fStack_154,uStack_158);
        puStack_468[3] = uStack_140;
        pfVar20 = uStack_178;
        pfVar19 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
joined_r0x000141451096:
        if (pfVar20 != (float *)0x0) {
          func_0x0001406abac0(pfVar19,(longlong)pfVar20 << 4,4);
        }
        pfVar20 = apfStack_4a8[0];
        pfVar19 = apfStack_4a8[1];
        goto joined_r0x00014144d562;
      }
      plStack_1b0 = (longlong *)*param_12;
      auStack_398 = (undefined1  [8])*param_13;
      pdb_141483d90(&pfStack_538,pfStack_f8);
      pdb_141483630(&pfStack_378,pfVar20,&pfStack_538);
      if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
         (cVar8 = pdb_140b77b50(param_10), cVar8 == '\0')) {
        fVar37 = _DAT_142e36f28;
        if ((pfStack_368 != (float *)0x0) && (fVar37 = pfStack_370[4], pfStack_368 != (float *)0x1))
        {
          lVar34 = ((longlong)pfStack_368 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar19 = pfStack_370 + 9;
          do {
            fVar39 = *pfVar19;
            uVar23 = CONCAT44((uint)((int)fVar39 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                     CONCAT44(fVar39,fVar37);
            uVar11 = -(uint)((int)(uVar23 >> 0x20) < (int)uVar23);
            pfVar20 = (float *)(ulonglong)uVar11;
            if ((uVar11 & 1) == 0) {
              fVar37 = fVar39;
            }
            pfVar19 = pfVar19 + 5;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      else {
        fVar37 = (float)pdb_14092f880();
      }
      if (param_5 == 0) {
LAB_14144eb13:
        puStack_428 = (undefined8 *)0x0;
        pfStack_438 = (float *)0x0;
        pfStack_430 = (float *)0x4;
      }
      else {
        uVar42 = pdb_140a6a370(param_5);
        uStack_178._0_4_ = (float)uVar42;
        uStack_178._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
        uStack_170._0_4_ = SUB84(pfVar20,0);
        uStack_170._4_4_ = (float)((ulonglong)pfVar20 >> 0x20);
        uStack_168 = &pfStack_538;
        pdb_1413e9710(auStack_248,&uStack_178);
        if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144eb13;
        puStack_428 = uStack_238;
        pfStack_438 = _auStack_248;
        pfStack_430 = stack0xfffffffffffffdc0;
      }
      ppfStack_408 = (float **)((longlong)puStack_428 * 0xc);
      fStack_3f8 = fStack_4fc;
      uStack_420 = 0;
      pfStack_418 = (float *)0x4;
      uStack_410 = 0;
      uStack_400 = 0;
      uStack_3f4 = 0;
      if (param_10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = pdb_140b77b50();
      }
      uStack_168._0_4_ = (float)param_11[2];
      uStack_168._4_4_ = (float)((ulonglong)param_11[2] >> 0x20);
      uStack_178._0_4_ = (float)*param_11;
      uStack_178._4_4_ = (float)((ulonglong)*param_11 >> 0x20);
      uStack_170._0_4_ = (float)param_11[1];
      uStack_170._4_4_ = (float)((ulonglong)param_11[1] >> 0x20);
      pdb_141489480(&uStack_2f8,pfStack_f8,&pfStack_538,fVar37 + _DAT_142e3787c,1,&uStack_178,uVar9)
      ;
      pdb_1414877d0(&uStack_3d8,pfStack_f8,&pfStack_538,&uStack_2f8,pfStack_1a8,param_6,param_7,
                    CONCAT44(uVar10,0x3ebd2200));
      uStack_199 = 1;
      pdb_141489790(&uStack_268,&pfStack_538,param_11);
      uStack_498 = (float *)0x0;
      uStack_490 = (float *)0x0;
      apfStack_4a8[0] = (float *)0x0;
      apfStack_4a8[1] = (float *)0x0;
      lStack_488 = 0;
      auStack_4e8._0_8_ = uStack_3d8;
      pfStack_310 = uStack_3d0 + lStack_3c8 * 10;
      lStack_320 = (longlong)pfStack_f8 + 0x29d;
      plStack_1f0 = (longlong *)
                    CONCAT44(plStack_1f0._4_4_,
                             CONCAT31((int3)(uStack_520 >> 0x28),
                                      (byte)(uStack_520 >> 0x20) | uStack_520._4_4_ == 2));
      auStack_388._0_4_ = _DAT_142f57bcc / fStack_4fc;
      pfStack_330 = uStack_3d0;
      auStack_4b8._0_4_ = fStack_4fc;
      pfVar20 = uStack_3d0;
      while ((pfVar20 != pfStack_310 && (pfVar19 = *(float **)pfVar20, pfVar19 != (float *)0x2))) {
        uVar23 = *(ulonglong *)(pfVar20 + 2);
        auStack_1d8[0] = *(undefined1 *)((longlong)pfVar20 + 0x21);
        fStack_1c8 = (float)*(undefined8 *)(pfVar20 + 4);
        fStack_1c4 = (float)((ulonglong)*(undefined8 *)(pfVar20 + 4) >> 0x20);
        fStack_1c0 = (float)*(undefined8 *)(pfVar20 + 6);
        fStack_1bc = (float)((ulonglong)*(undefined8 *)(pfVar20 + 6) >> 0x20);
        uVar26 = 4;
        if (((ulonglong)pfVar19 & 1) != 0) {
          uVar26 = uVar23;
        }
        if (4 < uVar26) {
          pdb_142dc81f2(uVar26,5,&UNK_14330d158);
          goto LAB_14145130b;
        }
        pfStack_318 = pfVar20;
        pfVar20 = apfStack_4a8[uVar26];
        apfStack_4a8[uVar26] = (float *)((longlong)pfVar20 + 1);
        lVar34 = uVar23 * 1000000;
        if (((ulonglong)pfVar19 & 1) == 0) {
          lVar34 = 0;
        }
        lVar34 = lVar34 + (longlong)pfVar20;
        _auStack_2d8 = lVar34;
        pfStack_198 = pfVar19;
        pdb_1414882c0(&uStack_178,pfStack_100,lVar34,&fStack_1c8,1,param_9);
        pfStack_280 = uStack_178;
        puVar35 = (ulonglong *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        uStack_270 = puVar35;
        if (CONCAT44(uStack_168._4_4_,(float)uStack_168) != 0) {
          auStack_1e8._0_8_ = puVar35 + CONCAT44(uStack_168._4_4_,(float)uStack_168) * 2;
          lStack_338 = _auStack_2d8 * 0xf4243 + 0x11;
          pfStack_278 = (float *)(_auStack_2d8 * 0x101eb1 + 0x11);
          pfStack_180 = (float *)(_auStack_2d8 * 0x14b291 + 0x75);
          pfStack_2a0 = (float *)(uVar23 + 1);
          do {
            uStack_308 = (float *)*puVar35;
            uStack_300 = puVar35[1];
            param_7 = CONCAT71((int7)((ulonglong)param_7 >> 8),auStack_1d8[0]);
            pfVar19 = pfStack_198;
            uVar26 = uVar23;
            pdb_14148a930(&uStack_178,param_10,&pfStack_538,&pfStack_378,pfStack_198,uVar23,param_7,
                          &uStack_308);
            iVar12 = (int)(float)uStack_168;
            lVar34 = lStack_258;
            pfVar20 = pfStack_260;
            uVar10 = (undefined4)((ulonglong)pfVar19 >> 0x20);
            uVar13 = (undefined4)(uVar26 >> 0x20);
            if ((float)uStack_168 != 2.8026e-45) {
              uStack_358 = uStack_178;
              uStack_350 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
              pfStack_3b8 = (float *)CONCAT44((float)uStack_160,uStack_168._4_4_);
              uStack_3b0 = CONCAT44(uStack_158,uStack_160._4_4_);
              pfStack_1f8 = (float *)CONCAT44(pfStack_1f8._4_4_,fStack_154);
              uStack_4d0 = pfStack_100;
              fVar37 = (float)pdb_140deec10(&uStack_358);
              fVar39 = ((float)uStack_358 + (float)uStack_350) * _DAT_142e36f50;
              pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,(float)uStack_350);
              pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,(float)uStack_358);
              if (cStack_35c == '\0') {
                if (fStack_360 < 0.0) {
                  uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
                  auStack_248 = (undefined1  [4])fStack_360;
                  uStack_178 = (float *)&uStack_190;
                  uStack_170._0_4_ = 7.7194595;
                  uStack_170._4_4_ = 1.4013e-45;
                  uStack_168 = (float **)auStack_248;
                  uStack_160._0_4_ = 7.7194595;
                  uStack_160._4_4_ = 1.4013e-45;
                  pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
                  goto LAB_14145130b;
                }
              }
              else {
                func_0x000142e32a70();
              }
              pdb_141483090(&uStack_178,&pfStack_378);
              fVar41 = _DAT_142e36f28;
              if ((float)uStack_178 == 1.4013e-45) {
                fVar41 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
              }
              auVar85 = ZEXT416((uint)fVar41);
              lVar34 = lVar34 << 3;
              do {
                if (lVar34 == 0) {
                  pdb_14092f8d0(&uStack_178,pfStack_f8);
                  if ((char)uStack_178 != '\0') {
                    uVar42 = pdb_140930390(pfStack_f8);
                    auVar58._8_4_ = (int)extraout_XMM0_Qb_07;
                    auVar58._0_8_ = uVar42;
                    auVar58._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
                    if (fVar41 <= (float)uVar42) {
                      auVar58._0_4_ = fVar41;
                    }
                    auVar85._0_4_ = ~-(uint)NAN(fVar41) & auVar58._0_4_;
                    auVar85._4_4_ = auVar58._4_4_;
                    auVar85._8_4_ = auVar58._8_4_;
                    auVar85._12_4_ = auVar58._12_4_;
                    auVar85 = auVar85 | ZEXT416(-(uint)NAN(fVar41) & (uint)(float)uVar42);
                  }
                  goto LAB_14144f147;
                }
                fVar79 = *pfVar20;
                lVar34 = lVar34 + -8;
                pfVar19 = pfVar20 + 2;
                pfVar25 = pfVar20 + 1;
                pfVar20 = pfVar19;
              } while ((fVar39 < fVar79 + _DAT_142e3784c) || (*pfVar25 + _DAT_142e37870 < fVar39));
              pdb_14092f8d0(&uStack_178,pfStack_f8);
LAB_14144f147:
              cVar8 = pdb_140901380(lStack_320);
              fVar39 = 0.0;
              if ((cVar8 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
                _auStack_248 = pfStack_100;
                lVar34 = pdb_140315970(auStack_248);
                uStack_178 = (float *)(lVar34 * 0x10c6f + lStack_338);
                fVar39 = (float)pdb_140e02880(&uStack_178);
                fVar39 = fVar39 * _DAT_142e3787c + (_DAT_142e36f28 - fVar39) * 0.0;
              }
              _auStack_248 = pfStack_100;
              lVar34 = pdb_140315970(auStack_248);
              uStack_178 = (float *)(lVar34 * 0xeb3b + (longlong)pfStack_278);
              fVar41 = (float)pdb_140e02880(&uStack_178);
              _auStack_248 = pfStack_100;
              lVar34 = pdb_140315970(auStack_248);
              uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_180);
              uVar42 = pdb_140e02880(&uStack_178);
              fVar63 = (float)uVar42 * _DAT_142e37ad4;
              fVar60 = (fVar41 * _DAT_142e37840 - (_DAT_142e36f28 - fVar41) * _DAT_142e37840) +
                       _DAT_142e3c630;
              fVar79 = uStack_358._4_4_;
              pdb_141483090(&uStack_178,&pfStack_378);
              fVar41 = _DAT_142e36f28;
              uVar14 = (undefined4)((ulonglong)param_7 >> 0x20);
              if ((float)uStack_178 == 1.4013e-45) {
                fVar40 = fStack_14c * (float)uStack_160 +
                         (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
                fVar38 = fStack_14c * uStack_160._4_4_ +
                         (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
              }
              else {
                fVar40 = 0.0;
                fVar38 = 0.0;
              }
              if (0.0 < fVar37) {
                fVar39 = auVar85._0_4_ + fVar39;
                fVar73 = fVar39;
                if (uStack_350._4_4_ <= fVar39) {
                  fVar73 = uStack_350._4_4_;
                }
                auVar77._0_4_ = ~-(uint)NAN(uStack_350._4_4_) & (uint)fVar73;
                auVar77._4_4_ = auVar85._4_4_;
                auVar77._8_4_ = auVar85._8_4_;
                auVar77._12_4_ = auVar85._12_4_;
                auVar77 = auVar77 | ZEXT416(-(uint)NAN(uStack_350._4_4_) & (uint)fVar39);
                fVar39 = auVar77._0_4_ - fVar79;
                if (_DAT_142e37ad4 <= fVar39) {
                  auVar62 = ZEXT816(0);
                  fVar63 = fVar63 + (_DAT_142e36f28 - (float)uVar42) * 0.0;
                  if (((ulonglong)plStack_1f0 & 1) == 0) {
                    uVar15 = auStack_4b8._0_4_;
                    uStack_2c8 = pfStack_518;
                    uStack_2c0 = pfStack_510;
                    uStack_190 = pfStack_100;
                    if ((_DAT_142e37848 < (float)auStack_4b8._0_4_) &&
                       (fVar63 = fVar63 + fVar39, _DAT_142e37ad4 <= fVar63)) {
                      if (NAN(pfStack_108._0_4_ / (float)auStack_4b8._0_4_)) {
                        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                        goto LAB_14145130b;
                      }
                      fVar37 = (float)func_0x000142e32a70(pfStack_108._0_4_ /
                                                          (float)auStack_4b8._0_4_,_DAT_142e36f28);
                      if (NAN(pfStack_110._0_4_ / (float)uVar15)) {
                        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                        goto LAB_14145130b;
                      }
                      fVar39 = (float)func_0x000142e32a70(pfStack_110._0_4_ / (float)uVar15,fVar41);
                      fVar41 = (float)pdb_141c40430((longlong)&uStack_2c0 + 4);
                      fVar40 = (float)pdb_141c40430((longlong)&uStack_2c0 + 4);
                      fVar38 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                                      (uint)(fVar37 + _DAT_142e36f28) & -(uint)(fVar37 < 0.0)) *
                               (float)auStack_4b8._0_4_;
                      fVar37 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                                      (uint)(fVar39 + _DAT_142e36f28) & -(uint)(fVar39 < 0.0)) *
                               (float)auStack_4b8._0_4_;
                      fVar40 = (float)auStack_388._0_4_ * fVar37 - fVar40;
                      fVar39 = fVar40 + _DAT_142f57bcc;
                      uStack_170._0_4_ =
                           (float)(-(uint)(fVar38 < fVar37) & (uint)fVar37 |
                                  ~-(uint)(fVar38 < fVar37) &
                                  (uint)((float)auStack_4b8._0_4_ + fVar37));
                      uStack_170._4_4_ = fVar79 + fVar63;
                      uStack_178._4_4_ = fVar79;
                      iVar12 = (int)&uStack_178;
                      uStack_178._0_4_ = fVar38;
                      uVar15 = pdb_1424bd0e0(&pfStack_438);
                      pdb_140df4540(auStack_248,&uStack_2c8);
                      fVar41 = fVar38 * (float)auStack_388._0_4_ - fVar41;
                      uVar11 = -(uint)(fVar41 < fVar40);
                      param_7 = CONCAT44(uVar14,~uVar11 & (uint)fVar39 | (uint)fVar40 & uVar11);
                      pdb_140aaa870(&uStack_178,auStack_248,(ulonglong)uStack_2c0 & 0xffffffff,
                                    fVar60,CONCAT44(uVar10,fVar63),CONCAT44(uVar13,fVar41),param_7,3
                                   );
                      uVar11 = pdb_140315970(&uStack_190);
                      pdb_140aaac40(auStack_248,&uStack_178,
                                    (uVar11 ^ (uint)auStack_2d8) + iVar12 * 10);
                      pdb_140aaa7d0(&uStack_178,auStack_248,2);
                      pdb_140aaab70(auStack_248,&uStack_178,uVar15);
                    }
                  }
                  else {
                    auStack_298._4_4_ = auVar77._4_4_;
                    auStack_298._0_4_ = fVar39 * _DAT_142e36f50;
                    fStack_290 = (float)auVar77._8_4_;
                    fStack_28c = (float)auVar77._12_4_;
                    if ((uStack_520 & 0x100000000) == 0) {
LAB_14144f707:
                      pdb_141483320(&uStack_190,&pfStack_378);
                    }
                    else {
                      uStack_168._0_4_ = SUB84(ppfStack_508,0);
                      uStack_168._4_4_ = (float)((ulonglong)ppfStack_508 >> 0x20);
                      uStack_170._0_4_ = SUB84(pfStack_510,0);
                      uStack_170._4_4_ = (float)((ulonglong)pfStack_510 >> 0x20);
                      uStack_178 = pfStack_518;
                      if (((ulonglong)pfStack_198 & 1) == 0) goto LAB_14144f707;
                      fVar41 = (float)pdb_140df3e10(&uStack_178,uVar23);
                      auVar56 = auVar62;
                      fVar73 = (float)pdb_140df3e10(&uStack_178,pfStack_2a0);
                      fVar73 = fVar73 - fVar41;
                      fVar41 = auVar56._0_4_ - auVar62._0_4_;
                      fVar82 = _DAT_142e36f28 / SQRT(fVar41 * fVar41 + fVar73 * fVar73);
                      if ((int)fVar82 - 1U < 0x7fffff ||
                          (int)ABS(fVar82) - 0x800000U < 0x7f000000 && -1 < (int)fVar82) {
                        fVar73 = fVar73 * fVar82;
                        fVar41 = fVar41 * fVar82;
                      }
                      else {
                        fVar41 = 0.0;
                        fVar73 = 0.0;
                      }
                      uStack_190 = (float *)CONCAT44(fVar41,fVar73);
                      if (fVar41 * fVar41 + fVar73 * fVar73 <= 0.0) goto LAB_14144f707;
                      pdb_140df4520(auStack_248 + 4,&uStack_190);
                      uStack_190 = (float *)auStack_244;
                      fStack_188 = fStack_23c;
                    }
                    fVar73 = fStack_188;
                    fVar41 = (float)uStack_190;
                    uStack_178._0_4_ = (float)((uint)fStack_188 ^ _DAT_142e37820);
                    uStack_178._4_4_ = (float)uStack_190;
                    pdb_140df4520(auStack_248,&uStack_178);
                    uStack_3f0 = pfStack_100;
                    lVar34 = pdb_140315970(&uStack_3f0);
                    uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_180);
                    fVar82 = (float)pdb_140e02880(&uStack_178);
                    fVar82 = fVar82 * 0.0 + (_DAT_142e36f28 - fVar82) * _DAT_142f684a8 + fVar37;
                    fVar73 = fVar73 * fVar82;
                    fStack_440 = extraout_XMM0_Dc_02 * 0.0;
                    fStack_43c = extraout_XMM0_Dc_02 * 0.0;
                    uStack_448 = CONCAT44(fVar82 * uStack_190._4_4_,fVar82 * fVar41);
                    fVar41 = fVar82 * fVar41 * _DAT_142e61230;
                    fVar82 = fVar82 * uStack_190._4_4_ * _UNK_142e61234;
                    fVar64 = fVar73 * _DAT_142e36f38;
                    fStack_450 = (float)((ulonglong)uVar42 >> 0x20);
                    if (iVar12 == 0) {
                      fVar48 = fVar60 * (float)auStack_244._4_4_;
                      auStack_3a8._4_4_ = fVar60 * auStack_248._4_4_;
                      auStack_3a8._0_4_ = fVar60 * auStack_248;
                      fStack_3a0 = extraout_XMM0_Dc_01 * 0.0;
                      fStack_39c = extraout_XMM0_Dc_01 * 0.0;
                      fVar39 = fVar63 * _DAT_142e37838 + fVar39;
                      fVar60 = fVar39 * 0.0;
                      uStack_458 = (float *)CONCAT44(fVar39,fVar60);
                      fStack_44c = fStack_450;
                    }
                    else {
                      auStack_3a8._4_4_ = fVar63 * _DAT_142e37838 + fVar39;
                      fVar48 = (float)auStack_3a8._4_4_ * 0.0;
                      fStack_44c = extraout_XMM0_Dc_01 * _UNK_142e3782c;
                      uStack_458 = (float *)CONCAT44(fVar60 * (float)((uint)auStack_248._4_4_ ^
                                                                     _UNK_142e37824),
                                                     fVar60 * (float)((uint)auStack_248 ^
                                                                     _DAT_142e37820));
                      fVar60 = (float)(auStack_244._4_4_ ^ _DAT_142e37820) * fVar60;
                      auStack_3a8._0_4_ = fVar48;
                      fStack_3a0 = fStack_450;
                      fStack_39c = fStack_450;
                      fStack_450 = extraout_XMM0_Dc_01 * _UNK_142e37828;
                    }
                    iVar16 = pdb_140315970(&uStack_4d0);
                    uVar10 = pdb_1409012c0(pfStack_f8[0x9d]);
                    uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,uVar10);
                    bVar36 = fVar37 + fVar63 < _DAT_142e37838;
                    uStack_178._0_4_ = pfStack_108._0_4_;
                    uStack_178._4_4_ = fVar79;
                    uStack_170._0_4_ = pfStack_110._0_4_;
                    iVar29 = (int)&uStack_178;
                    uStack_170._4_4_ = auVar77._0_4_;
                    uVar10 = pdb_1424bd0e0(&pfStack_438);
                    fVar40 = fVar40 + fVar41;
                    fVar82 = fVar79 + (float)auStack_298._0_4_ + fVar82;
                    fVar38 = fVar38 + fVar64;
                    uVar11 = (uint)bVar36;
                    if (iVar12 == 1) {
                      pdb_140a77450(&uStack_178);
                      auStack_298._0_4_ = uStack_140._4_4_;
                      pfStack_110 = pfStack_128;
                      pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_11c);
                      lVar34 = *(longlong *)((longlong)auStack_398 + 0x10);
                      if (lVar34 == *(longlong *)auStack_398) {
                        pdb_142d8da20(auStack_398);
                      }
                      lVar22 = *(longlong *)((longlong)auStack_398 + 8);
                      lVar24 = lVar34 * 0x60;
                      *(undefined1 (*) [8])(lVar22 + lVar24) = auStack_3a8;
                      *(float *)(lVar22 + 8 + lVar24) = fVar48;
                      *(float *)(lVar22 + 0xc + lVar24) = (float)uStack_448;
                      *(undefined4 *)(lVar22 + 0x10 + lVar24) = uStack_448._4_4_;
                      *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
                      *(float **)(lVar22 + 0x18 + lVar24) = uStack_458;
                      *(float *)(lVar22 + 0x20 + lVar24) = fVar60;
                      *(ulonglong *)(lVar22 + 0x24 + lVar24) = CONCAT44(fVar82,fVar40);
                      *(float *)(lVar22 + 0x2c + lVar24) = fVar38;
                      *(int *)(lVar22 + 0x30 + lVar24) = iVar16 + (int)auStack_2d8 + iVar29 * 10;
                      *(undefined4 *)(lVar22 + 0x34 + lVar24) = (undefined4)uStack_4c8;
                      *(uint *)(lVar22 + 0x38 + lVar24) = (uint)pfStack_1f8 | uVar11;
                      *(undefined4 *)(lVar22 + 0x3c + lVar24) = auStack_298._0_4_;
                      puVar21 = (undefined8 *)(lVar22 + 0x40 + lVar24);
                      *puVar21 = pfStack_3b8;
                      puVar21[1] = uStack_3b0;
                      *(float **)(lVar22 + 0x50 + lVar24) = pfStack_110;
                      *(undefined4 *)(lVar22 + 0x58 + lVar24) = uVar10;
                      *(float *)(lVar22 + 0x5c + lVar24) = pfStack_108._0_4_;
                      auVar31 = auStack_398;
                    }
                    else {
                      pdb_140a77410(&uStack_178);
                      pfStack_110 = (float *)CONCAT44(uStack_134,uStack_138);
                      pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_12c);
                      lVar34 = plStack_1b0[2];
                      if (lVar34 == *plStack_1b0) {
                        pdb_142d8db00(plStack_1b0);
                      }
                      lVar22 = plStack_1b0[1];
                      lVar24 = lVar34 * 0x50;
                      *(undefined1 (*) [8])(lVar22 + lVar24) = auStack_3a8;
                      *(float *)(lVar22 + 8 + lVar24) = fVar48;
                      *(ulonglong *)(lVar22 + 0xc + lVar24) = uStack_448;
                      *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
                      *(float **)(lVar22 + 0x18 + lVar24) = uStack_458;
                      *(float *)(lVar22 + 0x20 + lVar24) = fVar60;
                      *(ulonglong *)(lVar22 + 0x24 + lVar24) = CONCAT44(fVar82,fVar40);
                      *(float *)(lVar22 + 0x2c + lVar24) = fVar38;
                      *(int *)(lVar22 + 0x30 + lVar24) = iVar16;
                      *(int *)(lVar22 + 0x34 + lVar24) = iVar29 * 10 + (int)auStack_2d8;
                      *(undefined4 *)(lVar22 + 0x38 + lVar24) = (undefined4)uStack_4c8;
                      *(uint *)(lVar22 + 0x3c + lVar24) = uVar11 | 0xe0;
                      *(float **)(lVar22 + 0x40 + lVar24) = pfStack_110;
                      *(undefined4 *)(lVar22 + 0x48 + lVar24) = uVar10;
                      *(float *)(lVar22 + 0x4c + lVar24) = pfStack_108._0_4_;
                      auVar31 = (undefined1  [8])plStack_1b0;
                    }
                    *(longlong *)((longlong)auVar31 + 0x10) = lVar34 + 1;
                  }
                }
              }
            }
            puVar35 = puVar35 + 2;
          } while (puVar35 != (ulonglong *)auStack_1e8._0_8_);
        }
        pfVar20 = pfStack_318 + 10;
        if (pfStack_280 != (float *)0x0) {
          func_0x0001406abac0(uStack_270,(longlong)pfStack_280 << 4,4);
        }
      }
      if (auStack_4e8._0_8_ != 0) {
        func_0x0001406abac0(pfStack_330,auStack_4e8._0_8_ * 0x28,8);
      }
      if (uStack_268 != (float *)0x0) {
        func_0x0001406abac0(pfStack_260,(longlong)uStack_268 << 3,4);
      }
      pdb_141483d90(auStack_248,pfStack_f8);
      pdb_141483630(&uStack_2c8,pfStack_f8,auStack_248);
      if ((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) {
LAB_14144fba9:
        fVar37 = _DAT_142e36f28;
        if ((pfStack_2b8 != (float *)0x0) && (fVar37 = uStack_2c0[4], pfStack_2b8 != (float *)0x1))
        {
          lVar34 = ((longlong)pfStack_2b8 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar20 = uStack_2c0 + 9;
          do {
            fVar39 = *pfVar20;
            uVar23 = CONCAT44((uint)((int)fVar39 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                     CONCAT44(fVar39,fVar37);
            if ((int)uVar23 <= (int)(uVar23 >> 0x20)) {
              fVar37 = fVar39;
            }
            pfVar20 = pfVar20 + 5;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      else {
        cVar8 = pdb_140b77b50(param_10);
        if (cVar8 == '\0') goto LAB_14144fba9;
        fVar37 = (float)pdb_14092f880(pfStack_f8);
      }
      if ((uint)pfStack_f8[0x96] < 2) {
        cVar8 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3);
        if (param_10 != 0 && cVar8 == '\0') {
          cVar8 = pdb_140b77b50(param_10);
          if (cVar8 != '\0') {
            cVar8 = pdb_140901380(param_10 + 0x3d);
            if (cVar8 != '\0') {
              pdb_141483c00(&uStack_178,auStack_248);
              if ((float)uStack_178 == 1.4013e-45) {
                fVar37 = fVar37 + _DAT_142e3787c;
                uStack_268 = (float *)CONCAT44((float)uStack_170,uStack_178._4_4_);
                pfStack_260 = (float *)CONCAT44((float)uStack_168,uStack_170._4_4_);
                lStack_258 = CONCAT44((float)uStack_160,uStack_168._4_4_);
                uStack_250 = CONCAT44(uStack_158,uStack_160._4_4_);
                pdb_1414858e0(&uStack_358,auStack_248,pfStack_1a8,fVar37);
                lStack_488 = lStack_258;
                uStack_480 = uStack_250;
                uStack_498 = uStack_268;
                uStack_490 = pfStack_260;
                apfStack_4a8[1] = (float *)0x4;
                auStack_298._0_4_ = _DAT_142e382c0 + fVar37;
                pfVar19 = (float *)0x0;
                pfVar20 = (float *)0x0;
                pfStack_198 = (float *)((ulonglong)pfStack_198 & 0xffffffff00000000);
                fVar41 = _DAT_142e37830;
                fVar39 = _DAT_142e36f2c;
                do {
                  lVar34 = 0;
                  pfVar28 = pfVar19;
                  pfVar32 = pfVar20;
                  pfVar25 = pfVar20;
                  while( true ) {
                    if (pfVar25 == (float *)0x4) {
                      if (uStack_358 != (float *)0x0) {
                        func_0x0001406abac0(uStack_350,(longlong)uStack_358 << 4,4);
                      }
                      goto LAB_1414510e5;
                    }
                    fVar79 = *(float *)((longlong)&uStack_498 +
                                       lVar34 * 8 + (longlong)pfVar20 * 8 + 4);
                    uVar23 = (ulonglong)uStack_4d0 >> 0x20;
                    uStack_4d0 = (float *)CONCAT44((int)uVar23,
                                                   *(float *)(&uStack_498 +
                                                             (longlong)pfVar20 + lVar34));
                    uVar23 = (ulonglong)uStack_3f0 >> 0x20;
                    uStack_3f0 = (float *)CONCAT44((int)uVar23,fVar79);
                    fVar79 = fVar79 - *(float *)(&uStack_498 + (longlong)pfVar20 + lVar34);
                    if (0.0 < fVar79) break;
                    lVar34 = lVar34 + 1;
                    pfVar28 = (float *)((longlong)pfVar28 + 1);
                    pfVar32 = (float *)((longlong)pfVar32 + 1);
                    pfVar25 = (float *)((longlong)pfVar20 + lVar34);
                  }
                  pfVar20 = (float *)((longlong)pfVar20 + lVar34 + 1);
                  pfVar25 = (float *)((longlong)pfVar19 + lVar34 + 1);
                  apfStack_4a8[0] = pfVar20;
                  pfStack_478 = pfVar25;
                  auVar47._0_8_ = func_0x000142e32b00(pfVar28,pfVar32);
                  auVar47._8_8_ = extraout_XMM0_Qb_08;
                  if ((float)auVar47._0_8_ <= fVar41) {
                    auVar47._0_4_ = fVar41;
                  }
                  fVar41 = auVar47._0_4_;
                  uStack_308 = (float *)0x0;
                  if (0.0 <= fVar41) {
                    uStack_308 = (float *)((longlong)(fVar41 - fVar39) & (longlong)fVar41 >> 0x3f |
                                          (longlong)fVar41);
                  }
                  if (_DAT_142e36f30 < fVar41) {
                    uStack_308 = (float *)0xffffffffffffffff;
                  }
                  uVar23 = (longlong)uStack_308 * 2 - 1;
                  if ((longlong)uVar23 < 0) {
                    fVar39 = (float)(uVar23 >> 1 | 1);
                    fVar39 = fVar39 + fVar39;
                  }
                  else {
                    fVar39 = (float)(longlong)uVar23;
                  }
                  uStack_190 = (float *)CONCAT44(uStack_190._4_4_,fVar79 / fVar39);
                  uStack_178 = (float *)&uStack_4d0;
                  uStack_170 = &uStack_190;
                  uStack_168 = (float **)&uStack_308;
                  uStack_160 = &uStack_3f0;
                  uStack_158 = 0;
                  fStack_154 = 0.0;
                  fStack_150 = SUB84(uStack_308,0);
                  fStack_14c = (float)((ulonglong)uStack_308 >> 0x20);
                  pdb_1413eea80(&fStack_1c8,&uStack_178);
                  pfStack_108 = pfVar25;
                  uStack_458 = pfVar20;
                  uStack_448 = CONCAT44(fStack_1c4,fStack_1c8);
                  puVar21 = (undefined8 *)CONCAT44(fStack_1bc,fStack_1c0);
                  auStack_3a8 = (undefined1  [8])puVar21;
                  if (lStack_1b8 != 0) {
                    pfStack_110 = (float *)((longlong)pfVar19 + lVar34);
                    auStack_1e8._0_8_ = puVar21 + lStack_1b8;
                    auStack_1d8._0_8_ = uStack_350;
                    pfVar20 = uStack_350 + lStack_348 * 4;
                    do {
                      iVar12 = (int)pfStack_198._0_4_;
                      uVar42 = *puVar21;
                      puVar21 = puVar21 + 1;
                      pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,(int)pfStack_198._0_4_ + 1);
                      pfVar19 = (float *)auStack_1d8._0_8_;
                      puVar7 = uStack_170;
                      do {
                        fVar39 = fStack_2b0;
                        uStack_170._4_4_ = (float)((ulonglong)puVar7 >> 0x20);
                        uStack_170._0_4_ = SUB84(puVar7,0);
                        fVar41 = (float)uVar42;
                        fVar79 = (float)((ulonglong)uVar42 >> 0x20);
                        if (pfVar19 == pfVar20) {
                          fVar63 = pfStack_f8[0x9d];
                          uStack_3f0 = pfStack_100;
                          fVar60 = fVar79 - fVar41;
                          uStack_170 = puVar7;
                          if (0.0 < fVar60) {
                            fVar40 = (fVar79 + fVar41) * _DAT_142e36f50;
                            if (cStack_2ac == '\0') {
                              if (fStack_2b0 < 0.0) {
                                uStack_308 = (float *)((ulonglong)uStack_308 & 0xffffffff00000000);
                                fStack_1c8 = fStack_2b0;
                                uStack_178 = (float *)&uStack_308;
                                uStack_170._0_4_ = 7.7194595;
                                uStack_170._4_4_ = 1.4013e-45;
                                uStack_160._0_4_ = 7.7194595;
                                uStack_160._4_4_ = 1.4013e-45;
                                uStack_168 = (float **)&fStack_1c8;
                                pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
                                goto LAB_14145130b;
                              }
                              auVar51 = ZEXT812(0);
                              if (0.0 <= fVar40) {
                                auVar51._4_8_ = 0;
                                auVar51._0_4_ = fVar40;
                              }
                              auVar59._12_4_ = 0;
                              auVar59._0_12_ = auVar51;
                            }
                            else {
                              fVar40 = (float)func_0x000142e32a70();
                              auVar59 = ZEXT416(-(uint)(fVar40 < 0.0) &
                                                (uint)((float)((uint)fVar39 & _DAT_142e377e0) +
                                                      fVar40) |
                                                ~-(uint)(fVar40 < 0.0) & (uint)fVar40);
                              puVar7 = uStack_170;
                            }
                            uStack_170 = puVar7;
                            pdb_141483090(&uStack_178,&uStack_2c8);
                            if ((float)uStack_178 == 1.4013e-45) {
                              auVar59._0_4_ = (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
                              auVar59._4_4_ = (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
                              auVar59._8_8_ = 0;
                              uStack_190 = (float *)CONCAT44(fStack_14c * uStack_160._4_4_ +
                                                             auVar59._4_4_,
                                                             fStack_14c * (float)uStack_160 +
                                                             auVar59._0_4_);
                            }
                            else {
                              uStack_190 = (float *)0x0;
                            }
                            if (((ulonglong)uStack_230 & 0x100000000) != 0) {
                              uStack_168._0_4_ = (float)lStack_218;
                              uStack_168._4_4_ = (float)((ulonglong)lStack_218 >> 0x20);
                              uStack_178._0_4_ = SUB84(pfStack_228,0);
                              uStack_178._4_4_ = (float)((ulonglong)pfStack_228 >> 0x20);
                              uStack_170._0_4_ = SUB84(uStack_220,0);
                              uStack_170._4_4_ = (float)((ulonglong)uStack_220 >> 0x20);
                              fVar39 = (float)pdb_140df3e10(&uStack_178,pfStack_110);
                              auVar62 = auVar59;
                              fVar40 = (float)pdb_140df3e10(&uStack_178,pfStack_108);
                              fVar40 = fVar40 - fVar39;
                              fVar39 = auVar62._0_4_ - auVar59._0_4_;
                              fVar38 = _DAT_142e36f28 / SQRT(fVar39 * fVar39 + fVar40 * fVar40);
                              if ((int)fVar38 - 1U < 0x7fffff ||
                                  (int)ABS(fVar38) - 0x800000U < 0x7f000000 && -1 < (int)fVar38) {
                                fVar40 = fVar40 * fVar38;
                                fVar39 = fVar39 * fVar38;
                              }
                              else {
                                fVar39 = 0.0;
                                fVar40 = 0.0;
                              }
                              uStack_308 = (float *)CONCAT44(fVar39,fVar40);
                              uStack_170 = (undefined8 *)
                                           CONCAT44(uStack_170._4_4_,(float)uStack_170);
                              if (0.0 < fVar39 * fVar39 + fVar40 * fVar40) {
                                pdb_140df4520(&fStack_1c4,&uStack_308);
                                fVar38 = fStack_1bc;
                                fVar40 = fStack_1c0;
                                fVar39 = fStack_1c4;
                                uStack_178._0_4_ = (float)((uint)fStack_1bc ^ _DAT_142e37820);
                                uStack_178._4_4_ = fStack_1c4;
                                pdb_140df4520(&fStack_1c8,&uStack_178);
                                pdb_140df4540(&uStack_178,&uStack_190);
                                fVar82 = uStack_178._4_4_;
                                fVar73 = (float)uStack_178;
                                fVar48 = fVar60 * fVar39 * _DAT_142e61230;
                                fVar70 = fVar60 * fVar40 * _UNK_142e61234;
                                fVar64 = fVar38 * fVar60 * _DAT_142e36f38 + (float)uStack_170;
                                fVar74 = fStack_1c8 * _DAT_14300c2b0;
                                fVar78 = fStack_1c4 * _UNK_14300c2b4;
                                fVar84 = fStack_1c0 * _DAT_142e3c630;
                                pfStack_3b8 = (float *)CONCAT71(pfStack_3b8._1_7_,
                                                                fVar60 < _DAT_142e37838);
                                uStack_170._4_4_ = (float)auStack_298._0_4_;
                                pfVar19 = (float *)&uStack_178;
                                uStack_178._0_4_ = fVar41;
                                uStack_178._4_4_ = fVar37;
                                uStack_170._0_4_ = fVar79;
                                uVar10 = pdb_1424bd0e0(&pfStack_438);
                                pfStack_180 = (float *)CONCAT44(pfStack_180._4_4_,uVar10);
                                pfStack_1f8 = pfVar19;
                                pfStack_278 = (float *)pdb_140315970(&uStack_3f0);
                                uVar10 = pdb_1409012c0(fVar63);
                                lStack_320 = CONCAT44(lStack_320._4_4_,uVar10);
                                pdb_140a77410(&uStack_178);
                                plStack_1f0 = (longlong *)CONCAT44(uStack_134,uStack_138);
                                auStack_2d8 = (undefined1  [4])uStack_12c;
                                lVar34 = plStack_1b0[2];
                                if (lVar34 == *plStack_1b0) {
                                  pdb_142d8db00(plStack_1b0);
                                }
                                lVar22 = plStack_1b0[1];
                                lVar24 = lVar34 * 0x50;
                                *(ulonglong *)(lVar22 + lVar24) = CONCAT44(fVar78,fVar74);
                                *(float *)(lVar22 + 8 + lVar24) = fVar84;
                                pfVar19 = (float *)(lVar22 + 0xc + lVar24);
                                *pfVar19 = fVar60 * fVar39;
                                pfVar19[1] = fVar60 * fVar40;
                                *(float *)(lVar22 + 0x14 + lVar24) = fVar38 * fVar60;
                                *(undefined8 *)(lVar22 + 0x18 + lVar24) = _DAT_14330a250;
                                *(undefined4 *)(lVar22 + 0x20 + lVar24) = 0;
                                *(ulonglong *)(lVar22 + 0x24 + lVar24) =
                                     CONCAT44(fVar82 + fVar70,fVar73 + fVar48);
                                *(float *)(lVar22 + 0x2c + lVar24) = fVar64;
                                *(int *)(lVar22 + 0x30 + lVar24) = (int)pfStack_278;
                                *(int *)(lVar22 + 0x34 + lVar24) =
                                     iVar12 + (int)pfStack_1f8 * 10 + 4000000;
                                *(undefined4 *)(lVar22 + 0x38 + lVar24) = (undefined4)lStack_320;
                                *(uint *)(lVar22 + 0x3c + lVar24) = (byte)pfStack_3b8 | 0xe0;
                                *(longlong **)(lVar22 + 0x40 + lVar24) = plStack_1f0;
                                *(undefined4 *)(lVar22 + 0x48 + lVar24) = pfStack_180._0_4_;
                                *(undefined1 (*) [4])(lVar22 + 0x4c + lVar24) = auStack_2d8;
                                plStack_1b0[2] = lVar34 + 1;
                                uStack_170 = (undefined8 *)
                                             CONCAT44(uStack_170._4_4_,(float)uStack_170);
                              }
                            }
                          }
                          break;
                        }
                        uStack_178._0_4_ = *pfVar19;
                        uStack_178._4_4_ = pfVar19[2];
                        fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
                        uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
                        fStack_1c8 = fVar41;
                        fStack_1c4 = fVar79;
                        cVar8 = pdb_1419ba150(&fStack_1c8,&uStack_178);
                        puVar7 = (undefined8 *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
                        pfVar19 = pfVar19 + 4;
                        uStack_170 = puVar7;
                      } while (cVar8 == '\0');
                    } while (puVar21 != (undefined8 *)auStack_1e8._0_8_);
                  }
                  pfVar19 = pfStack_108;
                  pfVar20 = uStack_458;
                  fVar41 = _DAT_142e37830;
                  fVar39 = _DAT_142e36f2c;
                  if (uStack_448 != 0) {
                    func_0x0001406abac0(auStack_3a8,uStack_448 << 3,4);
                  }
                } while( true );
              }
            }
          }
        }
      }
LAB_1414510e5:
      if (uStack_2c8 != (float *)0x0) {
        func_0x0001406abac0(uStack_2c0,(longlong)uStack_2c8 * 0x14,4);
      }
      puStack_468[2] = uStack_410;
      *puStack_468 = uStack_420;
      puStack_468[1] = (ulonglong)pfStack_418;
      puStack_468[3] = uStack_400;
      pfVar20 = pfStack_378;
      pfVar19 = pfStack_370;
      if (pfStack_438 != (float *)0x0) {
        func_0x0001406abac0(pfStack_430,(longlong)pfStack_438 << 4,4);
        pfVar20 = pfStack_378;
        pfVar19 = pfStack_370;
      }
      goto joined_r0x00014144d562;
    }
LAB_14144a70e:
    uVar10 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
    plStack_1f0 = (longlong *)*param_12;
    pdb_141483d90(&pfStack_538,param_3);
    pdb_141483630(&uStack_268,param_3,&pfStack_538);
    fVar39 = fStack_4fc;
    fVar37 = _DAT_142e36f28;
    if ((lStack_258 != 0) && (fVar37 = pfStack_260[4], lStack_258 != 1)) {
      lVar34 = (lStack_258 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
      pfVar20 = pfStack_260 + 9;
      do {
        fVar41 = *pfVar20;
        uVar23 = CONCAT44((uint)((int)fVar41 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                 CONCAT44(fVar41,fVar37);
        uVar11 = -(uint)((int)(uVar23 >> 0x20) < (int)uVar23);
        param_3 = (float *)(ulonglong)uVar11;
        if ((uVar11 & 1) == 0) {
          fVar37 = fVar41;
        }
        pfVar20 = pfVar20 + 5;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    if (param_5 == 0) {
LAB_14144a9cc:
      puStack_428 = (undefined8 *)0x0;
      pfStack_438 = (float *)0x0;
      pfStack_430 = (float *)0x4;
    }
    else {
      uVar42 = pdb_140a6a370(param_5);
      uStack_178._0_4_ = (float)uVar42;
      uStack_178._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
      uStack_170._0_4_ = SUB84(param_3,0);
      uStack_170._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      uStack_168 = &pfStack_538;
      pdb_1413e9710(auStack_248,&uStack_178);
      if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144a9cc;
      puStack_428 = uStack_238;
      pfStack_438 = _auStack_248;
      pfStack_430 = stack0xfffffffffffffdc0;
    }
    ppfStack_408 = (float **)((longlong)puStack_428 * 0xc);
    fStack_3f8 = fVar39;
    uStack_420 = 0;
    pfStack_418 = (float *)0x4;
    uStack_410 = 0;
    uStack_400 = 0;
    uStack_3f4 = 0;
    uVar23 = pdb_140930190(pfStack_f8,0);
    fVar37 = fVar37 + _DAT_142e3787c;
    fVar41 = extraout_XMM0_Da;
    if ((uVar23 & 1) == 0) {
      fVar41 = pfStack_f8[0x9e];
    }
    if (fVar37 <= _DAT_142e37ad4 + fVar41) {
      pfVar20 = (float *)0x8;
      pfStack_378 = (float *)0x0;
    }
    else {
      pdb_14007ee60();
      pfVar20 = (float *)func_0x0001406abab0(0x28,8);
      if (pfVar20 == (float *)0x0) {
        pdb_142dc7e11(8,0x28);
LAB_14145130b:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pfVar20[0] = 0.0;
      pfVar20[1] = 0.0;
      pfVar20[4] = 0.0;
      pfVar20[5] = fVar41;
      pfVar20[6] = fStack_4fc;
      pfVar20[7] = fVar37;
      *(undefined1 *)(pfVar20 + 8) = 0;
      pfStack_378 = (float *)0x1;
    }
    pfVar19 = pfStack_f8;
    uVar42 = CONCAT44(uVar10,fVar37);
    pfVar25 = pfStack_1a8;
    pfStack_370 = pfVar20;
    pfStack_368 = pfStack_378;
    pdb_141485b80(&uStack_2c8,pfStack_f8,&pfStack_538,&uStack_268,uVar42,&pfStack_378,pfStack_1a8,
                  param_6,param_7,CONCAT44(uVar14,0x3e96bb99));
    uStack_498 = (float *)0x0;
    uStack_490 = (float *)0x0;
    apfStack_4a8[0] = (float *)0x0;
    apfStack_4a8[1] = (float *)0x0;
    lStack_488 = 0;
    pfStack_3e8 = uStack_2c8;
    auStack_4e8._0_8_ = uStack_2c0 + (longlong)pfStack_2b8 * 10;
    lStack_320 = (longlong)pfVar19 + 0x29d;
    pfStack_330 = (float *)CONCAT44(pfStack_330._4_4_,
                                    CONCAT31((int3)(uStack_520 >> 0x28),
                                             (byte)(uStack_520 >> 0x20) | uStack_520._4_4_ == 2));
    auStack_388._0_4_ = _DAT_142f57bcc / fVar39;
    pfStack_328 = uStack_2c0;
    auStack_398._0_4_ = fVar39;
    pfVar20 = uStack_2c0;
    fVar37 = _DAT_142e36f28;
    while ((pfVar20 != (float *)auStack_4e8._0_8_ &&
           (puVar35 = *(ulonglong **)pfVar20, puVar35 != (ulonglong *)0x2))) {
      pfVar19 = *(float **)(pfVar20 + 2);
      bVar33 = *(byte *)(pfVar20 + 8);
      uStack_358 = *(float **)(pfVar20 + 4);
      uStack_350 = *(float **)(pfVar20 + 6);
      pfVar28 = (float *)0x4;
      if (((ulonglong)puVar35 & 1) != 0) {
        pfVar28 = pfVar19;
      }
      if ((float *)0x4 < pfVar28) {
        pdb_142dc81f2(pfVar28,5,&UNK_14330d158);
        goto LAB_14145130b;
      }
      pfVar32 = apfStack_4a8[(longlong)pfVar28];
      apfStack_4a8[(longlong)pfVar28] = (float *)((longlong)pfVar32 + 1);
      lVar34 = (longlong)pfVar19 * 1000000;
      if (((ulonglong)puVar35 & 1) == 0) {
        lVar34 = 0;
      }
      plStack_1b0 = (longlong *)(lVar34 + (longlong)pfVar32);
      uVar42 = CONCAT71((int7)((ulonglong)uVar42 >> 8),bVar33);
      uVar71 = param_9;
      pfStack_280 = pfVar19;
      uStack_270 = puVar35;
      pdb_1414882c0(&uStack_178,pfStack_100,plStack_1b0,&uStack_358,uVar42,param_9);
      auStack_1e8[0] = bVar33;
      auStack_298._0_4_ = _DAT_142e36f50;
      if ((bVar33 & 1) == 0) {
        auStack_298._0_4_ = fVar37;
      }
      pfStack_2a0 = uStack_178;
      pfVar19 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
      pfStack_1f8 = pfVar19 + (longlong)uStack_168 * 4;
      uStack_448 = CONCAT71(uStack_448._1_7_,bVar33 ^ 1 | (byte)pfStack_330);
      lStack_338 = (longlong)plStack_1b0 * 0xf4243 + 0x11;
      pfStack_278 = (float *)((longlong)plStack_1b0 * 0x101eb1 + 0x11);
      pfStack_3b8 = (float *)((longlong)plStack_1b0 * 0x14b291 + 0x75);
      pfStack_1a8 = (float *)((longlong)plStack_1b0 * 0xfb8bd + 0x4cb);
      pfStack_318 = (float *)((longlong)pfStack_280 + 1);
      pfStack_310 = pfVar19;
      pfStack_180 = pfVar20 + 10;
      while (pfVar20 = pfStack_180, fVar37 = _DAT_142e36f28, pfVar19 != pfStack_1f8) {
        auStack_1d8._0_8_ = pfVar19;
        uStack_3d8 = *(float **)pfVar19;
        uStack_3d0 = *(float **)(pfVar19 + 2);
        uStack_190 = pfStack_100;
        uVar10 = pdb_140deec10(&uStack_3d8);
        pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uVar10);
        pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,(float)uStack_3d0);
        pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,(float)uStack_3d8);
        if (uStack_250._4_1_ == '\0') {
          if ((float)uStack_250 < 0.0) {
            uStack_2f8 = (float *)((ulonglong)uStack_2f8 & 0xffffffff00000000);
            auStack_248 = (undefined1  [4])(float)uStack_250;
            uStack_178 = (float *)&uStack_2f8;
            uStack_170._0_4_ = 7.7194595;
            uStack_170._4_4_ = 1.4013e-45;
            uStack_168 = (float **)auStack_248;
            uStack_160._0_4_ = 7.7194595;
            uStack_160._4_4_ = 1.4013e-45;
            pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
            goto LAB_14145130b;
          }
        }
        else {
          func_0x000142e32a70();
        }
        pdb_141483090(&uStack_178,&uStack_268);
        fVar37 = _DAT_142e378e0;
        fVar39 = _UNK_142e378e4;
        if ((float)uStack_178 == 1.4013e-45) {
          fVar37 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
          fVar39 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
        }
        pdb_14092f8d0(&uStack_178,pfStack_f8);
        fVar41 = fVar39;
        if ((float)uStack_178 != 0.0) {
          uVar43 = pdb_140930390(pfStack_f8);
          auVar49._8_4_ = (int)extraout_XMM0_Qb_01;
          auVar49._0_8_ = uVar43;
          auVar52._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          auVar52._0_12_ = auVar49;
          if (fVar39 <= (float)uVar43) {
            auVar53._4_12_ = auVar52._4_12_;
            auVar53._0_4_ = fVar39;
            auVar49 = auVar53._0_12_;
          }
          fVar41 = (float)(~-(uint)NAN(fVar39) & auVar49._0_4_ |
                          -(uint)NAN(fVar39) & (uint)(float)uVar43);
        }
        cVar8 = pdb_140901380(lStack_320);
        auVar81 = ZEXT816(0);
        if ((cVar8 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
          _auStack_248 = pfStack_100;
          lVar34 = pdb_140315970(auStack_248);
          uStack_178 = (float *)(lVar34 * 0x10c6f + lStack_338);
          uVar43 = pdb_140e02880(&uStack_178);
          auVar80._8_4_ = (int)extraout_XMM0_Qb_02;
          auVar80._0_8_ = uVar43;
          auVar80._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          auVar81._4_12_ = auVar80._4_12_;
          auVar81._0_4_ = (float)uVar43 * _DAT_142e3787c + (_DAT_142e36f28 - (float)uVar43) * 0.0;
        }
        _auStack_248 = pfStack_100;
        lVar34 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar34 * 0xeb3b + (longlong)pfStack_278);
        uVar43 = pdb_140e02880(&uStack_178);
        auVar68._8_4_ = (int)extraout_XMM0_Qb_03;
        auVar68._0_8_ = uVar43;
        auVar68._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        _auStack_248 = pfStack_100;
        lVar34 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_3b8);
        fVar63 = (float)pdb_140e02880(&uStack_178);
        auVar69._4_12_ = auVar68._4_12_;
        fVar60 = fVar63 * _DAT_142e37ad4;
        fVar40 = ((float)uVar43 * _DAT_142e37840 - (_DAT_142e36f28 - (float)uVar43) * _DAT_142e37840
                 ) + _DAT_142e3c630;
        fVar79 = uStack_3d8._4_4_;
        uVar10 = 0;
        uVar13 = 0;
        uVar14 = 0;
        if (auStack_1e8[0] == '\x01') {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar75._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar75._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar75._8_8_ = 0;
          }
          else {
            auVar75 = ZEXT816(0);
          }
        }
        else {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar75._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar75._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar75._8_8_ = 0;
          }
          else {
            auVar75 = ZEXT816(0);
          }
          fVar73 = (float)pdb_14140ce00(param_8);
          fVar38 = fVar37;
          if (fVar37 <= fVar79) {
            fVar38 = fVar79;
          }
          auVar54._0_4_ = ~-(uint)NAN(fVar79) & (uint)fVar38;
          auVar54._4_4_ = fVar39;
          auVar54._8_8_ = 0;
          auVar54 = auVar54 | ZEXT416(-(uint)NAN(fVar79) & (uint)fVar37);
          fVar79 = auVar54._0_4_;
          uVar10 = auVar54._4_4_;
          uVar13 = auVar54._8_4_;
          uVar14 = auVar54._12_4_;
          if (fVar79 <= fVar73 + _DAT_142e3b1d8) {
            fVar79 = fVar79 + _DAT_142e36f38;
          }
        }
        uVar15 = (undefined4)((ulonglong)uVar42 >> 0x20);
        uVar86 = (undefined4)((ulonglong)uVar71 >> 0x20);
        uVar87 = (undefined4)((ulonglong)pfVar25 >> 0x20);
        if (0.0 < pfStack_198._0_4_) {
          fVar39 = auVar81._0_4_ + fVar41;
          fVar37 = fVar39;
          if (uStack_3d0._4_4_ <= fVar39) {
            fVar37 = uStack_3d0._4_4_;
          }
          auVar72._0_4_ = ~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar37;
          auVar72._4_4_ = auVar81._4_4_;
          auVar72._8_4_ = auVar81._8_4_;
          auVar72._12_4_ = auVar81._12_4_;
          auVar72 = auVar72 | ZEXT416(-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar39);
          fVar39 = auVar72._0_4_;
          fVar37 = fVar39 - fVar79;
          if (_DAT_142e37ad4 <= fVar37) {
            fVar60 = fVar60 + (_DAT_142e36f28 - fVar63) * 0.0;
            fVar63 = fVar40 * (float)auStack_298._0_4_ + 0.0;
            if ((uStack_448 & 1) == 0) {
              uVar10 = auStack_398._0_4_;
              fStack_1c8 = SUB84(pfStack_518,0);
              fStack_1c4 = (float)((ulonglong)pfStack_518 >> 0x20);
              fStack_1c0 = SUB84(pfStack_510,0);
              fStack_1bc = (float)((ulonglong)pfStack_510 >> 0x20);
              uStack_2f8 = pfStack_100;
              if (((float)auStack_398._0_4_ <= _DAT_142e37848) ||
                 (fVar60 = fVar60 + fVar37, fVar60 < _DAT_142e37ad4)) goto LAB_14144ae34;
              if (NAN(pfStack_108._0_4_ / (float)auStack_398._0_4_)) {
                pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                goto LAB_14145130b;
              }
              fVar37 = (float)func_0x000142e32a70();
              if (NAN(pfStack_110._0_4_ / (float)uVar10)) {
                pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                goto LAB_14145130b;
              }
              fVar39 = (float)func_0x000142e32a70();
              fVar41 = (float)pdb_141c40430(&fStack_1bc);
              fVar40 = (float)pdb_141c40430(&fStack_1bc);
              fVar38 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                              (uint)(fVar37 + _DAT_142e36f28) & -(uint)(fVar37 < 0.0)) *
                       (float)auStack_398._0_4_;
              fVar37 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                              (uint)(fVar39 + _DAT_142e36f28) & -(uint)(fVar39 < 0.0)) *
                       (float)auStack_398._0_4_;
              fVar40 = (float)auStack_388._0_4_ * fVar37 - fVar40;
              fVar39 = fVar40 + _DAT_142f57bcc;
              uStack_170._0_4_ =
                   (float)(-(uint)(fVar38 < fVar37) & (uint)fVar37 |
                          ~-(uint)(fVar38 < fVar37) & (uint)((float)auStack_398._0_4_ + fVar37));
              uStack_170._4_4_ = fVar79 + fVar60;
              puVar21 = &uStack_178;
              uStack_178._0_4_ = fVar38;
              uStack_178._4_4_ = fVar79;
              uVar10 = pdb_1424bd0e0(&pfStack_438,puVar21);
              pdb_140df4540(auStack_248,&fStack_1c8);
              fVar41 = fVar38 * (float)auStack_388._0_4_ - fVar41;
              uVar11 = -(uint)(fVar41 < fVar40);
              pfVar25 = (float *)CONCAT44(uVar87,~uVar11 & (uint)fVar39 | (uint)fVar40 & uVar11);
              uVar71 = CONCAT44(uVar86,fVar41);
              uVar42 = CONCAT44(uVar15,fVar60);
              pdb_140aaa870(&uStack_178,auStack_248,fStack_1c0,fVar63,uVar42,uVar71,pfVar25,3);
              uVar11 = pdb_140315970(&uStack_2f8);
              pdb_140aaac40(auStack_248,&uStack_178,
                            (uVar11 ^ (uint)plStack_1b0._0_4_) + (int)puVar21 * 10);
              pdb_140aaa7d0(&uStack_178,auStack_248,2);
              pdb_140aaab70(auStack_248,&uStack_178,uVar10);
            }
            else {
              auVar44._4_4_ = auVar72._4_4_;
              auVar44._0_4_ = fVar37;
              auVar44._8_4_ = auVar72._8_4_;
              auVar44._12_4_ = auVar72._12_4_;
              _auStack_2d4 = auVar44._4_12_;
              if ((auStack_1e8[0] & 1) == 0) {
                auStack_2d4._0_4_ = uVar10;
                auStack_2d8 = (undefined1  [4])fVar79;
                auStack_2d4._4_4_ = uVar13;
                fStack_2cc = (float)uVar14;
                _auStack_248 = pfStack_100;
                lVar34 = pdb_140315970(auStack_248);
                uStack_178 = (float *)(lVar34 * 0x13 + (longlong)pfStack_1a8);
                fVar40 = (float)pdb_140e02880(&uStack_178);
                fVar40 = fVar40 * _DAT_142e37938 + (_DAT_142e36f28 - fVar40) * 0.0;
                if ((uStack_520 & 0x100000000) == 0) goto LAB_14144b720;
LAB_14144b607:
                auVar62 = ZEXT816(0);
                uStack_170._0_4_ = SUB84(pfStack_510,0);
                uStack_170._4_4_ = (float)((ulonglong)pfStack_510 >> 0x20);
                uStack_178 = pfStack_518;
                uStack_168 = ppfStack_508;
                if (((ulonglong)uStack_270 & 1) == 0) goto LAB_14144b720;
                fVar38 = (float)pdb_140df3e10(&uStack_178,pfStack_280);
                auVar56 = auVar62;
                fVar73 = (float)pdb_140df3e10(&uStack_178,pfStack_318);
                fVar73 = fVar73 - fVar38;
                fVar38 = auVar56._0_4_ - auVar62._0_4_;
                fVar82 = _DAT_142e36f28 / SQRT(fVar38 * fVar38 + fVar73 * fVar73);
                if ((int)fVar82 - 1U < 0x7fffff ||
                    (int)ABS(fVar82) - 0x800000U < 0x7f000000 && -1 < (int)fVar82) {
                  fVar73 = fVar73 * fVar82;
                  fVar38 = fVar38 * fVar82;
                }
                else {
                  fVar38 = 0.0;
                  fVar73 = 0.0;
                }
                uStack_2f8 = (float *)CONCAT44(fVar38,fVar73);
                if (fVar38 * fVar38 + fVar73 * fVar73 <= 0.0) goto LAB_14144b720;
                pdb_140df4520(auStack_248 + 4,&uStack_2f8);
                uStack_2f8 = (float *)auStack_244;
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,fStack_23c);
              }
              else {
                auStack_2d8 = (undefined1  [4])(fVar37 * _DAT_142e36f50 + fVar79);
                fVar40 = 0.0;
                if ((uStack_520 & 0x100000000) != 0) goto LAB_14144b607;
LAB_14144b720:
                pdb_141483320(&uStack_2f8,&uStack_268);
              }
              fVar38 = (float)uStack_2f8;
              fVar73 = (float)uStack_2f0;
              uStack_178._0_4_ = (float)((uint)(float)uStack_2f0 ^ _DAT_142e37820);
              uStack_178._4_4_ = (float)uStack_2f8;
              pdb_140df4520(auStack_248,&uStack_178);
              fVar40 = auStack_2d8 - fVar40;
              fVar82 = auVar75._4_4_;
              fVar64 = auVar75._12_4_;
              if (auStack_1e8[0] == '\x01') {
                uStack_308 = pfStack_100;
                lVar34 = pdb_140315970(&uStack_308);
                uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_3b8);
                fVar41 = (float)pdb_140e02880(&uStack_178);
                fVar41 = (_DAT_142e36f28 - fVar41) * _DAT_142f684a8 + fVar41 * 0.0 +
                         pfStack_198._0_4_;
                fVar73 = fVar73 * fVar41;
                fVar38 = fVar41 * fVar38;
                auStack_2d4._0_4_ = fVar40 + fVar41 * uStack_2f8._4_4_ * _UNK_142e61234;
                auStack_2d8 = (undefined1  [4])(auVar75._0_4_ + fVar38 * _DAT_142e61230);
                auStack_2d4._4_4_ = auVar75._8_4_ + _UNK_142e61238 * 0.0;
                fStack_2cc = fVar64 + _UNK_142e6123c * 0.0;
                uVar43 = CONCAT44(fVar63 * auStack_248._4_4_,fVar63 * auStack_248);
                auVar69._0_4_ = fVar63 * (float)auStack_244._4_4_;
                fVar48 = fVar60 * _DAT_142e37838 + fVar37;
                fVar63 = fVar48 * 0.0;
                auStack_4b8._0_4_ = 0xe0;
                bVar36 = false;
                uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,fVar63);
                _auStack_3a8 = auVar69;
                fVar40 = fVar41 * uStack_2f8._4_4_;
                fVar41 = fVar82 + fVar73 * _DAT_142e36f38;
              }
              else {
                fVar48 = pfStack_198._0_4_ + fVar60;
                uVar43 = CONCAT44(uStack_2f8._4_4_ * fVar48,fVar38 * fVar48);
                _auStack_3a8 = ZEXT416((uint)(fVar48 * fVar73));
                uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,(float)auStack_248 * fVar63);
                fVar48 = (float)auStack_244._0_4_ * fVar63;
                fVar63 = fVar63 * (float)auStack_244._4_4_;
                bVar36 = fVar41 + _DAT_14300d240 <= fVar39;
                fVar38 = fVar37 * 0.0;
                auStack_2d4._0_4_ = fVar40;
                auStack_2d8 = (undefined1  [4])auVar75._0_4_;
                auStack_2d4._4_4_ = auVar75._8_4_;
                fStack_2cc = fVar64;
                fVar40 = fVar37;
                fVar73 = fVar38;
                fVar41 = fVar82;
                if (bVar36) {
                  auStack_4b8._0_4_ = (uint)((uint)pfStack_f8[0x96] < 2) << 7 | 0x60;
                }
                else {
                  auStack_4b8._0_4_ = 0xe0;
                }
              }
              uStack_458 = (float *)CONCAT44(fVar82,fVar41);
              fStack_450 = fVar64;
              fStack_44c = fVar64;
              uVar10 = pdb_140315970(&uStack_190);
              uVar13 = pdb_1409012c0(pfStack_f8[0x9d]);
              fVar41 = _DAT_142e37838;
              if (auStack_1e8[0] == '\x01') {
                fVar37 = pfStack_198._0_4_ + fVar60;
              }
              else if (bVar36) {
                fVar41 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
              }
              uStack_178._0_4_ = pfStack_108._0_4_;
              uStack_170._0_4_ = pfStack_110._0_4_;
              iVar12 = (int)&uStack_178;
              uStack_178._4_4_ = fVar79;
              uStack_170._4_4_ = fVar39;
              uVar14 = pdb_1424bd0e0(&pfStack_438);
              pdb_140a77410(&uStack_178);
              pfStack_108 = (float *)CONCAT44(uStack_134,uStack_138);
              pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_12c);
              lVar34 = plStack_1f0[2];
              if (lVar34 == *plStack_1f0) {
                pdb_142d8db00(plStack_1f0);
              }
              lVar22 = plStack_1f0[1];
              lVar24 = lVar34 * 0x50;
              *(undefined8 *)(lVar22 + lVar24) = uVar43;
              *(undefined4 *)(lVar22 + 8 + lVar24) = auStack_3a8._0_4_;
              *(float *)(lVar22 + 0xc + lVar24) = fVar38;
              *(float *)(lVar22 + 0x10 + lVar24) = fVar40;
              *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
              *(undefined4 *)(lVar22 + 0x18 + lVar24) = (undefined4)uStack_4c8;
              *(float *)(lVar22 + 0x1c + lVar24) = fVar48;
              *(float *)(lVar22 + 0x20 + lVar24) = fVar63;
              *(longlong *)(lVar22 + 0x24 + lVar24) = _auStack_2d8;
              *(float *)(lVar22 + 0x2c + lVar24) = (float)uStack_458;
              *(undefined4 *)(lVar22 + 0x30 + lVar24) = uVar10;
              *(int *)(lVar22 + 0x34 + lVar24) = (int)plStack_1b0 + iVar12 * 10;
              *(undefined4 *)(lVar22 + 0x38 + lVar24) = uVar13;
              *(uint *)(lVar22 + 0x3c + lVar24) = auStack_4b8._0_4_ | (uint)(fVar37 < fVar41);
              *(float **)(lVar22 + 0x40 + lVar24) = pfStack_108;
              *(undefined4 *)(lVar22 + 0x48 + lVar24) = uVar14;
              *(float *)(lVar22 + 0x4c + lVar24) = pfStack_198._0_4_;
              plStack_1f0[2] = lVar34 + 1;
            }
          }
        }
LAB_14144ae34:
        pfVar19 = (float *)(auStack_1d8._0_8_ + 0x10);
      }
      if (pfStack_2a0 != (float *)0x0) {
        func_0x0001406abac0(pfStack_310,(longlong)pfStack_2a0 << 4,4);
      }
    }
    if (pfStack_3e8 != (float *)0x0) {
      func_0x0001406abac0(pfStack_328,(longlong)pfStack_3e8 * 0x28,8);
    }
    puStack_468[2] = uStack_410;
    *puStack_468 = uStack_420;
    puStack_468[1] = (ulonglong)pfStack_418;
    puStack_468[3] = uStack_400;
    pfVar20 = pfStack_430;
    pfVar19 = pfStack_438;
  }
  else {
    piVar17 = (int *)pdb_14092fa10(param_3);
    pfVar20 = pfStack_f8;
    if (piVar17 == (int *)0x0) goto LAB_14144a70e;
    plStack_1f0 = (longlong *)*param_12;
    if (*piVar17 != 1) {
      pfStack_280 = (float *)*param_14;
      pdb_141483d90(&pfStack_438,pfStack_f8);
      uVar10 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
      pdb_141483630(apfStack_4a8,pfVar20,&pfStack_438);
      if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
         (cVar8 = pdb_140b77b50(param_10), cVar8 == '\0')) {
        if (uStack_498 == (float *)0x0) {
          auVar62 = ZEXT416((uint)_DAT_142e36f28);
        }
        else {
          auVar62 = ZEXT416((uint)apfStack_4a8[1][4]);
          if (uStack_498 != (float *)0x1) {
            lVar34 = ((longlong)uStack_498 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar20 = apfStack_4a8[1] + 9;
            do {
              fVar37 = *pfVar20;
              uVar23 = CONCAT44((uint)((int)fVar37 >> 0x1f) >> 1,(uint)(auVar62._0_4_ >> 0x1f) >> 1)
                       ^ CONCAT44(fVar37,auVar62._0_4_);
              if ((int)uVar23 <= (int)(uVar23 >> 0x20)) {
                auVar62 = ZEXT416((uint)fVar37);
              }
              pfVar20 = pfVar20 + 5;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
      }
      else {
        uVar42 = pdb_14092f880(pfStack_f8);
        auVar62._8_4_ = (int)extraout_XMM0_Qb_00;
        auVar62._0_8_ = uVar42;
        auVar62._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      }
      if ((((uint)pfStack_f8[0x96] < 2) &&
          (cVar8 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3), param_10 != 0 && cVar8 == '\0')) &&
         (cVar8 = pdb_140b77b50(), cVar8 != '\0')) {
        uVar13 = pdb_140901380(param_10 + 0x3d);
        uStack_3e0 = (float *)CONCAT44(uStack_3e0._4_4_,uVar13);
      }
      else {
        uStack_3e0 = (float *)((ulonglong)uStack_3e0._4_4_ << 0x20);
      }
      auStack_388._4_12_ = auVar62._4_12_;
      auStack_388._0_4_ = auVar62._0_4_ + _DAT_142e3787c;
      ppfVar30 = &pfStack_438;
      pdb_1414858e0(&pfStack_378,&pfStack_438,pfStack_1a8,auStack_388._0_4_);
      uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,uStack_400._4_4_);
      if (param_5 == 0) {
LAB_14144d661:
        uStack_238 = (undefined8 *)0x0;
        _auStack_248 = (float *)0x0;
        unique0x1000b2d4 = (float *)4;
      }
      else {
        uVar42 = pdb_140a6a370(param_5);
        uStack_178._0_4_ = (float)uVar42;
        uStack_178._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
        uStack_170._0_4_ = SUB84(ppfVar30,0);
        uStack_170._4_4_ = (float)((ulonglong)ppfVar30 >> 0x20);
        uStack_168 = &pfStack_438;
        pdb_1413e9710(auStack_248,&uStack_178);
        if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144d661;
      }
      lStack_218 = (longlong)uStack_238 * 0xc;
      uStack_208 = (uint)uStack_270;
      uStack_230 = (code *)0x0;
      pfStack_228 = (float *)0x4;
      uStack_220 = (float *)0x0;
      uStack_210 = 0;
      uStack_204 = 0;
      if (param_10 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = pdb_140b77b50();
      }
      uVar23 = pdb_140930190(pfStack_f8,uVar13);
      fVar37 = extraout_XMM0_Da_00;
      if ((uVar23 & 1) == 0) {
        fVar37 = pfStack_f8[0x9e];
      }
      if ((float)auStack_388._0_4_ <= _DAT_142e37ad4 + fVar37) {
        pfVar20 = (float *)0x8;
        uStack_2c8 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        pfVar20 = (float *)func_0x0001406abab0(0x28,8);
        if (pfVar20 == (float *)0x0) {
          pdb_142dc7e11(8,0x28);
          goto LAB_14145130b;
        }
        pfVar20[0] = 0.0;
        pfVar20[1] = 0.0;
        pfVar20[4] = 0.0;
        pfVar20[5] = fVar37;
        pfVar20[6] = uStack_400._4_4_;
        pfVar20[7] = (float)auStack_388._0_4_;
        *(undefined1 *)(pfVar20 + 8) = 0;
        uStack_2c8 = (float *)0x1;
      }
      uStack_2c0 = pfVar20;
      pfStack_2b8 = uStack_2c8;
      pdb_141485b80(&uStack_268,pfStack_f8,&pfStack_438,apfStack_4a8,
                    CONCAT44(uVar10,auStack_388._0_4_),&uStack_2c8,pfStack_1a8,param_6,param_7,
                    CONCAT44(uVar14,0x3ec9eecc));
      pfVar19 = pfStack_260;
      pfStack_460 = uStack_268;
      lStack_528 = 0;
      uStack_520 = 0;
      pfStack_538 = (float *)0x0;
      lStack_530 = 0;
      pfStack_518 = (float *)0x0;
      pfVar20 = pfStack_260 + lStack_258 * 10;
      _auStack_2d8 = (longlong)pfStack_f8 + 0x29d;
      pfStack_1a8 = pfStack_370;
      auStack_1e8._0_8_ = pfStack_370 + (longlong)pfStack_368 * 4;
      bVar36 = uStack_420._4_4_ == 2;
      uVar23 = uStack_420 >> 0x20;
      auStack_4e8._0_8_ = pfStack_260;
      while (((float *)auStack_4e8._0_8_ != pfVar20 &&
             (pfVar25 = *(float **)auStack_4e8._0_8_, pfVar25 != (float *)0x2))) {
        pfVar28 = *(float **)(auStack_4e8._0_8_ + 8);
        bVar33 = *(byte *)(auStack_4e8._0_8_ + 0x20);
        uStack_358 = *(float **)(auStack_4e8._0_8_ + 0x10);
        uStack_350 = *(float **)(auStack_4e8._0_8_ + 0x18);
        pfVar32 = (float *)0x4;
        if (((ulonglong)pfVar25 & 1) != 0) {
          pfVar32 = pfVar28;
        }
        if ((float *)0x4 < pfVar32) {
          pdb_142dc81f2(pfVar32,5,&UNK_14330d158);
          goto LAB_14145130b;
        }
        pfVar1 = (&pfStack_538)[(longlong)pfVar32];
        (&pfStack_538)[(longlong)pfVar32] = (float *)((longlong)pfVar1 + 1);
        lVar34 = (longlong)pfVar28 * 1000000;
        if (((ulonglong)pfVar25 & 1) == 0) {
          lVar34 = 0;
        }
        lVar34 = lVar34 + (longlong)pfVar1;
        auStack_298 = (undefined1  [8])lVar34;
        pfStack_318 = pfVar25;
        pfStack_2a0 = pfVar28;
        pdb_1414882c0(&uStack_178,pfStack_100,lVar34,&uStack_358,bVar33,param_9);
        fVar37 = _DAT_142e36f50;
        if ((bVar33 & 1) == 0) {
          fVar37 = _DAT_142e36f28;
        }
        uStack_448 = CONCAT44(uStack_448._4_4_,fVar37);
        auStack_4e8._0_8_ = auStack_4e8._0_8_ + 0x28;
        pfStack_3e8 = uStack_178;
        pfVar25 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        pfStack_278 = pfVar25 + (longlong)uStack_168 * 4;
        lStack_338 = (longlong)auStack_298 * 0xf4243 + 0x11;
        lStack_320 = (longlong)auStack_298 * 0x101eb1 + 0x11;
        pfStack_1f8 = (float *)((longlong)auStack_298 * 0x14b291 + 0x75);
        pfStack_310 = (float *)((longlong)auStack_298 * 0xfb8bd + 0x4cb);
        pfStack_330 = (float *)((longlong)pfStack_2a0 + 1);
        uStack_458 = (float *)CONCAT71(uStack_458._1_7_,(byte)uStack_3e0 & (bVar33 ^ 1));
        auStack_3a8[0] = bVar33 ^ 1 | (byte)uVar23 | bVar36;
        pfStack_328 = pfVar25;
        pfStack_3b8 = (float *)CONCAT71(pfStack_3b8._1_7_,bVar33);
        while (pfVar25 != pfStack_278) {
          uStack_3d8 = *(float **)pfVar25;
          uStack_3d0 = *(float **)(pfVar25 + 2);
          uStack_190 = pfStack_100;
          pfStack_180 = pfVar25;
          uVar10 = pdb_140deec10(&uStack_3d8);
          pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uVar10);
          pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,(float)uStack_3d8);
          auStack_1d8._0_4_ = (float)uStack_3d0;
          fVar37 = ((float)uStack_3d8 + (float)uStack_3d0) * _DAT_142e36f50;
          if (uStack_490._4_1_ == '\0') {
            if ((float)uStack_490 < 0.0) {
              uStack_2f8 = (float *)((ulonglong)uStack_2f8 & 0xffffffff00000000);
              fStack_1c8 = (float)uStack_490;
              uStack_178 = (float *)&uStack_2f8;
              uStack_170._0_4_ = 7.7194595;
              uStack_170._4_4_ = 1.4013e-45;
              uStack_168 = (float **)&fStack_1c8;
              uStack_160._0_4_ = 7.7194595;
              uStack_160._4_4_ = 1.4013e-45;
              pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
              goto LAB_14145130b;
            }
          }
          else {
            func_0x000142e32a70();
          }
          pdb_141483090(&uStack_178,apfStack_4a8);
          fVar39 = _DAT_142e378e0;
          fVar41 = _UNK_142e378e4;
          if ((float)uStack_178 == 1.4013e-45) {
            fVar39 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
            fVar41 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
          }
          pdb_14092f8d0(&uStack_178,pfStack_f8);
          if ((float)uStack_178 != 0.0) {
            uVar42 = pdb_140930390(pfStack_f8);
            auVar50._8_4_ = (int)extraout_XMM0_Qb_05;
            auVar50._0_8_ = uVar42;
            auVar56._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
            auVar56._0_12_ = auVar50;
            if (fVar41 <= (float)uVar42) {
              auVar57._4_12_ = auVar56._4_12_;
              auVar57._0_4_ = fVar41;
              auVar50 = auVar57._0_12_;
            }
            fVar41 = (float)(~-(uint)NAN(fVar41) & auVar50._0_4_ |
                            -(uint)NAN(fVar41) & (uint)(float)uVar42);
          }
          cVar8 = pdb_140901380(_auStack_2d8);
          fVar79 = 0.0;
          if ((cVar8 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
            fStack_1c8 = SUB84(pfStack_100,0);
            fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
            lVar34 = pdb_140315970(&fStack_1c8);
            uStack_178 = (float *)(lVar34 * 0x10c6f + lStack_338);
            fVar79 = (float)pdb_140e02880(&uStack_178);
            fVar79 = fVar79 * _DAT_142e3787c + (_DAT_142e36f28 - fVar79) * 0.0;
          }
          fStack_1c8 = SUB84(pfStack_100,0);
          fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
          lVar34 = pdb_140315970(&fStack_1c8);
          uStack_178 = (float *)(lVar34 * 0xeb3b + lStack_320);
          uVar42 = pdb_140e02880(&uStack_178);
          fStack_1c8 = SUB84(pfStack_100,0);
          fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
          lVar34 = pdb_140315970(&fStack_1c8);
          uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_1f8);
          fVar60 = (float)pdb_140e02880(&uStack_178);
          pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,fVar60 * _DAT_142e37ad4);
          fVar40 = ((float)uVar42 * _DAT_142e37840 -
                   (_DAT_142e36f28 - (float)uVar42) * _DAT_142e37840) + _DAT_142e3c630;
          fVar63 = uStack_3d8._4_4_;
          if ((byte)pfStack_3b8 == '\x01') {
            pdb_141483090(&uStack_178,apfStack_4a8);
            if ((float)uStack_178 == 1.4013e-45) {
              auVar76._0_4_ =
                   fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_
              ;
              auVar76._4_4_ =
                   fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170
              ;
              auVar76._8_8_ = 0;
            }
            else {
              auVar76 = ZEXT816(0);
            }
            fVar79 = fVar79 + fVar41;
            fVar37 = fVar79;
            if (uStack_3d0._4_4_ <= fVar79) {
              fVar37 = uStack_3d0._4_4_;
            }
            fVar39 = (float)(~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar37 |
                            -(uint)NAN(uStack_3d0._4_4_) & (uint)fVar79);
          }
          else {
            pdb_141483090(&uStack_178,apfStack_4a8);
            if ((float)uStack_178 == 1.4013e-45) {
              auVar76._0_4_ =
                   fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_
              ;
              auVar76._4_4_ =
                   fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170
              ;
              auVar76._8_8_ = 0;
            }
            else {
              auVar76 = ZEXT816(0);
            }
            fVar73 = (float)pdb_14140ce00(param_8);
            fVar38 = fVar39;
            if (fVar39 <= fVar63) {
              fVar38 = fVar63;
            }
            fVar39 = (float)(~-(uint)NAN(fVar63) & (uint)fVar38 | -(uint)NAN(fVar63) & (uint)fVar39)
            ;
            uVar11 = -(uint)(fVar73 + _DAT_142e3b1d8 < fVar39);
            fVar63 = (float)(~uVar11 & (uint)(fVar39 + _DAT_142e36f38) | (uint)fVar39 & uVar11);
            fVar79 = fVar79 + fVar41;
            fVar39 = fVar79;
            if (uStack_3d0._4_4_ <= fVar79) {
              fVar39 = uStack_3d0._4_4_;
            }
            fVar39 = (float)(~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar39 |
                            -(uint)NAN(uStack_3d0._4_4_) & (uint)fVar79);
            if ((char)uStack_458 != '\0') {
              fVar79 = (float)((uint)(uStack_3d0._4_4_ - (float)auStack_388._0_4_) & _DAT_142e377e0)
              ;
              pfVar25 = pfStack_1a8;
              do {
                if (pfVar25 == (float *)auStack_1e8._0_8_) {
                  if (fVar79 <= _DAT_142e37ad4) {
                    pdb_141486f80(&uStack_178,&pfStack_438,pfStack_318,pfStack_2a0,fVar37);
                    fVar79 = uStack_178._4_4_;
                    fVar37 = (float)uStack_178;
                    fVar38 = 0.0;
                    if (0.0 < uStack_178._4_4_) {
                      if ((char)uStack_170 == '\0') {
                        fVar73 = (float)func_0x000142e32b00(uStack_178._4_4_ / _DAT_14330a260);
                        if (fVar73 <= _DAT_142e36f28) {
                          fVar73 = _DAT_142e36f28;
                        }
                        fVar79 = fVar79 / fVar73;
                        fVar73 = (float)func_0x000142e32a70();
                        if ((float)(-(uint)(fVar73 < 0.0) &
                                    (uint)((float)((uint)fVar79 & _DAT_142e377e0) + fVar73) |
                                   ~-(uint)(fVar73 < 0.0) & (uint)fVar73) < fVar79 * _DAT_142e36f50)
                        goto LAB_14144e103;
                      }
                      else {
                        fVar73 = (float)func_0x000142e32b00((uStack_178._4_4_ / _DAT_14330a248 +
                                                            _DAT_142e36f28) * _DAT_142e36f50);
                        if (fVar73 <= _DAT_142e37830) {
                          fVar73 = _DAT_142e37830;
                        }
                        fVar79 = (float)func_0x000142e32a40(fVar37 / (fVar79 / (fVar73 + fVar73 +
                                                                               _DAT_142e36f34)));
                        uVar11 = (uint)fVar79;
                        if (_DAT_142e382cc < fVar79) {
                          uVar11 = 0x7fffffff;
                        }
                        if (NAN(fVar79)) {
                          uVar11 = 0;
                        }
                        if ((uVar11 & 1) == 0) {
LAB_14144e103:
                          fStack_1c8 = 0.0;
                          fStack_1c4 = 0.0;
                          lVar34 = pdb_140315970(&fStack_1c8);
                          fVar37 = fVar37 * _DAT_14300c7a0;
                          uVar26 = 0;
                          if (0.0 <= fVar37) {
                            uVar26 = (longlong)(fVar37 - _DAT_142e36f2c) & (longlong)fVar37 >> 0x3f
                                     | (longlong)fVar37;
                          }
                          if (_DAT_142e36f30 < fVar37) {
                            uVar26 = 0xffffffffffffffff;
                          }
                          uStack_178 = (float *)(lVar34 * 0x13 + uVar26 * 0xfb8bd + 0x4cb);
                          fVar37 = (float)pdb_140e02880(&uStack_178);
                          fVar37 = fVar37 * _DAT_142e37938 + (_DAT_142e36f28 - fVar37) * 0.0;
                          fVar38 = fVar37 + fVar37 + _DAT_142e382c0;
                        }
                      }
                    }
                    fVar39 = fVar38 + fVar39;
                  }
                  break;
                }
                uStack_178._0_4_ = *pfVar25;
                uStack_178._4_4_ = pfVar25[2];
                fStack_1c8 = pfStack_198._0_4_;
                fStack_1c4 = (float)auStack_1d8._0_4_;
                fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
                uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
                cVar8 = pdb_1419ba150(&fStack_1c8,&uStack_178);
                pfVar25 = pfVar25 + 4;
              } while (cVar8 == '\0');
            }
          }
          if ((0.0 < pfStack_108._0_4_) && (fVar37 = fVar39 - fVar63, _DAT_142e37ad4 <= fVar37)) {
            fVar79 = pfStack_110._0_4_ + (_DAT_142e36f28 - fVar60) * 0.0;
            fVar60 = fVar40 * (float)uStack_448 + 0.0;
            if ((auStack_3a8[0] & 1) == 0) {
              uStack_178._0_4_ = SUB84(pfStack_418,0);
              uStack_178._4_4_ = (float)((ulonglong)pfStack_418 >> 0x20);
              uStack_170._0_4_ = (float)uStack_410;
              uStack_170._4_4_ = (float)(uStack_410 >> 0x20);
              pdb_1414530c0(pfStack_100,auStack_298,&uStack_178,(uint)uStack_270,
                            (ulonglong)pfStack_198 & 0xffffffff,auStack_1d8._0_4_,fVar63,
                            fVar79 + fVar37,fVar60,auStack_248,pfStack_280);
            }
            else {
              pfStack_110 = (float *)CONCAT44(pfStack_110._4_4_,fVar79);
              if (((ulonglong)pfStack_3b8 & 1) == 0) {
                fStack_1c8 = SUB84(pfStack_100,0);
                fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                lVar34 = pdb_140315970(&fStack_1c8);
                uStack_178 = (float *)(lVar34 * 0x13 + (longlong)pfStack_310);
                fVar79 = (float)pdb_140e02880(&uStack_178);
                fVar40 = fVar79 * _DAT_142e37938 + (_DAT_142e36f28 - fVar79) * 0.0;
                fVar79 = fVar63;
                if ((uStack_420 & 0x100000000) == 0) goto LAB_14144e400;
LAB_14144e2e3:
                auVar62 = ZEXT816(0);
                uStack_170._0_4_ = (float)uStack_410;
                uStack_170._4_4_ = (float)(uStack_410 >> 0x20);
                uStack_178 = pfStack_418;
                uStack_168 = ppfStack_408;
                if (((ulonglong)pfStack_318 & 1) == 0) goto LAB_14144e400;
                fVar38 = (float)pdb_140df3e10(&uStack_178,pfStack_2a0);
                auVar56 = auVar62;
                fVar73 = (float)pdb_140df3e10(&uStack_178,pfStack_330);
                fVar73 = fVar73 - fVar38;
                fVar38 = auVar56._0_4_ - auVar62._0_4_;
                fVar82 = _DAT_142e36f28 / SQRT(fVar38 * fVar38 + fVar73 * fVar73);
                if ((int)fVar82 - 1U < 0x7fffff ||
                    (int)ABS(fVar82) - 0x800000U < 0x7f000000 && -1 < (int)fVar82) {
                  fVar73 = fVar73 * fVar82;
                  fVar38 = fVar38 * fVar82;
                }
                else {
                  fVar38 = 0.0;
                  fVar73 = 0.0;
                }
                uStack_2f8 = (float *)CONCAT44(fVar38,fVar73);
                if (fVar38 * fVar38 + fVar73 * fVar73 <= 0.0) goto LAB_14144e400;
                pdb_140df4520(&fStack_1c4,&uStack_2f8);
                uStack_2f8 = (float *)CONCAT44(fStack_1c0,fStack_1c4);
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,fStack_1bc);
              }
              else {
                fVar79 = fVar37 * _DAT_142e36f50 + fVar63;
                fVar40 = 0.0;
                if ((uStack_420 & 0x100000000) != 0) goto LAB_14144e2e3;
LAB_14144e400:
                pdb_141483320(&uStack_2f8,apfStack_4a8);
              }
              fVar38 = (float)uStack_2f8;
              fVar73 = (float)uStack_2f0;
              uStack_178._0_4_ = (float)((uint)(float)uStack_2f0 ^ _DAT_142e37820);
              uStack_178._4_4_ = (float)uStack_2f8;
              pdb_140df4520(&fStack_1c8,&uStack_178);
              fVar82 = auVar76._4_4_;
              if ((byte)pfStack_3b8 == '\x01') {
                uStack_308 = pfStack_100;
                lVar34 = pdb_140315970(&uStack_308);
                uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_1f8);
                fVar41 = (float)pdb_140e02880(&uStack_178);
                fVar48 = (_DAT_142e36f28 - fVar41) * _DAT_142f684a8 + fVar41 * 0.0 +
                         pfStack_108._0_4_;
                fVar73 = fVar73 * fVar48;
                fVar38 = fVar48 * fVar38;
                uVar43 = CONCAT44((fVar79 - fVar40) + fVar48 * uStack_2f8._4_4_ * _UNK_142e61234,
                                  auVar76._0_4_ + fVar38 * _DAT_142e61230);
                uVar71 = CONCAT44(fVar60 * fStack_1c4,fVar60 * fStack_1c8);
                auStack_4b8._4_4_ = (int)((ulonglong)uVar42 >> 0x20);
                auStack_4b8._0_4_ = fVar60 * fStack_1c0;
                auStack_4b8._8_4_ = (int)extraout_XMM0_Qb_06;
                auStack_4b8._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
                fVar64 = pfStack_110._0_4_ * _DAT_142e37838 + fVar37;
                fVar60 = fVar64 * 0.0;
                auStack_398._0_4_ = 0xe0;
                bVar2 = false;
                plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fVar60);
                fVar41 = fVar82 + fVar73 * _DAT_142e36f38;
                fVar79 = fVar48 * uStack_2f8._4_4_;
              }
              else {
                fVar64 = pfStack_108._0_4_ + pfStack_110._0_4_;
                uVar71 = CONCAT44(uStack_2f8._4_4_ * fVar64,fVar38 * fVar64);
                auStack_4b8 = ZEXT416((uint)(fVar64 * fVar73));
                plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fStack_1c8 * fVar60);
                fVar64 = fStack_1c4 * fVar60;
                fVar60 = fVar60 * fStack_1c0;
                bVar2 = fVar41 + _DAT_14300d240 <= fVar39;
                fVar73 = fVar37 * 0.0;
                uVar43 = CONCAT44(fVar79 - fVar40,auVar76._0_4_);
                fVar41 = fVar82;
                fVar38 = fVar73;
                fVar79 = fVar37;
                if (bVar2) {
                  auStack_398._0_4_ = (uint)((uint)pfStack_f8[0x96] < 2) << 7 | 0x60;
                }
                else {
                  auStack_398._0_4_ = 0xe0;
                }
              }
              uStack_4c8 = (float *)CONCAT44(fVar82,fVar41);
              uStack_4c0 = auVar76._12_4_;
              uStack_4bc = auVar76._12_4_;
              uVar10 = pdb_140315970(&uStack_190);
              uVar13 = pdb_1409012c0(pfStack_f8[0x9d]);
              fVar41 = _DAT_142e37838;
              if ((byte)pfStack_3b8 == '\x01') {
                fVar37 = pfStack_108._0_4_ + pfStack_110._0_4_;
              }
              else if (bVar2) {
                fVar41 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
              }
              uStack_178._0_4_ = pfStack_198._0_4_;
              uStack_170._0_4_ = (float)auStack_1d8._0_4_;
              iVar12 = (int)&uStack_178;
              uStack_178._4_4_ = fVar63;
              uStack_170._4_4_ = fVar39;
              uVar14 = pdb_1424bd0e0(auStack_248);
              pdb_140a77410(&uStack_178);
              auVar62 = auStack_1d8;
              auStack_1d8._4_4_ = uStack_134;
              auStack_1d8._0_4_ = uStack_138;
              auStack_1d8._8_8_ = auVar62._8_8_;
              pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_12c);
              lVar34 = plStack_1f0[2];
              if (lVar34 == *plStack_1f0) {
                pdb_142d8db00(plStack_1f0);
              }
              lVar22 = plStack_1f0[1];
              lVar24 = lVar34 * 0x50;
              *(undefined8 *)(lVar22 + lVar24) = uVar71;
              *(undefined4 *)(lVar22 + 8 + lVar24) = auStack_4b8._0_4_;
              *(float *)(lVar22 + 0xc + lVar24) = fVar38;
              *(float *)(lVar22 + 0x10 + lVar24) = fVar79;
              *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
              *(float *)(lVar22 + 0x18 + lVar24) = plStack_1b0._0_4_;
              *(float *)(lVar22 + 0x1c + lVar24) = fVar64;
              *(float *)(lVar22 + 0x20 + lVar24) = fVar60;
              *(undefined8 *)(lVar22 + 0x24 + lVar24) = uVar43;
              *(undefined4 *)(lVar22 + 0x2c + lVar24) = (undefined4)uStack_4c8;
              *(undefined4 *)(lVar22 + 0x30 + lVar24) = uVar10;
              *(int *)(lVar22 + 0x34 + lVar24) = auStack_298._0_4_ + iVar12 * 10;
              *(undefined4 *)(lVar22 + 0x38 + lVar24) = uVar13;
              *(uint *)(lVar22 + 0x3c + lVar24) = auStack_398._0_4_ | (uint)(fVar37 < fVar41);
              *(undefined8 *)(lVar22 + 0x40 + lVar24) = auStack_1d8._0_8_;
              *(undefined4 *)(lVar22 + 0x48 + lVar24) = uVar14;
              *(float *)(lVar22 + 0x4c + lVar24) = pfStack_198._0_4_;
              plStack_1f0[2] = lVar34 + 1;
            }
          }
          pfVar25 = pfStack_180 + 4;
        }
        if (pfStack_3e8 != (float *)0x0) {
          func_0x0001406abac0(pfStack_328,(longlong)pfStack_3e8 << 4,4);
        }
      }
      if (pfStack_460 != (float *)0x0) {
        func_0x0001406abac0(pfVar19,(longlong)pfStack_460 * 0x28,8);
      }
      puStack_468[2] = (ulonglong)uStack_220;
      *puStack_468 = (ulonglong)uStack_230;
      puStack_468[1] = (ulonglong)pfStack_228;
      puStack_468[3] = uStack_210;
      pfVar20 = pfStack_378;
      pfVar19 = pfStack_1a8;
      if (_auStack_248 != (float *)0x0) {
        func_0x0001406abac0(stack0xfffffffffffffdc0,(longlong)_auStack_248 << 4,4);
        pfVar20 = pfStack_378;
        pfVar19 = pfStack_1a8;
      }
      goto joined_r0x000141451096;
    }
    pfStack_280 = (float *)*param_13;
    pdb_141483d90(&pfStack_538,pfStack_f8);
    pdb_141483630(&uStack_268,pfVar20,&pfStack_538);
    if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
       (cVar8 = pdb_140b77b50(param_10), cVar8 == '\0')) {
      if (lStack_258 == 0) {
        auVar65 = ZEXT416((uint)_DAT_142e36f28);
      }
      else {
        auVar65 = ZEXT416((uint)pfStack_260[4]);
        if (lStack_258 != 1) {
          lVar34 = (lStack_258 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar20 = pfStack_260 + 9;
          do {
            fVar37 = *pfVar20;
            uVar23 = CONCAT44((uint)((int)fVar37 >> 0x1f) >> 1,(uint)(auVar65._0_4_ >> 0x1f) >> 1) ^
                     CONCAT44(fVar37,auVar65._0_4_);
            if ((int)uVar23 <= (int)(uVar23 >> 0x20)) {
              auVar65 = ZEXT416((uint)fVar37);
            }
            pfVar20 = pfVar20 + 5;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
    }
    else {
      uVar42 = pdb_14092f880(pfStack_f8);
      auVar65._8_4_ = (int)extraout_XMM0_Qb;
      auVar65._0_8_ = uVar42;
      auVar65._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
    if ((uint)pfStack_f8[0x96] < 2) {
      cVar8 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3);
      if (param_10 == 0 || cVar8 != '\0') goto LAB_14144bc10;
      cVar8 = pdb_140b77b50();
      if (cVar8 == '\0') goto LAB_14144bc10;
      uVar10 = pdb_140901380(param_10 + 0x3d);
      auStack_2d8 = (undefined1  [4])uVar10;
    }
    else {
LAB_14144bc10:
      auVar6._12_4_ = 0;
      auVar6._0_12_ = _auStack_2d4;
      _auStack_2d8 = auVar6 << 0x20;
    }
    register0x00001384 = auVar65._4_12_;
    auStack_3a8._0_4_ = auVar65._0_4_ + _DAT_142e3787c;
    ppfVar30 = &pfStack_538;
    pdb_1414858e0(&uStack_358,&pfStack_538,pfStack_1a8,auStack_3a8._0_4_);
    if (param_5 == 0) {
LAB_14144bc97:
      puStack_428 = (undefined8 *)0x0;
      pfStack_438 = (float *)0x0;
      pfStack_430 = (float *)0x4;
    }
    else {
      uVar42 = pdb_140a6a370(param_5);
      uStack_178._0_4_ = (float)uVar42;
      uStack_178._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
      uStack_170._0_4_ = SUB84(ppfVar30,0);
      uStack_170._4_4_ = (float)((ulonglong)ppfVar30 >> 0x20);
      uStack_168 = &pfStack_538;
      pdb_1413e9710(auStack_248,&uStack_178);
      if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144bc97;
      puStack_428 = uStack_238;
      pfStack_438 = _auStack_248;
      pfStack_430 = stack0xfffffffffffffdc0;
    }
    ppfStack_408 = (float **)((longlong)puStack_428 * 0xc);
    fStack_3f8 = fStack_4fc;
    uStack_420 = 0;
    pfStack_418 = (float *)0x4;
    uStack_410 = 0;
    uStack_400 = 0;
    uStack_3f4 = 0;
    if (param_10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = pdb_140b77b50();
    }
    uStack_168._0_4_ = (float)param_11[2];
    uStack_168._4_4_ = (float)((ulonglong)param_11[2] >> 0x20);
    uStack_178._0_4_ = (float)*param_11;
    uStack_178._4_4_ = (float)((ulonglong)*param_11 >> 0x20);
    uStack_170._0_4_ = (float)param_11[1];
    uStack_170._4_4_ = (float)((ulonglong)param_11[1] >> 0x20);
    pdb_141489480(&fStack_1c8,pfStack_f8,&pfStack_538,auStack_3a8._0_4_,
                  in_stack_fffffffffffffa78 & 0xffffffffffffff00,&uStack_178,uVar9);
    pdb_141485b80(&pfStack_378,pfStack_f8,&pfStack_538,&uStack_268,auStack_3a8._0_4_,&fStack_1c8,
                  pfStack_1a8,param_6,param_7,CONCAT44(uVar14,0x3ec9eecc));
    pfVar25 = uStack_350;
    pfVar20 = pfStack_368;
    pfVar19 = pfStack_370;
    pfStack_460 = pfStack_378;
    uStack_19a = 0;
    pfStack_180 = pfStack_370;
    pdb_141489790(&uStack_2c8,&pfStack_538,param_11);
    auVar62 = auStack_4b8;
    uStack_498 = (float *)0x0;
    uStack_490 = (float *)0x0;
    apfStack_4a8[0] = (float *)0x0;
    apfStack_4a8[1] = (float *)0x0;
    lStack_488 = 0;
    pfVar20 = pfVar19 + (longlong)pfVar20 * 10;
    lStack_320 = (longlong)pfStack_f8 + 0x29d;
    uStack_4c8 = pfVar25;
    pfStack_198 = pfVar25 + lStack_348 * 4;
    auStack_4b8._1_3_ = (int3)(uStack_520 >> 0x28);
    auStack_4b8[0] = (byte)(uStack_520 >> 0x20) | uStack_520._4_4_ == 2;
    auStack_4b8._4_12_ = auVar62._4_12_;
    pfStack_310 = (float *)CONCAT44(pfStack_310._4_4_,_DAT_142f57bcc / fStack_4fc);
    pfStack_328 = pfVar19;
    plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fStack_4fc);
    fVar37 = _DAT_142e36f28;
LAB_14144bea0:
    pfVar25 = pfStack_328;
    if ((pfStack_328 != pfVar20) && (pfVar28 = *(float **)pfStack_328, pfVar28 != (float *)0x2)) {
      pfVar19 = *(float **)(pfStack_328 + 2);
      bVar33 = *(byte *)(pfStack_328 + 8);
      uStack_2f8 = *(float **)(pfStack_328 + 4);
      uStack_2f0 = *(undefined8 *)(pfStack_328 + 6);
      pfVar32 = (float *)0x4;
      if (((ulonglong)pfVar28 & 1) != 0) {
        pfVar32 = pfVar19;
      }
      if (pfVar32 < (float *)0x5) {
        pfVar1 = apfStack_4a8[(longlong)pfVar32];
        apfStack_4a8[(longlong)pfVar32] = (float *)((longlong)pfVar1 + 1);
        lVar34 = (longlong)pfVar19 * 1000000;
        if (((ulonglong)pfVar28 & 1) == 0) {
          lVar34 = 0;
        }
        lVar34 = lVar34 + (longlong)pfVar1;
        auStack_388._0_8_ = lVar34;
        pfStack_318 = pfVar28;
        pfStack_1a8 = pfVar19;
        pdb_1414882c0(&uStack_178,pfStack_100,lVar34,&uStack_2f8,bVar33,param_9);
        pfVar28 = uStack_178;
        pfStack_110 = (float *)CONCAT71(pfStack_110._1_7_,bVar33);
        fVar39 = _DAT_142e36f50;
        if ((bVar33 & 1) == 0) {
          fVar39 = fVar37;
        }
        uStack_458 = (float *)CONCAT44(uStack_458._4_4_,fVar39);
        pfStack_328 = pfVar25 + 10;
        pfVar25 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        pfStack_3b8 = pfVar25 + CONCAT44(uStack_168._4_4_,(float)uStack_168) * 4;
        uStack_448 = CONCAT71(uStack_448._1_7_,bVar33) ^ 1;
        pfStack_2a0 = (float *)(auStack_388._0_8_ * 0xf4243 + 0x11);
        pfStack_278 = (float *)(auStack_388._0_8_ * 0x101eb1 + 0x11);
        pfStack_1f8 = (float *)(auStack_388._0_8_ * 0x14b291 + 0x75);
        pfStack_330 = (float *)(auStack_388._0_8_ * 0xfb8bd + 0x4cb);
        pfStack_3e8 = (float *)((longlong)pfStack_1a8 + 1);
        uStack_3e0 = pfVar25;
LAB_14144c040:
        pfVar19 = pfStack_180;
        pfVar1 = pfStack_2b8;
        pfVar32 = uStack_2c0;
        if (pfVar25 == pfStack_3b8) goto LAB_14144d480;
        uStack_308 = *(float **)pfVar25;
        uStack_300 = *(ulonglong *)(pfVar25 + 2);
        uStack_4d0 = pfStack_100;
        uVar10 = pdb_140deec10(&uStack_308);
        pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uVar10);
        fVar39 = (float)uStack_308;
        fVar41 = (float)uStack_300;
        fVar79 = ((float)uStack_308 + (float)uStack_300) * _DAT_142e36f50;
        cVar8 = uStack_250._4_1_;
        fVar37 = (float)uStack_250;
        if (uStack_250._4_1_ == '\0') {
          if ((float)uStack_250 < 0.0) {
            uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
            auStack_248 = (undefined1  [4])(float)uStack_250;
            uStack_178 = (float *)&uStack_190;
            uStack_170._0_4_ = 7.7194595;
            uStack_170._4_4_ = 1.4013e-45;
            uStack_168 = (float **)auStack_248;
            uStack_160._0_4_ = 7.7194595;
            uStack_160._4_4_ = 1.4013e-45;
            pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
            goto LAB_14145130b;
          }
        }
        else {
          func_0x000142e32a70();
        }
        pdb_141483090(&uStack_178,&uStack_268);
        fVar63 = _DAT_142e378e0;
        fVar60 = _UNK_142e378e4;
        if ((float)uStack_178 == 1.4013e-45) {
          fVar63 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
          fVar60 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
        }
        pfVar25 = pfVar25 + 4;
        lVar34 = (longlong)pfVar1 << 3;
        do {
          fVar40 = fVar60;
          if (lVar34 == 0) {
            pdb_14092f8d0(&uStack_178,pfStack_f8);
            if ((float)uStack_178 != 0.0) {
              fVar40 = (float)pdb_140930390(pfStack_f8);
              fVar37 = fVar40;
              if (fVar60 <= fVar40) {
                fVar37 = fVar60;
              }
              fVar40 = (float)(~-(uint)NAN(fVar60) & (uint)fVar37 |
                              -(uint)NAN(fVar60) & (uint)fVar40);
            }
            bVar36 = false;
            bVar33 = (byte)uStack_448;
            goto LAB_14144c257;
          }
          fVar38 = *pfVar32;
          lVar34 = lVar34 + -8;
          pfVar19 = pfVar32 + 2;
          pfVar1 = pfVar32 + 1;
          pfVar32 = pfVar19;
        } while ((fVar79 < fVar38 + _DAT_142e3784c) || (*pfVar1 + _DAT_142e37870 < fVar79));
        if (((ulonglong)pfStack_110 & 1) != 0) {
          pdb_14092f8d0(&uStack_178,pfStack_f8);
          bVar36 = false;
          bVar33 = 0;
          goto LAB_14144c257;
        }
        if (cVar8 == '\0') {
          if (fVar37 < 0.0) {
            uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
            auStack_248 = (undefined1  [4])fVar37;
            uStack_178 = (float *)&uStack_190;
            uStack_170._0_4_ = 7.7194595;
            uStack_170._4_4_ = 1.4013e-45;
            uStack_168 = (float **)auStack_248;
            uStack_160._0_4_ = 7.7194595;
            uStack_160._4_4_ = 1.4013e-45;
            pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
            goto LAB_14145130b;
          }
        }
        else {
          func_0x000142e32a70();
        }
        pdb_141483090(&uStack_178,&uStack_268);
        if ((float)uStack_178 == 1.4013e-45) {
          fVar38 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
          if (cVar8 == '\0') goto LAB_14144c72b;
LAB_14144c751:
          func_0x000142e32a70();
          goto LAB_14144c784;
        }
        fVar38 = _DAT_142e36f28;
        if (cVar8 != '\0') goto LAB_14144c751;
LAB_14144c72b:
        if (fVar37 < 0.0) {
          uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
          auStack_248 = (undefined1  [4])fVar37;
          uStack_178 = (float *)&uStack_190;
          uStack_170._0_4_ = 7.7194595;
          uStack_170._4_4_ = 1.4013e-45;
          uStack_168 = (float **)auStack_248;
          uStack_160._0_4_ = 7.7194595;
          uStack_160._4_4_ = 1.4013e-45;
          pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
          goto LAB_14145130b;
        }
LAB_14144c784:
        pdb_141483090(&uStack_178,&uStack_268);
        fVar73 = _DAT_142e36f28;
        if ((float)uStack_178 == 1.4013e-45) {
          fVar73 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
        }
        fVar37 = _DAT_142e36f28;
        if ((fVar38 < uStack_308._4_4_) || (fVar73 < uStack_308._4_4_)) goto LAB_14144c040;
        pdb_14092f8d0(&uStack_178,pfStack_f8);
        fVar37 = fVar73;
        if (fVar73 <= fVar38) {
          fVar37 = fVar38;
        }
        fVar40 = (float)(~-(uint)NAN(fVar38) & (uint)fVar37 | -(uint)NAN(fVar38) & (uint)fVar73);
        auStack_298._4_4_ = fVar73;
        auStack_298._0_4_ = fVar38;
        _fStack_290 = 0;
        bVar36 = true;
        bVar33 = 1;
LAB_14144c257:
        cVar8 = pdb_140901380(lStack_320);
        auVar67 = ZEXT816(0);
        if ((cVar8 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
          _auStack_248 = pfStack_100;
          lVar34 = pdb_140315970(auStack_248);
          uStack_178 = (float *)(lVar34 * 0x10c6f + (longlong)pfStack_2a0);
          uVar42 = pdb_140e02880(&uStack_178);
          auVar66._8_4_ = (int)extraout_XMM0_Qb_04;
          auVar66._0_8_ = uVar42;
          auVar66._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          auVar67._4_12_ = auVar66._4_12_;
          auVar67._0_4_ = (float)uVar42 * _DAT_142e3787c + (_DAT_142e36f28 - (float)uVar42) * 0.0;
        }
        _auStack_248 = pfStack_100;
        lVar34 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar34 * 0xeb3b + (longlong)pfStack_278);
        fVar37 = (float)pdb_140e02880(&uStack_178);
        _auStack_248 = pfStack_100;
        lVar34 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_1f8);
        fVar38 = (float)pdb_140e02880(&uStack_178);
        auStack_1e8._0_4_ = fVar38 * _DAT_142e37ad4;
        fVar73 = (fVar37 * _DAT_142e37840 - (_DAT_142e36f28 - fVar37) * _DAT_142e37840) +
                 _DAT_142e3c630;
        auStack_1d8 = ZEXT416((uint)uStack_308._4_4_);
        if ((char)pfStack_110 == '\x01') {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar83._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar83._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar83._8_8_ = 0;
          }
          else {
            auVar83 = ZEXT816(0);
          }
        }
        else {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar83._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar83._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar83._8_8_ = 0;
          }
          else {
            auVar83 = ZEXT816(0);
          }
          fVar82 = (float)pdb_14140ce00(param_8);
          fVar37 = fVar63;
          if (fVar63 <= (float)auStack_1d8._0_4_) {
            fVar37 = (float)auStack_1d8._0_4_;
          }
          uVar23 = CONCAT44(~auStack_1d8._4_4_ & (uint)fVar60,
                            ~-(uint)NAN((float)auStack_1d8._0_4_) & (uint)fVar37) |
                   CONCAT44(auStack_1d8._4_4_ & (uint)fVar60,
                            -(uint)NAN((float)auStack_1d8._0_4_) & (uint)fVar63);
          if ((float)uVar23 <= fVar82 + _DAT_142e3b1d8) {
            uVar23 = CONCAT44((int)(uVar23 >> 0x20),(float)uVar23 + _DAT_142e36f38);
          }
          auStack_1d8._8_8_ = 0;
          auStack_1d8._0_8_ = uVar23;
        }
        fVar63 = auVar67._0_4_ + fVar40;
        uVar10 = auVar67._8_4_;
        fVar37 = fVar63;
        if (uStack_300._4_4_ <= fVar63) {
          fVar37 = uStack_300._4_4_;
        }
        fVar63 = (float)(~-(uint)NAN(uStack_300._4_4_) & (uint)fVar37 |
                        -(uint)NAN(uStack_300._4_4_) & (uint)fVar63);
        if ((auStack_2d8[0] & bVar33) != 0) {
          fVar37 = (float)((uint)(uStack_300._4_4_ - (float)auStack_3a8._0_4_) & _DAT_142e377e0);
          pfVar19 = uStack_4c8;
          do {
            auVar62 = _auStack_248;
            if (pfVar19 == pfStack_198) {
              if (fVar37 <= _DAT_142e37ad4) {
                pdb_141486f80(&uStack_178,&pfStack_538,pfStack_318,pfStack_1a8,fVar79);
                fVar79 = uStack_178._4_4_;
                fVar37 = (float)uStack_178;
                fVar60 = 0.0;
                if (0.0 < uStack_178._4_4_) {
                  fVar60 = 0.0;
                  if ((char)uStack_170 == '\0') {
                    fVar82 = (float)func_0x000142e32b00(uStack_178._4_4_ / _DAT_14330a260);
                    if (fVar82 <= _DAT_142e36f28) {
                      fVar82 = _DAT_142e36f28;
                    }
                    fVar79 = fVar79 / fVar82;
                    fVar82 = (float)func_0x000142e32a70();
                    if ((float)(-(uint)(fVar82 < 0.0) &
                                (uint)((float)((uint)fVar79 & _DAT_142e377e0) + fVar82) |
                               ~-(uint)(fVar82 < 0.0) & (uint)fVar82) < fVar79 * _DAT_142e36f50)
                    goto LAB_14144c8ad;
                  }
                  else {
                    fVar82 = (float)func_0x000142e32b00((uStack_178._4_4_ / _DAT_14330a248 +
                                                        _DAT_142e36f28) * _DAT_142e36f50);
                    if (fVar82 <= _DAT_142e37830) {
                      fVar82 = _DAT_142e37830;
                    }
                    fVar79 = (float)func_0x000142e32a40(fVar37 / (fVar79 / (fVar82 + fVar82 +
                                                                           _DAT_142e36f34)));
                    uVar11 = (uint)fVar79;
                    if (_DAT_142e382cc < fVar79) {
                      uVar11 = 0x7fffffff;
                    }
                    if (NAN(fVar79)) {
                      uVar11 = 0;
                    }
                    if ((uVar11 & 1) == 0) {
LAB_14144c8ad:
                      auVar4._8_8_ = 0;
                      auVar4._0_8_ = stack0xfffffffffffffdc0;
                      _auStack_248 = auVar4 << 0x40;
                      lVar34 = pdb_140315970(auStack_248);
                      fVar37 = fVar37 * _DAT_14300c7a0;
                      uVar23 = 0;
                      if (0.0 <= fVar37) {
                        uVar23 = (longlong)(fVar37 - _DAT_142e36f2c) & (longlong)fVar37 >> 0x3f |
                                 (longlong)fVar37;
                      }
                      if (_DAT_142e36f30 < fVar37) {
                        uVar23 = 0xffffffffffffffff;
                      }
                      uStack_178 = (float *)(lVar34 * 0x13 + uVar23 * 0xfb8bd + 0x4cb);
                      fVar37 = (float)pdb_140e02880(&uStack_178);
                      fVar37 = fVar37 * _DAT_142e37938 + (_DAT_142e36f28 - fVar37) * 0.0;
                      fVar60 = fVar37 + fVar37 + _DAT_142e382c0;
                    }
                  }
                }
                fVar63 = fVar63 + fVar60;
              }
              break;
            }
            uStack_178._0_4_ = *pfVar19;
            uStack_178._4_4_ = pfVar19[2];
            auStack_244._0_4_ = fVar41;
            auStack_248 = (undefined1  [4])fVar39;
            stack0xfffffffffffffdc1 = auVar62._9_7_;
            auStack_244[4] = 0;
            uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
            cVar8 = pdb_1419ba150(auStack_248,&uStack_178);
            pfVar19 = pfVar19 + 4;
          } while (cVar8 == '\0');
        }
        fVar37 = _DAT_142e36f28;
        if (pfStack_108._0_4_ <= 0.0) goto LAB_14144c040;
        fVar79 = fVar63 - (float)auStack_1d8._0_4_;
        if (fVar79 < _DAT_142e37ad4) goto LAB_14144c040;
        auVar55 = ZEXT816(0);
        fVar60 = (float)auStack_1e8._0_4_ + (_DAT_142e36f28 - fVar38) * 0.0;
        auStack_1e8._0_4_ = fVar60;
        fVar38 = fVar73 * (float)uStack_458 + 0.0;
        if (((bVar33 | auStack_4b8[0]) & 1) == 0) {
          fVar63 = plStack_1b0._0_4_;
          uStack_3d8 = pfStack_518;
          uStack_3d0 = pfStack_510;
          uStack_190 = pfStack_100;
          if ((_DAT_142e37848 < plStack_1b0._0_4_) &&
             (fVar60 = fVar60 + fVar79, _DAT_142e37ad4 <= fVar60)) {
            if (NAN(fVar39 / plStack_1b0._0_4_)) {
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
              goto LAB_14145130b;
            }
            fVar37 = (float)func_0x000142e32a70();
            if (NAN(fVar41 / fVar63)) {
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
              goto LAB_14145130b;
            }
            fVar39 = (float)func_0x000142e32a70();
            pdb_141c40430((longlong)&uStack_3d0 + 4);
            pdb_141c40430((longlong)&uStack_3d0 + 4);
            uStack_178._0_4_ =
                 (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar37 |
                        (uint)(fVar37 + _DAT_142e36f28) & -(uint)(fVar37 < 0.0)) * plStack_1b0._0_4_
            ;
            fVar37 = (float)(~-(uint)(fVar39 < 0.0) & (uint)fVar39 |
                            (uint)(fVar39 + _DAT_142e36f28) & -(uint)(fVar39 < 0.0)) *
                     plStack_1b0._0_4_;
            uStack_170._0_4_ =
                 (float)(-(uint)((float)uStack_178 < fVar37) & (uint)fVar37 |
                        ~-(uint)((float)uStack_178 < fVar37) & (uint)(plStack_1b0._0_4_ + fVar37));
            uStack_178._4_4_ = auStack_1d8._0_4_;
            uStack_170._4_4_ = uStack_178._4_4_ + fVar60;
            puVar21 = &uStack_178;
            uVar10 = pdb_1424bd0e0(&pfStack_438,puVar21);
            pdb_140df4540(auStack_248,&uStack_3d8,auStack_1d8._0_8_);
            pdb_140aaa870(&uStack_178,auStack_248);
            uVar11 = pdb_140315970(&uStack_190);
            pdb_140aaac40(auStack_248,&uStack_178,(uVar11 ^ auStack_388._0_4_) + (int)puVar21 * 10);
            pdb_140aaa7d0(&uStack_178,auStack_248,2);
            pdb_140aaab70(auStack_248,&uStack_178,uVar10);
            fVar37 = _DAT_142e36f28;
          }
          goto LAB_14144c040;
        }
        bVar2 = true;
        if (bVar36) {
          if (fVar63 < (float)auStack_1d8._0_4_) {
            uStack_190 = (float *)CONCAT44(uStack_190._4_4_,auStack_1d8._0_4_);
            auStack_248 = (undefined1  [4])fVar63;
            uStack_178 = (float *)&uStack_190;
            uStack_170._0_4_ = 7.7194595;
            uStack_170._4_4_ = 1.4013e-45;
            uStack_168 = (float **)auStack_248;
            uStack_160._0_4_ = 7.7194595;
            uStack_160._4_4_ = 1.4013e-45;
            pdb_142dc83d0(&UNK_14330a270,&uStack_178,&UNK_14330a310);
            goto LAB_14145130b;
          }
          auVar55._0_8_ = CONCAT44(auStack_1d8._0_4_,auStack_1d8._0_4_);
          auVar55._8_4_ = auStack_1d8._8_4_;
          auVar55._12_4_ = auStack_1d8._8_4_;
          auVar61._8_4_ = auStack_1d8._8_4_;
          auVar61._0_8_ = auVar55._0_8_;
          auVar61._12_4_ = auStack_1d8._8_4_;
          auVar62 = maxps(auVar61,_auStack_298);
          auVar45._4_4_ = fVar63;
          auVar45._0_4_ = fVar63;
          auVar45._8_4_ = uVar10;
          auVar45._12_4_ = uVar10;
          auVar62 = minps(auVar45,auVar62);
          fVar37 = auVar62._0_4_ + _DAT_143309380;
          fVar60 = auVar62._4_4_ + _UNK_143309384;
          if ((float)((uint)(fVar37 - fVar60) & _DAT_142e377e0) <= _DAT_142e37848)
          goto joined_r0x00014144cd40;
          auVar46._0_4_ = fVar37 - (float)auStack_1d8._0_4_;
          auVar46._4_4_ = fVar60 - (float)auStack_1d8._0_4_;
          auVar46._8_4_ = (auVar62._8_4_ + _UNK_143309388) - (float)auStack_1d8._8_4_;
          auVar46._12_4_ = (auVar62._12_4_ + _UNK_14330938c) - (float)auStack_1d8._8_4_;
          auVar55._4_4_ = fVar79;
          auVar55._0_4_ = fVar79;
          auVar55._8_4_ = uVar10;
          auVar55._12_4_ = uVar10;
          auStack_4e8 = divps(auVar46,auVar55);
          uVar9 = true;
          bVar2 = false;
          uVar5 = uVar9;
          if (((ulonglong)pfStack_110 & 1) == 0) goto LAB_14144cd46;
LAB_14144ca75:
          auStack_298._4_4_ = auVar67._4_4_;
          auStack_298._0_4_ = fVar79 * _DAT_142e36f50 + (float)auStack_1d8._0_4_;
          fStack_290 = (float)uVar10;
          fStack_28c = (float)auVar67._12_4_;
          fVar37 = 0.0;
        }
        else {
joined_r0x00014144cd40:
          uVar5 = false;
          uVar9 = false;
          if (((ulonglong)pfStack_110 & 1) != 0) goto LAB_14144ca75;
LAB_14144cd46:
          _auStack_298 = auStack_1d8;
          _auStack_248 = pfStack_100;
          lVar34 = pdb_140315970(auStack_248);
          uStack_178 = (float *)(lVar34 * 0x13 + (longlong)pfStack_330);
          fVar37 = (float)pdb_140e02880(&uStack_178);
          auVar55 = ZEXT816(0);
          fVar37 = fVar37 * _DAT_142e37938 + (_DAT_142e36f28 - fVar37) * 0.0;
          uVar5 = uVar9;
        }
        if ((uStack_520 & 0x100000000) != 0) {
          uStack_168._0_4_ = SUB84(ppfStack_508,0);
          uStack_168._4_4_ = (float)((ulonglong)ppfStack_508 >> 0x20);
          uStack_170._0_4_ = SUB84(pfStack_510,0);
          uStack_170._4_4_ = (float)((ulonglong)pfStack_510 >> 0x20);
          uStack_178 = pfStack_518;
          if (((ulonglong)pfStack_318 & 1) != 0) {
            fVar60 = (float)pdb_140df3e10(&uStack_178,pfStack_1a8);
            auVar62 = auVar55;
            fVar73 = (float)pdb_140df3e10(&uStack_178,pfStack_3e8);
            fVar73 = fVar73 - fVar60;
            fVar60 = auVar62._0_4_ - auVar55._0_4_;
            fVar82 = _DAT_142e36f28 / SQRT(fVar60 * fVar60 + fVar73 * fVar73);
            if ((int)fVar82 - 1U < 0x7fffff ||
                (int)ABS(fVar82) - 0x800000U < 0x7f000000 && -1 < (int)fVar82) {
              fVar73 = fVar73 * fVar82;
              fVar60 = fVar60 * fVar82;
            }
            else {
              fVar60 = 0.0;
              fVar73 = 0.0;
            }
            uStack_190 = (float *)CONCAT44(fVar60,fVar73);
            if (0.0 < fVar60 * fVar60 + fVar73 * fVar73) {
              pdb_140df4520(auStack_248 + 4,&uStack_190);
              uStack_190 = (float *)auStack_244;
              fStack_188 = fStack_23c;
              goto LAB_14144cf13;
            }
          }
        }
        pdb_141483320(&uStack_190,&uStack_268);
LAB_14144cf13:
        fVar73 = fStack_188;
        fVar60 = (float)uStack_190;
        uStack_178._0_4_ = (float)((uint)fStack_188 ^ _DAT_142e37820);
        uStack_178._4_4_ = (float)uStack_190;
        pdb_140df4520(auStack_248,&uStack_178);
        fVar37 = auStack_298._0_4_ - fVar37;
        fVar82 = auVar83._4_4_;
        if ((char)pfStack_110 == '\x01') {
          uStack_3f0 = pfStack_100;
          lVar34 = pdb_140315970(&uStack_3f0);
          uStack_178 = (float *)(lVar34 * 0x184b + (longlong)pfStack_1f8);
          fVar40 = (float)pdb_140e02880(&uStack_178);
          fVar40 = fVar40 * 0.0 + (_DAT_142e36f28 - fVar40) * _DAT_142f684a8 + pfStack_108._0_4_;
          fVar73 = fVar73 * fVar40;
          fVar60 = fVar40 * fVar60;
          uVar42 = CONCAT44(fVar40 * uStack_190._4_4_,fVar60);
          auStack_298._4_4_ = fVar37 + fVar40 * uStack_190._4_4_ * _UNK_142e61234;
          auStack_298._0_4_ = auVar83._0_4_ + fVar60 * _DAT_142e61230;
          fStack_290 = auVar83._8_4_ + extraout_XMM0_Dc_00 * 0.0 * _UNK_142e61238;
          fStack_28c = auVar83._12_4_ + extraout_XMM0_Dc_00 * 0.0 * _UNK_142e6123c;
          fVar82 = fVar82 + fVar73 * _DAT_142e36f38;
          if (bVar2) {
            uVar71 = CONCAT44(fVar38 * auStack_248._4_4_,fVar38 * auStack_248);
            fVar64 = fVar38 * (float)auStack_244._4_4_;
            fVar37 = (float)auStack_1e8._0_4_ * _DAT_142e37838 + fVar79;
            fVar60 = fVar37 * 0.0;
            auStack_398._4_4_ = fVar37;
            auStack_398._0_4_ = fVar60;
            _fStack_390 = 0;
          }
          else {
            fVar37 = (float)auStack_1e8._0_4_ * _DAT_142e37838 + fVar79;
            fVar64 = fVar37 * 0.0;
            auStack_398._4_4_ = fVar38 * (float)((uint)auStack_248._4_4_ ^ _UNK_142e37824);
            auStack_398._0_4_ = fVar38 * (float)((uint)auStack_248 ^ _DAT_142e37820);
            fStack_390 = extraout_XMM0_Dc * _UNK_142e37828;
            fStack_38c = extraout_XMM0_Dc * _UNK_142e3782c;
            fVar60 = fVar38 * (float)(auStack_244._4_4_ ^ _DAT_142e37820);
            uVar71 = CONCAT44(fVar37,fVar64);
          }
          uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,0xe0);
          bVar36 = false;
        }
        else {
          fVar64 = pfStack_108._0_4_ + (float)auStack_1e8._0_4_;
          uVar71 = CONCAT44(uStack_190._4_4_ * fVar64,fVar60 * fVar64);
          fVar64 = fVar64 * fVar73;
          fVar73 = fVar79 * _DAT_142e378e0;
          uVar42 = CONCAT44(fVar79 * _UNK_142e378e4,fVar73);
          fVar60 = fVar38 * (float)auStack_244._4_4_;
          bVar36 = fVar40 + _DAT_14300d240 <= fVar63;
          auStack_398._0_4_ = fVar38 * auStack_248;
          auStack_398._4_4_ = fVar38 * auStack_248._4_4_;
          fStack_390 = extraout_XMM0_Dc * 0.0;
          fStack_38c = extraout_XMM0_Dc * 0.0;
          auStack_298._4_4_ = fVar37;
          auStack_298._0_4_ = auVar83._0_4_;
          fStack_290 = auVar83._8_4_;
          fStack_28c = auVar83._12_4_;
          if (bVar36) {
            uStack_270 = (ulonglong *)
                         (CONCAT44(uStack_270._4_4_,(uint)((uint)pfStack_f8[0x96] < 2) << 7) | 0x60)
            ;
          }
          else {
            uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,0xe0);
          }
        }
        iVar12 = pdb_140315970(&uStack_4d0);
        uVar10 = pdb_1409012c0(pfStack_f8[0x9d]);
        lStack_338 = CONCAT44(lStack_338._4_4_,uVar10);
        fVar37 = _DAT_142e37838;
        if ((char)pfStack_110 == '\x01') {
          fVar79 = pfStack_108._0_4_ + (float)auStack_1e8._0_4_;
        }
        else if (bVar36) {
          fVar37 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
        }
        uStack_178._0_4_ = fVar39;
        uStack_178._4_4_ = (float)auStack_1d8._0_4_;
        uStack_170._0_4_ = fVar41;
        iVar29 = (int)&uStack_178;
        uStack_170._4_4_ = fVar63;
        uVar10 = pdb_1424bd0e0(&pfStack_438);
        if ((bool)uVar5) {
          bVar36 = fVar79 < _DAT_142e37838;
          pdb_140a77450(&uStack_178);
          pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_140._4_4_);
          auStack_1e8._0_8_ = pfStack_128;
          auStack_1d8._0_4_ = uStack_11c;
          lVar34 = *(longlong *)(pfStack_280 + 4);
          if (lVar34 == *(longlong *)pfStack_280) {
            pdb_142d8da20(pfStack_280);
          }
          lVar22 = *(longlong *)(pfStack_280 + 2);
          lVar24 = lVar34 * 0x60;
          *(undefined8 *)(lVar22 + lVar24) = uVar71;
          *(float *)(lVar22 + 8 + lVar24) = fVar64;
          *(int *)(lVar22 + 0xc + lVar24) = (int)uVar42;
          *(int *)(lVar22 + 0x10 + lVar24) = (int)((ulonglong)uVar42 >> 0x20);
          *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
          *(undefined1 (*) [8])(lVar22 + 0x18 + lVar24) = auStack_398;
          *(float *)(lVar22 + 0x20 + lVar24) = fVar60;
          *(undefined1 (*) [8])(lVar22 + 0x24 + lVar24) = auStack_298;
          *(float *)(lVar22 + 0x2c + lVar24) = fVar82;
          *(int *)(lVar22 + 0x30 + lVar24) = iVar12 + auStack_388._0_4_ + iVar29 * 10;
          *(undefined4 *)(lVar22 + 0x34 + lVar24) = (undefined4)lStack_338;
          *(uint *)(lVar22 + 0x38 + lVar24) = bVar36 | 4;
          *(float *)(lVar22 + 0x3c + lVar24) = pfStack_108._0_4_;
          puVar21 = (undefined8 *)(lVar22 + 0x40 + lVar24);
          *puVar21 = 0;
          puVar21[1] = auStack_4e8._0_8_;
          *(undefined8 *)(lVar22 + 0x50 + lVar24) = auStack_1e8._0_8_;
          *(undefined4 *)(lVar22 + 0x58 + lVar24) = uVar10;
          *(undefined4 *)(lVar22 + 0x5c + lVar24) = auStack_1d8._0_4_;
          *(longlong *)(pfStack_280 + 4) = lVar34 + 1;
        }
        else {
          pdb_140a77410(&uStack_178);
          auVar62 = auStack_1e8;
          auStack_1e8._4_4_ = uStack_134;
          auStack_1e8._0_4_ = uStack_138;
          auStack_1e8._8_8_ = auVar62._8_8_;
          auStack_1d8._0_4_ = uStack_12c;
          lVar34 = plStack_1f0[2];
          if (lVar34 == *plStack_1f0) {
            pdb_142d8db00(plStack_1f0);
          }
          lVar22 = plStack_1f0[1];
          lVar24 = lVar34 * 0x50;
          *(undefined8 *)(lVar22 + lVar24) = uVar71;
          *(float *)(lVar22 + 8 + lVar24) = fVar64;
          *(undefined8 *)(lVar22 + 0xc + lVar24) = uVar42;
          *(float *)(lVar22 + 0x14 + lVar24) = fVar73;
          *(undefined1 (*) [8])(lVar22 + 0x18 + lVar24) = auStack_398;
          *(float *)(lVar22 + 0x20 + lVar24) = fVar60;
          *(undefined1 (*) [8])(lVar22 + 0x24 + lVar24) = auStack_298;
          *(float *)(lVar22 + 0x2c + lVar24) = fVar82;
          *(int *)(lVar22 + 0x30 + lVar24) = iVar12;
          *(int *)(lVar22 + 0x34 + lVar24) = iVar29 * 10 + auStack_388._0_4_;
          *(undefined4 *)(lVar22 + 0x38 + lVar24) = (undefined4)lStack_338;
          *(uint *)(lVar22 + 0x3c + lVar24) = (uint)uStack_270 | fVar79 < fVar37;
          *(undefined8 *)(lVar22 + 0x40 + lVar24) = auStack_1e8._0_8_;
          *(undefined4 *)(lVar22 + 0x48 + lVar24) = uVar10;
          *(undefined4 *)(lVar22 + 0x4c + lVar24) = auStack_1d8._0_4_;
          plStack_1f0[2] = lVar34 + 1;
        }
        fVar37 = _DAT_142e36f28;
        goto LAB_14144c040;
      }
      pdb_142dc81f2(pfVar32,5,&UNK_14330d158);
      goto LAB_14145130b;
    }
    if (pfStack_460 != (float *)0x0) {
      func_0x0001406abac0(pfVar19,(longlong)pfStack_460 * 0x28,8);
    }
    if (uStack_2c8 != (float *)0x0) {
      func_0x0001406abac0(uStack_2c0,(longlong)uStack_2c8 << 3,4);
    }
    pfVar20 = uStack_4c8;
    puStack_468[2] = uStack_410;
    *puStack_468 = uStack_420;
    puStack_468[1] = (ulonglong)pfStack_418;
    puStack_468[3] = uStack_400;
    if (pfStack_438 != (float *)0x0) {
      func_0x0001406abac0(pfStack_430,(longlong)pfStack_438 << 4,4);
    }
    pfVar19 = uStack_358;
  }
  if (pfVar19 != (float *)0x0) {
    func_0x0001406abac0(pfVar20,(longlong)pfVar19 << 4,4);
  }
  pfVar20 = uStack_268;
  pfVar19 = pfStack_260;
joined_r0x00014144d562:
  if (pfVar20 != (float *)0x0) {
    func_0x0001406abac0(pfVar19,(longlong)pfVar20 * 0x14,4);
  }
  return puStack_468;
LAB_14144d480:
  if (pfVar28 != (float *)0x0) {
    func_0x0001406abac0(uStack_3e0,(longlong)pfVar28 << 4,4);
  }
  goto LAB_14144bea0;
}

