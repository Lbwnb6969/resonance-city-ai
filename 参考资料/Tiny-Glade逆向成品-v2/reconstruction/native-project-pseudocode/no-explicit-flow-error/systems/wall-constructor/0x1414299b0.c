// VA 0x1414299b0, PDB extent 10061 bytes
// system_wall_constructor::utils::wall_corners::add_wall_corners<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::wall_corners::add_wall_corners<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
   Extent: 10061 */

void pdb_1414299b0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 *param_6,undefined8 param_7,char param_8,
                  longlong *param_9)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  byte *pbVar11;
  float *pfVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  undefined4 extraout_XMM0_Da;
  float fVar22;
  float extraout_XMM0_Da_00;
  float fVar23;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float unaff_XMM6_Da;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 in_stack_fffffffffffffbe8;
  float fStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined5 uStack_3e8;
  longlong lStack_3e0;
  ulonglong *puStack_3d8;
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [16];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_390;
  byte *pbStack_388;
  longlong lStack_380;
  float *pfStack_378;
  longlong lStack_370;
  ulonglong uStack_368;
  ulonglong *puStack_360;
  float *pfStack_358;
  undefined2 *puStack_350;
  undefined1 auStack_348 [16];
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 auStack_308 [16];
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong lStack_2e8;
  byte *pbStack_2e0;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  byte *pbStack_2c8;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  longlong lStack_298;
  float *pfStack_290;
  longlong lStack_288;
  ulonglong *puStack_280;
  ulonglong *puStack_278;
  longlong lStack_270;
  ulonglong *puStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  ulonglong uStack_230;
  longlong lStack_228;
  longlong *plStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  float fStack_18c;
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined5 uStack_118;
  byte bStack_113;
  undefined2 uStack_112;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffbe8 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  lStack_1a8 = param_2;
  uStack_188 = param_3;
  lStack_158 = param_4;
  pdb_14017ede0(&uStack_138,*(longlong *)(param_1 + 0x90),
                *(longlong *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x98) * 0xc);
  uStack_318 = CONCAT44(uStack_124,fStack_128);
  uStack_328 = (byte *)uStack_138;
  uStack_320 = uStack_130;
  pdb_140080c90(&uStack_208,&uStack_328,0);
  if (SBORROW8(0,(longlong)uStack_208)) {
    uStack_328 = (byte *)uStack_200;
    uStack_320 = (byte *)uStack_1f8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143306430,0x2b,&uStack_328,&UNK_143306410,&UNK_143306a30);
  }
  uStack_2b8 = uStack_1d8;
  pbStack_2c8 = (byte *)CONCAT44(uStack_1e4,fStack_1e8);
  iStack_2d8 = (int)(float)uStack_1f8;
  uStack_2d4 = uStack_1f8._4_4_;
  uStack_2d0 = (float)uStack_1f0;
  uStack_2cc = uStack_1f0._4_4_;
  lStack_2e8 = (longlong)uStack_208;
  pbStack_2e0 = (byte *)uStack_200;
  lStack_228 = *(longlong *)(param_1 + 0xf8);
  uStack_230 = *(ulonglong *)(param_1 + 0x100);
  uStack_14c = pdb_14092f860(param_1);
  uStack_148 = extraout_XMM0_Da;
  pdb_1424bbfa0(&lStack_3e0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                _DAT_143309378,CONCAT44(uVar7,0x3fdf66f3),*(int *)(param_1 + 600) != 2);
  lStack_248 = 0;
  lStack_240 = 4;
  lStack_238 = 0;
  lStack_270 = lStack_3e0;
  puStack_278 = puStack_3d8 + lStack_3d0;
  cStack_f2 = *(char *)((longlong)param_9 + 0x14);
  puStack_350 = (undefined2 *)((longlong)param_9 + 0x15);
  plStack_220 = (longlong *)*param_6;
  puStack_268 = puStack_3d8;
  do {
    uVar10 = uStack_188;
    puStack_280 = puStack_3d8;
    if (puStack_3d8 == puStack_278) {
      if (lStack_270 != 0) {
        pub_1406abac0((byte *)puStack_268,lStack_270 << 3,8);
      }
      uStack_1f8 = lStack_238;
      uStack_208 = (undefined8 *)lStack_248;
      uStack_200 = (code *)lStack_240;
      pdb_14146c2c0(param_7,&uStack_208);
      if (lStack_2e8 != 0) {
        pub_1406abac0(pbStack_2e0,lStack_2e8 << 3,4);
      }
      if (CONCAT44(uStack_2cc,uStack_2d0) != 0) {
        pub_1406abac0(pbStack_2c8,CONCAT44(uStack_2cc,uStack_2d0) << 2,4);
      }
      return;
    }
    uVar19 = *(ulonglong *)(param_1 + 0x10);
    if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8510(&UNK_143309420);
    }
    uVar15 = *puStack_3d8;
    uVar14 = uVar15 - 1;
    if (uVar15 == 0) {
      uVar14 = uVar19 - 2;
    }
    if (uVar19 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,uVar19,&UNK_143309438);
    }
    uVar8 = uVar15 + 1;
    if (uVar8 == uVar19) {
      uVar8 = 0;
    }
    if (uVar19 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar14,uVar19,&UNK_143309450);
    }
    fStack_fc = unaff_XMM6_Da;
    if (*(ulonglong *)(param_1 + 0x28) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143309468);
    }
    lVar17 = *(longlong *)(param_1 + 8);
    fVar29 = *(float *)(lVar17 + uVar8 * 8);
    fVar34 = *(float *)(lVar17 + 4 + uVar8 * 8);
    fVar35 = *(float *)(lVar17 + uVar15 * 8);
    fVar23 = *(float *)(lVar17 + 4 + uVar15 * 8);
    fVar22 = fVar35 - *(float *)(lVar17 + uVar14 * 8);
    fVar30 = fVar23 - *(float *)(lVar17 + 4 + uVar14 * 8);
    uStack_140 = uVar15;
    uVar6 = pdb_1413f9030(&lStack_2e8,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar15 * 4));
    uVar19 = (ulonglong)uVar6;
    if (uVar10 <= uVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar19,uVar10,&UNK_143309480);
    }
    uVar15 = uVar19 + 1;
    if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,uVar10,&UNK_143309480);
    }
    fVar28 = *(float *)(lStack_1a8 + uVar19 * 4);
    fVar28 = (*(float *)(lStack_1a8 + 4 + uVar19 * 4) - fVar28) * extraout_XMM0_Da_00 + fVar28;
    fStack_144 = (float)pdb_14007ee60();
    fStack_104 = fVar28;
    if (param_8 == '\0') {
      if (uStack_140 == 0) {
        if (param_5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,param_5,&UNK_1433094b0);
        }
        if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,param_5,&UNK_1433094b0);
        }
        uVar10 = (ulonglong)(iStack_2d8 - 2);
        if (param_5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,param_5,&UNK_1433094c8);
        }
        if (param_5 <= uVar10 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10 + 1,param_5,&UNK_1433094c8);
        }
        fVar28 = *(float *)(lStack_158 + uVar19 * 4);
        fVar28 = extraout_XMM0_Da_00 * (*(float *)(lStack_158 + 4 + uVar19 * 4) - fVar28) + fVar28;
        fVar31 = *(float *)(lStack_158 + uVar10 * 4);
        fVar31 = (*(float *)(lStack_158 + 4 + uVar10 * 4) - fVar31) + fVar31;
        fVar40 = fVar31;
        if (fVar31 <= fVar28) {
          fVar40 = fVar28;
        }
        fStack_f8 = (float)(~-(uint)NAN(fVar28) & (uint)fVar40 | -(uint)NAN(fVar28) & (uint)fVar31);
      }
      else {
        if (param_5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,param_5,&UNK_143309498);
        }
        if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,param_5,&UNK_143309498);
        }
        fStack_f8 = *(float *)(lStack_158 + uVar19 * 4);
        fStack_f8 = extraout_XMM0_Da_00 * (*(float *)(lStack_158 + 4 + uVar19 * 4) - fStack_f8) +
                    fStack_f8;
      }
    }
    else {
      if (param_5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar19,param_5,&UNK_1433094e0);
      }
      if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar15,param_5,&UNK_1433094e0);
      }
      fVar28 = *(float *)(lStack_158 + uVar19 * 4);
      fStack_f8 = extraout_XMM0_Da_00 * (*(float *)(lStack_158 + 4 + uVar19 * 4) - fVar28) + fVar28
                  + _DAT_14300b368;
    }
    uVar10 = param_5;
    pfVar9 = (float *)pdb_14043b7e0(param_7);
    if (uVar10 == 0) {
      lStack_288 = 0;
    }
    else {
      uVar10 = uVar10 * 0x14 - 0x14;
      if (uVar10 < 0x14) {
        lStack_288 = 0;
      }
      else {
        uVar10 = uVar10 / 0x14 + 1;
        uVar19 = uVar10 & 0xfffffffffffffffe;
        lStack_288 = 0;
        do {
          pfVar21 = pfVar9;
          if ((float)((uint)(fStack_144 - *pfVar21) & _DAT_142e377e0) < _DAT_142e37848) {
            fVar28 = pfVar21[1];
            uVar15 = 0;
            if (0.0 <= fVar28) {
              uVar15 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f |
                       (longlong)fVar28;
            }
            if (_DAT_142e36f30 < fVar28) {
              uVar15 = 0xffffffffffffffff;
            }
            lStack_288 = lStack_288 + uVar15;
          }
          if ((float)((uint)(fStack_144 - pfVar21[5]) & _DAT_142e377e0) < _DAT_142e37848) {
            fVar28 = pfVar21[6];
            uVar15 = 0;
            if (0.0 <= fVar28) {
              uVar15 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f |
                       (longlong)fVar28;
            }
            if (_DAT_142e36f30 < fVar28) {
              uVar15 = 0xffffffffffffffff;
            }
            lStack_288 = lStack_288 + uVar15;
          }
          uVar19 = uVar19 - 2;
          pfVar9 = pfVar21 + 10;
        } while (uVar19 != 0);
        if ((uVar10 & 1) == 0) goto LAB_141429f7b;
        pfVar9 = pfVar21 + 10;
      }
      if ((float)((uint)(fStack_144 - *pfVar9) & _DAT_142e377e0) < _DAT_142e37848) {
        fVar28 = pfVar9[1];
        uVar10 = 0;
        if (0.0 <= fVar28) {
          uVar10 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f | (longlong)fVar28
          ;
        }
        if (_DAT_142e36f30 < fVar28) {
          uVar10 = 0xffffffffffffffff;
        }
        lStack_288 = lStack_288 + uVar10;
      }
    }
LAB_141429f7b:
    lStack_298 = uStack_140 + lStack_288;
    fVar31 = fStack_f8 - fStack_104;
    fVar28 = (float)pub_142e329c0(fVar31 / _DAT_142e3c634);
    uVar10 = 0;
    if (0.0 <= fVar28) {
      uVar10 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f | (longlong)fVar28;
    }
    if (_DAT_142e36f30 < fVar28) {
      uVar10 = 0xffffffffffffffff;
    }
    if (uVar10 < 3) {
      uVar10 = 2;
    }
    pdb_140de8290(&lStack_380,uVar10,_DAT_14300b5d0 / fVar31,&lStack_298,&UNK_1433094f8);
    puStack_360 = puStack_280 + 1;
    fVar29 = fVar29 - fVar35;
    fVar34 = fVar34 - fVar23;
    fStack_254 = _DAT_142e36f28 / SQRT(fVar34 * fVar34 + fVar29 * fVar29);
    fStack_258 = fVar29 * fStack_254;
    fStack_254 = fStack_254 * fVar34;
    fStack_24c = _DAT_142e36f28 / SQRT(fVar30 * fVar30 + fVar22 * fVar22);
    fStack_250 = fVar22 * fStack_24c;
    fStack_24c = fStack_24c * fVar30;
    pfStack_290 = pfStack_378 + lStack_370;
    uStack_368 = uVar10 - 2;
    bVar18 = false;
    pfStack_358 = pfStack_378;
    uStack_140 = 0;
    pfVar9 = pfStack_378;
    while (unaff_XMM6_Da = fStack_fc, uVar10 = uStack_140, pfVar9 != pfStack_290) {
      pfVar21 = pfVar9 + 1;
      fVar35 = *pfVar9 * fStack_f8 + (_DAT_142e36f28 - *pfVar9) * fStack_104;
      fVar34 = fVar35;
      fVar29 = fStack_fc;
      if (!bVar18) {
        if (pfVar21 == pfStack_290) break;
        pfVar21 = pfVar9 + 2;
        fVar34 = pfVar9[1] * fStack_f8 + (_DAT_142e36f28 - pfVar9[1]) * fStack_104;
        fVar29 = fVar35;
      }
      fStack_fc = fVar34;
      fVar34 = (float)pdb_140e02880(&lStack_298);
      fVar34 = (fVar34 * _DAT_142e37980 - (_DAT_142e36f28 - fVar34) * _DAT_142e37980) +
               _DAT_143005d30;
      if (uVar10 == uStack_368) {
        if (*(int *)(param_1 + 600) == 2) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          fVar34 = _DAT_143011480;
        }
      }
      else {
        bVar3 = false;
      }
      uStack_140 = uVar10 + 1;
      bVar18 = true;
      pfVar9 = pfVar21;
      if ((0.0 < fStack_fc - fVar29) && (0.0 < fVar34)) {
        if ((cStack_f2 != '\x02') && (fVar35 = (float)pdb_140930390(param_1), fVar35 <= fVar29)) {
          fVar34 = _DAT_142e3c624;
        }
        fVar29 = *(float *)(&UNK_142e37810 + (ulonglong)((uVar10 & 1) == 0) * 4);
        fVar34 = fVar34 * _DAT_142e36f50;
        fVar35 = fVar34 + _DAT_14303d260 + _DAT_14330937c;
        uStack_208 = (undefined8 *)CONCAT44(uStack_148,uStack_14c);
        uVar27 = pdb_140dea610(&uStack_208,fVar29 * fVar35 + fStack_144);
        fVar29 = (float)pdb_140dea600(uVar27,(float)((uint)fVar29 & _DAT_142e37820) * fVar35 +
                                             fStack_104);
        pdb_140deead0(&uStack_390);
        pdb_14007ee60();
        lVar17 = 4;
        pbVar11 = pub_1406abab0(0x28,4);
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x28);
        }
        uStack_3c8 = 0;
        uStack_3c0 = 0;
        uStack_208 = (undefined8 *)uStack_390;
        uStack_200 = (code *)pbStack_388;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        pbVar11[0x10] = 0;
        pbVar11[0x11] = 0;
        pbVar11[0x12] = 0;
        pbVar11[0x13] = 0;
        pbVar11[0x14] = 0;
        pbVar11[0x15] = 0;
        pbVar11[0x16] = 0;
        pbVar11[0x17] = 0;
        pbVar11[0x18] = 0;
        pbVar11[0x19] = 0;
        pbVar11[0x1a] = 0;
        pbVar11[0x1b] = 0;
        pbVar11[0x1c] = 0;
        pbVar11[0x1d] = 0;
        pbVar11[0x1e] = 0;
        pbVar11[0x1f] = 0;
        *(undefined8 *)pbVar11 = uStack_390;
        *(byte **)(pbVar11 + 8) = pbStack_388;
        pbVar11[0x20] = 0;
        pbVar11[0x21] = 0;
        pbVar11[0x22] = 0;
        pbVar11[0x23] = 0;
        pbVar11[0x24] = 0;
        pbVar11[0x25] = 0;
        lStack_168 = 0;
        lStack_160 = 1;
        uStack_178 = 1;
        pbStack_170 = pbVar11;
        if (bVar3) {
          uStack_f1 = 1;
          pdb_140deead0(&uStack_138,fVar29);
          uStack_f1 = 1;
          pfVar12 = (float *)pdb_14043b7e0(param_7);
          pfVar21 = pfVar12 + lVar17 * 5;
          do {
            if (pfVar12 == pfVar21) {
              break;
            }
            fVar35 = *pfVar12;
            uStack_f1 = 1;
            pdb_140deead0(&uStack_328);
            fVar23 = (float)uStack_328;
            fVar22 = (float)uStack_320;
            uStack_f1 = 1;
            fVar30 = (float)pdb_140deec20(&uStack_138);
            if ((fVar23 <= fVar30) && (fVar30 < fVar22)) {
              uStack_f1 = 1;
              pdb_140deec20(&uStack_328);
              uStack_f1 = 1;
              fVar23 = fVar35;
              pdb_140deec20(&uStack_138);
              if (fVar35 <= fVar23) {
                uStack_f1 = 1;
                pdb_140deec20(&uStack_328);
                uStack_f1 = 1;
                fVar35 = fVar23;
                pdb_140deec20(&uStack_138);
                if (fVar23 < fVar35) {
                  fVar35 = uStack_320._4_4_;
                  if (uStack_320._4_4_ <= uStack_138._4_4_) {
                    fVar35 = uStack_138._4_4_;
                  }
                  uStack_138 = CONCAT44(~-(uint)NAN(uStack_138._4_4_) & (uint)fVar35 |
                                        -(uint)NAN(uStack_138._4_4_) & (uint)uStack_320._4_4_,
                                        (undefined4)uStack_138);
                }
              }
              else {
                fVar35 = uStack_328._4_4_;
                if (uStack_130._4_4_ <= uStack_328._4_4_) {
                  fVar35 = uStack_130._4_4_;
                }
                uStack_130 = (byte *)CONCAT44(~-(uint)NAN(uStack_130._4_4_) & (uint)fVar35 |
                                              -(uint)NAN(uStack_130._4_4_) & (uint)uStack_328._4_4_,
                                              (undefined4)uStack_130);
              }
            }
            if (*(int *)(param_1 + 600) != 2) {
              uStack_f1 = 1;
              fVar35 = (float)pdb_140deec20(&uStack_328);
              uStack_f1 = 1;
              fVar23 = (float)pdb_140deec10(&uStack_328);
              fVar35 = fVar35 + fVar23 * _DAT_142e36f50;
              if (fVar35 < *(float *)(param_1 + 0x30) || fVar35 == *(float *)(param_1 + 0x30)) {
                uStack_f1 = 1;
                fVar35 = (float)pdb_140deec20(&uStack_328);
                uStack_f1 = 1;
                fVar23 = (float)pdb_140deec10(&uStack_328);
                if (fVar35 < fVar23 * _DAT_142e36f50) {
                  uStack_f1 = 1;
                  fVar23 = (float)pdb_140deec20(&uStack_328);
                  fVar35 = *(float *)(param_1 + 0x30);
                  uStack_f1 = 1;
                  pdb_140deec20(&uStack_328);
                  fVar23 = fVar23 + fVar35;
                  uStack_f1 = 1;
                  pdb_140deead0(&uStack_208);
                  uStack_f1 = 1;
                  pdb_140deec20(&uStack_208);
                  uStack_f1 = 1;
                  fVar35 = fVar23;
                  pdb_140deec20(&uStack_138);
                  if (fVar35 < fVar23) goto LAB_14142a3f2;
                  uStack_f1 = 1;
                  pdb_140deec20(&uStack_208);
                  uStack_f1 = 1;
                  fVar23 = fVar35;
                  pdb_140deec20(&uStack_138);
                  goto LAB_14142a760;
                }
              }
              else {
                uStack_f1 = 1;
                fVar23 = (float)pdb_140deec20(&uStack_328);
                fVar35 = *(float *)(param_1 + 0x30);
                uStack_f1 = 1;
                pdb_140deec20(&uStack_328);
                fVar23 = fVar23 - fVar35;
                uStack_f1 = 1;
                pdb_140deead0(&uStack_208);
                uStack_f1 = 1;
                pdb_140deec20(&uStack_208);
                uStack_f1 = 1;
                fVar35 = fVar23;
                pdb_140deec20(&uStack_138);
                if (fVar35 < fVar23) {
LAB_14142a3f2:
                  fVar35 = uStack_208._4_4_;
                  if (uStack_130._4_4_ <= uStack_208._4_4_) {
                    fVar35 = uStack_130._4_4_;
                  }
                  uStack_130 = (byte *)CONCAT44(~-(uint)NAN(uStack_130._4_4_) & (uint)fVar35 |
                                                -(uint)NAN(uStack_130._4_4_) &
                                                (uint)uStack_208._4_4_,(undefined4)uStack_130);
                }
                else {
                  uStack_f1 = 1;
                  pdb_140deec20(&uStack_208);
                  uStack_f1 = 1;
                  fVar23 = fVar35;
                  pdb_140deec20(&uStack_138);
LAB_14142a760:
                  if (fVar35 < fVar23) {
                    fVar35 = uStack_200._4_4_;
                    if (uStack_200._4_4_ <= uStack_138._4_4_) {
                      fVar35 = uStack_138._4_4_;
                    }
                    uStack_138 = CONCAT44(~-(uint)NAN(uStack_138._4_4_) & (uint)fVar35 |
                                          -(uint)NAN(uStack_138._4_4_) & (uint)uStack_200._4_4_,
                                          (undefined4)uStack_138);
                  }
                }
              }
            }
            pfVar12 = pfVar12 + 5;
          } while (uStack_138._4_4_ < uStack_130._4_4_);
          if (uStack_130._4_4_ - uStack_138._4_4_ <= _DAT_142e3b1d8) {
            if (uStack_178 != 0) {
              pub_1406abac0(pbStack_170,uStack_178 * 0x28,4);
            }
            uStack_178 = 0;
            pbStack_170 = (byte *)0x4;
            lStack_168 = 0;
            lStack_160 = 0;
          }
          else {
            pdb_14007ee60();
            pbVar11 = pub_1406abab0(0x28,4);
            if (pbVar11 == (byte *)0x0) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,0x28);
            }
            uStack_208 = (undefined8 *)uStack_138;
            uStack_200 = (code *)uStack_130;
            uStack_1f8 = uStack_3c8;
            uStack_1f0 = uStack_3c0;
            *(undefined8 *)(pbVar11 + 0x10) = uStack_3c8;
            *(undefined8 *)(pbVar11 + 0x18) = uStack_3c0;
            *(undefined8 *)pbVar11 = uStack_138;
            *(byte **)(pbVar11 + 8) = uStack_130;
            pbVar11[0x20] = 0;
            pbVar11[0x21] = 0;
            pbVar11[0x22] = 0;
            pbVar11[0x23] = 0;
            pbVar11[0x24] = 0;
            pbVar11[0x25] = 0;
            if (uStack_178 != 0) {
              pub_1406abac0(pbStack_170,uStack_178 * 0x28,4);
            }
            uStack_178 = 1;
            lStack_168 = 0;
            lStack_160 = 1;
            pbStack_170 = pbVar11;
          }
        }
        else {
          uStack_f1 = 1;
          puVar13 = (undefined4 *)pdb_14043b7e0(param_7);
          puVar1 = puVar13 + lVar17 * 5;
          for (; puVar13 != puVar1; puVar13 = puVar13 + 5) {
            uStack_f1 = 1;
            pdb_140deead0(&uStack_328,*puVar13);
            uStack_f1 = 1;
            cVar5 = pdb_140deea30(&uStack_328,&uStack_390);
            if (cVar5 != '\0') {
              uStack_f1 = 1;
              pdb_14146c450(&uStack_328,&uStack_178);
            }
            if (*(int *)(param_1 + 600) != 2) {
              uStack_f1 = 1;
              fVar35 = (float)pdb_140deec20(&uStack_328);
              uStack_f1 = 1;
              fVar23 = (float)pdb_140deec10(&uStack_328);
              fVar35 = fVar35 + fVar23 * _DAT_142e36f50;
              if (fVar35 < *(float *)(param_1 + 0x30) || fVar35 == *(float *)(param_1 + 0x30)) {
                uStack_f1 = 1;
                fVar35 = (float)pdb_140deec20(&uStack_328);
                uStack_f1 = 1;
                fVar23 = (float)pdb_140deec10(&uStack_328);
                if (fVar35 < fVar23 * _DAT_142e36f50) {
                  uStack_f1 = 1;
                  fVar23 = (float)pdb_140deec20(&uStack_328);
                  fVar35 = *(float *)(param_1 + 0x30);
                  uStack_f1 = 1;
                  pdb_140deec20(&uStack_328);
                  uStack_f1 = 1;
                  pdb_140deead0(&uStack_208,fVar23 + fVar35);
                  uStack_f1 = 1;
                  pdb_14146c450(&uStack_208,&uStack_178);
                }
              }
              else {
                uStack_f1 = 1;
                fVar23 = (float)pdb_140deec20(&uStack_328);
                fVar35 = *(float *)(param_1 + 0x30);
                uStack_f1 = 1;
                pdb_140deec20(&uStack_328);
                uStack_f1 = 1;
                pdb_140deead0(&uStack_208,fVar23 - fVar35);
                uStack_f1 = 1;
                pdb_14146c450(&uStack_208,&uStack_178);
              }
            }
          }
        }
        uStack_208 = (undefined8 *)CONCAT44(uStack_148,uStack_14c);
        uStack_f1 = 1;
        fVar23 = (float)pdb_140dea610(&uStack_208,fVar29 - fVar34);
        fVar35 = *(float *)(param_1 + 0x30);
        uStack_208 = (undefined8 *)CONCAT44(uStack_148,uStack_14c);
        uStack_f1 = 1;
        fVar34 = (float)pdb_140dea610(&uStack_208,fVar34 + fVar29);
        fVar34 = fVar34 / *(float *)(param_1 + 0x30);
        fVar23 = fVar23 / fVar35;
        uStack_328._0_4_ = fVar23;
        if ((fVar23 < 0.0) || (_DAT_142e36f28 < fVar23)) {
          uStack_200 = pdb_140f70fc0;
          uStack_f1 = 1;
          uStack_208 = &uStack_328;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_208,&UNK_143309510);
        }
        uStack_f1 = 1;
        uVar6 = pdb_1413f9030(&lStack_2e8,fVar23);
        uVar19 = (ulonglong)uVar6;
        if (uStack_230 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_230,&UNK_143309528);
        }
        uVar15 = uVar19 + 1;
        if (uStack_230 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_230,&UNK_143309540);
        }
        if (uStack_188 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_188,&UNK_143309558);
        }
        if (uStack_188 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_188,&UNK_143309570);
        }
        if (param_5 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,param_5,&UNK_143309588);
        }
        if (param_5 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,param_5,&UNK_1433095a0);
        }
        uStack_328._0_4_ = fVar29 / fVar35;
        fVar29 = *(float *)(lStack_228 + 4 + uVar19 * 4);
        fVar35 = _DAT_142e36f28 - extraout_XMM0_Da_01;
        auStack_348 = ZEXT416((uint)(*(float *)(lStack_158 + uVar19 * 4) * fVar35));
        if (((float)uStack_328 < 0.0) || (_DAT_142e36f28 < (float)uStack_328)) {
          uStack_200 = pdb_140f70fc0;
          uStack_f1 = 1;
          uStack_208 = &uStack_328;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_208,&UNK_143309510);
        }
        uStack_198 = CONCAT44(uStack_198._4_4_,*(undefined4 *)(lStack_228 + uVar19 * 4));
        pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,*(undefined4 *)(lStack_1a8 + uVar19 * 4));
        lStack_1a0 = CONCAT44(lStack_1a0._4_4_,*(undefined4 *)(lStack_1a8 + 4 + uVar19 * 4));
        uStack_338 = CONCAT44(uStack_338._4_4_,
                              *(float *)(lStack_158 + 4 + uVar19 * 4) * extraout_XMM0_Da_01);
        uStack_f1 = 1;
        uVar6 = pdb_1413f9030(&lStack_2e8);
        uVar19 = (ulonglong)uVar6;
        if (uStack_230 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_230,&UNK_143309528);
        }
        uVar15 = uVar19 + 1;
        if (uStack_230 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_230,&UNK_143309540);
        }
        if (uStack_188 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_188,&UNK_143309558);
        }
        if (uStack_188 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_188,&UNK_143309570);
        }
        if (param_5 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,param_5,&UNK_143309588);
        }
        if (param_5 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,param_5,&UNK_1433095a0);
        }
        fVar23 = *(float *)(lStack_228 + uVar19 * 4);
        fVar22 = *(float *)(lStack_228 + 4 + uVar19 * 4);
        fVar31 = _DAT_142e36f28 - extraout_XMM0_Da_02;
        fVar30 = *(float *)(lStack_158 + uVar19 * 4);
        fVar28 = *(float *)(lStack_158 + 4 + uVar19 * 4);
        uStack_328 = (byte *)CONCAT44(uStack_328._4_4_,fVar34);
        if ((fVar34 < 0.0) || (_DAT_142e36f28 < fVar34)) {
          uStack_200 = pdb_140f70fc0;
          uStack_f1 = 1;
          uStack_208 = &uStack_328;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_208,&UNK_143309510);
        }
        auStack_218._0_4_ = *(undefined4 *)(lStack_1a8 + uVar19 * 4);
        uStack_f1 = 1;
        fStack_100 = *(float *)(lStack_1a8 + 4 + uVar19 * 4);
        uVar6 = pdb_1413f9030(&lStack_2e8,fVar34);
        uVar19 = (ulonglong)uVar6;
        if (uStack_230 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_230,&UNK_143309528);
        }
        uVar15 = uVar19 + 1;
        if (uStack_230 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_230,&UNK_143309540);
        }
        if (uStack_188 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uStack_188,&UNK_143309558);
        }
        if (uStack_188 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uStack_188,&UNK_143309570);
        }
        if (param_5 <= uVar19) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,param_5,&UNK_143309588);
        }
        if (param_5 <= uVar15) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,param_5,&UNK_1433095a0);
        }
        fVar40 = fVar29 * extraout_XMM0_Da_01 + (float)uStack_198 * fVar35;
        fVar23 = fVar22 * extraout_XMM0_Da_02 + fVar23 * fVar31;
        fVar22 = _DAT_142e36f28 - extraout_XMM0_Da_03;
        fVar34 = extraout_XMM0_Da_03 * *(float *)(lStack_228 + 4 + uVar19 * 4) +
                 fVar22 * *(float *)(lStack_228 + uVar19 * 4);
        bVar3 = 0.0 < fVar40 + fVar23 + fVar34;
        fVar29 = _DAT_142e3c654;
        if (bVar3) {
          fVar29 = extraout_XMM0_Da_03 * *(float *)(lStack_1a8 + 4 + uVar19 * 4) +
                   fVar22 * *(float *)(lStack_1a8 + uVar19 * 4) + fVar34;
        }
        bVar18 = true;
        uVar6 = (uint)bVar3;
        uVar36 = (int)(uVar6 << 0x1f) >> 0x1f;
        uVar6 = (int)(uVar6 << 0x1f) >> 0x1f;
        fVar34 = (float)(~uVar36 & _DAT_1430155a0 |
                        (uint)(fVar40 + extraout_XMM0_Da_01 * (float)lStack_1a0 +
                                        fVar35 * pbStack_180._0_4_) & uVar36);
        fVar35 = (float)(~uVar6 & _UNK_1430155a4 |
                        (uint)(fVar23 + extraout_XMM0_Da_02 * fStack_100 +
                                        fVar31 * (float)auStack_218._0_4_) & uVar6);
        if (((fVar34 <= fStack_fc) || (fVar35 <= fStack_fc)) || (fVar29 <= fStack_fc)) {
          fStack_18c = fStack_258;
          fVar23 = fStack_254;
          if ((uVar10 & 1) != 0) {
            fStack_18c = fStack_250;
            fVar23 = fStack_24c;
          }
          auStack_218 = ZEXT416((uint)fVar23);
          auStack_348._0_4_ = (float)auStack_348._0_4_ + (float)uStack_338;
          fVar22 = fVar22 * *(float *)(lStack_158 + uVar19 * 4) +
                   *(float *)(lStack_158 + 4 + uVar19 * 4) * extraout_XMM0_Da_03;
          lStack_288 = lStack_288 + 1;
          auStack_3b8 = ZEXT416((uint)(fVar22 + _DAT_142e42360));
          fStack_3a8 = (float)auStack_348._0_4_ + _DAT_143309380;
          fStack_3a4 = fVar30 * fVar31 + fVar28 * extraout_XMM0_Da_02 + _UNK_143309384;
          fStack_3a0 = (float)auStack_348._4_4_ + _UNK_143309388;
          fStack_39c = _UNK_14330938c + 0.0;
          if (lStack_160 == 0) {
            pbVar11 = pbStack_170;
            uVar10 = uStack_178;
            if (uStack_178 != 0) goto LAB_14142b490;
          }
          else {
            auStack_218._4_4_ = _UNK_142e37824;
            auStack_218._0_4_ = (uint)fVar23 ^ _DAT_142e37820;
            auStack_218._8_4_ = _UNK_142e37828;
            auStack_218._12_4_ = _UNK_142e3782c;
            pbStack_180 = pbStack_170;
            uStack_198 = uStack_178;
            lVar20 = lStack_168;
            lVar17 = lStack_160;
            do {
              uVar19 = 0;
              if (uStack_198 <= lVar20 + 1U) {
                uVar19 = uStack_198;
              }
              uStack_3e8 = (undefined5)
                           ((ulonglong)*(undefined8 *)(pbStack_180 + lVar20 * 0x28 + 0x1d) >> 0x18);
              uVar27 = *(undefined8 *)(pbStack_180 + lVar20 * 0x28 + 0x10);
              uVar4 = *(undefined8 *)(pbStack_180 + lVar20 * 0x28 + 0x10 + 8);
              uStack_3f0 = (undefined4)uVar4;
              uStack_3ec = (undefined4)((ulonglong)uVar4 >> 0x20);
              pbVar11 = pbStack_180;
              uVar10 = uStack_198;
              if (pbStack_180[lVar20 * 0x28 + 0x25] == 2) break;
              uStack_112 = *(undefined2 *)(pbStack_180 + lVar20 * 0x28 + 0x26);
              uStack_118 = uStack_3e8;
              fStack_3f8 = (float)uVar27;
              uStack_3f4 = (undefined4)((ulonglong)uVar27 >> 0x20);
              fStack_128 = fStack_3f8;
              uStack_124 = uStack_3f4;
              uStack_120 = uStack_3f0;
              uStack_11c = uStack_3ec;
              lStack_1a0 = lVar17 + -1;
              uStack_138 = *(undefined8 *)(pbStack_180 + lVar20 * 0x28);
              uStack_130 = *(byte **)(pbStack_180 + lVar20 * 0x28 + 8);
              bStack_113 = pbStack_180[lVar20 * 0x28 + 0x25];
              fVar23 = (float)pdb_140deec10(&uStack_138);
              if ((_DAT_142e3b1d8 < fVar23) &&
                 (fVar23 = (float)pdb_140deec50(&uStack_390), _DAT_142e3b1d8 < fVar23)) {
                pdb_140deec20(&uStack_138);
                pdb_140deec20(&uStack_138);
                fVar30 = (float)pdb_14007ee60();
                fStack_2a0 = fVar30;
                fStack_29c = fStack_3f8;
                fStack_100 = fStack_3f8;
                pdb_140dea260(&uStack_2b0,&fStack_2a0,param_1);
                pdb_140de9410(&uStack_208,auStack_218._0_4_);
                fVar28 = (float)pdb_140deec10(&uStack_138);
                fVar31 = (float)pdb_140deec50(&uStack_138);
                fVar23 = fStack_2ac;
                fVar37 = fVar28 * (float)uStack_208;
                fVar38 = fVar28 * uStack_208._4_4_;
                fVar28 = fVar28 * (float)uStack_200;
                fVar39 = fVar31 * uStack_200._4_4_;
                fVar41 = fVar31 * (float)uStack_1f8;
                fVar31 = fVar31 * uStack_1f8._4_4_;
                fVar42 = _UNK_143309398 * (float)uStack_1f0;
                fVar43 = _UNK_143309398 * uStack_1f0._4_4_;
                fVar40 = fStack_1e8 * _DAT_1433093a0;
                uStack_338 = CONCAT44(fStack_2ac,uStack_2b0);
                uStack_330 = 0;
                uStack_260 = uStack_2a8;
                if (cStack_f2 == '\x02') {
LAB_14142b2be:
                  uVar7 = 4;
                  fVar24 = fVar34;
                  fVar32 = fVar35;
                  fVar33 = fVar29;
                  if ((float)((uint)(fVar23 - fStack_f8) & _DAT_142e377e0) < _DAT_142f95160) {
                    uVar7 = 0x14;
                  }
                }
                else {
                  uStack_208 = (undefined8 *)*param_9;
                  uStack_200 = (code *)param_9[1];
                  uStack_1f8 = CONCAT17(*(undefined1 *)(puStack_350 + 1),
                                        CONCAT25(*puStack_350,CONCAT14(cStack_f2,(int)param_9[2])));
                  cVar5 = pdb_1408ff980((longlong)&uStack_1f8 + 4);
                  if (cVar5 == '\0') goto LAB_14142b2be;
                  fVar24 = (float)pdb_140deec50(&uStack_138);
                  uVar7 = 0xc;
                  if (fVar24 * _DAT_142e36f50 + fVar23 <= (float)auStack_348._0_4_) {
                    fVar25 = (float)pdb_140deec50(&uStack_138);
                    uVar7 = 0xc;
                    fVar24 = fStack_3a8;
                    fVar32 = fStack_3a4;
                    fVar33 = (float)auStack_3b8._0_4_;
                    if (fVar25 * _DAT_142e36f50 + fVar23 <= fVar22) goto LAB_14142b2be;
                  }
                  else {
                    fVar24 = fStack_3a8;
                    fVar32 = fStack_3a4;
                    fVar33 = (float)auStack_3b8._0_4_;
                  }
                }
                uStack_25c = uVar7;
                uVar7 = pdb_1409012c0(*(undefined4 *)(param_1 + 0x274));
                fVar23 = (float)pdb_140deec10(&uStack_138);
                fVar25 = (float)pdb_140deec10(&uStack_138);
                uStack_1d8 = uStack_3c8;
                uStack_1d0 = uStack_3c0;
                uStack_208 = (undefined8 *)CONCAT44(fVar38,fVar37);
                uStack_200 = (code *)CONCAT44(fVar39,fVar28);
                uStack_1f8 = CONCAT44(fVar31,fVar41);
                uStack_1f0 = CONCAT44(fVar43,fVar42);
                uStack_1e4 = (undefined4)uStack_338;
                uStack_1e0 = (undefined4)((ulonglong)uStack_338 >> 0x20);
                uStack_1dc = uStack_260;
                uStack_1c8 = CONCAT44(fVar32,fVar24);
                uStack_1bc = (undefined4)lStack_288;
                uStack_1b4 = CONCAT44(fVar25 * _DAT_142e36f50 + fVar30,
                                      fVar30 - fVar23 * _DAT_142e36f50);
                uStack_1ac = uStack_25c;
                fStack_1e8 = fVar40;
                fStack_1c0 = fVar33;
                uStack_1b8 = uVar7;
                pdb_14094c790(&uStack_328,&uStack_208);
                lVar17 = plStack_220[2];
                if (lVar17 == *plStack_220) {
                  pdb_142d8db70(plStack_220);
                }
                lVar2 = plStack_220[1];
                lVar16 = lVar17 * 0x40;
                puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar16);
                *puVar1 = uStack_2f8;
                puVar1[1] = uStack_2f4;
                puVar1[2] = uStack_2f0;
                puVar1[3] = uStack_2ec;
                *(undefined1 (*) [16])(lVar2 + 0x20 + lVar16) = auStack_308;
                puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
                *puVar1 = (undefined4)uStack_318;
                puVar1[1] = uStack_318._4_4_;
                puVar1[2] = uStack_310;
                puVar1[3] = uStack_30c;
                *(undefined8 *)(lVar2 + lVar16) = uStack_328;
                ((undefined8 *)(lVar2 + lVar16))[1] = uStack_320;
                plStack_220[2] = lVar17 + 1;
                uVar7 = pdb_140deec10(&uStack_138);
                uVar26 = pdb_140deec50(&uStack_138);
                lVar17 = lStack_238;
                if (lStack_238 == lStack_248) {
                  pdb_142d8d5c0(&lStack_248);
                }
                *(float *)(lStack_240 + lVar17 * 0x14) = fVar30;
                *(float *)(lStack_240 + 4 + lVar17 * 0x14) = fStack_100;
                *(undefined4 *)(lStack_240 + 8 + lVar17 * 0x14) = uVar7;
                *(undefined4 *)(lStack_240 + 0xc + lVar17 * 0x14) = uVar26;
                *(undefined1 *)(lStack_240 + 0x10 + lVar17 * 0x14) = 2;
                lStack_238 = lVar17 + 1;
              }
              lVar20 = (lVar20 - uVar19) + 1;
              pbVar11 = pbStack_180;
              uVar10 = uStack_198;
              lVar17 = lStack_1a0;
            } while (lStack_1a0 != 0);
LAB_14142b490:
            pub_1406abac0(pbVar11,uVar10 * 0x28,4);
          }
          bVar18 = true;
        }
        else if (uStack_178 != 0) {
          pub_1406abac0(pbStack_170,uStack_178 * 0x28,4);
        }
      }
    }
    puStack_3d8 = puStack_360;
    if (lStack_380 != 0) {
      pub_1406abac0((byte *)pfStack_358,lStack_380 << 2,4);
      puStack_3d8 = puStack_360;
    }
  } while( true );
}

