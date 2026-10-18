// VA 0x1409fca20, PDB extent 4613 bytes
// country_core::utils::geo::thick_line_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::geo::thick_line_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 4613 */

ulonglong *
pdb_1409fca20(ulonglong *param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
             ulonglong param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong *puVar5;
  float *pfVar6;
  byte *pbVar7;
  float *pfVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong unaff_R14;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulonglong uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulonglong uStack_2c8;
  undefined8 uStack_2a8;
  float *pfStack_278;
  float *pfStack_270;
  undefined1 auStack_260 [24];
  ulonglong uStack_248;
  byte *pbStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulonglong uStack_160;
  byte *pbStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  float *pfStack_118;
  ulonglong uStack_110;
  float *pfStack_108;
  ulonglong uStack_100;
  float fStack_f8;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (param_5 < 2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14303434b,0x4d,&UNK_143034378);
  }
  uStack_248 = param_5;
  uStack_1c0 = param_7;
  if (param_5 != param_7) {
    uVar20 = pdb_142dc7fb4(0,&uStack_248,&uStack_1c0,0);
LAB_1409fd658:
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar20,unaff_R14,&UNK_1430343e8);
  }
  uVar20 = param_5 * 0xc;
  pdb_14007ee60();
  pfVar6 = (float *)pub_1406abab0(uVar20,4);
  if (pfVar6 == (float *)0x0) {
    pdb_142dc7e2a(4,uVar20);
  }
  else {
    uStack_110 = param_5;
    uStack_100 = 0;
    puStack_1b0 = param_1;
    uStack_1a8 = param_3;
    uStack_1a0 = param_2;
    pfStack_108 = pfVar6;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(uVar20,4);
    if (pbVar7 != (byte *)0x0) {
      uStack_130 = param_5;
      uStack_120 = 0;
      pfStack_118 = (float *)(param_5 - 1);
      pfVar6 = (float *)0x0;
      pbStack_128 = pbVar7;
      while (uVar20 = uStack_100, pfVar6 < pfStack_118) {
        lVar4 = (longlong)pfVar6 * 0xc;
        fVar22 = *(float *)(param_4 + 8 + lVar4);
        fVar27 = (float)*(undefined8 *)(param_4 + lVar4);
        fVar28 = (float)((ulonglong)*(undefined8 *)(param_4 + lVar4) >> 0x20);
        uVar18 = *(undefined8 *)(param_4 + 0xc + lVar4);
        fVar29 = (float)uVar18;
        fVar30 = (float)((ulonglong)uVar18 >> 0x20);
        fVar24 = *(float *)(param_4 + 0x14 + lVar4);
        fStack_f8 = *(float *)(param_6 + 8 + lVar4);
        uStack_188 = *(float **)(param_6 + lVar4);
        uStack_180 = 0;
        uStack_178 = *(float **)(param_6 + 0xc + lVar4);
        uStack_170 = 0;
        fVar26 = *(float *)(param_6 + 0x14 + lVar4);
        fVar21 = fVar27 - fVar29;
        fVar23 = fVar28 - fVar30;
        fVar25 = fVar22 - fVar24;
        fVar21 = (float)pub_142e329c0(SQRT(fVar25 * fVar25 + fVar23 * fVar23 + fVar21 * fVar21));
        if (fVar21 <= _DAT_142e36f28) {
          fVar21 = _DAT_142e36f28;
        }
        uVar20 = (longlong)(fVar21 - _DAT_142e36f2c) & (longlong)fVar21 >> 0x3f | (longlong)fVar21;
        if (fVar21 < 0.0) {
          uVar20 = 0;
        }
        if (_DAT_142e36f30 < fVar21) {
          uVar20 = 0xffffffffffffffff;
        }
        pfVar6 = (float *)((longlong)pfVar6 + 1);
        for (uVar13 = 0; uVar16 = uStack_100, uVar13 < uVar20; uVar13 = uVar13 + 1) {
          if (uStack_100 == uStack_110) {
            pdb_142db7820(&uStack_110);
          }
          uVar10 = uStack_120;
          fVar21 = (float)uVar13 / (float)uVar20;
          fVar23 = _DAT_142e36f28 - fVar21;
          *(ulonglong *)(pfStack_108 + uVar16 * 3) =
               CONCAT44(fVar30 * fVar21 + fVar28 * fVar23,fVar29 * fVar21 + fVar27 * fVar23);
          pfStack_108[uVar16 * 3 + 2] = fVar24 * fVar21 + fVar22 * fVar23;
          uStack_100 = uVar16 + 1;
          if (uStack_120 == uStack_130) {
            pdb_142d7f010(&uStack_130);
          }
          *(ulonglong *)(pbStack_128 + uVar10 * 0xc) =
               CONCAT44(fVar21 * uStack_178._4_4_ + fVar23 * uStack_188._4_4_,
                        fVar21 * (float)uStack_178 + fVar23 * (float)uStack_188);
          *(float *)(pbStack_128 + uVar10 * 0xc + 8) = fVar21 * fVar26 + fVar23 * fStack_f8;
          uStack_120 = uVar10 + 1;
        }
      }
      if (uStack_100 == uStack_110) {
        pdb_142db7820(&uStack_110);
      }
      uVar13 = uStack_120;
      puVar2 = (undefined8 *)(param_4 + (longlong)pfStack_118 * 0xc);
      pfStack_108[uVar20 * 3 + 2] = *(float *)(puVar2 + 1);
      *(undefined8 *)(pfStack_108 + uVar20 * 3) = *puVar2;
      uStack_100 = uVar20 + 1;
      if (uStack_120 == uStack_130) {
        pdb_142d7f010(&uStack_130);
      }
      unaff_R14 = uStack_100;
      pfVar6 = pfStack_108;
      param_6 = param_6 + param_5 * 0xc;
      *(undefined4 *)(pbStack_128 + uVar13 * 0xc + 8) = *(undefined4 *)(param_6 + -4);
      *(undefined8 *)(pbStack_128 + uVar13 * 0xc) = *(undefined8 *)(param_6 + -0xc);
      uStack_120 = uVar13 + 1;
      uVar13 = uStack_100 - 1;
      if (uStack_100 < 3) {
        fStack_f8 = 0.0;
      }
      else {
        fStack_f8 = (float)CONCAT71((int7)(uVar13 * 3 >> 8),
                                    SQRT((pfStack_108[2] - pfStack_108[uVar13 * 3 + 2]) *
                                         (pfStack_108[2] - pfStack_108[uVar13 * 3 + 2]) +
                                         (pfStack_108[1] - pfStack_108[uVar13 * 3 + 1]) *
                                         (pfStack_108[1] - pfStack_108[uVar13 * 3 + 1]) +
                                         (*pfStack_108 - pfStack_108[uVar13 * 3]) *
                                         (*pfStack_108 - pfStack_108[uVar13 * 3])) < _DAT_143009d64)
        ;
      }
      uVar16 = uStack_100 * 2;
      uVar20 = uStack_100 * 0x18;
      if (uVar16 < 0xaaaaaaaaaaaaaab) {
        pbStack_190 = pbStack_128;
        lStack_198 = uStack_120;
        if (uVar20 == 0) {
          pbVar7 = (byte *)0x4;
          uVar16 = 0;
        }
        else {
          pdb_14007ee60();
          uVar18 = 4;
          pbVar7 = pub_1406abab0(uVar20,4);
          if (pbVar7 == (byte *)0x0) goto LAB_1409fcf3c;
        }
        uStack_188 = pfVar6 + uVar13 * 3;
        uStack_178 = pfVar6 + uVar13 * 3 + 1;
        pfStack_118 = pfVar6 + uVar13 * 3 + 2;
        pfStack_1b8 = pfVar6 + (unaff_R14 - 2) * 3;
        fVar22 = 0.0;
        fVar24 = 0.0;
        uVar14 = 0;
        bVar15 = false;
        fVar26 = 0.0;
        uVar10 = 0;
        uStack_148 = uVar16;
        uStack_140 = pbVar7;
        while ((uStack_138 = uVar14, !bVar15 && (uVar10 <= uVar13))) {
          bVar15 = uVar10 >= uVar13;
          pfVar8 = uStack_188;
          pfVar11 = uStack_178;
          pfVar17 = pfStack_118;
          if (uVar10 == 0) {
            if (fStack_f8._0_1_ == '\0') {
              if (unaff_R14 == 0) {
                uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(0,0,&UNK_1430343b8);
              }
              fVar23 = (float)*(undefined8 *)pfVar6;
              fVar25 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
              fVar21 = pfVar6[2];
              if (uVar13 == 0) goto LAB_1409fd130;
            }
            else {
              if (unaff_R14 < 2) {
                uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(unaff_R14 - 2,unaff_R14,&UNK_1430343d0);
              }
              fVar23 = (float)*(undefined8 *)pfStack_1b8;
              fVar25 = (float)((ulonglong)*(undefined8 *)pfStack_1b8 >> 0x20);
              fVar21 = pfStack_1b8[2];
            }
LAB_1409fd0f0:
            uVar20 = uVar10 + 1;
            if (unaff_R14 <= uVar20) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,unaff_R14,&UNK_143034418);
            }
            pfVar8 = pfVar6 + uVar20 * 3;
            pfVar11 = pfVar6 + uVar20 * 3 + 1;
            pfVar17 = pfVar6 + uVar20 * 3 + 2;
          }
          else {
            uVar20 = uVar10 - 1;
            if (unaff_R14 <= uVar20) goto LAB_1409fd658;
            fVar23 = (float)*(undefined8 *)(pfVar6 + uVar20 * 3);
            fVar25 = (float)((ulonglong)*(undefined8 *)(pfVar6 + uVar20 * 3) >> 0x20);
            fVar21 = pfVar6[uVar20 * 3 + 2];
            if (uVar10 < uVar13) goto LAB_1409fd0f0;
            if (fStack_f8._0_1_ != '\0') {
              pfVar8 = pfVar6 + 3;
              pfVar11 = pfVar6 + 4;
              pfVar17 = pfVar6 + 5;
              if (unaff_R14 < 2) {
                uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(1,1,&UNK_143034400);
              }
            }
          }
LAB_1409fd130:
          fVar21 = *pfVar17 - fVar21;
          fVar23 = *pfVar8 - fVar23;
          fVar25 = *pfVar11 - fVar25;
          fVar27 = _DAT_142e36f28 / SQRT(fVar21 * fVar21 + fVar25 * fVar25 + fVar23 * fVar23);
          if ((int)fVar27 - 1U < 0x7fffff ||
              (int)ABS(fVar27) - 0x800000U < 0x7f000000 && -1 < (int)fVar27) {
            fVar23 = fVar23 * fVar27;
            fVar25 = fVar25 * fVar27;
            fVar21 = fVar21 * fVar27;
            if ((((fVar21 == 0.0) && (!NAN(fVar21))) && (fVar23 == 0.0)) &&
               (((!NAN(fVar23) && (fVar25 == 0.0)) && (!NAN(fVar25))))) goto LAB_1409fd1d4;
          }
          else {
LAB_1409fd1d4:
            fVar21 = fVar26;
            fVar23 = fVar22;
            fVar25 = fVar24;
          }
          fVar24 = fVar25;
          fVar22 = fVar23;
          fVar26 = fVar21;
          if (uVar14 == uStack_148) {
            uStack_f1 = 1;
            pdb_142d7f010(&uStack_148);
          }
          *(ulonglong *)(uStack_140 + uVar14 * 0xc) = CONCAT44(fVar24,fVar22);
          *(float *)(uStack_140 + uVar14 * 0xc + 8) = fVar26;
          uVar20 = uVar14 | 1;
          if (uVar20 == uStack_148) {
            uStack_f1 = 1;
            uStack_138 = uVar20;
            pdb_142d7f010(&uStack_148);
          }
          *(ulonglong *)(uStack_140 + uVar20 * 0xc) = CONCAT44(fVar24,fVar22);
          *(float *)(uStack_140 + uVar20 * 0xc + 8) = fVar26;
          uVar14 = uVar14 + 2;
          uVar10 = uVar10 + (uVar10 < uVar13);
        }
        uStack_f1 = 1;
        plVar9 = (longlong *)pdb_14008d710(0);
        if (plVar9 == (longlong *)0x0) {
          uStack_f1 = 1;
          pdb_142dc7890(&UNK_143326860);
        }
        else {
          uStack_1f0 = (undefined4)*plVar9;
          uStack_1ec = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_1e8 = (undefined4)plVar9[1];
          uStack_1e4 = *(undefined4 *)((longlong)plVar9 + 0xc);
          *plVar9 = *plVar9 + 1;
          uStack_200 = _DAT_143046120;
          uStack_1f8 = _UNK_143046128;
          uStack_210 = _DAT_143046110;
          uStack_20c = _UNK_143046114;
          uStack_208 = _UNK_143046118;
          uStack_204 = _UNK_14304611c;
          uStack_248 = 0;
          pbStack_240 = (byte *)0x4;
          uStack_238 = 0;
          uStack_230 = 0x8000000000000000;
          uStack_1e0 = uStack_1a0;
          uStack_1d8 = uStack_1a8;
          uStack_1d0 = 0;
          pfStack_270 = pfVar6 + unaff_R14 * 3;
          uStack_2d8 = 0;
          uStack_2a8 = 0;
          pfStack_278 = pfVar6;
          uStack_f2 = 1;
          pdb_1415f8d60(auStack_260,&uStack_2d8);
          lVar4 = lStack_198;
          puVar5 = puStack_1b0;
          uStack_f2 = 1;
          pdb_140c93200(&uStack_248,&UNK_143034330,0xf,auStack_260);
          pfStack_270 = (float *)(pbStack_190 + lVar4 * 0xc);
          uStack_2d8 = 0;
          uStack_2a8 = 0;
          pfStack_278 = (float *)pbStack_190;
          uStack_f2 = 1;
          pdb_1415ebed0(auStack_260,&uStack_2d8);
          uStack_f2 = 1;
          pdb_140c93200(&uStack_248,&UNK_14303433f,0xc,auStack_260);
          uStack_2c8 = uStack_138;
          uStack_2d8 = uStack_148;
          uStack_2d0 = (undefined4)uStack_140;
          uStack_2cc = uStack_140._4_4_;
          uStack_f2 = 0;
          pdb_140c93200(&uStack_248,&UNK_1430343a8,0xd,&uStack_2d8);
          uStack_160 = uVar13 * 6;
          uVar20 = uVar13 * 0x18;
          if (uVar20 < 0x7ffffffffffffffd && uStack_160 >> 0x3e == 0) {
            if (uVar20 == 0) {
              pbVar7 = (byte *)0x4;
              uStack_160 = 0;
LAB_1409fd440:
              uStack_150 = 0;
              pbStack_158 = pbVar7;
              if ((int)uVar13 != 0) {
                iVar12 = 0;
                do {
                  if (uStack_160 - uStack_150 < 6) {
                    pdb_142d7f1b0(&uStack_160,uStack_150,6,4,4);
                    pbVar7 = pbStack_158;
                  }
                  iVar1 = iVar12 + 2;
                  *(int *)(pbVar7 + uStack_150 * 4) = iVar12;
                  *(int *)(pbVar7 + uStack_150 * 4 + 4) = iVar12 + 1;
                  *(int *)(pbVar7 + uStack_150 * 4 + 8) = iVar1;
                  *(int *)(pbVar7 + uStack_150 * 4 + 0xc) = iVar12 + 1;
                  *(int *)(pbVar7 + uStack_150 * 4 + 0x10) = iVar12 + 3;
                  *(int *)(pbVar7 + uStack_150 * 4 + 0x14) = iVar1;
                  uStack_150 = uStack_150 + 6;
                  uVar19 = (int)uVar13 - 1;
                  uVar13 = (ulonglong)uVar19;
                  iVar12 = iVar1;
                } while (uVar19 != 0);
              }
              if (uStack_248 != 0) {
                pub_1406abac0(pbStack_240,uStack_248 << 2,4);
              }
              uStack_238 = uStack_150;
              uStack_248 = uStack_160;
              pbStack_240 = pbStack_158;
              puVar5[0xe] = uStack_1d8;
              puVar5[0xf] = CONCAT71(uStack_1cf,uStack_1d0);
              puVar5[0xc] = CONCAT44(uStack_1e4,uStack_1e8);
              puVar5[0xd] = uStack_1e0;
              puVar5[10] = uStack_1f8;
              puVar5[0xb] = CONCAT44(uStack_1ec,uStack_1f0);
              puVar5[8] = CONCAT44(uStack_204,uStack_208);
              puVar5[9] = uStack_200;
              puVar5[6] = uStack_218;
              puVar5[7] = CONCAT44(uStack_20c,uStack_210);
              puVar5[4] = uStack_228;
              puVar5[5] = uStack_220;
              *puVar5 = uStack_160;
              puVar5[1] = (ulonglong)pbStack_158;
              puVar5[2] = uStack_150;
              puVar5[3] = uStack_230;
              if (uStack_130 != 0) {
                pub_1406abac0(pbStack_128,uStack_130 * 0xc,4);
              }
              if (uStack_110 != 0) {
                pub_1406abac0((byte *)pfStack_108,uStack_110 * 0xc,4);
              }
              return puVar5;
            }
            pdb_14007ee60();
            uVar18 = 4;
            pbVar7 = pub_1406abab0(uVar20,4);
            if (pbVar7 != (byte *)0x0) goto LAB_1409fd440;
          }
          else {
            uVar18 = 0;
          }
          uStack_f2 = 0;
          pdb_142dc7e2a(uVar18,uVar20);
        }
      }
      else {
        uVar18 = 0;
LAB_1409fcf3c:
        pdb_142dc7e2a(uVar18,uVar20);
      }
      goto LAB_1409fd71c;
    }
  }
  pdb_142dc7e2a(4,uVar20);
LAB_1409fd71c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

