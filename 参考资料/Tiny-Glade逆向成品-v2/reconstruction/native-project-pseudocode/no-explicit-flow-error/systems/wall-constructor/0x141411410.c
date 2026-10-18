// VA 0x141411410, PDB extent 10875 bytes
// system_wall_constructor::construct_platform_stairs::stone::construct_stone_platform_stairs<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/stone.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::stone::construct_stone_platform_stairs<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/stone.rs
   Extent: 10875 */

float pdb_141411410(longlong param_1,char *param_2,longlong param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float **ppfVar4;
  char cVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  float ****ppppfVar11;
  float *pfVar12;
  float ****ppppfVar13;
  float ***pppfVar14;
  float *pfVar15;
  longlong lVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  float *unaff_RSI;
  char *pcVar21;
  ulonglong uVar22;
  byte *pbVar23;
  longlong lVar24;
  ulonglong uVar25;
  byte *pbVar26;
  ulonglong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulonglong uVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar43;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar44;
  float fVar45;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  ulonglong uStack_370;
  longlong lStack_368;
  longlong lStack_360;
  float fStack_358;
  undefined4 uStack_354;
  float fStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  longlong lStack_320;
  float *pfStack_318;
  longlong lStack_310;
  undefined4 *puStack_308;
  float ****ppppfStack_300;
  ulonglong uStack_2f8;
  longlong lStack_2f0;
  byte *pbStack_2e8;
  undefined8 uStack_2e0;
  ulonglong uStack_2d8;
  float ***pppfStack_2d0;
  ulonglong uStack_2c8;
  float *pfStack_2c0;
  float *pfStack_2b8;
  undefined4 *puStack_2b0;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  float fStack_29c;
  ulonglong uStack_298;
  float *pfStack_290;
  longlong lStack_288;
  float ****ppppfStack_280;
  float ****ppppfStack_278;
  char *pcStack_270;
  longlong lStack_268;
  byte *pbStack_260;
  float ****ppppfStack_258;
  float ****ppppfStack_250;
  float ***pppfStack_248;
  longlong lStack_240;
  longlong lStack_238;
  float *pfStack_230;
  undefined4 *puStack_228;
  longlong lStack_220;
  float *pfStack_218;
  float ****ppppfStack_210;
  float ****ppppfStack_208;
  float ***pppfStack_200;
  undefined1 auStack_1f8 [16];
  float ****ppppfStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  float ****ppppfStack_1d0;
  undefined4 *puStack_1c8;
  float ****ppppfStack_1c0;
  ulonglong uStack_1b8;
  float ****ppppfStack_1a8;
  float ***pppfStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float ****ppppfStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  float ****ppppfStack_148;
  float ***pppfStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float ****ppppfStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  float fStack_104;
  float ****ppppfStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar48 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  lStack_238 = 0;
  pfStack_230 = (float *)0x4;
  puStack_228 = (undefined4 *)0x0;
  lStack_268 = 0;
  pbStack_260 = (byte *)0x4;
  ppppfStack_258 = (float ****)0x0;
  lStack_220 = 0;
  pfStack_218 = (float *)0x4;
  ppppfStack_210 = (float ****)0x0;
  lStack_2f0 = 0;
  pbStack_2e8 = (byte *)0x4;
  uStack_2e0 = 0;
  lStack_368 = param_4 * 0x68 + param_3;
  lStack_240 = param_1 + 0x88;
  puVar1 = (ulonglong *)(param_2 + 4);
  fStack_104 = 0.0;
  pcVar21 = param_2;
  lStack_150 = param_1;
  do {
    do {
      lVar16 = param_3;
      if (lVar16 == lStack_368) {
        if (lStack_2f0 != 0) {
          pub_1406abac0(pbStack_2e8,lStack_2f0 << 4,4);
        }
        if (lStack_220 != 0) {
          pub_1406abac0((byte *)pfStack_218,lStack_220 << 2,4);
        }
        if (lStack_268 != 0) {
          pub_1406abac0(pbStack_260,lStack_268 << 2,4);
        }
        if (lStack_238 != 0) {
          pub_1406abac0((byte *)pfStack_230,lStack_238 << 2,4);
        }
        return fStack_104;
      }
      fVar32 = (float)pdb_140a0c900(lVar16);
      param_3 = lVar16 + 0x68;
    } while (fVar32 < _DAT_142e36f50);
    lStack_360 = lVar16 + 0x68;
    fVar32 = (float)pdb_140a0c900(lVar16);
    fVar33 = (float)pdb_140a0bbc0(lVar16);
    ppppfVar11 = (float ****)pdb_140dedfe0(0);
    fVar34 = (float)pub_142e32b00(fVar33 * _DAT_142e36f50);
    uVar22 = (longlong)(fVar34 - _DAT_142e36f2c) & (longlong)fVar34 >> 0x3f | (longlong)fVar34;
    uVar18 = 0;
    if (0.0 <= fVar34) {
      uVar18 = uVar22;
    }
    if (_DAT_142e36f30 < fVar34) {
      uVar18 = 0xffffffffffffffff;
    }
    ppppfStack_1a8 = ppppfVar11;
    pdb_140de8290(&lStack_320,uVar18 + 1 + (ulonglong)(uVar18 == 0),uVar22,&ppppfStack_1a8,
                  &UNK_143307e40);
    lVar24 = *(longlong *)(lVar16 + 0x40);
    pcStack_270 = pcVar21;
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143307e58);
    }
    pfVar12 = *(float **)(lVar16 + 0x38);
    if (NAN(*pfVar12)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
    }
    uVar41 = pub_142e32a70();
    fVar34 = _DAT_142e36f28;
    fVar40 = (float)uVar41;
    pfVar12 = pfVar12 + lVar24 + -1;
    if (pfVar12 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143307e70);
    }
    fVar35 = *pfVar12;
    if (NAN(fVar35)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
    }
    fVar40 = (float)(~-(uint)(fVar40 < 0.0) & (uint)fVar40 |
                    (uint)(fVar40 + _DAT_142e36f28) & -(uint)(fVar40 < 0.0));
    uVar42 = pub_142e32a70(fVar35);
    uStack_344 = (undefined4)((ulonglong)uVar42 >> 0x20);
    fVar35 = (float)uVar42;
    fVar34 = (float)(~-(uint)(fVar35 < 0.0) & (uint)fVar35 |
                    (uint)(fVar35 + fVar34) & -(uint)(fVar35 < 0.0));
    uStack_340 = extraout_XMM0_Dc;
    uStack_33c = extraout_XMM0_Dd;
    if ((((fVar40 == 0.0) && (!NAN(fVar40))) && (0.0 < fVar33)) &&
       ((fVar34 == 0.0 && (!NAN(fVar34))))) {
      uStack_344 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      fVar34 = _DAT_142e36f28;
    }
    fStack_104 = fStack_104 + fVar32;
    pfStack_2c0 = pfStack_318;
    pfStack_2b8 = pfStack_318 + lStack_310;
    fStack_29c = fVar34 + _DAT_142e36f28;
    bVar31 = true;
    pcVar21 = pcStack_270;
    fStack_358 = fVar40;
    uStack_354 = (int)((ulonglong)uVar41 >> 0x20);
    fStack_348 = fVar34;
    while (fVar33 = fStack_29c, fVar32 = _DAT_142e36f28, pfStack_2c0 != pfStack_2b8) {
      pfVar12 = pfStack_2c0 + 1;
      pfVar15 = pfVar12;
      pfVar19 = pfStack_2c0;
      if (bVar31) {
        if (pfVar12 == pfStack_2b8) break;
        pfVar15 = pfStack_2c0 + 2;
        pfVar19 = pfVar12;
        unaff_RSI = pfStack_2c0;
      }
      fVar35 = *unaff_RSI;
      fVar36 = *pfVar19;
      fVar44 = (_DAT_142e36f28 - fVar35) * fVar40;
      pfStack_2c0 = pfVar15;
      pfStack_290 = pfVar19;
      if (fVar40 <= fVar34) {
        if (NAN(fVar35 * fVar34 + fVar44)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
        fVar35 = (float)pub_142e32a70();
        fVar33 = fVar36 * fVar34 + (fVar32 - fVar36) * fVar40;
        if (NAN(fVar33)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
      }
      else {
        if (NAN(fVar35 * fStack_29c + fVar44)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
        fVar35 = (float)pub_142e32a70();
        fVar33 = fVar36 * fVar33 + (fVar32 - fVar36) * fVar40;
        if (NAN(fVar33)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
      }
      fVar34 = (float)(~-(uint)(fVar35 < 0.0) & (uint)fVar35 |
                      (uint)(fVar35 + fVar32) & -(uint)(fVar35 < 0.0));
      fVar33 = (float)pub_142e32a70(fVar33);
      ppppfStack_148._0_4_ = fVar34;
      if ((fVar34 < 0.0) || (fVar32 < fVar34)) {
        ppppfStack_1a8 = (float ****)&ppppfStack_148;
        pppfStack_1a0 = (float ***)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&ppppfStack_1a8,&UNK_143307e88);
      }
      uVar8 = pdb_1413f9030(lStack_240);
      fVar33 = (float)(~-(uint)(fVar33 < 0.0) & (uint)fVar33 |
                      (uint)(fVar33 + fVar32) & -(uint)(fVar33 < 0.0));
      ppppfStack_148 = (float ****)CONCAT44(ppppfStack_148._4_4_,fVar33);
      if ((fVar33 < 0.0) || (fVar32 < fVar33)) {
        ppppfStack_1a8 = (float ****)&ppppfStack_148;
        pppfStack_1a0 = (float ***)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&ppppfStack_1a8,&UNK_143307ea0);
      }
      uVar25 = (ulonglong)uVar8;
      uVar9 = pdb_1413f9030(lStack_240);
      uVar22 = (ulonglong)uVar9;
      uVar18 = *(ulonglong *)(lStack_150 + 0x98);
      if (uVar18 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar25,uVar18,&UNK_143306608);
      }
      uVar27 = uVar25 + 1;
      if (uVar18 <= uVar27) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar27,uVar18,&UNK_143306620);
      }
      if (uVar18 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar22,uVar18,&UNK_143306608);
      }
      uVar30 = uVar22 + 1;
      if (uVar18 <= uVar30) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar30,uVar18,&UNK_143306620);
      }
      lVar16 = *(longlong *)(lStack_150 + 0x90);
      fVar36 = fVar32 - extraout_XMM0_Da;
      fVar33 = *(float *)(lVar16 + 8 + uVar25 * 0xc);
      uVar41 = *(undefined8 *)(lVar16 + uVar25 * 0xc);
      uVar42 = *(undefined8 *)(lVar16 + uVar27 * 0xc);
      fVar34 = *(float *)(lVar16 + 8 + uVar27 * 0xc);
      fVar44 = fVar32 - extraout_XMM0_Da_00;
      fVar40 = *(float *)(lVar16 + 8 + uVar22 * 0xc);
      uVar2 = *(undefined8 *)(lVar16 + uVar22 * 0xc);
      uVar3 = *(undefined8 *)(lVar16 + uVar30 * 0xc);
      fVar35 = *(float *)(lVar16 + 8 + uVar30 * 0xc);
      cVar5 = *pcVar21;
      if (cVar5 == '\0') {
        puStack_1c8 = (undefined4 *)*puVar1;
        ppppfStack_1c0 = *(float *****)(param_2 + 0xc);
        uStack_2a0 = pdb_140def850(&puStack_1c8);
        uStack_2a4 = pdb_140def850(&puStack_1c8);
        pdb_140a85190(&ppppfStack_1a8,pcVar21);
        pdb_1413f8b70(&ppppfStack_148,&ppppfStack_1a8);
        if (SBORROW8(0,(longlong)ppppfStack_148)) {
          fVar40 = fStack_358;
          fVar34 = fStack_348;
          puVar17 = uStack_190;
          ppppfVar11 = ppppfStack_188;
          if (ppppfStack_1a8 != (float ****)0x0) {
            pub_1406abac0((byte *)pppfStack_1a0,(longlong)ppppfStack_1a8 << 3,4);
            fVar40 = fStack_358;
            fVar34 = fStack_348;
            puVar17 = uStack_190;
            ppppfVar11 = ppppfStack_188;
          }
          goto joined_r0x000141411bb8;
        }
        uStack_1d8 = uStack_118;
        auVar46._4_4_ = uStack_134;
        auVar46._0_4_ = uStack_138;
        auVar46._8_4_ = uStack_130;
        auVar46._12_4_ = uStack_12c;
        ppppfStack_1e8 = ppppfStack_128;
        pbStack_1e0 = pbStack_120;
        ppppfStack_208 = ppppfStack_148;
        pppfStack_200 = pppfStack_140;
        auStack_1f8 = auVar46;
        if (ppppfStack_1a8 != (float ****)0x0) {
          pub_1406abac0((byte *)pppfStack_1a0,(longlong)ppppfStack_1a8 << 3,4);
        }
        if (uStack_190 != (undefined4 *)0x0) {
          pub_1406abac0((byte *)ppppfStack_188,(longlong)uStack_190 << 2,4);
        }
        pppfStack_1a0 = (float ***)((longlong)ppppfStack_1e8 + (longlong)pbStack_1e0 * 4);
        ppppfStack_278 = ppppfStack_1e8;
        ppppfStack_1a8 = ppppfStack_1e8;
        uStack_198 = &uStack_2a0;
        uStack_190 = &uStack_2a4;
        pdb_1413ec300(&puStack_308,&ppppfStack_1a8);
        ppppfStack_100 = (float ****)auStack_1f8._0_8_;
        lStack_288 = auStack_1f8._8_8_;
LAB_141411ffd:
        puStack_2b0 = puStack_308;
        ppppfStack_250 = ppppfStack_300;
        uStack_370 = uStack_2f8;
        uStack_338 = CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar42 >> 0x20) +
                              (float)((ulonglong)uVar41 >> 0x20) * fVar36,
                              extraout_XMM0_Da * (float)uVar42 + (float)uVar41 * fVar36);
        fStack_330 = fVar34 * extraout_XMM0_Da + fVar36 * fVar33;
        fStack_32c = extraout_XMM0_Da_00 * (float)uVar3 + (float)uVar2 * fVar44;
        fStack_328 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar3 >> 0x20) +
                     (float)((ulonglong)uVar2 >> 0x20) * fVar44;
        fStack_324 = fVar35 * extraout_XMM0_Da_00 + fVar44 * fVar40;
        ppppfStack_280 = ppppfStack_208;
        pppfStack_248 = pppfStack_200;
        pdb_1413f9bf0(&ppppfStack_1a8,lStack_240,uVar8,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da));
        fVar32 = ppppfStack_1a8._0_4_;
        fVar33 = pppfStack_1a0._0_4_;
        pdb_1413f9bf0(&ppppfStack_1a8,lStack_240,uVar9,
                      CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00));
        auVar7._4_4_ = ppppfStack_1a8._0_4_ * ppppfStack_1a8._0_4_ +
                       pppfStack_1a0._0_4_ * pppfStack_1a0._0_4_;
        auVar7._0_4_ = fVar32 * fVar32 + fVar33 * fVar33;
        auVar7._8_8_ = 0;
        auVar46 = sqrtps(auVar46,auVar7);
        auVar48._0_8_ = auVar46._0_8_;
        auVar48._8_4_ = auVar46._4_4_;
        auVar48._12_4_ = auVar46._4_4_;
        auVar47._0_4_ = auVar46._0_4_;
        auVar47._8_8_ = auVar48._8_8_;
        auVar47._4_4_ = auVar47._0_4_;
        auVar46 = divps(_DAT_142e3c640,auVar47);
        fStack_398 = auVar46._0_4_ * (float)((uint)fVar33 ^ _DAT_142e37820);
        fStack_394 = auVar46._4_4_ * fVar32;
        fStack_390 = auVar46._8_4_ * (float)((uint)pppfStack_1a0._0_4_ ^ _UNK_142e37824);
        fStack_38c = auVar46._12_4_ * ppppfStack_1a8._0_4_;
        fVar32 = (float)pdb_140930390(lStack_150);
        fVar33 = fVar32 + _DAT_143007988 + _DAT_143307c98;
        fVar32 = (float)pdb_140930390(lStack_150);
        uStack_168 = CONCAT44(fStack_324,fStack_328);
        uStack_178 = uStack_338;
        uStack_170 = CONCAT44(fStack_32c,fStack_330);
        uStack_198 = (undefined4 *)CONCAT44(fStack_394,fStack_398);
        uStack_190 = (undefined4 *)CONCAT44(fStack_38c,fStack_390);
        uStack_160 = 0;
        uStack_158 = 0;
        pppfStack_1a0 = (float ***)0x2;
        pbStack_180 = (byte *)0x2;
        fVar32 = (fVar32 - *(float *)(lStack_150 + 0x288)) + _DAT_142f44720;
        lVar16 = 0;
        ppppfVar11 = (float ****)0x0;
        do {
          ppppfVar13 = (float ****)(lVar16 + 1);
          ppppfStack_188 = ppppfVar13;
          if (ppppfVar11 == (float ****)0x2) break;
          ppppfStack_1a8 = (float ****)((longlong)ppppfVar11 + 1U);
          fVar40 = (float)pdb_14140ce00(param_5,*(float *)(&uStack_198 + (longlong)ppppfVar11) *
                                                _DAT_143307c9c +
                                                *(float *)((longlong)&uStack_178 + lVar16 * 0xc),
                                        *(float *)((longlong)&uStack_198 +
                                                  (longlong)ppppfVar11 * 8 + 4) * _DAT_143307c9c +
                                        *(float *)((longlong)&uStack_170 + lVar16 * 0xc));
          fVar40 = fVar40 + _DAT_142f44720;
          fVar34 = fVar40;
          if (fVar32 <= fVar40) {
            fVar34 = fVar32;
          }
          fVar32 = (float)(~-(uint)NAN(fVar32) & (uint)fVar34 | -(uint)NAN(fVar32) & (uint)fVar40);
          lVar16 = 1;
          ppppfVar11 = (float ****)((longlong)ppppfVar11 + 1U);
        } while (ppppfVar13 != (float ****)0x2);
        fVar34 = _DAT_142f44720;
        fVar40 = (float)pub_142e32a40((fVar33 - fVar32) / _DAT_142f44720);
        uVar18 = 0;
        if (0.0 <= fVar40) {
          uVar18 = (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f | (longlong)fVar40
          ;
        }
        if (_DAT_142e36f30 < fVar40) {
          uVar18 = 0xffffffffffffffff;
        }
        if (uVar18 < 3) {
          uVar18 = 2;
        }
        if (3 < uVar18) {
          uVar18 = 4;
        }
        fVar40 = fVar33 - (float)(longlong)uVar18 * fVar34;
        fVar34 = fVar32;
        if (fVar32 <= fVar40) {
          fVar34 = fVar40;
        }
        fVar40 = (float)(-(uint)NAN(fVar40) & (uint)fVar32 | ~-(uint)NAN(fVar40) & (uint)fVar34);
        fVar34 = (float)(longlong)uVar18 * _DAT_143307ca0;
        if (_DAT_142e37838 <= fVar34) {
          fVar34 = _DAT_142e37838;
        }
        if (fVar33 - fVar40 < (fVar33 - fVar32) - (fVar33 - fVar40)) {
          fVar40 = fVar33 + _DAT_143007988;
          fVar34 = fVar32;
          if (fVar32 <= fVar40) {
            fVar34 = fVar40;
          }
          fVar40 = (float)(~-(uint)NAN(fVar40) & (uint)fVar34 | -(uint)NAN(fVar40) & (uint)fVar32);
          uVar18 = 2;
          fVar34 = _DAT_143307ca4;
        }
        uVar41 = param_7;
        uVar42 = param_6;
        pdb_1407f60f0(&uStack_338,&fStack_398);
        fVar32 = fVar32 + _DAT_14300b368;
        ppppfVar11 = ppppfStack_210;
        if (ppppfStack_100 < ppppfStack_210) {
          ppppfVar11 = ppppfStack_100;
        }
        if (ppppfVar11 != (float ****)0x0) {
          uVar22 = (longlong)ppppfVar11 * 4 - 4;
          pfVar12 = pfStack_218;
          if (0x1b < uVar22) {
            uVar22 = (uVar22 >> 2) + 1;
            uVar25 = uVar22 & 0xfffffffffffffff8;
            pfVar12 = pfStack_218 + uVar25;
            uVar27 = 0;
            do {
              pfVar15 = pfStack_218 + uVar27;
              *pfVar15 = fVar32;
              pfVar15[1] = fVar32;
              pfVar15[2] = fVar32;
              pfVar15[3] = fVar32;
              pfVar15 = pfStack_218 + uVar27 + 4;
              *pfVar15 = fVar32;
              pfVar15[1] = fVar32;
              pfVar15[2] = fVar32;
              pfVar15[3] = fVar32;
              uVar27 = uVar27 + 8;
            } while (uVar25 != uVar27);
            if (uVar22 == uVar25) goto LAB_1414123fe;
          }
          do {
            *pfVar12 = fVar32;
            pfVar12 = pfVar12 + 1;
          } while (pfVar12 != pfStack_218 + (longlong)ppppfVar11);
        }
LAB_1414123fe:
        bVar31 = ppppfStack_210 < ppppfStack_100;
        ppppfStack_210 = ppppfStack_100;
        if (bVar31) {
          uVar22 = (longlong)ppppfStack_100 - (longlong)ppppfVar11;
          ppppfStack_210 = ppppfVar11;
          if ((ulonglong)(lStack_220 - (longlong)ppppfVar11) < uVar22) {
            pdb_142d7f1b0(&lStack_220,ppppfVar11,uVar22,4,4,uVar41,uVar42);
            pfVar12 = pfStack_218 + (longlong)ppppfStack_210;
          }
          else {
            pfVar12 = pfStack_218 + (longlong)ppppfVar11;
          }
          if (1 < uVar22) {
            pbVar26 = (byte *)(~(ulonglong)ppppfVar11 + (longlong)ppppfStack_100);
            pbVar23 = (byte *)0x1;
            if (pbVar26 < (byte *)0x8) {
LAB_141412489:
              lVar16 = (longlong)(pbVar23 + (longlong)ppppfVar11) - (longlong)ppppfStack_100;
              do {
                *pfVar12 = fVar32;
                pfVar12 = pfVar12 + 1;
                lVar16 = lVar16 + 1;
              } while (lVar16 != 0);
            }
            else {
              pbVar28 = (byte *)((ulonglong)pbVar26 & 0xfffffffffffffff8);
              pfVar12 = pfVar12 + (longlong)pbVar28;
              pbVar23 = pbVar28 + 1;
              pbVar29 = (byte *)0x0;
              do {
                pfVar15 = pfStack_218 + (longlong)((longlong)ppppfStack_210 + (longlong)pbVar29);
                *pfVar15 = fVar32;
                pfVar15[1] = fVar32;
                pfVar15[2] = fVar32;
                pfVar15[3] = fVar32;
                pfVar15 = pfStack_218 +
                          (longlong)((longlong)ppppfStack_210 + (longlong)(pbVar29 + 4));
                *pfVar15 = fVar32;
                pfVar15[1] = fVar32;
                pfVar15[2] = fVar32;
                pfVar15[3] = fVar32;
                pbVar29 = pbVar29 + 8;
              } while (pbVar28 != pbVar29);
              if (pbVar26 != pbVar28) goto LAB_141412489;
            }
            ppppfStack_210 = (float ****)((longlong)ppppfStack_210 + (uVar22 - 1));
          }
          *pfVar12 = fVar32;
          ppppfStack_210 = (float ****)((longlong)ppppfStack_210 + 1);
        }
        ppppfVar11 = ppppfStack_258;
        uVar22 = (longlong)ppppfStack_100 - (longlong)ppppfStack_258;
        uStack_298 = uVar18;
        if (ppppfStack_258 <= ppppfStack_100 && uVar22 != 0) {
          if ((ulonglong)(lStack_268 - (longlong)ppppfStack_258) < uVar22) {
            pdb_142d7f1b0(&lStack_268,ppppfStack_258,uVar22,4,4,uVar41,uVar42);
            pbVar23 = pbStack_260 + (longlong)ppppfStack_258 * 4;
            pbVar26 = pbStack_260;
            ppppfVar13 = ppppfStack_258;
          }
          else {
            pbVar23 = pbStack_260 + (longlong)ppppfStack_258 * 4;
            pbVar26 = pbStack_260;
            ppppfVar13 = ppppfStack_258;
          }
          pbStack_260 = pbVar26;
          if (1 < uVar22) {
            ppppfStack_258 = ppppfVar13;
            pub_142e32780(pbVar23,0,
                          (longlong)(~(ulonglong)ppppfVar11 + (longlong)ppppfStack_100) * 4);
            pbVar23 = pbVar26 + ((longlong)((longlong)ppppfStack_100 + (longlong)ppppfVar13) -
                                (longlong)ppppfVar11) * 4 + -4;
            ppppfVar13 = (float ****)((longlong)ppppfVar13 + (uVar22 - 1));
          }
          pbVar23[0] = 0;
          pbVar23[1] = 0;
          pbVar23[2] = 0;
          pbVar23[3] = 0;
          ppppfStack_258 = (float ****)((longlong)ppppfVar13 + 1);
        }
        lVar16 = uStack_298 - 1;
        uStack_2c8 = (longlong)ppppfStack_100 * 8;
        uVar18 = 0;
LAB_141412560:
        if (uVar18 < uStack_298) {
          fVar35 = (float)(longlong)uVar18 * _DAT_142f95160;
          if (uStack_298 != 2) {
            fVar35 = (float)(longlong)uVar18 / (float)lVar16;
          }
          uVar18 = uVar18 + 1;
          fVar36 = fVar40 * fVar35 + fVar33 * (_DAT_142e36f28 - fVar35);
          if (0.0 < fVar36) {
            fVar44 = (_DAT_142e36f28 - fVar35) * _DAT_143307ca0;
            if (ppppfStack_100 == (float ****)0x0) {
              pppfVar14 = (float ***)0x4;
            }
            else {
              pdb_14007ee60();
              uVar22 = uStack_2c8;
              pppfVar14 = (float ***)pub_1406abab0(uStack_2c8,4);
              if (pppfVar14 == (float ***)0x0) {
                pdb_142dc7e2a(4,uVar22);
                goto LAB_141413025;
              }
              pub_142e32760(pppfVar14,pppfStack_248,uVar22);
            }
            fVar44 = fVar35 * fVar34 + fVar44;
            uStack_2d8 = (ulonglong)ppppfStack_100 & 0x1fffffffffffffff;
            if (uStack_370 < ((ulonglong)ppppfStack_100 & 0x1fffffffffffffff)) {
              uStack_2d8 = uStack_370;
            }
            pppfStack_2d0 = pppfVar14;
            for (ppppfStack_1d0 = (float ****)0x0; ppppfStack_1d0 < uStack_2d8;
                ppppfStack_1d0 = (float ****)((longlong)ppppfStack_1d0 + 1)) {
              if (cVar5 == '\0') {
                ppppfStack_1a8 = (float ****)*puVar1;
                pppfStack_1a0 = *(float ****)(param_2 + 0xc);
                auVar46 = ZEXT416((uint)*(float *)((longlong)ppppfStack_250 +
                                                  (longlong)ppppfStack_1d0 * 4));
                fVar35 = (float)pdb_140def5e0(&ppppfStack_1a8);
                fVar37 = auVar46._0_4_;
              }
              else {
                uStack_198 = *(undefined4 **)(param_2 + 0x14);
                ppppfStack_1a8 = (float ****)*puVar1;
                pppfStack_1a0 = *(float ****)(param_2 + 0xc);
                auVar46 = ZEXT416((uint)*(float *)((longlong)ppppfStack_250 +
                                                  (longlong)ppppfStack_1d0 * 4));
                fVar35 = (float)pdb_140df3370(&ppppfStack_1a8);
                fVar37 = auVar46._0_4_;
              }
              ppfVar4 = pppfStack_2d0[(longlong)ppppfStack_1d0];
              *(float *)(pppfStack_2d0 + (longlong)ppppfStack_1d0) =
                   SUB84(ppfVar4,0) + fVar35 * fVar44;
              *(float *)((longlong)(pppfStack_2d0 + (longlong)ppppfStack_1d0) + 4) =
                   (float)((ulonglong)ppfVar4 >> 0x20) + fVar37 * fVar44;
            }
            ppppfStack_208 = ppppfStack_100;
            auStack_1f8._0_8_ = ppppfStack_100;
            puStack_1c8 = (undefined4 *)((ulonglong)puStack_1c8 & 0xffffffff00000000);
            uStack_f1 = 1;
            pppfStack_200 = pppfStack_2d0;
            pdb_1413e5e50(&ppppfStack_208,&puStack_1c8);
            uStack_138 = auStack_1f8._0_4_;
            uStack_134 = auStack_1f8._4_4_;
            ppppfStack_148 = ppppfStack_208;
            pppfStack_140 = pppfStack_200;
            uStack_f1 = 0;
            pdb_140080c90(&ppppfStack_1a8,&ppppfStack_148,0);
            puVar17 = uStack_198;
            if (!SBORROW8(0,(longlong)ppppfStack_1a8)) {
              uStack_118 = uStack_178;
              ppppfStack_128 = ppppfStack_188;
              pbStack_120 = pbStack_180;
              uStack_138 = (undefined4)uStack_198;
              uStack_134 = uStack_198._4_4_;
              uStack_130 = (undefined4)uStack_190;
              uStack_12c = uStack_190._4_4_;
              ppppfStack_148 = ppppfStack_1a8;
              pppfStack_140 = pppfStack_1a0;
              puVar20 = puStack_228;
              if (uStack_198 < puStack_228) {
                puVar20 = uStack_198;
              }
              if (puVar20 != (undefined4 *)0x0) {
                uVar22 = (longlong)puVar20 * 4 - 4;
                pfVar12 = pfStack_230;
                if (0x1b < uVar22) {
                  uVar22 = (uVar22 >> 2) + 1;
                  uVar25 = uVar22 & 0xfffffffffffffff8;
                  pfVar12 = pfStack_230 + uVar25;
                  uVar27 = 0;
                  do {
                    pfVar15 = pfStack_230 + uVar27;
                    *pfVar15 = fVar36;
                    pfVar15[1] = fVar36;
                    pfVar15[2] = fVar36;
                    pfVar15[3] = fVar36;
                    pfVar15 = pfStack_230 + uVar27 + 4;
                    *pfVar15 = fVar36;
                    pfVar15[1] = fVar36;
                    pfVar15[2] = fVar36;
                    pfVar15[3] = fVar36;
                    uVar27 = uVar27 + 8;
                  } while (uVar25 != uVar27);
                  if (uVar22 == uVar25) goto LAB_141412845;
                }
                do {
                  *pfVar12 = fVar36;
                  pfVar12 = pfVar12 + 1;
                } while (pfVar12 != pfStack_230 + (longlong)puVar20);
              }
LAB_141412845:
              uVar22 = (longlong)uStack_198 - (longlong)puVar20;
              if (puVar20 <= uStack_198 && uVar22 != 0) {
                puStack_228 = puVar20;
                if ((ulonglong)(lStack_238 - (longlong)puVar20) < uVar22) {
                  pdb_142d7f1b0(&lStack_238,puVar20,uVar22,4,4);
                  pfVar12 = pfStack_230 + (longlong)puStack_228;
                }
                else {
                  pfVar12 = pfStack_230 + (longlong)puVar20;
                }
                if (1 < uVar22) {
                  uVar25 = ~(ulonglong)puVar20 + (longlong)puVar17;
                  lVar24 = 1;
                  if (uVar25 < 8) {
LAB_1414128c9:
                    lVar24 = (longlong)puVar20 + (lVar24 - (longlong)puVar17);
                    do {
                      *pfVar12 = fVar36;
                      pfVar12 = pfVar12 + 1;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 != 0);
                  }
                  else {
                    uVar27 = uVar25 & 0xfffffffffffffff8;
                    pfVar12 = pfVar12 + uVar27;
                    lVar24 = uVar27 + 1;
                    uVar30 = 0;
                    do {
                      pfVar15 = pfStack_230 + (longlong)puStack_228 + uVar30;
                      *pfVar15 = fVar36;
                      pfVar15[1] = fVar36;
                      pfVar15[2] = fVar36;
                      pfVar15[3] = fVar36;
                      pfVar15 = pfStack_230 + (longlong)puStack_228 + uVar30 + 4;
                      *pfVar15 = fVar36;
                      pfVar15[1] = fVar36;
                      pfVar15[2] = fVar36;
                      pfVar15[3] = fVar36;
                      uVar30 = uVar30 + 8;
                    } while (uVar27 != uVar30);
                    if (uVar25 != uVar27) goto LAB_1414128c9;
                  }
                  puStack_228 = (undefined4 *)((longlong)puStack_228 + (uVar22 - 1));
                }
                *pfVar12 = fVar36;
                puVar17 = (undefined4 *)((longlong)puStack_228 + 1);
              }
              puStack_228 = puVar17;
              uVar10 = pdb_1409012c0(*(undefined4 *)(lStack_150 + 0x274));
              ppppfVar11 = (float ****)CONCAT44(uStack_134,uStack_138);
              if (ppppfStack_210 < ppppfVar11) {
                pdb_142dc8420(0,ppppfVar11,ppppfStack_210,&UNK_143307ed0);
              }
              else {
                if (ppppfVar11 <= ppppfStack_258) {
                  ppppfStack_1a8 = (float ****)0x0;
                  pppfStack_1a0 = (float ***)0x4;
                  uStack_198 = (undefined4 *)0x0;
                  uStack_190 = (undefined4 *)((ulonglong)uStack_190 & 0xffffff0000000000);
                  ppppfStack_188 = (float ****)0x0;
                  uStack_160 = 0;
                  uStack_158 = 0;
                  uStack_170 = 0;
                  uStack_168 = 0;
                  pbStack_180 = (byte *)0x4;
                  uStack_178 = 0;
                  auStack_1f8[4] = 2;
                  pdb_141443020(&lStack_2f0,&ppppfStack_148,uVar10,pfStack_230,puVar17,pfStack_218,
                                ppppfVar11,pbStack_260,ppppfVar11,0,0,&ppppfStack_1a8,0x3e4ccccd,
                                param_8,fVar32,&ppppfStack_208,0);
                  if (ppppfStack_1a8 != (float ****)0x0) {
                    pub_1406abac0((byte *)pppfStack_1a0,(longlong)ppppfStack_1a8 * 0x14,4);
                  }
                  if (ppppfStack_188 != (float ****)0x0) {
                    pub_1406abac0(pbStack_180,(longlong)ppppfStack_188 * 0x14,4);
                  }
                  if (ppppfStack_148 != (float ****)0x0) {
                    pub_1406abac0((byte *)pppfStack_140,(longlong)ppppfStack_148 << 3,4);
                  }
                  if (CONCAT44(uStack_12c,uStack_130) != 0) {
                    pub_1406abac0((byte *)ppppfStack_128,CONCAT44(uStack_12c,uStack_130) << 2,4);
                  }
                  goto LAB_141412560;
                }
                pdb_142dc8420(0,ppppfVar11,ppppfStack_258,&UNK_143307ee8);
              }
LAB_141413025:
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
          }
          goto LAB_141412560;
        }
        if (puStack_2b0 != (undefined4 *)0x0) {
          pub_1406abac0((byte *)ppppfStack_250,(longlong)puStack_2b0 << 2,4);
        }
        pcVar21 = pcStack_270;
        lVar16 = lStack_288;
        fVar34 = fStack_348;
        fVar40 = fStack_358;
        if (ppppfStack_280 != (float ****)0x0) {
          pub_1406abac0((byte *)pppfStack_248,(longlong)ppppfStack_280 << 3,4);
        }
        unaff_RSI = pfStack_290;
        bVar31 = false;
        if (lVar16 != 0) {
          pub_1406abac0((byte *)ppppfStack_278,lVar16 << 2,4);
          bVar31 = false;
        }
      }
      else {
        uStack_378 = *(undefined8 *)(param_2 + 0x14);
        uStack_388 = (undefined4)*puVar1;
        uStack_384 = *(undefined4 *)(param_2 + 8);
        uStack_380 = *(undefined4 *)(param_2 + 0xc);
        uStack_37c = *(undefined4 *)(param_2 + 0x10);
        fVar37 = (float)pdb_140df2570(&uStack_388);
        fVar38 = (float)pdb_140df2570(&uStack_388);
        pdb_140df10b0(&puStack_1c8,&uStack_388);
        pdb_140a85190(&ppppfStack_1a8,pcVar21);
        pdb_1413f8b70(&ppppfStack_148,&ppppfStack_1a8);
        if (!SBORROW8(0,(longlong)ppppfStack_148)) {
          uStack_1d8 = uStack_118;
          auVar46._4_4_ = uStack_134;
          auVar46._0_4_ = uStack_138;
          auVar46._8_4_ = uStack_130;
          auVar46._12_4_ = uStack_12c;
          ppppfStack_1e8 = ppppfStack_128;
          pbStack_1e0 = pbStack_120;
          ppppfStack_208 = ppppfStack_148;
          pppfStack_200 = pppfStack_140;
          auStack_1f8 = auVar46;
          if (ppppfStack_1a8 != (float ****)0x0) {
            pub_1406abac0((byte *)pppfStack_1a0,(longlong)ppppfStack_1a8 << 3,4);
          }
          if (uStack_190 != (undefined4 *)0x0) {
            pub_1406abac0((byte *)ppppfStack_188,(longlong)uStack_190 << 2,4);
          }
          pppfVar14 = pppfStack_200;
          ppppfVar11 = (float ****)auStack_1f8._0_8_;
          if ((float ****)auStack_1f8._0_8_ == (float ****)0x3) {
            fVar39 = SUB84(pppfStack_200[1],0);
            fVar43 = (float)((ulonglong)pppfStack_200[1] >> 0x20);
            fVar45 = SUB84(*pppfStack_200,0) - fVar39;
            fVar49 = (float)((ulonglong)*pppfStack_200 >> 0x20) - fVar43;
            if (_DAT_142e37ad4 <= SQRT(fVar49 * fVar49 + fVar45 * fVar45)) {
              fVar39 = fVar39 - SUB84(pppfStack_200[2],0);
              fVar43 = fVar43 - (float)((ulonglong)pppfStack_200[2] >> 0x20);
              auVar46 = ZEXT416((uint)_DAT_142e37ad4);
              ppppfVar11 = (float ****)0x3;
              if (_DAT_142e37ad4 <= SQRT(fVar43 * fVar43 + fVar39 * fVar39)) goto LAB_141411f9b;
            }
            pdb_14007ee60();
            pfVar12 = (float *)pub_1406abab0(0x10,4);
            if (pfVar12 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,0x10);
            }
            fVar39 = *(float *)((longlong)pppfVar14 + 4);
            ppfVar4 = pppfVar14[2];
            *pfVar12 = *(float *)pppfVar14;
            pfVar12[1] = fVar39;
            pfVar12[2] = SUB84(ppfVar4,0);
            pfVar12[3] = (float)((ulonglong)ppfVar4 >> 0x20);
            ppppfStack_148 = (float ****)0x2;
            uStack_138 = 2;
            uStack_134 = 0;
            pppfStack_140 = (float ***)pfVar12;
            pdb_140080c90(&ppppfStack_1a8,&ppppfStack_148,0);
            if (SBORROW8(0,(longlong)ppppfStack_1a8)) {
              ppppfStack_148 = (float ****)pppfStack_1a0;
              pppfStack_140 = (float ***)uStack_198;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143306430,0x2b,&ppppfStack_148,&UNK_143306410,&UNK_143307eb8);
            }
            uStack_118 = uStack_178;
            ppppfStack_128 = ppppfStack_188;
            pbStack_120 = pbStack_180;
            uStack_130 = SUB84(uStack_190,0);
            uStack_12c = (undefined4)((ulonglong)uStack_190 >> 0x20);
            ppppfStack_148 = ppppfStack_1a8;
            pppfStack_140 = pppfStack_1a0;
            uStack_138 = (undefined4)uStack_198;
            uStack_134 = uStack_198._4_4_;
            if (ppppfStack_208 != (float ****)0x0) {
              pub_1406abac0((byte *)pppfVar14,(longlong)ppppfStack_208 << 3,4);
            }
            if (auStack_1f8._8_8_ != 0) {
              pub_1406abac0((byte *)ppppfStack_1e8,auStack_1f8._8_8_ << 2,4);
            }
            uStack_1d8 = uStack_118;
            auVar46._4_4_ = uStack_134;
            auVar46._0_4_ = uStack_138;
            auVar46._8_4_ = uStack_130;
            auVar46._12_4_ = uStack_12c;
            ppppfStack_1e8 = ppppfStack_128;
            pbStack_1e0 = pbStack_120;
            ppppfStack_208 = ppppfStack_148;
            pppfStack_200 = pppfStack_140;
            auStack_1f8 = auVar46;
            pdb_14007ee60();
            ppppfVar13 = (float ****)pub_1406abab0(8,4);
            if (ppppfVar13 == (float ****)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,8);
            }
            ppppfStack_148 = (float ****)CONCAT44(ppppfStack_148._4_4_,fVar37);
            if ((fVar37 < 0.0) || (fVar32 < fVar37)) {
              ppppfStack_1a8 = (float ****)&ppppfStack_148;
              pppfStack_1a0 = (float ***)pdb_140f70fc0;
              ppppfStack_1d0 = ppppfVar13;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&ppppfStack_1a8,&UNK_143307a98);
            }
            ppppfStack_148 = (float ****)CONCAT44(ppppfStack_148._4_4_,fVar38);
            if ((fVar38 < 0.0) || (fVar32 < fVar38)) {
              ppppfStack_1a8 = (float ****)&ppppfStack_148;
              pppfStack_1a0 = (float ***)pdb_140f70fc0;
              ppppfStack_1d0 = ppppfVar13;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&ppppfStack_1a8,&UNK_143307a98);
            }
            *(float *)ppppfVar13 = fVar37;
            *(float *)((longlong)ppppfVar13 + 4) = fVar38;
            if (puStack_1c8 != (undefined4 *)0x0) {
              pub_1406abac0((byte *)ppppfStack_1c0,(longlong)puStack_1c8 << 2,4);
            }
            puStack_1c8 = (undefined4 *)0x2;
            uStack_1b8 = 2;
            ppppfVar11 = (float ****)auStack_1f8._0_8_;
            ppppfStack_1c0 = ppppfVar13;
          }
LAB_141411f9b:
          lStack_288 = auStack_1f8._8_8_;
          ppppfStack_278 = ppppfStack_1e8;
          puStack_308 = puStack_1c8;
          ppppfStack_300 = ppppfStack_1c0;
          uStack_2f8 = uStack_1b8;
          ppppfStack_100 = ppppfVar11;
          goto LAB_141411ffd;
        }
        if (ppppfStack_1a8 != (float ****)0x0) {
          pub_1406abac0((byte *)pppfStack_1a0,(longlong)ppppfStack_1a8 << 3,4);
        }
        fVar34 = fStack_348;
        fVar40 = fStack_358;
        puVar17 = puStack_1c8;
        ppppfVar11 = ppppfStack_1c0;
        if (uStack_190 != (undefined4 *)0x0) {
          pub_1406abac0((byte *)ppppfStack_188,(longlong)uStack_190 << 2,4);
          puVar17 = puStack_1c8;
          ppppfVar11 = ppppfStack_1c0;
        }
joined_r0x000141411bb8:
        if (puVar17 != (undefined4 *)0x0) {
          pub_1406abac0((byte *)ppppfVar11,(longlong)puVar17 << 2,4);
        }
        bVar31 = false;
        unaff_RSI = pfStack_290;
      }
    }
    param_3 = lStack_360;
    if (lStack_320 != 0) {
      pub_1406abac0((byte *)pfStack_318,lStack_320 << 2,4);
      param_3 = lStack_360;
    }
  } while( true );
}

