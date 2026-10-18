// VA 0x14142e7b0, PDB extent 32014 bytes
// system_wall_constructor::utils::half_timber::half_timbering
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::half_timber::half_timbering
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 32014 */

char * pdb_14142e7b0(float *param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined8 param_4
                    ,undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8,
                    undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12,
                    longlong *param_13)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong lVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  char *pcVar19;
  uint uVar20;
  float *pfVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  byte *pbVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  float *pfVar31;
  float *pfVar32;
  undefined1 (*pauVar33) [16];
  ushort uVar34;
  float *pfVar35;
  float *pfVar36;
  bool bVar37;
  float *pfVar38;
  bool bVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 (*in_stack_fffffffffffff998) [16];
  longlong in_stack_fffffffffffff9a0;
  float *in_stack_fffffffffffff9a8;
  undefined4 uVar70;
  undefined8 uStack_628;
  longlong lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  longlong lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  longlong lStack_5f0;
  longlong lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  int iStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  undefined1 auStack_5a8 [16];
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_588 [16];
  longlong lStack_578;
  byte *pbStack_570;
  longlong lStack_568;
  undefined8 uStack_55c;
  float fStack_554;
  ulonglong uStack_550;
  undefined8 uStack_548;
  float *pfStack_540;
  float fStack_538;
  undefined8 uStack_530;
  float fStack_528;
  float *pfStack_520;
  undefined8 uStack_518;
  float fStack_510;
  byte *pbStack_508;
  undefined1 (*pauStack_500) [16];
  undefined1 (*pauStack_4f8) [16];
  longlong lStack_4f0;
  float fStack_4e8;
  float fStack_4e4;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  float fStack_4d4;
  undefined8 uStack_4d0;
  float *pfStack_4c8;
  int *piStack_4c0;
  longlong lStack_4b8;
  byte *pbStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  longlong lStack_488;
  float *pfStack_480;
  longlong lStack_478;
  char cStack_470;
  undefined7 uStack_46f;
  longlong lStack_468;
  longlong lStack_460;
  longlong lStack_458;
  byte *pbStack_450;
  float *pfStack_448;
  undefined4 uStack_43c;
  float fStack_438;
  int iStack_434;
  float fStack_430;
  float fStack_42c;
  undefined8 uStack_428;
  float fStack_420;
  float fStack_41c;
  float *pfStack_418;
  undefined1 (*pauStack_410) [16];
  undefined8 uStack_408;
  float fStack_400;
  float fStack_3fc;
  longlong lStack_3f8;
  float *pfStack_3f0;
  float *pfStack_3e8;
  byte *pbStack_3e0;
  longlong lStack_3d8;
  float *pfStack_3d0;
  longlong lStack_3c8;
  byte *pbStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  float *pfStack_390;
  float *pfStack_388;
  float *pfStack_380;
  undefined1 (*pauStack_378) [16];
  ulonglong uStack_370;
  undefined1 (**ppauStack_368) [16];
  undefined1 auStack_360 [16];
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  char *pcStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 auStack_328 [16];
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  float fStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined1 (*pauStack_2e8) [16];
  float *pfStack_2e0;
  float *pfStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float *pfStack_2a8;
  undefined8 uStack_2a0;
  byte *pbStack_298;
  float *pfStack_290;
  int *piStack_288;
  longlong lStack_280;
  float *pfStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  float *pfStack_268;
  int *piStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined4 uStack_210;
  int iStack_20c;
  float *pfStack_208;
  float *pfStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  undefined1 auStack_198 [16];
  float *pfStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  float *pfStack_168;
  ulonglong uStack_160;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  int iStack_124;
  float *pfStack_120;
  undefined1 (*pauStack_118) [16];
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
  float fStack_108;
  undefined1 auStack_101 [14];
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  auStack_2c8._0_8_ = param_4;
  if (*_DAT_143ca4500 != '\0') {
    return _DAT_143ca4500;
  }
  pauStack_2e8 = param_3;
  uStack_1f0 = param_2;
  piStack_288 = (int *)pdb_14092fa10();
  if (piStack_288 == (int *)0x0) {
    return (char *)0x0;
  }
  auStack_101._1_8_ = param_1;
  pdb_140b77190(&cStack_470,param_11);
  cStack_109 = pdb_140b77b50(param_11);
  puVar9 = (undefined8 *)pdb_1413e4400(param_5,&UNK_1433056b0);
  if ((puVar9 == (undefined8 *)0x0) ||
     (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143309918);
  }
  cStack_10a = '\0';
  lVar28 = *(longlong *)(auStack_101._1_8_ + 0x180);
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  lVar15 = lVar28 + 0x18;
  LOCK();
  bVar39 = *(char *)(lVar28 + 0x18) == '\0';
  if (bVar39) {
    *(char *)(lVar28 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar39) {
    pdb_140e9a150(lVar15);
    lVar15 = *(longlong *)(lVar28 + 0x10);
    if (lVar15 == 0) goto LAB_14142e940;
LAB_14142e8fc:
    piVar11 = (int *)(*(longlong *)(lVar28 + 8) + lVar15 * 4 + -4);
    if (piVar11 == (int *)0x0) goto LAB_14142e940;
    iStack_5d0 = *piVar11;
    lStack_620 = *(longlong *)(lVar10 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar15,1,1000000000);
    pdb_140e9a150(lVar15);
    lVar15 = *(longlong *)(lVar28 + 0x10);
    if (lVar15 != 0) goto LAB_14142e8fc;
LAB_14142e940:
    lStack_620 = *(longlong *)(lVar10 + 0x10);
    if (lStack_620 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_5d0 = (int)lStack_620 + -1;
  }
  uVar49 = *(undefined8 *)(lVar10 + 8);
  uStack_618 = *(undefined8 *)(lVar10 + 0x18);
  uStack_610 = *(undefined8 *)(lVar10 + 0x20);
  uStack_600 = *(undefined8 *)(lVar10 + 0x28);
  uStack_5f8 = *(undefined8 *)(lVar10 + 0x30);
  lStack_5f0 = lVar10 + 0x78;
  lStack_5e8 = lVar10 + 0x58;
  uStack_5e0 = *(undefined8 *)(lVar10 + 0x38);
  uStack_5d8 = *(undefined8 *)(lVar10 + 0x40);
  puStack_348 = &uStack_628;
  pcStack_340 = &cStack_10a;
  fStack_108 = *(float *)(auStack_101._1_8_ + 0x30);
  uStack_628 = uVar49;
  lStack_608 = lVar28;
  if (cStack_109 == '\0') {
    lStack_3d8 = 0;
    pfStack_3d0 = (float *)0x4;
    lStack_3c8 = 0;
    if (cStack_470 != '\0') goto LAB_14142e9ed;
LAB_14142ea26:
    fVar41 = (float)pdb_140930390(auStack_101._1_8_);
  }
  else {
    uVar12 = pdb_140c2b5c0(param_12);
    pdb_1413ec6f0(&lStack_3d8,uVar12,uVar49);
    if (cStack_470 == '\0') goto LAB_14142ea26;
LAB_14142e9ed:
    fVar41 = (float)pdb_14092f8b0(auStack_101._1_8_);
  }
  pdb_140c012e0(&uStack_160);
  if (CONCAT71(uStack_46f,cStack_470) != 0) {
    fVar42 = (float)pdb_140930390(auStack_101._1_8_);
    if (pfStack_150 == (float *)uStack_160) {
      pdb_142d89720(&uStack_160);
    }
    pfStack_158[(longlong)pfStack_150] = fVar42;
    pfStack_150 = (float *)((longlong)pfStack_150 + 1);
    uStack_1e8 = (undefined1 (*) [16])auStack_101;
    if (1 < pfStack_150) {
      if (pfStack_150 < 0x15) {
        pdb_141460250(pfStack_158,pfStack_150,1);
      }
      else {
        pdb_141465740(pfStack_158,pfStack_150,&uStack_1e8);
      }
    }
  }
  pfVar35 = pfStack_150;
  if (pfStack_150 != (float *)0x0) {
    uVar24 = 0;
    do {
      if (pfStack_158[uVar24] < *(float *)(auStack_101._1_8_ + 0x284) + _DAT_142e36f28) {
        uVar30 = uVar24 + 1;
        pfVar35 = (float *)uVar24;
        if (uVar30 < pfStack_150) {
          if (((int)pfStack_150 + (int)uVar24 & 1U) == 0) {
            if (*(float *)(auStack_101._1_8_ + 0x284) + _DAT_142e36f28 <= pfStack_158[uVar24 + 1]) {
              pfStack_158[uVar24] = pfStack_158[uVar24 + 1];
              pfVar35 = (float *)(uVar24 + 1);
            }
            uVar30 = uVar24 + 2;
          }
          fVar42 = _DAT_142e36f28;
          if ((longlong)pfStack_150 - 2U != uVar24) {
            do {
              if (*(float *)(auStack_101._1_8_ + 0x284) + fVar42 <= pfStack_158[uVar30]) {
                pfStack_158[(longlong)pfVar35] = pfStack_158[uVar30];
                pfVar35 = (float *)((longlong)pfVar35 + 1);
              }
              if (*(float *)(auStack_101._1_8_ + 0x284) + fVar42 <= pfStack_158[uVar30 + 1]) {
                pfStack_158[(longlong)pfVar35] = pfStack_158[uVar30 + 1];
                pfVar35 = (float *)((longlong)pfVar35 + 1);
              }
              uVar30 = uVar30 + 2;
            } while (pfStack_150 != (float *)uVar30);
          }
        }
        break;
      }
      uVar24 = uVar24 + 1;
    } while (pfStack_150 != (float *)uVar24);
  }
  pfStack_150 = pfVar35;
  pfStack_2d8 = (float *)(auStack_101._1_8_ + 0x29f);
  cVar6 = pdb_1408ff980();
  if (((cVar6 != '\0') && ((uint)*(float *)(auStack_101._1_8_ + 600) < 2)) &&
     (0.0 < *(float *)(auStack_101._1_8_ + 0x294))) {
    fVar43 = (float)pdb_14092ff30(auStack_101._1_8_,cStack_109);
    fVar42 = _DAT_142e3c670;
    uVar20 = _DAT_142e377e0;
    if (pfStack_150 == (float *)0x0) {
      pfVar35 = (float *)0x0;
      if (uStack_160 == 0) {
LAB_14142ebd3:
        pdb_142d89720(&uStack_160);
      }
    }
    else {
      uVar24 = 0;
      do {
        if ((float)((uint)(pfStack_158[uVar24] - fVar43) & _DAT_142e377e0) < _DAT_142e3c670) {
          uVar30 = uVar24 + 1;
          pfVar35 = (float *)uVar24;
          if (uVar30 < pfStack_150) {
            if (((int)pfStack_150 + (int)uVar24 & 1U) == 0) {
              if (_DAT_142e3c670 <=
                  (float)((uint)(pfStack_158[uVar24 + 1] - fVar43) & _DAT_142e377e0)) {
                pfStack_158[uVar24] = pfStack_158[uVar24 + 1];
                pfVar35 = (float *)(uVar24 + 1);
              }
              uVar30 = uVar24 + 2;
            }
            if ((longlong)pfStack_150 - 2U != uVar24) {
              do {
                if (fVar42 <= (float)((uint)(pfStack_158[uVar30] - fVar43) & uVar20)) {
                  pfStack_158[(longlong)pfVar35] = pfStack_158[uVar30];
                  pfVar35 = (float *)((longlong)pfVar35 + 1);
                }
                if (fVar42 <= (float)((uint)(pfStack_158[uVar30 + 1] - fVar43) & uVar20)) {
                  pfStack_158[(longlong)pfVar35] = pfStack_158[uVar30 + 1];
                  pfVar35 = (float *)((longlong)pfVar35 + 1);
                }
                uVar30 = uVar30 + 2;
              } while (pfStack_150 != (float *)uVar30);
            }
          }
          break;
        }
        uVar24 = uVar24 + 1;
        pfVar35 = pfStack_150;
      } while (pfStack_150 != (float *)uVar24);
      pfStack_150 = pfVar35;
      if (pfVar35 == (float *)uStack_160) goto LAB_14142ebd3;
    }
    pfStack_158[(longlong)pfVar35] = fVar43;
    pfStack_150 = (float *)((longlong)pfVar35 + 1);
  }
  if (cStack_109 != '\0') {
    fVar41 = (float)pdb_140930390(auStack_101._1_8_);
    fVar41 = fVar41 + _DAT_14300b368 + _DAT_142f60fec;
  }
  pfVar35 = pfStack_150;
  if (pfStack_150 == (float *)uStack_160) {
    pdb_142d89720(&uStack_160);
  }
  pfStack_158[(longlong)pfVar35] = fVar41;
  uVar24 = (longlong)pfVar35 + 1;
  fVar41 = *(float *)(auStack_101._1_8_ + 0x284);
  pfStack_150 = (float *)uVar24;
  if (uVar24 == uStack_160) {
    pdb_142d89720(&uStack_160);
  }
  pfVar32 = pfStack_158;
  if (uVar24 != 0) {
    pub_142e32770(pfStack_158 + 1,pfStack_158,uVar24 * 4);
  }
  *pfVar32 = fVar41;
  pfStack_150 = (float *)((longlong)pfVar35 + 2);
  cVar6 = pdb_1408ff980(pfStack_2d8);
  pfVar35 = pfStack_150;
  if (((cVar6 != '\0') && ((uint)*(float *)(auStack_101._1_8_ + 600) < 2)) &&
     ((0.0 < *(float *)(auStack_101._1_8_ + 0x294) &&
      (uStack_1e8 = (undefined1 (*) [16])auStack_101, (float *)0x1 < pfStack_150)))) {
    if (pfStack_150 < (float *)0x15) {
      pdb_141460a40(pfStack_158,pfStack_150,1);
    }
    else {
      pdb_141465f60(pfStack_158,pfStack_150,&uStack_1e8);
    }
    pfVar35 = pfStack_150;
    if ((float *)0x1 < pfStack_150) {
      lVar10 = 0;
      do {
        if ((pfStack_158[lVar10 + 1] == pfStack_158[lVar10]) &&
           (!NAN(pfStack_158[lVar10 + 1]) && !NAN(pfStack_158[lVar10]))) {
          pfVar32 = (float *)(lVar10 + 2);
          pfVar35 = (float *)(lVar10 + 1);
          if (pfVar32 < pfStack_150) {
            if (((int)pfStack_150 - (int)lVar10 & 1U) != 0) {
              fVar41 = pfStack_158[lVar10 + 2];
              if ((fVar41 != pfStack_158[lVar10]) || (NAN(fVar41) || NAN(pfStack_158[lVar10]))) {
                pfStack_158[lVar10 + 1] = fVar41;
                pfVar35 = (float *)(lVar10 + 2);
              }
              pfVar32 = (float *)(lVar10 + 3);
            }
            if ((longlong)pfStack_150 + -3 != lVar10) goto LAB_1414346d0;
          }
          break;
        }
        lVar10 = lVar10 + 1;
      } while ((longlong)pfStack_150 + -1 != lVar10);
    }
  }
LAB_14142ed06:
  pfStack_150 = pfVar35;
  iStack_124 = *piStack_288;
  if (iStack_124 == 0) {
    uStack_1e0 = (code *)(pfStack_158 + (longlong)pfStack_150);
    uStack_1e8 = (undefined1 (*) [16])pfStack_158;
    uStack_1d8 = (float *)0x0;
    uStack_1c8 = &fStack_108;
    pdb_1413ead00(&lStack_488,&uStack_1e8);
  }
  else {
    pfStack_1a8 = (float *)(piStack_288 + 1);
    uStack_1e8 = (undefined1 (*) [16])0x0;
    uStack_1c8._0_4_ = 0.0;
    uStack_1c8._4_4_ = 0.0;
    pfStack_1a0 = &fStack_108;
    auStack_198._8_8_ = &cStack_470;
    auStack_198._0_8_ = &uStack_160;
    pfStack_188 = (float *)auStack_101._1_8_;
    uStack_180 = 0;
    uStack_178 = 4;
    pdb_1413ea900(&lStack_488,&uStack_1e8);
  }
  pfVar35 = pfStack_150;
  pfStack_2e0 = pfStack_150;
  if (pfStack_150 == (float *)0x0) {
    pbStack_3c0 = (byte *)0x1;
    pfVar32 = (float *)0x0;
  }
  else {
    pdb_14007ee60();
    pbStack_3c0 = pub_1406abae0((ulonglong)pfVar35,1);
    pfVar32 = pfStack_150;
    if (pbStack_3c0 == (byte *)0x0) {
      pdb_142dc7e2a(1,pfVar35);
LAB_141434a6c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  uStack_1e8 = (undefined1 (*) [16])0x0;
  uStack_1e0 = (code *)0x4;
  uStack_1d8 = (float *)0x0;
  pdb_1413e6730(&lStack_3f8,&uStack_1e8,pfVar32);
  pdb_14017ede0(&uStack_318,*(longlong *)(auStack_101._1_8_ + 0x90),
                *(longlong *)(auStack_101._1_8_ + 0x90) +
                *(longlong *)(auStack_101._1_8_ + 0x98) * 0xc);
  pauStack_248 = uStack_318;
  pdb_140080c90(&uStack_1e8,&pauStack_248,0);
  if (SBORROW8(0,(longlong)uStack_1e8)) {
    pauStack_248 = (undefined1 (*) [16])uStack_1e0;
    pauStack_240 = (undefined1 (*) [16])uStack_1d8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143306430,0x2b,&pauStack_248,&UNK_143306410,&UNK_143306a30);
  }
  uStack_218 = (longlong)auStack_1b8;
  lVar10 = uStack_218;
  auStack_228._8_4_ = (float)uStack_1c0;
  auStack_228._0_8_ = uStack_1c8;
  auStack_228._12_4_ = uStack_1c0._4_4_;
  auStack_238._8_8_ = uStack_1d0;
  auStack_238._0_8_ = uStack_1d8;
  pauStack_248 = uStack_1e8;
  pauStack_240 = (undefined1 (*) [16])uStack_1e0;
  uStack_218._0_4_ = auStack_1b8._0_4_;
  fVar41 = (float)uStack_218 / _DAT_142e37988;
  uStack_218 = lVar10;
  fVar42 = (float)pub_142e329c0(fVar41);
  uVar20 = _DAT_142e377e0;
  fVar41 = _DAT_142e36f28;
  pfVar35 = (float *)((longlong)(fVar42 - _DAT_142e36f2c) & (longlong)fVar42 >> 0x3f |
                     (longlong)fVar42);
  if (fVar42 < 0.0) {
    pfVar35 = (float *)0x0;
  }
  pfVar32 = (float *)0xffffffffffffffff;
  if (fVar42 <= _DAT_142e36f30) {
    pfVar32 = pfVar35;
  }
  pfVar35 = (float *)0x2;
  if ((float *)0x2 < pfVar32) {
    pfVar35 = pfVar32;
  }
  fVar42 = (float)pfVar35 + _DAT_142e36f34;
  pfStack_120 = pfStack_3e8;
  pfVar32 = pfStack_158 + (longlong)pfStack_150;
  pfVar14 = pfStack_3f0;
  pfVar31 = (float *)0x0;
  pfVar36 = pfStack_158;
  if (pfStack_158 != pfStack_158 + (longlong)pfStack_150) {
    do {
      if (auStack_238._0_8_ == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143308560);
      }
      if (auStack_238._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143308518,0x2d,&UNK_143308548);
      }
      pfStack_268 = pfVar36 + 1;
      uStack_2b8 = (float *)((longlong)pfVar31 + 1);
      pauStack_378 = pauStack_240;
      uStack_370 = auStack_238._0_8_;
      pfVar21 = pfVar14 + (longlong)pfVar31 * 6;
      ppauStack_368 = &pauStack_248;
      auStack_360 = ZEXT816(0);
      pfStack_278 = pfVar36;
      pfStack_168 = pfVar14;
      pfStack_148 = pfVar32;
      fVar43 = 0.0;
      for (pfVar25 = (float *)0x0; pfVar25 < pfVar35; pfVar25 = (float *)((longlong)pfVar25 + 1)) {
        fVar64 = (float)pfVar25 / fVar42;
        if (fVar64 - fVar43 < 0.0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143308450,0x21,&UNK_1433084c8);
        }
        uVar47 = auStack_360._12_4_;
        pfStack_1a8 = (float *)(ulonglong)(uint)auStack_360._8_4_;
        uStack_1e8 = (undefined1 (*) [16])0x0;
        uStack_1c0 = &ppauStack_368;
        uStack_1b0 = *pauStack_378 + uStack_370 * 8;
        auStack_1b8 = (undefined1  [8])pauStack_378;
        pfStack_188 = (float *)auStack_101;
        uStack_180 = uStack_180 & 0xffffffffffffff00;
        pfStack_1a0 = pfStack_1a8;
        auStack_198 = ZEXT816(0);
        pdb_141466b40(&uStack_318,&uStack_1e8);
        if ((int)uStack_318 == 1) {
          uVar49 = CONCAT71(uStack_30f,uStack_310);
          uVar48 = (undefined4)uVar49;
          fVar44 = (float)((uint)(fStack_2f8 - fStack_308) & uVar20);
          for (fVar43 = (fVar41 - (float)uVar47) * fVar44 - (fVar64 - fVar43); fVar43 < 0.0;
              fVar43 = fVar43 + fVar44) {
            auStack_360._8_4_ = (int)uVar49;
            auStack_360._12_4_ = 0x3f800000;
            pdb_141466b40(&uStack_318,&uStack_1e8);
            if ((int)uStack_318 != 1) goto LAB_14142f217;
            uVar49 = CONCAT71(uStack_30f,uStack_310);
            uVar48 = (undefined4)uVar49;
            fVar44 = (float)((uint)(fStack_2f8 - fStack_308) & uVar20);
          }
          auStack_360._8_4_ = uVar48;
          auStack_360._12_4_ = fVar41 - fVar43 / fVar44;
        }
LAB_14142f217:
        uVar24 = (ulonglong)(uint)auStack_360._8_4_;
        uVar49 = *(undefined8 *)(param_6 + uVar24 * 4);
        fVar43 = (float)auStack_360._12_4_ * (float)((ulonglong)uVar49 >> 0x20) +
                 (fVar41 - (float)auStack_360._12_4_) * (float)uVar49;
        if (fVar43 <= 0.0) {
          if (pfStack_2e0 <= pfVar31) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar31,pfStack_2e0,&UNK_143309b50);
          }
LAB_14142f07d:
          bVar40 = 0;
        }
        else {
          fVar43 = fVar43 + (fVar41 - (float)auStack_360._12_4_) * *(float *)(param_8 + uVar24 * 4)
                            + (float)auStack_360._12_4_ * *(float *)(param_8 + 4 + uVar24 * 4);
          if (fVar43 < *pfStack_278 || fVar43 == *pfStack_278) {
            if (pfStack_2e0 <= pfVar31) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar31,pfStack_2e0,&UNK_143309b68);
            }
            goto LAB_14142f07d;
          }
          if (pfStack_2e0 <= pfVar31) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar31,pfStack_2e0,&UNK_143309b80);
          }
          fVar43 = (float)uStack_218 * fVar64;
          if (pbStack_3c0[(longlong)pfVar31] == 0) {
            if (pfStack_120 <= pfVar31) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar31,pfStack_120,&UNK_143309b98);
            }
            lVar10 = *(longlong *)(pfVar21 + 4);
            if (lVar10 == *(longlong *)pfVar21) {
              pdb_142d7f010(pfVar21);
            }
            lVar28 = *(longlong *)(pfVar21 + 2);
            *(float *)(lVar28 + lVar10 * 0xc) = fVar43;
            *(float *)(lVar28 + 4 + lVar10 * 0xc) = fVar43;
            *(undefined1 *)(lVar28 + 8 + lVar10 * 0xc) = 0;
            *(longlong *)(pfVar21 + 4) = lVar10 + 1;
          }
          else {
            if (pfStack_120 <= pfVar31) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar31,pfStack_120,&UNK_143309bb0);
            }
            lVar10 = *(longlong *)(pfVar21 + 4);
            if ((lVar10 == 0) || (*(longlong *)(pfVar21 + 2) + lVar10 * 0xc == 0xc)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143309bc8);
            }
            lVar10 = *(longlong *)(pfVar21 + 2) + lVar10 * 0xc;
            *(float *)(lVar10 + -8) = fVar43 + 0.0;
            *(undefined1 *)(lVar10 + -4) = 0;
          }
          bVar40 = 1;
        }
        pbStack_3c0[(longlong)pfVar31] = bVar40;
        fVar43 = fVar64;
      }
      pfVar32 = pfStack_148;
      pfVar14 = pfStack_168;
      pfVar31 = uStack_2b8;
      pfVar36 = pfStack_268;
    } while (pfStack_268 != pfStack_148);
  }
  if (pauStack_248 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_240,(longlong)pauStack_248 << 3,4);
  }
  if (auStack_238._8_8_ != 0) {
    pub_1406abac0((byte *)auStack_228._0_8_,auStack_238._8_8_ << 2,4);
  }
  pfVar35 = pfStack_480;
  pfVar32 = pfStack_480 + lStack_478 * 4;
  uStack_1e8 = (undefined1 (*) [16])pfStack_480;
  uStack_1d8 = (float *)auStack_101._1_8_;
  uStack_1d0 = (float *)param_10;
  uStack_1c8 = (float *)&uStack_1f0;
  uStack_1c0 = (undefined1 (***) [16])&fStack_108;
  uStack_1b0 = auStack_2c8._0_8_;
  auStack_1b8 = (undefined1  [8])pauStack_2e8;
  puVar9 = &uStack_1e8;
  uStack_1e0 = (code *)pfVar32;
  pdb_1413ee500(&lStack_458);
  plVar13 = (longlong *)pdb_140f3bda0();
  if ((char)plVar13[2] == '\x01') {
    auStack_360._8_8_ = *plVar13;
    puVar9 = (undefined8 *)plVar13[1];
  }
  else {
    auStack_360._8_8_ = pdb_140f4fd10();
    *plVar13 = auStack_360._8_8_;
    plVar13[1] = (longlong)puVar9;
    *(undefined1 *)(plVar13 + 2) = 1;
  }
  *plVar13 = auStack_360._8_8_ + 1;
  fVar42 = _DAT_142f684a8;
  ppauStack_368 = _DAT_143309d00;
  pauStack_378 = _DAT_143309cf0;
  uStack_370 = _UNK_143309cf8;
  auStack_360._0_8_ = _UNK_143309d08;
  fVar43 = _DAT_142e37874;
  if ((byte)iStack_124 == '\0') {
    fVar43 = _DAT_142e37830;
  }
  pauStack_118 = (undefined1 (*) [16])CONCAT44(pauStack_118._4_4_,fVar43);
  uStack_2b8._0_4_ = _DAT_142e3c608;
  if ((byte)iStack_124 == '\0') {
    uStack_2b8._0_4_ = _DAT_1433096c0;
  }
  piStack_260 = piStack_288 + 1;
  auStack_3b8._0_4_ = *(undefined4 *)(param_11 + 0x4c);
  lStack_280 = (ulonglong)(*(byte *)(param_11 + 0x3c) ^ 1) * 4 + 0x10;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = auStack_328._8_8_;
  auStack_328 = auVar60 << 0x40;
  fVar64 = _DAT_142e36f50;
  fVar43 = _DAT_142e37ad4;
  puStack_350 = puVar9;
  pfStack_2a8 = pfVar32;
LAB_14142f561:
  pbVar27 = pbStack_450;
  if (pfVar35 != pfVar32) {
    uStack_408._0_4_ = SUB84(pfVar35,0);
    uStack_408._4_4_ = (float)((ulonglong)pfVar35 >> 0x20);
    uStack_258 = *(float **)pfVar35;
    uStack_250 = *(float **)(pfVar35 + 2);
    uVar49 = auStack_328._0_8_;
    if (pfStack_448 <= (ulonglong)auStack_328._0_8_) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(auStack_328._0_8_,pfStack_448,&UNK_143309a78);
    }
    pfStack_390 = (float *)0x0;
    pfStack_388 = (float *)0x4;
    pfStack_380 = (float *)0x0;
    uStack_f2 = 1;
    fVar44 = (float)pdb_140deec50(&uStack_258);
    if (_DAT_142f95160 < fVar44) {
      fVar44 = (float)uStack_258;
      fVar46 = (float)uStack_250;
      fVar45 = (float)pub_142e329c0((float)((uint)((float)uStack_250 - (float)uStack_258) & uVar20)
                                    / pauStack_118._0_4_);
      uVar24 = (longlong)(fVar45 - _DAT_142e36f2c) & (longlong)fVar45 >> 0x3f | (longlong)fVar45;
      if (fVar45 < 0.0) {
        uVar24 = 0;
      }
      if (_DAT_142e36f30 < fVar45) {
        uVar24 = 0xffffffffffffffff;
      }
      for (uVar30 = 0; pfVar35 = pfStack_380, uVar30 < uVar24; uVar30 = uVar30 + 1) {
        if (pfStack_380 == pfStack_390) {
          uStack_f2 = 1;
          pdb_142d7f010(&pfStack_390);
        }
        fVar45 = ((float)uVar30 / (float)uVar24) * fVar46 +
                 (fVar41 - (float)uVar30 / (float)uVar24) * fVar44;
        pfStack_388[(longlong)pfVar35 * 3] = fVar45;
        pfStack_388[(longlong)pfVar35 * 3 + 1] = fVar45;
        pfStack_388[(longlong)pfVar35 * 3 + 2] = fVar45;
        pfStack_380 = (float *)((longlong)pfVar35 + 1);
      }
    }
    uStack_408 = (float *)(CONCAT44(uStack_408._4_4_,(float)uStack_408) + 0x10);
    uStack_2d0 = auStack_328._0_8_ + 1;
    pfStack_278 = *(float **)(pbVar27 + uVar49 * 0x18 + 8) +
                  *(longlong *)(pbVar27 + uVar49 * 0x18 + 0x10) * 5;
    pfVar35 = pfStack_278;
    pfVar32 = *(float **)(pbVar27 + uVar49 * 0x18 + 8);
    while (pfVar14 = pfVar32, pfVar32 = pfStack_3d0, pfVar14 != pfVar35) {
      pfVar32 = pfVar14 + 5;
      if (*(char *)((longlong)pfVar14 + 0x12) == '\0') {
        pfVar31 = pfStack_388 + (longlong)pfStack_380 * 3;
        pfVar35 = pfStack_388;
LAB_14142f7b0:
        pfVar36 = pfVar35;
        pfVar35 = pfStack_278;
        if (pfVar36 != pfVar31) {
          uStack_f2 = 1;
          pdb_140deec20(pfVar14);
          uStack_f2 = 1;
          cVar6 = pdb_140deec60(pfVar14);
          if (cVar6 != '\0') {
            fVar44 = pfVar36[1];
            fVar46 = *pfVar14;
            fVar45 = fVar46;
            if (fVar44 <= fVar46) {
              fVar45 = fVar44;
            }
            fVar46 = (float)(~-(uint)NAN(fVar44) & (uint)fVar45 | -(uint)NAN(fVar44) & (uint)fVar46)
            ;
            pfVar36[1] = fVar46;
            fVar44 = pfVar14[2];
            fVar45 = fVar44;
            if (fVar44 <= fVar46) {
              fVar45 = fVar46;
            }
            pfVar36[2] = (float)(-(uint)NAN(fVar46) & (uint)fVar44 |
                                ~-(uint)NAN(fVar46) & (uint)fVar45);
          }
          uStack_f2 = 1;
          fVar44 = (float)pdb_140deec20(pfVar14);
          uStack_f2 = 1;
          fVar46 = (float)pdb_140deec10(pfVar14);
          uVar23 = (uint)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
          pfVar35 = pfVar36 + 3;
          if (fVar44 + fVar46 * fVar64 <= fStack_108) goto LAB_14142f920;
          uStack_f2 = 1;
          pdb_140deec20(pfVar14);
          uStack_f2 = 1;
          pdb_140deec20(pfVar14);
          uStack_f2 = 1;
          pdb_140deec10(pfVar14);
          uStack_f2 = 1;
          pdb_140deec50(pfVar14);
          uStack_f2 = 1;
          in_stack_fffffffffffff998 = (undefined1 (*) [16])((ulonglong)uVar23 << 0x20);
          pdb_140deead0(&uStack_1e8);
          uStack_f2 = 1;
          pdb_140deec20(&uStack_1e8);
          uStack_f2 = 1;
          cVar6 = pdb_140deec60(&uStack_1e8);
          goto LAB_14142f9f5;
        }
      }
    }
    pfStack_140 = (float *)0x0;
    pfStack_138 = (float *)0x4;
    pfStack_130 = (float *)0x0;
    pfStack_268 = pfStack_390;
    pfStack_168 = pfStack_388;
    if (pfStack_380 != (float *)0x0) {
      pfStack_148 = pfStack_388 + (longlong)pfStack_380 * 3;
      lVar10 = lStack_3c8 << 4;
      pfVar35 = pfStack_388;
      do {
        fVar44 = *pfVar35;
        fVar46 = pfVar35[1];
        fVar45 = pfVar35[2];
        pfVar35 = pfVar35 + 3;
        pdb_14007ee60();
        if ((fVar46 != fVar45) || (NAN(fVar46) || NAN(fVar45))) {
          pfVar14 = (float *)pub_1406abab0(8,4);
          fVar44 = fStack_108;
          if (pfVar14 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,8);
          }
          pfStack_278 = pfVar14;
          if (NAN(fVar46 / fStack_108)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          if (NAN(fVar45 / fStack_108)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
          }
          uVar12 = pub_142e32a70();
          fVar46 = (float)uVar12;
          fVar66 = (float)((ulonglong)uVar12 >> 0x20);
          uVar12 = pub_142e32a70();
          fVar54 = (float)((ulonglong)uVar12 >> 0x20);
          fVar45 = (float)uVar12;
          auVar55._0_4_ = ~-(uint)(fVar45 < 0.0) & (uint)fVar45;
          auVar55._4_4_ = ~-(uint)(fVar46 < 0.0) & (uint)fVar46;
          auVar55._8_4_ = ~-(uint)(fVar54 < 0.0) & (uint)fVar54;
          auVar55._12_4_ = ~-(uint)(fVar66 < 0.0) & (uint)fVar66;
          auVar50._0_4_ = (uint)(fVar45 + _DAT_142e37950) & -(uint)(fVar45 < 0.0);
          auVar50._4_4_ = (uint)(fVar46 + _UNK_142e37954) & -(uint)(fVar46 < 0.0);
          auVar50._8_4_ = (uint)(fVar54 + _UNK_142e37958) & -(uint)(fVar54 < 0.0);
          auVar50._12_4_ = (uint)(fVar66 + _UNK_142e3795c) & -(uint)(fVar66 < 0.0);
          *(ulonglong *)pfVar14 =
               CONCAT44(fVar44 * SUB164(auVar50 | auVar55,4),fVar44 * SUB164(auVar50 | auVar55,0));
          pfVar31 = pfVar14 + 2;
          pfStack_120 = (float *)0x8;
        }
        else {
          pfVar14 = (float *)pub_1406abab0(4,4);
          if (pfVar14 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,4);
          }
          *pfVar14 = fVar44;
          pfVar31 = pfVar14 + 1;
          pfStack_120 = (float *)0x4;
          pfStack_278 = pfVar14;
        }
        do {
          fVar44 = *pfVar14;
          lVar28 = lVar10;
          pfVar36 = pfVar32;
          if ((fVar44 < (float)uStack_258) || ((float)uStack_250 < fVar44)) {
            pdb_140deec20(&uStack_258);
            in_stack_fffffffffffff998 = pauStack_2e8;
            in_stack_fffffffffffff9a0 = auStack_2c8._0_8_;
            cVar6 = pdb_141438080();
            if (cVar6 == '\0') {
LAB_14142fd10:
              do {
                pfVar21 = pfVar36;
                pfVar36 = pfStack_130;
                if (lVar28 == 0) {
                  if (pfStack_130 == pfStack_140) {
                    pdb_142d89720(&pfStack_140);
                  }
                  pfStack_138[(longlong)pfVar36] = fVar44;
                  pfStack_130 = (float *)((longlong)pfVar36 + 1);
                  break;
                }
                lVar28 = lVar28 + -0x10;
                pfVar36 = pfVar21 + 4;
              } while ((fVar44 < *pfVar21) || (pfVar21[2] <= fVar44));
            }
          }
          else {
            lVar15 = *(longlong *)(pbVar27 + uVar49 * 0x18 + 0x10) * 0x14;
            pfVar21 = *(float **)(pbVar27 + uVar49 * 0x18 + 8);
            do {
              if (lVar15 == 0) goto LAB_14142fd10;
              pfVar25 = pfVar21 + 5;
              fVar46 = *pfVar21;
              pfVar38 = pfVar21 + 2;
              lVar15 = lVar15 + -0x14;
              pfVar21 = pfVar25;
            } while ((fVar44 < fVar46 + fVar43) || (*pfVar38 + fVar42 <= fVar44));
          }
          pfVar14 = pfVar14 + 1;
        } while (pfVar14 != pfVar31);
        pub_1406abac0((byte *)pfStack_278,(ulonglong)pfStack_120,4);
      } while (pfVar35 != pfStack_148);
    }
    if (pfStack_268 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_168,(longlong)pfStack_268 * 0xc,4);
    }
    uStack_1e8 = (undefined1 (*) [16])auStack_101;
    if ((float *)0x1 < pfStack_130) {
      if (pfStack_130 < (float *)0x15) {
        uStack_f3 = 1;
        pdb_141460770(pfStack_138,pfStack_130,1,&uStack_1e8);
        fVar64 = _DAT_142e36f50;
        uVar20 = _DAT_142e377e0;
        fVar41 = _DAT_142e36f28;
      }
      else {
        uStack_f3 = 1;
        pdb_141466590(pfStack_138,pfStack_130);
        fVar64 = _DAT_142e36f50;
        uVar20 = _DAT_142e377e0;
        fVar41 = _DAT_142e36f28;
      }
    }
    pfVar32 = pfStack_130;
    pfVar35 = pfStack_138;
    uVar24 = (longlong)pfStack_130 * 4;
    if (uVar24 < 0x7ffffffffffffffd && (ulonglong)pfStack_130 >> 0x3e == 0) {
      if (uVar24 == 0) {
        pbVar16 = (byte *)0x4;
        pfVar14 = (float *)0x0;
      }
      else {
        pdb_14007ee60();
        uVar12 = 4;
        pbVar16 = pub_1406abab0(uVar24,4);
        pfVar14 = pfVar32;
        if (pbVar16 == (byte *)0x0) goto LAB_1414315c5;
      }
      if (pfVar32 == (float *)0x0) {
        if (pfStack_130 != (float *)0x0) {
          pfVar31 = pfStack_138 + (longlong)pfStack_130;
          pfVar35 = pfStack_138 + 1;
          goto LAB_14142fe99;
        }
      }
      else {
        pub_142e32760(pbVar16,pfVar35);
        if (pfStack_130 != (float *)0x0) {
          pfVar31 = pfStack_138 + (longlong)pfStack_130;
          pfVar35 = pfStack_138 + 1;
          if (pfVar32 != (float *)0x1) {
            if ((float)((uint)(*(float *)(pbVar16 + 4) - *pfStack_138) & uVar20) < _DAT_142e37988) {
              *pfStack_138 = *pfStack_138 * fVar64 + *(float *)(pbVar16 + 4) * fVar64;
            }
          }
LAB_14142fe99:
          if (pfStack_130 != (float *)0x1) {
            lVar10 = 0;
            pfVar36 = (float *)0x0;
            do {
              if ((float *)((longlong)pfVar36 + 2) < pfVar32) {
                if ((float)((uint)(*(float *)(pbVar16 + (longlong)pfVar36 * 4 + 8) -
                                  pfVar35[(longlong)pfVar36]) & uVar20) < _DAT_142e37988) {
                  pfVar35[(longlong)pfVar36] =
                       pfVar35[(longlong)pfVar36] * fVar64 +
                       *(float *)(pbVar16 + (longlong)pfVar36 * 4 + 8) * fVar64;
                }
              }
              if (pfVar36 < pfVar32) {
                if ((float)((uint)(*(float *)(pbVar16 + (longlong)pfVar36 * 4) -
                                  pfVar35[(longlong)pfVar36]) & uVar20) < _DAT_142e37988) {
                  pfVar35[(longlong)pfVar36] =
                       pfVar35[(longlong)pfVar36] * fVar64 +
                       *(float *)(pbVar16 + (longlong)pfVar36 * 4) * fVar64;
                }
              }
              pfVar36 = (float *)((longlong)pfVar36 + 1);
              lVar28 = lVar10 + 4;
              lVar10 = lVar10 + 4;
            } while ((float *)((longlong)pfVar35 + lVar28) != pfVar31);
          }
        }
      }
      if (pfVar14 != (float *)0x0) {
        pub_1406abac0(pbVar16,(longlong)pfVar14 << 2,4);
      }
      pfVar32 = pfStack_130;
      pfVar35 = pfStack_138;
      if (pfStack_130 != (float *)0x0) {
        fVar43 = uStack_250._4_4_;
        fVar44 = (float)uStack_250 * fVar64 + (float)uStack_258 * fVar64;
        pfVar14 = (float *)-(longlong)pfStack_130;
        pfVar31 = (float *)0x4;
        pfVar36 = (float *)0x0;
        do {
          pfVar14 = (float *)((longlong)pfVar14 + 1);
          if (CONCAT71(uStack_46f,cStack_470) != 0) {
            fVar46 = pfVar35[(longlong)pfVar36];
            uStack_f3 = 1;
            fVar45 = (float)pdb_140930390(auStack_101._1_8_);
            if (fVar45 < fVar43) {
              uStack_f3 = 1;
              pdb_140b77a00(param_11);
              uStack_f3 = 1;
              fVar45 = (float)pdb_140de8220();
              if (fVar45 < fVar41) {
                uStack_f3 = 1;
                pdb_140b77bc0(&uStack_1e8);
                uStack_f3 = 1;
                lVar10 = pdb_140a84d90(&uStack_1e8);
                fVar45 = *(float *)(lVar10 + lStack_280) + _DAT_142e37ae0;
                if (fVar45 <= 0.0) {
                  fVar45 = 0.0;
                }
                if ((fVar44 - fVar45 * fVar64 <= fVar46) && (fVar46 <= fVar45 * fVar64 + fVar44))
                goto LAB_14142ff10;
              }
              pfStack_268 = pfVar32;
              pfStack_168 = pfVar35;
              pfStack_278 = pfVar36;
              if ((float *)((longlong)pfVar36 + 1) < pfVar32) goto LAB_1414313fd;
              goto LAB_141430012;
            }
          }
LAB_14142ff10:
          pfVar36 = (float *)((longlong)pfVar36 + 1);
          pfVar31 = pfVar31 + 1;
        } while (pfVar36 != pfVar32);
      }
      goto LAB_141430020;
    }
    uVar12 = 0;
LAB_1414315c5:
    uStack_f3 = 1;
    pdb_142dc7e2a(uVar12,uVar24);
    goto LAB_141434a6c;
  }
  if ((byte)iStack_124 == '\0') {
    auVar60 = *pauStack_378;
    pauVar18 = pauStack_378 + 1;
    uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
    lVar10 = auStack_360._0_8_;
    pauVar26 = pauStack_378;
    while (lVar10 != 0) {
      if ((short)uVar20 == 0) {
        do {
          auVar60 = *pauVar18;
          pauVar26 = pauVar26 + -0x20;
          pauVar18 = pauVar18 + 1;
          uVar20 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar20 == 0);
      }
      iVar8 = 0;
      for (uVar23 = uVar20; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      uVar23 = iVar8 << 5;
      lVar28 = *(longlong *)((longlong)pauVar26 + (-8 - (ulonglong)uVar23));
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309930);
      }
      uVar20 = uVar20 - 1 & uVar20;
      lVar10 = lVar10 + -1;
      pfVar35 = *(float **)((longlong)pauVar26 + (-0x10 - (ulonglong)uVar23));
      if ((*pfVar35 != 0.0) || (NAN(*pfVar35))) {
        if (lVar28 == *(longlong *)((longlong)pauVar26 + (-0x18 - (ulonglong)uVar23))) {
          pdb_142d89720();
          pfVar35 = *(float **)((longlong)pauVar26 + (-0x10 - (ulonglong)uVar23));
        }
        pub_142e32770(pfVar35 + 1,pfVar35,lVar28 * 4);
        *pfVar35 = 0.0;
        *(longlong *)((longlong)pauVar26 + (-8 - (ulonglong)uVar23)) = lVar28 + 1;
      }
    }
  }
  uStack_1e0 = (code *)(pfStack_480 + lStack_478 * 4);
  uStack_1e8 = (undefined1 (*) [16])pfStack_480;
  uStack_1d8 = (float *)0x0;
  uStack_1d0 = (float *)auStack_101._1_8_;
  uStack_1c8._0_4_ = 0.0;
  uStack_1c8._4_4_ = 0.0;
  pfStack_1a8 = (float *)0x0;
  pdb_1413ea550(&lStack_578,&uStack_1e8);
  lStack_4b8 = lStack_578;
  pbStack_508 = pbStack_570 + lStack_568 * 0x10;
  pfStack_168 = (float *)CONCAT44(pfStack_168._4_4_,*(undefined4 *)(param_11 + 0x4c));
  pfStack_268 = (float *)CONCAT71(pfStack_268._1_7_,*(undefined1 *)(param_11 + 0x3c));
  piStack_4c0 = piStack_288 + 4;
  lStack_4f0 = param_11 + 0x3d;
  pbStack_4b0 = pbStack_570;
  pbStack_3e0 = pbStack_570;
LAB_14143174d:
  do {
    if (pbStack_3e0 == pbStack_508) {
      if (lStack_4b8 != 0) {
        pub_1406abac0(pbStack_4b0,lStack_4b8 << 4,8);
      }
      if ((cStack_10a != '\0') && (*_DAT_143ca8e90 != 0)) {
        uStack_1e8 = (undefined1 (*) [16])&UNK_143309988;
        uStack_1e0 = (code *)0x2b;
        uStack_1d8 = (float *)&UNK_143309988;
        uStack_1d0 = (float *)0x2b;
        uStack_1c8._0_4_ = 176.59937;
        uStack_1c8._4_4_ = 1.4013e-45;
        pdb_1400c9be0(&UNK_143309948,0x49,1,&uStack_1e8);
      }
      uVar24 = uStack_370;
      if (uStack_370 != 0) {
        if (auStack_360._0_8_ != 0) {
          auVar60 = *pauStack_378;
          pauVar18 = pauStack_378 + 1;
          uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          pauVar26 = pauStack_378;
          lVar10 = auStack_360._0_8_;
          do {
            if ((short)uVar20 == 0) {
              do {
                auVar60 = *pauVar18;
                pauVar26 = pauVar26 + -0x20;
                pauVar18 = pauVar18 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar20 == 0);
            }
            iVar8 = 0;
            for (uVar23 = uVar20; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
              iVar8 = iVar8 + 1;
            }
            lVar28 = *(longlong *)((longlong)pauVar26 + (-0x18 - (ulonglong)(uint)(iVar8 << 5)));
            if (lVar28 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar26 + (-0x10 - (ulonglong)(uint)(iVar8 << 5)))
                            ,lVar28 << 2,4);
            }
            uVar20 = uVar20 - 1 & uVar20;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        lVar10 = uVar24 * 0x20 + 0x20;
        uVar24 = uVar24 + lVar10 + 0x11;
        if (uVar24 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_378 - lVar10),uVar24,0x10);
        }
      }
      if (pfStack_448 != (float *)0x0) {
        pbVar27 = pbStack_450 + 8;
        pfVar35 = pfStack_448;
        do {
          if (*(longlong *)(pbVar27 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar27,*(longlong *)(pbVar27 + -8) * 0x14,4);
          }
          pbVar27 = pbVar27 + 0x18;
          pfVar35 = (float *)((longlong)pfVar35 + -1);
        } while (pfVar35 != (float *)0x0);
      }
      if (lStack_458 != 0) {
        pub_1406abac0(pbStack_450,lStack_458 * 0x18,8);
      }
      if (pfStack_3e8 != (float *)0x0) {
        pfVar35 = pfStack_3f0 + 2;
        pfVar32 = pfStack_3e8;
        do {
          if (*(longlong *)(pfVar35 + -2) != 0) {
            pub_1406abac0(*(byte **)pfVar35,*(longlong *)(pfVar35 + -2) * 0xc,4);
          }
          pfVar35 = pfVar35 + 6;
          pfVar32 = (float *)((longlong)pfVar32 + -1);
        } while (pfVar32 != (float *)0x0);
      }
      if (lStack_3f8 != 0) {
        pub_1406abac0((byte *)pfStack_3f0,lStack_3f8 * 0x18,8);
      }
      if (pfStack_2e0 != (float *)0x0) {
        pub_1406abac0(pbStack_3c0,(ulonglong)pfStack_2e0,1);
      }
      if (lStack_488 != 0) {
        pub_1406abac0((byte *)pfStack_480,lStack_488 << 4,4);
      }
      if (uStack_160 != 0) {
        pub_1406abac0((byte *)pfStack_158,uStack_160 << 2,4);
      }
      if (lStack_3d8 != 0) {
        pub_1406abac0((byte *)pfStack_3d0,lStack_3d8 << 4,4);
      }
      lVar28 = lStack_608;
      lVar10 = lStack_608 + 0x18;
      pdb_140e9a350();
      pcVar19 = (char *)0x1;
      LOCK();
      bVar40 = *(byte *)(lVar28 + 0x18);
      if (bVar40 == 1) {
        *(byte *)(lVar28 + 0x18) = 0;
      }
      else {
        pcVar19 = (char *)(ulonglong)bVar40;
      }
      UNLOCK();
      if (bVar40 != 1) {
        pcVar19 = (char *)pdb_142dbcef0(lVar10,0);
      }
      return pcVar19;
    }
    pfStack_520 = *(float **)pbStack_3e0;
    fVar42 = *(float *)(pbStack_3e0 + 8);
    pfStack_2a8 = pfStack_520;
    uVar47 = pdb_140315970(&uStack_1f0);
    uStack_428 = pdb_140dedfe0(uVar47);
    fVar64 = *(float *)(auStack_101._1_8_ + 0x284) + _DAT_143305788;
    if (((*(float *)(auStack_101._1_8_ + 0x284) <= 0.0) || (fVar42 != fVar64)) ||
       (NAN(fVar42) || NAN(fVar64))) {
      if (pfStack_448 <= pfStack_2a8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfStack_2a8,pfStack_448,&UNK_1433099b8);
      }
      pfStack_418 = *(float **)(pbStack_450 + (longlong)pfStack_2a8 * 0x18 + 8);
      lVar10 = *(longlong *)(pbStack_450 + (longlong)pfStack_2a8 * 0x18 + 0x10);
    }
    else {
      pfStack_418 = (float *)0x4;
      lVar10 = 0;
    }
    cVar6 = pdb_140b77b50(param_11);
    if (cVar6 == '\0') {
      fVar64 = (float)pdb_140930390(auStack_101._1_8_);
      fVar44 = (float)pdb_140930390(auStack_101._1_8_);
      bVar39 = fVar42 < fVar64 + _DAT_142f60fec || fVar44 + _DAT_142e3787c <= fVar42;
    }
    else {
      fVar64 = (float)pdb_140930390(auStack_101._1_8_);
      bVar39 = fVar64 != fVar42;
    }
    lVar15 = lStack_460;
    lVar28 = lStack_468;
    if (cStack_109 == '\0') {
      uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
    }
    else {
      if ((pfStack_150 == (float *)0x0) ||
         (pfStack_158 + (longlong)pfStack_150 + -1 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433099d0);
      }
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,
                            -(uint)(pfStack_158[(longlong)pfStack_150 + -1] == fVar42)) &
                   0xffffffff00000001;
    }
    if ((((bVar39 ^ 1U) & (byte)iStack_124) == 1) && (cStack_470 != '\0')) {
      lVar17 = pdb_140df1a80(piStack_260);
      bVar39 = lVar17 == lVar15 || lVar17 == lVar28;
    }
    pbStack_3e0 = pbStack_3e0 + 0x10;
    lVar28 = (longlong)pfStack_150 << 2;
    pfVar35 = (float *)0xffffffffffffffff;
    do {
      if (lVar28 == 0) {
        pfVar35 = (float *)0x0;
        break;
      }
      lVar15 = (longlong)pfVar35 + 1;
      pfVar35 = (float *)((longlong)pfVar35 + 1);
      lVar28 = lVar28 + -4;
    } while ((pfStack_158[lVar15] != fVar42) || (NAN(pfStack_158[lVar15]) || NAN(fVar42)));
    fVar64 = (float)pdb_140930390(auStack_101._1_8_);
    fVar42 = (float)(~-(uint)(fVar64 == fVar42) & (uint)fVar42 |
                    (uint)(fVar42 + _DAT_1433096e4) & -(uint)(fVar64 == fVar42));
    auVar60 = ZEXT416((uint)fVar42);
    if (CONCAT71(uStack_46f,cStack_470) == 0) goto LAB_1414319b2;
    fVar64 = (float)pdb_14092f8b0(auStack_101._1_8_);
  } while (!(bool)(fVar42 != fVar64 & bVar39));
  goto LAB_1414319bc;
LAB_1414346d0:
  do {
    fVar41 = pfStack_158[(longlong)pfVar32];
    if ((fVar41 != pfStack_158[(longlong)pfVar35 + -1]) ||
       (NAN(fVar41) || NAN(pfStack_158[(longlong)pfVar35 + -1]))) {
      pfStack_158[(longlong)pfVar35] = fVar41;
      pfVar31 = (float *)((longlong)pfVar35 + 1);
      fVar41 = pfStack_158[(longlong)pfVar32 + 1];
      pfVar14 = pfStack_158 + (longlong)pfVar35;
      if ((fVar41 != *pfVar14) || (pfVar35 = pfVar31, NAN(fVar41) || NAN(*pfVar14)))
      goto LAB_1414346ef;
LAB_1414346c7:
      pfVar32 = (float *)((longlong)pfVar32 + 2);
      if (pfStack_150 == pfVar32) break;
      goto LAB_1414346d0;
    }
    fVar41 = pfStack_158[(longlong)pfVar32 + 1];
    pfVar31 = pfVar35;
    if ((fVar41 == pfStack_158[(longlong)pfVar35 + -1]) &&
       (!NAN(fVar41) && !NAN(pfStack_158[(longlong)pfVar35 + -1]))) goto LAB_1414346c7;
LAB_1414346ef:
    pfStack_158[(longlong)pfVar31] = fVar41;
    pfVar35 = (float *)((longlong)pfVar31 + 1);
    pfVar32 = (float *)((longlong)pfVar32 + 2);
  } while (pfStack_150 != pfVar32);
  goto LAB_14142ed06;
LAB_14142f920:
  uStack_f2 = 1;
  fVar44 = (float)pdb_140deec20(pfVar14);
  uStack_f2 = 1;
  fVar46 = (float)pdb_140deec10(pfVar14);
  uVar23 = (uint)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
  if (fVar44 < fVar46 * fVar64) {
    uStack_f2 = 1;
    pdb_140deec20(pfVar14);
    uStack_f2 = 1;
    pdb_140deec20(pfVar14);
    uStack_f2 = 1;
    pdb_140deec10(pfVar14);
    uStack_f2 = 1;
    pdb_140deec50(pfVar14);
    uStack_f2 = 1;
    in_stack_fffffffffffff998 = (undefined1 (*) [16])((ulonglong)uVar23 << 0x20);
    pdb_140deead0(&uStack_1e8);
    uStack_f2 = 1;
    pdb_140deec20(&uStack_1e8);
    uStack_f2 = 1;
    cVar6 = pdb_140deec60(&uStack_1e8);
LAB_14142f9f5:
    if (cVar6 != '\0') {
      fVar44 = pfVar36[1];
      fVar46 = (float)uStack_1e8;
      if (fVar44 <= (float)uStack_1e8) {
        fVar46 = fVar44;
      }
      fVar44 = (float)(~-(uint)NAN(fVar44) & (uint)fVar46 |
                      -(uint)NAN(fVar44) & (uint)(float)uStack_1e8);
      pfVar36[1] = fVar44;
      fVar46 = (float)uStack_1e0;
      if ((float)uStack_1e0 <= fVar44) {
        fVar46 = fVar44;
      }
      pfVar36[2] = (float)(-(uint)NAN(fVar44) & (uint)(float)uStack_1e0 |
                          ~-(uint)NAN(fVar44) & (uint)fVar46);
    }
  }
  goto LAB_14142f7b0;
LAB_1414313fd:
  do {
    if (CONCAT71(uStack_46f,cStack_470) == 0) {
LAB_1414313d7:
      pfVar35[(longlong)pfStack_278] = *(float *)((longlong)pfVar35 + (longlong)pfVar31);
      pfStack_278 = (float *)((longlong)pfStack_278 + 1);
    }
    else {
      fVar43 = *(float *)((longlong)pfVar35 + (longlong)pfVar31);
      fVar44 = uStack_250._4_4_;
      pfStack_148 = pfVar31;
      pfStack_120 = pfVar14;
      fVar46 = (float)pdb_140930390(auStack_101._1_8_);
      pfVar31 = pfStack_148;
      pfVar14 = pfStack_120;
      pfVar35 = pfStack_168;
      if (fVar44 <= fVar46) goto LAB_1414313d7;
      pdb_140b77a00(param_11);
      fVar44 = (float)pdb_140de8220();
      pfVar31 = pfStack_148;
      pfVar14 = pfStack_120;
      pfVar35 = pfStack_168;
      if (fVar44 < fVar41) {
        pdb_140b77bc0(&uStack_1e8);
        lVar10 = pdb_140a84d90(&uStack_1e8);
        fVar44 = *(float *)(lVar10 + lStack_280) + _DAT_142e37ae0;
        if (fVar44 <= 0.0) {
          fVar44 = 0.0;
        }
        fVar46 = (float)uStack_250 * fVar64 + (float)uStack_258 * fVar64;
        pfVar31 = pfStack_148;
        pfVar14 = pfStack_120;
        pfVar35 = pfStack_168;
        if ((fVar46 - fVar44 * fVar64 <= fVar43) && (fVar43 <= fVar44 * fVar64 + fVar46))
        goto LAB_1414313d7;
      }
    }
    pfVar31 = pfVar31 + 1;
    pfVar14 = (float *)((longlong)pfVar14 + 1);
  } while (pfVar14 != (float *)0x0);
LAB_141430012:
  pfStack_130 = pfStack_278;
LAB_141430020:
  pfVar35 = pfStack_130;
  lVar10 = (longlong)pfStack_150 << 2;
  pfVar32 = (float *)0xffffffffffffffff;
  do {
    if (lVar10 == 0) {
      pfVar32 = (float *)0x0;
      break;
    }
    lVar28 = (longlong)pfVar32 + 1;
    pfVar32 = (float *)((longlong)pfVar32 + 1);
    lVar10 = lVar10 + -4;
  } while ((pfStack_158[lVar28] != uStack_258._4_4_) ||
          (NAN(pfStack_158[lVar28]) || NAN(uStack_258._4_4_)));
  if (pfStack_130 == (float *)0x0) {
    pbVar16 = (byte *)0x1;
    pfVar14 = (float *)0x0;
  }
  else {
    pdb_14007ee60();
    pbVar16 = pub_1406abae0((ulonglong)pfVar35,1);
    pfVar14 = pfStack_130;
    if (pbVar16 == (byte *)0x0) {
      uStack_f3 = 1;
      pdb_142dc7e2a(1,pfVar35);
      goto LAB_141434a6c;
    }
  }
  pfVar31 = pfStack_3f0;
  uStack_2a0 = pfVar35;
  pfStack_290 = pfVar35;
  pfStack_168 = pfStack_138 + (longlong)pfVar14;
  pfStack_268 = pfStack_3e8;
  pbStack_3e0 = (byte *)((longlong)pfVar32 * 3);
  pfVar35 = (float *)0x0;
  pfVar14 = pfVar32;
  pfVar36 = pfStack_138;
  uStack_338 = pfVar32;
  pbStack_298 = pbVar16;
  if (pfStack_138 != pfStack_168) {
    do {
      fVar43 = fStack_108;
      if (pfStack_268 <= pfVar14) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar14,pfStack_268,&UNK_143309b08);
      }
      fVar64 = *pfVar36;
      pfVar36 = pfVar36 + 1;
      lVar10 = *(longlong *)(pfVar31 + (longlong)pfVar32 * 6 + 4);
      if (lVar10 != 0) {
        lVar28 = *(longlong *)(pfVar31 + (longlong)pfVar32 * 6 + 2);
        lVar15 = 0;
        do {
          if (*(float *)(lVar28 + lVar15) <= fVar64) {
            fVar44 = *(float *)(lVar28 + 4 + lVar15);
            if (*(char *)(lVar28 + 8 + lVar15) == '\0') {
              if (fVar64 <= fVar44) goto LAB_141430281;
            }
            else if (fVar64 < fVar44) {
LAB_141430281:
              if (pfStack_290 <= pfVar35) {
                uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pfVar35,pfStack_290,&UNK_143309b38);
              }
              pbStack_298[(longlong)pfVar35] = 1;
              pfVar35 = (float *)((longlong)pfVar35 + 1);
              goto joined_r0x0001414302a7;
            }
          }
          lVar15 = lVar15 + 0xc;
        } while (lVar10 * 0xc != lVar15);
      }
      if (NAN(fVar64 / fStack_108)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      pfStack_120 = (float *)((longlong)pfVar35 + 1);
      fVar44 = (float)pub_142e32a70();
      uStack_f1 = 1;
      pfStack_278 = (float *)(ulonglong)(uint)uStack_258._4_4_;
      uStack_270 = 0;
      uStack_26c = 0;
      fVar64 = uStack_258._4_4_;
      uStack_1e8._0_4_ = (float)pdb_14007ee60();
      uStack_f1 = 1;
      uStack_1e8._4_4_ = fVar64;
      pdb_140dea260(&uStack_518,&uStack_1e8);
      fVar41 = (fVar43 * (float)(~-(uint)(fVar44 < 0.0) & (uint)fVar44 |
                                (uint)(fVar44 + fVar41) & -(uint)(fVar44 < 0.0))) / fStack_108;
      pauStack_248 = (undefined1 (*) [16])CONCAT44(pauStack_248._4_4_,fVar41);
      if ((fVar41 < 0.0) || (_DAT_142e36f28 < fVar41)) {
        uStack_1e8 = (undefined1 (*) [16])&pauStack_248;
        uStack_1e0 = pdb_140f70fc0;
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&uStack_1e8,&UNK_143309b20);
      }
      pfStack_148 = (float *)CONCAT44(pfStack_148._4_4_,uStack_250._4_4_);
      uStack_f1 = 1;
      uStack_43c = pdb_140a850d0(piStack_288);
      uStack_f1 = 1;
      fStack_438 = fVar41;
      cVar6 = pdb_1408ff980(pfStack_2d8);
      fVar41 = _DAT_142e3c608;
      if (cVar6 == '\0') {
        fVar41 = 0.0;
      }
      uStack_f1 = 1;
      pdb_140df4520(&uStack_1e8,&uStack_43c);
      fVar46 = uStack_1e8._4_4_;
      fVar64 = (float)uStack_1e8;
      fVar43 = fStack_510;
      fVar66 = (float)uStack_1e0;
      fVar67 = (float)uStack_518;
      uVar24 = (ulonglong)uStack_518 >> 0x20;
      uStack_f1 = 1;
      pdb_140df4520(&uStack_1e8,&uStack_43c);
      fVar45 = uStack_1e8._4_4_;
      fVar44 = (float)uStack_1e8;
      fVar54 = (float)uStack_1e0;
      uStack_f1 = 1;
      pdb_140de88f0(&uStack_1e8);
      uStack_1b0._0_4_ = fVar54 * fVar41 * _DAT_142e36f38 + fVar66 * _DAT_142e37988 + fVar43;
      fVar68 = pfStack_278._0_4_ - pfStack_148._0_4_;
      fVar61 = (float)uStack_1e0 + (float)uStack_1e0;
      fVar66 = (float)uStack_1e0 * fVar61;
      fVar69 = uStack_1e8._4_4_ + uStack_1e8._4_4_;
      fVar43 = fVar69 * (float)uStack_1e8;
      fVar62 = (float)uStack_1e8 * ((float)uStack_1e8 + (float)uStack_1e8);
      fVar58 = ((float)uStack_1e8 + (float)uStack_1e8) * uStack_1e0._4_4_;
      fVar63 = uStack_1e0._4_4_ * fVar61;
      fVar54 = fVar61 * (float)uStack_1e8 - fVar69 * uStack_1e0._4_4_;
      fVar59 = fVar58 + fVar61 * uStack_1e8._4_4_;
      fVar65 = _DAT_142e36f28 - (fVar62 + uStack_1e8._4_4_ * fVar69);
      uStack_1c0._4_4_ = fVar41 + (float)uStack_2b8;
      uStack_1c8._0_4_ = uStack_1c0._4_4_ * (fVar69 * uStack_1e0._4_4_ + fVar61 * (float)uStack_1e8)
      ;
      uStack_1c8._4_4_ = uStack_1c0._4_4_ * (fVar61 * uStack_1e8._4_4_ - fVar58);
      uStack_1c0._0_4_ = uStack_1c0._4_4_ * fVar65;
      uStack_1c0._4_4_ = uStack_1c0._4_4_ * fVar65;
      uStack_1e8 = (undefined1 (*) [16])
                   CONCAT44((fVar43 + fVar63) * _UNK_1433096d4,
                            (_DAT_142e36f28 - (uStack_1e8._4_4_ * fVar69 + fVar66)) * _DAT_1433096d0
                           );
      uStack_1e0 = (code *)CONCAT44(fVar54 * _UNK_1433096dc,fVar54 * _UNK_1433096d8);
      uStack_1d8 = (float *)CONCAT44((float)((uint)fVar68 & _UNK_142e377e4) *
                                     (_DAT_142e36f28 - (fVar66 + fVar62)),
                                     (float)((uint)fVar68 & _DAT_142e377e0) * (fVar43 - fVar63));
      uStack_1d0 = (float *)CONCAT44((float)((uint)fVar68 & _UNK_142e377ec) * fVar59,
                                     (float)((uint)fVar68 & _UNK_142e377e8) * fVar59);
      auStack_1b8._4_4_ = fVar41 * fVar45 * _UNK_142e61234 + fVar46 * _UNK_143009bd4 + (float)uVar24
      ;
      auStack_1b8._0_4_ = fVar41 * fVar44 * _DAT_142e61230 + fVar64 * _DAT_143009bd0 + fVar67;
      uStack_1b0._4_4_ = (float)uStack_1b0;
      uStack_f1 = 1;
      pdb_140e07fe0(&uStack_318,&uStack_1e8);
      uStack_f1 = 1;
      iVar8 = pdb_140315970(&uStack_1f0);
      uStack_f1 = 1;
      uVar47 = pdb_1409012c0(*(float *)(auStack_101._1_8_ + 0x274));
      uStack_f1 = 1;
      pdb_140a77410(&uStack_1e8);
      pcVar19 = pcStack_340;
      pauStack_240 = (undefined1 (*) [16])CONCAT71(uStack_30f,uStack_310);
      auStack_238._4_4_ = uStack_304;
      auStack_238._0_4_ = fStack_308;
      auStack_238._8_8_ = uStack_300;
      auStack_228._4_4_ = uStack_2f4;
      auStack_228._0_4_ = fStack_2f8;
      auStack_228._8_8_ = uStack_2f0;
      pauStack_248 = uStack_318;
      uStack_218 = (ulonglong)(uint)((int)pfVar35 + iVar8) << 0x20;
      iStack_20c = 0;
      pfStack_208 = pfStack_1a8;
      pfStack_200 = pfStack_1a0;
      uStack_f1 = 1;
      uStack_210 = uVar47;
      cVar6 = pdb_1413f6d90(puStack_348);
      pfVar35 = pfStack_120;
      pfVar14 = uStack_338;
      fVar41 = _DAT_142e36f28;
      if (cVar6 != '\0') {
        *pcVar19 = '\x01';
      }
joined_r0x0001414302a7:
    } while (pfVar36 != pfStack_168);
  }
  if (CONCAT71(uStack_46f,cStack_470) != 0) {
    fVar41 = uStack_250._4_4_;
    uStack_f1 = 1;
    fVar43 = (float)pdb_140930390(auStack_101._1_8_);
    if (fVar43 < fVar41) goto LAB_1414301b0;
  }
  pfVar35 = pfStack_130;
  fVar41 = (float)uStack_250;
  if (pfStack_130 == pfStack_140) {
    uStack_f1 = 1;
    pdb_142d89720(&pfStack_140);
  }
  pfVar32 = pfStack_290;
  pfStack_138[(longlong)pfVar35] = fVar41;
  pfStack_130 = (float *)((longlong)pfVar35 + 1);
  if (pfStack_290 == uStack_2a0) {
    uStack_f1 = 1;
    pdb_142d894d0(&uStack_2a0);
  }
  pbStack_298[(longlong)pfVar32] = 0;
  pfStack_290 = (float *)((longlong)pfVar32 + 1);
LAB_1414301b0:
  pfStack_120 = pfStack_138 + (longlong)pfStack_130;
  bVar39 = true;
  pfVar32 = pfStack_138;
  pfVar35 = (float *)0x0;
  pfVar14 = uStack_3a8;
  pfVar31 = pfStack_120;
  fVar64 = _DAT_142e36f50;
  fVar43 = _DAT_142e37ad4;
  uVar20 = _DAT_142e377e0;
LAB_1414306e0:
  while (pfVar36 = pfVar14, pfVar21 = pfVar35, fVar41 = _DAT_142e36f28, pfVar32 != pfVar31) {
    pfVar35 = pfVar32 + 1;
    pfVar25 = pfVar35;
    pfVar14 = pfVar32;
    if (bVar39) {
      if (pfVar35 == pfVar31) break;
      pfVar25 = pfVar32 + 2;
      pfVar36 = pfVar32;
      pfVar14 = pfVar35;
    }
    pfVar32 = pfVar25;
    if (pfStack_290 <= pfVar21) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfVar21,pfStack_290,&UNK_143309a90);
    }
    pfVar35 = (float *)((longlong)pfVar21 + 1);
    bVar39 = false;
    if (pbStack_298[(longlong)pfVar21] == 0) {
      if (pfStack_290 <= pfVar35) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar35,pfStack_290,&UNK_143309aa8);
      }
      bVar39 = false;
      if (pbStack_298[(longlong)pfVar35] == 0) {
        fVar41 = *pfVar36;
        fVar44 = *pfVar14;
        fVar46 = fVar44 * fVar64 + fVar41 * fVar64;
        lVar10 = lStack_3c8 << 4;
        pfVar36 = pfStack_3d0;
        do {
          pfVar25 = pfVar36;
          if (lVar10 == 0) {
            cStack_10b = '\0';
            fVar64 = (float)((uint)(fVar44 - fVar41) & uVar20);
            uStack_3a8 = pfVar14;
            pfStack_278 = pfVar35;
            if ((_DAT_142e37830 <= fVar64) || (fVar64 <= _DAT_142e36f50)) goto LAB_141430975;
            lVar28 = *(longlong *)(pbVar27 + uVar49 * 0x18 + 8);
            lVar15 = *(longlong *)(pbVar27 + uVar49 * 0x18 + 0x10);
            lVar10 = lVar28;
            goto LAB_141430820;
          }
          lVar10 = lVar10 + -0x10;
          pfVar36 = pfVar25 + 4;
        } while ((pfVar25[2] <= fVar46) || (fVar46 < *pfVar25));
        bVar39 = false;
      }
    }
  }
  uStack_3a8 = pfVar36;
  if (iStack_124 == 0) {
    uStack_1d8 = pfStack_130;
    uStack_1e8 = (undefined1 (*) [16])pfStack_140;
    uStack_1e0 = (code *)pfStack_138;
    uStack_f1 = 0;
    pdb_141407330(&pauStack_248,&pauStack_378,auStack_328._0_8_,&uStack_1e8);
    pfVar35 = uStack_408;
    if ((!SBORROW8(0,(longlong)pauStack_248)) && (pauStack_248 != (undefined1 (*) [16])0x0)) {
      pub_1406abac0((byte *)pauStack_240,(longlong)pauStack_248 << 2,4);
      pfVar35 = uStack_408;
    }
    pfVar32 = pfStack_2a8;
    uVar24 = uStack_2d0;
    uVar20 = _DAT_142e377e0;
    fVar41 = _DAT_142e36f28;
    uStack_408 = pfVar35;
    if (uStack_2a0 != (float *)0x0) {
      pub_1406abac0(pbStack_298,(ulonglong)uStack_2a0,1);
    }
    auStack_328._0_8_ = uVar24;
    fVar64 = _DAT_142e36f50;
    fVar43 = _DAT_142e37ad4;
  }
  else {
    pfVar35 = uStack_408;
    if (uStack_2a0 != (float *)0x0) {
      pub_1406abac0(pbStack_298,(ulonglong)uStack_2a0,1);
      pfVar35 = uStack_408;
    }
    pfVar32 = pfStack_2a8;
    uVar24 = uStack_2d0;
    uStack_408 = pfVar35;
    if (pfStack_140 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_138,(longlong)pfStack_140 << 2,4);
    }
    auStack_328._0_8_ = uVar24;
  }
  goto LAB_14142f561;
  while( true ) {
    uStack_f1 = 1;
    fVar46 = (float)pdb_140deec20(lVar17);
    fVar43 = _DAT_142e37ad4;
    if ((fVar41 <= fVar46) && (fVar46 <= fVar44)) break;
LAB_141430820:
    do {
      lVar17 = lVar10;
      if (lVar17 == lVar15 * 0x14 + lVar28) goto LAB_141430975;
      uStack_f1 = 1;
      fVar46 = (float)pdb_140deec10(lVar17);
      lVar10 = lVar17 + 0x14;
      fVar43 = _DAT_142e37ad4;
    } while (_DAT_142e37ad4 <= (float)((uint)((fVar44 - fVar41) - fVar46) & _DAT_142e377e0));
  }
  uStack_f1 = 1;
  in_stack_fffffffffffff998 = pauStack_2e8;
  in_stack_fffffffffffff9a0 = auStack_2c8._0_8_;
  cVar6 = pdb_141438080();
  uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffff9a0 >> 0x20);
  fVar43 = _DAT_142e37ad4;
  if (cVar6 == '\0') {
    uStack_f1 = 1;
    pdb_140930390(auStack_101._1_8_);
    uStack_1e8 = (undefined1 (*) [16])uStack_258;
    uStack_1e0 = (code *)uStack_250;
    uStack_f1 = 1;
    in_stack_fffffffffffff9a0 = CONCAT44(uVar47,fStack_108);
    in_stack_fffffffffffff998 = (undefined1 (*) [16])&cStack_10b;
    in_stack_fffffffffffff9a8 = (float *)auStack_101._1_8_;
    pdb_1424bc2e0(lVar17,&uStack_1e8);
    fVar43 = _DAT_142e37ad4;
  }
LAB_141430975:
  if (cStack_10b == '\0') {
    uStack_f1 = 1;
    fVar46 = (float)pdb_140deec50(&uStack_258);
    fVar43 = _DAT_142e37ad4;
    if (_DAT_142e37ae4 <= fVar64 / fVar46) {
      uStack_f1 = 1;
      iVar8 = pdb_140315970(&uStack_1f0);
      fVar43 = fVar41 * _DAT_142e37878;
      uVar20 = (uint)(longlong)fVar43 |
               (uint)(longlong)(fVar43 - _DAT_142e36f2c) & (uint)((longlong)fVar43 >> 0x3f);
      if (fVar43 < 0.0) {
        uVar20 = 0;
      }
      if (_DAT_142e36f30 < fVar43) {
        uVar20 = 0xffffffff;
      }
      fVar43 = fVar44 * _DAT_142e37878;
      uVar23 = (uint)(longlong)fVar43 |
               (uint)(longlong)(fVar43 - _DAT_142e36f2c) & (uint)((longlong)fVar43 >> 0x3f);
      if (fVar43 < 0.0) {
        uVar23 = 0;
      }
      if (_DAT_142e36f30 < fVar43) {
        uVar23 = 0xffffffff;
      }
      uStack_f1 = 1;
      uStack_4d0 = pdb_140dedfe0(iVar8 + uVar23 + uVar20 + auStack_328._0_4_);
      uStack_f1 = 1;
      fVar45 = (float)pdb_140e02880(&uStack_4d0);
      fVar64 = (fVar64 / fVar46 + _DAT_143008210) * _DAT_142e37adc;
      fVar43 = 0.0;
      if (0.0 <= fVar64) {
        fVar43 = fVar64;
      }
      fVar64 = _DAT_142e36f28;
      if (fVar43 <= _DAT_142e36f28) {
        fVar64 = fVar43;
      }
      fVar64 = (_DAT_142e3788c - (fVar64 + fVar64)) * fVar64 * fVar64;
      fVar43 = _DAT_142e37ad4;
      if (fVar45 < fVar64 * _DAT_142e37988 + (_DAT_142e36f28 - fVar64)) {
        if (pfStack_3e8 <= uStack_338) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_338,pfStack_3e8,&UNK_143309ac0);
        }
        lVar28 = *(longlong *)(pfStack_3f0 + (longlong)pbStack_3e0 * 2 + 2);
        lVar10 = lVar28 + *(longlong *)(pfStack_3f0 + (longlong)pbStack_3e0 * 2 + 4) * 0xc;
        do {
          if (lVar28 == lVar10) {
            uStack_f1 = 1;
            fVar43 = (float)pdb_140e02880(&uStack_4d0);
            fVar45 = fVar44 * _DAT_142e3b1d8;
            fVar66 = fVar41 * _DAT_14304ab90;
            fVar46 = uStack_258._4_4_;
            fVar64 = uStack_250._4_4_;
            if (_DAT_142e36f50 < fVar43) {
              fVar46 = uStack_250._4_4_;
              fVar64 = uStack_258._4_4_;
            }
            fVar69 = fVar41 * _DAT_143007998;
            fVar54 = fVar44 * _DAT_143007998;
            fVar46 = fVar46 + _DAT_142e3b1d8;
            fVar64 = fVar64 + _DAT_142e3b1d8;
            uStack_428 = CONCAT44(uStack_258._4_4_,fVar41);
            fStack_41c = uStack_250._4_4_;
            puVar29 = *(undefined8 **)(pbVar27 + uVar49 * 0x18 + 8);
            puVar9 = (undefined8 *)
                     ((longlong)puVar29 + *(longlong *)(pbVar27 + uVar49 * 0x18 + 0x10) * 0x14);
            fStack_420 = fVar44;
            goto LAB_141430c36;
          }
          uStack_1e8 = (undefined1 (*) [16])CONCAT44(fVar44,fVar41);
          uStack_1e0 = (code *)((ulonglong)uStack_1e0 & 0xffffffffffffff00);
          uStack_f1 = 1;
          cVar6 = pdb_1419ba150(lVar28,&uStack_1e8);
          lVar28 = lVar28 + 0xc;
          fVar43 = _DAT_142e37ad4;
        } while (cVar6 == '\0');
      }
    }
  }
  goto LAB_1414306a3;
  while( true ) {
    uStack_1e0._0_4_ = (float)puVar29[1];
    uStack_1e8._0_4_ = (float)*puVar29;
    uStack_1e8._4_4_ = (float)((ulonglong)*puVar29 >> 0x20);
    uStack_1e8 = (undefined1 (*) [16])CONCAT44(uStack_1e8._4_4_,(float)uStack_1e8 + _DAT_142e37ad4);
    uStack_1e0._4_4_ = (float)((ulonglong)puVar29[1] >> 0x20);
    uStack_1e0 = (code *)CONCAT44(uStack_1e0._4_4_,(float)uStack_1e0 + fVar42);
    uStack_f1 = 1;
    cVar6 = pdb_140deea30(&uStack_428,&uStack_1e8);
    puVar29 = (undefined8 *)((longlong)puVar29 + 0x14);
    fVar43 = _DAT_142e37ad4;
    if (cVar6 != '\0') break;
LAB_141430c36:
    fVar43 = fStack_108;
    fVar41 = _DAT_142e36f28;
    if (puVar29 == puVar9) {
      if (NAN((fVar69 + fVar45) / fStack_108)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      fVar44 = (float)pub_142e32a70();
      if (NAN((fVar66 + fVar54) / fVar43)) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      }
      fVar45 = (float)pub_142e32a70();
      uStack_f1 = 1;
      uVar47 = pdb_14007ee60();
      uStack_1e8 = (undefined1 (*) [16])CONCAT44(fVar64,uVar47);
      uStack_f1 = 1;
      pdb_140dea260(&fStack_498,&uStack_1e8,auStack_101._1_8_);
      fVar64 = fVar45 + _DAT_142e36f28;
      uStack_f1 = 1;
      uVar47 = pdb_14007ee60();
      uStack_1e8 = (undefined1 (*) [16])CONCAT44(fVar46,uVar47);
      uStack_f1 = 1;
      pdb_140dea260(&fStack_4a8,&uStack_1e8);
      fVar41 = fVar43 * (float)(~-(uint)(fVar45 < 0.0) & (uint)fVar45 |
                               (uint)fVar64 & -(uint)(fVar45 < 0.0)) * _DAT_142e36f50 +
               (float)(~-(uint)(fVar44 < 0.0) & (uint)fVar44 |
                      (uint)(fVar44 + fVar41) & -(uint)(fVar44 < 0.0)) * fVar43 * _DAT_142e36f50;
      if ((byte)iStack_124 == '\0') {
        fVar64 = fVar41 / fStack_108;
        pauStack_248 = (undefined1 (*) [16])CONCAT44(pauStack_248._4_4_,fVar64);
        if ((fVar64 < 0.0) || (_DAT_142e36f28 < fVar64)) {
          uStack_1e8 = (undefined1 (*) [16])&pauStack_248;
          uStack_1e0 = pdb_140f70fc0;
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_1e8,&UNK_143309ad8);
        }
        uStack_f1 = 1;
        fVar44 = (float)pdb_140def2c0(piStack_260);
        fVar44 = fVar44 - (fStack_4a8 * _DAT_142e36f60 + fStack_498 * _DAT_142e36f60);
        fVar64 = fVar64 - (fStack_4a0 * _UNK_142e36f64 + fStack_490 * _UNK_142e36f64);
        fVar43 = _DAT_142e37ad4;
        if (_DAT_1433096e0 < SQRT(fVar64 * fVar64 + fVar44 * fVar44)) break;
      }
      fVar41 = fVar41 / fStack_108;
      pauStack_248 = (undefined1 (*) [16])CONCAT44(pauStack_248._4_4_,fVar41);
      if ((fVar41 < 0.0) || (_DAT_142e36f28 < fVar41)) {
        uStack_1e8 = (undefined1 (*) [16])&pauStack_248;
        uStack_1e0 = pdb_140f70fc0;
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&uStack_1e8,&UNK_143309af0);
      }
      uStack_f1 = 1;
      uStack_4d8 = pdb_140a850d0(piStack_288);
      uStack_f1 = 1;
      fStack_4d4 = fVar41;
      pdb_140df4520(&uStack_1e8,&uStack_4d8);
      pfVar35 = (float *)uStack_1e8;
      fVar45 = fStack_490;
      fVar46 = fStack_494;
      fVar44 = fStack_498;
      fVar64 = fStack_4a0;
      fVar43 = fStack_4a4;
      fVar41 = fStack_4a8;
      fVar66 = (float)uStack_1e0;
      fVar54 = fStack_4a0 - fStack_490;
      fVar69 = fStack_4a8 - fStack_498;
      fVar58 = fStack_4a4 - fStack_494;
      fVar59 = _DAT_142e36f28 / SQRT(fVar58 * fVar58 + fVar69 * fVar69 + fVar54 * fVar54);
      pauStack_248 = (undefined1 (*) [16])CONCAT44(fVar59 * fVar58,fVar59 * fVar69);
      pauStack_240 = (undefined1 (*) [16])CONCAT44(pauStack_240._4_4_,fVar59 * fVar54);
      uStack_f1 = 1;
      pdb_140de8fd0(&uStack_1e8,&pauStack_248);
      fVar65 = fVar66 * _DAT_142e3c608 + fVar66 * _DAT_142e3c608 + fVar45;
      fVar59 = SUB84(pfVar35,0) * _DAT_143021a40;
      fVar62 = (float)((ulonglong)pfVar35 >> 0x20) * _UNK_143021a44;
      fVar66 = (float)uStack_1e0 * _DAT_14300ccf0 * _DAT_142e377d0 +
               uStack_1e8._4_4_ * _DAT_14300ccf0 * _DAT_142e377c0 +
               (float)uStack_1e8 * _DAT_14300cce0 * _DAT_142e377b0 +
               uStack_1e0._4_4_ * _DAT_14300cce0;
      fVar54 = (float)uStack_1e0 * _UNK_14300ccf4 * _UNK_142e377d4 +
               uStack_1e8._4_4_ * _UNK_14300ccf4 * _UNK_142e377c4 +
               (float)uStack_1e8 * _UNK_14300cce4 * _UNK_142e377b4 +
               uStack_1e0._4_4_ * _UNK_14300cce4;
      fVar69 = (float)uStack_1e0 * _UNK_14300ccf8 * _UNK_142e377d8 +
               uStack_1e8._4_4_ * _UNK_14300ccf8 * _UNK_142e377c8 +
               (float)uStack_1e8 * _UNK_14300cce8 * _UNK_142e377b8 +
               uStack_1e0._4_4_ * _UNK_14300cce8;
      fVar58 = (float)uStack_1e0 * _UNK_14300ccfc * _UNK_142e377dc +
               uStack_1e8._4_4_ * _UNK_14300ccfc * _UNK_142e377cc +
               (float)uStack_1e8 * _UNK_14300ccec * _UNK_142e377bc +
               uStack_1e0._4_4_ * _UNK_14300ccec;
      fVar41 = fVar44 - fVar41;
      fVar43 = fVar46 - fVar43;
      fVar45 = fVar45 - fVar64;
      auStack_1b8._0_4_ = fVar59 + fVar59 + fVar44;
      auStack_1b8._4_4_ = fVar62 + fVar62 + fVar46;
      uStack_1b0._0_4_ = fVar65;
      uStack_1b0._4_4_ = fVar65;
      fVar65 = fVar69 + fVar69;
      fVar64 = fVar54 + fVar54;
      fVar62 = fVar66 * (fVar66 + fVar66);
      fVar44 = (fVar66 + fVar66) * fVar58;
      fVar59 = fVar65 * fVar66 - fVar64 * fVar58;
      fVar46 = fVar44 + fVar65 * fVar54;
      uStack_1c0._4_4_ = _DAT_142e36f28 - (fVar62 + fVar54 * fVar64);
      fVar41 = SQRT(fVar45 * fVar45 + fVar43 * fVar43 + fVar41 * fVar41);
      uStack_1e8 = (undefined1 (*) [16])
                   CONCAT44((fVar64 * fVar66 + fVar58 * fVar65) * _UNK_1433096d4,
                            (_DAT_142e36f28 - (fVar54 * fVar64 + fVar69 * fVar65)) * _DAT_1433096d0)
      ;
      uStack_1e0 = (code *)CONCAT44(fVar59 * _UNK_1433096dc,fVar59 * _UNK_1433096d8);
      uStack_1d8 = (float *)CONCAT44(fVar41 * (_DAT_142e36f28 - (fVar69 * fVar65 + fVar62)),
                                     fVar41 * (fVar64 * fVar66 - fVar58 * fVar65));
      uStack_1d0 = (float *)CONCAT44(fVar41 * fVar46,fVar41 * fVar46);
      uStack_1c8._0_4_ = (fVar64 * fVar58 + fVar65 * fVar66) * _DAT_1433096d0;
      uStack_1c8._4_4_ = (fVar65 * fVar54 - fVar44) * _UNK_1433096d4;
      uStack_1c0._0_4_ = uStack_1c0._4_4_ * _UNK_1433096d8;
      uStack_1c0._4_4_ = uStack_1c0._4_4_ * _UNK_1433096dc;
      uStack_f1 = 1;
      pdb_140e07fe0(&uStack_318,&uStack_1e8);
      uStack_f1 = 1;
      iVar8 = pdb_140315970(&uStack_1f0);
      uStack_f1 = 1;
      uVar47 = pdb_1409012c0(*(float *)(auStack_101._1_8_ + 0x274));
      uStack_f1 = 1;
      pdb_140a77410(&uStack_1e8);
      pcVar19 = pcStack_340;
      pauStack_240 = (undefined1 (*) [16])CONCAT71(uStack_30f,uStack_310);
      auStack_238._4_4_ = uStack_304;
      auStack_238._0_4_ = fStack_308;
      auStack_238._8_8_ = uStack_300;
      auStack_228._4_4_ = uStack_2f4;
      auStack_228._0_4_ = fStack_2f8;
      auStack_228._8_8_ = uStack_2f0;
      pauStack_248 = uStack_318;
      uStack_218 = (ulonglong)(uint)((int)pfVar21 + iVar8) << 0x20;
      iStack_20c = 0;
      pfStack_208 = pfStack_1a8;
      pfStack_200 = pfStack_1a0;
      uStack_f1 = 1;
      uStack_210 = uVar47;
      cVar6 = pdb_1413f6d90(puStack_348,&pauStack_248);
      fVar43 = _DAT_142e37ad4;
      uStack_1c8 = (float *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
      uStack_1c0 = (undefined1 (***) [16])CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      if (cVar6 != '\0') {
        *pcVar19 = '\x01';
        uStack_1c8 = (float *)CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
        uStack_1c0 = (undefined1 (***) [16])CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
      }
      break;
    }
  }
LAB_1414306a3:
  bVar39 = false;
  pfVar35 = pfStack_278;
  pfVar14 = uStack_3a8;
  pfVar31 = pfStack_120;
  fVar64 = _DAT_142e36f50;
  uVar20 = _DAT_142e377e0;
  goto LAB_1414306e0;
LAB_1414319b2:
  if (bVar39 == false) goto LAB_14143174d;
LAB_1414319bc:
  auStack_2c8 = auVar60;
  if ((byte)iStack_124 == '\0') {
    if (auStack_360._0_8_ != 0) {
      uVar24 = pdb_1400af0a0(auStack_360 + 8,&pfStack_520);
      bVar40 = (byte)(uVar24 >> 0x39);
      auVar50 = ZEXT216(CONCAT11(bVar40,bVar40));
      auVar50 = pshuflw(auVar50,auVar50,0);
      lVar28 = 0;
      while( true ) {
        uVar24 = uVar24 & uStack_370;
        auVar55 = *(undefined1 (*) [16])(*pauStack_378 + uVar24);
        auVar56[0] = -(auVar55[0] == auVar50[0]);
        auVar56[1] = -(auVar55[1] == auVar50[1]);
        auVar56[2] = -(auVar55[2] == auVar50[2]);
        auVar56[3] = -(auVar55[3] == auVar50[3]);
        auVar56[4] = -(auVar55[4] == auVar50[4]);
        auVar56[5] = -(auVar55[5] == auVar50[5]);
        auVar56[6] = -(auVar55[6] == auVar50[6]);
        auVar56[7] = -(auVar55[7] == auVar50[7]);
        auVar56[8] = -(auVar55[8] == auVar50[0]);
        auVar56[9] = -(auVar55[9] == auVar50[1]);
        auVar56[10] = -(auVar55[10] == auVar50[2]);
        auVar56[0xb] = -(auVar55[0xb] == auVar50[3]);
        auVar56[0xc] = -(auVar55[0xc] == auVar50[4]);
        auVar56[0xd] = -(auVar55[0xd] == auVar50[5]);
        auVar56[0xe] = -(auVar55[0xe] == auVar50[6]);
        auVar56[0xf] = -(auVar55[0xf] == auVar50[7]);
        uVar34 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar34;
        while (uVar34 != 0) {
          uVar23 = 0;
          for (uVar3 = uVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          uVar30 = uVar23 + uVar24 & uStack_370;
          if (pfStack_2a8 == *(float **)pauStack_378[uVar30 * -2 + -2]) {
            uStack_1e8 = *(undefined1 (**) [16])pauStack_378[uVar30 * -2 + -1];
            uStack_1e0 = (code *)((longlong)uStack_1e8 +
                                 *(longlong *)(pauStack_378[uVar30 * -2 + -1] + 8) * 4);
            uStack_1d8 = (float *)auStack_101._1_8_;
            pdb_1413ebe70(&pauStack_248,&uStack_1e8);
            pauVar18 = (undefined1 (*) [16])((longlong)pfStack_2a8 + 1);
            uStack_318 = pauVar18;
            if (auStack_360._0_8_ == 0) goto LAB_141431c04;
            uVar24 = pdb_1400af0a0(auStack_360 + 8,&uStack_318);
            bVar40 = (byte)(uVar24 >> 0x39);
            auVar50 = ZEXT216(CONCAT11(bVar40,bVar40));
            auVar50 = pshuflw(auVar50,auVar50,0);
            lVar28 = 0;
            goto LAB_141431ba3;
          }
          uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
        }
        auVar51[0] = -(auVar55[0] == -1);
        auVar51[1] = -(auVar55[1] == -1);
        auVar51[2] = -(auVar55[2] == -1);
        auVar51[3] = -(auVar55[3] == -1);
        auVar51[4] = -(auVar55[4] == -1);
        auVar51[5] = -(auVar55[5] == -1);
        auVar51[6] = -(auVar55[6] == -1);
        auVar51[7] = -(auVar55[7] == -1);
        auVar51[8] = -(auVar55[8] == -1);
        auVar51[9] = -(auVar55[9] == -1);
        auVar51[10] = -(auVar55[10] == -1);
        auVar51[0xb] = -(auVar55[0xb] == -1);
        auVar51[0xc] = -(auVar55[0xc] == -1);
        auVar51[0xd] = -(auVar55[0xd] == -1);
        auVar51[0xe] = -(auVar55[0xe] == -1);
        auVar51[0xf] = -(auVar55[0xf] == -1);
        if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x1f,0) & 1) != 0) || (SUB161(auVar51 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x37,0) & 1) != 0) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
        uVar24 = uVar24 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1433099e8);
  }
  lVar28 = pdb_140df1a80(piStack_260);
  pdb_14007ee60();
  pauStack_118 = (undefined1 (*) [16])pub_1406abab0(8,4);
  piVar11 = piStack_260;
  if (pauStack_118 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,8);
  }
  uVar47 = pdb_140df0700(piStack_260,lVar28);
  uVar48 = pdb_140df0700(piVar11,lVar28 + 1);
  *(undefined4 *)*pauStack_118 = uVar47;
  *(undefined4 *)(*pauStack_118 + 4) = uVar48;
  uVar24 = 2;
  pauStack_410 = (undefined1 (*) [16])0x2;
LAB_141431ccf:
  pfStack_140 = (float *)0x0;
  pfStack_138 = (float *)0x4;
  pfStack_130 = (float *)0x0;
  fStack_430 = fVar42 + _DAT_142f60fec;
  fStack_42c = fVar43;
  if (pfStack_2a8 != (float *)0x0) {
    fStack_42c = 0.0;
  }
  iStack_434 = (uint)(byte)uStack_2d0 * 4;
  fStack_5b8 = _DAT_1433096e8;
  if ((byte)uStack_2d0 == 0) {
    fStack_5b8 = _DAT_14305a490;
    fVar43 = _DAT_142e3787c;
  }
  pauStack_4f8 = (undefined1 (*) [16])(*pauStack_118 + uVar24 * 4);
  pfStack_278 = pfStack_418 + lVar10 * 5;
  uStack_5c8 = CONCAT44(fVar43,fVar43);
  uStack_5c0 = 0;
  pfStack_148 = (float *)((ulonglong)pfStack_148 & 0xffffffff00000000);
  bVar39 = true;
  pfStack_120 = (float *)CONCAT44(pfStack_120._4_4_,fVar42 + _DAT_142e3787c);
  pauVar18 = pauStack_118;
  pauVar26 = pauStack_4f8;
  fStack_5b4 = fStack_5b8;
  fStack_5b0 = fStack_5b8;
  fStack_5ac = fStack_5b8;
LAB_141431daa:
  while (pauVar18 != pauVar26) {
    pauVar33 = (undefined1 (*) [16])(*pauVar18 + 4);
    if (bVar39) {
      pauStack_2e8 = pauVar33;
      if (pauVar33 == pauVar26) break;
      puVar5 = *pauVar18;
      pauVar18 = pauVar33;
      pauVar33 = (undefined1 (*) [16])(puVar5 + 8);
    }
    pauStack_2e8 = pauVar18;
    fVar41 = (float)pdb_140930390(auStack_101._1_8_);
    if ((float)auStack_2c8._0_4_ <= fVar41) {
LAB_141431ed7:
      pdb_1424bcd90(&uStack_2a0);
      auVar60 = auStack_2c8;
      fVar41 = _DAT_142e36f50;
      fVar42 = _DAT_142e36f28;
      pauStack_248 = (undefined1 (*) [16])0x0;
      pauStack_240 = (undefined1 (*) [16])0x4;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_238._8_8_;
      auStack_238 = auVar4 << 0x40;
      pfVar14 = pfStack_3d0 + lStack_3c8 * 4;
      pauVar18 = (undefined1 (*) [16])0x0;
      pfVar32 = pfStack_3d0;
      pauStack_500 = pauVar33;
      do {
        pfVar31 = pfStack_158 + (longlong)pfStack_150 + -1;
        do {
          pfVar36 = pfVar32;
          pfVar32 = pfStack_418;
          if (pfVar36 == pfVar14) goto LAB_141432014;
          if (pfVar31 == (float *)0x0 || pfStack_150 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143309a60);
          }
          pfVar32 = pfVar36 + 4;
          fVar43 = auVar60._0_4_;
        } while (((fVar43 != *pfVar31) || (NAN(fVar43) || NAN(*pfVar31))) &&
                (fVar43 < pfVar36[1] || pfVar36[3] < fVar43));
        uStack_1e8 = *(undefined1 (**) [16])pfVar36;
        uStack_1e0 = *(code **)(pfVar36 + 2);
        if (pauVar18 == pauStack_248) {
          pdb_142d7ef30(&pauStack_248);
        }
        *(undefined1 (**) [16])pauStack_240[(longlong)pauVar18] = uStack_1e8;
        *(code **)(pauStack_240[(longlong)pauVar18] + 8) = uStack_1e0;
        pauVar18 = (undefined1 (*) [16])(*pauVar18 + 1);
        auStack_238._0_8_ = pauVar18;
      } while( true );
    }
    pdb_140b77a00(param_11);
    pdb_140de8220();
    pdb_140b77bc0(&uStack_1e8,param_11);
    if ((char)pfStack_268 == '\0') {
      lVar10 = pdb_140a84d90(&uStack_1e8);
      pfVar32 = (float *)(lVar10 + 0x14);
    }
    else {
      lVar10 = pdb_140a84d90(&uStack_1e8);
      pfVar32 = (float *)(lVar10 + 0x10);
    }
    if (_DAT_142e36f50 <= *pfVar32 + _DAT_142e37ae0) goto LAB_141431ed7;
    bVar39 = false;
    pauVar18 = pauVar33;
  }
  uStack_1e8 = (undefined1 (*) [16])auStack_101;
  if ((float *)0x1 < pfStack_130) {
    if (pfStack_130 < (float *)0x15) {
      pdb_141460040(pfStack_138,pfStack_130,1,&uStack_1e8);
    }
    else {
      pdb_1414663f0(pfStack_138,pfStack_130,&uStack_1e8);
    }
  }
  pfVar35 = pfStack_138 + (longlong)pfStack_130 * 6;
  pfVar14 = (float *)0x0;
  pfVar32 = pfStack_138;
  while (fVar43 = _DAT_142e37ad4, fVar41 = _DAT_142e36f28, pfVar32 != pfVar35) {
    pfVar31 = pfVar32 + 6;
    pfVar14 = (float *)((longlong)pfVar14 + 1);
    pfVar36 = pfVar32 + 1;
    pfVar21 = pfVar32 + 2;
    pfVar25 = pfVar32 + 3;
    uVar24 = *(ulonglong *)(pfVar32 + 4);
    pfVar32 = pfVar31;
    uStack_550 = uVar24;
    if ((pfStack_130 <= pfVar14) ||
       (fVar41 = *pfVar36 - pfStack_138[(longlong)pfVar14 * 6 + 1],
       fVar42 = *pfVar25 - pfStack_138[(longlong)pfVar14 * 6 + 3],
       _DAT_142e3787c <=
       SQRT(fVar42 * fVar42 +
            (*pfVar21 - pfStack_138[(longlong)pfVar14 * 6 + 2]) *
            (*pfVar21 - pfStack_138[(longlong)pfVar14 * 6 + 2]) + fVar41 * fVar41))) {
      uStack_2a0 = (float *)CONCAT44(*pfVar25,*pfVar36);
      pdb_140df4540(&pauStack_248,&uStack_2a0,auStack_2c8._0_8_);
      uStack_318 = (undefined1 (*) [16])
                   CONCAT44((int)uVar24,(uint)(uVar24 >> 0x20) ^ _DAT_142e37820);
      pdb_140df4520(&uStack_1e8,&uStack_318);
      fVar64 = (float)pdb_140e02880(&uStack_428);
      pfVar31 = (float *)uStack_1e8;
      fVar42 = (float)uStack_1e0;
      fVar61 = SUB84(pauStack_248,0);
      uVar24 = (ulonglong)pauStack_248 >> 0x20;
      fVar41 = pauStack_240._0_4_;
      pdb_140df4520(&uStack_1e8,&uStack_550);
      fVar62 = SUB84(uStack_1e8,0);
      uVar30 = (ulonglong)uStack_1e8 >> 0x20;
      fVar43 = (float)uStack_1e0;
      pdb_140de88f0(&uStack_1e8);
      fVar59 = fVar64 * _DAT_142e37ad4 - (_DAT_142e36f28 - fVar64) * _DAT_142e37ad4;
      uStack_1b0._0_4_ = fVar43 * _UNK_1433097c8 + fVar41 + fVar42 * fVar59;
      fVar65 = _UNK_142e4e65c * _UNK_1433097cc + _UNK_14300b15c + _UNK_142e4e65c * _UNK_1433097b4;
      fVar58 = (float)uStack_1e0 + (float)uStack_1e0;
      fVar41 = (float)uStack_1e0 * fVar58;
      fVar44 = uStack_1e8._4_4_ + uStack_1e8._4_4_;
      fVar43 = fVar44 * (float)uStack_1e8;
      fVar54 = fVar58 * (float)uStack_1e8;
      fVar69 = fVar58 * uStack_1e8._4_4_;
      fVar66 = (float)uStack_1e8 * ((float)uStack_1e8 + (float)uStack_1e8);
      fVar64 = fVar44 * uStack_1e0._4_4_;
      fVar46 = ((float)uStack_1e8 + (float)uStack_1e8) * uStack_1e0._4_4_;
      fVar58 = uStack_1e0._4_4_ * fVar58;
      fVar42 = fVar54 - fVar64;
      fVar45 = fVar46 + fVar69;
      uStack_1c0._4_4_ = _DAT_142e36f28 - (fVar66 + uStack_1e8._4_4_ * fVar44);
      uStack_1e8 = (undefined1 (*) [16])
                   CONCAT44(fVar65 * (fVar43 + fVar58),
                            fVar65 * (_DAT_142e36f28 - (uStack_1e8._4_4_ * fVar44 + fVar41)));
      uStack_1e0 = (code *)CONCAT44(fVar65 * fVar42,fVar65 * fVar42);
      uStack_1d8 = (float *)CONCAT44((_DAT_142e36f28 - (fVar41 + fVar66)) * _UNK_1433097d4,
                                     (fVar43 - fVar58) * _DAT_1433097d0);
      uStack_1d0 = (float *)CONCAT44(fVar45 * _UNK_1433097dc,fVar45 * _UNK_1433097d8);
      uStack_1c8._0_4_ = (fVar64 + fVar54) * _DAT_1433097a0;
      uStack_1c8._4_4_ = (fVar69 - fVar46) * _UNK_1433097a4;
      uStack_1c0._0_4_ = uStack_1c0._4_4_ * _UNK_1433097a8;
      uStack_1c0._4_4_ = uStack_1c0._4_4_ * _UNK_1433097ac;
      auStack_1b8._4_4_ =
           (float)uVar30 * _UNK_1433097c4 +
           (float)uVar24 + (float)((ulonglong)pfVar31 >> 0x20) * fVar59;
      auStack_1b8._0_4_ = fVar62 * _DAT_1433097c0 + fVar61 + SUB84(pfVar31,0) * fVar59;
      uStack_1b0._4_4_ = (float)uStack_1b0;
      pdb_140e07fe0(&uStack_318,&uStack_1e8);
      iVar8 = pdb_140315970(&uStack_1f0);
      uVar47 = pdb_1409012c0(*(float *)(auStack_101._1_8_ + 0x274));
      pdb_140a77410(&uStack_1e8);
      pcVar19 = pcStack_340;
      pauStack_240 = (undefined1 (*) [16])CONCAT71(uStack_30f,uStack_310);
      auStack_238._4_4_ = uStack_304;
      auStack_238._0_4_ = fStack_308;
      auStack_228._4_4_ = uStack_2f4;
      auStack_228._0_4_ = fStack_2f8;
      auStack_228._8_8_ = uStack_2f0;
      auStack_238._8_8_ = uStack_300;
      pauStack_248 = uStack_318;
      uStack_218 = (ulonglong)(uint)(iVar8 + (int)pfStack_148._0_4_) << 0x20;
      iStack_20c = 0;
      pfStack_208 = pfStack_1a8;
      pfStack_200 = pfStack_1a0;
      uStack_210 = uVar47;
      cVar6 = pdb_1413f6d90(puStack_348,&pauStack_248);
      if (cVar6 != '\0') {
        *pcVar19 = '\x01';
      }
    }
  }
  if (pfStack_140 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_138,(longlong)pfStack_140 * 0x18,4);
  }
  if (pauStack_410 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_118,(longlong)pauStack_410 << 2,4);
  }
  goto LAB_14143174d;
LAB_141431ba3:
  uVar24 = uVar24 & uStack_370;
  auVar55 = *(undefined1 (*) [16])(*pauStack_378 + uVar24);
  auVar57[0] = -(auVar55[0] == auVar50[0]);
  auVar57[1] = -(auVar55[1] == auVar50[1]);
  auVar57[2] = -(auVar55[2] == auVar50[2]);
  auVar57[3] = -(auVar55[3] == auVar50[3]);
  auVar57[4] = -(auVar55[4] == auVar50[4]);
  auVar57[5] = -(auVar55[5] == auVar50[5]);
  auVar57[6] = -(auVar55[6] == auVar50[6]);
  auVar57[7] = -(auVar55[7] == auVar50[7]);
  auVar57[8] = -(auVar55[8] == auVar50[0]);
  auVar57[9] = -(auVar55[9] == auVar50[1]);
  auVar57[10] = -(auVar55[10] == auVar50[2]);
  auVar57[0xb] = -(auVar55[0xb] == auVar50[3]);
  auVar57[0xc] = -(auVar55[0xc] == auVar50[4]);
  auVar57[0xd] = -(auVar55[0xd] == auVar50[5]);
  auVar57[0xe] = -(auVar55[0xe] == auVar50[6]);
  auVar57[0xf] = -(auVar55[0xf] == auVar50[7]);
  uVar34 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar34;
  if (uVar34 != 0) {
LAB_141431bbd:
    uVar23 = 0;
    for (uVar3 = uVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    uVar30 = uVar23 + uVar24 & uStack_370;
    if (pauVar18 != *(undefined1 (**) [16])pauStack_378[uVar30 * -2 + -2])
    goto code_r0x000141431bd8;
    lVar28 = *(longlong *)pauStack_378[uVar30 * -2 + -1];
    uVar24 = *(ulonglong *)(pauStack_378[uVar30 * -2 + -1] + 8);
    if ((ulonglong)((longlong)pauStack_248 - auStack_238._0_8_) < uVar24) {
      in_stack_fffffffffffff998 = (undefined1 (*) [16])0x0;
      pdb_142d7f1b0(&pauStack_248,auStack_238._0_8_,uVar24,4,4);
      uVar30 = auStack_238._0_8_;
      auVar60 = auStack_2c8;
      fVar43 = _DAT_142e37ad4;
      fVar41 = _DAT_142e36f28;
    }
    else {
      pauStack_118 = pauStack_240;
      uVar30 = auStack_238._0_8_;
      if (uVar24 == 0) goto LAB_141431c9f;
    }
    uVar22 = 0;
    do {
      fVar42 = *(float *)(lVar28 + uVar22 * 4) / *(float *)(auStack_101._1_8_ + 0x290);
      uStack_2a0 = (float *)CONCAT44(uStack_2a0._4_4_,fVar42);
      pauStack_118 = pauStack_240;
      if ((fVar42 < 0.0) || (fVar41 < fVar42)) {
        auStack_2c8._0_8_ = uVar30;
        uStack_1e8 = (undefined1 (*) [16])&uStack_2a0;
        uStack_1e0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&uStack_1e8,&UNK_143308ba8);
      }
      *(float *)(*pauStack_240 + uVar30 * 4) = fVar42;
      uVar30 = uVar30 + 1;
      uVar22 = uVar22 + 1;
    } while (uVar24 != uVar22);
LAB_141431c9f:
    auStack_238._0_8_ = uVar30;
    goto LAB_141431ca6;
  }
LAB_141431be5:
  auVar52[0] = -(auVar55[0] == -1);
  auVar52[1] = -(auVar55[1] == -1);
  auVar52[2] = -(auVar55[2] == -1);
  auVar52[3] = -(auVar55[3] == -1);
  auVar52[4] = -(auVar55[4] == -1);
  auVar52[5] = -(auVar55[5] == -1);
  auVar52[6] = -(auVar55[6] == -1);
  auVar52[7] = -(auVar55[7] == -1);
  auVar52[8] = -(auVar55[8] == -1);
  auVar52[9] = -(auVar55[9] == -1);
  auVar52[10] = -(auVar55[10] == -1);
  auVar52[0xb] = -(auVar55[0xb] == -1);
  auVar52[0xc] = -(auVar55[0xc] == -1);
  auVar52[0xd] = -(auVar55[0xd] == -1);
  auVar52[0xe] = -(auVar55[0xe] == -1);
  auVar52[0xf] = -(auVar55[0xf] == -1);
  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto LAB_141431c04;
  uVar24 = uVar24 + lVar28 + 0x10;
  lVar28 = lVar28 + 0x10;
  goto LAB_141431ba3;
code_r0x000141431bd8:
  uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
  uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
  if (uVar34 == 0) goto LAB_141431be5;
  goto LAB_141431bbd;
LAB_141431c04:
  pauStack_118 = pauStack_240;
  uVar30 = auStack_238._0_8_;
LAB_141431ca6:
  uStack_1e8 = (undefined1 (*) [16])auStack_101;
  uVar24 = uVar30;
  pauStack_240 = pauStack_118;
  if (1 < uVar30) {
    if (uVar30 < 0x15) {
      pdb_141460560(pauStack_118,uVar30,1,&uStack_1e8);
    }
    else {
      pdb_141474570(pauStack_118,uVar30,&uStack_1e8);
    }
    lVar28 = 0;
    do {
      fVar43 = _DAT_142e37ad4;
      auVar60 = auStack_2c8;
      if ((*(float *)(*pauStack_118 + lVar28 * 4 + 4) == *(float *)(*pauStack_118 + lVar28 * 4)) &&
         (!NAN(*(float *)(*pauStack_118 + lVar28 * 4 + 4)) &&
          !NAN(*(float *)(*pauStack_118 + lVar28 * 4)))) {
        uVar22 = lVar28 + 2;
        uVar24 = lVar28 + 1;
        if (uVar22 < uVar30) {
          if (((int)uVar30 - (int)lVar28 & 1U) != 0) {
            fVar41 = *(float *)(*pauStack_118 + lVar28 * 4 + 8);
            if ((fVar41 != *(float *)(*pauStack_118 + lVar28 * 4)) ||
               (NAN(fVar41) || NAN(*(float *)(*pauStack_118 + lVar28 * 4)))) {
              *(float *)(*pauStack_118 + lVar28 * 4 + 4) = fVar41;
              uVar24 = lVar28 + 2;
            }
            uVar22 = lVar28 + 3;
          }
          bVar39 = uVar30 - 3 == lVar28;
          while (fVar43 = _DAT_142e37ad4, !bVar39) {
            fVar41 = *(float *)(*pauStack_118 + uVar22 * 4);
            if ((fVar41 != *(float *)(pauStack_118[-1] + uVar24 * 4 + 0xc)) ||
               (NAN(fVar41) || NAN(*(float *)(pauStack_118[-1] + uVar24 * 4 + 0xc)))) {
              *(float *)(*pauStack_118 + uVar24 * 4) = fVar41;
              uVar24 = uVar24 + 1;
            }
            fVar41 = *(float *)(*pauStack_118 + uVar22 * 4 + 4);
            if ((fVar41 != *(float *)(pauStack_118[-1] + uVar24 * 4 + 0xc)) ||
               (NAN(fVar41) || NAN(*(float *)(pauStack_118[-1] + uVar24 * 4 + 0xc)))) {
              *(float *)(*pauStack_118 + uVar24 * 4) = fVar41;
              uVar24 = uVar24 + 1;
            }
            uVar22 = uVar22 + 2;
            bVar39 = uVar30 == uVar22;
          }
        }
        break;
      }
      lVar28 = lVar28 + 1;
    } while (uVar30 - 1 != lVar28);
  }
  fVar42 = auVar60._0_4_;
  pauStack_410 = pauStack_248;
  goto LAB_141431ccf;
LAB_141432014:
  pfVar14 = pfVar32;
  if (pfVar14 != pfStack_278) {
    pfVar32 = pfVar14 + 5;
    cVar6 = *(char *)((longlong)pfVar14 + 0x11);
    if ((cVar6 == '\x06') || (cVar6 == '\t')) {
      if (cVar6 == '\x06') {
        pdb_1414dca40(&uStack_1e8);
      }
      else {
        pdb_1414dc910(&uStack_1e8,*(undefined1 *)(pfVar14 + 4));
      }
      fVar64 = uStack_2b8._4_4_;
      fVar43 = (float)uStack_2b8;
      uVar24 = (ulonglong)uStack_1d8 >> 1;
      fVar44 = pfStack_120._0_4_;
      if (uVar24 != 0) {
        if (uVar24 == 1) {
          uVar30 = 0;
        }
        else {
          lVar10 = (longlong)uStack_1d8 + -1;
          uVar30 = 0;
          do {
            uVar49 = *(undefined8 *)((longlong)uStack_1e0 + uVar30 * 2 * 4);
            *(undefined8 *)((longlong)uStack_1e0 + uVar30 * 2 * 4) =
                 *(undefined8 *)((longlong)uStack_1e0 + lVar10 * 2 * 4);
            *(undefined8 *)((longlong)uStack_1e0 + lVar10 * 2 * 4) = uVar49;
            uVar49 = *(undefined8 *)((longlong)uStack_1e0 + (uVar30 * 2 + 2) * 4);
            *(undefined8 *)((longlong)uStack_1e0 + (uVar30 * 2 + 2) * 4) =
                 *(undefined8 *)
                  ((longlong)uStack_1e0 +
                  ((longlong)uStack_1d8 * 2 + (uVar30 ^ 0x1ffffffffffffffe) * 2) * 4);
            *(undefined8 *)
             ((longlong)uStack_1e0 +
             ((longlong)uStack_1d8 * 2 + (uVar30 ^ 0x1ffffffffffffffe) * 2) * 4) = uVar49;
            uVar30 = uVar30 + 2;
            lVar10 = lVar10 + -2;
          } while ((uVar24 & 0xfffffffffffffffe) != uVar30);
          if ((uVar24 & 1) == 0) goto LAB_14143214d;
        }
        uVar49 = *(undefined8 *)((longlong)uStack_1e0 + uVar30 * 2 * 4);
        *(undefined8 *)((longlong)uStack_1e0 + uVar30 * 2 * 4) =
             *(undefined8 *)((longlong)uStack_1e0 + ((longlong)uStack_1d8 * 2 + ~uVar30 * 2) * 4);
        *(undefined8 *)((longlong)uStack_1e0 + ((longlong)uStack_1d8 * 2 + ~uVar30 * 2) * 4) =
             uVar49;
      }
LAB_14143214d:
      uStack_2b8._0_4_ = SUB84(uStack_1e0,0);
      uStack_2b8._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
      if (uStack_1d8 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309a30);
      }
      pfVar31 = (float *)((longlong)uStack_1e0 + (longlong)uStack_1d8 * 2 * 4);
      if (pfVar31 == (float *)0x8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309a48);
      }
      fVar46 = pfVar14[1];
      fVar41 = _DAT_142e36f50;
      pfVar36 = (float *)uStack_1e0;
      if ((fVar46 <= pfStack_120._0_4_) && (fVar45 = pfVar14[3], pfStack_120._0_4_ < fVar45)) {
        bVar39 = true;
        do {
          if (pfVar36 == pfVar31) goto LAB_141432355;
          pfVar21 = pfVar36 + 2;
          pfVar25 = pfVar21;
          pfVar38 = pfStack_2d8;
          pfStack_2d8 = pfVar36;
          if (bVar39) {
            pfStack_2d8 = pfVar31;
            if (pfVar21 == pfVar31) goto LAB_141432355;
            pfVar25 = pfVar36 + 4;
            pfVar38 = pfVar36;
            pfStack_2d8 = pfVar21;
          }
          pfVar36 = pfVar25;
          fVar41 = (float)pdb_140de8220();
          fVar43 = (float)pdb_140de8220();
          bVar39 = false;
        } while ((fVar44 < (fVar42 - fVar41) * fVar46 + fVar45 * fVar41) ||
                (fVar43 * fVar45 + (fVar42 - fVar43) * fVar46 <= fVar44));
        fVar41 = (float)pdb_140de8220();
        fVar41 = *pfStack_2d8 * fVar41 + (fVar42 - fVar41) * *pfVar38;
        if ((cVar6 == '\t') && (*(char *)(pfVar14 + 4) == '\x01')) {
          fVar41 = fVar41 + _DAT_14300bbe0;
        }
        if (fVar41 <= _DAT_142e37ad4) {
          fVar41 = _DAT_142e36f50;
          pfVar36 = (float *)CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
          fVar43 = (float)uStack_2b8;
          fVar64 = uStack_2b8._4_4_;
        }
        else {
          fVar43 = pfVar14[1];
          fVar64 = pfVar14[3];
          fVar44 = (float)pdb_140deec20(pfVar14);
          fVar46 = (float)pdb_140deec20(pfVar14);
          uVar49 = auStack_238._0_8_;
          if ((undefined1 (*) [16])auStack_238._0_8_ == pauStack_248) {
            pdb_142d7ef30(&pauStack_248);
          }
          *(float *)pauStack_240[uVar49] = fVar44 - fVar41;
          *(float *)(pauStack_240[uVar49] + 4) = fVar43;
          *(float *)(pauStack_240[uVar49] + 8) = fVar46 + fVar41;
          *(float *)(pauStack_240[uVar49] + 0xc) = fVar64;
          auStack_238._0_8_ = (undefined1 *)uVar49 + 1;
LAB_141432355:
          fVar41 = _DAT_142e36f50;
          pfVar36 = (float *)CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8);
          fVar43 = (float)uStack_2b8;
          fVar64 = uStack_2b8._4_4_;
        }
      }
      uStack_2b8._4_4_ = fVar64;
      uStack_2b8._0_4_ = fVar43;
      _DAT_142e36f50 = fVar41;
      if (uStack_1e8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pfVar36,(longlong)uStack_1e8 << 3,4);
      }
    }
    else {
      pdb_140deec20(pfVar14);
      cVar6 = pdb_140deec60(pfVar14);
      if (cVar6 != '\0') {
        uStack_1e8 = *(undefined1 (**) [16])pfVar14;
        uStack_1e0 = *(code **)(pfVar14 + 2);
        uVar49 = auStack_238._0_8_;
        if ((undefined1 (*) [16])auStack_238._0_8_ == pauStack_248) {
          pdb_142d7ef30(&pauStack_248);
        }
        *(undefined1 (**) [16])pauStack_240[uVar49] = uStack_1e8;
        *(code **)(pauStack_240[uVar49] + 8) = uStack_1e0;
        auStack_238._0_8_ = (undefined1 *)uVar49 + 1;
      }
    }
    goto LAB_141432014;
  }
  pauVar26 = pauStack_240 + auStack_238._0_8_;
  pauVar18 = pauStack_240;
  while (pauVar33 = pauVar18, pauVar33 != pauVar26) {
    uStack_1e8 = (undefined1 (*) [16])
                 CONCAT44(*(undefined4 *)(*pauVar33 + 8),*(undefined4 *)*pauVar33);
    uStack_1e0 = (code *)((ulonglong)uStack_1e0 & 0xffffffffffffff00);
    pdb_1424bca00(&uStack_2a0,&uStack_1e8);
    fVar43 = (float)pdb_140deec20(pauVar33);
    fVar64 = (float)pdb_140deec10(pauVar33);
    uVar20 = (uint)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
    pauVar18 = pauVar33 + 1;
    if (fVar43 + fVar64 * fVar41 <= fStack_108) {
      fVar43 = (float)pdb_140deec20(pauVar33);
      fVar64 = (float)pdb_140deec10(pauVar33);
      uVar20 = (uint)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
      if (fVar43 < fVar64 * fVar41) {
        pdb_140deec20(pauVar33);
        pdb_140deec20(pauVar33);
        pdb_140deec10(pauVar33);
        pdb_140deec50(pauVar33);
        in_stack_fffffffffffff998 = (undefined1 (*) [16])((ulonglong)uVar20 << 0x20);
        pdb_140deead0(&uStack_1e8);
        uStack_318 = (undefined1 (*) [16])CONCAT44((float)uStack_1e0,(int)uStack_1e8);
        uStack_310 = 0;
        pdb_1424bca00(&uStack_2a0,&uStack_318);
      }
    }
    else {
      pdb_140deec20(pauVar33);
      pdb_140deec20(pauVar33);
      pdb_140deec10(pauVar33);
      pdb_140deec50(pauVar33);
      in_stack_fffffffffffff998 = (undefined1 (*) [16])((ulonglong)uVar20 << 0x20);
      pdb_140deead0(&uStack_1e8);
      uStack_318 = (undefined1 (*) [16])CONCAT44((float)uStack_1e0,(int)uStack_1e8);
      uStack_310 = 0;
      pdb_1424bca00(&uStack_2a0,&uStack_318);
    }
  }
  if (pauStack_248 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_240,(longlong)pauStack_248 << 4,4);
  }
  if (pfStack_3e8 <= pfVar35) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pfVar35,pfStack_3e8,&UNK_143309a00);
  }
  puVar29 = *(undefined8 **)(pfStack_3f0 + (longlong)pfVar35 * 6 + 2);
  puVar9 = (undefined8 *)
           ((longlong)puVar29 + *(longlong *)(pfStack_3f0 + (longlong)pfVar35 * 6 + 4) * 0xc);
  pfVar32 = pfStack_3e8;
  for (; puVar29 != puVar9; puVar29 = (undefined8 *)((longlong)puVar29 + 0xc)) {
    uStack_1e8 = (undefined1 (*) [16])*puVar29;
    uVar24 = (ulonglong)uStack_1e0 >> 8;
    uStack_1e0 = (code *)CONCAT71((int7)uVar24,*(undefined1 *)(puVar29 + 1));
    pfVar32 = (float *)&uStack_1e8;
    pdb_1424bca00(&uStack_2a0);
  }
  pfVar14 = (float *)pdb_14043b7e0(&uStack_2a0);
  pfVar32 = pfVar14 + (longlong)pfVar32 * 3;
  while (pfVar14 != pfVar32) {
    pfVar31 = pfVar14 + 3;
    fVar41 = *pfVar14;
    fVar43 = pfVar14[1];
    pfVar14 = pfVar31;
    if (_DAT_142e3b1d8 <= fVar43 - fVar41) {
      fVar64 = (float)auStack_2c8._0_4_;
      if ((byte)uStack_2d0 != '\0') {
        cVar6 = pdb_140b771d0(param_11);
        fVar64 = (float)auStack_2c8._0_4_;
        if (cVar6 != '\0') {
          fVar64 = fStack_430;
        }
      }
      lStack_280 = CONCAT44(lStack_280._4_4_,fVar64);
      uVar47 = pdb_14007ee60();
      uStack_1e8 = (undefined1 (*) [16])CONCAT44(fVar64,uVar47);
      pdb_140dea260(&uStack_530,&uStack_1e8,auStack_101._1_8_);
      uVar47 = (float)lStack_280;
      uVar48 = pdb_14007ee60();
      uStack_1e8 = (undefined1 (*) [16])CONCAT44(uVar47,uVar48);
      pdb_140dea260(&pfStack_540,&uStack_1e8,auStack_101._1_8_);
      fVar64 = fStack_108;
      auStack_328 = ZEXT416((uint)fStack_538);
      fStack_4e8 = (float)uStack_530;
      fStack_4e4 = (float)((ulonglong)uStack_530 >> 0x20);
      uStack_408._0_4_ = fStack_538 - fStack_528;
      auStack_5a8 = ZEXT416((uint)(float)uStack_408);
      uStack_3a8 = pfStack_540;
      uStack_3a0 = 0;
      fVar44 = SUB84(pfStack_540,0) - fStack_4e8;
      fStack_3fc = (float)((ulonglong)pfStack_540 >> 0x20) - fStack_4e4;
      uStack_598 = CONCAT44(fStack_3fc,fVar44);
      uStack_408._4_4_ =
           fVar42 / SQRT((float)uStack_408 * (float)uStack_408 +
                         fStack_3fc * fStack_3fc + fVar44 * fVar44);
      auStack_588 = ZEXT416((uint)uStack_408._4_4_);
      uStack_590 = 0;
      uStack_408._0_4_ = (float)((uint)uStack_408._4_4_ ^ _DAT_142e37820) * (float)uStack_408;
      uStack_408._4_4_ = uStack_408._4_4_ * fVar44;
      fStack_400 = _UNK_142e37824 * 0.0;
      fStack_3fc = fStack_3fc * 0.0;
      uStack_548 = CONCAT44(uStack_408._4_4_,(float)uStack_408);
      uStack_4e0 = 0;
      auStack_3b8 = ZEXT416((uint)fStack_528);
      if ((byte)iStack_124 == '\0') {
        if (NAN(fVar41 / fStack_108)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
        pfStack_4c8 = pfVar32;
        uVar49 = pub_142e32a70();
        fVar44 = (float)uVar49;
        if (NAN(fVar43 / fVar64)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
        uVar12 = pub_142e32a70();
        uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
        uVar20 = (uint)((ulonglong)in_stack_fffffffffffff9a0 >> 0x20);
        uVar23 = (uint)((ulonglong)in_stack_fffffffffffff9a8 >> 0x20);
        fVar46 = 0.0;
        fVar45 = (float)uVar12;
        if (lStack_3c8 == 0) {
          cVar6 = '\0';
          uStack_338 = (float *)((ulonglong)uStack_338 & 0xffffffff00000000);
        }
        else {
          fVar46 = (float)(~-(uint)(fVar44 < 0.0) & (uint)fVar44 |
                          (uint)(fVar44 + fVar42) & -(uint)(fVar44 < 0.0));
          uStack_338._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
          uStack_330 = (undefined4)extraout_XMM0_Qb_00;
          uStack_32c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          fVar44 = (float)(~-(uint)(fVar45 < 0.0) & (uint)fVar45 |
                          (uint)(fVar45 + fVar42) & -(uint)(fVar45 < 0.0));
          pfVar31 = pfStack_3d0 + lStack_3c8 * 4;
          uStack_2b8._0_4_ = fVar46 + fVar42;
          uStack_338._0_4_ = fVar44 + fVar42;
          bVar39 = false;
          bVar37 = false;
          pfVar32 = pfStack_3d0;
          uStack_2b8._4_4_ = (float)((ulonglong)uVar49 >> 0x20);
          fStack_2b0 = (float)extraout_XMM0_Qb;
          fStack_2ac = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          do {
            if (NAN(*pfVar32 / fVar64)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            fVar45 = (float)pub_142e32a70();
            if (NAN(pfVar32[2] / fVar64)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
            }
            fVar66 = (float)(~-(uint)(fVar45 < 0.0) & (uint)fVar45 |
                            (uint)(fVar45 + fVar42) & -(uint)(fVar45 < 0.0));
            fVar45 = (float)pub_142e32a70();
            uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
            uVar20 = (uint)((ulonglong)in_stack_fffffffffffff9a0 >> 0x20);
            uVar23 = (uint)((ulonglong)in_stack_fffffffffffff9a8 >> 0x20);
            fVar45 = (float)(~-(uint)(fVar45 < 0.0) & (uint)fVar45 |
                            (uint)(fVar45 + fVar42) & -(uint)(fVar45 < 0.0));
            if (((((float)(~-(uint)(fVar46 < fVar66) & (uint)fVar46 |
                          -(uint)(fVar46 < fVar66) & (uint)(float)uStack_2b8) - fVar66 <
                   _DAT_142e37ad4) ||
                 ((float)(~-(uint)(fVar46 < fVar45) & (uint)fVar46 |
                         -(uint)(fVar46 < fVar45) & (uint)(float)uStack_2b8) - fVar45 <
                  _DAT_142e37ad4)) ||
                ((float)(~-(uint)(fVar66 < fVar46) & (uint)fVar66 |
                        (uint)(fVar66 + fVar42) & -(uint)(fVar66 < fVar46)) - fVar46 <
                 _DAT_142e37ad4)) ||
               ((float)(~-(uint)(fVar45 < fVar46) & (uint)fVar45 |
                       (uint)(fVar45 + fVar42) & -(uint)(fVar45 < fVar46)) - fVar46 < _DAT_142e37ad4
               )) {
              bVar37 = true;
            }
            if ((((float)(~-(uint)(fVar44 < fVar66) & (uint)fVar44 |
                         -(uint)(fVar44 < fVar66) & (uint)(float)uStack_338) - fVar66 <
                  _DAT_142e37ad4) ||
                ((float)(~-(uint)(fVar44 < fVar45) & (uint)fVar44 |
                        -(uint)(fVar44 < fVar45) & (uint)(float)uStack_338) - fVar45 <
                 _DAT_142e37ad4)) ||
               (((float)(~-(uint)(fVar66 < fVar44) & (uint)fVar66 |
                        (uint)(fVar66 + fVar42) & -(uint)(fVar66 < fVar44)) - fVar44 <
                 _DAT_142e37ad4 ||
                ((float)(~-(uint)(fVar45 < fVar44) & (uint)fVar45 |
                        (uint)(fVar45 + fVar42) & -(uint)(fVar45 < fVar44)) - fVar44 <
                 _DAT_142e37ad4)))) {
              bVar39 = true;
            }
            pfVar32 = pfVar32 + 4;
          } while (pfVar32 != pfVar31);
          fVar46 = _DAT_142e3b1d8;
          if (!bVar39) {
            fVar46 = 0.0;
          }
          cVar6 = bVar39 * '\x02';
          if (bVar37) {
            cVar6 = cVar6 + '\x01';
            fVar64 = _DAT_142e3b1d8;
          }
          else {
            fVar64 = 0.0;
          }
          uStack_338 = (float *)CONCAT44(uStack_338._4_4_,fVar64);
        }
        pfVar32 = pfStack_4c8;
        pdb_14092f930(auStack_101._1_8_);
        pdb_141c40430(piStack_4c0);
        if ((byte)uStack_2d0 == '\0') {
          pdb_14092f930(auStack_101._1_8_);
          pdb_140df4540(&pauStack_248,piStack_260);
          in_stack_fffffffffffff9a8 = (float *)((ulonglong)uVar23 << 0x20);
          in_stack_fffffffffffff9a0 = (ulonglong)uVar20 << 0x20;
          in_stack_fffffffffffff998 = (undefined1 (*) [16])CONCAT44(uVar47,0x3ea3d70b);
          pdb_140aaa870(&uStack_1e8,&pauStack_248);
        }
        else {
          pdb_140df4540(&pauStack_248,piStack_260);
          in_stack_fffffffffffff9a8 = (float *)((ulonglong)uVar23 << 0x20);
          in_stack_fffffffffffff9a0 = (ulonglong)uVar20 << 0x20;
          in_stack_fffffffffffff998 = (undefined1 (*) [16])CONCAT44(uVar47,0x3ea3d70b);
          pdb_140aaa9f0(&uStack_1e8,&pauStack_248);
        }
        iVar8 = pdb_140315970(&uStack_1f0);
        pdb_140aaac40(&pauStack_248,&uStack_1e8,iVar8 + (int)pfStack_2a8);
        lVar10 = param_13[2];
        if (lVar10 == *param_13) {
          pdb_142d8db00(param_13);
        }
        lVar28 = param_13[1];
        lVar15 = lVar10 * 0x50;
        puVar9 = (undefined8 *)(lVar28 + 0x40 + lVar15);
        *puVar9 = pfStack_208;
        puVar9[1] = pfStack_200;
        plVar13 = (longlong *)(lVar28 + 0x30 + lVar15);
        *plVar13 = uStack_218;
        plVar13[1] = CONCAT44(iStack_20c,uStack_210);
        *(undefined1 (*) [16])(lVar28 + 0x20 + lVar15) = auStack_228;
        puVar9 = (undefined8 *)(lVar28 + 0x10 + lVar15);
        *puVar9 = auStack_238._0_8_;
        puVar9[1] = auStack_238._8_8_;
        *(longlong *)(lVar28 + lVar15) = (longlong)pauStack_248;
        ((longlong *)(lVar28 + lVar15))[1] = (longlong)pauStack_240;
        param_13[2] = lVar10 + 1;
      }
      else {
        pfStack_390 = (float *)CONCAT44(uStack_5c8._4_4_ * uStack_408._4_4_ +
                                        (float)uStack_408 * _DAT_14301e000 + fStack_528,
                                        (float)uStack_5c8 * (float)uStack_408 +
                                        (fStack_4e8 - uStack_408._4_4_ * _DAT_14301e000));
        pdb_140df4540(&pauStack_248,&pfStack_390,(float)lStack_280 + _DAT_1433096ec);
        pdb_140de88f0(&uStack_1e8);
        fVar44 = (float)uStack_1e0 * _DAT_143309720 * _DAT_142e377d0 +
                 uStack_1e8._4_4_ * _DAT_143309710 * _DAT_142e377c0 +
                 (float)uStack_1e8 * _DAT_143309700 * _DAT_142e377b0 +
                 uStack_1e0._4_4_ * _DAT_1433096f0;
        fVar46 = (float)uStack_1e0 * _UNK_143309724 * _UNK_142e377d4 +
                 uStack_1e8._4_4_ * _UNK_143309714 * _UNK_142e377c4 +
                 (float)uStack_1e8 * _UNK_143309704 * _UNK_142e377b4 +
                 uStack_1e0._4_4_ * _UNK_1433096f4;
        fVar45 = (float)uStack_1e0 * _UNK_143309728 * _UNK_142e377d8 +
                 uStack_1e8._4_4_ * _UNK_143309718 * _UNK_142e377c8 +
                 (float)uStack_1e8 * _UNK_143309708 * _UNK_142e377b8 +
                 uStack_1e0._4_4_ * _UNK_1433096f8;
        fVar66 = (float)uStack_1e0 * _UNK_14330972c * _UNK_142e377dc +
                 uStack_1e8._4_4_ * _UNK_14330971c * _UNK_142e377cc +
                 (float)uStack_1e8 * _UNK_14330970c * _UNK_142e377bc +
                 uStack_1e0._4_4_ * _UNK_1433096fc;
        fVar65 = fVar45 + fVar45;
        fVar54 = fVar46 + fVar46;
        fVar62 = fVar44 * (fVar44 + fVar44);
        fVar69 = (fVar44 + fVar44) * fVar66;
        fVar59 = fVar65 * fVar44 - fVar54 * fVar66;
        fVar58 = fVar69 + fVar65 * fVar46;
        uStack_1c0._4_4_ = fVar42 - (fVar62 + fVar46 * fVar54);
        fVar64 = SQRT(((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) *
                      ((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) +
                      (fStack_4e4 - uStack_3a8._4_4_) * (fStack_4e4 - uStack_3a8._4_4_) +
                      (fStack_4e8 - (float)uStack_3a8) * (fStack_4e8 - (float)uStack_3a8)) +
                 _DAT_142e3787c;
        uStack_1e8 = (undefined1 (*) [16])
                     CONCAT44((fVar54 * fVar44 + fVar66 * fVar65) * _UNK_143309734,
                              (fVar42 - (fVar46 * fVar54 + fVar45 * fVar65)) * _DAT_143309730);
        uStack_1e0 = (code *)CONCAT44(fVar59 * _UNK_14330973c,fVar59 * _UNK_143309738);
        uStack_1d8 = (float *)CONCAT44(fVar64 * (fVar42 - (fVar45 * fVar65 + fVar62)),
                                       fVar64 * (fVar54 * fVar44 - fVar66 * fVar65));
        uStack_1d0 = (float *)CONCAT44(fVar64 * fVar58,fVar64 * fVar58);
        uStack_1c8._0_4_ = (fVar54 * fVar66 + fVar65 * fVar44) * fStack_5b8;
        uStack_1c8._4_4_ = (fVar65 * fVar46 - fVar69) * fStack_5b4;
        uStack_1c0._0_4_ = uStack_1c0._4_4_ * fStack_5b0;
        uStack_1c0._4_4_ = uStack_1c0._4_4_ * fStack_5ac;
        uStack_1b0._0_4_ = pauStack_240._0_4_;
        auStack_1b8 = (undefined1  [8])pauStack_248;
        uStack_1b0._4_4_ = pauStack_240._0_4_;
        pdb_140e07fe0(&uStack_318,&uStack_1e8);
        iVar8 = pdb_140315970(&uStack_1f0);
        uVar47 = pdb_1409012c0(*(float *)(auStack_101._1_8_ + 0x274));
        pdb_140a77410(&uStack_1e8);
        pcVar19 = pcStack_340;
        pauStack_240 = (undefined1 (*) [16])CONCAT71(uStack_30f,uStack_310);
        auStack_238._4_4_ = uStack_304;
        auStack_238._0_4_ = fStack_308;
        auStack_228._4_4_ = uStack_2f4;
        auStack_228._0_4_ = fStack_2f8;
        auStack_228._8_8_ = uStack_2f0;
        auStack_238._8_8_ = uStack_300;
        pauStack_248 = uStack_318;
        uStack_218 = (ulonglong)(uint)(iVar8 + (int)pfStack_148._0_4_) << 0x20;
        iStack_20c = iStack_434;
        pfStack_208 = pfStack_1a8;
        pfStack_200 = pfStack_1a0;
        uStack_210 = uVar47;
        cVar6 = pdb_1413f6d90(puStack_348,&pauStack_248);
        if (cVar6 != '\0') {
          *pcVar19 = '\x01';
        }
        fVar46 = 0.0;
        cVar6 = '\0';
        uStack_338 = (float *)((ulonglong)uStack_338 & 0xffffffff00000000);
      }
      pfStack_148 = (float *)CONCAT44(pfStack_148._4_4_,(int)pfStack_148._0_4_ + 1);
      if ((byte)uStack_2d0 != '\0') {
        cVar7 = pdb_140901380(lStack_4f0);
        uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffff998 >> 0x20);
        uVar48 = (undefined4)((ulonglong)in_stack_fffffffffffff9a0 >> 0x20);
        uVar70 = (undefined4)((ulonglong)in_stack_fffffffffffff9a8 >> 0x20);
        if (cVar7 != '\0') {
          uStack_2b8._0_4_ = uStack_408._4_4_;
          uStack_2b8._4_4_ = uStack_408._4_4_;
          fStack_2b0 = fStack_3fc;
          fStack_2ac = fStack_3fc;
          if ((byte)iStack_124 != '\0') {
            fVar44 = uStack_408._4_4_ * _DAT_143309760;
            fVar46 = uStack_598._4_4_ * (float)auStack_588._0_4_ * _UNK_143309764;
            fVar45 = fStack_3fc * _UNK_143309768;
            fVar66 = fStack_3fc * _UNK_14330976c;
            fVar64 = (float)auStack_5a8._0_4_ * (float)auStack_588._0_4_ * _DAT_143309770;
            uVar24 = 0;
            auVar53._4_4_ = fStack_4e4;
            auVar53._0_4_ = fStack_4e8;
            auVar53._8_8_ = uStack_4e0;
            do {
              uVar49 = auVar53._0_8_;
              fVar69 = auVar53._4_4_;
              fVar58 = auVar53._12_4_;
              fVar54 = (float)auStack_3b8._0_4_;
              while( true ) {
                fVar59 = auVar53._0_4_;
                fVar62 = auVar53._8_4_;
                if (3 < uVar24) {
                  pfStack_390 = (float *)CONCAT44((float)auStack_328._0_4_ * _UNK_142e36f64 +
                                                  fVar54 * _UNK_142e36f64,
                                                  (float)uStack_3a8 * _DAT_142e36f60 +
                                                  fVar59 * _DAT_142e36f60);
                  pdb_140df4540(&uStack_1e8,&pfStack_390);
                  pfVar31 = (float *)uStack_1e8;
                  fVar64 = (float)uStack_1e0;
                  pdb_140df4520(&uStack_1e8,&uStack_548);
                  pfVar36 = (float *)uStack_1e8;
                  fVar44 = (float)uStack_1e0;
                  pdb_140de88f0(&uStack_1e8);
                  fVar69 = fVar69 - uStack_3a8._4_4_;
                  fVar61 = SQRT(((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) *
                                ((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) +
                                fVar69 * fVar69 +
                                (fVar59 - (float)uStack_3a8) * (fVar59 - (float)uStack_3a8));
                  auStack_1b8._0_4_ =
                       SUB84(pfVar31,0) + _DAT_143309790 + SUB84(pfVar36,0) * _DAT_143309780;
                  auStack_1b8._4_4_ =
                       (float)((ulonglong)pfVar31 >> 0x20) + _UNK_143309794 +
                       (float)((ulonglong)pfVar36 >> 0x20) * _UNK_143309784;
                  uStack_1b0._0_4_ = fVar64 + _UNK_143309798 + fVar44 * _UNK_143309788;
                  fVar63 = fVar61 + _UNK_14330979c + _UNK_142e4e65c * _UNK_14330978c;
                  fVar65 = (float)uStack_1e0 + (float)uStack_1e0;
                  fVar64 = (float)uStack_1e0 * fVar65;
                  fVar66 = uStack_1e8._4_4_ + uStack_1e8._4_4_;
                  fVar46 = fVar66 * (float)uStack_1e8;
                  fVar59 = fVar65 * (float)uStack_1e8;
                  fVar62 = fVar65 * uStack_1e8._4_4_;
                  fVar58 = (float)uStack_1e8 * ((float)uStack_1e8 + (float)uStack_1e8);
                  fVar45 = fVar66 * uStack_1e0._4_4_;
                  fVar54 = ((float)uStack_1e8 + (float)uStack_1e8) * uStack_1e0._4_4_;
                  fVar65 = uStack_1e0._4_4_ * fVar65;
                  fVar44 = fVar59 - fVar45;
                  fVar69 = fVar54 + fVar62;
                  uStack_1c0._4_4_ = fVar42 - (fVar58 + uStack_1e8._4_4_ * fVar66);
                  uStack_1e8 = (undefined1 (*) [16])
                               CONCAT44(fVar63 * (fVar46 + fVar65),
                                        fVar63 * (fVar42 - (uStack_1e8._4_4_ * fVar66 + fVar64)));
                  uStack_1e0 = (code *)CONCAT44(fVar63 * fVar44,fVar63 * fVar44);
                  uStack_1d8 = (float *)CONCAT44((fVar42 - (fVar64 + fVar58)) * _UNK_1433097a4,
                                                 (fVar46 - fVar65) * _DAT_1433097a0);
                  uStack_1d0 = (float *)CONCAT44(fVar69 * _UNK_1433097ac,fVar69 * _UNK_1433097a8);
                  uStack_1c8._0_4_ = (fVar45 + fVar59) * _DAT_1433097a0;
                  uStack_1c8._4_4_ = (fVar62 - fVar54) * _UNK_1433097a4;
                  uStack_1c0._0_4_ = uStack_1c0._4_4_ * _UNK_1433097a8;
                  uStack_1c0._4_4_ = uStack_1c0._4_4_ * _UNK_1433097ac;
                  uStack_1b0._4_4_ = (float)uStack_1b0;
                  pdb_140e07fe0(&uStack_318,&uStack_1e8);
                  iVar8 = pdb_140315970(&uStack_1f0);
                  uVar47 = pdb_1409012c0(*(float *)(auStack_101._1_8_ + 0x274));
                  pdb_140a77410(&uStack_1e8);
                  pcVar19 = pcStack_340;
                  pauStack_240 = (undefined1 (*) [16])CONCAT71(uStack_30f,uStack_310);
                  auStack_238._4_4_ = uStack_304;
                  auStack_238._0_4_ = fStack_308;
                  auStack_228._4_4_ = uStack_2f4;
                  auStack_228._0_4_ = fStack_2f8;
                  auStack_228._8_8_ = uStack_2f0;
                  auStack_238._8_8_ = uStack_300;
                  pauStack_248 = uStack_318;
                  uStack_218 = (ulonglong)(uint)(iVar8 + (int)pfStack_148._0_4_) << 0x20;
                  iStack_20c = 0;
                  pfStack_208 = pfStack_1a8;
                  pfStack_200 = pfStack_1a0;
                  uStack_210 = uVar47;
                  cVar6 = pdb_1413f6d90(puStack_348,&pauStack_248);
                  if (cVar6 != '\0') {
                    *pcVar19 = '\x01';
                  }
                  fVar64 = (float)pub_142e329c0(fVar61 / _DAT_142e3798c);
                  uVar24 = 0;
                  if (0.0 <= fVar64) {
                    uVar24 = (longlong)(fVar64 - _DAT_142e36f2c) & (longlong)fVar64 >> 0x3f |
                             (longlong)fVar64;
                  }
                  if (_DAT_142e36f30 < fVar64) {
                    uVar24 = 0xffffffffffffffff;
                  }
                  if (uVar24 < 3) {
                    uVar24 = 2;
                  }
                  goto LAB_141433610;
                }
                fVar54 = (float)pdb_140df0700(piStack_260,uVar24);
                fVar65 = (float)pdb_140df3ee0(piStack_260);
                uVar24 = uVar24 + 1;
                fVar61 = fVar54 * fVar65 + _DAT_14300d240;
                fVar65 = fVar54 * fVar65 + _DAT_142e37848;
                if ((fVar61 <= fVar41) && (fVar41 < fVar65)) break;
                fVar54 = (float)auStack_3b8._0_4_;
                if ((fVar61 <= fVar43) && (fVar43 < fVar65)) {
                  uStack_3a8 = (float *)CONCAT44(uStack_3a8._4_4_ + fVar46,
                                                 (float)uStack_3a8 + fVar44);
                  uStack_3a0 = CONCAT44(uStack_3a0._4_4_ + fVar66,(float)uStack_3a0 + fVar45);
                  auStack_328._0_4_ = (float)auStack_328._0_4_ + fVar64;
                }
              }
              auVar53._0_4_ = fVar59 - fVar44;
              auVar53._4_4_ = fVar69 - fVar46;
              auVar53._8_4_ = fVar62 - fVar45;
              auVar53._12_4_ = fVar58 - fVar66;
              auStack_3b8._0_4_ = (float)auStack_3b8._0_4_ - fVar64;
            } while( true );
          }
          fVar64 = (float)pdb_14092f930(auStack_101._1_8_);
          fVar44 = (float)pdb_141c40430(piStack_4c0);
          pdb_140df4540(&uStack_1e8,piStack_260);
          fVar64 = _DAT_142f57bcc / fVar64;
          fVar44 = (fVar43 + fVar41) * _DAT_142e36f50 * fVar64 - fVar44;
          fVar45 = (fVar43 - fVar41) * _DAT_142e36f50 * fVar64;
          pauStack_248 = (undefined1 (*) [16])
                         CONCAT44((float)((ulonglong)uStack_1e8 >> 0x20) + _UNK_143309744,
                                  SUB84(uStack_1e8,0) + _DAT_143309740);
          pauStack_240 = (undefined1 (*) [16])CONCAT44(pauStack_240._4_4_,(float)uStack_1e0 + 0.0);
          in_stack_fffffffffffff9a8 = (float *)CONCAT44(uVar70,fVar46 * fVar64 + fVar45 + fVar44);
          in_stack_fffffffffffff9a0 =
               CONCAT44(uVar48,(fVar44 - fVar45) - (float)uStack_338 * fVar64);
          in_stack_fffffffffffff998 = (undefined1 (*) [16])CONCAT44(uVar47,0x3df5c290);
          pdb_140aaa9f0(&uStack_1e8,&pauStack_248,(float)piStack_288[3] + _DAT_142e3787c,
                        _DAT_143309750,in_stack_fffffffffffff998,in_stack_fffffffffffff9a0,
                        in_stack_fffffffffffff9a8,cVar6);
          iVar8 = pdb_140315970(&uStack_1f0);
          pdb_140aaac40(&pauStack_248,&uStack_1e8,iVar8 + (int)pfStack_2a8);
          lVar10 = param_13[2];
          if (lVar10 == *param_13) {
            pdb_142d8db00(param_13);
          }
          lVar28 = param_13[1];
          lVar15 = lVar10 * 0x50;
          puVar9 = (undefined8 *)(lVar28 + 0x40 + lVar15);
          *puVar9 = pfStack_208;
          puVar9[1] = pfStack_200;
          puVar1 = (undefined4 *)(lVar28 + 0x30 + lVar15);
          *puVar1 = (float)uStack_218;
          puVar1[1] = uStack_218._4_4_;
          puVar1[2] = uStack_210;
          puVar1[3] = iStack_20c;
          puVar9 = (undefined8 *)(lVar28 + 0x20 + lVar15);
          *puVar9 = auStack_228._0_8_;
          puVar9[1] = auStack_228._8_8_;
          puVar9 = (undefined8 *)(lVar28 + 0x10 + lVar15);
          *puVar9 = auStack_238._0_8_;
          puVar9[1] = auStack_238._8_8_;
          *(longlong *)(lVar28 + lVar15) = (longlong)pauStack_248;
          ((longlong *)(lVar28 + lVar15))[1] = (longlong)pauStack_240;
          param_13[2] = lVar10 + 1;
          fVar64 = (float)pub_142e329c0();
          uVar24 = 0;
          if (0.0 <= fVar64) {
            uVar24 = (longlong)(fVar64 - _DAT_142e36f2c) & (longlong)fVar64 >> 0x3f |
                     (longlong)fVar64;
          }
          if (_DAT_142e36f30 < fVar64) {
            uVar24 = 0xffffffffffffffff;
          }
          if (uVar24 < 3) {
            uVar24 = 2;
          }
          uVar49 = CONCAT44(fStack_4e4,fStack_4e8);
          fVar61 = SQRT(((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) *
                        ((float)auStack_3b8._0_4_ - (float)auStack_328._0_4_) +
                        (fStack_4e4 - uStack_3a8._4_4_) * (fStack_4e4 - uStack_3a8._4_4_) +
                        (fStack_4e8 - (float)uStack_3a8) * (fStack_4e8 - (float)uStack_3a8));
LAB_141433610:
          fVar61 = _DAT_142e37ad4 / fVar61;
          fVar64 = (float)uVar24 + _DAT_142e36f34;
          for (uVar30 = 0; uVar30 < uVar24; uVar30 = uVar30 + 1) {
            fVar46 = (float)uVar30 / fVar64;
            fVar44 = fVar43 * fVar46 + (fVar42 - fVar46) * fVar41;
            if ((byte)iStack_124 == '\0') {
              uVar47 = (float)lStack_280;
              uVar48 = pdb_14007ee60();
              uStack_1e8 = (undefined1 (*) [16])CONCAT44(uVar47,uVar48);
              pdb_140dea260(&uStack_55c,&uStack_1e8,auStack_101._1_8_);
              fVar45 = (float)pdb_140deff30(piStack_260);
              fVar46 = 0.0;
              if (0.0 <= fVar44 / fVar45) {
                fVar46 = fVar44 / fVar45;
              }
              fVar45 = fVar42;
              if (fVar46 <= fVar42) {
                fVar45 = fVar46;
              }
              auVar60 = ZEXT416((uint)fVar45);
              pauStack_248 = (undefined1 (*) [16])CONCAT44(pauStack_248._4_4_,fVar45);
              if ((fVar45 < 0.0) || (fVar42 < fVar45)) {
                uStack_1e0 = pdb_140f70fc0;
                uStack_1e8 = (undefined1 (*) [16])&pauStack_248;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_1e8,&UNK_143309a18);
              }
              fVar46 = (float)pdb_140def5e0(piStack_260);
              pfVar31 = pfStack_130;
              fVar45 = auVar60._0_4_;
              if (pfStack_130 == pfStack_140) {
                pdb_142d89250(&pfStack_140);
              }
              pfVar36 = pfStack_138 + (longlong)pfVar31 * 6;
              pfStack_138[(longlong)pfVar31 * 6] = fVar44;
              *(undefined8 *)(pfStack_138 + (longlong)pfVar31 * 6 + 1) = uStack_55c;
              pfStack_138[(longlong)pfVar31 * 6 + 3] = fStack_554;
            }
            else {
              fVar45 = (float)pdb_140e02880(&uStack_428);
              pfVar31 = pfStack_130;
              if (pfStack_130 == pfStack_140) {
                pdb_142d89250(&pfStack_140);
              }
              fVar46 = fVar46 + (fVar45 * fVar61 - (fVar42 - fVar45) * fVar61);
              fVar45 = fVar42 - fVar46;
              pfVar36 = pfStack_138 + (longlong)pfVar31 * 6;
              pfStack_138[(longlong)pfVar31 * 6] = fVar44;
              *(ulonglong *)(pfStack_138 + (longlong)pfVar31 * 6 + 1) =
                   CONCAT44(fVar46 * uStack_3a8._4_4_ + fVar45 * (float)((ulonglong)uVar49 >> 0x20),
                            fVar46 * (float)uStack_3a8 + fVar45 * (float)uVar49);
              pfStack_138[(longlong)pfVar31 * 6 + 3] =
                   fVar46 * (float)auStack_328._0_4_ + (float)auStack_3b8._0_4_ * fVar45;
              fVar46 = (float)uStack_408;
              fVar45 = (float)uStack_2b8;
            }
            pfVar36[4] = fVar46;
            pfVar36[5] = fVar45;
            pfStack_130 = (float *)((longlong)pfVar31 + 1);
          }
        }
      }
    }
  }
  if (uStack_2a0 != (float *)0x0) {
    pub_1406abac0(pbStack_298,(longlong)uStack_2a0 * 0xc,4);
  }
  bVar39 = false;
  pauVar18 = pauStack_500;
  pauVar26 = pauStack_4f8;
  goto LAB_141431daa;
}

