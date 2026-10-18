// VA 0x141439f00, PDB extent 8324 bytes
// system_wall_constructor::utils::stairs_signifiers::stairs_signifiers_new<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/stairs_signifiers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::stairs_signifiers::stairs_signifiers_new<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/stairs_signifiers.rs
   Extent: 8324 */

void pdb_141439f00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float *pfVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  longlong lVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  ulonglong *puVar26;
  byte *pbVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  float *pfVar30;
  float *pfVar31;
  undefined4 *puVar32;
  bool bVar33;
  undefined4 uVar34;
  float fVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar36;
  float fVar37;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar38;
  undefined4 in_XMM1_Da;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float unaff_XMM14_Da;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined *puVar52;
  int iStack_400;
  float afStack_3fc [4];
  undefined8 uStack_3ec;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  longlong lStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  longlong lStack_390;
  longlong lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  int iStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulonglong uStack_320;
  ulonglong *puStack_318;
  float *pfStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  longlong lStack_2e8;
  byte *pbStack_2e0;
  undefined8 uStack_2d0;
  ulonglong *puStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  ulonglong *puStack_288;
  longlong lStack_280;
  ulonglong *puStack_278;
  longlong lStack_270;
  undefined1 auStack_268 [16];
  longlong lStack_250;
  float *pfStack_248;
  longlong lStack_240;
  float fStack_238;
  float fStack_234;
  longlong lStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  longlong lStack_1c0;
  ulonglong *puStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  ulonglong *puStack_148;
  float *pfStack_140;
  longlong lStack_138;
  ulonglong *puStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  ulonglong *puStack_118;
  ulonglong uStack_110;
  longlong lStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  auStack_2f8._0_8_ = param_2;
  lStack_230 = param_1 + 0x29f;
  uStack_120 = param_4;
  lStack_100 = param_1;
  cVar13 = pdb_1408ff980();
  if (cVar13 == '\0') {
    lStack_3c8 = 0;
    goto LAB_14143a0a0;
  }
  puVar17 = (undefined8 *)pdb_1413e4400(param_3,&UNK_1433056b0);
  if ((puVar17 == (undefined8 *)0x0) ||
     (lVar18 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143309f18);
  }
  lVar23 = *(longlong *)(lStack_100 + 0x180);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  lVar19 = lVar23 + 0x18;
  LOCK();
  bVar33 = *(char *)(lVar23 + 0x18) == '\0';
  if (bVar33) {
    *(char *)(lVar23 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar33) {
    pdb_140e9a150(lVar19);
    lVar19 = *(longlong *)(lVar23 + 0x10);
    if (lVar19 == 0) goto LAB_14143a04f;
LAB_14143a001:
    piVar20 = (int *)(*(longlong *)(lVar23 + 8) + lVar19 * 4 + -4);
    if (piVar20 == (int *)0x0) goto LAB_14143a04f;
    iStack_370 = *piVar20;
    lStack_3c0 = *(longlong *)(lVar18 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar19,1,1000000000);
    pdb_140e9a150(lVar19);
    lVar19 = *(longlong *)(lVar23 + 0x10);
    if (lVar19 != 0) goto LAB_14143a001;
LAB_14143a04f:
    lStack_3c0 = *(longlong *)(lVar18 + 0x10);
    if (lStack_3c0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_370 = (int)lStack_3c0 + -1;
  }
  lStack_3c8 = *(longlong *)(lVar18 + 8);
  uStack_3b8 = *(undefined4 *)(lVar18 + 0x18);
  uStack_3b4 = *(undefined4 *)(lVar18 + 0x1c);
  uStack_3b0 = *(undefined4 *)(lVar18 + 0x20);
  uStack_3ac = *(undefined4 *)(lVar18 + 0x24);
  in_XMM1_Da = *(undefined4 *)(lVar18 + 0x28);
  uStack_39c = *(undefined4 *)(lVar18 + 0x2c);
  uStack_398 = *(undefined4 *)(lVar18 + 0x30);
  uStack_394 = *(undefined4 *)(lVar18 + 0x34);
  lStack_390 = lVar18 + 0x78;
  lStack_388 = lVar18 + 0x58;
  uStack_380 = *(undefined8 *)(lVar18 + 0x38);
  uStack_378 = *(undefined8 *)(lVar18 + 0x40);
  lStack_3a8 = lVar23;
  uStack_3a0 = in_XMM1_Da;
LAB_14143a0a0:
  piVar20 = (int *)pdb_14092fa10(lStack_100);
  if (piVar20 != (int *)0x0) {
    if (*piVar20 == 1) {
      pdb_14007ee60();
      uStack_210 = pub_1406abab0(8,8);
      if (uStack_210 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      uStack_210[0] = 0;
      uStack_210[1] = 0;
      uStack_210[2] = 0;
      uStack_210[3] = 0;
      uStack_210[4] = 0;
      uStack_210[5] = 0;
      uStack_210[6] = 0;
      uStack_210[7] = 0;
      uStack_218 = (byte *)0x1;
      lVar18 = lStack_100 + 0x88;
      uVar24 = 1;
      bVar33 = false;
      pbVar27 = (byte *)0x1;
      while ((pbStack_208 = pbVar27, !bVar33 && (uVar24 < 3))) {
        bVar33 = uVar24 == 2;
        uVar22 = uVar24 + 1;
        if (bVar33) {
          uVar22 = uVar24;
        }
        uVar24 = uVar22;
        uVar34 = pdb_140df3e10(piVar20 + 1);
        uVar15 = pdb_1413fa210(lVar18,uVar34,in_XMM1_Da);
        pbVar27 = pbStack_208;
        if (pbStack_208 == uStack_218) {
          pdb_142d896b0(&uStack_218);
        }
        *(ulonglong *)(uStack_210 + (longlong)pbVar27 * 8) = (ulonglong)uVar15;
        pbVar27 = pbVar27 + 1;
        in_XMM1_Da = uVar34;
      }
      lVar18 = *(longlong *)(lStack_100 + 0x98);
      if (pbVar27 == uStack_218) {
        pdb_142d896b0(&uStack_218);
      }
      *(longlong *)(uStack_210 + (longlong)pbVar27 * 8) = lVar18 + -1;
      pbStack_208 = pbVar27 + 1;
      uStack_1a0 = (code *)(uStack_210 + (longlong)pbVar27 * 8 + 8);
      uStack_1a8 = uStack_210;
      uStack_198 = (byte *)0x0;
      pdb_1413ec8c0(&uStack_2d0,&uStack_1a8);
      if (uStack_218 != (byte *)0x0) {
        pub_1406abac0(uStack_210,(longlong)uStack_218 << 3,8);
      }
      auStack_268._0_8_ = uStack_2d0;
    }
    else {
      pdb_14007ee60();
      puStack_2c8 = (ulonglong *)pub_1406abab0(0x10,8);
      if (puStack_2c8 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x10);
      }
      lVar18 = *(longlong *)(lStack_100 + 0x98);
      *puStack_2c8 = 0;
      puStack_2c8[1] = lVar18 - 1;
      uStack_2d0 = 1;
      lStack_2c0 = 1;
      auStack_268._0_8_ = 1;
    }
    fVar40 = _DAT_143014728;
    fVar37 = _DAT_142e3788c;
    fVar36 = _DAT_142e36f50;
    lStack_138 = 0;
    puStack_130 = (ulonglong *)0x8;
    lStack_128 = 0;
    auStack_308._0_8_ = puStack_2c8 + lStack_2c0 * 2;
    puStack_148 = puStack_2c8;
    puStack_118 = puStack_2c8;
LAB_14143a33f:
    if (puStack_118 != (ulonglong *)auStack_308._0_8_) {
      uVar22 = *puStack_118;
      uVar29 = puStack_118[1];
      uVar24 = uVar29;
      if ((*(ulonglong *)(lStack_100 + 0x98) <= uVar29) || (uVar24 = uVar29 + 1, uVar24 < uVar22)) {
        pdb_142dc8420(uVar22,uVar24,*(ulonglong *)(lStack_100 + 0x98),&UNK_143309ee8);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puStack_118 = puStack_118 + 2;
      lVar23 = *(longlong *)(lStack_100 + 0x90);
      puVar25 = (undefined4 *)(lVar23 + uVar22 * 0xc);
      lVar18 = 0;
      uStack_228 = uVar29;
      do {
        uStack_110 = 0;
        lVar19 = lVar18;
        bVar33 = true;
LAB_14143a3e0:
        do {
          bVar11 = bVar33;
          lVar18 = lStack_128;
          if (puVar25 == (undefined4 *)(lVar23 + uVar24 * 0xc)) {
            if (uStack_110 == 1) {
              if (lStack_128 == lStack_138) {
                pdb_142d8a210(&lStack_138);
              }
              puStack_130[lVar18 * 2] = (ulonglong)uStack_2b8;
              puStack_130[lVar18 * 2 + 1] = uStack_228;
              lStack_128 = lVar18 + 1;
            }
            goto LAB_14143a33f;
          }
          fVar38 = (float)puVar25[1];
          fVar35 = (float)pdb_14140ce00(uStack_120,*puVar25,puVar25[2]);
          puVar25 = puVar25 + 3;
          lVar18 = lVar19 + 1;
          uVar29 = lVar19 + uVar22;
          lVar19 = lVar18;
          if (fVar38 - fVar35 < fVar36) {
            fVar35 = (float)pdb_140930390(lStack_100);
            if (fVar38 <= fVar40) {
              fVar38 = fVar40;
            }
            if (fVar35 - fVar38 < fVar37) {
              bVar33 = false;
              if (bVar11) {
                uStack_2b8 = (byte *)((uVar29 - 1) + (ulonglong)(uVar29 == 0));
                uStack_110 = 1;
                bVar33 = false;
              }
              goto LAB_14143a3e0;
            }
          }
          lVar12 = lStack_128;
          bVar33 = true;
        } while (bVar11);
        if ((uStack_110 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143309f00);
        }
        if (lStack_128 == lStack_138) {
          pdb_142d8a210(&lStack_138);
        }
        puStack_130[lVar12 * 2] = (ulonglong)uStack_2b8;
        puStack_130[lVar12 * 2 + 1] = uVar29;
        lStack_128 = lVar12 + 1;
      } while( true );
    }
    puVar25 = (undefined4 *)0x0;
    if (auStack_268._0_8_ != 0) {
      puVar25 = (undefined4 *)(auStack_268._0_8_ << 4);
      pub_1406abac0((byte *)puStack_148,(ulonglong)puVar25,8);
    }
    if (lStack_128 == 0) {
      if (lStack_138 != 0) {
        pub_1406abac0((byte *)puStack_130,lStack_138 << 4,8);
      }
    }
    else {
      lStack_1c0 = 0;
      puStack_1b8 = (ulonglong *)0x4;
      lStack_1b0 = 0;
      uStack_f1 = 1;
      puVar21 = (undefined4 *)pdb_140c2b5c0(param_6);
      fVar37 = _DAT_142e42360;
      fVar36 = _DAT_142e37ae0;
LAB_14143a5b3:
      while (puVar32 = puVar21, puVar32 != puVar25) {
        puVar21 = puVar32 + 5;
        bVar14 = *(byte *)(puVar32 + 4);
        if (bVar14 - 3 < 2) goto LAB_14143a620;
        if (bVar14 == 0) goto LAB_14143a5da;
        if (bVar14 == 1) goto LAB_14143a620;
      }
      lStack_280 = lStack_138;
      puStack_318 = puStack_130 + lStack_128 * 2;
      lStack_270 = lStack_100 + 0x88;
      puStack_118 = *(ulonglong **)auStack_2f8._0_8_;
      puStack_278 = puStack_130;
      puStack_288 = puStack_130;
      uStack_220 = 0;
      puVar28 = puStack_130;
      fVar36 = _DAT_142e36f28;
      while (puVar28 != puStack_318) {
        uVar24 = *puVar28;
        uVar22 = *(ulonglong *)(lStack_100 + 0xb0);
        if (uVar22 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar24,uVar22,&UNK_143309de0);
        }
        uVar29 = puVar28[1];
        if (uVar22 <= uVar29) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar29,uVar22,&UNK_143309df8);
        }
        puVar17 = *(undefined8 **)(lStack_100 + 0xa8);
        fVar37 = *(float *)((longlong)puVar17 + uVar24 * 4);
        fVar40 = *(float *)((longlong)puVar17 + uVar29 * 4);
        fVar38 = *(float *)(lStack_100 + 0xb8);
        bVar14 = pdb_1408ff980(lStack_230);
        puVar28 = puVar28 + 2;
        if ((~bVar14 & (fVar40 - fVar37) * fVar38 < _DAT_142e36f50) == 0) {
          puStack_288 = puVar28;
          if ((fVar37 != 0.0) || (fVar38 = 0.0, NAN(fVar37))) {
            fVar38 = fVar36;
            if ((fVar37 != fVar36) || (NAN(fVar37) || NAN(fVar36))) {
              uVar15 = pdb_1413f9030(lStack_270,fVar37);
              uVar22 = (ulonglong)uVar15;
              uVar24 = *(ulonglong *)(lStack_100 + 0x98);
              if (uVar24 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar24,&UNK_143306608);
              }
              uVar29 = uVar22 + 1;
              if (uVar24 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar29,uVar24,&UNK_143306620);
              }
              puVar17 = *(undefined8 **)(lStack_100 + 0x90);
              fVar35 = (float)pdb_1413f9c90(lStack_100,puVar17,
                                            *(float *)((longlong)puVar17 + uVar29 * 0xc + 8) *
                                            extraout_XMM0_Da +
                                            (fVar36 - extraout_XMM0_Da) *
                                            *(float *)((longlong)puVar17 + uVar22 * 0xc + 8),
                                            &UNK_143309e10);
              fVar37 = 0.0;
              if (0.0 <= fVar35) {
                fVar37 = fVar35;
              }
              if (fVar37 <= fVar36) {
                fVar38 = fVar37;
              }
            }
          }
          if ((fVar40 != 0.0) || (fVar37 = 0.0, NAN(fVar40))) {
            fVar37 = fVar36;
            if ((fVar40 != fVar36) || (NAN(fVar40) || NAN(fVar36))) {
              uVar15 = pdb_1413f9030(lStack_270,fVar40);
              uVar22 = (ulonglong)uVar15;
              uVar24 = *(ulonglong *)(lStack_100 + 0x98);
              if (uVar24 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar24,&UNK_143306608);
              }
              uVar29 = uVar22 + 1;
              if (uVar24 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar29,uVar24,&UNK_143306620);
              }
              puVar17 = *(undefined8 **)(lStack_100 + 0x90);
              fVar35 = (float)pdb_1413f9c90(lStack_100,puVar17,
                                            *(float *)((longlong)puVar17 + uVar29 * 0xc + 8) *
                                            extraout_XMM0_Da_00 +
                                            (fVar36 - extraout_XMM0_Da_00) *
                                            *(float *)((longlong)puVar17 + uVar22 * 0xc + 8),
                                            &UNK_143309e28);
              fVar40 = 0.0;
              if (0.0 <= fVar35) {
                fVar40 = fVar35;
              }
              if (fVar40 <= fVar36) {
                fVar37 = fVar40;
              }
            }
          }
          pdb_1424bcd90(&lStack_2e8,fVar38,fVar37);
          puVar28 = puStack_1b8 + lStack_1b0;
          for (puVar26 = puStack_1b8; puVar26 != puVar28; puVar26 = puVar26 + 1) {
            uStack_1a8 = (byte *)*puVar26;
            uStack_1a0 = (code *)((ulonglong)uStack_1a0 & 0xffffffffffffff00);
            puVar17 = &uStack_1a8;
            pdb_1424bca00(&lStack_2e8);
          }
          pfStack_140 = (float *)pdb_14043b7e0(&lStack_2e8);
          pfStack_310 = pfStack_140 + (longlong)puVar17 * 3;
          while (pfStack_140 != pfStack_310) {
            fVar37 = *pfStack_140;
            uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,fVar37);
            if ((fVar37 < 0.0) || (fVar36 < fVar37)) {
              uStack_1a8 = (byte *)&uStack_218;
              uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143309e40);
            }
            uStack_120 = CONCAT44(uStack_120._4_4_,fVar37);
            fVar40 = pfStack_140[1];
            uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,fVar40);
            if ((fVar40 < 0.0) || (fVar36 < fVar40)) {
              uStack_1a8 = (byte *)&uStack_218;
              uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143309e58);
            }
            uStack_110 = CONCAT44(uStack_110._4_4_,fVar40);
            fVar40 = (fVar40 - fVar37) * *(float *)(lStack_100 + 0x30);
            fVar36 = (float)pdb_140930390();
            fVar37 = (float)pub_142e329c0(fVar40 / _DAT_142e3c634);
            uVar24 = (longlong)fVar37 >> 0x3f & (longlong)(fVar37 - _DAT_142e36f2c) |
                     (longlong)fVar37;
            if (fVar37 < 0.0) {
              uVar24 = 0;
            }
            if (_DAT_142e36f30 < fVar37) {
              uVar24 = 0xffffffffffffffff;
            }
            fVar36 = (fVar36 + fVar40) * _DAT_142e4bfe4;
            uStack_320 = (longlong)(fVar36 - _DAT_142e36f2c) & (longlong)fVar36 >> 0x3f |
                         (longlong)fVar36;
            if (fVar36 < 0.0) {
              uStack_320 = 0;
            }
            if (_DAT_142e36f30 < fVar36) {
              uStack_320 = 0xffffffffffffffff;
            }
            lStack_250 = 0;
            pfStack_248 = (float *)0x4;
            lStack_240 = 0;
            puStack_148 = (ulonglong *)CONCAT44(puStack_148._4_4_,fVar40);
            puVar52 = &UNK_143309e70;
            pdb_140de8bb0(uVar24 + 1 + (ulonglong)(uVar24 == 0),_DAT_142e3c630 / fVar40,&uStack_320,
                          &lStack_250,&UNK_143309e70);
            pfStack_140 = pfStack_140 + 3;
            pfVar1 = pfStack_248 + lStack_240;
            uVar24 = 0;
            bVar33 = false;
            pfVar30 = pfStack_248;
            while (fVar36 = _DAT_142e36f28, uVar15 = (uint)uVar24, pfVar30 != pfVar1) {
              pfVar31 = pfVar30 + 1;
              fVar40 = *pfVar30 * (float)uStack_110 +
                       (_DAT_142e36f28 - *pfVar30) * (float)uStack_120;
              fVar37 = fVar40;
              if (!bVar33) {
                if (pfVar31 == pfVar1) break;
                pfVar31 = pfVar30 + 2;
                fVar37 = pfVar30[1] * (float)uStack_110 +
                         (_DAT_142e36f28 - pfVar30[1]) * (float)uStack_120;
                unaff_XMM14_Da = fVar40;
              }
              fVar40 = fVar37 - unaff_XMM14_Da;
              pfVar30 = pfVar31;
              fVar38 = unaff_XMM14_Da;
              while (unaff_XMM14_Da = fVar37,
                    fVar40 * *(float *)(lStack_100 + 0xb8) < _DAT_142e3b1d8) {
                if (pfVar30 == pfVar1) goto LAB_14143b414;
                fVar37 = *pfVar30;
                pfVar30 = pfVar30 + 1;
                fVar37 = fVar37 * (float)uStack_110 + (_DAT_142e36f28 - fVar37) * (float)uStack_120;
                uVar15 = (int)uVar24 + 1;
                uVar24 = (ulonglong)uVar15;
                fVar40 = fVar37 - unaff_XMM14_Da;
                fVar38 = unaff_XMM14_Da;
              }
              uStack_218._0_4_ = fVar38;
              if ((fVar38 < 0.0) || (_DAT_142e36f28 < fVar38)) {
                uStack_1a8 = (byte *)&uStack_218;
                uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143309e88);
              }
              uStack_228 = CONCAT44(uStack_228._4_4_,uVar15 + 1);
              uVar16 = pdb_1413f9030(lStack_100,fVar38);
              uVar24 = *(ulonglong *)(lStack_100 + 0x10);
              uVar22 = (ulonglong)uVar16;
              if (uVar24 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar24,&UNK_143306608);
              }
              if (uVar24 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22 + 1,uVar24,&UNK_143306620);
              }
              uVar5 = *(undefined8 *)(*(longlong *)(lStack_100 + 8) + uVar22 * 8);
              uVar6 = *(undefined8 *)(*(longlong *)(lStack_100 + 8) + 8 + uVar22 * 8);
              uStack_1a8 = (byte *)CONCAT44(extraout_XMM0_Da_01 * (float)((ulonglong)uVar6 >> 0x20)
                                            + (_DAT_142e36f28 - extraout_XMM0_Da_01) *
                                              (float)((ulonglong)uVar5 >> 0x20),
                                            extraout_XMM0_Da_01 * (float)uVar6 +
                                            (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)uVar5);
              uVar34 = pdb_140930390(lStack_100);
              pdb_140df4540(&fStack_294,&uStack_1a8,uVar34);
              uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,unaff_XMM14_Da);
              if ((unaff_XMM14_Da < 0.0) || (_DAT_142e36f28 < unaff_XMM14_Da)) {
                uStack_1a8 = (byte *)&uStack_218;
                uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143307ab0,&uStack_1a8,&UNK_143309ea0);
              }
              uVar16 = pdb_1413f9030(lStack_100,unaff_XMM14_Da);
              uVar24 = *(ulonglong *)(lStack_100 + 0x10);
              uVar22 = (ulonglong)uVar16;
              if (uVar24 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22,uVar24,&UNK_143306608);
              }
              if (uVar24 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar22 + 1,uVar24,&UNK_143306620);
              }
              uVar5 = *(undefined8 *)(*(longlong *)(lStack_100 + 8) + uVar22 * 8);
              uVar6 = *(undefined8 *)(*(longlong *)(lStack_100 + 8) + 8 + uVar22 * 8);
              uStack_1a8 = (byte *)CONCAT44(extraout_XMM0_Da_02 * (float)((ulonglong)uVar6 >> 0x20)
                                            + (_DAT_142e36f28 - extraout_XMM0_Da_02) *
                                              (float)((ulonglong)uVar5 >> 0x20),
                                            extraout_XMM0_Da_02 * (float)uVar6 +
                                            (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar5);
              uVar34 = pdb_140930390(lStack_100);
              pdb_140df4540(&fStack_2a0,&uStack_1a8,uVar34);
              fVar45 = fStack_28c;
              fVar48 = fStack_290;
              fVar43 = fStack_294;
              fVar35 = fStack_298;
              fVar37 = fStack_29c;
              fVar36 = fStack_2a0;
              fStack_234 = fStack_2a0 - fStack_294;
              fStack_238 = fStack_298 - fStack_28c;
              fVar39 = _DAT_142e36f28 / SQRT(fStack_238 * fStack_238 + fStack_234 * fStack_234);
              fStack_234 = fStack_234 * fVar39;
              fStack_238 = (float)((uint)fVar39 ^ _DAT_142e37820) * fStack_238;
              pdb_140de88f0(&uStack_1a8);
              uStack_2b8 = uStack_1a8;
              fStack_2b0 = (float)uStack_1a0;
              fStack_2ac = uStack_1a0._4_4_;
              cVar13 = pdb_1408ff980(lStack_230);
              uVar16 = _DAT_142e37ae4;
              if (cVar13 == '\0') {
                uVar16 = _DAT_142e37988;
              }
              auStack_308 = ZEXT416(uVar16);
              pdb_140df4520(&uStack_1a8,&fStack_238);
              auStack_2f8 = ZEXT416((uint)(float)uStack_1a8);
              fVar39 = uStack_1a8._4_4_;
              auStack_268 = ZEXT416((uint)(float)uStack_1a0);
              pdb_140df4520(&uStack_1a8,&fStack_238);
              fVar38 = unaff_XMM14_Da * _DAT_142e36f50 + fVar38 * _DAT_142e36f50;
              fVar47 = fVar48 - fVar37;
              fVar48 = fVar37 * _DAT_142e36f50 + fVar48 * _DAT_142e36f50;
              fVar37 = fVar36 * _DAT_142e36f50 + fVar43 * _DAT_142e36f50;
              fVar49 = fVar35 * _DAT_142e36f50 + fVar45 * _DAT_142e36f50;
              fVar43 = fVar43 - fVar36;
              fVar45 = fVar45 - fVar35;
              iStack_400 = 0;
              fVar36 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar43 * fVar43);
              afStack_3fc[0] = (float)auStack_308._0_4_ * (float)auStack_2f8._0_4_ + fVar37;
              afStack_3fc[1] = _UNK_143309d84 + fVar39 * (float)auStack_308._0_4_ + fVar48;
              afStack_3fc[2] = (float)auStack_308._0_4_ * auStack_268._0_4_ + fVar49;
              afStack_3fc[3] = _UNK_143309d8c + fVar36;
              uStack_3ec = _DAT_142f67340;
              uStack_3e4 = 1;
              uStack_3e0 = CONCAT44(_UNK_143014b84 +
                                    uStack_1a8._4_4_ * (float)auStack_308._0_4_ + fVar48 +
                                    _DAT_142e3c604,
                                    fVar37 + (float)uStack_1a8 * (float)auStack_308._0_4_);
              fStack_3d8 = (float)uStack_1a0 * (float)auStack_308._0_4_ + fVar49;
              fStack_3d4 = fVar36 * _DAT_142e3798c;
              fVar48 = fStack_2b0 + fStack_2b0;
              fVar37 = uStack_2b8._4_4_ + uStack_2b8._4_4_;
              fVar43 = (float)uStack_2b8 * ((float)uStack_2b8 + (float)uStack_2b8);
              fVar35 = ((float)uStack_2b8 + (float)uStack_2b8) * fStack_2ac;
              fVar49 = _DAT_142e36f28 - (uStack_2b8._4_4_ * fVar37 + fStack_2b0 * fVar48);
              fVar47 = fVar37 * (float)uStack_2b8 + fStack_2ac * fVar48;
              fVar39 = fVar37 * (float)uStack_2b8 - fStack_2ac * fVar48;
              fVar45 = _DAT_142e36f28 - (fStack_2b0 * fVar48 + fVar43);
              fVar50 = fVar48 * (float)uStack_2b8 - fVar37 * fStack_2ac;
              fVar51 = fVar48 * uStack_2b8._4_4_ - fVar35;
              fVar36 = fVar37 * fStack_2ac + fVar48 * (float)uStack_2b8;
              fVar35 = fVar35 + fVar48 * uStack_2b8._4_4_;
              fVar43 = _DAT_142e36f28 - (fVar43 + uStack_2b8._4_4_ * fVar37);
              fVar37 = (fVar38 - fVar40 * _DAT_142e36f50) * puStack_148._0_4_;
              fVar40 = (fVar40 * _DAT_142e36f50 + fVar38) * puStack_148._0_4_;
              uStack_3d0 = _DAT_143309d90;
              lVar18 = 0;
              while (lVar18 != 2) {
                lVar23 = lVar18 + 1;
                iVar7 = (&iStack_400)[lVar18 * 7];
                fVar9 = afStack_3fc[lVar18 * 7];
                fVar10 = afStack_3fc[lVar18 * 7 + 1];
                fVar38 = afStack_3fc[lVar18 * 7 + 2];
                fVar48 = afStack_3fc[lVar18 * 7 + 3];
                uVar5 = *(undefined8 *)((longlong)&uStack_3ec + lVar18 * 0x1c);
                fVar44 = (float)uVar5;
                fVar46 = (float)((ulonglong)uVar5 >> 0x20);
                lVar19 = lVar23;
                cVar13 = pdb_1408ff980(lStack_230);
                lVar18 = lVar23;
                if (cVar13 == '\0') {
                  fStack_190 = fVar44 * fVar35;
                  fStack_18c = fVar44 * fVar35;
                  fStack_188 = fVar46 * fVar36;
                  fStack_184 = fVar46 * fVar51;
                  fStack_180 = fVar46 * fVar43;
                  fStack_17c = fVar46 * fVar43;
                  uStack_1a8 = (byte *)CONCAT44(fVar48 * fVar47,fVar48 * fVar49);
                  uStack_1a0 = (code *)CONCAT44(fVar48 * fVar50,fVar48 * fVar50);
                  uStack_198 = (byte *)CONCAT44(fVar44 * fVar45,fVar44 * fVar39);
                  fStack_178 = fVar9;
                  fStack_174 = fVar10;
                  fStack_170 = fVar38;
                  fStack_16c = fVar38;
                  pdb_140e07fe0(&uStack_218,&uStack_1a8);
                  uStack_158 = pdb_1409012c0(*(undefined4 *)(lStack_100 + 0x274));
                  uStack_350 = CONCAT44(fStack_1fc,fStack_200);
                  uStack_348 = CONCAT44(fStack_1f4,fStack_1f8);
                  uStack_340 = CONCAT44(fStack_1ec,fStack_1f0);
                  pbStack_358 = pbStack_208;
                  pbStack_368 = uStack_218;
                  pbStack_360 = uStack_210;
                  uStack_338 = 0;
                  uStack_330 = 0;
                  uStack_1a8 = uStack_218;
                  uStack_1a0 = (code *)uStack_210;
                  uStack_198 = pbStack_208;
                  fStack_190 = fStack_200;
                  fStack_18c = fStack_1fc;
                  fStack_188 = fStack_1f8;
                  fStack_184 = fStack_1f4;
                  fStack_180 = fStack_1f0;
                  fStack_17c = fStack_1ec;
                  fStack_178 = 0.0;
                  fStack_174 = 0.0;
                  fStack_170 = 0.0;
                  fStack_16c = 0.0;
                  uStack_168 = _DAT_1430155a0;
                  uStack_160 = 0xc2c80000;
                  uStack_14c = 4;
                  uStack_15c = uVar15;
                  uStack_154 = CONCAT44(fVar40,fVar37);
                  pdb_14094c790(&uStack_218,&uStack_1a8,fStack_1f8,0,puVar52,lVar19);
                  uVar24 = puStack_118[2];
                  if (uVar24 == *puStack_118) {
                    pdb_142d8db70(puStack_118);
                  }
                  uVar22 = puStack_118[1];
                  lVar23 = uVar24 * 0x40;
                  puVar17 = (undefined8 *)(uVar22 + 0x30 + lVar23);
                  *puVar17 = CONCAT44(uStack_1e4,uStack_1e8);
                  puVar17[1] = CONCAT44(uStack_1dc,uStack_1e0);
                  puVar17 = (undefined8 *)(uVar22 + 0x20 + lVar23);
                  *puVar17 = CONCAT44(fStack_1f4,fStack_1f8);
                  puVar17[1] = CONCAT44(fStack_1ec,fStack_1f0);
                  plVar2 = (longlong *)(uVar22 + 0x10 + lVar23);
                  *plVar2 = (longlong)pbStack_208;
                  plVar2[1] = CONCAT44(fStack_1fc,fStack_200);
                  puVar25 = (undefined4 *)(uVar22 + lVar23);
                  *puVar25 = (float)uStack_218;
                  puVar25[1] = uStack_218._4_4_;
                  puVar25[2] = (undefined4)uStack_210;
                  puVar25[3] = uStack_210._4_4_;
                  puStack_118[2] = uVar24 + 1;
                }
                else if ((iVar7 != 0) && (lStack_3c8 != 0)) {
                  fStack_190 = fVar44 * fVar35;
                  fStack_18c = fVar44 * fVar35;
                  fStack_188 = fVar46 * fVar36;
                  fStack_184 = fVar46 * fVar51;
                  fStack_180 = fVar46 * fVar43;
                  fStack_17c = fVar46 * fVar43;
                  uStack_1a8 = (byte *)CONCAT44(fVar48 * fVar47,fVar48 * fVar49);
                  uStack_1a0 = (code *)CONCAT44(fVar48 * fVar50,fVar48 * fVar50);
                  uStack_198 = (byte *)CONCAT44(fVar44 * fVar45,fVar44 * fVar39);
                  fStack_178 = fVar9;
                  fStack_174 = fVar10;
                  fStack_170 = fVar38;
                  fStack_16c = fVar38;
                  pdb_140e07fe0(&pbStack_368,&uStack_1a8);
                  uVar34 = pdb_1409012c0(*(undefined4 *)(lStack_100 + 0x274));
                  pdb_140a77410(&uStack_1a8);
                  fStack_1f8 = (float)uStack_348;
                  fStack_1f4 = uStack_348._4_4_;
                  fStack_1f0 = (float)uStack_340;
                  fStack_1ec = uStack_340._4_4_;
                  pbStack_208 = pbStack_358;
                  fStack_200 = (float)uStack_350;
                  fStack_1fc = uStack_350._4_4_;
                  uStack_218 = pbStack_368;
                  uStack_210 = pbStack_360;
                  uStack_1e8 = 0;
                  uStack_1dc = 0x21;
                  uStack_1d8 = (undefined4)uStack_168;
                  uStack_1d4 = uStack_168._4_4_;
                  uStack_1d0 = uStack_160;
                  uStack_1cc = uStack_15c;
                  uStack_1e4 = uVar15;
                  uStack_1e0 = uVar34;
                  bVar14 = pdb_1413f6d90(&lStack_3c8,&uStack_218);
                  uStack_220 = CONCAT71((int7)(uStack_220 >> 8),(byte)uStack_220 | bVar14);
                }
              }
              bVar33 = true;
              uVar24 = uStack_228 & 0xffffffff;
            }
LAB_14143b414:
            if (lStack_250 != 0) {
              pub_1406abac0((byte *)pfStack_248,lStack_250 << 2,4);
            }
          }
          puVar28 = puStack_288;
          if (lStack_2e8 != 0) {
            pub_1406abac0(pbStack_2e0,lStack_2e8 * 0xc,4);
            puVar28 = puStack_288;
          }
        }
      }
      if (lStack_280 != 0) {
        pub_1406abac0((byte *)puStack_278,lStack_280 << 4,8);
      }
      if (lStack_1c0 != 0) {
        pub_1406abac0((byte *)puStack_1b8,lStack_1c0 << 3,4);
      }
      if ((uStack_220 & 1) != 0) {
        pdb_140a43130(&UNK_143309eb8,0x29);
      }
    }
  }
  lVar18 = lStack_3a8;
  if (lStack_3c8 != 0) {
    lVar23 = lStack_3a8 + 0x18;
    pdb_140e9a350();
    LOCK();
    bVar33 = *(char *)(lVar18 + 0x18) == '\x01';
    if (bVar33) {
      *(char *)(lVar18 + 0x18) = '\0';
    }
    UNLOCK();
    if (!bVar33) {
      pdb_142dbcef0(lVar23,0);
    }
  }
  return;
LAB_14143a5da:
  fVar40 = (float)puVar32[1];
  fVar38 = (float)puVar32[3];
  uStack_f1 = 1;
  fVar35 = (float)pdb_140930390(lStack_100);
  fVar35 = fVar35 + _DAT_142e3c604 + fVar37 + fVar36;
  if ((fVar40 <= fVar35) && (fVar35 < fVar38)) {
LAB_14143a620:
    lVar18 = lStack_1b0;
    uVar34 = *puVar32;
    uVar3 = puVar32[2];
    uVar4 = *(undefined4 *)(lStack_100 + 0x30);
    if (lStack_1b0 == lStack_1c0) {
      uStack_f1 = 1;
      pdb_142d8d7f0(&lStack_1c0);
    }
    auVar41._4_4_ = uVar3;
    auVar41._0_4_ = uVar34;
    auVar41._8_8_ = 0;
    auVar42._4_4_ = uVar4;
    auVar42._0_4_ = uVar4;
    auVar42._8_8_ = 0;
    auVar42 = divps(auVar41,auVar42);
    puStack_1b8[lVar18] = auVar42._0_8_;
    lStack_1b0 = lVar18 + 1;
  }
  goto LAB_14143a5b3;
}

