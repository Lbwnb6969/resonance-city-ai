// VA 0x1408b4c40, PDB extent 10505 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::assemble_stone_railings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_stone_railings_assemble::assemble_stone_railings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_stone_railings_assemble.rs
   Extent: 10505 */

void pdb_1408b4c40(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,ulonglong *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,ushort param_12,
                  byte param_13,byte param_14,undefined1 param_15,byte param_16,byte param_17,
                  int *param_18,longlong param_19,float *param_20)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  byte bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined7 uVar18;
  byte *pbVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  float *pfVar22;
  float *pfVar23;
  ulonglong uVar24;
  float *unaff_RBX;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  ulonglong uVar28;
  float *pfVar29;
  float *unaff_R13;
  float *pfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar39;
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined *in_stack_fffffffffffffae8;
  ulonglong uStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  undefined8 uStack_48c;
  undefined1 auStack_468 [16];
  float fStack_458;
  float fStack_454;
  undefined8 uStack_450;
  longlong lStack_448;
  float *pfStack_440;
  float *pfStack_438;
  longlong lStack_430;
  byte *pbStack_428;
  longlong lStack_420;
  longlong lStack_418;
  float *pfStack_410;
  float *pfStack_408;
  float *pfStack_400;
  byte *pbStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  float *pfStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [16];
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined8 uStack_344;
  uint uStack_33c;
  undefined1 auStack_338 [16];
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float *pfStack_310;
  float *pfStack_308;
  byte *pbStack_300;
  ulonglong uStack_2f8;
  float *pfStack_2f0;
  longlong lStack_2e8;
  float *pfStack_2e0;
  float *apfStack_2d8 [2];
  byte *pbStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  uint uStack_27c;
  float fStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  undefined4 uStack_268;
  uint uStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float *pfStack_250;
  byte *pbStack_248;
  float *pfStack_240;
  float *pfStack_238;
  undefined8 uStack_230;
  uint *puStack_228;
  float *pfStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  float *pfStack_200;
  ulonglong uStack_1f8;
  float *pfStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  float *pfStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  float *pfStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [8];
  uint uStack_130;
  uint uStack_12c;
  float fStack_124;
  longlong lStack_120;
  byte *pbStack_118;
  float *pfStack_110;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pfStack_3e0 = *(float **)(param_7 + 0x10);
  uStack_230 = param_4;
  if (pfStack_3e0 != param_20) {
    pdb_142dc7fb4(0,&pfStack_3e0,&param_20,0);
LAB_1408b6d1a:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143015778);
  }
  uStack_1f8 = 0;
  if (1 < param_14) {
    uStack_1f8 = (ulonglong)param_14 - 1;
  }
  if (uStack_1f8 != 4) {
    if (*param_18 == 1) {
      fVar52 = _DAT_142e3c608 - (float)param_18[1];
      if (_DAT_142e3c608 - (float)param_18[1] <= 0.0) {
        fVar52 = 0.0;
      }
      uVar20 = (ulonglong)(uint)fVar52;
    }
    else {
      uVar20 = 0;
    }
    if (param_18[2] == 1) {
      fVar52 = _DAT_142e3c608 - (float)param_18[3];
      if (_DAT_142e3c608 - (float)param_18[3] <= 0.0) {
        fVar52 = 0.0;
      }
      uVar20 = uVar20 | (ulonglong)(uint)fVar52 << 0x20;
    }
    pfStack_1f0 = *(float **)(param_5 + 0x10);
    puStack_208 = *(undefined8 **)(param_6 + 8);
    pfStack_200 = *(float **)(param_6 + 0x10);
    pfStack_2f0 = (float *)((longlong)param_20 + -1);
    fStack_124 = (float)pfStack_2f0;
    fStack_178 = (float)uVar20;
    fStack_174 = (float)(uVar20 >> 0x20);
    puStack_228 = *(uint **)(param_5 + 8);
    pfStack_150 = *(float **)(param_7 + 8);
    puVar13 = puStack_208 + (longlong)pfStack_200 + -1;
    if (pfStack_200 == (float *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    puStack_3d8 = (undefined8 *)&UNK_143015790;
    if (puVar13 != (undefined8 *)0x0) {
      puStack_3d8 = puVar13;
    }
    uStack_27c = (uint)((int)uStack_1f8 == 1) << 7 | 0x40;
    uStack_2f8 = (longlong)param_20 * 0xc;
    pfVar22 = param_20;
    if (pfStack_1f0 < param_20) {
      pfVar22 = pfStack_1f0;
    }
    if (pfStack_200 < pfVar22) {
      pfVar22 = pfStack_200;
    }
    pfStack_220 = param_20;
    pfVar19 = param_20;
    pfVar29 = pfStack_150;
    uVar25 = 0;
    uStack_3d0 = param_1;
    pfStack_308 = pfVar22;
    uStack_268 = param_3;
    uStack_264 = param_2;
    pfVar15 = (float *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
    while( true ) {
      uStack_168._4_4_ = (float)((ulonglong)pfVar15 >> 0x20);
      if (1 < uVar25) break;
      uStack_104 = 0;
      uStack_100 = (undefined4)CONCAT71((int7)((ulonglong)pfVar22 >> 8),1);
      uVar48 = _DAT_1430155b0;
      if ((((int)uStack_1f8 == 2) || ((uVar25 == 0 & param_16) != 0)) ||
         ((uVar25 == 1 & param_17) != 0)) {
joined_r0x0001408b4fdc:
        uStack_f8 = 0;
        uStack_168._0_4_ = 0.0;
        uStack_fc = 0;
      }
      else {
        uVar18 = (undefined7)
                 ((ulonglong)(&UNK_143015910 + *(int *)(&UNK_143015910 + (ulonglong)param_13 * 4))
                 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(param_13) {
        case 0:
          uStack_168._0_4_ = 0.0;
          uStack_fc = 0;
          uStack_f8 = 0;
          goto code_r0x0001408b504f;
        case 1:
          uStack_104 = (uint)CONCAT71(uVar18,1);
          uVar48 = _UNK_1430155b8;
          if ((int)uStack_1f8 == 1) {
            uVar48 = _UNK_1430155bc;
          }
          uStack_100 = 0;
          goto joined_r0x0001408b4fdc;
        case 2:
          uStack_fc = (uint)CONCAT71(uVar18,1);
          uStack_f8 = 0;
          uVar48 = _UNK_1430155b4;
          break;
        case 3:
          uStack_f8 = (undefined4)CONCAT71(uVar18,1);
          uStack_fc = 0;
          uVar48 = _DAT_143007994;
        }
        uStack_100 = 0;
        uStack_168._0_4_ = _DAT_142e42360;
code_r0x0001408b504f:
        uStack_104 = (uint)param_13;
      }
      _auStack_138 = ZEXT416(uVar48);
      if (pfStack_1f0 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143015730);
      }
      auStack_3a8 = ZEXT416(*puStack_228);
      if (pfVar19 == (float *)0x0) {
        pbVar14 = (byte *)0x4;
      }
      else {
        pdb_14007ee60();
        pbVar14 = pub_1406abab0(uStack_2f8,4);
        if (pbVar14 == (byte *)0x0) {
          pdb_142dc7e2a(4,uStack_2f8);
          goto LAB_1408b6e22;
        }
      }
      uStack_26c = uVar25 + 1;
      pfStack_240 = (float *)0x0;
      fStack_2a8 = (float)(auStack_138._0_4_ & _DAT_142e37820);
      uStack_2a4 = auStack_138._4_4_ & _UNK_142e37824;
      uStack_2a0 = uStack_130 & _UNK_142e37828;
      uStack_29c = uStack_12c & _UNK_142e3782c;
      pfVar22 = (float *)0x0;
      pfVar15 = (float *)0x0;
      pfStack_250 = pfVar19;
      pbStack_248 = pbVar14;
      while (pfStack_238 = pfVar22, pfVar22 < pfStack_308) {
        pfVar23 = (float *)((longlong)pfVar15 + 1);
        fVar52 = pfVar29[(longlong)pfVar22 * 3 + 1];
        if (pfVar23 < pfVar19) {
          fVar55 = pfVar29[(longlong)pfVar23 * 3 + 1];
          fVar53 = fVar55;
          if (fVar55 <= fVar52) {
            fVar53 = fVar52;
          }
          fVar52 = (float)(~-(uint)NAN(fVar52) & (uint)fVar53 | -(uint)NAN(fVar52) & (uint)fVar55);
        }
        fVar55 = (float)puStack_228[(longlong)pfVar22] + _DAT_143015558;
        if ((float)puStack_228[(longlong)pfVar22] + _DAT_143015558 <= _DAT_142e3b1d8) {
          fVar55 = _DAT_142e3b1d8;
        }
        if (pfVar19 <= pfVar15) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar15,pfVar19,&UNK_143015858);
        }
        auStack_148 = ZEXT416((uint)fVar52);
        fVar52 = *(float *)(param_19 + (longlong)pfVar15 * 4);
        fVar31 = (float)pdb_140e02880(param_8);
        uVar12 = *(undefined4 *)(puStack_208 + (longlong)pfStack_238);
        unaff_XMM15_Db = 0;
        unaff_XMM15_Dc = 0;
        unaff_XMM15_Dd = 0;
        uVar48 = *(uint *)((longlong)puStack_208 + (longlong)pfStack_238 * 8 + 4) ^ _DAT_142e37820;
        auStack_398._4_4_ = uVar12;
        auStack_398._0_4_ = uVar48;
        pdb_140df4520(&fStack_1e8,auStack_398);
        fVar51 = fStack_1e4;
        fVar33 = fStack_1e8;
        pfVar29 = pfStack_150 + (longlong)pfVar22 * 3;
        uStack_218 = (float *)CONCAT44(uStack_218._4_4_,(float)uStack_1e0);
        fVar53 = *pfVar29;
        fVar54 = pfVar29[1];
        fVar49 = pfVar29[2];
        pdb_140df4520(&fStack_1e8,auStack_398);
        pfVar16 = pfStack_240;
        pfVar22 = (float *)((longlong)pfStack_238 + 1);
        fVar55 = fVar55 + fVar52 * _DAT_142e3c658 * fVar31;
        if (uVar25 == 0) {
          fVar53 = fVar53 - fVar33 * fVar55 * _DAT_142e36f50;
          fVar54 = fVar54 - fVar51 * fVar55 * _DAT_142e36f50;
          fVar49 = fVar49 - fVar55 * (float)uStack_218 * _DAT_142e36f50;
        }
        else {
          fVar53 = fStack_1e8 * fVar55 * _DAT_142e36f50 + *pfVar29;
          fVar54 = fStack_1e4 * fVar55 * _DAT_142e36f50 + pfVar29[1];
          fVar49 = fVar55 * (float)uStack_1e0 * _DAT_142e36f50 + pfVar29[2];
        }
        fVar52 = ((float)pfVar15 / fStack_124) * fStack_174 +
                 (_DAT_142e36f28 - (float)pfVar15 / fStack_124) * fStack_178;
        fVar55 = fVar54 + fVar52 + (float)auStack_138._0_4_;
        if ((char)uStack_100 == '\0') {
          fVar54 = (float)auStack_148._0_4_;
          if ((float)auStack_148._0_4_ <= fVar55) {
            fVar54 = fVar55;
          }
          fVar55 = (float)(-(uint)NAN(fVar55) & auStack_148._0_4_ |
                          ~-(uint)NAN(fVar55) & (uint)fVar54);
        }
        if (pfStack_240 == pfStack_250) {
          pdb_142db7820(&pfStack_250);
        }
        fVar52 = fVar52 * 0.0;
        *(float *)(pbStack_248 + (longlong)pfVar16 * 0xc) = fVar53 + fVar52 + fStack_2a8;
        *(float *)(pbStack_248 + (longlong)pfVar16 * 0xc + 4) = fVar55;
        *(float *)(pbStack_248 + (longlong)pfVar16 * 0xc + 8) = fVar52 + fVar49 + fStack_2a8;
        pfStack_240 = (float *)((longlong)pfVar16 + 1);
        pfVar15 = pfVar23;
        unaff_RBX = pfVar22;
        pfVar29 = pfStack_150;
      }
      pfStack_1d8 = pfStack_240;
      fStack_1e8 = SUB84(pfStack_250,0);
      fStack_1e4 = (float)((ulonglong)pfStack_250 >> 0x20);
      uStack_1e0._0_4_ = SUB84(pbStack_248,0);
      uStack_1e0._4_4_ = (float)((ulonglong)pbStack_248 >> 0x20);
      pfVar22 = &fStack_1e8;
      pdb_140080930(auStack_398,pfVar22,0);
      pfVar15 = (float *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
      pfVar29 = pfStack_150;
      uVar25 = uStack_26c;
      if (!SBORROW8(0,auStack_398._0_8_)) {
        uStack_1b8 = uStack_368;
        pfStack_1d8 = (float *)CONCAT44(fStack_384,fStack_388);
        fStack_1c8 = fStack_378;
        fStack_1c4 = fStack_374;
        uStack_1c0._0_4_ = fStack_370;
        uStack_1c0._4_4_ = fStack_36c;
        fStack_1d0 = fStack_380;
        fStack_1cc = fStack_37c;
        fStack_1e8 = auStack_398._0_4_;
        fStack_1e4 = auStack_398._4_4_;
        uStack_1e0._0_4_ = auStack_398._8_4_;
        uStack_1e0._4_4_ = auStack_398._12_4_;
        pdb_14148ba90(&lStack_418,&fStack_1e8);
        pfVar29 = pfStack_150;
        fVar52 = _DAT_142e36f28;
        if (CONCAT44(fStack_1e4,fStack_1e8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0),
                        CONCAT44(fStack_1e4,fStack_1e8) * 0xc,4);
        }
        pfVar22 = (float *)0x0;
        if (CONCAT44(fStack_1cc,fStack_1d0) != 0) {
          pfVar22 = (float *)(CONCAT44(fStack_1cc,fStack_1d0) << 2);
          pub_1406abac0((byte *)CONCAT44(fStack_1c4,fStack_1c8),(ulonglong)pfVar22,4);
        }
        uVar25 = uStack_26c;
        pfVar15 = uStack_168;
        if (!SBORROW8(0,lStack_418)) {
          uStack_2b8 = uStack_3e8;
          pbStack_2c8 = pbStack_3f8;
          uStack_2c0 = uStack_3f0;
          apfStack_2d8[0] = pfStack_408;
          apfStack_2d8[1] = pfStack_400;
          lStack_2e8 = lStack_418;
          pfStack_2e0 = pfStack_410;
          uStack_270 = (uStack_fc & 0xff) + 1;
          fStack_16c = _DAT_1430155c0;
          fStack_170 = _DAT_142f684a8;
          if ((byte)uStack_fc == '\0') {
            fStack_170 = 0.0;
            fStack_16c = _DAT_1430155c4;
          }
          fStack_288 = _DAT_1430155c8;
          if ((char)uStack_100 == '\0') {
            fStack_288 = _DAT_1430155cc;
          }
          fStack_288 = fStack_288 + (float)uStack_168;
          fStack_284 = fStack_288 + _DAT_1430155d0;
          auStack_3a8 = ZEXT416(~-(uint)(_DAT_142e36f50 < (float)auStack_3a8._0_4_) & _DAT_1430155d4
                               );
          fStack_280 = fStack_288 * 0.0 * _DAT_142e36f50;
          fStack_288 = fStack_288 * _DAT_142e36f50;
          uVar25 = 0;
          while (uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffae8 >> 0x20),
                uVar25 < uStack_270) {
            uStack_f2 = 1;
            in_stack_fffffffffffffae8 = &UNK_143015748;
            pdb_140de8290(&lStack_430,apfStack_2d8[0],
                          (fVar52 / (float)(longlong)apfStack_2d8[0]) * _DAT_142e3798c,param_8,
                          &UNK_143015748);
            lStack_120 = 0;
            pbStack_118 = (byte *)0x4;
            pfStack_110 = (float *)0x0;
            uStack_1e0 = pbStack_428 + lStack_420 * 4;
            pbStack_300 = pbStack_428;
            fStack_1e8 = SUB84(pbStack_428,0);
            fStack_1e4 = (float)((ulonglong)pbStack_428 >> 0x20);
            pfStack_1d8 = (float *)&lStack_120;
            fStack_1d0 = (float)param_19;
            fStack_1cc = (float)((ulonglong)param_19 >> 0x20);
            fStack_1c8 = SUB84(pfVar19,0);
            fStack_1c4 = (float)((ulonglong)pfVar19 >> 0x20);
            uStack_1c0 = &lStack_2e8;
            pdb_1414971a0(&lStack_448,&fStack_1e8);
            pfVar22 = pfStack_438;
            fStack_17c = 0.0;
            fStack_28c = fStack_170;
            if (uVar25 != 0) {
              fStack_17c = _DAT_142f95158;
              fStack_28c = fStack_16c;
            }
            uStack_274 = uVar25 + 1;
            uStack_218 = pfStack_440 + (longlong)pfStack_438 * 3;
            bStack_f1 = uVar25 == 0 & (byte)uStack_fc;
            uStack_168 = uStack_218 + -3;
            fStack_2a8 = (float)CONCAT31(fStack_2a8._1_3_,
                                         uStack_168 != (float *)0x0 && pfStack_438 != (float *)0x0);
            bVar27 = true;
            pfStack_310 = pfStack_440;
            pfVar15 = pfStack_440;
            pfVar19 = pfStack_440;
            pfVar29 = (float *)0x0;
            fVar55 = fStack_28c;
            while (unaff_RBX = pfVar29, pfVar29 = pfStack_150, uVar25 = uStack_274,
                  pfVar15 != uStack_218) {
              pfVar23 = pfVar15 + 3;
              pfVar16 = pfVar23;
              pfVar30 = pfVar15;
              if (bVar27) {
                unaff_R13 = uStack_218;
                if (pfVar23 == uStack_218) break;
                unaff_R13 = pfVar15;
                pfVar16 = pfVar15 + 6;
                pfVar30 = pfVar23;
              }
              pfVar15 = pfVar16;
              pfVar29 = (float *)((longlong)unaff_RBX + 1);
              if (pfVar22 <= pfVar29 && fStack_2a8._0_1_ == '\0') {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143015870);
              }
              pfVar23 = pfVar19 + (longlong)pfVar29 * 3;
              if (pfVar22 <= pfVar29) {
                pfVar23 = uStack_168;
              }
              pfVar16 = (float *)((longlong)unaff_RBX + ((ulonglong)(unaff_RBX == (float *)0x0) - 1)
                                 );
              if (pfVar22 <= pfVar16) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143015760);
              }
              fVar53 = *unaff_R13;
              unaff_XMM15_Db = 0;
              unaff_XMM15_Dc = 0;
              unaff_XMM15_Dd = 0;
              fVar54 = unaff_R13[2];
              fVar49 = *pfVar30;
              fVar33 = pfVar30[2];
              fVar51 = unaff_R13[1] + fVar55;
              fVar31 = pfVar30[1] + fVar55;
              if (unaff_RBX == (float *)0x0) {
                if (pfStack_200 == (float *)0x0) goto LAB_1408b6d1a;
                fVar32 = *(float *)((longlong)puStack_208 + 4);
                fVar40 = (float)*puStack_208;
                fVar41 = (float)((ulonglong)*puStack_208 >> 0x20);
                fVar44 = fVar40 * fVar40;
                fVar41 = fVar41 * fVar41;
              }
              else {
                fVar40 = fVar49 - pfVar19[(longlong)pfVar16 * 3];
                fVar32 = fVar33 - pfVar19[(longlong)pfVar16 * 3 + 2];
                fVar44 = fVar40 * fVar40;
                fVar41 = fVar32 * fVar32;
              }
              fVar41 = fVar52 / SQRT(fVar41 + fVar44);
              if ((int)fVar41 - 1U < 0x7fffff ||
                  (int)ABS(fVar41) - 0x800000U < 0x7f000000 && -1 < (int)fVar41) {
                fVar40 = fVar40 * fVar41;
                fVar32 = fVar32 * fVar41;
                if (unaff_RBX == (float *)((longlong)pfVar22 + -2)) goto LAB_1408b59c1;
LAB_1408b598b:
                fVar44 = *pfVar23 - fVar53;
                fVar41 = pfVar23[2] - fVar54;
                fVar45 = fVar44 * fVar44;
                fVar42 = fVar41 * fVar41;
              }
              else {
                fVar32 = 0.0;
                fVar40 = 0.0;
                if (unaff_RBX != (float *)((longlong)pfVar22 + -2)) goto LAB_1408b598b;
LAB_1408b59c1:
                fVar41 = *(float *)((longlong)puStack_3d8 + 4);
                fVar44 = (float)*puStack_3d8;
                fVar42 = (float)((ulonglong)*puStack_3d8 >> 0x20);
                fVar45 = fVar44 * fVar44;
                fVar42 = fVar42 * fVar42;
              }
              fVar42 = fVar52 / SQRT(fVar42 + fVar45);
              if ((int)fVar42 - 1U < 0x7fffff ||
                  (int)ABS(fVar42) - 0x800000U < 0x7f000000 && -1 < (int)fVar42) {
                fVar44 = fVar44 * fVar42;
                fVar41 = fVar41 * fVar42;
              }
              else {
                fVar41 = 0.0;
                fVar44 = 0.0;
              }
              fVar45 = (fVar53 - fVar49) * (fVar53 - fVar49);
              fVar50 = (fVar54 - fVar33) * (fVar54 - fVar33);
              fVar42 = SQRT(fVar45 + fVar50) / (float)((uint)(fVar51 - fVar31) & _DAT_142e377e0);
              bVar27 = false;
              unaff_R13 = pfVar30;
              if (_DAT_142e3b1d8 <= fVar42) {
                bVar10 = unaff_RBX == (float *)0x0 & (byte)param_12;
                if (bVar10 == 0) {
                  if ((param_12 & 0x100) != 0) {
                    if (_DAT_1430155d8 <= fVar42) {
                      if (unaff_RBX != (float *)((longlong)pfVar22 + -2)) goto LAB_1408b5bb1;
                    }
                    else if (unaff_RBX != (float *)((longlong)pfVar22 + -2)) goto LAB_1408b5b7b;
                    goto code_r0x0001408b5aac;
                  }
                  if (fVar42 < _DAT_1430155d8) {
LAB_1408b5b7b:
                    if ((fVar42 < _DAT_142e37ae4) ||
                       (fVar32 * fVar41 + fVar40 * fVar44 < _DAT_142e3c678))
                    goto code_r0x0001408b5aac;
                  }
LAB_1408b5bb1:
                  auStack_148._0_12_ = ZEXT812(0);
                  auStack_148._12_4_ = 0;
                  fVar55 = fVar51;
                  fVar32 = fVar31;
                }
                else {
code_r0x0001408b5aac:
                  fVar32 = fVar51;
                  if (fVar51 <= fVar31) {
                    fVar32 = fVar31;
                  }
                  fVar55 = fVar51;
                  if (fVar31 <= fVar51) {
                    fVar55 = fVar31;
                  }
                  fVar55 = (float)(~-(uint)NAN(fVar31) & (uint)fVar55 |
                                  -(uint)NAN(fVar31) & (uint)fVar51);
                  auStack_148 = ZEXT416((uint)(fVar32 - fVar55));
                  if (((bVar10 & fVar51 < fVar31) != 0) ||
                     (((fVar32 = fVar55, (param_12 & 0x100) != 0 &&
                       (unaff_RBX == (float *)((longlong)pfVar22 + -2))) && (fVar31 < fVar51)))) {
                    fVar55 = fVar51 * _DAT_142e36f50 + fVar31 * _DAT_142e36f50;
                    fVar32 = fVar55;
                  }
                }
                auStack_468 = ZEXT416((uint)fVar53);
                fVar53 = fVar49 - fVar53;
                fVar51 = fVar32 - fVar55;
                auStack_338 = ZEXT416((uint)fVar33);
                auStack_3b8 = ZEXT416((uint)fVar54);
                fVar33 = fVar33 - fVar54;
                fVar54 = fVar52 / SQRT(fVar33 * fVar33 + fVar51 * fVar51 + fVar53 * fVar53);
                auStack_138._0_4_ = fVar54 * fVar53;
                auStack_138._4_4_ = fVar54 * fVar51;
                fVar54 = fVar54 * fVar33;
                fVar52 = fVar52 / SQRT(fVar54 * fVar54 +
                                       (float)auStack_138._0_4_ * (float)auStack_138._0_4_);
                _uStack_130 = 0;
                fStack_1e4 = (float)auStack_138._0_4_ * fVar52;
                fStack_1e8 = (float)((uint)fVar52 ^ _DAT_142e37820) * fVar54;
                auStack_3c8 = ZEXT416((uint)fVar49);
                pdb_140df4520(&fStack_260,&fStack_1e8);
                fVar52 = (float)pdb_140e02880(param_8);
                fVar53 = (fVar52 - (_DAT_142e36f28 - fVar52)) * _DAT_142e37ad4;
                fVar52 = SQRT((fVar55 - fVar32) * (fVar55 - fVar32) + fVar45 + fVar50);
                if (fVar52 <= _DAT_142e3787c) {
                  fVar52 = _DAT_142e3787c;
                }
                fVar49 = (float)pdb_140e02880(param_8);
                auStack_148._0_4_ = (float)auStack_148._0_4_ + fStack_284 + fStack_17c;
                fVar49 = fVar49 * _DAT_142e37ad4 + _DAT_1430155dc;
                fVar33 = (fVar32 * _DAT_142e36f50 + fVar55 * _DAT_142e36f50) - fStack_288;
                fVar55 = _DAT_142e36f28;
                if ((char)uStack_100 == '\0') {
                  if ((uStack_1f8 != 0) && ((int)uStack_1f8 != 3)) {
                    if (bStack_f1 != 0) {
                      fVar55 = (float)pdb_140e02880(param_8);
                      if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_1430157f8);
                      }
                      fVar33 = fVar33 + fVar55 * _DAT_142e3b1d8 *
                                        *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                    }
                    fVar55 = fStack_258;
                    if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_143015810);
                    }
                    fVar32 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4) * _DAT_142e37988;
                    fStack_458 = fStack_260;
                    fStack_454 = fStack_25c;
                    uStack_450 = 0;
                    fVar31 = fStack_25c * fVar54;
                    fVar51 = (float)pdb_140e02880(param_8);
                    if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_143015828);
                    }
                    fVar51 = fVar51 * _DAT_142e3b1d8;
                    fVar40 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                    fStack_278 = (float)pdb_140e02880(param_8);
                    if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_143015840);
                    }
                    fVar41 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                    fVar44 = (float)pdb_140e02880(param_8);
                    fVar42 = (_DAT_142e36f28 - fVar32) * 0.0;
                    fVar45 = (fVar31 - (float)auStack_138._4_4_ * fVar55) * fVar32 + fVar42;
                    fVar55 = (_DAT_142e36f28 - fVar32) +
                             fVar32 * (fVar55 * (float)auStack_138._0_4_ - fVar54 * fStack_458);
                    fVar42 = fVar42 + fVar32 * (fStack_458 * (float)auStack_138._4_4_ -
                                               (float)auStack_138._0_4_ * fStack_454);
                    fVar31 = _DAT_142e36f28 /
                             SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar55 * fVar55);
                    fVar45 = fVar45 * fVar31;
                    fVar55 = fVar31 * fVar55;
                    fVar31 = fVar31 * fVar42;
                    fVar33 = fVar33 + fVar51 * fVar40;
                    auStack_148._0_4_ =
                         (float)auStack_148._0_4_ + fStack_278 * _DAT_1430155e0 * fVar41;
                    fVar41 = fVar41 * _DAT_142e3b1d8;
                    goto LAB_1408b6193;
                  }
                  if (bStack_f1 == 0) {
                    fVar45 = 0.0;
                    fVar31 = 0.0;
                  }
                  else {
                    fVar55 = (float)pdb_140e02880(param_8);
                    if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_1430157b0);
                    }
                    fVar55 = fVar55 * _DAT_142e3b1d8;
                    fVar51 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                    fVar31 = (float)pdb_140e02880(param_8);
                    fVar32 = (float)pdb_140e02880(param_8);
                    auVar35 = auStack_398;
                    auStack_398._4_4_ = fVar32 + _UNK_142e61234;
                    auStack_398._0_4_ = fVar31 + _DAT_142e61230;
                    auStack_398._8_8_ = auVar35._8_8_;
                    pdb_140df4520(&fStack_1e8,auStack_398);
                    if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_1430157c8);
                    }
                    fVar33 = fVar33 + fVar55 * fVar51;
                    fVar55 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                    fVar45 = fStack_1e8 * _DAT_142e37988 * fVar55 + 0.0;
                    fVar31 = fVar55 * (float)uStack_1e0 * _UNK_143009bd4 + 0.0;
                    fVar55 = fVar55 * fStack_1e4 * _DAT_143009bd0 + _DAT_142e36f28;
                  }
                  if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_1430157e0);
                  }
                  fVar51 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                  fVar41 = (float)pdb_140e02880(param_8);
                  fVar41 = fVar51 * _DAT_142e3787c * fVar41;
                }
                else {
                  if (pfStack_110 <= unaff_RBX) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(unaff_RBX,pfStack_110,&UNK_143015798);
                  }
                  fVar51 = *(float *)(pbStack_118 + (longlong)unaff_RBX * 4);
                  fVar45 = 0.0;
                  if (fVar51 <= _DAT_142e3b1d8) {
                    fVar41 = 0.0;
                    fVar31 = 0.0;
                  }
                  else {
                    fVar40 = (float)pdb_140e02880(param_8);
                    fVar40 = fVar40 * _DAT_142e3b1d8;
                    fVar55 = (float)pdb_140e02880(param_8);
                    fVar31 = (float)pdb_140e02880(param_8);
                    auVar35 = auStack_398;
                    auStack_398._4_4_ = fVar31 + _UNK_142e61234;
                    auStack_398._0_4_ = fVar55 + _DAT_142e61230;
                    auStack_398._8_8_ = auVar35._8_8_;
                    pdb_140df4520(&fStack_1e8,auStack_398);
                    fVar55 = fStack_1e4;
                    fVar32 = fStack_1e8;
                    fVar31 = (float)uStack_1e0;
                    fVar44 = (float)pdb_140e02880(param_8);
                    fVar41 = _DAT_142e36f28;
                    if (fVar51 + fVar51 <= _DAT_142e36f28) {
                      fVar41 = fVar51 + fVar51;
                    }
                    fVar33 = fVar33 + fVar40 * fVar41;
                    fVar55 = fVar55 * _DAT_143009bd0 + _DAT_142e36f28;
                    fVar31 = fVar31 * _UNK_143009bd4 + 0.0;
                    fVar45 = fVar32 * _DAT_142e37988 + 0.0;
                    fVar41 = fVar41 * _DAT_142e37988;
LAB_1408b6193:
                    fVar41 = fVar41 * fVar44;
                  }
                }
                fVar32 = fStack_25c;
                fVar51 = fStack_260;
                unaff_XMM15_Dd = 0;
                unaff_XMM15_Dc = 0;
                unaff_XMM15_Db = 0;
                fVar41 = _DAT_142e36f28 - fVar41;
                fVar49 = (fVar49 + (float)auStack_3a8._0_4_) * fVar41;
                fVar40 = fStack_258 * fVar49;
                uVar12 = pdb_14094c330(param_9);
                uVar28 = *param_8;
                uVar20 = uVar28 + 0xa0761d6478bd642f;
                *param_8 = uVar20;
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar20 ^ 0xe7037ed1a0b428db;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar20;
                uVar26 = SUB168(auVar1 * auVar5,8) ^ SUB168(auVar1 * auVar5,0);
                if ((uint)((int)uVar26 * 1000) < 0x128) {
                  uVar28 = uVar28 + 0x40ec3ac8f17ac85e;
                  do {
                    uVar20 = uVar20 + 0xa0761d6478bd642f;
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = uVar28 ^ 0xe7037ed1a0b428db;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar28;
                    uVar26 = SUB168(auVar2 * auVar6,8) ^ SUB168(auVar2 * auVar6,0);
                    uVar28 = uVar28 + 0xa0761d6478bd642f;
                  } while ((uint)((int)uVar26 * 1000) < 0x128);
                  *param_8 = uVar20;
                }
                pdb_140951920(&fStack_1e8);
                fVar52 = fVar52 * fVar41;
                fVar53 = fVar53 + (float)auStack_148._0_4_ * fVar41;
                auStack_398._0_4_ = fVar52 * (float)auStack_138._0_4_;
                auStack_398._4_4_ = fVar52 * (float)auStack_138._4_4_;
                auStack_398._8_4_ = fVar52 * fVar54;
                auStack_398._12_4_ = fVar53 * fVar45;
                fStack_388 = fVar55 * fVar53;
                fStack_384 = fVar31 * fVar53;
                fStack_380 = fVar51 * fVar49;
                fStack_37c = fVar32 * fVar49;
                fStack_374 = (auStack_3c8._0_4_ * _DAT_142e36f50 +
                             (float)auStack_468._0_4_ * _DAT_142e36f50) - fStack_280;
                fStack_36c = (auStack_338._0_4_ * _DAT_142e36f50 +
                             (float)auStack_3b8._0_4_ * _DAT_142e36f50) - fStack_280;
                uStack_368 = uStack_1b8;
                uStack_360 = uStack_1b0;
                uStack_350 = uStack_1a0;
                uStack_358 = uStack_1a8;
                uStack_34c = (undefined4)((uVar26 & 0xffffffff) * 1000 >> 0x20);
                uStack_344 = _DAT_142e378e0;
                uStack_33c = uStack_27c;
                fStack_378 = fVar40;
                fStack_370 = fVar33;
                uStack_348 = uVar12;
                pdb_14094c790(&uStack_4a8,auStack_398);
                pdb_1414aad80(uStack_230,&uStack_4a8);
                bVar27 = false;
                pfVar19 = pfStack_310;
                fVar55 = fStack_28c;
                fVar52 = _DAT_142e36f28;
              }
            }
            if (lStack_448 != 0) {
              pub_1406abac0((byte *)pfVar19,lStack_448 * 0xc,4);
            }
            pfVar19 = pfStack_220;
            if (lStack_120 != 0) {
              pub_1406abac0(pbStack_118,lStack_120 << 2,4);
            }
            if (lStack_430 != 0) {
              pub_1406abac0(pbStack_300,lStack_430 << 2,4);
            }
          }
          if ((char)uStack_f8 == '\0') {
            if (lStack_2e8 != 0) {
              pub_1406abac0((byte *)pfStack_2e0,lStack_2e8 * 0xc,4);
            }
            pfVar22 = (float *)0x0;
            uVar25 = uStack_26c;
            pfVar15 = uStack_168;
            if (apfStack_2d8[1] != (float *)0x0) {
              pfVar22 = (float *)((longlong)apfStack_2d8[1] << 2);
              pub_1406abac0(pbStack_2c8,(ulonglong)pfVar22,4);
              uVar25 = uStack_26c;
              pfVar15 = uStack_168;
            }
          }
          else {
            uStack_f2 = 1;
            uVar11 = pdb_1409012c0(uStack_104);
            uStack_1b8 = uStack_2b8;
            fStack_1c8 = SUB84(pbStack_2c8,0);
            fStack_1c4 = (float)((ulonglong)pbStack_2c8 >> 0x20);
            uStack_1c0._0_4_ = (float)uStack_2c0;
            uStack_1c0._4_4_ = (float)((ulonglong)uStack_2c0 >> 0x20);
            pfStack_1d8 = apfStack_2d8[0];
            fStack_1d0 = SUB84(apfStack_2d8[1],0);
            fStack_1cc = (float)((ulonglong)apfStack_2d8[1] >> 0x20);
            fStack_1e8 = (float)lStack_2e8;
            fStack_1e4 = (float)((ulonglong)lStack_2e8 >> 0x20);
            uStack_1e0._0_4_ = SUB84(pfStack_2e0,0);
            uStack_1e0._4_4_ = (float)((ulonglong)pfStack_2e0 >> 0x20);
            uStack_f2 = 0;
            in_stack_fffffffffffffae8 = (undefined *)CONCAT44(uVar12,param_10);
            pfVar22 = (float *)(ulonglong)uStack_264;
            pdb_1408bc5b0(uStack_3d0,pfVar22,uStack_268,param_8,in_stack_fffffffffffffae8,uStack_230
                          ,pfVar29,pfVar19,param_19,pfVar19,param_12,param_14,param_15,uVar11,
                          &fStack_1e8,0);
            uVar25 = uStack_26c;
            pfVar15 = uStack_168;
          }
        }
      }
    }
    if ((uStack_1f8 & 0xfffffffffffffffd) == 0) {
      apfStack_2d8[0] = (float *)0x0;
      apfStack_2d8[1] = pfStack_2f0;
      uVar21 = 0;
      auStack_3b8._0_4_ = param_12 >> 8 & 1;
      lVar17 = 0;
      fVar52 = _DAT_14301555c;
      uStack_168 = pfVar15;
      do {
        while( true ) {
          pfVar29 = apfStack_2d8[lVar17];
          if (pfStack_1f0 <= pfVar29) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar29,pfStack_1f0,&UNK_1430156d0);
          }
          auStack_338._0_8_ = uVar21;
          fVar55 = (float)puStack_228[(longlong)pfVar29] + _DAT_143015558 + fVar52;
          if (fVar55 <= 0.0) {
            fVar55 = 0.0;
          }
          fVar55 = fVar55 * _DAT_142e36f50;
          if (pfStack_200 <= pfVar29) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar29,pfStack_200,&UNK_1430156e8);
          }
          puVar13 = puStack_208 + (longlong)pfVar29;
          fStack_1e4 = *(float *)(puStack_208 + (longlong)pfVar29);
          fStack_1e8 = -*(float *)((longlong)puStack_208 + (longlong)pfVar29 * 8 + 4);
          pdb_140df4520(&fStack_31c,&fStack_1e8);
          pdb_140df4520(&fStack_328,puVar13);
          if (fVar55 < _DAT_142e37ad4) break;
          if (pfStack_220 <= pfVar29) {
LAB_1408b6e22:
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar29,pfStack_220,&UNK_143015700);
          }
          fVar52 = *(float *)(&UNK_142e37810 + (ulonglong)(pfVar29 == (float *)0x0) * 4);
          fVar54 = fStack_324 * _DAT_143015560 * fVar52;
          fVar51 = fVar54 + (pfStack_150[(longlong)pfVar29 * 3 + 1] - fVar55 * fStack_318);
          fVar54 = fVar54 + pfStack_150[(longlong)pfVar29 * 3 + 1] + fVar55 * fStack_318;
          fVar53 = fVar52 * fStack_320 * _DAT_143015570;
          fVar52 = fVar52 * fStack_328 * _UNK_143015574;
          fVar49 = pfStack_150[(longlong)pfVar29 * 3 + 2] + fStack_314 * fVar55 + fVar53;
          fVar33 = pfStack_150[(longlong)pfVar29 * 3] + fStack_31c * fVar55 + fVar52;
          fVar53 = (pfStack_150[(longlong)pfVar29 * 3 + 2] - fStack_314 * fVar55) + fVar53;
          fVar52 = (pfStack_150[(longlong)pfVar29 * 3] - fStack_31c * fVar55) + fVar52;
          fVar31 = SQRT((fVar54 - fVar51) * (fVar54 - fVar51) +
                        (fVar33 - fVar52) * (fVar33 - fVar52) +
                        (fVar49 - fVar53) * (fVar49 - fVar53));
          fVar55 = fVar31 / _DAT_142e3c620;
          uVar20 = 0;
          if (0.0 <= fVar55) {
            uVar20 = (longlong)(fVar55 - _DAT_142e36f2c) & (longlong)fVar55 >> 0x3f |
                     (longlong)fVar55;
          }
          if (_DAT_142e36f30 < fVar55) {
            uVar20 = 0xffffffffffffffff;
          }
          auVar35._4_4_ = unaff_XMM15_Db;
          auVar35._0_4_ = fVar31;
          auVar35._8_4_ = unaff_XMM15_Dc;
          auVar35._12_4_ = unaff_XMM15_Dd;
          auVar38._4_12_ = auVar35._4_12_;
          fVar55 = fVar31 * _DAT_142e37988;
          if (_DAT_142e3787c <= fVar31 * _DAT_142e37988) {
            fVar55 = _DAT_142e3787c;
          }
          auVar38._0_4_ = fVar55 / fVar31;
          pdb_140de8290(&lStack_418,uVar20 + 1 + (ulonglong)(uVar20 == 0),auVar38._0_8_,param_8,
                        &UNK_143015718);
          pdb_140de9410(&uStack_4a8);
          bVar10 = pfVar29 == pfStack_2f0 & auStack_3b8[0] |
                   pfVar29 == (float *)0x0 & (byte)param_12;
          auStack_148._0_4_ = _DAT_142e3c630;
          if (bVar10 == 0) {
            auStack_148._0_4_ = _DAT_142f6e384;
          }
          fVar55 = ((float)(longlong)pfVar29 / fStack_124) * fStack_174 +
                   (_DAT_142e36f28 - (float)(longlong)pfVar29 / fStack_124) * fStack_178;
          pfVar22 = pfStack_410 + (longlong)pfStack_408;
          uStack_218 = (float *)CONCAT44(fVar55,fVar55);
          uStack_210 = 0;
          fVar55 = fVar55 * 0.0;
          _uStack_130 = 0;
          auStack_138 = (undefined1  [8])uStack_4a8;
          uVar25 = (uint)bVar10;
          auVar34._0_4_ = (int)(uVar25 << 0x1f) >> 0x1f;
          auVar34._4_4_ = (int)(uVar25 << 0x1f) >> 0x1f;
          auVar34._8_4_ = (int)(uVar25 << 0x1f) >> 0x1f;
          auVar34._12_4_ = (int)(uVar25 << 0x1f) >> 0x1f;
          auVar35 = auVar34 & _DAT_143015590 | ~auVar34 & _DAT_143015580;
          fStack_160 = auVar35._0_4_;
          fVar32 = auVar35._4_4_;
          uStack_168._0_4_ = fStack_49c * fStack_160;
          uStack_168._4_4_ = fStack_498 * fStack_160;
          fStack_160 = fStack_494 * fStack_160;
          fStack_15c = fStack_490 * fVar32;
          fVar40 = (float)uStack_48c;
          uVar20 = (ulonglong)uStack_48c >> 0x20;
          bVar27 = true;
          auStack_3c8._0_8_ = pfStack_410;
          fStack_2a8 = fStack_4a0;
          pfVar29 = pfStack_410;
          while (pfVar29 != pfVar22) {
            pfVar15 = pfVar29 + 1;
            pfVar19 = pfVar15;
            if (bVar27) {
              if (pfVar15 == pfVar22) break;
              unaff_RBX = pfVar29;
              pfVar19 = pfVar29 + 2;
              pfVar29 = pfVar15;
            }
            fVar41 = *unaff_RBX;
            fVar44 = *pfVar29;
            uStack_198 = pdb_14094c330(param_9);
            uVar26 = *param_8;
            uVar28 = uVar26 + 0xa0761d6478bd642f;
            *param_8 = uVar28;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar28 ^ 0xe7037ed1a0b428db;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar28;
            uVar24 = SUB168(auVar3 * auVar7,8) ^ SUB168(auVar3 * auVar7,0);
            if ((uint)((int)uVar24 * 1000) < 0x128) {
              uVar26 = uVar26 + 0x40ec3ac8f17ac85e;
              do {
                uVar28 = uVar28 + 0xa0761d6478bd642f;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar26 ^ 0xe7037ed1a0b428db;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar26;
                uVar24 = SUB168(auVar4 * auVar8,8) ^ SUB168(auVar4 * auVar8,0);
                uVar26 = uVar26 + 0xa0761d6478bd642f;
              } while ((uint)((int)uVar24 * 1000) < 0x128);
              *param_8 = uVar28;
            }
            fVar36 = _DAT_142e36f28 - fVar41;
            fVar50 = _DAT_142e36f28 - fVar44;
            fVar42 = fVar44 * fVar51 + fVar54 * fVar50 + (float)uStack_218;
            fVar45 = fVar36 * fVar54 + fVar51 * fVar41 + uStack_218._4_4_;
            fVar43 = fVar45 - fVar42;
            fVar37 = fVar41 * fVar53 + fVar36 * fVar49 + fVar55;
            fVar39 = fVar41 * fVar52 + fVar36 * fVar33 + fVar55;
            fVar36 = fVar44 * fVar53 + fVar50 * fVar49 + fVar55;
            fVar50 = fVar44 * fVar52 + fVar50 * fVar33 + fVar55;
            fVar46 = fVar37 - fVar36;
            fVar47 = fVar39 - fVar50;
            fStack_1c4 = fVar50 * _DAT_142e36f50 + fVar39 * _DAT_142e36f50;
            fVar50 = SQRT(fVar47 * fVar47 + fVar43 * fVar43 + fVar46 * fVar46);
            uStack_1c0._4_4_ = fVar36 * _DAT_142e36f50 + fVar37 * _DAT_142e36f50;
            fStack_1e8 = fVar50 * (float)auStack_138._0_4_;
            fStack_1e4 = fVar50 * (float)auStack_138._4_4_;
            uStack_1b8 = 0;
            uStack_1b0 = 0;
            uStack_1e0._0_4_ = fVar50 * fStack_2a8;
            auVar9._4_4_ = uStack_168._4_4_;
            auVar9._0_4_ = (float)uStack_168;
            auVar9._8_4_ = fStack_160;
            uStack_1e0._4_4_ = (float)uStack_168;
            pfStack_1d8 = auVar9._4_8_;
            fStack_1d0 = fStack_15c;
            uStack_1c0._0_4_ =
                 (fVar42 * _DAT_142e36f50 + fVar45 * _DAT_142e36f50) - (float)auStack_148._0_4_;
            fStack_194 = fVar41 * fVar31;
            uStack_1a8 = _DAT_1430155a0;
            uStack_1a0 = 0xc2c80000;
            uStack_19c = (undefined4)((uVar24 & 0xffffffff) * 1000 >> 0x20);
            fStack_190 = fVar44 * fVar31;
            uStack_18c = 0x40;
            fStack_1cc = fVar32 * fVar40;
            fStack_1c8 = fVar32 * (float)uVar20;
            pdb_14094c790(auStack_398,&fStack_1e8);
            pdb_1414aad80(uStack_230,auStack_398);
            bVar27 = false;
            unaff_RBX = pfVar29;
            pfVar29 = pfVar19;
          }
          if (lStack_418 != 0) {
            pub_1406abac0((byte *)auStack_3c8._0_8_,lStack_418 << 2,4);
          }
          lVar17 = 1;
          uVar21 = CONCAT71(auStack_338._1_7_,1);
          fVar52 = _DAT_14301555c;
          if ((auStack_338._0_8_ & 1) != 0) {
            return;
          }
        }
        lVar17 = 1;
        uVar21 = CONCAT71(auStack_338._1_7_,1);
      } while ((auStack_338._0_8_ & 1) == 0);
    }
  }
  return;
}

