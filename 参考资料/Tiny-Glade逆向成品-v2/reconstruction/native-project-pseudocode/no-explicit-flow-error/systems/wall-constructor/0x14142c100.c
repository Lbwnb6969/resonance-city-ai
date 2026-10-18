// VA 0x14142c100, PDB extent 5453 bytes
// system_wall_constructor::utils::wall_corners::add_stone_foundation_wall_corners<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::wall_corners::add_stone_foundation_wall_corners<system_wall_constructor::construct_walls::construct_walls::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/wall_corners.rs
   Extent: 5453 */

void pdb_14142c100(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 *param_6,float param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  float *pfVar26;
  undefined4 extraout_XMM0_Da;
  float fVar27;
  float extraout_XMM0_Da_00;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float unaff_XMM9_Da;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 in_stack_fffffffffffffc48;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined5 uStack_348;
  longlong lStack_340;
  ulonglong *puStack_338;
  longlong lStack_330;
  undefined1 auStack_328 [16];
  float fStack_318;
  undefined4 uStack_314;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  longlong lStack_2c0;
  float *pfStack_2b8;
  longlong lStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  longlong lStack_290;
  byte *pbStack_288;
  undefined8 uStack_278;
  ulonglong uStack_270;
  longlong lStack_268;
  longlong lStack_260;
  ulonglong *puStack_258;
  ulonglong uStack_250;
  undefined1 auStack_248 [16];
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong uStack_228;
  float *pfStack_220;
  float *pfStack_218;
  ulonglong uStack_210;
  ulonglong *puStack_208;
  float *pfStack_200;
  longlong lStack_1f8;
  ulonglong *puStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined5 uStack_1c8;
  byte bStack_1c3;
  undefined2 uStack_1c2;
  ulonglong uStack_1b8;
  float *pfStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  float fStack_108;
  float fStack_104;
  ulonglong uStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  lStack_268 = param_2;
  pdb_14017ede0(&fStack_1e8,*(longlong *)(param_1 + 0x90),
                *(longlong *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x98) * 0xc);
  uStack_2f8 = CONCAT44(uStack_1d4,uStack_1d8);
  fStack_308 = fStack_1e8;
  fStack_304 = fStack_1e4;
  fStack_300 = fStack_1e0;
  fStack_2fc = (float)uStack_1dc;
  pdb_140080c90(&fStack_198,&fStack_308,0);
  if (SBORROW8(0,CONCAT44(fStack_194,fStack_198))) {
    fStack_308 = fStack_190;
    fStack_304 = fStack_18c;
    fStack_300 = fStack_188;
    fStack_2fc = fStack_184;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143306430,0x2b,&fStack_308,&UNK_143306410,&UNK_143306a30);
  }
  uStack_278 = uStack_168;
  pbStack_288 = (byte *)CONCAT44(fStack_174,fStack_178);
  lStack_290 = uStack_180;
  fStack_2a8 = fStack_198;
  fStack_2a4 = fStack_194;
  fStack_2a0 = fStack_190;
  fStack_29c = fStack_18c;
  fStack_118 = (float)pdb_14092f860(param_1);
  uStack_114 = extraout_XMM0_Da;
  pdb_1424bbfa0(&lStack_340,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                _DAT_143309378,CONCAT44(uVar34,0x3fdf66f3),*(int *)(param_1 + 600) != 2);
  lStack_1f8 = lStack_340;
  puStack_258 = puStack_338 + lStack_330;
  plStack_110 = (longlong *)*param_6;
  puStack_1f0 = puStack_338;
  puVar24 = puStack_338;
  puVar25 = puStack_258;
  fVar28 = _DAT_142f95158;
  fVar43 = _DAT_142e36f28;
  lStack_260 = param_4;
  uStack_250 = param_3;
  if (puStack_338 != puStack_258) {
LAB_14142c2e0:
    do {
      uVar22 = *(ulonglong *)(param_1 + 0x10);
      if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8510(&UNK_1433095b8);
      }
      uVar21 = *puVar24;
      uVar18 = uVar21 - 1;
      if (uVar21 == 0) {
        uVar18 = uVar22 - 2;
      }
      if (uVar22 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar21,uVar22,&UNK_1433095d0);
      }
      uVar15 = uVar21 + 1;
      if (uVar21 + 1 == uVar22) {
        uVar15 = 0;
      }
      if (uVar22 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar18,uVar22,&UNK_1433095e8);
      }
      puStack_208 = puVar24 + 1;
      lVar20 = *(longlong *)(param_1 + 8);
      fStack_124 = *(float *)(lVar20 + uVar21 * 8);
      fVar27 = *(float *)(lVar20 + 4 + uVar21 * 8);
      fStack_12c = *(float *)(lVar20 + uVar15 * 8) - fStack_124;
      fVar33 = *(float *)(lVar20 + 4 + uVar15 * 8) - fVar27;
      fStack_128 = fVar43 / SQRT(fVar33 * fVar33 + fStack_12c * fStack_12c);
      fStack_12c = fStack_12c * fStack_128;
      fStack_124 = fStack_124 - *(float *)(lVar20 + uVar18 * 8);
      fVar27 = fVar27 - *(float *)(lVar20 + 4 + uVar18 * 8);
      fStack_128 = fStack_128 * fVar33;
      fStack_120 = fVar43 / SQRT(fVar27 * fVar27 + fStack_124 * fStack_124);
      fStack_124 = fStack_124 * fStack_120;
      fStack_120 = fStack_120 * fVar27;
      uVar22 = 0;
      uStack_100 = uVar21;
      do {
        pdb_14092fa30(&fStack_198,param_1,uVar22);
        uVar22 = uVar22 + 1;
        if (fStack_198 == 1.4013e-45) {
          if (*(ulonglong *)(param_1 + 0x10) <= uStack_100) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uStack_100,*(ulonglong *)(param_1 + 0x10),&UNK_143309660);
          }
          uVar21 = CONCAT44(fStack_188,fStack_18c);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = uVar21;
          if (uVar22 < 4) {
            uVar32 = *(undefined8 *)(*(longlong *)(param_1 + 8) + uStack_100 * 8);
            fVar27 = fStack_194 - (float)uVar32;
            fVar33 = fStack_190 - (float)((ulonglong)uVar32 >> 0x20);
            fVar27 = fVar33 * fVar33 + fVar27 * fVar27;
            do {
              uVar21 = auVar38._0_8_;
              pdb_14092fa30(&fStack_198,param_1,uVar22);
              if (fStack_198 == 1.4013e-45) {
                if (*(ulonglong *)(param_1 + 0x10) <= uStack_100) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uStack_100,*(ulonglong *)(param_1 + 0x10),&UNK_143309660);
                }
                uVar32 = *(undefined8 *)(*(longlong *)(param_1 + 8) + uStack_100 * 8);
                fVar33 = fStack_194 - (float)uVar32;
                fVar37 = fStack_190 - (float)((ulonglong)uVar32 >> 0x20);
                fVar33 = fVar37 * fVar37 + fVar33 * fVar33;
                auVar35._0_4_ =
                     -(uint)((int)((uint)((int)fVar33 >> 0x1f) >> 1 ^ (uint)fVar33) <
                            (int)((uint)((int)fVar27 >> 0x1f) >> 1 ^ (uint)fVar27));
                if ((auVar35._0_4_ & 1) == 0) {
                  fVar33 = fVar27;
                }
                auVar36._4_4_ = fStack_188;
                auVar36._0_4_ = fStack_18c;
                auVar36._8_8_ = 0;
                auVar35._4_4_ = auVar35._0_4_;
                auVar35._8_4_ = auVar35._0_4_;
                auVar35._12_4_ = auVar35._0_4_;
                auVar38 = ~auVar35 & auVar38 | auVar36 & auVar35;
                uVar21 = auVar38._0_8_;
                fVar27 = fVar33;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != 4);
          }
          goto LAB_14142c530;
        }
      } while (uVar22 != 4);
      uVar21 = 0;
LAB_14142c530:
      uStack_270 = uVar21;
      if (*(ulonglong *)(param_1 + 0x28) <= uStack_100) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143309600);
      }
      fVar27 = *(float *)(*(longlong *)(param_1 + 0x20) + uStack_100 * 4);
      uVar14 = pdb_1413f9030(&fStack_2a8);
      uVar22 = (ulonglong)uVar14;
      if (param_3 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar22,param_3,&UNK_143309618);
      }
      uVar21 = uVar22 + 1;
      if (param_3 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar21,param_3,&UNK_143309618);
      }
      fVar33 = *(float *)(lStack_268 + uVar22 * 4);
      fVar33 = (*(float *)(lStack_268 + 4 + uVar22 * 4) - fVar33) * extraout_XMM0_Da_00 + fVar33;
      fVar27 = (float)pdb_14007ee60(fVar27 * *(float *)(param_1 + 0x30));
      fStack_108 = fVar33;
      if (param_5 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar22,param_5,&UNK_143309630);
      }
      if (param_5 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar21,param_5,&UNK_143309630);
      }
      fVar33 = *(float *)(param_4 + uVar22 * 4);
      fVar37 = extraout_XMM0_Da_00 * (*(float *)(param_4 + 4 + uVar22 * 4) - fVar33) + fVar33 +
               fVar28;
      uVar32 = pdb_140930390(param_1);
      uStack_314 = (undefined4)((ulonglong)uVar32 >> 0x20);
      fVar33 = (float)uVar32;
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      fVar37 = fVar37 + fStack_108;
      fVar42 = fVar33;
      if (param_7 <= fVar33) {
        fVar42 = param_7;
      }
      fStack_318 = (float)(~-(uint)NAN(param_7) & (uint)fVar42 | -(uint)NAN(param_7) & (uint)fVar33)
      ;
      fVar33 = fStack_318 - fVar37;
      if (_DAT_142e3b1d8 < fVar33) {
        fVar28 = (float)pub_142e329c0(fVar33 / _DAT_1433093a4);
        uVar22 = 0;
        if (0.0 <= fVar28) {
          uVar22 = (longlong)(fVar28 - _DAT_142e36f2c) & (longlong)fVar28 >> 0x3f | (longlong)fVar28
          ;
        }
        if (_DAT_142e36f30 < fVar28) {
          uVar22 = 0xffffffffffffffff;
        }
        if (uVar22 < 3) {
          uVar22 = 2;
        }
        uStack_228 = uStack_100;
        pdb_140de8290(&lStack_2c0,uVar22,_DAT_14300b5d0 / fVar33,&uStack_228,&UNK_143309648);
        pfStack_220 = pfStack_2b8 + lStack_2b0;
        bVar12 = false;
        pfStack_200 = pfStack_2b8;
        bVar11 = false;
        pfVar26 = pfStack_2b8;
        do {
          puVar24 = puStack_208;
          pfVar16 = pfVar26;
          fVar28 = unaff_XMM9_Da;
          do {
            bVar4 = bVar11;
            if (pfVar16 == pfStack_220) {
LAB_14142cf00:
              if (lStack_2c0 != 0) {
                pub_1406abac0((byte *)pfStack_200,lStack_2c0 << 2,4);
              }
              puVar25 = puStack_258;
              param_4 = lStack_260;
              unaff_XMM9_Da = fVar28;
              fVar28 = _DAT_142f95158;
              if (puVar24 == puStack_258) goto LAB_14142cf4d;
              goto LAB_14142c2e0;
            }
            pfVar26 = pfVar16 + 1;
            fVar33 = *pfVar16 * fStack_318 + (fVar43 - *pfVar16) * fVar37;
            unaff_XMM9_Da = fVar33;
            if (!bVar12) {
              if (pfVar26 == pfStack_220) goto LAB_14142cf00;
              pfVar26 = pfVar16 + 2;
              unaff_XMM9_Da = pfVar16[1] * fStack_318 + (fVar43 - pfVar16[1]) * fVar37;
              fVar28 = fVar33;
            }
            fVar33 = (float)pdb_140e02880(&uStack_228);
            fVar42 = unaff_XMM9_Da - fVar28;
            bVar11 = (bool)(bVar4 ^ 1);
            fVar33 = (fVar33 * _DAT_142e37980 - (fVar43 - fVar33) * _DAT_142e37980) + _DAT_142f94720
            ;
            bVar12 = true;
            pfVar16 = pfVar26;
            fVar28 = unaff_XMM9_Da;
          } while ((fVar42 <= _DAT_142e3b1d8) || (fVar33 <= 0.0));
          fStack_198 = fStack_118;
          fStack_194 = (float)uStack_114;
          pdb_140dea610(&fStack_198,
                        *(float *)(&UNK_142e37810 + (ulonglong)!bVar4 * 4) *
                        (fVar33 * _DAT_142e36f50 + _DAT_1433093a8) + fVar27);
          pdb_140dea600();
          pdb_140deead0(auStack_328);
          pdb_14007ee60();
          lVar20 = 4;
          pfVar16 = (float *)pub_1406abab0(0x28,4);
          if (pfVar16 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(4,0x28);
          }
          uStack_378 = 0;
          uStack_370 = 0;
          fStack_198 = (float)auStack_328._0_8_;
          fStack_194 = SUB84(auStack_328._0_8_,4);
          fStack_190 = (float)auStack_328._8_8_;
          fStack_18c = SUB84(auStack_328._8_8_,4);
          fStack_188 = 0.0;
          fStack_184 = 0.0;
          uStack_180 = 0;
          pfVar16[4] = 0.0;
          pfVar16[5] = 0.0;
          pfVar16[6] = 0.0;
          pfVar16[7] = 0.0;
          *pfVar16 = fStack_198;
          pfVar16[1] = fStack_194;
          pfVar16[2] = fStack_190;
          pfVar16[3] = fStack_18c;
          pfVar16[8] = 0.0;
          *(undefined2 *)(pfVar16 + 9) = 0;
          lStack_1a8 = 0;
          lStack_1a0 = 1;
          uStack_1b8 = 1;
          uStack_f1 = 1;
          pfStack_1b0 = pfVar16;
          lVar17 = pdb_140c2b5c0(param_8);
          while (lVar23 = lVar17, lVar23 != lVar20) {
            uStack_f1 = 1;
            cVar13 = pdb_140deea30(lVar23,auStack_328);
            if (cVar13 != '\0') {
              uStack_f1 = 1;
              pdb_14146c450(lVar23,&uStack_1b8);
            }
            lVar17 = lVar23 + 0x14;
            if (*(int *)(param_1 + 600) != 2) {
              uStack_f1 = 1;
              fVar28 = (float)pdb_140deec20(lVar23);
              uStack_f1 = 1;
              fVar33 = (float)pdb_140deec10(lVar23);
              fVar28 = fVar28 + fVar33 * _DAT_142e36f50;
              if (fVar28 < *(float *)(param_1 + 0x30) || fVar28 == *(float *)(param_1 + 0x30)) {
                uStack_f1 = 1;
                fVar28 = (float)pdb_140deec20(lVar23);
                uStack_f1 = 1;
                fVar33 = (float)pdb_140deec10(lVar23);
                if (fVar28 < fVar33 * _DAT_142e36f50) {
                  uStack_f1 = 1;
                  pdb_140deec20(lVar23);
                  uStack_f1 = 1;
                  pdb_140deec20(lVar23);
                  uStack_f1 = 1;
                  pdb_140deebf0(lVar23);
                  uStack_f1 = 1;
                  pdb_140deead0(&fStack_198);
                  uStack_f1 = 1;
                  pdb_14146c450(&fStack_198,&uStack_1b8);
                }
              }
              else {
                uStack_f1 = 1;
                pdb_140deec20(lVar23);
                uStack_f1 = 1;
                pdb_140deec20(lVar23);
                uStack_f1 = 1;
                pdb_140deebf0(lVar23);
                uStack_f1 = 1;
                pdb_140deead0(&fStack_198);
                uStack_f1 = 1;
                pdb_14146c450(&fStack_198,&uStack_1b8);
              }
            }
          }
          fStack_104 = fStack_12c;
          fVar28 = fStack_128;
          if (bVar4) {
            fStack_104 = fStack_124;
            fVar28 = fStack_120;
          }
          auStack_248 = ZEXT416((uint)fVar28);
          uStack_100 = uStack_100 + 1;
          if (lStack_1a0 == 0) {
            pfVar16 = pfStack_1b0;
            uVar22 = uStack_1b8;
            if (uStack_1b8 != 0) goto LAB_14142ced2;
          }
          else {
            auStack_248._4_4_ = _UNK_142e37824;
            auStack_248._0_4_ = (uint)fVar28 ^ _DAT_142e37820;
            auStack_248._8_4_ = _UNK_142e37828;
            auStack_248._12_4_ = _UNK_142e3782c;
            pfStack_218 = pfStack_1b0;
            uStack_210 = uStack_1b8;
            lVar17 = lStack_1a8;
            lVar20 = lStack_1a0;
            fStack_11c = fVar27;
            do {
              lVar20 = lVar20 + -1;
              uVar21 = 0;
              if (uStack_210 <= lVar17 + 1U) {
                uVar21 = uStack_210;
              }
              uStack_348 = (undefined5)
                           ((ulonglong)*(undefined8 *)((longlong)pfStack_218 + lVar17 * 0x28 + 0x1d)
                           >> 0x18);
              uStack_368 = *(undefined8 *)(pfStack_218 + lVar17 * 10);
              uStack_360 = *(undefined8 *)(pfStack_218 + lVar17 * 10 + 2);
              uStack_358 = *(undefined8 *)(pfStack_218 + lVar17 * 10 + 4);
              uVar32 = *(undefined8 *)(pfStack_218 + lVar17 * 10 + 4 + 2);
              uStack_350 = (undefined4)uVar32;
              uStack_34c = (undefined4)((ulonglong)uVar32 >> 0x20);
              bVar2 = *(byte *)((longlong)pfStack_218 + lVar17 * 0x28 + 0x25);
              pfVar16 = pfStack_218;
              uVar22 = uStack_210;
              fVar27 = fStack_11c;
              fVar43 = _DAT_142e36f28;
              if (bVar2 == 2) break;
              uStack_1c2 = *(undefined2 *)((longlong)pfStack_218 + lVar17 * 0x28 + 0x26);
              uStack_1c8 = uStack_348;
              uStack_368._4_4_ = (float)((ulonglong)uStack_368 >> 0x20);
              uStack_360._4_4_ = (undefined4)((ulonglong)uStack_360 >> 0x20);
              uStack_358._4_4_ = (undefined4)((ulonglong)uStack_358 >> 0x20);
              uStack_1d8 = (undefined4)uStack_358;
              uStack_1d4 = uStack_358._4_4_;
              uStack_1d0 = uStack_350;
              uStack_1cc = uStack_34c;
              fStack_1e8 = (float)uStack_368;
              fStack_1e4 = uStack_368._4_4_;
              fStack_1e0 = (float)uStack_360;
              uStack_1dc = uStack_360._4_4_;
              uVar34 = (undefined4)uStack_358;
              bStack_1c3 = bVar2;
              fVar28 = (float)pdb_140deec10(&fStack_1e8);
              if ((_DAT_142e3b1d8 < fVar28) &&
                 (fVar28 = (float)pdb_140deec50(&fStack_1e8), _DAT_142e3b1d8 < fVar28)) {
                uVar29 = pdb_140deec20(&fStack_1e8);
                pdb_140deec20(&fStack_1e8);
                uStack_230 = pdb_14007ee60(uVar29);
                uStack_22c = uVar34;
                pdb_140dea260(&fStack_308,&uStack_230,param_1);
                pdb_140df4520(&fStack_198,&uStack_270);
                fVar10 = fStack_304;
                fVar9 = fStack_308;
                fVar39 = fStack_198 * _DAT_1433093b0;
                fVar40 = fStack_194 * _UNK_1433093b4;
                fVar41 = fStack_190 * _DAT_1433093ac + fStack_300;
                pdb_140de9410(&fStack_3a8);
                fVar30 = (float)pdb_140deec10(&fStack_1e8);
                fVar31 = (float)pdb_140deec50(&fStack_1e8);
                fVar8 = fStack_388;
                fVar7 = fStack_38c;
                fVar6 = fStack_390;
                fVar5 = fStack_394;
                fVar42 = fStack_398;
                fVar33 = fStack_39c;
                fVar27 = fStack_3a0;
                fVar43 = fStack_3a4;
                fVar28 = fStack_3a8;
                uStack_148 = pdb_1409012c0(*(undefined4 *)(param_1 + 0x274));
                fStack_174 = fVar39 + fVar9;
                fStack_170 = fVar40 + fVar10;
                fStack_178 = fVar8 * _DAT_1433093c0;
                fStack_188 = fVar31 * fVar42;
                fStack_184 = fVar31 * fVar5;
                fStack_198 = fVar30 * fVar28;
                fStack_194 = fVar30 * fVar43;
                fStack_190 = fVar30 * fVar27;
                fStack_18c = fVar31 * fVar33;
                uStack_168 = uStack_378;
                uStack_160 = uStack_370;
                uStack_180 = CONCAT44(_UNK_1433093d8 * fVar7,_UNK_1433093d8 * fVar6);
                uStack_158 = _DAT_1430155a0;
                uStack_150 = 0xc2c80000;
                uStack_14c = (undefined4)uStack_100;
                uStack_144 = CONCAT44(fStack_1e0,fStack_1e8);
                uStack_13c = 0x2004;
                fStack_16c = fVar41;
                pdb_14094c790(&fStack_308,&fStack_198);
                lVar23 = plStack_110[2];
                if (lVar23 == *plStack_110) {
                  pdb_142d8db70(plStack_110);
                }
                lVar3 = plStack_110[1];
                lVar19 = lVar23 * 0x40;
                puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar19);
                *puVar1 = uStack_2d8;
                puVar1[1] = uStack_2d0;
                *(undefined1 (*) [16])(lVar3 + 0x20 + lVar19) = auStack_2e8;
                puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar19);
                *puVar1 = uStack_2f8;
                puVar1[1] = uStack_2f0;
                *(undefined8 *)(lVar3 + lVar19) = CONCAT44(fStack_304,fStack_308);
                ((undefined8 *)(lVar3 + lVar19))[1] = CONCAT44(fStack_2fc,fStack_300);
                plStack_110[2] = lVar23 + 1;
              }
              lVar17 = (lVar17 - uVar21) + 1;
              pfVar16 = pfStack_218;
              uVar22 = uStack_210;
              fVar27 = fStack_11c;
              fVar43 = _DAT_142e36f28;
            } while (lVar20 != 0);
LAB_14142ced2:
            pub_1406abac0((byte *)pfVar16,uVar22 * 0x28,4);
          }
          bVar12 = true;
          param_3 = uStack_250;
        } while( true );
      }
      puVar24 = puStack_208;
    } while (puStack_208 != puVar25);
  }
LAB_14142cf4d:
  if (lStack_1f8 != 0) {
    pub_1406abac0((byte *)puStack_1f0,lStack_1f8 << 3,8);
  }
  if (CONCAT44(fStack_2a4,fStack_2a8) != 0) {
    pub_1406abac0((byte *)CONCAT44(fStack_29c,fStack_2a0),CONCAT44(fStack_2a4,fStack_2a8) << 3,4);
  }
  if (lStack_290 != 0) {
    pub_1406abac0(pbStack_288,lStack_290 << 2,4);
  }
  return;
}

