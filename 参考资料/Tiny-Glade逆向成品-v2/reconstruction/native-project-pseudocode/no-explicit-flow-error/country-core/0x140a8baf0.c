// VA 0x140a8baf0, PDB extent 4557 bytes
// country_core::resources::audio_resources::AudioCore::visualize_sounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioCore::visualize_sounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 4557 */

undefined8 *
pdb_140a8baf0(undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong *plVar9;
  float *pfVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong arg1;
  uint uVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  longlong lStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  ulonglong uStack_278;
  byte *pbStack_270;
  longlong lStack_268;
  undefined1 (*pauStack_258) [16];
  longlong lStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong *plStack_230;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  longlong lStack_1f0;
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  byte *pbStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong lStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lVar18 = *param_2;
  if (lVar18 == 0) {
    plVar9 = (longlong *)pdb_140f3bda0();
    if ((char)plVar9[2] == '\x01') {
      lVar18 = *plVar9;
      param_2 = (longlong *)plVar9[1];
    }
    else {
      lVar18 = pdb_140f4fd10();
      *plVar9 = lVar18;
      plVar9[1] = (longlong)param_2;
      *(undefined1 *)(plVar9 + 2) = 1;
    }
    *plVar9 = lVar18 + 1;
    lVar14 = _UNK_143044868;
    param_1[2] = _DAT_143044860;
    param_1[3] = lVar14;
    lVar14 = _UNK_143044858;
    *param_1 = _DAT_143044850;
    param_1[1] = lVar14;
    param_1[4] = lVar18;
    param_1[5] = param_2;
  }
  else {
    plVar9 = (longlong *)pdb_140f3bda0();
    if ((char)plVar9[2] == '\x01') {
      lStack_238 = *plVar9;
      param_2 = (longlong *)plVar9[1];
    }
    else {
      lStack_238 = pdb_140f4fd10();
      *plVar9 = lStack_238;
      plVar9[1] = (longlong)param_2;
      *(undefined1 *)(plVar9 + 2) = 1;
    }
    *plVar9 = lStack_238 + 1;
    uStack_248 = _DAT_143044860;
    lStack_240 = _UNK_143044868;
    pauStack_258 = _DAT_143044850;
    lStack_250 = _UNK_143044858;
    lVar18 = lVar18 + 0x10;
    plStack_230 = param_2;
    pdb_14180a650(&lStack_170,lVar18);
    if (lStack_170 == -0x7ffffffffffffffc) {
      pdb_14180a370(&lStack_1f0,lVar18);
      fVar5 = _DAT_143043990;
      fVar4 = _DAT_143043950;
      if (lStack_1f0 == -0x7ffffffffffffffc) {
        uStack_1b8 = uStack_1e8;
        pbStack_288 = pbStack_1e0 + lStack_1d8 * 8;
        pbStack_1a8 = pbStack_1e0;
        pbVar17 = pbStack_1e0;
        lStack_298 = param_3;
        lStack_200 = param_4;
        if (pbStack_1e0 != pbStack_288) {
          do {
            uStack_208 = *(undefined8 *)pbVar17;
            pdb_14180a0c0(&lStack_170,&uStack_208);
            if (lStack_170 != -0x7ffffffffffffffc) {
              uStack_10c = uStack_144;
              uStack_108 = CONCAT44(uStack_13c,uStack_140);
              uStack_11c = uStack_154;
              uStack_118 = uStack_150;
              uStack_114 = uStack_14c;
              uStack_110 = uStack_148;
              fStack_12c = fStack_164;
              fStack_128 = fStack_160;
              fStack_124 = (float)uStack_15c;
              uStack_120 = uStack_158;
              lStack_138 = lStack_170;
              fStack_130 = fStack_168;
              uVar13 = pdb_142deafd0(&lStack_138);
LAB_140a8c7b5:
              param_1[1] = uVar13;
              *param_1 = 0;
LAB_140a8c574:
              if (uStack_1b8 != 0) {
                pub_1406abac0(pbStack_1a8,uStack_1b8 << 3,8);
              }
              goto LAB_140a8c31c;
            }
            pdb_141809de0(&lStack_1f0,&uStack_208);
            uStack_178 = uStack_1e8;
            if (lStack_1f0 != -0x7ffffffffffffffc) {
              uStack_108 = uStack_1c0;
              uStack_118 = (undefined4)uStack_1d0;
              uStack_114 = (uint)((ulonglong)uStack_1d0 >> 0x20);
              uStack_110 = (undefined4)uStack_1c8;
              uStack_10c = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
              lStack_138 = lStack_1f0;
              fStack_130 = (float)uStack_1e8;
              fStack_12c = (float)(uStack_1e8 >> 0x20);
              fStack_128 = SUB84(pbStack_1e0,0);
              fStack_124 = (float)((ulonglong)pbStack_1e0 >> 0x20);
              uStack_120 = (undefined4)lStack_1d8;
              uStack_11c = (undefined4)((ulonglong)lStack_1d8 >> 0x20);
              uVar13 = pdb_142deafd0(&lStack_138);
              goto LAB_140a8c7b5;
            }
            pbStack_280 = pbVar17 + 8;
            pbStack_290 = pbStack_1e0 + lStack_1d8 * 8;
            pbStack_1a0 = pbStack_1e0;
            pbVar17 = pbStack_1e0;
            if (pbStack_1e0 != pbStack_290) {
              do {
                uStack_210 = *(undefined8 *)pbVar17;
                pbStack_1f8 = pbVar17;
                pdb_1418096e0(&lStack_170,&uStack_210);
                lVar18 = lStack_298;
                if (lStack_170 != -0x7ffffffffffffffc) {
                  uStack_10c = uStack_144;
                  uStack_108 = CONCAT44(uStack_13c,uStack_140);
                  uStack_11c = uStack_154;
                  uStack_118 = uStack_150;
                  uStack_114 = uStack_14c;
                  uStack_110 = uStack_148;
                  fStack_12c = fStack_164;
                  fStack_128 = fStack_160;
                  fStack_124 = (float)uStack_15c;
                  uStack_120 = uStack_158;
                  lStack_138 = lStack_170;
                  fStack_130 = fStack_168;
                  uVar13 = pdb_142deafd0(&lStack_138);
LAB_140a8c701:
                  param_1[1] = uVar13;
                  *param_1 = 0;
joined_r0x000140a8c716:
                  if (uStack_178 != 0) {
                    pub_1406abac0(pbStack_1a0,uStack_178 << 3,8);
                  }
                  goto LAB_140a8c574;
                }
                pdb_1418093f0(&lStack_1f0,&uStack_210);
                uStack_180 = uStack_1e8;
                if (lStack_1f0 != -0x7ffffffffffffffc) {
                  uStack_108 = uStack_1c0;
                  uStack_118 = (undefined4)uStack_1d0;
                  uStack_114 = (uint)((ulonglong)uStack_1d0 >> 0x20);
                  uStack_110 = (undefined4)uStack_1c8;
                  uStack_10c = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
                  lStack_138 = lStack_1f0;
                  fStack_130 = (float)uStack_1e8;
                  fStack_12c = (float)(uStack_1e8 >> 0x20);
                  fStack_128 = SUB84(pbStack_1e0,0);
                  fStack_124 = (float)((ulonglong)pbStack_1e0 >> 0x20);
                  uStack_120 = (undefined4)lStack_1d8;
                  uStack_11c = (undefined4)((ulonglong)lStack_1d8 >> 0x20);
                  uVar13 = pdb_142deafd0(&lStack_138);
                  goto LAB_140a8c701;
                }
                pbStack_1f8 = pbStack_1f8 + 8;
                pbVar15 = pbStack_1e0 + lStack_1d8 * 8;
                pbStack_1b0 = pbStack_1e0;
                for (pbVar17 = pbStack_1e0; pbVar17 != pbVar15; pbVar17 = pbVar17 + 8) {
                  uStack_2a0 = *(undefined8 *)pbVar17;
                  pdb_141808580(&lStack_170,&uStack_2a0);
                  if (lStack_170 != -0x7ffffffffffffffc) {
                    uStack_10c = uStack_144;
                    uStack_108 = CONCAT44(uStack_13c,uStack_140);
                    uStack_11c = uStack_154;
                    uStack_118 = uStack_150;
                    uStack_114 = uStack_14c;
                    uStack_110 = uStack_148;
                    fStack_12c = fStack_164;
                    fStack_128 = fStack_160;
                    fStack_124 = (float)uStack_15c;
                    uStack_120 = uStack_158;
                    lStack_138 = lStack_170;
                    fStack_130 = fStack_168;
                    uVar13 = pdb_142deafd0(&lStack_138);
                    goto LAB_140a8c525;
                  }
                  if (fStack_168._0_1_ != '\x02') {
                    pdb_141808100(&lStack_170,&uStack_2a0);
                    if (lStack_170 == -0x7ffffffffffffffc) {
                      pdb_141809850(&lStack_1f0,auStack_2a8);
                      uStack_278 = uStack_1e8;
                      pbStack_270 = pbStack_1e0;
                      lStack_268 = lStack_1d8;
                      if (lStack_1f0 != -0x7ffffffffffffffc) {
                        uStack_108 = uStack_1c0;
                        uStack_118 = (undefined4)uStack_1d0;
                        uStack_114 = (uint)((ulonglong)uStack_1d0 >> 0x20);
                        uStack_110 = (undefined4)uStack_1c8;
                        uStack_10c = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
                        fStack_130 = (float)uStack_1e8;
                        fStack_12c = (float)(uStack_1e8 >> 0x20);
                        fStack_128 = SUB84(pbStack_1e0,0);
                        fStack_124 = (float)((ulonglong)pbStack_1e0 >> 0x20);
                        uStack_120 = (undefined4)lStack_1d8;
                        uStack_11c = (undefined4)((ulonglong)lStack_1d8 >> 0x20);
                        lStack_138 = lStack_1f0;
                        uVar13 = pdb_142deafd0(&lStack_138);
                        goto LAB_140a8c525;
                      }
                      uStack_198 = uStack_1e8;
                      pbStack_190 = pbStack_1e0;
                      lStack_188 = lStack_1d8;
                      pdb_140f60be0(&lStack_138,&uStack_198);
                      pdb_1403b0b40(&pauStack_258,&lStack_138);
                      if ((lVar18 != 0) &&
                         ((lStack_200 != lStack_188 ||
                          (iVar8 = pub_142e32750(lVar18,pbStack_190,lStack_200), iVar8 != 0)))) {
LAB_140a8c16e:
                        if (uStack_198 != 0) {
                          pub_1406abac0(pbStack_190,uStack_198,1);
                        }
                        goto LAB_140a8bd60;
                      }
                      pdb_141808270(&lStack_170,&uStack_2a0);
                      fVar23 = fStack_160;
                      fVar21 = fStack_164;
                      fVar28 = fStack_168;
                      if (lStack_170 == -0x7ffffffffffffffc) {
                        pdb_141807cc0(&lStack_170,&uStack_2a0);
                        fVar7 = fStack_164;
                        if (lStack_170 == -0x7ffffffffffffffc) {
                          lStack_138 = CONCAT44(lStack_138._4_4_,3);
                          fStack_128 = 0.7822;
                          fStack_124 = fVar28;
                          uStack_118 = 0x3f800000;
                          uStack_114 = uStack_114 & 0xffffff00;
                          pdb_140ab07b0(&lStack_138,param_5);
                          pdb_140e09030(&fStack_220,param_6);
                          fVar26 = fStack_218;
                          fVar6 = fStack_21c;
                          fVar27 = fStack_220;
                          fVar22 = fStack_21c * fVar4;
                          pdb_14007ee60();
                          pfVar10 = (float *)pub_1406abab0(0x18,4);
                          if (pfVar10 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc7e11(4,0x18);
                          }
                          fVar23 = fVar23 + fVar26 * fVar4;
                          fVar28 = fVar28 + fVar27 * fVar4;
                          fVar29 = _UNK_143043964 + fVar22 + fVar21;
                          fVar26 = fVar26 * _UNK_143043978;
                          fVar22 = fVar28 - fVar27 * _DAT_143043970;
                          fVar24 = fVar29 - fVar6 * _UNK_143043974;
                          fVar25 = fVar23 - fVar26;
                          fVar21 = fVar28 + fVar27 * _UNK_14304397c;
                          fVar27 = fVar29 + fVar6 * _UNK_143043974;
                          fVar26 = fVar23 + fVar26;
                          *pfVar10 = fVar22;
                          pfVar10[1] = fVar24;
                          pfVar10[2] = fVar25;
                          pfVar10[3] = fVar21;
                          *(ulonglong *)(pfVar10 + 4) = CONCAT44(fVar26,fVar27);
                          lStack_138 = 2;
                          fStack_130 = SUB84(pfVar10,0);
                          fStack_12c = (float)((ulonglong)pfVar10 >> 0x20);
                          fStack_128 = 2.8026e-45;
                          fStack_124 = 0.0;
                          uStack_120 = 0;
                          uStack_11c = 0x80000000;
                          uStack_108 = uStack_108 & 0xffffffff00000000;
                          uStack_f8 = 0x40000000;
                          uStack_f4 = 1;
                          pdb_140ab2da0(&lStack_138,param_5);
                          pdb_14007ee60();
                          pfVar10 = (float *)pub_1406abab0(0x18,4);
                          if (pfVar10 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc7e11(4,0x18);
                          }
                          fVar24 = fVar24 + _UNK_143043984;
                          fVar25 = fVar25 + _UNK_143043988;
                          fVar21 = fVar21 + _UNK_14304398c;
                          fVar27 = fVar27 + _DAT_143043990;
                          *pfVar10 = fVar22 + _DAT_143043980;
                          pfVar10[1] = fVar24;
                          pfVar10[2] = fVar25;
                          pfVar10[3] = fVar21;
                          *(ulonglong *)(pfVar10 + 4) = CONCAT44(fVar26 + 0.0,fVar27);
                          lStack_138 = 2;
                          fStack_130 = SUB84(pfVar10,0);
                          fStack_12c = (float)((ulonglong)pfVar10 >> 0x20);
                          fStack_128 = 2.8026e-45;
                          fStack_124 = 0.0;
                          uStack_120 = 0;
                          uStack_11c = 0x80000000;
                          uStack_108 = uStack_108 & 0xffffffff00000000;
                          uStack_f8 = 0x40000000;
                          uStack_f4 = 1;
                          pdb_140ab2da0(&lStack_138,param_5);
                          pdb_14007ee60();
                          pbVar11 = pub_1406abab0(0x18,4);
                          if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc7e11(4,0x18);
                          }
                          *(ulonglong *)pbVar11 = CONCAT44(fVar29,fVar28);
                          *(float *)(pbVar11 + 8) = fVar23;
                          fVar21 = fVar7 * fVar5 * 0.0;
                          *(ulonglong *)(pbVar11 + 0xc) =
                               CONCAT44(fVar7 * fVar5 + fVar29,fVar21 + fVar28);
                          *(float *)(pbVar11 + 0x14) = fVar21 + fVar23;
                          lStack_138 = 2;
                          fStack_130 = SUB84(pbVar11,0);
                          fStack_12c = (float)((ulonglong)pbVar11 >> 0x20);
                          fStack_128 = 2.8026e-45;
                          fStack_124 = 0.0;
                          uStack_120 = 0;
                          uStack_11c = 0x80000000;
                          uStack_108 = uStack_108 & 0xffffffff00000000;
                          uStack_f8 = 0x40000000;
                          uStack_f4 = 1;
                          pdb_140ab2da0(&lStack_138,param_5);
                          goto LAB_140a8c16e;
                        }
                        uStack_108 = CONCAT44(uStack_13c,uStack_140);
                        uStack_118 = uStack_150;
                        uStack_114 = uStack_14c;
                        uStack_110 = uStack_148;
                        uStack_10c = uStack_144;
                        fStack_128 = fStack_160;
                        fStack_124 = (float)uStack_15c;
                        uStack_120 = uStack_158;
                        uStack_11c = uStack_154;
                        lStack_138 = lStack_170;
                        fStack_130 = fStack_168;
                        fStack_12c = fStack_164;
                        uVar13 = pdb_142deafd0(&lStack_138);
                      }
                      else {
                        uStack_114 = uStack_14c;
                        uStack_110 = uStack_148;
                        uStack_10c = uStack_144;
                        uStack_108 = CONCAT44(uStack_13c,uStack_140);
                        fStack_124 = (float)uStack_15c;
                        uStack_120 = uStack_158;
                        uStack_11c = uStack_154;
                        uStack_118 = uStack_150;
                        lStack_138 = lStack_170;
                        fStack_130 = fStack_168;
                        fStack_12c = fStack_164;
                        fStack_128 = fStack_160;
                        uVar13 = pdb_142deafd0(&lStack_138);
                      }
                      param_1[1] = uVar13;
                      *param_1 = 0;
                      if (uStack_198 != 0) {
                        pub_1406abac0(pbStack_190,uStack_198,1);
                      }
                    }
                    else {
                      uStack_108 = CONCAT44(uStack_13c,uStack_140);
                      uStack_118 = uStack_150;
                      uStack_114 = uStack_14c;
                      uStack_110 = uStack_148;
                      uStack_10c = uStack_144;
                      fStack_128 = fStack_160;
                      fStack_124 = (float)uStack_15c;
                      uStack_120 = uStack_158;
                      uStack_11c = uStack_154;
                      lStack_138 = lStack_170;
                      fStack_130 = fStack_168;
                      fStack_12c = fStack_164;
                      uVar13 = pdb_142deafd0(&lStack_138);
LAB_140a8c525:
                      param_1[1] = uVar13;
                      *param_1 = 0;
                    }
                    if (uStack_180 != 0) {
                      pub_1406abac0(pbStack_1b0,uStack_180 << 3,8);
                    }
                    goto joined_r0x000140a8c716;
                  }
LAB_140a8bd60:
                }
                if (uStack_180 != 0) {
                  pub_1406abac0(pbStack_1b0,uStack_180 << 3,8);
                }
                pbVar17 = pbStack_1f8;
              } while (pbStack_1f8 != pbStack_290);
            }
            if (uStack_178 != 0) {
              pub_1406abac0(pbStack_1a0,uStack_178 << 3,8);
            }
            pbVar17 = pbStack_280;
          } while (pbStack_280 != pbStack_288);
        }
        if (uStack_1b8 != 0) {
          pub_1406abac0(pbStack_1a8,uStack_1b8 << 3,8);
        }
        param_1[4] = lStack_238;
        param_1[5] = plStack_230;
        param_1[2] = uStack_248;
        param_1[3] = lStack_240;
        *param_1 = pauStack_258;
        param_1[1] = lStack_250;
        return param_1;
      }
      uStack_108 = uStack_1c0;
      uStack_118 = (undefined4)uStack_1d0;
      uStack_114 = (uint)((ulonglong)uStack_1d0 >> 0x20);
      uStack_110 = (undefined4)uStack_1c8;
      uStack_10c = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
      lStack_138 = lStack_1f0;
      fStack_130 = (float)uStack_1e8;
      fStack_12c = (float)(uStack_1e8 >> 0x20);
      fStack_128 = SUB84(pbStack_1e0,0);
      fStack_124 = (float)((ulonglong)pbStack_1e0 >> 0x20);
      uStack_120 = (undefined4)lStack_1d8;
      uStack_11c = (undefined4)((ulonglong)lStack_1d8 >> 0x20);
      uVar13 = pdb_142deafd0(&lStack_138);
    }
    else {
      uStack_10c = uStack_144;
      uStack_108 = CONCAT44(uStack_13c,uStack_140);
      uStack_11c = uStack_154;
      uStack_118 = uStack_150;
      uStack_114 = uStack_14c;
      uStack_110 = uStack_148;
      fStack_12c = fStack_164;
      fStack_128 = fStack_160;
      fStack_124 = (float)uStack_15c;
      uStack_120 = uStack_158;
      lStack_138 = lStack_170;
      fStack_130 = fStack_168;
      uVar13 = pdb_142deafd0(&lStack_138);
    }
    param_1[1] = uVar13;
    *param_1 = 0;
LAB_140a8c31c:
    lVar18 = lStack_250;
    if (lStack_250 != 0) {
      if (lStack_240 != 0) {
        auVar1 = *pauStack_258;
        pauVar20 = pauStack_258 + 1;
        uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        lVar14 = lStack_240;
        pauVar19 = pauStack_258;
        do {
          if ((short)uVar16 == 0) {
            do {
              auVar1 = *pauVar20;
              pauVar19 = pauVar19 + -0x18;
              pauVar20 = pauVar20 + 1;
              uVar16 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar16 == 0);
          }
          uVar2 = 0;
          for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          uVar12 = *(ulonglong *)((longlong)pauVar19 + (ulonglong)uVar2 * -0x18 + -0x18);
          if (uVar12 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar19 + (ulonglong)uVar2 * -0x18 + -0x10),uVar12,1
                         );
          }
          uVar16 = uVar16 - 1 & uVar16;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar12 = lVar18 * 0x18 + 0x27U & 0xfffffffffffffff0;
      arg1 = lVar18 + uVar12 + 0x11;
      if (arg1 != 0) {
        pub_1406abac0((byte *)((longlong)pauStack_258 - uVar12),arg1,0x10);
      }
    }
  }
  return param_1;
}

