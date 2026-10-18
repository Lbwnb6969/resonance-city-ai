// VA 0x1410c7970, PDB extent 4726 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::intersect_shapes<system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners::closure_env$4>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::intersect_shapes<system_clutter::inter_shape_stitches::detect_intra_shape_corners::detect_intra_shape_corners::closure_env$4>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 4726 */

void pdb_1410c7970(uint *param_1,uint *param_2,undefined8 param_3,char param_4,longlong *param_5)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char cVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  float extraout_XMM0_Dc;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar26;
  float fVar27;
  float fVar33;
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined1 auVar41 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined8 uStack_260;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 uStack_220;
  ulonglong uStack_218;
  undefined8 uStack_210;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float *pfStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float afStack_188 [8];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  
  uVar2 = *param_1;
  uStack_280 = param_3;
  if (uVar2 == 1) {
    puVar12 = param_2;
    puVar13 = param_1;
    if ((char)*param_2 != '\0') {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      pdb_140df29e0(&fStack_228,param_1);
      uVar10 = uStack_218;
      fVar25 = uStack_220._4_4_;
      fVar23 = (float)uStack_220;
      fVar16 = fStack_224;
      fVar15 = fStack_228;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uStack_218;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uStack_208;
      uVar42 = (undefined4)(uStack_208 >> 0x20);
      pdb_140df29e0(&fStack_228,param_2);
      fVar44 = (float)(uStack_218 >> 0x20);
      auStack_168 = auVar41;
      pdb_140deead0(auStack_118);
      fVar14 = fVar25 * fVar15;
      fVar21 = fVar23 * fVar16;
      auVar28._0_4_ = fVar14 - fVar21;
      auVar28._4_4_ = fVar14 - fVar21;
      auVar28._8_4_ = fVar14 - fVar21;
      auVar28._12_4_ = fVar14 - fVar21;
      auVar20 = divps(_DAT_14301bc40,auVar28);
      fVar14 = fVar25 * auVar20._0_4_;
      fVar21 = fVar16 * auVar20._4_4_;
      fVar33 = fVar23 * auVar20._8_4_;
      fVar34 = fVar15 * auVar20._12_4_;
      fVar49 = (float)uVar10;
      fVar50 = (float)(uVar10 >> 0x20);
      fStack_108 = fStack_224 * fVar33 + fStack_228 * fVar14;
      fStack_104 = fStack_224 * fVar34 + fStack_228 * fVar21;
      fStack_100 = uStack_220._4_4_ * fVar33 + (float)uStack_220 * fVar14;
      fStack_fc = uStack_220._4_4_ * fVar34 + (float)uStack_220 * fVar21;
      fVar33 = (fVar33 * fVar44 + fVar14 * (float)uStack_218) - (fVar50 * fVar33 + fVar49 * fVar14);
      uStack_f8 = CONCAT44((fVar34 * fVar44 + fVar21 * (float)uStack_218) -
                           (fVar50 * fVar34 + fVar49 * fVar21),fVar33);
      _auStack_158 = auVar39;
      pdb_140df2c00(&uStack_148,param_2,fVar33,fStack_228 * fVar14,uVar42);
      fStack_2b0 = 0.0;
      fStack_2ac = 0.0;
      fStack_2a8 = 5.60519e-45;
      fStack_2a4 = 0.0;
      uStack_2a0 = uStack_148;
      uStack_298 = uStack_140;
      uStack_290 = uStack_138;
      uStack_288 = uStack_130;
      fStack_278 = 0.0;
      fStack_274 = 0.0;
      fStack_270 = 0.0;
      fStack_26c = 0.0;
      uStack_2b8 = &fStack_108;
      pdb_141e3c090(&fStack_2b0,4,&fStack_278,4);
      uStack_218 = CONCAT44(fStack_274,fStack_278);
      uStack_210 = CONCAT44(fStack_26c,fStack_270);
      uStack_200 = uStack_260;
      fStack_228 = 5.60519e-45;
      fStack_224 = 0.0;
      uStack_1e0 = 0;
      uStack_1d8 = 4;
      auVar20._8_8_ = uStack_130;
      auVar20._0_8_ = uStack_138;
      uStack_1d0 = uStack_148;
      uStack_1c8 = uStack_140;
      uStack_1b0 = 0;
      pfStack_1e8 = &fStack_108;
      uStack_220 = &fStack_108;
      pdb_141e3c130(&fStack_278,&fStack_228);
      if (fStack_278 != 1.4013e-45) {
        return;
      }
      fStack_248 = fVar15;
      fStack_244 = fVar16;
      fStack_240 = fVar23;
      fStack_23c = fVar25;
      do {
        fVar21 = fStack_270;
        fVar14 = fStack_274;
        uStack_128 = CONCAT44(fStack_270,fStack_274);
        fVar49 = fStack_26c - fStack_274;
        fVar50 = fStack_268 - fStack_270;
        uStack_120 = CONCAT44(fVar50,fVar49);
        fVar33 = (float)pdb_140deea90(auStack_118,&uStack_128);
        fVar34 = auVar20._0_4_;
        fVar44 = auVar20._8_4_;
        fStack_230 = fVar33;
        fStack_22c = fVar34;
        cVar11 = pdb_140dee720(&fStack_230);
        if (cVar11 != '\0') {
          fVar22 = fVar50 * fVar23;
          fVar24 = fVar50 * fVar25;
          auVar20._0_4_ = fVar22 + fVar49 * fVar15;
          auVar20._4_4_ = fVar24 + fVar49 * fVar16;
          auVar20._8_4_ = fVar22 + fVar22;
          auVar20._12_4_ = fVar24 + fVar24;
          fVar22 = _DAT_142e36f28 /
                   SQRT(auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_);
          fVar24 = fVar22 * auVar20._0_4_;
          fVar22 = fVar22 * auVar20._4_4_;
          if ((0.0 <= fVar33) && (fVar33 <= _DAT_142e36f28)) {
            auVar40._0_4_ = fVar33 * fVar49 + fVar14;
            auVar40._4_4_ = fVar33 * fVar50 + fVar21;
            auVar40._8_4_ = extraout_XMM0_Dc * 0.0 + 0.0;
            auVar40._12_4_ = extraout_XMM0_Dc * 0.0 + 0.0;
            fVar23 = auVar40._4_4_ * fVar23;
            fVar25 = auVar40._4_4_ * fVar25;
            fVar33 = fVar23 + auVar40._0_4_ * fVar15 + (float)auStack_158._0_4_;
            fVar36 = fVar25 + auVar40._0_4_ * fVar16 + (float)auStack_158._4_4_;
            fVar37 = fVar23 + fVar23 + fStack_150;
            fVar38 = fVar25 + fVar25 + fStack_14c;
            if (param_4 != '\0') {
              lVar3 = param_5[2];
              if (lVar3 == *param_5) {
                pdb_142d7f010(param_5);
              }
              lVar4 = param_5[1];
              *(undefined4 *)(lVar4 + lVar3 * 0xc) = 1;
              *(ulonglong *)(lVar4 + 4 + lVar3 * 0xc) = CONCAT44(fVar36,fVar33);
              param_5[2] = lVar3 + 1;
            }
            auVar20 = divps(auVar40,auStack_168);
            fVar15 = auVar20._0_4_;
            fVar16 = auVar20._4_4_;
            if ((float)((uint)fVar15 & _DAT_142e377e0) <= (float)((uint)fVar16 & _UNK_142e377e4)) {
              fVar46 = (float)(~-(uint)NAN(fVar16) &
                               ((uint)fVar16 & _DAT_142e37820 | _DAT_142e3c640) |
                              -(uint)NAN(fVar16) & _DAT_143009de0);
              fVar48 = _UNK_14300c764;
            }
            else {
              fVar46 = 0.0;
              fVar48 = (float)(~-(uint)NAN(fVar15) &
                               (((uint)fVar15 ^ _DAT_142e37820) & _DAT_142e37820 | _DAT_142e3c640) |
                              -(uint)NAN(fVar15) & _DAT_14300a424);
            }
            uVar18 = pdb_140df2570(param_1);
            uVar19 = pdb_140df2570(param_2);
            auVar29._8_4_ = (int)extraout_XMM0_Qb;
            auVar29._0_8_ = uVar18;
            auVar29._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
            fVar15 = (float)pdb_140df17e0(param_1);
            auVar30._8_4_ = (int)extraout_XMM0_Qb_00;
            auVar30._0_8_ = uVar19;
            auVar30._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
            fVar16 = (float)pdb_140df17e0(param_2);
            auVar20._4_12_ = auVar30._4_12_;
            auVar20._0_4_ = auVar30._0_4_ * auVar29._0_4_ + fVar16 * fVar15;
            fVar15 = fStack_248;
            fVar16 = fStack_244;
            fVar23 = fStack_240;
            fVar25 = fStack_23c;
            if (auVar20._0_4_ < _DAT_143007998) {
              fVar45 = fVar46 * fStack_248;
              fVar46 = fVar46 * fStack_244;
              fVar47 = fVar48 * fStack_240;
              fVar48 = fVar48 * fStack_23c;
              fVar15 = (float)pdb_140df3e10(param_1,0);
              fVar23 = fVar36 - auVar20._0_4_;
              fVar16 = (fVar33 - fVar15) * (fVar33 - fVar15);
              fVar15 = SQRT(fVar23 * fVar23 + fVar16);
              if (_DAT_142e3a74c <= fVar15) {
                fVar15 = _DAT_142e3a74c;
              }
              fVar23 = (float)pdb_140df3e10(param_1,1);
              fVar23 = (fVar33 - fVar23) * (fVar33 - fVar23);
              fVar16 = SQRT((fVar36 - fVar16) * (fVar36 - fVar16) + fVar23);
              if (fVar15 <= fVar16) {
                fVar16 = fVar15;
              }
              fVar15 = (float)pdb_140df3e10(param_1,2);
              fVar25 = (fVar33 - fVar15) * (fVar33 - fVar15);
              fVar15 = SQRT((fVar36 - fVar23) * (fVar36 - fVar23) + fVar25);
              if (fVar16 <= fVar15) {
                fVar15 = fVar16;
              }
              fVar16 = (float)pdb_140df3e10(param_1,3);
              fVar26 = (fVar33 - fVar16) * (fVar33 - fVar16);
              fVar43 = SQRT((fVar36 - fVar25) * (fVar36 - fVar25) + fVar26);
              if (fVar15 <= fVar43) {
                fVar43 = fVar15;
              }
              fVar17 = (float)pdb_140df3e10(param_2,0);
              fVar25 = fStack_23c;
              fVar23 = fStack_240;
              fVar16 = fStack_244;
              fVar15 = fStack_248;
              fVar17 = (fVar33 - fVar17) * (fVar33 - fVar17);
              fVar26 = SQRT((fVar36 - fVar26) * (fVar36 - fVar26) + fVar17);
              if (fVar43 <= fVar26) {
                fVar26 = fVar43;
              }
              fVar43 = (float)pdb_140df3e10(param_2,1);
              fVar27 = (fVar33 - fVar43) * (fVar33 - fVar43);
              fVar43 = SQRT((fVar36 - fVar17) * (fVar36 - fVar17) + fVar27);
              if (fVar26 <= fVar43) {
                fVar43 = fVar26;
              }
              fVar26 = (float)pdb_140df3e10(param_2,2);
              fVar17 = SQRT((fVar36 - fVar27) * (fVar36 - fVar27) +
                            (fVar33 - fVar26) * (fVar33 - fVar26));
              fVar26 = fVar17;
              if (fVar43 <= fVar17) {
                fVar26 = fVar43;
              }
              fVar17 = (float)(-(uint)NAN(fVar43) & (uint)fVar17 |
                              ~-(uint)NAN(fVar43) & (uint)fVar26);
              fVar43 = (float)pdb_140df3e10(param_2,3);
              fVar26 = SQRT((fVar36 - fVar26) * (fVar36 - fVar26) +
                            (fVar33 - fVar43) * (fVar33 - fVar43));
              fVar43 = fVar26;
              if (fVar17 <= fVar26) {
                fVar43 = fVar17;
              }
              uStack_2b8._0_4_ = fVar47 + fVar45;
              uStack_2b8._4_4_ = fVar48 + fVar46;
              fStack_2b0 = (float)((uint)fVar24 ^ _DAT_142e37820);
              fStack_2ac = (float)((uint)fVar22 ^ _UNK_142e37824);
              uStack_2a0 = 0;
              uStack_298 = CONCAT44(-(uint)NAN(fVar17) & (uint)fVar26 |
                                    ~-(uint)NAN(fVar17) & (uint)fVar43,1);
              auVar20._4_4_ = fVar36;
              auVar20._0_4_ = fVar33;
              auVar20._8_4_ = fVar37;
              auVar20._12_4_ = fVar38;
              fStack_2a8 = fVar33;
              fStack_2a4 = fVar36;
              pdb_1410c95a0(uStack_280);
            }
          }
          if ((0.0 <= fVar34) && (fVar34 <= _DAT_142e36f28)) {
            auVar35._0_4_ = fVar14 + fVar49 * fVar34;
            auVar35._4_4_ = fVar21 + fVar50 * fVar34;
            auVar35._8_4_ = fVar44 * 0.0 + 0.0;
            auVar35._12_4_ = fVar44 * 0.0 + 0.0;
            fVar23 = auVar35._4_4_ * fVar23;
            fVar25 = auVar35._4_4_ * fVar25;
            fVar14 = fVar23 + auVar35._0_4_ * fVar15 + (float)auStack_158._0_4_;
            fVar21 = fVar25 + auVar35._0_4_ * fVar16 + (float)auStack_158._4_4_;
            fVar33 = fVar23 + fVar23 + fStack_150;
            fVar34 = fVar25 + fVar25 + fStack_14c;
            if (param_4 != '\0') {
              lVar3 = param_5[2];
              if (lVar3 == *param_5) {
                pdb_142d7f010(param_5);
              }
              lVar4 = param_5[1];
              *(undefined4 *)(lVar4 + lVar3 * 0xc) = 0;
              *(ulonglong *)(lVar4 + 4 + lVar3 * 0xc) = CONCAT44(fVar21,fVar14);
              param_5[2] = lVar3 + 1;
            }
            auVar20 = divps(auVar35,auStack_168);
            fVar15 = auVar20._0_4_;
            fVar16 = auVar20._4_4_;
            if ((float)((uint)fVar15 & _DAT_142e377e0) <= (float)((uint)fVar16 & _UNK_142e377e4)) {
              fVar44 = (float)(~-(uint)NAN(fVar16) &
                               (((uint)fVar16 ^ _DAT_142e37820) & _DAT_142e37820 | _DAT_142e3c640) |
                              -(uint)NAN(fVar16) & _DAT_14300a424);
              fVar49 = 0.0;
            }
            else {
              fVar49 = (float)(~-(uint)NAN(fVar15) &
                               ((uint)fVar15 & _DAT_142e37820 | _DAT_142e3c640) |
                              -(uint)NAN(fVar15) & _DAT_143009de0);
              fVar44 = _DAT_14300c320;
            }
            uVar18 = pdb_140df2570(param_1);
            uVar19 = pdb_140df2570(param_2);
            auVar31._8_4_ = (int)extraout_XMM0_Qb_01;
            auVar31._0_8_ = uVar18;
            auVar31._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
            fVar50 = (float)pdb_140df17e0(param_1);
            auVar32._8_4_ = (int)extraout_XMM0_Qb_02;
            auVar32._0_8_ = uVar19;
            auVar32._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
            fVar36 = (float)pdb_140df17e0(param_2);
            fVar25 = fStack_23c;
            fVar23 = fStack_240;
            fVar16 = fStack_244;
            fVar15 = fStack_248;
            auVar20._4_12_ = auVar32._4_12_;
            auVar20._0_4_ = auVar32._0_4_ * auVar31._0_4_ + fVar36 * fVar50;
            if (auVar20._0_4_ < _DAT_143007998) {
              fVar38 = fVar44 * fStack_248;
              fVar44 = fVar44 * fStack_244;
              fVar48 = fVar49 * fStack_240;
              fVar49 = fVar49 * fStack_23c;
              fVar50 = (float)pdb_140df3e10(param_1,0);
              fVar37 = fVar21 - auVar20._0_4_;
              fVar36 = (fVar14 - fVar50) * (fVar14 - fVar50);
              fVar50 = SQRT(fVar37 * fVar37 + fVar36);
              if (_DAT_142e3a74c <= fVar50) {
                fVar50 = _DAT_142e3a74c;
              }
              fVar37 = (float)pdb_140df3e10(param_1,1);
              fVar37 = (fVar14 - fVar37) * (fVar14 - fVar37);
              fVar36 = SQRT((fVar21 - fVar36) * (fVar21 - fVar36) + fVar37);
              if (fVar50 <= fVar36) {
                fVar36 = fVar50;
              }
              fVar50 = (float)pdb_140df3e10(param_1,2);
              fVar46 = (fVar14 - fVar50) * (fVar14 - fVar50);
              fVar50 = SQRT((fVar21 - fVar37) * (fVar21 - fVar37) + fVar46);
              if (fVar36 <= fVar50) {
                fVar50 = fVar36;
              }
              fVar36 = (float)pdb_140df3e10(param_1,3);
              fVar37 = (fVar14 - fVar36) * (fVar14 - fVar36);
              fVar36 = SQRT((fVar21 - fVar46) * (fVar21 - fVar46) + fVar37);
              if (fVar50 <= fVar36) {
                fVar36 = fVar50;
              }
              fVar50 = (float)pdb_140df3e10(param_2,0);
              fVar46 = (fVar14 - fVar50) * (fVar14 - fVar50);
              fVar50 = SQRT((fVar21 - fVar37) * (fVar21 - fVar37) + fVar46);
              if (fVar36 <= fVar50) {
                fVar50 = fVar36;
              }
              fVar36 = (float)pdb_140df3e10(param_2,1);
              fVar37 = (fVar14 - fVar36) * (fVar14 - fVar36);
              fVar36 = SQRT((fVar21 - fVar46) * (fVar21 - fVar46) + fVar37);
              if (fVar50 <= fVar36) {
                fVar36 = fVar50;
              }
              fVar50 = (float)pdb_140df3e10(param_2,2);
              fVar37 = SQRT((fVar21 - fVar37) * (fVar21 - fVar37) +
                            (fVar14 - fVar50) * (fVar14 - fVar50));
              fVar50 = fVar37;
              if (fVar36 <= fVar37) {
                fVar50 = fVar36;
              }
              fVar37 = (float)(-(uint)NAN(fVar36) & (uint)fVar37 |
                              ~-(uint)NAN(fVar36) & (uint)fVar50);
              fVar36 = (float)pdb_140df3e10(param_2,3);
              fVar36 = SQRT((fVar21 - fVar50) * (fVar21 - fVar50) +
                            (fVar14 - fVar36) * (fVar14 - fVar36));
              fVar50 = fVar36;
              if (fVar37 <= fVar36) {
                fVar50 = fVar37;
              }
              uStack_2b8._0_4_ = fVar48 + fVar38;
              uStack_2b8._4_4_ = fVar49 + fVar44;
              uStack_2a0 = 1;
              uStack_298 = CONCAT44(-(uint)NAN(fVar37) & (uint)fVar36 |
                                    ~-(uint)NAN(fVar37) & (uint)fVar50,1);
              auVar20._4_4_ = fVar21;
              auVar20._0_4_ = fVar14;
              auVar20._8_4_ = fVar33;
              auVar20._12_4_ = fVar34;
              fStack_2b0 = fVar24;
              fStack_2ac = fVar22;
              fStack_2a8 = fVar14;
              fStack_2a4 = fVar21;
              pdb_1410c95a0(uStack_280);
            }
          }
        }
        pdb_141e3c130(&fStack_278,&fStack_228);
      } while (fStack_278._0_1_ != '\0');
      return;
    }
  }
  else {
    puVar12 = param_1;
    puVar13 = param_2;
    if ((char)*param_2 == '\0') {
      fStack_26c = 0.0;
      uVar18 = *(undefined8 *)(param_1 + 1);
      fVar23 = (float)uVar18;
      fStack_274 = (float)*(undefined8 *)(param_1 + 2);
      fVar16 = fStack_274;
      fStack_270 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
      uVar19 = *(undefined8 *)(param_2 + 1);
      fVar14 = (float)uVar19;
      fVar25 = (float)*(undefined8 *)(param_2 + 2);
      uStack_220._0_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
      uStack_220._4_4_ = 0.0;
      fStack_278 = fVar23;
      fStack_228 = fVar14;
      fStack_224 = fVar25;
      pdb_140def750(&uStack_2b8,&fStack_278,&fStack_228);
      uVar9 = uStack_280;
      uVar2 = _DAT_142e37820;
      fVar15 = _DAT_142e36f28;
      if ((float)uStack_2b8 != 1.4013e-45) {
        return;
      }
      fStack_228 = fStack_2b0 - (float)((ulonglong)uVar18 >> 0x20);
      fVar21 = uStack_2b8._4_4_ - fVar23;
      uStack_220._0_4_ = (float)((ulonglong)uVar19 >> 0x20) - fStack_2b0;
      fVar33 = fVar14 - uStack_2b8._4_4_;
      fStack_224 = _DAT_142e36f28 / SQRT(fVar21 * fVar21 + fStack_228 * fStack_228);
      uStack_220._4_4_ =
           _DAT_142e36f28 / SQRT(fVar33 * fVar33 + (float)uStack_220 * (float)uStack_220);
      fStack_228 = (float)((uint)fStack_224 ^ _DAT_142e37820) * fStack_228;
      fStack_224 = fStack_224 * fVar21;
      uStack_220._0_4_ = (float)((uint)uStack_220._4_4_ ^ _DAT_142e37820) * (float)uStack_220;
      uStack_220._4_4_ = uStack_220._4_4_ * fVar33;
      uStack_210 = 0;
      uStack_208 = uStack_208 & 0xffffffff00000000;
      pdb_1410c95a0(uStack_280);
      fVar16 = fVar16 - fStack_2a8;
      fVar23 = fVar23 - fStack_2ac;
      fVar25 = fStack_2a8 - fVar25;
      fVar14 = fStack_2ac - fVar14;
      fStack_224 = fVar15 / SQRT(fVar23 * fVar23 + fVar16 * fVar16);
      fVar15 = fVar15 / SQRT(fVar14 * fVar14 + fVar25 * fVar25);
      fStack_228 = (float)((uint)fStack_224 ^ uVar2) * fVar16;
      fStack_224 = fStack_224 * fVar23;
      uStack_220._0_4_ = (float)(uVar2 ^ (uint)fVar15) * fVar25;
      uStack_220._4_4_ = fVar15 * fVar14;
      uStack_210 = 1;
      uStack_208 = uStack_208 & 0xffffffff00000000;
      pdb_1410c95a0(uVar9);
      if (param_4 == '\0') {
        return;
      }
      lVar3 = param_5[2];
      if (lVar3 == *param_5) {
        pdb_142d7f010(param_5);
      }
      lVar4 = param_5[1];
      *(undefined4 *)(lVar4 + lVar3 * 0xc) = 0;
      *(ulonglong *)(lVar4 + 4 + lVar3 * 0xc) = CONCAT44(fStack_2b0,uStack_2b8._4_4_);
      lVar4 = lVar3 + 1;
      param_5[2] = lVar4;
      if (lVar4 == *param_5) {
        pdb_142d7f010(param_5);
      }
      lVar5 = param_5[1];
      *(undefined4 *)(lVar5 + lVar4 * 0xc) = 1;
      *(ulonglong *)(lVar5 + 4 + lVar4 * 0xc) = CONCAT44(fStack_2a8,fStack_2ac);
      param_5[2] = lVar3 + 2;
      return;
    }
  }
  puVar13 = puVar13 + 1;
  pdb_140df0010(afStack_188,puVar13);
  uStack_198 = 0;
  uStack_190 = 4;
  fStack_268 = afStack_188[0];
  fStack_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 5.60519e-45;
  fStack_26c = 0.0;
  uStack_2b8._0_4_ = 0.0;
  uStack_2b8._4_4_ = 0.0;
  fStack_2b0 = 0.0;
  fStack_2ac = 0.0;
  pdb_141e3c090(&fStack_278,4,&uStack_2b8,4);
  uStack_218 = CONCAT44(fStack_2ac,fStack_2b0);
  uStack_200 = uStack_298;
  uStack_1f8 = uStack_290;
  uStack_208 = uStack_2a0;
  uStack_220._0_4_ = (float)uStack_2b8;
  uStack_220._4_4_ = uStack_2b8._4_4_;
  fStack_228 = 5.60519e-45;
  fStack_224 = 0.0;
  uStack_1f0 = uStack_198;
  pfStack_1e8 = (float *)uStack_190;
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auStack_1c0._4_12_;
  auStack_1c0 = auVar6 << 0x20;
  pdb_141e3c2c0(&fStack_278,&fStack_228);
  fVar16 = _DAT_142e3a74c;
  uVar8 = _UNK_142e37824;
  uVar7 = _DAT_142e37820;
  fVar15 = _DAT_142e36f28;
  if (fStack_278 == 1.4013e-45) {
    puVar12 = puVar12 + 1;
    fStack_248 = (float)(uVar2 ^ 1);
    do {
      fVar33 = fStack_268;
      fVar21 = fStack_26c;
      fVar14 = fStack_270;
      fVar25 = fStack_274;
      fVar34 = fStack_26c - fStack_274;
      fVar44 = fStack_268 - fStack_270;
      pdb_140def380(&uStack_2b8,puVar12,fStack_274,fStack_270,fVar34,fVar44);
      fVar23 = fStack_2b0;
      if ((char)uStack_2b8 != '\0') {
        fVar49 = SQRT(fVar44 * fVar44 + fVar34 * fVar34);
        fVar50 = (fVar15 / fVar49) * fVar34;
        fVar22 = (fVar15 / fVar49) * fVar44;
        if ((0.0 <= uStack_2b8._4_4_) && (uStack_2b8._4_4_ <= fVar15)) {
          fVar49 = uStack_2b8._4_4_ * fVar34 + fVar25;
          fVar24 = uStack_2b8._4_4_ * fVar44 + fVar14;
          if (param_4 != '\0') {
            lVar3 = param_5[2];
            if (lVar3 == *param_5) {
              pdb_142d7f010(param_5);
            }
            lVar4 = param_5[1];
            *(float *)(lVar4 + lVar3 * 0xc) = fStack_248;
            pfVar1 = (float *)(lVar4 + 4 + lVar3 * 0xc);
            *pfVar1 = fVar49;
            pfVar1[1] = fVar24;
            param_5[2] = lVar3 + 1;
          }
          fVar36 = SQRT((fVar24 - fVar14) * (fVar24 - fVar14) +
                        (fVar49 - fVar25) * (fVar49 - fVar25));
          fVar33 = SQRT((fVar24 - fVar33) * (fVar24 - fVar33) +
                        (fVar49 - fVar21) * (fVar49 - fVar21));
          fVar21 = fVar33;
          if (fVar36 <= fVar33) {
            fVar21 = fVar36;
          }
          uStack_2b8._4_4_ = (float)*(undefined8 *)puVar12 - fVar49;
          uStack_2b8._0_4_ = (float)((ulonglong)*(undefined8 *)puVar12 >> 0x20) - fVar24;
          fVar37 = fVar15 / SQRT((float)uStack_2b8 * (float)uStack_2b8 +
                                 uStack_2b8._4_4_ * uStack_2b8._4_4_);
          uStack_2b8._0_4_ = (float)uStack_2b8 * (float)((uint)fVar37 ^ uVar7);
          uStack_2b8._4_4_ = uStack_2b8._4_4_ * fVar37;
          fStack_2b0 = (float)((uint)fVar50 ^ uVar7);
          fStack_2ac = (float)((uint)fVar22 ^ uVar8);
          uStack_2a0 = 0;
          uStack_298 = CONCAT44(~-(uint)NAN(fVar36) & (uint)fVar21 |
                                -(uint)NAN(fVar36) & (uint)fVar33,1);
          fStack_2a8 = fVar49;
          fStack_2a4 = fVar24;
          pdb_1410c95a0(uStack_280);
        }
        if ((0.0 <= fVar23) && (fVar23 <= fVar15)) {
          fVar25 = fVar25 + fVar34 * fVar23;
          fVar14 = fVar14 + fVar44 * fVar23;
          if (param_4 != '\0') {
            lVar3 = param_5[2];
            if (lVar3 == *param_5) {
              pdb_142d7f010(param_5);
            }
            lVar4 = param_5[1];
            *(uint *)(lVar4 + lVar3 * 0xc) = uVar2;
            *(ulonglong *)(lVar4 + 4 + lVar3 * 0xc) = CONCAT44(fVar14,fVar25);
            param_5[2] = lVar3 + 1;
          }
          uVar18 = *(undefined8 *)puVar12;
          fVar23 = (float)pdb_140df3e10(puVar13,0);
          fVar21 = (fVar25 - fVar23) * (fVar25 - fVar23);
          fVar23 = SQRT((fVar14 - fVar49) * (fVar14 - fVar49) + fVar21);
          if (fVar16 <= fVar23) {
            fVar23 = fVar16;
          }
          fVar33 = (float)pdb_140df3e10(puVar13,1);
          fVar33 = (fVar25 - fVar33) * (fVar25 - fVar33);
          fVar21 = SQRT((fVar14 - fVar21) * (fVar14 - fVar21) + fVar33);
          if (fVar23 <= fVar21) {
            fVar21 = fVar23;
          }
          fVar23 = (float)pdb_140df3e10(puVar13,2);
          fVar34 = (fVar25 - fVar23) * (fVar25 - fVar23);
          fVar23 = SQRT((fVar14 - fVar33) * (fVar14 - fVar33) + fVar34);
          if (fVar21 <= fVar23) {
            fVar23 = fVar21;
          }
          fVar21 = (float)pdb_140df3e10(puVar13,3);
          fVar21 = SQRT((fVar14 - fVar34) * (fVar14 - fVar34) +
                        (fVar25 - fVar21) * (fVar25 - fVar21));
          if (fVar23 <= fVar21) {
            fVar21 = fVar23;
          }
          uStack_2b8._4_4_ = fVar25 - (float)uVar18;
          uStack_2b8._0_4_ = fVar14 - (float)((ulonglong)uVar18 >> 0x20);
          fVar23 = fVar15 / SQRT((float)uStack_2b8 * (float)uStack_2b8 +
                                 uStack_2b8._4_4_ * uStack_2b8._4_4_);
          uStack_2b8._0_4_ = (float)uStack_2b8 * (float)((uint)fVar23 ^ uVar7);
          uStack_2b8._4_4_ = uStack_2b8._4_4_ * fVar23;
          uStack_2a0 = 1;
          uStack_298 = CONCAT44(fVar21,1);
          fStack_2b0 = fVar50;
          fStack_2ac = fVar22;
          fStack_2a8 = fVar25;
          fStack_2a4 = fVar14;
          pdb_1410c95a0(uStack_280);
        }
      }
      pdb_141e3c2c0(&fStack_278,&fStack_228);
    } while (fStack_278._0_1_ != '\0');
  }
  return;
}

