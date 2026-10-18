// VA 0x140a0bce0, PDB extent 3086 bytes
// country_core::resources::walls::wall_path_segment::WallPathSegment::append_pick_ribbon_triangles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_path_segment::WallPathSegment::append_pick_ribbon_triangles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_path_segment.rs
   Extent: 3086 */

void pdb_140a0bce0(longlong param_1,longlong *param_2,float *param_3)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  float fVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  float *unaff_R12;
  float *pfVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *pfStack_250;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  ulonglong uStack_208;
  ulonglong uStack_200;
  float *pfStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  ulonglong uStack_1d8;
  longlong *plStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  float afStack_190 [2];
  ulonglong uStack_188;
  float fStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  longlong lStack_150;
  ulonglong uStack_148;
  float *pfStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float afStack_f0 [44];
  
  uVar9 = _DAT_142e37820;
  fVar8 = _DAT_142e36f28;
  uStack_200 = *(ulonglong *)(param_1 + 0x28);
  if (1 < uStack_200) {
    uStack_100 = 0;
    uStack_f8 = 2;
    afStack_f0[0] = -0.4;
    afStack_f0[1] = 0.4;
    pfStack_1f8 = *(float **)(param_1 + 8);
    uStack_208 = *(ulonglong *)(param_1 + 0x10);
    lVar22 = *(longlong *)(param_1 + 0x20);
    uStack_1f0 = uStack_200 - 1;
    uStack_1d8 = uStack_208;
    if (uStack_200 < uStack_208) {
      uStack_1d8 = uStack_200;
    }
    lStack_150 = lVar22 + 0xc;
    uStack_148 = 0;
    lVar12 = 0;
    pfStack_250 = unaff_R12;
    fVar27 = _DAT_142e37988;
    plStack_1d0 = param_2;
    lStack_1c8 = lVar22;
    do {
      if (uStack_208 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143036380);
      }
      fVar36 = afStack_f0[lVar12];
      auStack_118 = ZEXT416((uint)fVar36);
      bVar18 = true;
      lVar24 = 1;
      uVar19 = 2;
      lStack_1b8 = lStack_150;
      lVar12 = 0;
      uVar16 = 0;
      lStack_1b0 = lVar22;
      do {
        uVar13 = uStack_1f0;
        uVar17 = uStack_200;
        uVar20 = uVar16 + 1;
        pfVar21 = (float *)(lVar22 + uVar16 * 0xc);
        pfVar23 = pfStack_250;
        pfVar14 = pfStack_1f8 + uVar16;
        if (bVar18) {
          if (uStack_1d8 <= uVar20) break;
          pfVar14 = pfStack_1f8 + uVar20;
          lVar15 = uVar20 * 0xc;
          param_3 = pfVar21;
          uVar20 = uVar16 + 2;
          pfVar21 = (float *)(lVar22 + lVar15);
          pfVar23 = pfStack_1f8 + uVar16;
        }
        pfStack_250 = pfVar14;
        if (uStack_200 <= (uVar19 - (lVar12 != 0)) - 2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((uVar19 - (lVar12 != 0)) + -2,uStack_200,&UNK_1430363c8);
        }
        lVar15 = (ulonglong)(lVar12 != 0) * -0xc;
        uVar4 = *(undefined8 *)param_3;
        uVar16 = uVar19 - 1;
        if (uStack_1f0 < uVar19 - 1) {
          uVar16 = uStack_1f0;
        }
        fVar34 = param_3[2];
        fVar25 = *(float *)(lVar22 + uVar16 * 0xc) - *(float *)(lStack_1b0 + lVar15);
        fVar28 = *(float *)(lVar22 + 8 + uVar16 * 0xc) - *(float *)(lStack_1b0 + 8 + lVar15);
        fVar29 = fVar8 / SQRT(fVar25 * fVar25 + fVar28 * fVar28);
        uVar11 = (uint)((int)fVar29 - 1U < 0x7fffff ||
                       (int)ABS(fVar29) - 0x800000U < 0x7f000000 && -1 < (int)fVar29);
        uStack_1a8 = CONCAT44((int)(uVar11 << 0x1f) >> 0x1f,(int)(uVar11 << 0x1f) >> 0x1f) &
                     CONCAT44(fVar25 * fVar29,(float)((uint)fVar28 ^ uVar9) * fVar29);
        lStack_1c0 = lVar24;
        pfStack_140 = pfVar23;
        uStack_138 = uVar20;
        lStack_130 = lVar12;
        pdb_140df4520(&fStack_240,&uStack_1a8);
        lVar15 = lStack_1b8;
        fVar29 = fStack_238;
        fVar28 = fStack_23c;
        fVar25 = fStack_240;
        if (uVar17 <= lVar24 - (ulonglong)(lVar24 != 0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(lStack_1c0 + -1 + (ulonglong)(lStack_1c0 == 0),uStack_200,&UNK_1430363c8);
        }
        lVar12 = (ulonglong)(lVar24 != 0) * -0xc;
        fVar35 = *pfVar21;
        uVar5 = *(undefined8 *)(pfVar21 + 1);
        uVar16 = uVar19;
        if (uVar13 < uVar19) {
          uVar16 = uVar13;
        }
        fVar26 = *(float *)(lVar22 + uVar16 * 0xc) - *(float *)(lStack_1b8 + lVar12);
        fVar30 = *(float *)(lVar22 + 8 + uVar16 * 0xc) - *(float *)(lStack_1b8 + 8 + lVar12);
        fVar31 = fVar8 / SQRT(fVar26 * fVar26 + fVar30 * fVar30);
        uVar11 = (uint)((int)fVar31 - 1U < 0x7fffff ||
                       (int)ABS(fVar31) - 0x800000U < 0x7f000000 && -1 < (int)fVar31);
        uStack_1a8 = CONCAT44((int)(uVar11 << 0x1f) >> 0x1f,(int)(uVar11 << 0x1f) >> 0x1f) &
                     CONCAT44(fVar26 * fVar31,(float)((uint)fVar30 ^ uVar9) * fVar31);
        pdb_140df4520(&fStack_240,&uStack_1a8);
        plVar10 = plStack_1d0;
        fVar26 = fStack_23c;
        fVar30 = fVar25 * fVar36 + (float)uVar4;
        fVar31 = fVar28 * fVar36 + (float)((ulonglong)uVar4 >> 0x20);
        fVar34 = fVar29 * fVar36 + fVar34;
        fVar35 = fStack_240 * fVar36 + fVar35;
        fStack_240 = SUB84(plStack_1d0,0);
        fStack_23c = (float)((ulonglong)plStack_1d0 >> 0x20);
        fStack_234 = *pfStack_140 + _DAT_14300ccb0;
        fStack_230 = fStack_234 * 0.0;
        fStack_21c = *pfStack_140 + _DAT_143009bd0;
        fVar29 = *pfStack_250 + _UNK_143009bd4;
        fStack_228 = *pfStack_250 + _DAT_14300ccb0;
        fStack_220 = fStack_21c * 0.0;
        fVar25 = (float)auStack_118._0_4_ * fVar26 + (float)uVar5;
        fVar28 = (float)auStack_118._0_4_ * fStack_238 + (float)((ulonglong)uVar5 >> 0x20);
        fStack_218 = fStack_220 + fVar34 * _DAT_143035eb0;
        fStack_214 = fVar29 * 0.0 + fVar35 * _UNK_143035eb4;
        fStack_210 = fVar25 + fVar29 * _UNK_143035eb8;
        fStack_20c = fVar28 + fVar29 * _UNK_143035ebc;
        fStack_224 = fStack_228 * 0.0;
        fStack_238 = fStack_230 + fVar30;
        fStack_234 = fStack_234 + fVar31;
        fStack_230 = fStack_230 + fVar34;
        fStack_22c = fStack_224 + fVar35;
        fStack_228 = fStack_228 + fVar25;
        fStack_224 = fStack_224 + fVar28;
        fStack_220 = fStack_220 + fVar30;
        fStack_21c = fStack_21c + fVar31;
        uStack_1e8 = CONCAT44(fStack_228,fStack_22c);
        uStack_178 = CONCAT44(fStack_21c,fStack_220);
        fStack_1e0 = fStack_224;
        fStack_170 = fStack_218;
        pdb_141473710(&uStack_1a8,&fStack_238,&uStack_1e8,&uStack_178);
        lVar22 = plVar10[2];
        if (lVar22 == *plVar10) {
          pdb_142d91b00(plVar10);
        }
        lVar12 = plVar10[1];
        *(undefined4 *)(lVar12 + 0x20 + lVar22 * 0x24) = (undefined4)uStack_188;
        puVar2 = (ulonglong *)(lVar12 + 0x10 + lVar22 * 0x24);
        *puVar2 = uStack_198;
        puVar2[1] = CONCAT44(afStack_190[1],afStack_190[0]);
        puVar1 = (undefined4 *)(lVar12 + lVar22 * 0x24);
        *puVar1 = (undefined4)uStack_1a8;
        puVar1[1] = uStack_1a8._4_4_;
        puVar1[2] = (undefined4)uStack_1a0;
        puVar1[3] = uStack_1a0._4_4_;
        plVar10[2] = lVar22 + 1;
        pdb_141473710(&uStack_1a8,&fStack_22c,&fStack_214,&fStack_220);
        lVar12 = lStack_130;
        lVar22 = plVar10[2];
        if (lVar22 == *plVar10) {
          pdb_142d91b00(plVar10);
        }
        lVar24 = plVar10[1];
        *(undefined4 *)(lVar24 + 0x20 + lVar22 * 0x24) = (undefined4)uStack_188;
        puVar2 = (ulonglong *)(lVar24 + 0x10 + lVar22 * 0x24);
        *puVar2 = uStack_198;
        puVar2[1] = CONCAT44(afStack_190[1],afStack_190[0]);
        puVar1 = (undefined4 *)(lVar24 + lVar22 * 0x24);
        *puVar1 = (undefined4)uStack_1a8;
        puVar1[1] = uStack_1a8._4_4_;
        puVar1[2] = (undefined4)uStack_1a0;
        puVar1[3] = uStack_1a0._4_4_;
        plVar10[2] = lVar22 + 1;
        lVar24 = lStack_1c0 + 1;
        uVar19 = uVar19 + 1;
        lStack_1b8 = lVar15 + 0xc;
        lStack_1b0 = lStack_1b0 + 0xc;
        lVar12 = lVar12 + 1;
        bVar18 = false;
        uVar16 = uStack_138;
        param_3 = pfVar21;
        lVar22 = lStack_1c8;
      } while (uStack_138 < uStack_1d8);
      uVar16 = uStack_200;
      if (uStack_208 <= uStack_1f0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uStack_1f0,uStack_208,&UNK_143036398);
      }
      uStack_1a0 = 2;
      uStack_198 = 0;
      afStack_190[0] = *pfStack_1f8;
      uStack_188 = uStack_1f0;
      fStack_180 = pfStack_1f8[uStack_200 - 1];
      lVar12 = 0;
      uVar19 = uStack_1f0;
      bVar18 = false;
      do {
        fVar36 = afStack_190[lVar12 * 4];
        if (fVar27 < fVar36) {
          uVar20 = (&uStack_198)[lVar12 * 2];
          uVar17 = (uVar20 - 1) + (ulonglong)(uVar20 == 0);
          if (uVar16 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar17,uVar16,&UNK_1430363c8);
          }
          uVar13 = uVar20 + 1;
          if (uVar19 < uVar20 + 1) {
            uVar13 = uVar19;
          }
          fVar27 = *(float *)(lVar22 + uVar13 * 0xc) - *(float *)(lVar22 + uVar17 * 0xc);
          fVar34 = *(float *)(lVar22 + 8 + uVar13 * 0xc) - *(float *)(lVar22 + 8 + uVar17 * 0xc);
          fVar25 = fVar8 / SQRT(fVar27 * fVar27 + fVar34 * fVar34);
          uVar11 = (uint)((int)fVar25 - 1U < 0x7fffff ||
                         (int)ABS(fVar25) - 0x800000U < 0x7f000000 && -1 < (int)fVar25);
          uStack_178 = CONCAT44((int)(uVar11 << 0x1f) >> 0x1f,(int)(uVar11 << 0x1f) >> 0x1f) &
                       CONCAT44(fVar27 * fVar25,(float)((uint)fVar34 ^ uVar9) * fVar25);
          pdb_140df4520(&fStack_240,&uStack_178);
          fVar25 = fStack_238;
          fVar34 = fStack_23c;
          fVar27 = fStack_240;
          if (uVar16 <= uVar20) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar20,uVar16,&UNK_1430363b0);
          }
          pfVar14 = (float *)(uVar17 * 0xc + lVar22);
          pfVar21 = (float *)(lVar22 + uVar13 * 0xc);
          fVar26 = fStack_238 * 0.0;
          fVar33 = fStack_240 * _DAT_142e377f0;
          fVar28 = *(float *)(lVar22 + uVar20 * 0xc);
          fVar29 = *(float *)(lVar22 + 4 + uVar20 * 0xc);
          fVar35 = *(float *)(lVar22 + 8 + uVar20 * 0xc);
          fVar30 = *pfVar21 - *pfVar14;
          fVar31 = pfVar21[2] - pfVar14[2];
          fVar32 = fVar8 / SQRT(fVar30 * fVar30 + fVar31 * fVar31);
          uVar11 = (uint)((int)fVar32 - 1U < 0x7fffff ||
                         (int)ABS(fVar32) - 0x800000U < 0x7f000000 && -1 < (int)fVar32);
          uStack_178 = CONCAT44((int)(uVar11 << 0x1f) >> 0x1f,(int)(uVar11 << 0x1f) >> 0x1f) &
                       CONCAT44(fVar30 * fVar32,(float)((uint)fVar31 ^ uVar9) * fVar32);
          pdb_140df4520(&fStack_240,&uStack_178);
          plVar10 = plStack_1d0;
          fVar29 = fStack_23c * (float)auStack_118._0_4_ + fVar29;
          fVar25 = fVar25 * _UNK_142f61044 + fVar34 * 0.0;
          fVar28 = fStack_240 * (float)auStack_118._0_4_ + fVar28;
          fStack_224 = (fVar34 * _DAT_142f61040 + fVar27 * _DAT_142e36f28) * _UNK_143035ec8;
          fVar36 = fVar36 + _DAT_14300ccb0;
          fVar27 = (fVar33 + fVar26) * _DAT_143035ed0;
          fStack_20c = fVar36 * 0.0;
          fStack_21c = fVar29 - fVar27;
          fVar29 = fVar29 + fVar27;
          fVar35 = fVar35 + (float)auStack_118._0_4_ * fStack_238;
          fStack_238 = fVar28 - fVar25 * _DAT_143035ec0;
          fStack_230 = fVar35 - fStack_224;
          fStack_234 = fStack_21c + fVar8 * _UNK_143035ec4;
          fStack_22c = fVar28 + fVar25 * _UNK_143035ecc;
          fStack_240 = SUB84(plStack_1d0,0);
          fStack_23c = (float)((ulonglong)plStack_1d0 >> 0x20);
          fStack_228 = fVar29 + _DAT_142f60fec;
          fStack_224 = fVar35 + fStack_224;
          fStack_220 = fStack_20c + fStack_238;
          fStack_21c = fVar36 + fStack_21c;
          fStack_218 = fStack_230 + fStack_20c;
          fStack_214 = fStack_22c + fStack_20c;
          fStack_210 = fVar29 + fVar36;
          fStack_20c = fStack_224 + fStack_20c;
          uStack_128 = CONCAT44(fStack_228,fStack_22c);
          uStack_1e8 = CONCAT44(fStack_21c,fStack_220);
          fStack_1e0 = fStack_218;
          fStack_120 = fStack_224;
          pdb_141473710(&uStack_178,&fStack_238,&uStack_128,&uStack_1e8);
          lVar22 = plVar10[2];
          if (lVar22 == *plVar10) {
            pdb_142d91b00(plVar10);
          }
          lVar12 = plVar10[1];
          *(undefined4 *)(lVar12 + 0x20 + lVar22 * 0x24) = uStack_158;
          puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar22 * 0x24);
          *puVar3 = uStack_168;
          puVar3[1] = uStack_160;
          puVar1 = (undefined4 *)(lVar12 + lVar22 * 0x24);
          *puVar1 = (undefined4)uStack_178;
          puVar1[1] = uStack_178._4_4_;
          puVar1[2] = fStack_170;
          puVar1[3] = uStack_16c;
          plVar10[2] = lVar22 + 1;
          pdb_141473710(&uStack_178,&fStack_22c,&fStack_214,&fStack_220);
          lVar22 = plVar10[2];
          if (lVar22 == *plVar10) {
            pdb_142d91b00(plVar10);
          }
          lVar12 = plVar10[1];
          *(undefined4 *)(lVar12 + 0x20 + lVar22 * 0x24) = uStack_158;
          auVar6._8_8_ = uStack_160;
          auVar6._0_8_ = uStack_168;
          *(undefined1 (*) [16])(lVar12 + 0x10 + lVar22 * 0x24) = auVar6;
          puVar1 = (undefined4 *)(lVar12 + lVar22 * 0x24);
          *puVar1 = (undefined4)uStack_178;
          puVar1[1] = uStack_178._4_4_;
          puVar1[2] = fStack_170;
          puVar1[3] = uStack_16c;
          plVar10[2] = lVar22 + 1;
          uVar19 = uStack_1f0;
          lVar22 = lStack_1c8;
          fVar27 = _DAT_142e37988;
        }
        lVar12 = 1;
        bVar7 = !bVar18;
        bVar18 = true;
      } while (bVar7);
      uVar16 = uStack_148 & 1;
      uStack_148 = CONCAT71((int7)((ulonglong)&uStack_198 >> 8),1);
    } while (uVar16 == 0);
  }
  return;
}

