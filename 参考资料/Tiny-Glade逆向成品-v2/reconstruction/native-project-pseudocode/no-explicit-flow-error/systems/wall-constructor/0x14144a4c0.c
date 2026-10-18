// VA 0x14144a4c0, PDB extent 35831 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::construct_wooden_wall_boards<system_wall_constructor::construct_walls::construct_walls::closure_env$9,system_wall_constructor::construct_walls::construct_walls::closure_env$10,system_wall_constructor::construct_walls::construct_walls::closure_env$11>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::construct_wooden_wall_boards<system_wall_constructor::construct_walls::construct_walls::closure_env$9,system_wall_constructor::construct_walls::construct_walls::closure_env$10,system_wall_constructor::construct_walls::construct_walls::closure_env$11>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 35831 */

ulonglong *
pdb_14144a4c0(ulonglong *param_1,float *param_2,float *param_3,float *param_4,longlong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             longlong param_10,undefined8 *param_11,undefined8 *param_12,undefined8 *param_13,
             undefined8 *param_14)

{
  float *pfVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
  int iVar26;
  undefined8 *puVar27;
  float **ppfVar28;
  undefined1 auVar29 [8];
  float *pfVar30;
  byte bVar31;
  longlong lVar32;
  float *pfVar33;
  ulonglong *puVar34;
  bool bVar35;
  float extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float extraout_XMM0_Da_00;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar43 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar46 [16];
  undefined1 auVar50 [12];
  float fVar47;
  undefined1 auVar48 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar49 [12];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  ulonglong in_stack_fffffffffffffa78;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined8 in_stack_fffffffffffffa90;
  undefined8 in_stack_fffffffffffffa98;
  undefined4 uVar87;
  undefined8 in_stack_fffffffffffffaa0;
  float *pfStack_538;
  byte *pbStack_530;
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
  longlong lStack_428;
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
  longlong lStack_2f0;
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
  ulonglong uStack_128;
  undefined4 uStack_11c;
  ulonglong uStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffaa0 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffa98 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffa90 >> 0x20);
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
    pcVar17 = (char *)pdb_14092fa10(param_3);
    pfVar33 = pfStack_f8;
    uVar14 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
    if (pcVar17 != (char *)0x0) {
      if (*pcVar17 == '\0') {
        auStack_1d8._0_8_ = *param_14;
        pdb_141483d90(&pfStack_438,pfStack_f8);
        pdb_141483630(apfStack_4a8,pfVar33,&pfStack_438);
        if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
           (cVar7 = pdb_140b77b50(param_10), cVar7 == '\0')) {
          fVar36 = _DAT_142e36f28;
          if ((uStack_498 != (float *)0x0) &&
             (fVar36 = apfStack_4a8[1][4], uStack_498 != (float *)0x1)) {
            lVar32 = ((longlong)uStack_498 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar19 = apfStack_4a8[1] + 9;
            do {
              fVar38 = *pfVar19;
              uVar21 = CONCAT44((uint)((int)fVar38 >> 0x1f) >> 1,(uint)((int)fVar36 >> 0x1f) >> 1) ^
                       CONCAT44(fVar38,fVar36);
              uVar10 = -(uint)((int)(uVar21 >> 0x20) < (int)uVar21);
              pfVar33 = (float *)(ulonglong)uVar10;
              if ((uVar10 & 1) == 0) {
                fVar36 = fVar38;
              }
              pfVar19 = pfVar19 + 5;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
          }
        }
        else {
          fVar36 = (float)pdb_14092f880();
        }
        pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_400._4_4_);
        if (param_5 == 0) {
LAB_14144fca6:
          lVar32 = 0;
          lVar20 = 0;
          uVar41 = 4;
        }
        else {
          uVar41 = pdb_140a6a370(param_5);
          uStack_178._0_4_ = (float)uVar41;
          uStack_178._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
          uStack_170._0_4_ = SUB84(pfVar33,0);
          uStack_170._4_4_ = (float)((ulonglong)pfVar33 >> 0x20);
          uStack_168 = &pfStack_438;
          pdb_1413e9710(auStack_248,&uStack_178);
          if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144fca6;
          lVar32 = (longlong)uStack_238;
          lVar20 = (longlong)_auStack_248;
          uVar41 = stack0xfffffffffffffdc0;
        }
        lStack_148 = lVar32 * 0xc;
        uStack_178._0_4_ = (float)lVar20;
        uStack_178._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
        uStack_170._0_4_ = (float)uVar41;
        uStack_170._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
        uStack_168._0_4_ = (float)lVar32;
        uStack_168._4_4_ = (float)((ulonglong)lVar32 >> 0x20);
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
          uVar8 = 0;
        }
        else {
          uVar8 = pdb_140b77b50();
        }
        uVar41 = CONCAT44(uVar14,fVar36 + _DAT_142e3787c);
        uVar70 = CONCAT44(uVar12,0x3ec9eecc);
        pdb_1414899d0(&pfStack_378,pfStack_100,pfStack_f8,&pfStack_438,uVar41,pfStack_1a8,param_6,
                      param_7,uVar70,uVar8);
        fVar38 = _DAT_142e37ad4;
        fVar36 = _DAT_142e36f28;
        pfVar33 = pfStack_370;
        pfVar19 = pfStack_378;
        if ((uStack_420._4_4_ != 2 & ((byte)(uStack_420 >> 0x20) ^ 1)) != 0) {
          lStack_528 = 0;
          uStack_520 = 0;
          pfStack_538 = (float *)0x0;
          pbStack_530 = (byte *)0x0;
          pfStack_518 = (float *)0x0;
          pfStack_1f8 = pfStack_378;
          pfStack_3b8 = pfStack_370 + (longlong)pfStack_368 * 10;
          cVar7 = uStack_490._4_1_;
          fVar40 = (float)uStack_490;
          auStack_1e8 = ZEXT416(_DAT_142e377e0 & (uint)(float)uStack_490);
          pfStack_278 = pfStack_370;
          pfVar18 = pfStack_370;
          while ((pfVar33 = pfStack_278, pfVar19 = pfStack_1f8, pfVar18 != pfStack_3b8 &&
                 (uVar21 = *(ulonglong *)pfVar18, uVar21 != 2))) {
            uVar23 = *(ulonglong *)(pfVar18 + 2);
            uStack_268 = *(float **)(pfVar18 + 4);
            pfStack_260 = *(float **)(pfVar18 + 6);
            uVar24 = 4;
            if ((uVar21 & 1) != 0) {
              uVar24 = uVar23;
            }
            if (4 < uVar24) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar24,5,&UNK_14330d158);
            }
            pfStack_180 = pfVar18;
            pfVar33 = (&pfStack_538)[uVar24];
            (&pfStack_538)[uVar24] = (float *)((longlong)pfVar33 + 1);
            lVar32 = uVar23 * 1000000;
            if ((uVar21 & 1) == 0) {
              lVar32 = 0;
            }
            lVar32 = lVar32 + (longlong)pfVar33;
            uVar41 = CONCAT71((int7)((ulonglong)uVar41 >> 8),1);
            uVar42 = param_9;
            pdb_1414882c0(auStack_248,pfStack_100,lVar32,&uStack_268,uVar41,param_9);
            uStack_110 = (ulonglong)_auStack_248;
            pfStack_108 = stack0xfffffffffffffdc0;
            if (uStack_238 != (float *)0x0) {
              pfVar19 = stack0xfffffffffffffdc0 + (longlong)uStack_238 * 4;
              pfVar33 = stack0xfffffffffffffdc0;
              do {
                uStack_2c8 = *(float **)pfVar33;
                uStack_2c0 = *(float **)(pfVar33 + 2);
                fVar78 = (float)pdb_140deec10(&uStack_2c8);
                uVar9 = (undefined4)uStack_2c8;
                uVar12 = (undefined4)uStack_2c0;
                if (cVar7 == '\0') {
                  if (fVar40 < 0.0) {
                    uStack_358 = (float *)((ulonglong)uStack_358 & 0xffffffff00000000);
                    fStack_1c8 = fVar40;
                    stack0xfffffffffffffdc0 = (float *)pdb_140f705d0;
                    _auStack_248 = (float *)&uStack_358;
                    uStack_238 = &fStack_1c8;
                    uStack_230 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14330d000,auStack_248,&UNK_14330d0a0);
                  }
                }
                else {
                  pub_142e32a70();
                }
                pdb_141483090(auStack_248,apfStack_4a8);
                uVar13 = (undefined4)((ulonglong)uVar41 >> 0x20);
                uVar14 = (undefined4)((ulonglong)uVar42 >> 0x20);
                uVar85 = (undefined4)((ulonglong)param_6 >> 0x20);
                uVar86 = (undefined4)((ulonglong)param_7 >> 0x20);
                uVar87 = (undefined4)((ulonglong)uVar70 >> 0x20);
                fVar62 = fVar36;
                if (auStack_248 == (undefined1  [4])0x1) {
                  fVar62 = uStack_220._4_4_ * (float)uStack_220 +
                           (fVar36 - uStack_220._4_4_) * uStack_238._4_4_;
                }
                if (0.0 < fVar78) {
                  fVar59 = uStack_2c8._4_4_;
                  fVar78 = fVar62;
                  if (uStack_2c0._4_4_ <= fVar62) {
                    fVar78 = uStack_2c0._4_4_;
                  }
                  fVar78 = (float)(~-(uint)NAN(uStack_2c0._4_4_) & (uint)fVar78 |
                                  -(uint)NAN(uStack_2c0._4_4_) & (uint)fVar62) - uStack_2c8._4_4_;
                  if (fVar38 <= fVar78) {
                    fStack_1c8 = SUB84(pfStack_100,0);
                    fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                    lVar20 = pdb_140315970(&fStack_1c8);
                    _auStack_248 = (float *)(lVar20 * 0x184b + lVar32 * 0x14b291 + 0x75);
                    fVar62 = (float)pdb_140e02880(auStack_248);
                    fStack_1c8 = SUB84(pfStack_100,0);
                    fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                    lVar20 = pdb_140315970(&fStack_1c8);
                    _auStack_248 = (float *)(lVar20 * 0xeb3b + lVar32 * 0x101eb1 + 0x11);
                    fVar39 = (float)pdb_140e02880(auStack_248);
                    unique0x1000694a = (float *)uStack_410;
                    _auStack_248 = pfStack_418;
                    uVar70 = CONCAT44(uVar87,(fVar39 * _DAT_142e37840 -
                                             (fVar36 - fVar39) * _DAT_142e37840) + _DAT_142e3c630);
                    param_7 = CONCAT44(uVar86,fVar78 + fVar62 * fVar38 + (fVar36 - fVar62) * 0.0);
                    param_6 = CONCAT44(uVar85,fVar59);
                    uVar42 = CONCAT44(uVar14,uVar12);
                    uVar41 = CONCAT44(uVar13,uVar9);
                    pdb_1414530c0(pfStack_100,lVar32,auStack_248,pfStack_198._0_4_,uVar41,uVar42,
                                  param_6,param_7,uVar70,&uStack_178,auStack_1d8._0_8_);
                  }
                }
                pfVar33 = pfVar33 + 4;
              } while (pfVar33 != pfVar19);
            }
            pfVar18 = pfStack_180 + 10;
            if (uStack_110 != 0) {
              pub_1406abac0((byte *)pfStack_108,uStack_110 << 4,4);
            }
          }
        }
        if (pfVar19 != (float *)0x0) {
          pub_1406abac0((byte *)pfVar33,(longlong)pfVar19 * 0x28,8);
        }
        pdb_141483d90(auStack_248,pfStack_f8);
        pdb_141483630(&pfStack_538,pfStack_f8,auStack_248);
        if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
           (cVar7 = pdb_140b77b50(param_10), cVar7 == '\0')) {
          fVar36 = _DAT_142e36f28;
          if ((lStack_528 != 0) && (fVar36 = *(float *)(pbStack_530 + 0x10), lStack_528 != 1)) {
            lVar32 = (lStack_528 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar33 = (float *)(pbStack_530 + 0x24);
            do {
              fVar38 = *pfVar33;
              uVar21 = CONCAT44((uint)((int)fVar38 >> 0x1f) >> 1,(uint)((int)fVar36 >> 0x1f) >> 1) ^
                       CONCAT44(fVar38,fVar36);
              if ((int)uVar21 <= (int)(uVar21 >> 0x20)) {
                fVar36 = fVar38;
              }
              pfVar33 = pfVar33 + 5;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
          }
        }
        else {
          fVar36 = (float)pdb_14092f880(pfStack_f8);
        }
        if ((((uint)pfStack_f8[0x96] < 2) &&
            (cVar7 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3), param_10 != 0 && cVar7 == '\0'))
           && ((cVar7 = pdb_140b77b50(param_10), cVar7 != '\0' &&
               ((cVar7 = pdb_140901380(param_10 + 0x3d), cVar7 != '\0' &&
                (((ulonglong)uStack_230 & 0x100000000) == 0 && uStack_230._4_4_ != 2)))))) {
          fVar36 = fVar36 + _DAT_142e3787c;
          pdb_1414858e0(&uStack_2c8,auStack_248,pfStack_1a8,fVar36);
          uVar9 = uStack_210._4_4_;
          pdb_1414851c0(&uStack_268,0);
          pfStack_108 = uStack_268;
          auStack_1e8._0_8_ = pfStack_260;
          if (lStack_258 != 0) {
            pfStack_198 = pfStack_260 + lStack_258 * 2;
            pfStack_f8 = uStack_2c0;
            pfVar19 = uStack_2c0 + (longlong)pfStack_2b8 * 4;
            lVar32 = 0;
            pfVar33 = pfStack_260;
            do {
              uVar21 = *(ulonglong *)pfVar33;
              pfVar33 = pfVar33 + 2;
              pfVar18 = pfStack_f8;
              do {
                fVar38 = (float)(uVar21 >> 0x20);
                if (pfVar18 == pfVar19) {
                  uStack_268 = pfStack_228;
                  pfStack_260 = uStack_220;
                  pdb_1414530c0(pfStack_100,lVar32 + 4000000,&uStack_268,uVar9,uVar21 & 0xffffffff,
                                fVar38,fVar36,0x3f19999a,0x3ea3d70a,&uStack_178,auStack_1d8._0_8_);
                  break;
                }
                fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
                uStack_268 = (float *)CONCAT44(pfVar18[2],*pfVar18);
                pfStack_260 = (float *)((ulonglong)pfStack_260 & 0xffffffffffffff00);
                fStack_1c8 = (float)uVar21;
                fStack_1c4 = fVar38;
                cVar7 = pdb_1419ba150(&fStack_1c8,&uStack_268);
                pfVar18 = pfVar18 + 4;
              } while (cVar7 == '\0');
              lVar32 = lVar32 + 1;
            } while (pfVar33 != pfStack_198);
          }
          if (pfStack_108 != (float *)0x0) {
            pub_1406abac0((byte *)auStack_1e8._0_8_,(longlong)pfStack_108 << 3,4);
          }
          if (uStack_2c8 != (float *)0x0) {
            pub_1406abac0((byte *)uStack_2c0,(longlong)uStack_2c8 << 4,4);
          }
        }
        if (pfStack_538 != (float *)0x0) {
          pub_1406abac0(pbStack_530,(longlong)pfStack_538 * 0x14,4);
        }
        puStack_468[2] = CONCAT44(fStack_14c,fStack_150);
        *puStack_468 = CONCAT44(uStack_160._4_4_,(float)uStack_160);
        puStack_468[1] = CONCAT44(fStack_154,uStack_158);
        puStack_468[3] = uStack_140;
        pfVar33 = uStack_178;
        pfVar19 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
joined_r0x000141451096:
        if (pfVar33 != (float *)0x0) {
          pub_1406abac0((byte *)pfVar19,(longlong)pfVar33 << 4,4);
        }
        pfVar33 = apfStack_4a8[0];
        pfVar19 = apfStack_4a8[1];
        goto joined_r0x00014144d562;
      }
      plStack_1b0 = (longlong *)*param_12;
      auStack_398 = (undefined1  [8])*param_13;
      pdb_141483d90(&pfStack_538,pfStack_f8);
      pdb_141483630(&pfStack_378,pfVar33,&pfStack_538);
      if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
         (cVar7 = pdb_140b77b50(param_10), cVar7 == '\0')) {
        fVar36 = _DAT_142e36f28;
        if ((pfStack_368 != (float *)0x0) && (fVar36 = pfStack_370[4], pfStack_368 != (float *)0x1))
        {
          lVar32 = ((longlong)pfStack_368 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar19 = pfStack_370 + 9;
          do {
            fVar38 = *pfVar19;
            uVar21 = CONCAT44((uint)((int)fVar38 >> 0x1f) >> 1,(uint)((int)fVar36 >> 0x1f) >> 1) ^
                     CONCAT44(fVar38,fVar36);
            uVar10 = -(uint)((int)(uVar21 >> 0x20) < (int)uVar21);
            pfVar33 = (float *)(ulonglong)uVar10;
            if ((uVar10 & 1) == 0) {
              fVar36 = fVar38;
            }
            pfVar19 = pfVar19 + 5;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
      }
      else {
        fVar36 = (float)pdb_14092f880();
      }
      if (param_5 == 0) {
LAB_14144eb13:
        lStack_428 = 0;
        pfStack_438 = (float *)0x0;
        pfStack_430 = (float *)0x4;
      }
      else {
        uVar41 = pdb_140a6a370(param_5);
        uStack_178._0_4_ = (float)uVar41;
        uStack_178._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
        uStack_170._0_4_ = SUB84(pfVar33,0);
        uStack_170._4_4_ = (float)((ulonglong)pfVar33 >> 0x20);
        uStack_168 = &pfStack_538;
        pdb_1413e9710(auStack_248,&uStack_178);
        if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144eb13;
        lStack_428 = (longlong)uStack_238;
        pfStack_438 = _auStack_248;
        pfStack_430 = stack0xfffffffffffffdc0;
      }
      ppfStack_408 = (float **)(lStack_428 * 0xc);
      fStack_3f8 = fStack_4fc;
      uStack_420 = 0;
      pfStack_418 = (float *)0x4;
      uStack_410 = 0;
      uStack_400 = 0;
      uStack_3f4 = 0;
      if (param_10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = pdb_140b77b50();
      }
      uStack_168._0_4_ = (float)param_11[2];
      uStack_168._4_4_ = (float)((ulonglong)param_11[2] >> 0x20);
      uStack_178._0_4_ = (float)*param_11;
      uStack_178._4_4_ = (float)((ulonglong)*param_11 >> 0x20);
      uStack_170._0_4_ = (float)param_11[1];
      uStack_170._4_4_ = (float)((ulonglong)param_11[1] >> 0x20);
      pdb_141489480(&uStack_2f8,pfStack_f8,&pfStack_538,fVar36 + _DAT_142e3787c,1,&uStack_178,uVar8)
      ;
      pdb_1414877d0(&uStack_3d8,pfStack_f8,&pfStack_538,&uStack_2f8,pfStack_1a8,param_6,param_7,
                    CONCAT44(uVar9,0x3ebd2200));
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
      pfVar33 = uStack_3d0;
      while ((pfVar33 != pfStack_310 && (pfVar19 = *(float **)pfVar33, pfVar19 != (float *)0x2))) {
        uVar21 = *(ulonglong *)(pfVar33 + 2);
        auStack_1d8[0] = *(undefined1 *)((longlong)pfVar33 + 0x21);
        fStack_1c8 = (float)*(longlong *)(pfVar33 + 4);
        fStack_1c4 = (float)((ulonglong)*(longlong *)(pfVar33 + 4) >> 0x20);
        fStack_1c0 = (float)*(longlong *)(pfVar33 + 6);
        fStack_1bc = (float)((ulonglong)*(longlong *)(pfVar33 + 6) >> 0x20);
        uVar23 = 4;
        if (((ulonglong)pfVar19 & 1) != 0) {
          uVar23 = uVar21;
        }
        if (4 < uVar23) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar23,5,&UNK_14330d158);
        }
        pfStack_318 = pfVar33;
        pfVar33 = apfStack_4a8[uVar23];
        apfStack_4a8[uVar23] = (float *)((longlong)pfVar33 + 1);
        lVar32 = uVar21 * 1000000;
        if (((ulonglong)pfVar19 & 1) == 0) {
          lVar32 = 0;
        }
        lVar32 = lVar32 + (longlong)pfVar33;
        _auStack_2d8 = lVar32;
        pfStack_198 = pfVar19;
        pdb_1414882c0(&uStack_178,pfStack_100,lVar32,&fStack_1c8,1,param_9);
        pfStack_280 = uStack_178;
        puVar34 = (ulonglong *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        uStack_270 = puVar34;
        if (CONCAT44(uStack_168._4_4_,(float)uStack_168) != 0) {
          auStack_1e8._0_8_ = puVar34 + CONCAT44(uStack_168._4_4_,(float)uStack_168) * 2;
          lStack_338 = _auStack_2d8 * 0xf4243 + 0x11;
          pfStack_278 = (float *)(_auStack_2d8 * 0x101eb1 + 0x11);
          pfStack_180 = (float *)(_auStack_2d8 * 0x14b291 + 0x75);
          pfStack_2a0 = (float *)(uVar21 + 1);
          do {
            uStack_308 = (float *)*puVar34;
            uStack_300 = puVar34[1];
            param_7 = CONCAT71((int7)((ulonglong)param_7 >> 8),auStack_1d8[0]);
            pfVar19 = pfStack_198;
            uVar23 = uVar21;
            pdb_14148a930(&uStack_178,param_10,&pfStack_538,&pfStack_378,pfStack_198,uVar21,param_7,
                          &uStack_308);
            iVar11 = (int)(float)uStack_168;
            lVar32 = lStack_258;
            pfVar33 = pfStack_260;
            uVar9 = (undefined4)((ulonglong)pfVar19 >> 0x20);
            uVar12 = (undefined4)(uVar23 >> 0x20);
            if ((float)uStack_168 != 2.8026e-45) {
              uStack_358 = uStack_178;
              uStack_350 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
              pfStack_3b8 = (float *)CONCAT44((float)uStack_160,uStack_168._4_4_);
              uStack_3b0 = CONCAT44(uStack_158,uStack_160._4_4_);
              pfStack_1f8 = (float *)CONCAT44(pfStack_1f8._4_4_,fStack_154);
              uStack_4d0 = pfStack_100;
              fVar36 = (float)pdb_140deec10(&uStack_358);
              fVar38 = ((float)uStack_358 + (float)uStack_350) * _DAT_142e36f50;
              uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_350);
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
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
                }
              }
              else {
                pub_142e32a70();
              }
              pdb_141483090(&uStack_178,&pfStack_378);
              fVar40 = _DAT_142e36f28;
              if ((float)uStack_178 == 1.4013e-45) {
                fVar40 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
              }
              auVar84 = ZEXT416((uint)fVar40);
              lVar32 = lVar32 << 3;
              do {
                if (lVar32 == 0) {
                  pdb_14092f8d0(&uStack_178,pfStack_f8);
                  if ((char)uStack_178 != '\0') {
                    uVar41 = pdb_140930390(pfStack_f8);
                    auVar57._8_4_ = (int)extraout_XMM0_Qb_07;
                    auVar57._0_8_ = uVar41;
                    auVar57._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
                    if (fVar40 <= (float)uVar41) {
                      auVar57._0_4_ = fVar40;
                    }
                    auVar84._0_4_ = ~-(uint)NAN(fVar40) & auVar57._0_4_;
                    auVar84._4_4_ = auVar57._4_4_;
                    auVar84._8_4_ = auVar57._8_4_;
                    auVar84._12_4_ = auVar57._12_4_;
                    auVar84 = auVar84 | ZEXT416(-(uint)NAN(fVar40) & (uint)(float)uVar41);
                  }
                  goto LAB_14144f147;
                }
                fVar78 = *pfVar33;
                lVar32 = lVar32 + -8;
                pfVar19 = pfVar33 + 2;
                pfVar18 = pfVar33 + 1;
                pfVar33 = pfVar19;
              } while ((fVar38 < fVar78 + _DAT_142e3784c) || (*pfVar18 + _DAT_142e37870 < fVar38));
              pdb_14092f8d0(&uStack_178,pfStack_f8);
LAB_14144f147:
              cVar7 = pdb_140901380(lStack_320);
              fVar38 = 0.0;
              if ((cVar7 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
                _auStack_248 = pfStack_100;
                lVar32 = pdb_140315970(auStack_248);
                uStack_178 = (float *)(lVar32 * 0x10c6f + lStack_338);
                fVar38 = (float)pdb_140e02880(&uStack_178);
                fVar38 = fVar38 * _DAT_142e3787c + (_DAT_142e36f28 - fVar38) * 0.0;
              }
              _auStack_248 = pfStack_100;
              lVar32 = pdb_140315970(auStack_248);
              uStack_178 = (float *)(lVar32 * 0xeb3b + (longlong)pfStack_278);
              fVar40 = (float)pdb_140e02880(&uStack_178);
              _auStack_248 = pfStack_100;
              lVar32 = pdb_140315970(auStack_248);
              uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_180);
              uVar41 = pdb_140e02880(&uStack_178);
              fVar62 = (float)uVar41 * _DAT_142e37ad4;
              fVar59 = (fVar40 * _DAT_142e37840 - (_DAT_142e36f28 - fVar40) * _DAT_142e37840) +
                       _DAT_142e3c630;
              fVar78 = uStack_358._4_4_;
              pdb_141483090(&uStack_178,&pfStack_378);
              fVar40 = _DAT_142e36f28;
              uVar13 = (undefined4)((ulonglong)param_7 >> 0x20);
              if ((float)uStack_178 == 1.4013e-45) {
                fVar39 = fStack_14c * (float)uStack_160 +
                         (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
                fVar37 = fStack_14c * uStack_160._4_4_ +
                         (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
              }
              else {
                fVar39 = 0.0;
                fVar37 = 0.0;
              }
              if (0.0 < fVar36) {
                fVar38 = auVar84._0_4_ + fVar38;
                fVar72 = fVar38;
                if (uStack_350._4_4_ <= fVar38) {
                  fVar72 = uStack_350._4_4_;
                }
                auVar76._0_4_ = ~-(uint)NAN(uStack_350._4_4_) & (uint)fVar72;
                auVar76._4_4_ = auVar84._4_4_;
                auVar76._8_4_ = auVar84._8_4_;
                auVar76._12_4_ = auVar84._12_4_;
                auVar76 = auVar76 | ZEXT416(-(uint)NAN(uStack_350._4_4_) & (uint)fVar38);
                fVar38 = auVar76._0_4_ - fVar78;
                if (_DAT_142e37ad4 <= fVar38) {
                  auVar61 = ZEXT816(0);
                  fVar62 = fVar62 + (_DAT_142e36f28 - (float)uVar41) * 0.0;
                  if (((ulonglong)plStack_1f0 & 1) == 0) {
                    uVar14 = auStack_4b8._0_4_;
                    uStack_2c8 = pfStack_518;
                    uStack_2c0 = pfStack_510;
                    uStack_190 = pfStack_100;
                    if ((_DAT_142e37848 < (float)auStack_4b8._0_4_) &&
                       (fVar62 = fVar62 + fVar38, _DAT_142e37ad4 <= fVar62)) {
                      if (NAN(pfStack_108._0_4_ / (float)auStack_4b8._0_4_)) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                      }
                      fVar36 = (float)pub_142e32a70(pfStack_108._0_4_ / (float)auStack_4b8._0_4_,
                                                    _DAT_142e36f28);
                      if (NAN((float)uStack_110 / (float)uVar14)) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
                      }
                      fVar38 = (float)pub_142e32a70((float)uStack_110 / (float)uVar14,fVar40);
                      fVar40 = (float)pdb_141c40430((longlong)&uStack_2c0 + 4);
                      fVar39 = (float)pdb_141c40430((longlong)&uStack_2c0 + 4);
                      fVar37 = (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                                      (uint)(fVar36 + _DAT_142e36f28) & -(uint)(fVar36 < 0.0)) *
                               (float)auStack_4b8._0_4_;
                      fVar36 = (float)(~-(uint)(fVar38 < 0.0) & (uint)fVar38 |
                                      (uint)(fVar38 + _DAT_142e36f28) & -(uint)(fVar38 < 0.0)) *
                               (float)auStack_4b8._0_4_;
                      fVar39 = (float)auStack_388._0_4_ * fVar36 - fVar39;
                      fVar38 = fVar39 + _DAT_142f57bcc;
                      uStack_170._0_4_ =
                           (float)(-(uint)(fVar37 < fVar36) & (uint)fVar36 |
                                  ~-(uint)(fVar37 < fVar36) &
                                  (uint)((float)auStack_4b8._0_4_ + fVar36));
                      uStack_170._4_4_ = fVar78 + fVar62;
                      uStack_178._4_4_ = fVar78;
                      iVar11 = (int)&uStack_178;
                      uStack_178._0_4_ = fVar37;
                      uVar14 = pdb_1424bd0e0(&pfStack_438);
                      pdb_140df4540(auStack_248,&uStack_2c8);
                      fVar40 = fVar37 * (float)auStack_388._0_4_ - fVar40;
                      uVar10 = -(uint)(fVar40 < fVar39);
                      param_7 = CONCAT44(uVar13,~uVar10 & (uint)fVar38 | (uint)fVar39 & uVar10);
                      pdb_140aaa870(&uStack_178,auStack_248,(ulonglong)uStack_2c0 & 0xffffffff,
                                    fVar59,CONCAT44(uVar9,fVar62),CONCAT44(uVar12,fVar40),param_7,3)
                      ;
                      uVar10 = pdb_140315970(&uStack_190);
                      pdb_140aaac40(auStack_248,&uStack_178,
                                    (uVar10 ^ (uint)auStack_2d8) + iVar11 * 10);
                      pdb_140aaa7d0(&uStack_178,auStack_248,2);
                      pdb_140aaab70(auStack_248,&uStack_178,uVar14);
                    }
                  }
                  else {
                    auStack_298._4_4_ = auVar76._4_4_;
                    auStack_298._0_4_ = fVar38 * _DAT_142e36f50;
                    fStack_290 = (float)auVar76._8_4_;
                    fStack_28c = (float)auVar76._12_4_;
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
                      fVar40 = (float)pdb_140df3e10(&uStack_178,uVar21);
                      auVar55 = auVar61;
                      fVar72 = (float)pdb_140df3e10(&uStack_178,pfStack_2a0);
                      fVar72 = fVar72 - fVar40;
                      fVar40 = auVar55._0_4_ - auVar61._0_4_;
                      fVar81 = _DAT_142e36f28 / SQRT(fVar40 * fVar40 + fVar72 * fVar72);
                      if ((int)fVar81 - 1U < 0x7fffff ||
                          (int)ABS(fVar81) - 0x800000U < 0x7f000000 && -1 < (int)fVar81) {
                        fVar72 = fVar72 * fVar81;
                        fVar40 = fVar40 * fVar81;
                      }
                      else {
                        fVar40 = 0.0;
                        fVar72 = 0.0;
                      }
                      uStack_190 = (float *)CONCAT44(fVar40,fVar72);
                      if (fVar40 * fVar40 + fVar72 * fVar72 <= 0.0) goto LAB_14144f707;
                      pdb_140df4520(auStack_248 + 4,&uStack_190);
                      uStack_190 = (float *)auStack_244;
                      fStack_188 = fStack_23c;
                    }
                    fVar72 = fStack_188;
                    fVar40 = (float)uStack_190;
                    uStack_178._0_4_ = (float)((uint)fStack_188 ^ _DAT_142e37820);
                    uStack_178._4_4_ = (float)uStack_190;
                    pdb_140df4520(auStack_248,&uStack_178);
                    uStack_3f0 = pfStack_100;
                    lVar32 = pdb_140315970(&uStack_3f0);
                    uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_180);
                    fVar81 = (float)pdb_140e02880(&uStack_178);
                    fVar81 = fVar81 * 0.0 + (_DAT_142e36f28 - fVar81) * _DAT_142f684a8 + fVar36;
                    fVar72 = fVar72 * fVar81;
                    fStack_440 = extraout_XMM0_Dc_02 * 0.0;
                    fStack_43c = extraout_XMM0_Dc_02 * 0.0;
                    uStack_448 = CONCAT44(fVar81 * uStack_190._4_4_,fVar81 * fVar40);
                    fVar40 = fVar81 * fVar40 * _DAT_142e61230;
                    fVar81 = fVar81 * uStack_190._4_4_ * _UNK_142e61234;
                    fVar63 = fVar72 * _DAT_142e36f38;
                    fStack_450 = (float)((ulonglong)uVar41 >> 0x20);
                    if (iVar11 == 0) {
                      fVar47 = fVar59 * (float)auStack_244._4_4_;
                      auStack_3a8._4_4_ = fVar59 * auStack_248._4_4_;
                      auStack_3a8._0_4_ = fVar59 * auStack_248;
                      fStack_3a0 = extraout_XMM0_Dc_01 * 0.0;
                      fStack_39c = extraout_XMM0_Dc_01 * 0.0;
                      fVar38 = fVar62 * _DAT_142e37838 + fVar38;
                      fVar59 = fVar38 * 0.0;
                      uStack_458 = (float *)CONCAT44(fVar38,fVar59);
                      fStack_44c = fStack_450;
                    }
                    else {
                      auStack_3a8._4_4_ = fVar62 * _DAT_142e37838 + fVar38;
                      fVar47 = (float)auStack_3a8._4_4_ * 0.0;
                      fStack_44c = extraout_XMM0_Dc_01 * _UNK_142e3782c;
                      uStack_458 = (float *)CONCAT44(fVar59 * (float)((uint)auStack_248._4_4_ ^
                                                                     _UNK_142e37824),
                                                     fVar59 * (float)((uint)auStack_248 ^
                                                                     _DAT_142e37820));
                      fVar59 = (float)(auStack_244._4_4_ ^ _DAT_142e37820) * fVar59;
                      auStack_3a8._0_4_ = fVar47;
                      fStack_3a0 = fStack_450;
                      fStack_39c = fStack_450;
                      fStack_450 = extraout_XMM0_Dc_01 * _UNK_142e37828;
                    }
                    iVar15 = pdb_140315970(&uStack_4d0);
                    uVar9 = pdb_1409012c0(pfStack_f8[0x9d]);
                    uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,uVar9);
                    bVar35 = fVar36 + fVar62 < _DAT_142e37838;
                    uStack_178._0_4_ = pfStack_108._0_4_;
                    uStack_178._4_4_ = fVar78;
                    uStack_170._0_4_ = (float)uStack_110;
                    iVar26 = (int)&uStack_178;
                    uStack_170._4_4_ = auVar76._0_4_;
                    uVar9 = pdb_1424bd0e0(&pfStack_438);
                    fVar39 = fVar39 + fVar40;
                    fVar81 = fVar78 + (float)auStack_298._0_4_ + fVar81;
                    fVar37 = fVar37 + fVar63;
                    uVar10 = (uint)bVar35;
                    if (iVar11 == 1) {
                      pdb_140a77450(&uStack_178);
                      auStack_298._0_4_ = uStack_140._4_4_;
                      uStack_110 = uStack_128;
                      pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_11c);
                      lVar32 = *(longlong *)((longlong)auStack_398 + 0x10);
                      if (lVar32 == *(longlong *)auStack_398) {
                        pdb_142d8da20(auStack_398);
                      }
                      lVar20 = *(longlong *)((longlong)auStack_398 + 8);
                      lVar22 = lVar32 * 0x60;
                      *(undefined1 (*) [8])(lVar20 + lVar22) = auStack_3a8;
                      *(float *)(lVar20 + 8 + lVar22) = fVar47;
                      *(float *)(lVar20 + 0xc + lVar22) = (float)uStack_448;
                      *(undefined4 *)(lVar20 + 0x10 + lVar22) = uStack_448._4_4_;
                      *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
                      *(float **)(lVar20 + 0x18 + lVar22) = uStack_458;
                      *(float *)(lVar20 + 0x20 + lVar22) = fVar59;
                      *(ulonglong *)(lVar20 + 0x24 + lVar22) = CONCAT44(fVar81,fVar39);
                      *(float *)(lVar20 + 0x2c + lVar22) = fVar37;
                      *(int *)(lVar20 + 0x30 + lVar22) = iVar15 + (int)auStack_2d8 + iVar26 * 10;
                      *(undefined4 *)(lVar20 + 0x34 + lVar22) = (undefined4)uStack_4c8;
                      *(uint *)(lVar20 + 0x38 + lVar22) = (uint)pfStack_1f8 | uVar10;
                      *(undefined4 *)(lVar20 + 0x3c + lVar22) = auStack_298._0_4_;
                      puVar27 = (undefined8 *)(lVar20 + 0x40 + lVar22);
                      *puVar27 = pfStack_3b8;
                      puVar27[1] = uStack_3b0;
                      *(ulonglong *)(lVar20 + 0x50 + lVar22) = uStack_110;
                      *(undefined4 *)(lVar20 + 0x58 + lVar22) = uVar9;
                      *(float *)(lVar20 + 0x5c + lVar22) = pfStack_108._0_4_;
                      auVar29 = auStack_398;
                    }
                    else {
                      pdb_140a77410(&uStack_178);
                      uStack_110 = CONCAT44(uStack_134,uStack_138);
                      pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_12c);
                      lVar32 = plStack_1b0[2];
                      if (lVar32 == *plStack_1b0) {
                        pdb_142d8db00(plStack_1b0);
                      }
                      lVar20 = plStack_1b0[1];
                      lVar22 = lVar32 * 0x50;
                      *(undefined1 (*) [8])(lVar20 + lVar22) = auStack_3a8;
                      *(float *)(lVar20 + 8 + lVar22) = fVar47;
                      *(ulonglong *)(lVar20 + 0xc + lVar22) = uStack_448;
                      *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
                      *(float **)(lVar20 + 0x18 + lVar22) = uStack_458;
                      *(float *)(lVar20 + 0x20 + lVar22) = fVar59;
                      *(ulonglong *)(lVar20 + 0x24 + lVar22) = CONCAT44(fVar81,fVar39);
                      *(float *)(lVar20 + 0x2c + lVar22) = fVar37;
                      *(int *)(lVar20 + 0x30 + lVar22) = iVar15;
                      *(int *)(lVar20 + 0x34 + lVar22) = iVar26 * 10 + (int)auStack_2d8;
                      *(undefined4 *)(lVar20 + 0x38 + lVar22) = (undefined4)uStack_4c8;
                      *(uint *)(lVar20 + 0x3c + lVar22) = uVar10 | 0xe0;
                      *(ulonglong *)(lVar20 + 0x40 + lVar22) = uStack_110;
                      *(undefined4 *)(lVar20 + 0x48 + lVar22) = uVar9;
                      *(float *)(lVar20 + 0x4c + lVar22) = pfStack_108._0_4_;
                      auVar29 = (undefined1  [8])plStack_1b0;
                    }
                    *(longlong *)((longlong)auVar29 + 0x10) = lVar32 + 1;
                  }
                }
              }
            }
            puVar34 = puVar34 + 2;
          } while (puVar34 != (ulonglong *)auStack_1e8._0_8_);
        }
        pfVar33 = pfStack_318 + 10;
        if (pfStack_280 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_270,(longlong)pfStack_280 << 4,4);
        }
      }
      if (auStack_4e8._0_8_ != 0) {
        pub_1406abac0((byte *)pfStack_330,auStack_4e8._0_8_ * 0x28,8);
      }
      if (uStack_268 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_260,(longlong)uStack_268 << 3,4);
      }
      pdb_141483d90(auStack_248,pfStack_f8);
      pdb_141483630(&uStack_2c8,pfStack_f8,auStack_248);
      if ((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) {
LAB_14144fba9:
        fVar36 = _DAT_142e36f28;
        if ((pfStack_2b8 != (float *)0x0) && (fVar36 = uStack_2c0[4], pfStack_2b8 != (float *)0x1))
        {
          lVar32 = ((longlong)pfStack_2b8 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar33 = uStack_2c0 + 9;
          do {
            fVar38 = *pfVar33;
            uVar21 = CONCAT44((uint)((int)fVar38 >> 0x1f) >> 1,(uint)((int)fVar36 >> 0x1f) >> 1) ^
                     CONCAT44(fVar38,fVar36);
            if ((int)uVar21 <= (int)(uVar21 >> 0x20)) {
              fVar36 = fVar38;
            }
            pfVar33 = pfVar33 + 5;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
      }
      else {
        cVar7 = pdb_140b77b50(param_10);
        if (cVar7 == '\0') goto LAB_14144fba9;
        fVar36 = (float)pdb_14092f880(pfStack_f8);
      }
      if ((uint)pfStack_f8[0x96] < 2) {
        cVar7 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3);
        if (param_10 != 0 && cVar7 == '\0') {
          cVar7 = pdb_140b77b50(param_10);
          if (cVar7 != '\0') {
            cVar7 = pdb_140901380(param_10 + 0x3d);
            if (cVar7 != '\0') {
              pdb_141483c00(&uStack_178,auStack_248);
              if ((float)uStack_178 == 1.4013e-45) {
                fVar36 = fVar36 + _DAT_142e3787c;
                uStack_268 = (float *)CONCAT44((float)uStack_170,uStack_178._4_4_);
                pfStack_260 = (float *)CONCAT44((float)uStack_168,uStack_170._4_4_);
                lStack_258 = CONCAT44((float)uStack_160,uStack_168._4_4_);
                uStack_250 = CONCAT44(uStack_158,uStack_160._4_4_);
                pdb_1414858e0(&uStack_358,auStack_248,pfStack_1a8,fVar36);
                lStack_488 = lStack_258;
                uStack_480 = uStack_250;
                uStack_498 = uStack_268;
                uStack_490 = pfStack_260;
                apfStack_4a8[1] = (float *)0x4;
                auStack_298._0_4_ = _DAT_142e382c0 + fVar36;
                pfVar19 = (float *)0x0;
                pfVar33 = (float *)0x0;
                pfStack_198 = (float *)((ulonglong)pfStack_198 & 0xffffffff00000000);
                fVar40 = _DAT_142e37830;
                fVar38 = _DAT_142e36f2c;
                do {
                  lVar32 = 0;
                  pfVar25 = pfVar19;
                  pfVar30 = pfVar33;
                  pfVar18 = pfVar33;
                  while( true ) {
                    if (pfVar18 == (float *)0x4) {
                      if (uStack_358 != (float *)0x0) {
                        pub_1406abac0((byte *)uStack_350,(longlong)uStack_358 << 4,4);
                      }
                      goto LAB_1414510e5;
                    }
                    fVar78 = *(float *)((longlong)&uStack_498 +
                                       lVar32 * 8 + (longlong)pfVar33 * 8 + 4);
                    uVar21 = (ulonglong)uStack_4d0 >> 0x20;
                    uStack_4d0 = (float *)CONCAT44((int)uVar21,
                                                   *(float *)(&uStack_498 +
                                                             (longlong)pfVar33 + lVar32));
                    uVar21 = (ulonglong)uStack_3f0 >> 0x20;
                    uStack_3f0 = (float *)CONCAT44((int)uVar21,fVar78);
                    fVar78 = fVar78 - *(float *)(&uStack_498 + (longlong)pfVar33 + lVar32);
                    if (0.0 < fVar78) break;
                    lVar32 = lVar32 + 1;
                    pfVar25 = (float *)((longlong)pfVar25 + 1);
                    pfVar30 = (float *)((longlong)pfVar30 + 1);
                    pfVar18 = (float *)((longlong)pfVar33 + lVar32);
                  }
                  pfVar33 = (float *)((longlong)pfVar33 + lVar32 + 1);
                  pfVar18 = (float *)((longlong)pfVar19 + lVar32 + 1);
                  apfStack_4a8[0] = pfVar33;
                  pfStack_478 = pfVar18;
                  auVar46._0_8_ = pub_142e32b00(pfVar25,pfVar30);
                  auVar46._8_8_ = extraout_XMM0_Qb_08;
                  if ((float)auVar46._0_8_ <= fVar40) {
                    auVar46._0_4_ = fVar40;
                  }
                  fVar40 = auVar46._0_4_;
                  uStack_308 = (float *)0x0;
                  if (0.0 <= fVar40) {
                    uStack_308 = (float *)((longlong)(fVar40 - fVar38) & (longlong)fVar40 >> 0x3f |
                                          (longlong)fVar40);
                  }
                  if (_DAT_142e36f30 < fVar40) {
                    uStack_308 = (float *)0xffffffffffffffff;
                  }
                  uVar21 = (longlong)uStack_308 * 2 - 1;
                  if ((longlong)uVar21 < 0) {
                    fVar38 = (float)(uVar21 >> 1 | 1);
                    fVar38 = fVar38 + fVar38;
                  }
                  else {
                    fVar38 = (float)(longlong)uVar21;
                  }
                  uStack_190 = (float *)CONCAT44(uStack_190._4_4_,fVar78 / fVar38);
                  uStack_178 = (float *)&uStack_4d0;
                  uStack_170 = &uStack_190;
                  uStack_168 = (float **)&uStack_308;
                  uStack_160 = &uStack_3f0;
                  uStack_158 = 0;
                  fStack_154 = 0.0;
                  fStack_150 = SUB84(uStack_308,0);
                  fStack_14c = (float)((ulonglong)uStack_308 >> 0x20);
                  pdb_1413eea80(&fStack_1c8,&uStack_178);
                  pfStack_108 = pfVar18;
                  uStack_458 = pfVar33;
                  uStack_448 = CONCAT44(fStack_1c4,fStack_1c8);
                  puVar27 = (undefined8 *)CONCAT44(fStack_1bc,fStack_1c0);
                  auStack_3a8 = (undefined1  [8])puVar27;
                  if (lStack_1b8 != 0) {
                    uStack_110 = (longlong)pfVar19 + lVar32;
                    auStack_1e8._0_8_ = puVar27 + lStack_1b8;
                    auStack_1d8._0_8_ = uStack_350;
                    pfVar33 = uStack_350 + lStack_348 * 4;
                    do {
                      iVar11 = (int)pfStack_198._0_4_;
                      uVar41 = *puVar27;
                      puVar27 = puVar27 + 1;
                      pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,(int)pfStack_198._0_4_ + 1);
                      pfVar19 = (float *)auStack_1d8._0_8_;
                      puVar6 = uStack_170;
                      do {
                        fVar38 = fStack_2b0;
                        uStack_170._4_4_ = (float)((ulonglong)puVar6 >> 0x20);
                        uStack_170._0_4_ = SUB84(puVar6,0);
                        fVar40 = (float)uVar41;
                        fVar78 = (float)((ulonglong)uVar41 >> 0x20);
                        if (pfVar19 == pfVar33) {
                          fVar62 = pfStack_f8[0x9d];
                          uStack_3f0 = pfStack_100;
                          fVar59 = fVar78 - fVar40;
                          uStack_170 = puVar6;
                          if (0.0 < fVar59) {
                            fVar39 = (fVar78 + fVar40) * _DAT_142e36f50;
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
                    /* WARNING: Subroutine does not return */
                                pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
                              }
                              auVar50 = ZEXT812(0);
                              if (0.0 <= fVar39) {
                                auVar50._4_8_ = 0;
                                auVar50._0_4_ = fVar39;
                              }
                              auVar58._12_4_ = 0;
                              auVar58._0_12_ = auVar50;
                            }
                            else {
                              fVar39 = (float)pub_142e32a70();
                              auVar58 = ZEXT416(-(uint)(fVar39 < 0.0) &
                                                (uint)((float)((uint)fVar38 & _DAT_142e377e0) +
                                                      fVar39) |
                                                ~-(uint)(fVar39 < 0.0) & (uint)fVar39);
                              puVar6 = uStack_170;
                            }
                            uStack_170 = puVar6;
                            pdb_141483090(&uStack_178,&uStack_2c8);
                            if ((float)uStack_178 == 1.4013e-45) {
                              auVar58._0_4_ = (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
                              auVar58._4_4_ = (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
                              auVar58._8_8_ = 0;
                              uStack_190 = (float *)CONCAT44(fStack_14c * uStack_160._4_4_ +
                                                             auVar58._4_4_,
                                                             fStack_14c * (float)uStack_160 +
                                                             auVar58._0_4_);
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
                              fVar38 = (float)pdb_140df3e10(&uStack_178,uStack_110);
                              auVar61 = auVar58;
                              fVar39 = (float)pdb_140df3e10(&uStack_178,pfStack_108);
                              fVar39 = fVar39 - fVar38;
                              fVar38 = auVar61._0_4_ - auVar58._0_4_;
                              fVar37 = _DAT_142e36f28 / SQRT(fVar38 * fVar38 + fVar39 * fVar39);
                              if ((int)fVar37 - 1U < 0x7fffff ||
                                  (int)ABS(fVar37) - 0x800000U < 0x7f000000 && -1 < (int)fVar37) {
                                fVar39 = fVar39 * fVar37;
                                fVar38 = fVar38 * fVar37;
                              }
                              else {
                                fVar38 = 0.0;
                                fVar39 = 0.0;
                              }
                              uStack_308 = (float *)CONCAT44(fVar38,fVar39);
                              uStack_170 = (undefined8 *)
                                           CONCAT44(uStack_170._4_4_,(float)uStack_170);
                              if (0.0 < fVar38 * fVar38 + fVar39 * fVar39) {
                                pdb_140df4520(&fStack_1c4,&uStack_308);
                                fVar37 = fStack_1bc;
                                fVar39 = fStack_1c0;
                                fVar38 = fStack_1c4;
                                uStack_178._0_4_ = (float)((uint)fStack_1bc ^ _DAT_142e37820);
                                uStack_178._4_4_ = fStack_1c4;
                                pdb_140df4520(&fStack_1c8,&uStack_178);
                                pdb_140df4540(&uStack_178,&uStack_190);
                                fVar81 = uStack_178._4_4_;
                                fVar72 = (float)uStack_178;
                                fVar47 = fVar59 * fVar38 * _DAT_142e61230;
                                fVar69 = fVar59 * fVar39 * _UNK_142e61234;
                                fVar63 = fVar37 * fVar59 * _DAT_142e36f38 + (float)uStack_170;
                                fVar73 = fStack_1c8 * _DAT_14300c2b0;
                                fVar77 = fStack_1c4 * _UNK_14300c2b4;
                                fVar83 = fStack_1c0 * _DAT_142e3c630;
                                pfStack_3b8 = (float *)CONCAT71(pfStack_3b8._1_7_,
                                                                fVar59 < _DAT_142e37838);
                                uStack_170._4_4_ = (float)auStack_298._0_4_;
                                pfVar19 = (float *)&uStack_178;
                                uStack_178._0_4_ = fVar40;
                                uStack_178._4_4_ = fVar36;
                                uStack_170._0_4_ = fVar78;
                                uVar9 = pdb_1424bd0e0(&pfStack_438);
                                pfStack_180 = (float *)CONCAT44(pfStack_180._4_4_,uVar9);
                                pfStack_1f8 = pfVar19;
                                pfStack_278 = (float *)pdb_140315970(&uStack_3f0);
                                uVar9 = pdb_1409012c0(fVar62);
                                lStack_320 = CONCAT44(lStack_320._4_4_,uVar9);
                                pdb_140a77410(&uStack_178);
                                plStack_1f0 = (longlong *)CONCAT44(uStack_134,uStack_138);
                                auStack_2d8 = (undefined1  [4])uStack_12c;
                                lVar32 = plStack_1b0[2];
                                if (lVar32 == *plStack_1b0) {
                                  pdb_142d8db00(plStack_1b0);
                                }
                                lVar20 = plStack_1b0[1];
                                lVar22 = lVar32 * 0x50;
                                *(ulonglong *)(lVar20 + lVar22) = CONCAT44(fVar77,fVar73);
                                *(float *)(lVar20 + 8 + lVar22) = fVar83;
                                pfVar19 = (float *)(lVar20 + 0xc + lVar22);
                                *pfVar19 = fVar59 * fVar38;
                                pfVar19[1] = fVar59 * fVar39;
                                *(float *)(lVar20 + 0x14 + lVar22) = fVar37 * fVar59;
                                *(undefined8 *)(lVar20 + 0x18 + lVar22) = _DAT_14330a250;
                                *(undefined4 *)(lVar20 + 0x20 + lVar22) = 0;
                                *(ulonglong *)(lVar20 + 0x24 + lVar22) =
                                     CONCAT44(fVar81 + fVar69,fVar72 + fVar47);
                                *(float *)(lVar20 + 0x2c + lVar22) = fVar63;
                                *(int *)(lVar20 + 0x30 + lVar22) = (int)pfStack_278;
                                *(int *)(lVar20 + 0x34 + lVar22) =
                                     iVar11 + (int)pfStack_1f8 * 10 + 4000000;
                                *(undefined4 *)(lVar20 + 0x38 + lVar22) = (undefined4)lStack_320;
                                *(uint *)(lVar20 + 0x3c + lVar22) = (byte)pfStack_3b8 | 0xe0;
                                *(longlong **)(lVar20 + 0x40 + lVar22) = plStack_1f0;
                                *(undefined4 *)(lVar20 + 0x48 + lVar22) = pfStack_180._0_4_;
                                *(undefined1 (*) [4])(lVar20 + 0x4c + lVar22) = auStack_2d8;
                                plStack_1b0[2] = lVar32 + 1;
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
                        fStack_1c8 = fVar40;
                        fStack_1c4 = fVar78;
                        cVar7 = pdb_1419ba150(&fStack_1c8,&uStack_178);
                        puVar6 = (undefined8 *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
                        pfVar19 = pfVar19 + 4;
                        uStack_170 = puVar6;
                      } while (cVar7 == '\0');
                    } while (puVar27 != (undefined8 *)auStack_1e8._0_8_);
                  }
                  pfVar19 = pfStack_108;
                  pfVar33 = uStack_458;
                  fVar40 = _DAT_142e37830;
                  fVar38 = _DAT_142e36f2c;
                  if (uStack_448 != 0) {
                    pub_1406abac0((byte *)auStack_3a8,uStack_448 << 3,4);
                  }
                } while( true );
              }
            }
          }
        }
      }
LAB_1414510e5:
      if (uStack_2c8 != (float *)0x0) {
        pub_1406abac0((byte *)uStack_2c0,(longlong)uStack_2c8 * 0x14,4);
      }
      puStack_468[2] = uStack_410;
      *puStack_468 = uStack_420;
      puStack_468[1] = (ulonglong)pfStack_418;
      puStack_468[3] = uStack_400;
      pfVar33 = pfStack_378;
      pfVar19 = pfStack_370;
      if (pfStack_438 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_430,(longlong)pfStack_438 << 4,4);
        pfVar33 = pfStack_378;
        pfVar19 = pfStack_370;
      }
      goto joined_r0x00014144d562;
    }
LAB_14144a70e:
    uVar9 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
    plStack_1f0 = (longlong *)*param_12;
    pdb_141483d90(&pfStack_538,param_3);
    pdb_141483630(&uStack_268,param_3,&pfStack_538);
    fVar38 = fStack_4fc;
    fVar36 = _DAT_142e36f28;
    if ((lStack_258 != 0) && (fVar36 = pfStack_260[4], lStack_258 != 1)) {
      lVar32 = (lStack_258 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
      pfVar33 = pfStack_260 + 9;
      do {
        fVar40 = *pfVar33;
        uVar21 = CONCAT44((uint)((int)fVar40 >> 0x1f) >> 1,(uint)((int)fVar36 >> 0x1f) >> 1) ^
                 CONCAT44(fVar40,fVar36);
        uVar10 = -(uint)((int)(uVar21 >> 0x20) < (int)uVar21);
        param_3 = (float *)(ulonglong)uVar10;
        if ((uVar10 & 1) == 0) {
          fVar36 = fVar40;
        }
        pfVar33 = pfVar33 + 5;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    if (param_5 == 0) {
LAB_14144a9cc:
      lStack_428 = 0;
      pfStack_438 = (float *)0x0;
      pfStack_430 = (float *)0x4;
    }
    else {
      uVar41 = pdb_140a6a370(param_5);
      uStack_178._0_4_ = (float)uVar41;
      uStack_178._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
      uStack_170._0_4_ = SUB84(param_3,0);
      uStack_170._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      uStack_168 = &pfStack_538;
      pdb_1413e9710(auStack_248,&uStack_178);
      if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144a9cc;
      lStack_428 = (longlong)uStack_238;
      pfStack_438 = _auStack_248;
      pfStack_430 = stack0xfffffffffffffdc0;
    }
    ppfStack_408 = (float **)(lStack_428 * 0xc);
    fStack_3f8 = fVar38;
    uStack_420 = 0;
    pfStack_418 = (float *)0x4;
    uStack_410 = 0;
    uStack_400 = 0;
    uStack_3f4 = 0;
    uVar21 = pdb_140930190(pfStack_f8,0);
    fVar36 = fVar36 + _DAT_142e3787c;
    fVar40 = extraout_XMM0_Da;
    if ((uVar21 & 1) == 0) {
      fVar40 = pfStack_f8[0x9e];
    }
    if (fVar36 <= _DAT_142e37ad4 + fVar40) {
      pfStack_370 = (float *)0x8;
      pfStack_378 = (float *)0x0;
    }
    else {
      pdb_14007ee60();
      pfStack_370 = (float *)pub_1406abab0(0x28,8);
      if (pfStack_370 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      pfStack_370[0] = 0.0;
      pfStack_370[1] = 0.0;
      pfStack_370[4] = 0.0;
      pfStack_370[5] = fVar40;
      pfStack_370[6] = fStack_4fc;
      pfStack_370[7] = fVar36;
      *(undefined1 *)(pfStack_370 + 8) = 0;
      pfStack_378 = (float *)0x1;
    }
    pfVar33 = pfStack_f8;
    uVar41 = CONCAT44(uVar9,fVar36);
    pfVar19 = pfStack_1a8;
    pfStack_368 = pfStack_378;
    pdb_141485b80(&uStack_2c8,pfStack_f8,&pfStack_538,&uStack_268,uVar41,&pfStack_378,pfStack_1a8,
                  param_6,param_7,CONCAT44(uVar13,0x3e96bb99));
    uStack_498 = (float *)0x0;
    uStack_490 = (float *)0x0;
    apfStack_4a8[0] = (float *)0x0;
    apfStack_4a8[1] = (float *)0x0;
    lStack_488 = 0;
    pfStack_3e8 = uStack_2c8;
    auStack_4e8._0_8_ = uStack_2c0 + (longlong)pfStack_2b8 * 10;
    lStack_320 = (longlong)pfVar33 + 0x29d;
    pfStack_330 = (float *)CONCAT44(pfStack_330._4_4_,
                                    CONCAT31((int3)(uStack_520 >> 0x28),
                                             (byte)(uStack_520 >> 0x20) | uStack_520._4_4_ == 2));
    auStack_388._0_4_ = _DAT_142f57bcc / fVar38;
    pfStack_328 = uStack_2c0;
    auStack_398._0_4_ = fVar38;
    pfVar33 = uStack_2c0;
    fVar36 = _DAT_142e36f28;
    while ((pfVar33 != (float *)auStack_4e8._0_8_ &&
           (puVar34 = *(ulonglong **)pfVar33, puVar34 != (ulonglong *)0x2))) {
      pfVar18 = *(float **)(pfVar33 + 2);
      bVar31 = *(byte *)(pfVar33 + 8);
      uStack_358 = *(float **)(pfVar33 + 4);
      uStack_350 = *(float **)(pfVar33 + 6);
      pfVar25 = (float *)0x4;
      if (((ulonglong)puVar34 & 1) != 0) {
        pfVar25 = pfVar18;
      }
      if ((float *)0x4 < pfVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar25,5,&UNK_14330d158);
      }
      pfVar30 = apfStack_4a8[(longlong)pfVar25];
      apfStack_4a8[(longlong)pfVar25] = (float *)((longlong)pfVar30 + 1);
      lVar32 = (longlong)pfVar18 * 1000000;
      if (((ulonglong)puVar34 & 1) == 0) {
        lVar32 = 0;
      }
      plStack_1b0 = (longlong *)(lVar32 + (longlong)pfVar30);
      uVar41 = CONCAT71((int7)((ulonglong)uVar41 >> 8),bVar31);
      uVar70 = param_9;
      pfStack_280 = pfVar18;
      uStack_270 = puVar34;
      pdb_1414882c0(&uStack_178,pfStack_100,plStack_1b0,&uStack_358,uVar41,param_9);
      auStack_1e8[0] = bVar31;
      auStack_298._0_4_ = _DAT_142e36f50;
      if ((bVar31 & 1) == 0) {
        auStack_298._0_4_ = fVar36;
      }
      pfStack_2a0 = uStack_178;
      pfVar18 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
      pfStack_1f8 = pfVar18 + (longlong)uStack_168 * 4;
      uStack_448 = CONCAT71(uStack_448._1_7_,bVar31 ^ 1 | (byte)pfStack_330);
      lStack_338 = (longlong)plStack_1b0 * 0xf4243 + 0x11;
      pfStack_278 = (float *)((longlong)plStack_1b0 * 0x101eb1 + 0x11);
      pfStack_3b8 = (float *)((longlong)plStack_1b0 * 0x14b291 + 0x75);
      pfStack_1a8 = (float *)((longlong)plStack_1b0 * 0xfb8bd + 0x4cb);
      pfStack_318 = (float *)((longlong)pfStack_280 + 1);
      pfStack_310 = pfVar18;
      pfStack_180 = pfVar33 + 10;
      while (pfVar33 = pfStack_180, fVar36 = _DAT_142e36f28, pfVar18 != pfStack_1f8) {
        auStack_1d8._0_8_ = pfVar18;
        uStack_3d8 = *(float **)pfVar18;
        uStack_3d0 = *(float **)(pfVar18 + 2);
        uStack_190 = pfStack_100;
        uVar9 = pdb_140deec10(&uStack_3d8);
        pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uVar9);
        uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_3d0);
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
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
          }
        }
        else {
          pub_142e32a70();
        }
        pdb_141483090(&uStack_178,&uStack_268);
        fVar36 = _DAT_142e378e0;
        fVar38 = _UNK_142e378e4;
        if ((float)uStack_178 == 1.4013e-45) {
          fVar36 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
          fVar38 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
        }
        pdb_14092f8d0(&uStack_178,pfStack_f8);
        fVar40 = fVar38;
        if ((float)uStack_178 != 0.0) {
          uVar42 = pdb_140930390(pfStack_f8);
          auVar48._8_4_ = (int)extraout_XMM0_Qb_01;
          auVar48._0_8_ = uVar42;
          auVar51._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          auVar51._0_12_ = auVar48;
          if (fVar38 <= (float)uVar42) {
            auVar52._4_12_ = auVar51._4_12_;
            auVar52._0_4_ = fVar38;
            auVar48 = auVar52._0_12_;
          }
          fVar40 = (float)(~-(uint)NAN(fVar38) & auVar48._0_4_ |
                          -(uint)NAN(fVar38) & (uint)(float)uVar42);
        }
        cVar7 = pdb_140901380(lStack_320);
        auVar80 = ZEXT816(0);
        if ((cVar7 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
          _auStack_248 = pfStack_100;
          lVar32 = pdb_140315970(auStack_248);
          uStack_178 = (float *)(lVar32 * 0x10c6f + lStack_338);
          uVar42 = pdb_140e02880(&uStack_178);
          auVar79._8_4_ = (int)extraout_XMM0_Qb_02;
          auVar79._0_8_ = uVar42;
          auVar79._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          auVar80._4_12_ = auVar79._4_12_;
          auVar80._0_4_ = (float)uVar42 * _DAT_142e3787c + (_DAT_142e36f28 - (float)uVar42) * 0.0;
        }
        _auStack_248 = pfStack_100;
        lVar32 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar32 * 0xeb3b + (longlong)pfStack_278);
        uVar42 = pdb_140e02880(&uStack_178);
        auVar67._8_4_ = (int)extraout_XMM0_Qb_03;
        auVar67._0_8_ = uVar42;
        auVar67._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        _auStack_248 = pfStack_100;
        lVar32 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_3b8);
        fVar62 = (float)pdb_140e02880(&uStack_178);
        auVar68._4_12_ = auVar67._4_12_;
        fVar59 = fVar62 * _DAT_142e37ad4;
        fVar39 = ((float)uVar42 * _DAT_142e37840 - (_DAT_142e36f28 - (float)uVar42) * _DAT_142e37840
                 ) + _DAT_142e3c630;
        fVar78 = uStack_3d8._4_4_;
        uVar9 = 0;
        uVar12 = 0;
        uVar13 = 0;
        if (auStack_1e8[0] == '\x01') {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar74._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar74._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar74._8_8_ = 0;
          }
          else {
            auVar74 = ZEXT816(0);
          }
        }
        else {
          pdb_141483090(&uStack_178,&uStack_268);
          if ((float)uStack_178 == 1.4013e-45) {
            auVar74._0_4_ =
                 fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
            auVar74._4_4_ =
                 fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
            auVar74._8_8_ = 0;
          }
          else {
            auVar74 = ZEXT816(0);
          }
          fVar72 = (float)pdb_14140ce00(param_8);
          fVar37 = fVar36;
          if (fVar36 <= fVar78) {
            fVar37 = fVar78;
          }
          auVar53._0_4_ = ~-(uint)NAN(fVar78) & (uint)fVar37;
          auVar53._4_4_ = fVar38;
          auVar53._8_8_ = 0;
          auVar53 = auVar53 | ZEXT416(-(uint)NAN(fVar78) & (uint)fVar36);
          fVar78 = auVar53._0_4_;
          uVar9 = auVar53._4_4_;
          uVar12 = auVar53._8_4_;
          uVar13 = auVar53._12_4_;
          if (fVar78 <= fVar72 + _DAT_142e3b1d8) {
            fVar78 = fVar78 + _DAT_142e36f38;
          }
        }
        uVar14 = (undefined4)((ulonglong)uVar41 >> 0x20);
        uVar85 = (undefined4)((ulonglong)uVar70 >> 0x20);
        uVar86 = (undefined4)((ulonglong)pfVar19 >> 0x20);
        if (0.0 < pfStack_198._0_4_) {
          fVar38 = auVar80._0_4_ + fVar40;
          fVar36 = fVar38;
          if (uStack_3d0._4_4_ <= fVar38) {
            fVar36 = uStack_3d0._4_4_;
          }
          auVar71._0_4_ = ~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar36;
          auVar71._4_4_ = auVar80._4_4_;
          auVar71._8_4_ = auVar80._8_4_;
          auVar71._12_4_ = auVar80._12_4_;
          auVar71 = auVar71 | ZEXT416(-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar38);
          fVar38 = auVar71._0_4_;
          fVar36 = fVar38 - fVar78;
          if (_DAT_142e37ad4 <= fVar36) {
            fVar59 = fVar59 + (_DAT_142e36f28 - fVar62) * 0.0;
            fVar62 = fVar39 * (float)auStack_298._0_4_ + 0.0;
            if ((uStack_448 & 1) == 0) {
              uVar9 = auStack_398._0_4_;
              fStack_1c8 = SUB84(pfStack_518,0);
              fStack_1c4 = (float)((ulonglong)pfStack_518 >> 0x20);
              fStack_1c0 = SUB84(pfStack_510,0);
              fStack_1bc = (float)((ulonglong)pfStack_510 >> 0x20);
              uStack_2f8 = pfStack_100;
              if (((float)auStack_398._0_4_ <= _DAT_142e37848) ||
                 (fVar59 = fVar59 + fVar36, fVar59 < _DAT_142e37ad4)) goto LAB_14144ae34;
              if (NAN(pfStack_108._0_4_ / (float)auStack_398._0_4_)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
              }
              fVar36 = (float)pub_142e32a70();
              if (NAN((float)uStack_110 / (float)uVar9)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
              }
              fVar38 = (float)pub_142e32a70();
              fVar40 = (float)pdb_141c40430(&fStack_1bc);
              fVar39 = (float)pdb_141c40430(&fStack_1bc);
              fVar37 = (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                              (uint)(fVar36 + _DAT_142e36f28) & -(uint)(fVar36 < 0.0)) *
                       (float)auStack_398._0_4_;
              fVar36 = (float)(~-(uint)(fVar38 < 0.0) & (uint)fVar38 |
                              (uint)(fVar38 + _DAT_142e36f28) & -(uint)(fVar38 < 0.0)) *
                       (float)auStack_398._0_4_;
              fVar39 = (float)auStack_388._0_4_ * fVar36 - fVar39;
              fVar38 = fVar39 + _DAT_142f57bcc;
              uStack_170._0_4_ =
                   (float)(-(uint)(fVar37 < fVar36) & (uint)fVar36 |
                          ~-(uint)(fVar37 < fVar36) & (uint)((float)auStack_398._0_4_ + fVar36));
              uStack_170._4_4_ = fVar78 + fVar59;
              puVar27 = &uStack_178;
              uStack_178._0_4_ = fVar37;
              uStack_178._4_4_ = fVar78;
              uVar9 = pdb_1424bd0e0(&pfStack_438,puVar27);
              pdb_140df4540(auStack_248,&fStack_1c8);
              fVar40 = fVar37 * (float)auStack_388._0_4_ - fVar40;
              uVar10 = -(uint)(fVar40 < fVar39);
              pfVar19 = (float *)CONCAT44(uVar86,~uVar10 & (uint)fVar38 | (uint)fVar39 & uVar10);
              uVar70 = CONCAT44(uVar85,fVar40);
              uVar41 = CONCAT44(uVar14,fVar59);
              pdb_140aaa870(&uStack_178,auStack_248,fStack_1c0,fVar62,uVar41,uVar70,pfVar19,3);
              uVar10 = pdb_140315970(&uStack_2f8);
              pdb_140aaac40(auStack_248,&uStack_178,
                            (uVar10 ^ (uint)plStack_1b0._0_4_) + (int)puVar27 * 10);
              pdb_140aaa7d0(&uStack_178,auStack_248,2);
              pdb_140aaab70(auStack_248,&uStack_178,uVar9);
            }
            else {
              auVar43._4_4_ = auVar71._4_4_;
              auVar43._0_4_ = fVar36;
              auVar43._8_4_ = auVar71._8_4_;
              auVar43._12_4_ = auVar71._12_4_;
              _auStack_2d4 = auVar43._4_12_;
              if ((auStack_1e8[0] & 1) == 0) {
                auStack_2d4._0_4_ = uVar9;
                auStack_2d8 = (undefined1  [4])fVar78;
                auStack_2d4._4_4_ = uVar12;
                fStack_2cc = (float)uVar13;
                _auStack_248 = pfStack_100;
                lVar32 = pdb_140315970(auStack_248);
                uStack_178 = (float *)(lVar32 * 0x13 + (longlong)pfStack_1a8);
                fVar39 = (float)pdb_140e02880(&uStack_178);
                fVar39 = fVar39 * _DAT_142e37938 + (_DAT_142e36f28 - fVar39) * 0.0;
                if ((uStack_520 & 0x100000000) == 0) goto LAB_14144b720;
LAB_14144b607:
                auVar61 = ZEXT816(0);
                uStack_170._0_4_ = SUB84(pfStack_510,0);
                uStack_170._4_4_ = (float)((ulonglong)pfStack_510 >> 0x20);
                uStack_178 = pfStack_518;
                uStack_168 = ppfStack_508;
                if (((ulonglong)uStack_270 & 1) == 0) goto LAB_14144b720;
                fVar37 = (float)pdb_140df3e10(&uStack_178,pfStack_280);
                auVar55 = auVar61;
                fVar72 = (float)pdb_140df3e10(&uStack_178,pfStack_318);
                fVar72 = fVar72 - fVar37;
                fVar37 = auVar55._0_4_ - auVar61._0_4_;
                fVar81 = _DAT_142e36f28 / SQRT(fVar37 * fVar37 + fVar72 * fVar72);
                if ((int)fVar81 - 1U < 0x7fffff ||
                    (int)ABS(fVar81) - 0x800000U < 0x7f000000 && -1 < (int)fVar81) {
                  fVar72 = fVar72 * fVar81;
                  fVar37 = fVar37 * fVar81;
                }
                else {
                  fVar37 = 0.0;
                  fVar72 = 0.0;
                }
                uStack_2f8 = (float *)CONCAT44(fVar37,fVar72);
                if (fVar37 * fVar37 + fVar72 * fVar72 <= 0.0) goto LAB_14144b720;
                pdb_140df4520(auStack_248 + 4,&uStack_2f8);
                uStack_2f8 = (float *)auStack_244;
                lStack_2f0 = CONCAT44(lStack_2f0._4_4_,fStack_23c);
              }
              else {
                auStack_2d8 = (undefined1  [4])(fVar36 * _DAT_142e36f50 + fVar78);
                fVar39 = 0.0;
                if ((uStack_520 & 0x100000000) != 0) goto LAB_14144b607;
LAB_14144b720:
                pdb_141483320(&uStack_2f8,&uStack_268);
              }
              fVar37 = (float)uStack_2f8;
              fVar72 = (float)lStack_2f0;
              uStack_178._0_4_ = (float)((uint)(float)lStack_2f0 ^ _DAT_142e37820);
              uStack_178._4_4_ = (float)uStack_2f8;
              pdb_140df4520(auStack_248,&uStack_178);
              fVar39 = auStack_2d8 - fVar39;
              fVar81 = auVar74._4_4_;
              fVar63 = auVar74._12_4_;
              if (auStack_1e8[0] == '\x01') {
                uStack_308 = pfStack_100;
                lVar32 = pdb_140315970(&uStack_308);
                uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_3b8);
                fVar40 = (float)pdb_140e02880(&uStack_178);
                fVar40 = (_DAT_142e36f28 - fVar40) * _DAT_142f684a8 + fVar40 * 0.0 +
                         pfStack_198._0_4_;
                fVar72 = fVar72 * fVar40;
                fVar37 = fVar40 * fVar37;
                auStack_2d4._0_4_ = fVar39 + fVar40 * uStack_2f8._4_4_ * _UNK_142e61234;
                auStack_2d8 = (undefined1  [4])(auVar74._0_4_ + fVar37 * _DAT_142e61230);
                auStack_2d4._4_4_ = auVar74._8_4_ + _UNK_142e61238 * 0.0;
                fStack_2cc = fVar63 + _UNK_142e6123c * 0.0;
                uVar42 = CONCAT44(fVar62 * auStack_248._4_4_,fVar62 * auStack_248);
                auVar68._0_4_ = fVar62 * (float)auStack_244._4_4_;
                fVar47 = fVar59 * _DAT_142e37838 + fVar36;
                fVar62 = fVar47 * 0.0;
                auStack_4b8._0_4_ = 0xe0;
                bVar35 = false;
                uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,fVar62);
                _auStack_3a8 = auVar68;
                fVar39 = fVar40 * uStack_2f8._4_4_;
                fVar40 = fVar81 + fVar72 * _DAT_142e36f38;
              }
              else {
                fVar47 = pfStack_198._0_4_ + fVar59;
                uVar42 = CONCAT44(uStack_2f8._4_4_ * fVar47,fVar37 * fVar47);
                _auStack_3a8 = ZEXT416((uint)(fVar47 * fVar72));
                uStack_4c8 = (float *)CONCAT44(uStack_4c8._4_4_,(float)auStack_248 * fVar62);
                fVar47 = (float)auStack_244._0_4_ * fVar62;
                fVar62 = fVar62 * (float)auStack_244._4_4_;
                bVar35 = fVar40 + _DAT_14300d240 <= fVar38;
                fVar37 = fVar36 * 0.0;
                auStack_2d4._0_4_ = fVar39;
                auStack_2d8 = (undefined1  [4])auVar74._0_4_;
                auStack_2d4._4_4_ = auVar74._8_4_;
                fStack_2cc = fVar63;
                fVar39 = fVar36;
                fVar72 = fVar37;
                fVar40 = fVar81;
                if (bVar35) {
                  auStack_4b8._0_4_ = (uint)((uint)pfStack_f8[0x96] < 2) << 7 | 0x60;
                }
                else {
                  auStack_4b8._0_4_ = 0xe0;
                }
              }
              uStack_458 = (float *)CONCAT44(fVar81,fVar40);
              fStack_450 = fVar63;
              fStack_44c = fVar63;
              uVar9 = pdb_140315970(&uStack_190);
              uVar12 = pdb_1409012c0(pfStack_f8[0x9d]);
              fVar40 = _DAT_142e37838;
              if (auStack_1e8[0] == '\x01') {
                fVar36 = pfStack_198._0_4_ + fVar59;
              }
              else if (bVar35) {
                fVar40 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
              }
              uStack_178._0_4_ = pfStack_108._0_4_;
              uStack_170._0_4_ = (float)uStack_110;
              iVar11 = (int)&uStack_178;
              uStack_178._4_4_ = fVar78;
              uStack_170._4_4_ = fVar38;
              uVar13 = pdb_1424bd0e0(&pfStack_438);
              pdb_140a77410(&uStack_178);
              pfStack_108 = (float *)CONCAT44(uStack_134,uStack_138);
              pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_12c);
              lVar32 = plStack_1f0[2];
              if (lVar32 == *plStack_1f0) {
                pdb_142d8db00(plStack_1f0);
              }
              lVar20 = plStack_1f0[1];
              lVar22 = lVar32 * 0x50;
              *(undefined8 *)(lVar20 + lVar22) = uVar42;
              *(undefined4 *)(lVar20 + 8 + lVar22) = auStack_3a8._0_4_;
              *(float *)(lVar20 + 0xc + lVar22) = fVar37;
              *(float *)(lVar20 + 0x10 + lVar22) = fVar39;
              *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
              *(undefined4 *)(lVar20 + 0x18 + lVar22) = (undefined4)uStack_4c8;
              *(float *)(lVar20 + 0x1c + lVar22) = fVar47;
              *(float *)(lVar20 + 0x20 + lVar22) = fVar62;
              *(longlong *)(lVar20 + 0x24 + lVar22) = _auStack_2d8;
              *(float *)(lVar20 + 0x2c + lVar22) = (float)uStack_458;
              *(undefined4 *)(lVar20 + 0x30 + lVar22) = uVar9;
              *(int *)(lVar20 + 0x34 + lVar22) = (int)plStack_1b0 + iVar11 * 10;
              *(undefined4 *)(lVar20 + 0x38 + lVar22) = uVar12;
              *(uint *)(lVar20 + 0x3c + lVar22) = auStack_4b8._0_4_ | (uint)(fVar36 < fVar40);
              *(float **)(lVar20 + 0x40 + lVar22) = pfStack_108;
              *(undefined4 *)(lVar20 + 0x48 + lVar22) = uVar13;
              *(float *)(lVar20 + 0x4c + lVar22) = pfStack_198._0_4_;
              plStack_1f0[2] = lVar32 + 1;
            }
          }
        }
LAB_14144ae34:
        pfVar18 = (float *)(auStack_1d8._0_8_ + 0x10);
      }
      if (pfStack_2a0 != (float *)0x0) {
        pub_1406abac0((byte *)pfStack_310,(longlong)pfStack_2a0 << 4,4);
      }
    }
    if (pfStack_3e8 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_328,(longlong)pfStack_3e8 * 0x28,8);
    }
    puStack_468[2] = uStack_410;
    *puStack_468 = uStack_420;
    puStack_468[1] = (ulonglong)pfStack_418;
    puStack_468[3] = uStack_400;
    pfVar33 = pfStack_430;
    pfVar19 = pfStack_438;
  }
  else {
    piVar16 = (int *)pdb_14092fa10(param_3);
    pfVar33 = pfStack_f8;
    if (piVar16 == (int *)0x0) goto LAB_14144a70e;
    plStack_1f0 = (longlong *)*param_12;
    if (*piVar16 != 1) {
      pfStack_280 = (float *)*param_14;
      pdb_141483d90(&pfStack_438,pfStack_f8);
      uVar9 = (undefined4)(in_stack_fffffffffffffa78 >> 0x20);
      pdb_141483630(apfStack_4a8,pfVar33,&pfStack_438);
      if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
         (cVar7 = pdb_140b77b50(param_10), cVar7 == '\0')) {
        if (uStack_498 == (float *)0x0) {
          auVar61 = ZEXT416((uint)_DAT_142e36f28);
        }
        else {
          auVar61 = ZEXT416((uint)apfStack_4a8[1][4]);
          if (uStack_498 != (float *)0x1) {
            lVar32 = ((longlong)uStack_498 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
            pfVar33 = apfStack_4a8[1] + 9;
            do {
              fVar36 = *pfVar33;
              uVar21 = CONCAT44((uint)((int)fVar36 >> 0x1f) >> 1,(uint)(auVar61._0_4_ >> 0x1f) >> 1)
                       ^ CONCAT44(fVar36,auVar61._0_4_);
              if ((int)uVar21 <= (int)(uVar21 >> 0x20)) {
                auVar61 = ZEXT416((uint)fVar36);
              }
              pfVar33 = pfVar33 + 5;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
          }
        }
      }
      else {
        uVar41 = pdb_14092f880(pfStack_f8);
        auVar61._8_4_ = (int)extraout_XMM0_Qb_00;
        auVar61._0_8_ = uVar41;
        auVar61._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      }
      if ((((uint)pfStack_f8[0x96] < 2) &&
          (cVar7 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3), param_10 != 0 && cVar7 == '\0')) &&
         (cVar7 = pdb_140b77b50(), cVar7 != '\0')) {
        uVar12 = pdb_140901380(param_10 + 0x3d);
        uStack_3e0 = (float *)CONCAT44(uStack_3e0._4_4_,uVar12);
      }
      else {
        uStack_3e0 = (float *)((ulonglong)uStack_3e0._4_4_ << 0x20);
      }
      auStack_388._4_12_ = auVar61._4_12_;
      auStack_388._0_4_ = auVar61._0_4_ + _DAT_142e3787c;
      ppfVar28 = &pfStack_438;
      pdb_1414858e0(&pfStack_378,&pfStack_438,pfStack_1a8,auStack_388._0_4_);
      uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,uStack_400._4_4_);
      if (param_5 == 0) {
LAB_14144d661:
        uStack_238 = (float *)0x0;
        _auStack_248 = (float *)0x0;
        unique0x1000b0e1 = (float *)4;
      }
      else {
        uVar41 = pdb_140a6a370(param_5);
        uStack_178._0_4_ = (float)uVar41;
        uStack_178._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
        uStack_170._0_4_ = SUB84(ppfVar28,0);
        uStack_170._4_4_ = (float)((ulonglong)ppfVar28 >> 0x20);
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
        uVar12 = 0;
      }
      else {
        uVar12 = pdb_140b77b50();
      }
      uVar21 = pdb_140930190(pfStack_f8,uVar12);
      fVar36 = extraout_XMM0_Da_00;
      if ((uVar21 & 1) == 0) {
        fVar36 = pfStack_f8[0x9e];
      }
      if ((float)auStack_388._0_4_ <= _DAT_142e37ad4 + fVar36) {
        uStack_2c0 = (float *)0x8;
        uStack_2c8 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uStack_2c0 = (float *)pub_1406abab0(0x28,8);
        if (uStack_2c0 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x28);
        }
        uStack_2c0[0] = 0.0;
        uStack_2c0[1] = 0.0;
        uStack_2c0[4] = 0.0;
        uStack_2c0[5] = fVar36;
        uStack_2c0[6] = uStack_400._4_4_;
        uStack_2c0[7] = (float)auStack_388._0_4_;
        *(undefined1 *)(uStack_2c0 + 8) = 0;
        uStack_2c8 = (float *)0x1;
      }
      pfStack_2b8 = uStack_2c8;
      pdb_141485b80(&uStack_268,pfStack_f8,&pfStack_438,apfStack_4a8,
                    CONCAT44(uVar9,auStack_388._0_4_),&uStack_2c8,pfStack_1a8,param_6,param_7,
                    CONCAT44(uVar13,0x3ec9eecc));
      pfVar19 = pfStack_260;
      pfStack_460 = uStack_268;
      lStack_528 = 0;
      uStack_520 = 0;
      pfStack_538 = (float *)0x0;
      pbStack_530 = (byte *)0x0;
      pfStack_518 = (float *)0x0;
      pfVar33 = pfStack_260 + lStack_258 * 10;
      _auStack_2d8 = (longlong)pfStack_f8 + 0x29d;
      pfStack_1a8 = pfStack_370;
      auStack_1e8._0_8_ = pfStack_370 + (longlong)pfStack_368 * 4;
      bVar35 = uStack_420._4_4_ == 2;
      uVar21 = uStack_420 >> 0x20;
      auStack_4e8._0_8_ = pfStack_260;
      while (((float *)auStack_4e8._0_8_ != pfVar33 &&
             (pfVar18 = *(float **)auStack_4e8._0_8_, pfVar18 != (float *)0x2))) {
        pfVar25 = *(float **)(auStack_4e8._0_8_ + 8);
        bVar31 = *(byte *)(auStack_4e8._0_8_ + 0x20);
        uStack_358 = *(float **)(auStack_4e8._0_8_ + 0x10);
        uStack_350 = *(float **)(auStack_4e8._0_8_ + 0x18);
        pfVar30 = (float *)0x4;
        if (((ulonglong)pfVar18 & 1) != 0) {
          pfVar30 = pfVar25;
        }
        if ((float *)0x4 < pfVar30) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar30,5,&UNK_14330d158);
        }
        pfVar1 = (&pfStack_538)[(longlong)pfVar30];
        (&pfStack_538)[(longlong)pfVar30] = (float *)((longlong)pfVar1 + 1);
        lVar32 = (longlong)pfVar25 * 1000000;
        if (((ulonglong)pfVar18 & 1) == 0) {
          lVar32 = 0;
        }
        lVar32 = lVar32 + (longlong)pfVar1;
        auStack_298 = (undefined1  [8])lVar32;
        pfStack_318 = pfVar18;
        pfStack_2a0 = pfVar25;
        pdb_1414882c0(&uStack_178,pfStack_100,lVar32,&uStack_358,bVar31,param_9);
        fVar36 = _DAT_142e36f50;
        if ((bVar31 & 1) == 0) {
          fVar36 = _DAT_142e36f28;
        }
        uStack_448 = CONCAT44(uStack_448._4_4_,fVar36);
        auStack_4e8._0_8_ = auStack_4e8._0_8_ + 0x28;
        pfStack_3e8 = uStack_178;
        pfVar18 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        pfStack_278 = pfVar18 + (longlong)uStack_168 * 4;
        lStack_338 = (longlong)auStack_298 * 0xf4243 + 0x11;
        lStack_320 = (longlong)auStack_298 * 0x101eb1 + 0x11;
        pfStack_1f8 = (float *)((longlong)auStack_298 * 0x14b291 + 0x75);
        pfStack_310 = (float *)((longlong)auStack_298 * 0xfb8bd + 0x4cb);
        pfStack_330 = (float *)((longlong)pfStack_2a0 + 1);
        uStack_458 = (float *)CONCAT71(uStack_458._1_7_,(byte)uStack_3e0 & (bVar31 ^ 1));
        auStack_3a8[0] = bVar31 ^ 1 | (byte)uVar21 | bVar35;
        pfStack_328 = pfVar18;
        pfStack_3b8 = (float *)CONCAT71(pfStack_3b8._1_7_,bVar31);
        while (pfVar18 != pfStack_278) {
          uStack_3d8 = *(float **)pfVar18;
          uStack_3d0 = *(float **)(pfVar18 + 2);
          uStack_190 = pfStack_100;
          pfStack_180 = pfVar18;
          uVar9 = pdb_140deec10(&uStack_3d8);
          pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uVar9);
          pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,(float)uStack_3d8);
          auStack_1d8._0_4_ = (float)uStack_3d0;
          fVar36 = ((float)uStack_3d8 + (float)uStack_3d0) * _DAT_142e36f50;
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
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
            }
          }
          else {
            pub_142e32a70();
          }
          pdb_141483090(&uStack_178,apfStack_4a8);
          fVar38 = _DAT_142e378e0;
          fVar40 = _UNK_142e378e4;
          if ((float)uStack_178 == 1.4013e-45) {
            fVar38 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
            fVar40 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
          }
          pdb_14092f8d0(&uStack_178,pfStack_f8);
          if ((float)uStack_178 != 0.0) {
            uVar41 = pdb_140930390(pfStack_f8);
            auVar49._8_4_ = (int)extraout_XMM0_Qb_05;
            auVar49._0_8_ = uVar41;
            auVar55._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
            auVar55._0_12_ = auVar49;
            if (fVar40 <= (float)uVar41) {
              auVar56._4_12_ = auVar55._4_12_;
              auVar56._0_4_ = fVar40;
              auVar49 = auVar56._0_12_;
            }
            fVar40 = (float)(~-(uint)NAN(fVar40) & auVar49._0_4_ |
                            -(uint)NAN(fVar40) & (uint)(float)uVar41);
          }
          cVar7 = pdb_140901380(_auStack_2d8);
          fVar78 = 0.0;
          if ((cVar7 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
            fStack_1c8 = SUB84(pfStack_100,0);
            fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
            lVar32 = pdb_140315970(&fStack_1c8);
            uStack_178 = (float *)(lVar32 * 0x10c6f + lStack_338);
            fVar78 = (float)pdb_140e02880(&uStack_178);
            fVar78 = fVar78 * _DAT_142e3787c + (_DAT_142e36f28 - fVar78) * 0.0;
          }
          fStack_1c8 = SUB84(pfStack_100,0);
          fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
          lVar32 = pdb_140315970(&fStack_1c8);
          uStack_178 = (float *)(lVar32 * 0xeb3b + lStack_320);
          uVar41 = pdb_140e02880(&uStack_178);
          fStack_1c8 = SUB84(pfStack_100,0);
          fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
          lVar32 = pdb_140315970(&fStack_1c8);
          uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_1f8);
          fVar59 = (float)pdb_140e02880(&uStack_178);
          uStack_110 = CONCAT44(uStack_110._4_4_,fVar59 * _DAT_142e37ad4);
          fVar39 = ((float)uVar41 * _DAT_142e37840 -
                   (_DAT_142e36f28 - (float)uVar41) * _DAT_142e37840) + _DAT_142e3c630;
          fVar62 = uStack_3d8._4_4_;
          if ((byte)pfStack_3b8 == '\x01') {
            pdb_141483090(&uStack_178,apfStack_4a8);
            if ((float)uStack_178 == 1.4013e-45) {
              auVar75._0_4_ =
                   fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_
              ;
              auVar75._4_4_ =
                   fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170
              ;
              auVar75._8_8_ = 0;
            }
            else {
              auVar75 = ZEXT816(0);
            }
            fVar78 = fVar78 + fVar40;
            fVar36 = fVar78;
            if (uStack_3d0._4_4_ <= fVar78) {
              fVar36 = uStack_3d0._4_4_;
            }
            fVar38 = (float)(~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar36 |
                            -(uint)NAN(uStack_3d0._4_4_) & (uint)fVar78);
          }
          else {
            pdb_141483090(&uStack_178,apfStack_4a8);
            if ((float)uStack_178 == 1.4013e-45) {
              auVar75._0_4_ =
                   fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_
              ;
              auVar75._4_4_ =
                   fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170
              ;
              auVar75._8_8_ = 0;
            }
            else {
              auVar75 = ZEXT816(0);
            }
            fVar72 = (float)pdb_14140ce00(param_8);
            fVar37 = fVar38;
            if (fVar38 <= fVar62) {
              fVar37 = fVar62;
            }
            fVar38 = (float)(~-(uint)NAN(fVar62) & (uint)fVar37 | -(uint)NAN(fVar62) & (uint)fVar38)
            ;
            uVar10 = -(uint)(fVar72 + _DAT_142e3b1d8 < fVar38);
            fVar62 = (float)(~uVar10 & (uint)(fVar38 + _DAT_142e36f38) | (uint)fVar38 & uVar10);
            fVar78 = fVar78 + fVar40;
            fVar38 = fVar78;
            if (uStack_3d0._4_4_ <= fVar78) {
              fVar38 = uStack_3d0._4_4_;
            }
            fVar38 = (float)(~-(uint)NAN(uStack_3d0._4_4_) & (uint)fVar38 |
                            -(uint)NAN(uStack_3d0._4_4_) & (uint)fVar78);
            if ((char)uStack_458 != '\0') {
              fVar78 = (float)((uint)(uStack_3d0._4_4_ - (float)auStack_388._0_4_) & _DAT_142e377e0)
              ;
              pfVar18 = pfStack_1a8;
              do {
                if (pfVar18 == (float *)auStack_1e8._0_8_) {
                  if (fVar78 <= _DAT_142e37ad4) {
                    pdb_141486f80(&uStack_178,&pfStack_438,pfStack_318,pfStack_2a0,fVar36);
                    fVar78 = uStack_178._4_4_;
                    fVar36 = (float)uStack_178;
                    fVar37 = 0.0;
                    if (0.0 < uStack_178._4_4_) {
                      if ((char)uStack_170 == '\0') {
                        fVar72 = (float)pub_142e32b00(uStack_178._4_4_ / _DAT_14330a260);
                        if (fVar72 <= _DAT_142e36f28) {
                          fVar72 = _DAT_142e36f28;
                        }
                        fVar78 = fVar78 / fVar72;
                        fVar72 = (float)pub_142e32a70();
                        if ((float)(-(uint)(fVar72 < 0.0) &
                                    (uint)((float)((uint)fVar78 & _DAT_142e377e0) + fVar72) |
                                   ~-(uint)(fVar72 < 0.0) & (uint)fVar72) < fVar78 * _DAT_142e36f50)
                        goto LAB_14144e103;
                      }
                      else {
                        fVar72 = (float)pub_142e32b00((uStack_178._4_4_ / _DAT_14330a248 +
                                                      _DAT_142e36f28) * _DAT_142e36f50);
                        if (fVar72 <= _DAT_142e37830) {
                          fVar72 = _DAT_142e37830;
                        }
                        fVar78 = (float)pub_142e32a40(fVar36 / (fVar78 / (fVar72 + fVar72 +
                                                                         _DAT_142e36f34)));
                        uVar10 = (uint)fVar78;
                        if (_DAT_142e382cc < fVar78) {
                          uVar10 = 0x7fffffff;
                        }
                        if (NAN(fVar78)) {
                          uVar10 = 0;
                        }
                        if ((uVar10 & 1) == 0) {
LAB_14144e103:
                          fStack_1c8 = 0.0;
                          fStack_1c4 = 0.0;
                          lVar32 = pdb_140315970(&fStack_1c8);
                          fVar36 = fVar36 * _DAT_14300c7a0;
                          uVar23 = 0;
                          if (0.0 <= fVar36) {
                            uVar23 = (longlong)(fVar36 - _DAT_142e36f2c) & (longlong)fVar36 >> 0x3f
                                     | (longlong)fVar36;
                          }
                          if (_DAT_142e36f30 < fVar36) {
                            uVar23 = 0xffffffffffffffff;
                          }
                          uStack_178 = (float *)(lVar32 * 0x13 + uVar23 * 0xfb8bd + 0x4cb);
                          fVar36 = (float)pdb_140e02880(&uStack_178);
                          fVar36 = fVar36 * _DAT_142e37938 + (_DAT_142e36f28 - fVar36) * 0.0;
                          fVar37 = fVar36 + fVar36 + _DAT_142e382c0;
                        }
                      }
                    }
                    fVar38 = fVar37 + fVar38;
                  }
                  break;
                }
                uStack_178._0_4_ = *pfVar18;
                uStack_178._4_4_ = pfVar18[2];
                fStack_1c8 = pfStack_198._0_4_;
                fStack_1c4 = (float)auStack_1d8._0_4_;
                fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
                uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
                cVar7 = pdb_1419ba150(&fStack_1c8,&uStack_178);
                pfVar18 = pfVar18 + 4;
              } while (cVar7 == '\0');
            }
          }
          if ((0.0 < pfStack_108._0_4_) && (fVar36 = fVar38 - fVar62, _DAT_142e37ad4 <= fVar36)) {
            fVar78 = (float)uStack_110 + (_DAT_142e36f28 - fVar59) * 0.0;
            fVar59 = fVar39 * (float)uStack_448 + 0.0;
            if ((auStack_3a8[0] & 1) == 0) {
              uStack_178._0_4_ = SUB84(pfStack_418,0);
              uStack_178._4_4_ = (float)((ulonglong)pfStack_418 >> 0x20);
              uStack_170._0_4_ = (float)uStack_410;
              uStack_170._4_4_ = (float)(uStack_410 >> 0x20);
              pdb_1414530c0(pfStack_100,auStack_298,&uStack_178,(uint)uStack_270,
                            (ulonglong)pfStack_198 & 0xffffffff,auStack_1d8._0_4_,fVar62,
                            fVar78 + fVar36,fVar59,auStack_248,pfStack_280);
            }
            else {
              uStack_110 = CONCAT44(uStack_110._4_4_,fVar78);
              if (((ulonglong)pfStack_3b8 & 1) == 0) {
                fStack_1c8 = SUB84(pfStack_100,0);
                fStack_1c4 = (float)((ulonglong)pfStack_100 >> 0x20);
                lVar32 = pdb_140315970(&fStack_1c8);
                uStack_178 = (float *)(lVar32 * 0x13 + (longlong)pfStack_310);
                fVar78 = (float)pdb_140e02880(&uStack_178);
                fVar39 = fVar78 * _DAT_142e37938 + (_DAT_142e36f28 - fVar78) * 0.0;
                fVar78 = fVar62;
                if ((uStack_420 & 0x100000000) == 0) goto LAB_14144e400;
LAB_14144e2e3:
                auVar61 = ZEXT816(0);
                uStack_170._0_4_ = (float)uStack_410;
                uStack_170._4_4_ = (float)(uStack_410 >> 0x20);
                uStack_178 = pfStack_418;
                uStack_168 = ppfStack_408;
                if (((ulonglong)pfStack_318 & 1) == 0) goto LAB_14144e400;
                fVar37 = (float)pdb_140df3e10(&uStack_178,pfStack_2a0);
                auVar55 = auVar61;
                fVar72 = (float)pdb_140df3e10(&uStack_178,pfStack_330);
                fVar72 = fVar72 - fVar37;
                fVar37 = auVar55._0_4_ - auVar61._0_4_;
                fVar81 = _DAT_142e36f28 / SQRT(fVar37 * fVar37 + fVar72 * fVar72);
                if ((int)fVar81 - 1U < 0x7fffff ||
                    (int)ABS(fVar81) - 0x800000U < 0x7f000000 && -1 < (int)fVar81) {
                  fVar72 = fVar72 * fVar81;
                  fVar37 = fVar37 * fVar81;
                }
                else {
                  fVar37 = 0.0;
                  fVar72 = 0.0;
                }
                uStack_2f8 = (float *)CONCAT44(fVar37,fVar72);
                if (fVar37 * fVar37 + fVar72 * fVar72 <= 0.0) goto LAB_14144e400;
                pdb_140df4520(&fStack_1c4,&uStack_2f8);
                uStack_2f8 = (float *)CONCAT44(fStack_1c0,fStack_1c4);
                lStack_2f0 = CONCAT44(lStack_2f0._4_4_,fStack_1bc);
              }
              else {
                fVar78 = fVar36 * _DAT_142e36f50 + fVar62;
                fVar39 = 0.0;
                if ((uStack_420 & 0x100000000) != 0) goto LAB_14144e2e3;
LAB_14144e400:
                pdb_141483320(&uStack_2f8,apfStack_4a8);
              }
              fVar37 = (float)uStack_2f8;
              fVar72 = (float)lStack_2f0;
              uStack_178._0_4_ = (float)((uint)(float)lStack_2f0 ^ _DAT_142e37820);
              uStack_178._4_4_ = (float)uStack_2f8;
              pdb_140df4520(&fStack_1c8,&uStack_178);
              fVar81 = auVar75._4_4_;
              if ((byte)pfStack_3b8 == '\x01') {
                uStack_308 = pfStack_100;
                lVar32 = pdb_140315970(&uStack_308);
                uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_1f8);
                fVar40 = (float)pdb_140e02880(&uStack_178);
                fVar47 = (_DAT_142e36f28 - fVar40) * _DAT_142f684a8 + fVar40 * 0.0 +
                         pfStack_108._0_4_;
                fVar72 = fVar72 * fVar47;
                fVar37 = fVar47 * fVar37;
                uVar42 = CONCAT44((fVar78 - fVar39) + fVar47 * uStack_2f8._4_4_ * _UNK_142e61234,
                                  auVar75._0_4_ + fVar37 * _DAT_142e61230);
                uVar70 = CONCAT44(fVar59 * fStack_1c4,fVar59 * fStack_1c8);
                auStack_4b8._4_4_ = (int)((ulonglong)uVar41 >> 0x20);
                auStack_4b8._0_4_ = fVar59 * fStack_1c0;
                auStack_4b8._8_4_ = (int)extraout_XMM0_Qb_06;
                auStack_4b8._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
                fVar63 = (float)uStack_110 * _DAT_142e37838 + fVar36;
                fVar59 = fVar63 * 0.0;
                auStack_398._0_4_ = 0xe0;
                bVar2 = false;
                plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fVar59);
                fVar40 = fVar81 + fVar72 * _DAT_142e36f38;
                fVar78 = fVar47 * uStack_2f8._4_4_;
              }
              else {
                fVar63 = pfStack_108._0_4_ + (float)uStack_110;
                uVar70 = CONCAT44(uStack_2f8._4_4_ * fVar63,fVar37 * fVar63);
                auStack_4b8 = ZEXT416((uint)(fVar63 * fVar72));
                plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fStack_1c8 * fVar59);
                fVar63 = fStack_1c4 * fVar59;
                fVar59 = fVar59 * fStack_1c0;
                bVar2 = fVar40 + _DAT_14300d240 <= fVar38;
                fVar72 = fVar36 * 0.0;
                uVar42 = CONCAT44(fVar78 - fVar39,auVar75._0_4_);
                fVar40 = fVar81;
                fVar37 = fVar72;
                fVar78 = fVar36;
                if (bVar2) {
                  auStack_398._0_4_ = (uint)((uint)pfStack_f8[0x96] < 2) << 7 | 0x60;
                }
                else {
                  auStack_398._0_4_ = 0xe0;
                }
              }
              uStack_4c8 = (float *)CONCAT44(fVar81,fVar40);
              uStack_4c0 = auVar75._12_4_;
              uStack_4bc = auVar75._12_4_;
              uVar9 = pdb_140315970(&uStack_190);
              uVar12 = pdb_1409012c0(pfStack_f8[0x9d]);
              fVar40 = _DAT_142e37838;
              if ((byte)pfStack_3b8 == '\x01') {
                fVar36 = pfStack_108._0_4_ + (float)uStack_110;
              }
              else if (bVar2) {
                fVar40 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
              }
              uStack_178._0_4_ = pfStack_198._0_4_;
              uStack_170._0_4_ = (float)auStack_1d8._0_4_;
              iVar11 = (int)&uStack_178;
              uStack_178._4_4_ = fVar62;
              uStack_170._4_4_ = fVar38;
              uVar13 = pdb_1424bd0e0(auStack_248);
              pdb_140a77410(&uStack_178);
              auVar61 = auStack_1d8;
              auStack_1d8._4_4_ = uStack_134;
              auStack_1d8._0_4_ = uStack_138;
              auStack_1d8._8_8_ = auVar61._8_8_;
              pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,uStack_12c);
              lVar32 = plStack_1f0[2];
              if (lVar32 == *plStack_1f0) {
                pdb_142d8db00(plStack_1f0);
              }
              lVar20 = plStack_1f0[1];
              lVar22 = lVar32 * 0x50;
              *(undefined8 *)(lVar20 + lVar22) = uVar70;
              *(undefined4 *)(lVar20 + 8 + lVar22) = auStack_4b8._0_4_;
              *(float *)(lVar20 + 0xc + lVar22) = fVar37;
              *(float *)(lVar20 + 0x10 + lVar22) = fVar78;
              *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
              *(float *)(lVar20 + 0x18 + lVar22) = plStack_1b0._0_4_;
              *(float *)(lVar20 + 0x1c + lVar22) = fVar63;
              *(float *)(lVar20 + 0x20 + lVar22) = fVar59;
              *(undefined8 *)(lVar20 + 0x24 + lVar22) = uVar42;
              *(undefined4 *)(lVar20 + 0x2c + lVar22) = (undefined4)uStack_4c8;
              *(undefined4 *)(lVar20 + 0x30 + lVar22) = uVar9;
              *(int *)(lVar20 + 0x34 + lVar22) = auStack_298._0_4_ + iVar11 * 10;
              *(undefined4 *)(lVar20 + 0x38 + lVar22) = uVar12;
              *(uint *)(lVar20 + 0x3c + lVar22) = auStack_398._0_4_ | (uint)(fVar36 < fVar40);
              *(undefined8 *)(lVar20 + 0x40 + lVar22) = auStack_1d8._0_8_;
              *(undefined4 *)(lVar20 + 0x48 + lVar22) = uVar13;
              *(float *)(lVar20 + 0x4c + lVar22) = pfStack_198._0_4_;
              plStack_1f0[2] = lVar32 + 1;
            }
          }
          pfVar18 = pfStack_180 + 4;
        }
        if (pfStack_3e8 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_328,(longlong)pfStack_3e8 << 4,4);
        }
      }
      if (pfStack_460 != (float *)0x0) {
        pub_1406abac0((byte *)pfVar19,(longlong)pfStack_460 * 0x28,8);
      }
      puStack_468[2] = (ulonglong)uStack_220;
      *puStack_468 = (ulonglong)uStack_230;
      puStack_468[1] = (ulonglong)pfStack_228;
      puStack_468[3] = uStack_210;
      pfVar33 = pfStack_378;
      pfVar19 = pfStack_1a8;
      if (_auStack_248 != (float *)0x0) {
        pub_1406abac0((byte *)stack0xfffffffffffffdc0,(longlong)_auStack_248 << 4,4);
        pfVar33 = pfStack_378;
        pfVar19 = pfStack_1a8;
      }
      goto joined_r0x000141451096;
    }
    pfStack_280 = (float *)*param_13;
    pdb_141483d90(&pfStack_538,pfStack_f8);
    pdb_141483630(&uStack_268,pfVar33,&pfStack_538);
    if (((param_10 == 0) || (1 < (uint)pfStack_f8[0x96])) ||
       (cVar7 = pdb_140b77b50(param_10), cVar7 == '\0')) {
      if (lStack_258 == 0) {
        auVar64 = ZEXT416((uint)_DAT_142e36f28);
      }
      else {
        auVar64 = ZEXT416((uint)pfStack_260[4]);
        if (lStack_258 != 1) {
          lVar32 = (lStack_258 * 0x14 - 0x14U >> 2) * -0x3333333333333333;
          pfVar33 = pfStack_260 + 9;
          do {
            fVar36 = *pfVar33;
            uVar21 = CONCAT44((uint)((int)fVar36 >> 0x1f) >> 1,(uint)(auVar64._0_4_ >> 0x1f) >> 1) ^
                     CONCAT44(fVar36,auVar64._0_4_);
            if ((int)uVar21 <= (int)(uVar21 >> 0x20)) {
              auVar64 = ZEXT416((uint)fVar36);
            }
            pfVar33 = pfVar33 + 5;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
      }
    }
    else {
      uVar41 = pdb_14092f880(pfStack_f8);
      auVar64._8_4_ = (int)extraout_XMM0_Qb;
      auVar64._0_8_ = uVar41;
      auVar64._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
    if ((uint)pfStack_f8[0x96] < 2) {
      cVar7 = pdb_1408ff990((longlong)pfStack_f8 + 0x2a3);
      if (param_10 == 0 || cVar7 != '\0') goto LAB_14144bc10;
      cVar7 = pdb_140b77b50();
      if (cVar7 == '\0') goto LAB_14144bc10;
      uVar9 = pdb_140901380(param_10 + 0x3d);
      auStack_2d8 = (undefined1  [4])uVar9;
    }
    else {
LAB_14144bc10:
      auVar5._12_4_ = 0;
      auVar5._0_12_ = _auStack_2d4;
      _auStack_2d8 = auVar5 << 0x20;
    }
    register0x00001384 = auVar64._4_12_;
    auStack_3a8._0_4_ = auVar64._0_4_ + _DAT_142e3787c;
    ppfVar28 = &pfStack_538;
    pdb_1414858e0(&uStack_358,&pfStack_538,pfStack_1a8,auStack_3a8._0_4_);
    if (param_5 == 0) {
LAB_14144bc97:
      lStack_428 = 0;
      pfStack_438 = (float *)0x0;
      pfStack_430 = (float *)0x4;
    }
    else {
      uVar41 = pdb_140a6a370(param_5);
      uStack_178._0_4_ = (float)uVar41;
      uStack_178._4_4_ = (float)((ulonglong)uVar41 >> 0x20);
      uStack_170._0_4_ = SUB84(ppfVar28,0);
      uStack_170._4_4_ = (float)((ulonglong)ppfVar28 >> 0x20);
      uStack_168 = &pfStack_538;
      pdb_1413e9710(auStack_248,&uStack_178);
      if (SBORROW8(0,(longlong)_auStack_248)) goto LAB_14144bc97;
      lStack_428 = (longlong)uStack_238;
      pfStack_438 = _auStack_248;
      pfStack_430 = stack0xfffffffffffffdc0;
    }
    ppfStack_408 = (float **)(lStack_428 * 0xc);
    fStack_3f8 = fStack_4fc;
    uStack_420 = 0;
    pfStack_418 = (float *)0x4;
    uStack_410 = 0;
    uStack_400 = 0;
    uStack_3f4 = 0;
    if (param_10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = pdb_140b77b50();
    }
    uStack_168._0_4_ = (float)param_11[2];
    uStack_168._4_4_ = (float)((ulonglong)param_11[2] >> 0x20);
    uStack_178._0_4_ = (float)*param_11;
    uStack_178._4_4_ = (float)((ulonglong)*param_11 >> 0x20);
    uStack_170._0_4_ = (float)param_11[1];
    uStack_170._4_4_ = (float)((ulonglong)param_11[1] >> 0x20);
    pdb_141489480(&fStack_1c8,pfStack_f8,&pfStack_538,auStack_3a8._0_4_,
                  in_stack_fffffffffffffa78 & 0xffffffffffffff00,&uStack_178,uVar8);
    pdb_141485b80(&pfStack_378,pfStack_f8,&pfStack_538,&uStack_268,auStack_3a8._0_4_,&fStack_1c8,
                  pfStack_1a8,param_6,param_7,CONCAT44(uVar13,0x3ec9eecc));
    pfVar18 = uStack_350;
    pfVar33 = pfStack_368;
    pfVar19 = pfStack_370;
    pfStack_460 = pfStack_378;
    uStack_19a = 0;
    pfStack_180 = pfStack_370;
    pdb_141489790(&uStack_2c8,&pfStack_538,param_11);
    auVar61 = auStack_4b8;
    uStack_498 = (float *)0x0;
    uStack_490 = (float *)0x0;
    apfStack_4a8[0] = (float *)0x0;
    apfStack_4a8[1] = (float *)0x0;
    lStack_488 = 0;
    pfVar33 = pfVar19 + (longlong)pfVar33 * 10;
    lStack_320 = (longlong)pfStack_f8 + 0x29d;
    uStack_4c8 = pfVar18;
    pfStack_198 = pfVar18 + lStack_348 * 4;
    auStack_4b8._1_3_ = (int3)(uStack_520 >> 0x28);
    auStack_4b8[0] = (byte)(uStack_520 >> 0x20) | uStack_520._4_4_ == 2;
    auStack_4b8._4_12_ = auVar61._4_12_;
    pfStack_310 = (float *)CONCAT44(pfStack_310._4_4_,_DAT_142f57bcc / fStack_4fc);
    pfStack_328 = pfVar19;
    plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fStack_4fc);
    fVar36 = _DAT_142e36f28;
LAB_14144bea0:
    pfVar18 = pfStack_328;
    if ((pfStack_328 != pfVar33) && (pfVar25 = *(float **)pfStack_328, pfVar25 != (float *)0x2)) {
      pfVar19 = *(float **)(pfStack_328 + 2);
      bVar31 = *(byte *)(pfStack_328 + 8);
      uStack_2f8 = *(float **)(pfStack_328 + 4);
      lStack_2f0 = *(longlong *)(pfStack_328 + 6);
      pfVar30 = (float *)0x4;
      if (((ulonglong)pfVar25 & 1) != 0) {
        pfVar30 = pfVar19;
      }
      if ((float *)0x4 < pfVar30) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar30,5,&UNK_14330d158);
      }
      pfVar1 = apfStack_4a8[(longlong)pfVar30];
      apfStack_4a8[(longlong)pfVar30] = (float *)((longlong)pfVar1 + 1);
      lVar32 = (longlong)pfVar19 * 1000000;
      if (((ulonglong)pfVar25 & 1) == 0) {
        lVar32 = 0;
      }
      lVar32 = lVar32 + (longlong)pfVar1;
      auStack_388._0_8_ = lVar32;
      pfStack_318 = pfVar25;
      pfStack_1a8 = pfVar19;
      pdb_1414882c0(&uStack_178,pfStack_100,lVar32,&uStack_2f8,bVar31,param_9);
      pfVar25 = uStack_178;
      uStack_110 = CONCAT71(uStack_110._1_7_,bVar31);
      fVar38 = _DAT_142e36f50;
      if ((bVar31 & 1) == 0) {
        fVar38 = fVar36;
      }
      uStack_458 = (float *)CONCAT44(uStack_458._4_4_,fVar38);
      pfStack_328 = pfVar18 + 10;
      pfVar18 = (float *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
      pfStack_3b8 = pfVar18 + CONCAT44(uStack_168._4_4_,(float)uStack_168) * 4;
      uStack_448 = CONCAT71(uStack_448._1_7_,bVar31) ^ 1;
      pfStack_2a0 = (float *)(auStack_388._0_8_ * 0xf4243 + 0x11);
      pfStack_278 = (float *)(auStack_388._0_8_ * 0x101eb1 + 0x11);
      pfStack_1f8 = (float *)(auStack_388._0_8_ * 0x14b291 + 0x75);
      pfStack_330 = (float *)(auStack_388._0_8_ * 0xfb8bd + 0x4cb);
      pfStack_3e8 = (float *)((longlong)pfStack_1a8 + 1);
      uStack_3e0 = pfVar18;
LAB_14144c040:
      pfVar19 = pfStack_180;
      pfVar1 = pfStack_2b8;
      pfVar30 = uStack_2c0;
      if (pfVar18 == pfStack_3b8) goto LAB_14144d480;
      uStack_308 = *(float **)pfVar18;
      uStack_300 = *(ulonglong *)(pfVar18 + 2);
      uStack_4d0 = pfStack_100;
      uVar9 = pdb_140deec10(&uStack_308);
      pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uVar9);
      fVar38 = (float)uStack_308;
      fVar40 = (float)uStack_300;
      fVar78 = ((float)uStack_308 + (float)uStack_300) * _DAT_142e36f50;
      cVar7 = uStack_250._4_1_;
      fVar36 = (float)uStack_250;
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
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
        }
      }
      else {
        pub_142e32a70();
      }
      pdb_141483090(&uStack_178,&uStack_268);
      fVar62 = _DAT_142e378e0;
      fVar59 = _UNK_142e378e4;
      if ((float)uStack_178 == 1.4013e-45) {
        fVar62 = fStack_14c * fStack_154 + (_DAT_142e36f28 - fStack_14c) * (float)uStack_168;
        fVar59 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
      }
      pfVar18 = pfVar18 + 4;
      lVar32 = (longlong)pfVar1 << 3;
      do {
        fVar39 = fVar59;
        if (lVar32 == 0) {
          pdb_14092f8d0(&uStack_178,pfStack_f8);
          if ((float)uStack_178 != 0.0) {
            fVar39 = (float)pdb_140930390(pfStack_f8);
            fVar36 = fVar39;
            if (fVar59 <= fVar39) {
              fVar36 = fVar59;
            }
            fVar39 = (float)(~-(uint)NAN(fVar59) & (uint)fVar36 | -(uint)NAN(fVar59) & (uint)fVar39)
            ;
          }
          bVar35 = false;
          bVar31 = (byte)uStack_448;
          goto LAB_14144c257;
        }
        fVar37 = *pfVar30;
        lVar32 = lVar32 + -8;
        pfVar19 = pfVar30 + 2;
        pfVar1 = pfVar30 + 1;
        pfVar30 = pfVar19;
      } while ((fVar78 < fVar37 + _DAT_142e3784c) || (*pfVar1 + _DAT_142e37870 < fVar78));
      if ((uStack_110 & 1) != 0) {
        pdb_14092f8d0(&uStack_178,pfStack_f8);
        bVar35 = false;
        bVar31 = 0;
        goto LAB_14144c257;
      }
      if (cVar7 == '\0') {
        if (fVar36 < 0.0) {
          uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
          auStack_248 = (undefined1  [4])fVar36;
          uStack_178 = (float *)&uStack_190;
          uStack_170._0_4_ = 7.7194595;
          uStack_170._4_4_ = 1.4013e-45;
          uStack_168 = (float **)auStack_248;
          uStack_160._0_4_ = 7.7194595;
          uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
        }
      }
      else {
        pub_142e32a70();
      }
      pdb_141483090(&uStack_178,&uStack_268);
      if ((float)uStack_178 == 1.4013e-45) {
        fVar37 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
        if (cVar7 == '\0') goto LAB_14144c72b;
LAB_14144c751:
        pub_142e32a70();
      }
      else {
        fVar37 = _DAT_142e36f28;
        if (cVar7 != '\0') goto LAB_14144c751;
LAB_14144c72b:
        if (fVar36 < 0.0) {
          uStack_190 = (float *)((ulonglong)uStack_190 & 0xffffffff00000000);
          auStack_248 = (undefined1  [4])fVar36;
          uStack_178 = (float *)&uStack_190;
          uStack_170._0_4_ = 7.7194595;
          uStack_170._4_4_ = 1.4013e-45;
          uStack_168 = (float **)auStack_248;
          uStack_160._0_4_ = 7.7194595;
          uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330d000,&uStack_178,&UNK_14330d0a0);
        }
      }
      pdb_141483090(&uStack_178,&uStack_268);
      fVar72 = _DAT_142e36f28;
      if ((float)uStack_178 == 1.4013e-45) {
        fVar72 = fStack_14c * fStack_150 + (_DAT_142e36f28 - fStack_14c) * uStack_168._4_4_;
      }
      fVar36 = _DAT_142e36f28;
      if ((fVar37 < uStack_308._4_4_) || (fVar72 < uStack_308._4_4_)) goto LAB_14144c040;
      pdb_14092f8d0(&uStack_178,pfStack_f8);
      fVar36 = fVar72;
      if (fVar72 <= fVar37) {
        fVar36 = fVar37;
      }
      fVar39 = (float)(~-(uint)NAN(fVar37) & (uint)fVar36 | -(uint)NAN(fVar37) & (uint)fVar72);
      auStack_298._4_4_ = fVar72;
      auStack_298._0_4_ = fVar37;
      _fStack_290 = 0;
      bVar35 = true;
      bVar31 = 1;
LAB_14144c257:
      cVar7 = pdb_140901380(lStack_320);
      auVar66 = ZEXT816(0);
      if ((cVar7 != '\0') && (1 < (uint)pfStack_f8[0x96])) {
        _auStack_248 = pfStack_100;
        lVar32 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar32 * 0x10c6f + (longlong)pfStack_2a0);
        uVar41 = pdb_140e02880(&uStack_178);
        auVar65._8_4_ = (int)extraout_XMM0_Qb_04;
        auVar65._0_8_ = uVar41;
        auVar65._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        auVar66._4_12_ = auVar65._4_12_;
        auVar66._0_4_ = (float)uVar41 * _DAT_142e3787c + (_DAT_142e36f28 - (float)uVar41) * 0.0;
      }
      _auStack_248 = pfStack_100;
      lVar32 = pdb_140315970(auStack_248);
      uStack_178 = (float *)(lVar32 * 0xeb3b + (longlong)pfStack_278);
      fVar36 = (float)pdb_140e02880(&uStack_178);
      _auStack_248 = pfStack_100;
      lVar32 = pdb_140315970(auStack_248);
      uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_1f8);
      fVar37 = (float)pdb_140e02880(&uStack_178);
      auStack_1e8._0_4_ = fVar37 * _DAT_142e37ad4;
      fVar72 = (fVar36 * _DAT_142e37840 - (_DAT_142e36f28 - fVar36) * _DAT_142e37840) +
               _DAT_142e3c630;
      auStack_1d8 = ZEXT416((uint)uStack_308._4_4_);
      if ((char)uStack_110 == '\x01') {
        pdb_141483090(&uStack_178,&uStack_268);
        if ((float)uStack_178 == 1.4013e-45) {
          auVar82._0_4_ =
               fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
          auVar82._4_4_ =
               fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
          auVar82._8_8_ = 0;
        }
        else {
          auVar82 = ZEXT816(0);
        }
      }
      else {
        pdb_141483090(&uStack_178,&uStack_268);
        if ((float)uStack_178 == 1.4013e-45) {
          auVar82._0_4_ =
               fStack_14c * (float)uStack_160 + (_DAT_142e36f28 - fStack_14c) * uStack_178._4_4_;
          auVar82._4_4_ =
               fStack_14c * uStack_160._4_4_ + (_DAT_142e36f28 - fStack_14c) * (float)uStack_170;
          auVar82._8_8_ = 0;
        }
        else {
          auVar82 = ZEXT816(0);
        }
        fVar81 = (float)pdb_14140ce00(param_8);
        fVar36 = fVar62;
        if (fVar62 <= (float)auStack_1d8._0_4_) {
          fVar36 = (float)auStack_1d8._0_4_;
        }
        uVar21 = CONCAT44(~auStack_1d8._4_4_ & (uint)fVar59,
                          ~-(uint)NAN((float)auStack_1d8._0_4_) & (uint)fVar36) |
                 CONCAT44(auStack_1d8._4_4_ & (uint)fVar59,
                          -(uint)NAN((float)auStack_1d8._0_4_) & (uint)fVar62);
        if ((float)uVar21 <= fVar81 + _DAT_142e3b1d8) {
          uVar21 = CONCAT44((int)(uVar21 >> 0x20),(float)uVar21 + _DAT_142e36f38);
        }
        auStack_1d8._8_8_ = 0;
        auStack_1d8._0_8_ = uVar21;
      }
      fVar62 = auVar66._0_4_ + fVar39;
      uVar9 = auVar66._8_4_;
      fVar36 = fVar62;
      if (uStack_300._4_4_ <= fVar62) {
        fVar36 = uStack_300._4_4_;
      }
      fVar62 = (float)(~-(uint)NAN(uStack_300._4_4_) & (uint)fVar36 |
                      -(uint)NAN(uStack_300._4_4_) & (uint)fVar62);
      if ((auStack_2d8[0] & bVar31) != 0) {
        fVar36 = (float)((uint)(uStack_300._4_4_ - (float)auStack_3a8._0_4_) & _DAT_142e377e0);
        pfVar19 = uStack_4c8;
        do {
          auVar61 = _auStack_248;
          if (pfVar19 == pfStack_198) {
            if (fVar36 <= _DAT_142e37ad4) {
              pdb_141486f80(&uStack_178,&pfStack_538,pfStack_318,pfStack_1a8,fVar78);
              fVar78 = uStack_178._4_4_;
              fVar36 = (float)uStack_178;
              fVar59 = 0.0;
              if (0.0 < uStack_178._4_4_) {
                fVar59 = 0.0;
                if ((char)uStack_170 == '\0') {
                  fVar81 = (float)pub_142e32b00(uStack_178._4_4_ / _DAT_14330a260);
                  if (fVar81 <= _DAT_142e36f28) {
                    fVar81 = _DAT_142e36f28;
                  }
                  fVar78 = fVar78 / fVar81;
                  fVar81 = (float)pub_142e32a70();
                  if ((float)(-(uint)(fVar81 < 0.0) &
                              (uint)((float)((uint)fVar78 & _DAT_142e377e0) + fVar81) |
                             ~-(uint)(fVar81 < 0.0) & (uint)fVar81) < fVar78 * _DAT_142e36f50)
                  goto LAB_14144c8ad;
                }
                else {
                  fVar81 = (float)pub_142e32b00((uStack_178._4_4_ / _DAT_14330a248 + _DAT_142e36f28)
                                                * _DAT_142e36f50);
                  if (fVar81 <= _DAT_142e37830) {
                    fVar81 = _DAT_142e37830;
                  }
                  fVar78 = (float)pub_142e32a40(fVar36 / (fVar78 / (fVar81 + fVar81 + _DAT_142e36f34
                                                                   )));
                  uVar10 = (uint)fVar78;
                  if (_DAT_142e382cc < fVar78) {
                    uVar10 = 0x7fffffff;
                  }
                  if (NAN(fVar78)) {
                    uVar10 = 0;
                  }
                  if ((uVar10 & 1) == 0) {
LAB_14144c8ad:
                    auVar3._8_8_ = 0;
                    auVar3._0_8_ = stack0xfffffffffffffdc0;
                    _auStack_248 = auVar3 << 0x40;
                    lVar32 = pdb_140315970(auStack_248);
                    fVar36 = fVar36 * _DAT_14300c7a0;
                    uVar21 = 0;
                    if (0.0 <= fVar36) {
                      uVar21 = (longlong)(fVar36 - _DAT_142e36f2c) & (longlong)fVar36 >> 0x3f |
                               (longlong)fVar36;
                    }
                    if (_DAT_142e36f30 < fVar36) {
                      uVar21 = 0xffffffffffffffff;
                    }
                    uStack_178 = (float *)(lVar32 * 0x13 + uVar21 * 0xfb8bd + 0x4cb);
                    fVar36 = (float)pdb_140e02880(&uStack_178);
                    fVar36 = fVar36 * _DAT_142e37938 + (_DAT_142e36f28 - fVar36) * 0.0;
                    fVar59 = fVar36 + fVar36 + _DAT_142e382c0;
                  }
                }
              }
              fVar62 = fVar62 + fVar59;
            }
            break;
          }
          uStack_178._0_4_ = *pfVar19;
          uStack_178._4_4_ = pfVar19[2];
          auStack_244._0_4_ = fVar40;
          auStack_248 = (undefined1  [4])fVar38;
          stack0xfffffffffffffdc1 = auVar61._9_7_;
          auStack_244[4] = 0;
          uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
          cVar7 = pdb_1419ba150(auStack_248,&uStack_178);
          pfVar19 = pfVar19 + 4;
        } while (cVar7 == '\0');
      }
      fVar36 = _DAT_142e36f28;
      if (pfStack_108._0_4_ <= 0.0) goto LAB_14144c040;
      fVar78 = fVar62 - (float)auStack_1d8._0_4_;
      if (fVar78 < _DAT_142e37ad4) goto LAB_14144c040;
      auVar54 = ZEXT816(0);
      fVar59 = (float)auStack_1e8._0_4_ + (_DAT_142e36f28 - fVar37) * 0.0;
      auStack_1e8._0_4_ = fVar59;
      fVar37 = fVar72 * (float)uStack_458 + 0.0;
      if (((bVar31 | auStack_4b8[0]) & 1) == 0) {
        fVar62 = plStack_1b0._0_4_;
        uStack_3d8 = pfStack_518;
        uStack_3d0 = pfStack_510;
        uStack_190 = pfStack_100;
        if ((_DAT_142e37848 < plStack_1b0._0_4_) &&
           (fVar59 = fVar59 + fVar78, _DAT_142e37ad4 <= fVar59)) {
          if (NAN(fVar38 / plStack_1b0._0_4_)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          fVar36 = (float)pub_142e32a70();
          if (NAN(fVar40 / fVar62)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          fVar38 = (float)pub_142e32a70();
          pdb_141c40430((longlong)&uStack_3d0 + 4);
          pdb_141c40430((longlong)&uStack_3d0 + 4);
          uStack_178._0_4_ =
               (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                      (uint)(fVar36 + _DAT_142e36f28) & -(uint)(fVar36 < 0.0)) * plStack_1b0._0_4_;
          fVar36 = (float)(~-(uint)(fVar38 < 0.0) & (uint)fVar38 |
                          (uint)(fVar38 + _DAT_142e36f28) & -(uint)(fVar38 < 0.0)) *
                   plStack_1b0._0_4_;
          uStack_170._0_4_ =
               (float)(-(uint)((float)uStack_178 < fVar36) & (uint)fVar36 |
                      ~-(uint)((float)uStack_178 < fVar36) & (uint)(plStack_1b0._0_4_ + fVar36));
          uStack_178._4_4_ = auStack_1d8._0_4_;
          uStack_170._4_4_ = uStack_178._4_4_ + fVar59;
          puVar27 = &uStack_178;
          uVar9 = pdb_1424bd0e0(&pfStack_438,puVar27);
          pdb_140df4540(auStack_248,&uStack_3d8,auStack_1d8._0_8_);
          pdb_140aaa870(&uStack_178,auStack_248);
          uVar10 = pdb_140315970(&uStack_190);
          pdb_140aaac40(auStack_248,&uStack_178,(uVar10 ^ auStack_388._0_4_) + (int)puVar27 * 10);
          pdb_140aaa7d0(&uStack_178,auStack_248,2);
          pdb_140aaab70(auStack_248,&uStack_178,uVar9);
          fVar36 = _DAT_142e36f28;
        }
        goto LAB_14144c040;
      }
      bVar2 = true;
      if (bVar35) {
        if (fVar62 < (float)auStack_1d8._0_4_) {
          uStack_190 = (float *)CONCAT44(uStack_190._4_4_,auStack_1d8._0_4_);
          auStack_248 = (undefined1  [4])fVar62;
          uStack_178 = (float *)&uStack_190;
          uStack_170._0_4_ = 7.7194595;
          uStack_170._4_4_ = 1.4013e-45;
          uStack_168 = (float **)auStack_248;
          uStack_160._0_4_ = 7.7194595;
          uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330a270,&uStack_178,&UNK_14330a310);
        }
        auVar54._0_8_ = CONCAT44(auStack_1d8._0_4_,auStack_1d8._0_4_);
        auVar54._8_4_ = auStack_1d8._8_4_;
        auVar54._12_4_ = auStack_1d8._8_4_;
        auVar60._8_4_ = auStack_1d8._8_4_;
        auVar60._0_8_ = auVar54._0_8_;
        auVar60._12_4_ = auStack_1d8._8_4_;
        auVar61 = maxps(auVar60,_auStack_298);
        auVar44._4_4_ = fVar62;
        auVar44._0_4_ = fVar62;
        auVar44._8_4_ = uVar9;
        auVar44._12_4_ = uVar9;
        auVar61 = minps(auVar44,auVar61);
        fVar36 = auVar61._0_4_ + _DAT_143309380;
        fVar59 = auVar61._4_4_ + _UNK_143309384;
        if ((float)((uint)(fVar36 - fVar59) & _DAT_142e377e0) <= _DAT_142e37848)
        goto joined_r0x00014144cd40;
        auVar45._0_4_ = fVar36 - (float)auStack_1d8._0_4_;
        auVar45._4_4_ = fVar59 - (float)auStack_1d8._0_4_;
        auVar45._8_4_ = (auVar61._8_4_ + _UNK_143309388) - (float)auStack_1d8._8_4_;
        auVar45._12_4_ = (auVar61._12_4_ + _UNK_14330938c) - (float)auStack_1d8._8_4_;
        auVar54._4_4_ = fVar78;
        auVar54._0_4_ = fVar78;
        auVar54._8_4_ = uVar9;
        auVar54._12_4_ = uVar9;
        auStack_4e8 = divps(auVar45,auVar54);
        bVar35 = true;
        bVar2 = false;
        bVar4 = bVar35;
        if ((uStack_110 & 1) == 0) goto LAB_14144cd46;
LAB_14144ca75:
        auStack_298._4_4_ = auVar66._4_4_;
        auStack_298._0_4_ = fVar78 * _DAT_142e36f50 + (float)auStack_1d8._0_4_;
        fStack_290 = (float)uVar9;
        fStack_28c = (float)auVar66._12_4_;
        fVar36 = 0.0;
      }
      else {
joined_r0x00014144cd40:
        bVar4 = false;
        bVar35 = false;
        if ((uStack_110 & 1) != 0) goto LAB_14144ca75;
LAB_14144cd46:
        _auStack_298 = auStack_1d8;
        _auStack_248 = pfStack_100;
        lVar32 = pdb_140315970(auStack_248);
        uStack_178 = (float *)(lVar32 * 0x13 + (longlong)pfStack_330);
        fVar36 = (float)pdb_140e02880(&uStack_178);
        auVar54 = ZEXT816(0);
        fVar36 = fVar36 * _DAT_142e37938 + (_DAT_142e36f28 - fVar36) * 0.0;
        bVar4 = bVar35;
      }
      if ((uStack_520 & 0x100000000) != 0) {
        uStack_168._0_4_ = SUB84(ppfStack_508,0);
        uStack_168._4_4_ = (float)((ulonglong)ppfStack_508 >> 0x20);
        uStack_170._0_4_ = SUB84(pfStack_510,0);
        uStack_170._4_4_ = (float)((ulonglong)pfStack_510 >> 0x20);
        uStack_178 = pfStack_518;
        if (((ulonglong)pfStack_318 & 1) != 0) {
          fVar59 = (float)pdb_140df3e10(&uStack_178,pfStack_1a8);
          auVar61 = auVar54;
          fVar72 = (float)pdb_140df3e10(&uStack_178,pfStack_3e8);
          fVar72 = fVar72 - fVar59;
          fVar59 = auVar61._0_4_ - auVar54._0_4_;
          fVar81 = _DAT_142e36f28 / SQRT(fVar59 * fVar59 + fVar72 * fVar72);
          if ((int)fVar81 - 1U < 0x7fffff ||
              (int)ABS(fVar81) - 0x800000U < 0x7f000000 && -1 < (int)fVar81) {
            fVar72 = fVar72 * fVar81;
            fVar59 = fVar59 * fVar81;
          }
          else {
            fVar59 = 0.0;
            fVar72 = 0.0;
          }
          uStack_190 = (float *)CONCAT44(fVar59,fVar72);
          if (0.0 < fVar59 * fVar59 + fVar72 * fVar72) {
            pdb_140df4520(auStack_248 + 4,&uStack_190);
            uStack_190 = (float *)auStack_244;
            fStack_188 = fStack_23c;
            goto LAB_14144cf13;
          }
        }
      }
      pdb_141483320(&uStack_190,&uStack_268);
LAB_14144cf13:
      fVar72 = fStack_188;
      fVar59 = (float)uStack_190;
      uStack_178._0_4_ = (float)((uint)fStack_188 ^ _DAT_142e37820);
      uStack_178._4_4_ = (float)uStack_190;
      pdb_140df4520(auStack_248,&uStack_178);
      fVar36 = auStack_298._0_4_ - fVar36;
      fVar81 = auVar82._4_4_;
      if ((char)uStack_110 == '\x01') {
        uStack_3f0 = pfStack_100;
        lVar32 = pdb_140315970(&uStack_3f0);
        uStack_178 = (float *)(lVar32 * 0x184b + (longlong)pfStack_1f8);
        fVar39 = (float)pdb_140e02880(&uStack_178);
        fVar39 = fVar39 * 0.0 + (_DAT_142e36f28 - fVar39) * _DAT_142f684a8 + pfStack_108._0_4_;
        fVar72 = fVar72 * fVar39;
        fVar59 = fVar39 * fVar59;
        uVar41 = CONCAT44(fVar39 * uStack_190._4_4_,fVar59);
        auStack_298._4_4_ = fVar36 + fVar39 * uStack_190._4_4_ * _UNK_142e61234;
        auStack_298._0_4_ = auVar82._0_4_ + fVar59 * _DAT_142e61230;
        fStack_290 = auVar82._8_4_ + extraout_XMM0_Dc_00 * 0.0 * _UNK_142e61238;
        fStack_28c = auVar82._12_4_ + extraout_XMM0_Dc_00 * 0.0 * _UNK_142e6123c;
        fVar81 = fVar81 + fVar72 * _DAT_142e36f38;
        if (bVar2) {
          uVar70 = CONCAT44(fVar37 * auStack_248._4_4_,fVar37 * auStack_248);
          fVar63 = fVar37 * (float)auStack_244._4_4_;
          fVar36 = (float)auStack_1e8._0_4_ * _DAT_142e37838 + fVar78;
          fVar59 = fVar36 * 0.0;
          auStack_398._4_4_ = fVar36;
          auStack_398._0_4_ = fVar59;
          _fStack_390 = 0;
        }
        else {
          fVar36 = (float)auStack_1e8._0_4_ * _DAT_142e37838 + fVar78;
          fVar63 = fVar36 * 0.0;
          auStack_398._4_4_ = fVar37 * (float)((uint)auStack_248._4_4_ ^ _UNK_142e37824);
          auStack_398._0_4_ = fVar37 * (float)((uint)auStack_248 ^ _DAT_142e37820);
          fStack_390 = extraout_XMM0_Dc * _UNK_142e37828;
          fStack_38c = extraout_XMM0_Dc * _UNK_142e3782c;
          fVar59 = fVar37 * (float)(auStack_244._4_4_ ^ _DAT_142e37820);
          uVar70 = CONCAT44(fVar36,fVar63);
        }
        uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,0xe0);
        bVar35 = false;
      }
      else {
        fVar63 = pfStack_108._0_4_ + (float)auStack_1e8._0_4_;
        uVar70 = CONCAT44(uStack_190._4_4_ * fVar63,fVar59 * fVar63);
        fVar63 = fVar63 * fVar72;
        fVar72 = fVar78 * _DAT_142e378e0;
        uVar41 = CONCAT44(fVar78 * _UNK_142e378e4,fVar72);
        fVar59 = fVar37 * (float)auStack_244._4_4_;
        bVar35 = fVar39 + _DAT_14300d240 <= fVar62;
        auStack_398._0_4_ = fVar37 * auStack_248;
        auStack_398._4_4_ = fVar37 * auStack_248._4_4_;
        fStack_390 = extraout_XMM0_Dc * 0.0;
        fStack_38c = extraout_XMM0_Dc * 0.0;
        auStack_298._4_4_ = fVar36;
        auStack_298._0_4_ = auVar82._0_4_;
        fStack_290 = auVar82._8_4_;
        fStack_28c = auVar82._12_4_;
        if (bVar35) {
          uStack_270 = (ulonglong *)
                       (CONCAT44(uStack_270._4_4_,(uint)((uint)pfStack_f8[0x96] < 2) << 7) | 0x60);
        }
        else {
          uStack_270 = (ulonglong *)CONCAT44(uStack_270._4_4_,0xe0);
        }
      }
      iVar11 = pdb_140315970(&uStack_4d0);
      uVar9 = pdb_1409012c0(pfStack_f8[0x9d]);
      lStack_338 = CONCAT44(lStack_338._4_4_,uVar9);
      fVar36 = _DAT_142e37838;
      if ((char)uStack_110 == '\x01') {
        fVar78 = pfStack_108._0_4_ + (float)auStack_1e8._0_4_;
      }
      else if (bVar35) {
        fVar36 = *(float *)(&UNK_14330a268 + (ulonglong)(1 < (uint)pfStack_f8[0x96]) * 4);
      }
      uStack_178._0_4_ = fVar38;
      uStack_178._4_4_ = (float)auStack_1d8._0_4_;
      uStack_170._0_4_ = fVar40;
      iVar26 = (int)&uStack_178;
      uStack_170._4_4_ = fVar62;
      uVar9 = pdb_1424bd0e0(&pfStack_438);
      if (bVar4) {
        bVar35 = fVar78 < _DAT_142e37838;
        pdb_140a77450(&uStack_178);
        pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,uStack_140._4_4_);
        auStack_1e8._0_8_ = uStack_128;
        auStack_1d8._0_4_ = uStack_11c;
        lVar32 = *(longlong *)(pfStack_280 + 4);
        if (lVar32 == *(longlong *)pfStack_280) {
          pdb_142d8da20(pfStack_280);
        }
        lVar20 = *(longlong *)(pfStack_280 + 2);
        lVar22 = lVar32 * 0x60;
        *(undefined8 *)(lVar20 + lVar22) = uVar70;
        *(float *)(lVar20 + 8 + lVar22) = fVar63;
        *(int *)(lVar20 + 0xc + lVar22) = (int)uVar41;
        *(int *)(lVar20 + 0x10 + lVar22) = (int)((ulonglong)uVar41 >> 0x20);
        *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
        *(undefined1 (*) [8])(lVar20 + 0x18 + lVar22) = auStack_398;
        *(float *)(lVar20 + 0x20 + lVar22) = fVar59;
        *(undefined1 (*) [8])(lVar20 + 0x24 + lVar22) = auStack_298;
        *(float *)(lVar20 + 0x2c + lVar22) = fVar81;
        *(int *)(lVar20 + 0x30 + lVar22) = iVar11 + auStack_388._0_4_ + iVar26 * 10;
        *(undefined4 *)(lVar20 + 0x34 + lVar22) = (undefined4)lStack_338;
        *(uint *)(lVar20 + 0x38 + lVar22) = bVar35 | 4;
        *(float *)(lVar20 + 0x3c + lVar22) = pfStack_108._0_4_;
        puVar27 = (undefined8 *)(lVar20 + 0x40 + lVar22);
        *puVar27 = 0;
        puVar27[1] = auStack_4e8._0_8_;
        *(undefined8 *)(lVar20 + 0x50 + lVar22) = auStack_1e8._0_8_;
        *(undefined4 *)(lVar20 + 0x58 + lVar22) = uVar9;
        *(undefined4 *)(lVar20 + 0x5c + lVar22) = auStack_1d8._0_4_;
        *(longlong *)(pfStack_280 + 4) = lVar32 + 1;
      }
      else {
        pdb_140a77410(&uStack_178);
        auVar61 = auStack_1e8;
        auStack_1e8._4_4_ = uStack_134;
        auStack_1e8._0_4_ = uStack_138;
        auStack_1e8._8_8_ = auVar61._8_8_;
        auStack_1d8._0_4_ = uStack_12c;
        lVar32 = plStack_1f0[2];
        if (lVar32 == *plStack_1f0) {
          pdb_142d8db00(plStack_1f0);
        }
        lVar20 = plStack_1f0[1];
        lVar22 = lVar32 * 0x50;
        *(undefined8 *)(lVar20 + lVar22) = uVar70;
        *(float *)(lVar20 + 8 + lVar22) = fVar63;
        *(undefined8 *)(lVar20 + 0xc + lVar22) = uVar41;
        *(float *)(lVar20 + 0x14 + lVar22) = fVar72;
        *(undefined1 (*) [8])(lVar20 + 0x18 + lVar22) = auStack_398;
        *(float *)(lVar20 + 0x20 + lVar22) = fVar59;
        *(undefined1 (*) [8])(lVar20 + 0x24 + lVar22) = auStack_298;
        *(float *)(lVar20 + 0x2c + lVar22) = fVar81;
        *(int *)(lVar20 + 0x30 + lVar22) = iVar11;
        *(int *)(lVar20 + 0x34 + lVar22) = iVar26 * 10 + auStack_388._0_4_;
        *(undefined4 *)(lVar20 + 0x38 + lVar22) = (undefined4)lStack_338;
        *(uint *)(lVar20 + 0x3c + lVar22) = (uint)uStack_270 | fVar78 < fVar36;
        *(undefined8 *)(lVar20 + 0x40 + lVar22) = auStack_1e8._0_8_;
        *(undefined4 *)(lVar20 + 0x48 + lVar22) = uVar9;
        *(undefined4 *)(lVar20 + 0x4c + lVar22) = auStack_1d8._0_4_;
        plStack_1f0[2] = lVar32 + 1;
      }
      fVar36 = _DAT_142e36f28;
      goto LAB_14144c040;
    }
    if (pfStack_460 != (float *)0x0) {
      pub_1406abac0((byte *)pfVar19,(longlong)pfStack_460 * 0x28,8);
    }
    if (uStack_2c8 != (float *)0x0) {
      pub_1406abac0((byte *)uStack_2c0,(longlong)uStack_2c8 << 3,4);
    }
    pfVar33 = uStack_4c8;
    puStack_468[2] = uStack_410;
    *puStack_468 = uStack_420;
    puStack_468[1] = (ulonglong)pfStack_418;
    puStack_468[3] = uStack_400;
    if (pfStack_438 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_430,(longlong)pfStack_438 << 4,4);
    }
    pfVar19 = uStack_358;
  }
  if (pfVar19 != (float *)0x0) {
    pub_1406abac0((byte *)pfVar33,(longlong)pfVar19 << 4,4);
  }
  pfVar33 = uStack_268;
  pfVar19 = pfStack_260;
joined_r0x00014144d562:
  if (pfVar33 != (float *)0x0) {
    pub_1406abac0((byte *)pfVar19,(longlong)pfVar33 * 0x14,4);
  }
  return puStack_468;
LAB_14144d480:
  if (pfVar25 != (float *)0x0) {
    pub_1406abac0((byte *)uStack_3e0,(longlong)pfVar25 << 4,4);
  }
  goto LAB_14144bea0;
}

