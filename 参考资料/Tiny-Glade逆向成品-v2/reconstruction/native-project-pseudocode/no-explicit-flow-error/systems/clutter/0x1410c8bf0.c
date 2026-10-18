// VA 0x1410c8bf0, PDB extent 2480 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::intersect_shapes<system_clutter::inter_roof_merlons::detect_inter_roof_merlons::detect_inter_roof_merlons::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::intersect_shapes<system_clutter::inter_roof_merlons::detect_inter_roof_merlons::detect_inter_roof_merlons::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 2480 */

void pdb_1410c8bf0(uint *param_1,uint *param_2,char param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  float *pfStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  
  uVar1 = *param_1;
  if (uVar1 == 1) {
    puVar11 = param_1;
    puVar12 = param_2;
    if ((char)*param_2 != '\0') {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      pdb_140df29e0(&fStack_1f8,param_1);
      fVar9 = fStack_1e4;
      fVar7 = fStack_1e8;
      fVar8 = uStack_1f0._4_4_;
      fVar23 = (float)uStack_1f0;
      fVar22 = fStack_1f4;
      fVar6 = fStack_1f8;
      pdb_140df29e0(&fStack_1f8,param_2);
      pdb_140deead0(auStack_118,0,0,(undefined4)uStack_1d8,uStack_1d8._4_4_);
      fVar13 = fVar8 * fVar6;
      fVar18 = fVar23 * fVar22;
      auVar17._4_4_ = fVar13 - fVar18;
      auVar17._0_4_ = fVar13 - fVar18;
      auVar17._8_4_ = fVar13 - fVar18;
      auVar17._12_4_ = fVar13 - fVar18;
      auVar17 = divps(_DAT_14301bc40,auVar17);
      fVar13 = fVar8 * auVar17._0_4_;
      fVar18 = fVar22 * auVar17._4_4_;
      fVar19 = fVar23 * auVar17._8_4_;
      fVar20 = fVar6 * auVar17._12_4_;
      fStack_108 = fStack_1f4 * fVar19 + fStack_1f8 * fVar13;
      fStack_104 = fStack_1f4 * fVar20 + fStack_1f8 * fVar18;
      fStack_100 = uStack_1f0._4_4_ * fVar19 + (float)uStack_1f0 * fVar13;
      fStack_fc = uStack_1f0._4_4_ * fVar20 + (float)uStack_1f0 * fVar18;
      uStack_f8 = CONCAT44((fVar20 * fStack_1e4 + fVar18 * fStack_1e8) -
                           (fVar9 * fVar20 + fVar7 * fVar18),
                           (fVar19 * fStack_1e4 + fVar13 * fStack_1e8) -
                           (fVar9 * fVar19 + fVar7 * fVar13));
      pdb_140df2c00(&uStack_138,param_2);
      fStack_270 = 0.0;
      fStack_26c = 0.0;
      fStack_268 = 5.60519e-45;
      uStack_264 = 0;
      uStack_260 = uStack_138;
      uStack_258 = uStack_130;
      fStack_250 = fStack_128;
      uStack_24c = uStack_124;
      uStack_248 = uStack_120;
      uStack_244 = uStack_11c;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_278 = &fStack_108;
      pdb_141e3c090(&fStack_270,4,&uStack_238,4);
      uStack_1d8 = uStack_228;
      uStack_1d0 = uStack_220;
      fStack_1e8 = (float)uStack_238;
      fStack_1e4 = (float)((ulonglong)uStack_238 >> 0x20);
      uStack_1e0 = uStack_230;
      fStack_1f8 = 5.60519e-45;
      fStack_1f4 = 0.0;
      uStack_1b0 = 0;
      uStack_1a8 = 4;
      uStack_1a0 = uStack_138;
      uStack_198 = uStack_130;
      fStack_190 = fStack_128;
      uStack_18c = uStack_124;
      uStack_188 = uStack_120;
      uStack_184 = uStack_11c;
      uStack_180 = 0;
      pfStack_1b8 = &fStack_108;
      uStack_1f0 = &fStack_108;
      pdb_141e3c130(&uStack_278,&fStack_1f8);
      fVar18 = _DAT_143007998;
      fVar13 = _DAT_142e36f28;
      if ((int)uStack_278 != 1) {
        return;
      }
      fVar19 = fStack_128;
      pfVar5 = uStack_278;
      do {
        fVar26 = fStack_270;
        uStack_278._4_4_ = (float)((ulonglong)pfVar5 >> 0x20);
        fVar20 = uStack_278._4_4_;
        uStack_238 = CONCAT44(fStack_270,uStack_278._4_4_);
        fVar24 = fStack_26c - uStack_278._4_4_;
        fVar25 = fStack_268 - fStack_270;
        uStack_230 = CONCAT44(fVar25,fVar24);
        uStack_278 = pfVar5;
        fVar14 = (float)pdb_140deea90(auStack_118,&uStack_238);
        fVar15 = fVar19;
        fStack_200 = fVar14;
        fStack_1fc = fVar19;
        cVar10 = pdb_140dee720(&fStack_200);
        if (cVar10 != '\0') {
          if ((0.0 <= fVar14) && (fVar14 <= fVar13)) {
            fVar15 = fVar14 * fVar24 + fVar20;
            fVar14 = fVar14 * fVar25 + fVar26;
            fVar21 = fVar14 * fVar23 + fVar15 * fVar6 + fVar7;
            fVar15 = fVar14 * fVar8 + fVar15 * fVar22 + fVar9;
            if (param_3 != '\0') {
              lVar2 = param_4[2];
              if (lVar2 == *param_4) {
                pdb_142d7f010(param_4);
              }
              lVar3 = param_4[1];
              *(undefined4 *)(lVar3 + lVar2 * 0xc) = 1;
              *(ulonglong *)(lVar3 + 4 + lVar2 * 0xc) = CONCAT44(fVar15,fVar21);
              param_4[2] = lVar2 + 1;
            }
            fVar14 = (float)pdb_140df2570(param_1,fVar21,fVar15);
            fVar15 = (float)pdb_140df2570(param_2,fVar21,fVar15);
            fVar21 = (float)pdb_140df17e0(param_1);
            fVar16 = (float)pdb_140df17e0(param_2);
            fVar15 = fVar15 * fVar14 + fVar16 * fVar21;
            if (fVar15 < fVar18) {
              pdb_140df3e10(param_1,0);
              pdb_140df3e10(param_1,1);
              pdb_140df3e10(param_1,2);
              pdb_140df3e10(param_1,3);
              pdb_140df3e10(param_2,0);
              pdb_140df3e10(param_2,1);
              pdb_140df3e10(param_2,2);
              pdb_140df3e10(param_2,3);
            }
          }
          if ((0.0 <= fVar19) && (fVar19 <= fVar13)) {
            fVar20 = fVar20 + fVar24 * fVar19;
            fVar26 = fVar26 + fVar25 * fVar19;
            fVar19 = fVar26 * fVar23 + fVar20 * fVar6 + fVar7;
            fVar20 = fVar26 * fVar8 + fVar20 * fVar22 + fVar9;
            if (param_3 != '\0') {
              lVar2 = param_4[2];
              if (lVar2 == *param_4) {
                pdb_142d7f010(param_4);
              }
              lVar3 = param_4[1];
              *(undefined4 *)(lVar3 + lVar2 * 0xc) = 0;
              *(ulonglong *)(lVar3 + 4 + lVar2 * 0xc) = CONCAT44(fVar20,fVar19);
              param_4[2] = lVar2 + 1;
            }
            fVar26 = (float)pdb_140df2570(param_1,fVar19,fVar20);
            fVar19 = (float)pdb_140df2570(param_2,fVar19,fVar20);
            fVar20 = (float)pdb_140df17e0(param_1);
            fVar15 = (float)pdb_140df17e0(param_2);
            fVar15 = fVar19 * fVar26 + fVar15 * fVar20;
            if (fVar15 < fVar18) {
              pdb_140df3e10(param_1,0);
              pdb_140df3e10(param_1,1);
              pdb_140df3e10(param_1,2);
              pdb_140df3e10(param_1,3);
              pdb_140df3e10(param_2,0);
              pdb_140df3e10(param_2,1);
              pdb_140df3e10(param_2,2);
              pdb_140df3e10(param_2,3);
            }
          }
        }
        pdb_141e3c130(&uStack_278,&fStack_1f8);
        fVar19 = fVar15;
        pfVar5 = uStack_278;
      } while ((char)uStack_278 != '\0');
      return;
    }
  }
  else {
    puVar11 = param_2;
    puVar12 = param_1;
    if ((char)*param_2 == '\0') {
      uStack_238 = *(undefined8 *)(param_1 + 1);
      uStack_230 = (ulonglong)param_1[3];
      fStack_270 = (float)param_2[3];
      uStack_278._0_4_ = (int)*(undefined8 *)(param_2 + 1);
      uStack_278._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
      fStack_26c = 0.0;
      pdb_140def750(&fStack_1f8,&uStack_238,&uStack_278);
      if (fStack_1f8 != 1.4013e-45) {
        return;
      }
      if (param_3 == '\0') {
        return;
      }
      lVar2 = param_4[2];
      if (lVar2 == *param_4) {
        pdb_142d7f010(param_4);
      }
      lVar3 = param_4[1];
      *(undefined4 *)(lVar3 + lVar2 * 0xc) = 0;
      *(ulonglong *)(lVar3 + 4 + lVar2 * 0xc) = CONCAT44((float)uStack_1f0,fStack_1f4);
      lVar3 = lVar2 + 1;
      param_4[2] = lVar3;
      if (lVar3 == *param_4) {
        pdb_142d7f010(param_4);
      }
      lVar4 = param_4[1];
      *(undefined4 *)(lVar4 + lVar3 * 0xc) = 1;
      *(ulonglong *)(lVar4 + 4 + lVar3 * 0xc) = CONCAT44(fStack_1e8,uStack_1f0._4_4_);
      param_4[2] = lVar2 + 2;
      return;
    }
  }
  puVar11 = puVar11 + 1;
  pdb_140df0010(auStack_158,puVar11);
  uStack_168 = 0;
  uStack_160 = 4;
  uStack_218 = uStack_148;
  uStack_214 = uStack_144;
  uStack_210 = uStack_140;
  uStack_20c = uStack_13c;
  uStack_238 = 0;
  uStack_230 = 4;
  uStack_278._0_4_ = 0;
  uStack_278._4_4_ = 0.0;
  fStack_270 = 0.0;
  fStack_26c = 0.0;
  pdb_141e3c090(&uStack_238,4,&uStack_278,4);
  uStack_1d0 = uStack_258;
  uStack_1d8 = uStack_260;
  uStack_1f0._0_4_ = (float)(int)uStack_278;
  uStack_1f0._4_4_ = uStack_278._4_4_;
  fStack_1e8 = fStack_270;
  fStack_1e4 = fStack_26c;
  fStack_1f8 = 5.60519e-45;
  fStack_1f4 = 0.0;
  uStack_1c0 = uStack_168;
  pfStack_1b8 = (float *)uStack_160;
  fStack_190 = 0.0;
  pdb_141e3c2c0(&uStack_278,&fStack_1f8);
  fVar13 = _DAT_142e36f28;
  if ((int)uStack_278 == 1) {
    do {
      fVar6 = fStack_270;
      fVar18 = uStack_278._4_4_;
      fVar22 = fStack_26c - uStack_278._4_4_;
      fVar23 = fStack_268 - fStack_270;
      pdb_140def380(&uStack_238,puVar12 + 1,uStack_278._4_4_,fStack_270,fVar22,fVar23);
      if ((char)uStack_238 != '\0') {
        fVar8 = (float)uStack_230;
        if (((param_3 != '\0') && (fVar7 = uStack_238._4_4_, 0.0 <= uStack_238._4_4_)) &&
           (uStack_238._4_4_ <= fVar13)) {
          lVar2 = param_4[2];
          if (lVar2 == *param_4) {
            pdb_142d7f010(param_4);
          }
          lVar3 = param_4[1];
          *(uint *)(lVar3 + lVar2 * 0xc) = uVar1 ^ 1;
          *(ulonglong *)(lVar3 + 4 + lVar2 * 0xc) =
               CONCAT44(fVar7 * fVar23 + fVar6,fVar7 * fVar22 + fVar18);
          param_4[2] = lVar2 + 1;
        }
        if ((0.0 <= fVar8) && (fVar8 <= fVar13)) {
          if (param_3 != '\0') {
            lVar2 = param_4[2];
            if (lVar2 == *param_4) {
              pdb_142d7f010(param_4);
            }
            lVar3 = param_4[1];
            *(uint *)(lVar3 + lVar2 * 0xc) = uVar1;
            *(ulonglong *)(lVar3 + 4 + lVar2 * 0xc) =
                 CONCAT44(fVar6 + fVar23 * fVar8,fVar18 + fVar22 * fVar8);
            param_4[2] = lVar2 + 1;
          }
          pdb_140df3e10(puVar11,0);
          pdb_140df3e10(puVar11,1);
          pdb_140df3e10(puVar11,2);
          pdb_140df3e10(puVar11,3);
        }
      }
      pdb_141e3c2c0(&uStack_278,&fStack_1f8);
    } while ((char)uStack_278 != '\0');
  }
  return;
}

