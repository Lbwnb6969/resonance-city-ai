// VA 0x1414df380, PDB extent 5505 bytes
// system_decorator::decorator_visual::cottage_dormers::util_assemble_gothic_dormer::assemble_gothic_dormer_tiles<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$7>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/util_assemble_gothic_dormer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::util_assemble_gothic_dormer::assemble_gothic_dormer_tiles<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$7>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/util_assemble_gothic_dormer.rs
   Extent: 5505 */

void pdb_1414df380(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  float *param_5,uint param_6,undefined8 param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  int iStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
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
  longlong lStack_200;
  float *pfStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  longlong lStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float *pfStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong lStack_190;
  float *pfStack_188;
  float *pfStack_180;
  float fStack_174;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_160;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  float *pfStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  int iStack_114;
  undefined8 uStack_110;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong auStack_f8 [23];
  undefined8 extraout_XMM0_Qb;
  
  auStack_f8[1] = 0xfffffffffffffffe;
  uStack_104 = param_3;
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143315d80);
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  auVar29._0_8_ = *puVar6;
  uVar4 = *(undefined4 *)((longlong)puVar6 + 4);
  fVar55 = *(float *)(puVar6 + 1);
  pdb_140b77620(&iStack_2a4,param_2,uVar4);
  if (iStack_2a4 != 2) {
    pfVar17 = (float *)(ulonglong)param_6;
    fVar52 = (float)auVar29._0_8_;
    fVar35 = fVar52;
    lStack_1d8 = param_1;
    if (iStack_2a4 == 1) {
      uStack_138 = uStack_290;
      uStack_148 = (float *)uStack_2a0;
      uStack_140 = (code *)uStack_298;
      uVar24 = pdb_140df2a20(&uStack_148,fVar52,fVar55);
    }
    else {
      uStack_148 = (float *)uStack_2a0;
      uStack_140 = (code *)uStack_298;
      uVar24 = pdb_140defa20(&uStack_148,fVar52,fVar55);
    }
    uStack_148 = (float *)CONCAT44(fVar35,uVar24);
    pdb_140df4540(&fStack_1d0,&uStack_148,uVar4);
    pdb_140c45ec0(&fStack_2d8,param_5,pfVar17,&UNK_143315d98);
    fVar59 = fStack_1cc;
    fVar58 = _DAT_142e36f30;
    fVar32 = _DAT_142e36f2c;
    fVar35 = _DAT_142e36f28;
    fVar25 = SQRT(fStack_2c0 * _UNK_143314da4 * fStack_2c0 * _UNK_143314da4 +
                  fStack_2c4 * _DAT_142e37878 * fStack_2c4 * _DAT_142e37878 +
                  fStack_2c8 * _DAT_143314da0 * fStack_2c8 * _DAT_143314da0);
    auStack_f8[0] =
         (longlong)(fVar25 - _DAT_142e36f2c) & (longlong)fVar25 >> 0x3f | (longlong)fVar25;
    if (fVar25 < 0.0) {
      auStack_f8[0] = 0;
    }
    if (_DAT_142e36f30 < fVar25) {
      auStack_f8[0] = 0xffffffffffffffff;
    }
    fVar25 = (float)((ulonglong)auVar29._0_8_ >> 0x20);
    fVar51 = fVar52 - fStack_1d0;
    fVar53 = fVar25 - fStack_1cc;
    fVar54 = fVar55 - fStack_1c8;
    fVar61 = SQRT(fVar54 * fVar54 + fVar53 * fVar53 + fVar51 * fVar51);
    fVar52 = fVar51 * _DAT_143315cc0 + fVar52;
    fVar25 = fVar53 * _UNK_143315cc4 + fVar25;
    fVar55 = fVar54 * _UNK_143315cc8 + fVar55;
    fVar51 = (_DAT_142e36f28 - 0.0) * _UNK_143315ccc + _DAT_142e36f28;
    auVar27._4_4_ = unaff_XMM15_Db;
    auVar27._0_4_ = fVar61;
    auVar27._8_4_ = unaff_XMM15_Dc;
    auVar27._12_4_ = unaff_XMM15_Dd;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = fVar61 / _DAT_143315cd0;
    auVar29._0_8_ = pub_142e32b00(auVar28._0_8_);
    auVar29._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar29._0_8_ <= _DAT_142e37830) {
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = _DAT_142e37830;
      auVar29._0_8_ = auVar30._0_8_;
    }
    fVar53 = (float)auVar29._0_8_;
    uVar19 = (longlong)(fVar53 - fVar32) & (longlong)fVar53 >> 0x3f | (longlong)fVar53;
    if (fVar53 < 0.0) {
      uVar19 = 0;
    }
    if (fVar58 < fVar53) {
      uVar19 = 0xffffffffffffffff;
    }
    fStack_fc = fVar61;
    pdb_140de8290(&lStack_190,uVar19,_DAT_143315cd4 / fVar61,auStack_f8,&UNK_143315db0);
    fVar60 = _UNK_143315cfc;
    fVar61 = _UNK_143315cf8;
    fVar54 = _UNK_143315cf4;
    fVar53 = _DAT_143315cf0;
    fVar58 = _DAT_142e37990;
    fVar32 = _DAT_142e36f28;
    fStack_158 = SUB84(pfStack_188,0);
    fStack_154 = (float)((ulonglong)pfStack_188 >> 0x20);
    fVar33 = fVar55 - fStack_1c8;
    fVar31 = fVar52 - fStack_1d0;
    fStack_1cc = fVar25 - fStack_1cc;
    fVar26 = fVar35 / SQRT(fVar33 * fVar33 + fStack_1cc * fStack_1cc + fVar31 * fVar31);
    fVar31 = fVar31 * fVar26;
    fVar33 = fVar26 * fVar33;
    fVar38 = fStack_1cc * fVar26 * 0.0;
    fVar36 = _DAT_142e377f0 * fVar31 + fVar33 * 0.0;
    fVar34 = fVar31 - fVar38;
    fVar38 = fVar38 - fVar33;
    fVar37 = fVar35 / SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar38 * fVar38);
    fVar26 = fStack_1cc * fVar26 - fVar38 * fVar37;
    if (pfStack_180 != (float *)0x0) {
      fVar56 = _DAT_142e36f50 / SQRT(fVar35 - fVar26);
      pfVar16 = pfStack_188 + (longlong)pfStack_180;
      fVar39 = (fVar35 - fVar26) + _DAT_143315ce0;
      fVar41 = fVar56 + _UNK_143315ce4;
      fVar43 = fVar34 * fVar37 + _UNK_143315ce8;
      fVar45 = fVar33 + _UNK_143315cec;
      fVar31 = fVar31 + fVar36 * fVar37;
      fVar36 = _UNK_142e378e4 + fVar26;
      fVar38 = _DAT_142e36f50 / SQRT(fVar36);
      uVar46 = (uint)(0.0 < fVar26);
      uVar40 = (int)(uVar46 << 0x1f) >> 0x1f;
      uVar42 = (int)(uVar46 << 0x1f) >> 0x1f;
      uVar44 = (int)(uVar46 << 0x1f) >> 0x1f;
      uVar46 = (int)(uVar46 << 0x1f) >> 0x1f;
      bVar18 = true;
      pfVar17 = (float *)&uStack_148;
      pfVar15 = pfStack_180;
      pfVar23 = pfStack_188;
      do {
        pfVar3 = pfVar23 + 1;
        pfVar21 = pfVar3;
        if (bVar18) {
          if (pfVar3 == pfVar16) break;
          pfVar15 = pfVar23;
          pfVar21 = pfVar23 + 2;
          pfVar23 = pfVar3;
        }
        fVar26 = *pfVar15;
        fVar47 = *pfVar23;
        fVar57 = (fVar26 + fVar47) * _DAT_142e36f50;
        uStack_148 = (float *)CONCAT44(~uVar42 & (uint)(fVar31 * fVar41) |
                                       (uint)(fVar38 * fVar36) & uVar42,
                                       ~uVar40 & (uint)(fVar56 * fVar39) |
                                       (uint)(fVar38 * fVar31) & uVar40);
        uStack_140._0_4_ =
             (float)(~uVar44 & (uint)(fVar56 * fVar43) | (uint)((fVar33 + fVar35) * fVar38) & uVar44
                    );
        uStack_140._4_4_ =
             (float)(~uVar46 & (uint)(fVar56 * fVar45) |
                    (uint)(fVar38 * (0.0 - fVar34 * fVar37)) & uVar46);
        param_5 = (float *)pdb_1424e5b90(pfVar17);
        uStack_148 = (float *)CONCAT44((fVar47 - fVar26) * fStack_fc * fVar58,0x3dcccccd);
        uStack_140 = (code *)CONCAT44(uStack_140._4_4_,0x3e4ccccd);
        auVar29._0_8_ = pdb_141e3c580(pfVar17);
        uVar19 = auStack_f8[0] + 0xa0761d6478bd642f;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar19 ^ 0xe7037ed1a0b428db;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar19;
        uVar20 = SUB168(auVar7 * auVar11,8) ^ SUB168(auVar7 * auVar11,0);
        if ((uint)((int)uVar20 * 200) < 0x60) {
          auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
          do {
            uVar19 = uVar19 + 0xa0761d6478bd642f;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = auStack_f8[0];
            uVar20 = SUB168(auVar8 * auVar12,8) ^ SUB168(auVar8 * auVar12,0);
            auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
          } while ((uint)((int)uVar20 * 200) < 0x60);
        }
        auStack_f8[0] = uVar19;
        iStack_114 = (int)((uVar20 & 0xffffffff) * 200 >> 0x20) + -100;
        uStack_148 = (float *)CONCAT44(fVar57 * fVar59 + (fVar54 - fVar57) * fVar25,
                                       fVar57 * fStack_1d0 + (fVar53 - fVar57) * fVar52);
        uStack_140 = (code *)CONCAT44(fVar32 * 0.0 + (fVar60 - 0.0) * fVar51,
                                      fVar57 * fStack_1c8 + (fVar61 - fVar57) * fVar55);
        uStack_138 = 0x7bff00003c000000;
        uStack_130 = (undefined4)auVar29._0_8_;
        uStack_12c = (undefined2)((ulonglong)auVar29._0_8_ >> 0x20);
        uStack_12a = 0;
        uStack_120 = uStack_104;
        uStack_11c = 0x3f80000000000000;
        uStack_110 = 0;
        pfStack_128 = param_5;
        pdb_1414a9f00(param_7,pfVar17);
        bVar18 = false;
        pfVar15 = pfVar23;
        pfVar23 = pfVar21;
      } while (pfVar21 != pfVar16);
    }
    if (lStack_190 != 0) {
      pub_1406abac0((byte *)CONCAT44(fStack_154,fStack_158),lStack_190 << 2,4);
    }
    fVar55 = fStack_fc;
    fVar52 = (float)pub_142e329c0(fStack_fc / _DAT_142e37988);
    uVar19 = (longlong)(fVar52 - _DAT_142e36f2c) & (longlong)fVar52 >> 0x3f | (longlong)fVar52;
    if (fVar52 < 0.0) {
      uVar19 = 0;
    }
    if (_DAT_142e36f30 < fVar52) {
      uVar19 = 0xffffffffffffffff;
    }
    if (uVar19 < 3) {
      uVar19 = 2;
    }
    pdb_140de8290(&lStack_200,uVar19,_DAT_143315d00 / fVar55,auStack_f8,&UNK_143315dc8);
    fVar52 = fStack_2d0 * fStack_2d0;
    fStack_22c = fStack_2cc * fStack_2cc;
    fVar55 = fStack_2d4 * fStack_2d4 + fStack_2d8 * fStack_2d8;
    fStack_238 = fStack_22c - (fVar55 + fVar52);
    fStack_234 = fStack_22c - (fVar55 + fVar52);
    fStack_230 = fStack_22c - (fVar55 + fVar52);
    fStack_22c = fStack_22c - (fVar55 + fVar52);
    fStack_218 = fStack_2cc + fStack_2cc;
    fStack_228 = fStack_2d0;
    fStack_224 = fStack_2d8;
    fStack_220 = fStack_2d4;
    fStack_21c = fStack_2cc;
    fVar55 = _UNK_142e378f8 * fStack_2d0 + _UNK_142e378f4 * fStack_2d4 + _DAT_142e378f0 * fStack_2d8
    ;
    fVar55 = fVar55 + fVar55;
    fStack_248 = fStack_2d8;
    fStack_244 = fStack_2d4;
    fStack_240 = fStack_2d0;
    fStack_23c = fStack_2cc;
    fStack_258 = fVar55 * fStack_2d8 + fStack_238 * _DAT_142e378f0 +
                 (_UNK_142f46978 * fStack_2d0 + fStack_2d4 * _UNK_142e378f8) * fStack_218;
    fStack_254 = fVar55 * fStack_2d4 + fStack_234 * _UNK_142e378f4 +
                 (_DAT_142f46970 * fStack_2d8 + fStack_2d0 * _DAT_142e378f0) * fStack_218;
    fStack_250 = fVar55 * fStack_2d0 + fStack_230 * _UNK_142e378f8 +
                 (_UNK_142f46974 * fStack_2d4 + fStack_2d8 * _UNK_142e378f4) * fStack_218;
    pfStack_160 = pfStack_1f8;
    pfStack_1b0 = pfStack_1f8 + lStack_1f0;
    fStack_24c = _DAT_142e36f28;
    uVar19 = 0;
    lVar22 = 0;
    fStack_214 = fStack_218;
    fStack_210 = fStack_218;
    fStack_20c = fStack_218;
    do {
      lVar2 = lStack_1d8 + lVar22;
      fVar55 = *(float *)(lVar2 + 0x30);
      fVar52 = (float)pub_142e329c0(fVar55 / _DAT_14305a490);
      uVar20 = 0;
      if (0.0 <= fVar52) {
        uVar20 = (longlong)(fVar52 - _DAT_142e36f2c) & (longlong)fVar52 >> 0x3f | (longlong)fVar52;
      }
      if (_DAT_142e36f30 < fVar52) {
        uVar20 = 0xffffffffffffffff;
      }
      if (uVar20 < 3) {
        uVar20 = 2;
      }
      pdb_140de8290(&lStack_190,uVar20,_DAT_143315d04 / fVar55,auStack_f8,&UNK_143315de0);
      lStack_1e8 = lVar22 + 0x38;
      uStack_1e0 = uVar19 + 1;
      fVar55 = *(float *)(&UNK_142e37810 + (ulonglong)(uVar19 == 0) * 4);
      fVar32 = (float)((uint)fVar55 & _DAT_142e37820);
      fVar52 = fStack_240 * fVar55 + fStack_244 * fVar32 + fStack_248 * fVar32;
      fVar52 = fVar52 + fVar52;
      fStack_278 = (fStack_220 * fVar55 - fVar32 * fStack_240) * fStack_218 +
                   fVar52 * fStack_248 + fVar32 * fStack_238;
      fStack_274 = (fStack_228 * fVar32 - fVar55 * fStack_248) * fStack_214 +
                   fVar52 * fStack_244 + fVar32 * fStack_234;
      fStack_270 = (fStack_224 * fVar32 - fVar32 * fStack_244) * fStack_210 +
                   fVar52 * fStack_240 + fVar55 * fStack_230;
      fStack_26c = (fStack_21c * 0.0 - fStack_23c * 0.0) * fStack_20c +
                   fVar52 * fStack_23c + fVar55 * fStack_22c;
      uStack_150 = CONCAT44(fStack_26c,fStack_270);
      pfStack_168 = pfStack_188;
      pfStack_1c0 = pfStack_188 + (longlong)pfStack_180;
      fStack_25c = _DAT_142e36f28;
      bVar18 = true;
      pfVar16 = pfStack_160;
      fStack_268 = fStack_270;
      fStack_264 = fStack_278;
      fStack_260 = fStack_274;
      fStack_1a8 = fStack_274;
      fStack_1a4 = fStack_274;
      fStack_1a0 = fStack_26c;
      fStack_19c = fStack_26c;
      fStack_158 = fStack_270;
      fStack_154 = fStack_26c;
      while (pfVar16 != pfStack_1b0) {
        pfVar15 = pfVar16 + 1;
        if (bVar18) {
          if (pfVar15 == pfStack_1b0) break;
          pfVar23 = pfVar16 + 2;
          pfVar17 = pfVar16;
          pfVar16 = pfVar15;
          pfVar15 = pfVar23;
        }
        pfStack_170 = pfVar15;
        fVar55 = (*pfVar17 + *pfVar16) * _DAT_142e36f50;
        fStack_174 = (*pfVar16 - *pfVar17) * fStack_fc;
        fStack_280 = (fVar35 - fVar55) * 0.0 - fVar55 * fStack_fc;
        fStack_288 = fStack_280 * fStack_258;
        fStack_284 = fStack_280 * fStack_254;
        fStack_280 = fStack_280 * fStack_250;
        fStack_27c = _UNK_14300c764 * fStack_24c;
        bVar18 = true;
        pfVar17 = pfStack_168;
        pfVar15 = param_5;
        pfStack_1b8 = pfVar16;
        if (pfStack_168 != pfStack_1c0) {
          do {
            pfVar16 = pfVar17 + 1;
            pfVar23 = pfVar16;
            pfVar15 = pfVar17;
            if (bVar18) {
              pfVar15 = param_5;
              if (pfVar16 == pfStack_1c0) break;
              pfVar23 = pfVar17 + 2;
              pfVar15 = pfVar16;
              param_5 = pfVar17;
            }
            fStack_100 = *param_5;
            fVar55 = *pfVar15;
            if ((fStack_100 < 0.0) || (fVar35 < fStack_100)) {
              uStack_148 = &fStack_100;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_143315df8);
            }
            uVar46 = pdb_14148c300(lVar2);
            uVar20 = (ulonglong)uVar46;
            uVar19 = *(ulonglong *)(lVar2 + 0x10);
            if (uVar19 <= uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,uVar19,&UNK_14330d718);
            }
            uVar1 = uVar20 + 1;
            if (uVar19 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar1,uVar19,&UNK_14330d730);
            }
            lVar22 = *(longlong *)(lVar2 + 8);
            auVar29._0_8_ = *(undefined8 *)(lVar22 + uVar20 * 0xc);
            uVar5 = *(undefined8 *)(lVar22 + uVar1 * 0xc);
            fVar35 = *(float *)(lVar22 + 8 + uVar20 * 0xc);
            fVar52 = *(float *)(lVar22 + 8 + uVar1 * 0xc);
            fStack_100 = fVar55;
            if ((fVar55 < 0.0) || (_DAT_142e36f28 < fVar55)) {
              uStack_148 = &fStack_100;
              uStack_140 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14330d448,&uStack_148,&UNK_143315e10);
            }
            uVar46 = pdb_14148c300(lVar2,fVar55);
            uVar20 = (ulonglong)uVar46;
            if (uVar19 <= uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,uVar19,&UNK_14330d718);
            }
            uVar1 = uVar20 + 1;
            if (uVar19 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar1,uVar19,&UNK_14330d730);
            }
            fVar32 = _UNK_142e4e65c * (_UNK_142e3c64c - 0.0);
            fVar26 = _UNK_142e4e65c * _DAT_142e377f0;
            fVar54 = (float)uVar5 * extraout_XMM0_Da +
                     (float)auVar29._0_8_ * (_DAT_142e3c640 - extraout_XMM0_Da);
            fVar61 = (float)((ulonglong)uVar5 >> 0x20) * extraout_XMM0_Da +
                     (float)((ulonglong)auVar29._0_8_ >> 0x20) * (_UNK_142e3c644 - extraout_XMM0_Da)
            ;
            fVar60 = fVar52 * extraout_XMM0_Da + fVar35 * (_UNK_142e3c648 - extraout_XMM0_Da);
            auVar29._0_8_ = *(undefined8 *)(lVar22 + uVar20 * 0xc);
            uVar5 = *(undefined8 *)(lVar22 + uVar1 * 0xc);
            fVar55 = _UNK_142e4e65c * (_UNK_142e3c64c - 0.0);
            fVar36 = _UNK_142e4e65c * _DAT_142e377f0;
            fVar33 = (float)uVar5 * extraout_XMM0_Da_00 +
                     (float)auVar29._0_8_ * (_DAT_142e3c640 - extraout_XMM0_Da_00);
            fVar31 = (float)((ulonglong)uVar5 >> 0x20) * extraout_XMM0_Da_00 +
                     (float)((ulonglong)auVar29._0_8_ >> 0x20) *
                     (_UNK_142e3c644 - extraout_XMM0_Da_00);
            fVar34 = *(float *)(lVar22 + 8 + uVar1 * 0xc) * extraout_XMM0_Da_00 +
                     *(float *)(lVar22 + 8 + uVar20 * 0xc) * (_UNK_142e3c648 - extraout_XMM0_Da_00);
            fVar53 = fVar33 - fVar54;
            fVar51 = fVar31 - fVar61;
            fVar52 = fVar34 - fVar60;
            fVar35 = _DAT_142e36f28 / SQRT(fVar52 * fVar52 + fVar51 * fVar51 + fVar53 * fVar53);
            fVar53 = fVar53 * fVar35;
            fVar51 = fVar35 * fVar51;
            fVar35 = fVar35 * fVar52;
            fVar25 = _DAT_142e36f28 * fStack_25c;
            fVar52 = fVar51 * fStack_268 - fStack_1a8 * fVar35;
            fVar58 = fVar35 * fStack_264 - fStack_158 * fVar53;
            fVar59 = fVar53 * fStack_260 - fStack_278 * fVar51;
            if (fVar35 <= 0.0) {
              fVar37 = fVar58 - fStack_278;
              if (0.0 < fVar37) {
                fVar39 = fVar53 - fStack_158;
                fVar41 = fVar59 + fVar51;
                fVar37 = (_DAT_142e36f28 - fVar35) + fVar37;
                fVar43 = fStack_1a8 + fVar52;
                fVar38 = fVar37;
                goto LAB_1414e010d;
              }
              fVar37 = (_DAT_142e36f28 - fVar35) - fVar37;
              fVar41 = _DAT_142e36f50 / SQRT(fVar37);
              fVar39 = (fVar59 - fVar51) * fVar41;
              fVar43 = fVar37 * fVar41;
              fVar37 = (fStack_1a8 + fVar52) * fVar41;
              fVar41 = (fStack_158 + fVar53) * fVar41;
            }
            else {
              fVar39 = fVar58 + fStack_278;
              if (fVar39 <= 0.0) {
                fVar41 = (fVar35 + _DAT_142e36f28) - fVar39;
                fVar38 = _DAT_142e36f50 / SQRT(fVar41);
                fVar39 = fVar38 * (fStack_1a8 - fVar52);
                fVar43 = fVar38 * (fStack_158 + fVar53);
                fVar37 = fVar38 * (fVar59 + fVar51);
                fVar41 = fVar41 * fVar38;
              }
              else {
                fVar39 = fVar35 + _DAT_142e36f28 + fVar39;
                fVar41 = fStack_1a8 - fVar52;
                fVar37 = fVar53 - fStack_158;
                fVar43 = fVar59 - fVar51;
                fVar38 = fVar39;
LAB_1414e010d:
                fVar38 = _DAT_142e36f50 / SQRT(fVar38);
                fVar39 = fVar39 * fVar38;
                fVar43 = fVar43 * fVar38;
                fVar37 = fVar37 * fVar38;
                fVar41 = fVar41 * fVar38;
              }
            }
            pdb_140e02880(auStack_f8);
            fVar38 = (float)pdb_140e02880(auStack_f8);
            fVar45 = (float)pub_142e32b30();
            fVar47 = fVar45 * _DAT_142e36f28;
            fVar48 = fVar45 * 0.0;
            fVar45 = fVar45 * 0.0;
            fVar56 = (float)pub_142e329e0();
            fVar57 = fVar48 * fVar41 * _DAT_142e377d0 + fVar45 * fVar37 * _DAT_142e377c0 +
                     fVar56 * fVar43 * _DAT_142e377b0 + fVar39 * fVar47;
            fVar49 = fVar47 * fVar41 * _UNK_142e377d4 + fVar56 * fVar37 * _UNK_142e377c4 +
                     fVar45 * fVar43 * _UNK_142e377b4 + fVar39 * fVar48;
            fVar50 = fVar56 * fVar41 * _UNK_142e377d8 + fVar47 * fVar37 * _UNK_142e377c8 +
                     fVar48 * fVar43 * _UNK_142e377b8 + fVar39 * fVar45;
            fVar37 = fVar45 * fVar41 * _UNK_142e377dc + fVar48 * fVar37 * _UNK_142e377cc +
                     fVar47 * fVar43 * _UNK_142e377bc + fVar39 * fVar56;
            uStack_140._0_4_ =
                 fVar50 * _UNK_14300ccf8 * _UNK_142e377d8 + fVar49 * _UNK_14300ccf8 * _UNK_142e377c8
                 + fVar57 * _UNK_14300cce8 * _UNK_142e377b8 + fVar37 * _UNK_14300cce8;
            uStack_140._4_4_ =
                 fVar50 * _UNK_14300ccfc * _UNK_142e377dc + fVar49 * _UNK_14300ccfc * _UNK_142e377cc
                 + fVar57 * _UNK_14300ccec * _UNK_142e377bc + fVar37 * _UNK_14300ccec;
            uStack_148 = (float *)CONCAT44(fVar50 * _UNK_14300ccf4 * _UNK_142e377d4 +
                                           fVar49 * _UNK_14300ccf4 * _UNK_142e377c4 +
                                           fVar57 * _UNK_14300cce4 * _UNK_142e377b4 +
                                           fVar37 * _UNK_14300cce4,
                                           fVar50 * _DAT_14300ccf0 * _DAT_142e377d0 +
                                           fVar49 * _DAT_14300ccf0 * _DAT_142e377c0 +
                                           fVar57 * _DAT_14300cce0 * _DAT_142e377b0 +
                                           fVar37 * _DAT_14300cce0);
            fVar37 = (_DAT_142e36f28 - fVar38) * _DAT_142e3b1d8;
            fVar38 = fVar38 * _DAT_142e3787c;
            fVar52 = fVar52 * _DAT_143315d10;
            fVar58 = fVar58 * _UNK_143315d14;
            fVar59 = fVar59 * _UNK_143315d18;
            fVar25 = (fVar25 - 0.0) * _UNK_143315d1c;
            pfVar17 = (float *)pdb_1424e5b90(&uStack_148);
            fVar38 = fVar38 + fVar37;
            uStack_148 = (float *)CONCAT44(SQRT((fVar60 - fVar34) * (fVar60 - fVar34) +
                                                (fVar61 - fVar31) * (fVar61 - fVar31) +
                                                (fVar54 - fVar33) * (fVar54 - fVar33)) + fVar38,
                                           fStack_174);
            uStack_140 = (code *)CONCAT44(uStack_140._4_4_,0x3da3d70b);
            auVar29._0_8_ = pdb_141e3c580(&uStack_148);
            uVar19 = auStack_f8[0] + 0xa0761d6478bd642f;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19 ^ 0xe7037ed1a0b428db;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar19;
            uVar20 = SUB168(auVar9 * auVar13,8) ^ SUB168(auVar9 * auVar13,0);
            if ((uint)((int)uVar20 * 200) < 0x60) {
              auStack_f8[0] = auStack_f8[0] + 0x40ec3ac8f17ac85e;
              do {
                uVar19 = uVar19 + 0xa0761d6478bd642f;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = auStack_f8[0] ^ 0xe7037ed1a0b428db;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = auStack_f8[0];
                uVar20 = SUB168(auVar10 * auVar14,8) ^ SUB168(auVar10 * auVar14,0);
                auStack_f8[0] = auStack_f8[0] + 0xa0761d6478bd642f;
              } while ((uint)((int)uVar20 * 200) < 0x60);
            }
            auStack_f8[0] = uVar19;
            iStack_114 = (int)((uVar20 & 0xffffffff) * 200 >> 0x20) + -100;
            uStack_148 = (float *)CONCAT44(fVar58 * _UNK_143035ef4 +
                                           fVar51 * fVar38 * _UNK_143314dc4 +
                                           fVar31 * _UNK_143314dc4 + fVar61 * _UNK_143035ef4 +
                                           fStack_284,
                                           fVar52 * _DAT_143035ef0 +
                                           fVar53 * fVar38 * _DAT_143314dc0 +
                                           fVar33 * _DAT_143314dc0 + fVar54 * _DAT_143035ef0 +
                                           fStack_288);
            uStack_140 = (code *)CONCAT44(fVar25 * _UNK_143035efc +
                                          _UNK_142e4e65c * _UNK_143314dcc +
                                          (fVar36 + fVar55) * _UNK_143314dcc +
                                          (fVar26 + fVar32) * _UNK_143035efc + fStack_27c,
                                          fVar59 * _UNK_143035ef8 +
                                          fVar35 * fVar38 * _UNK_143314dc8 +
                                          fVar34 * _UNK_143314dc8 + fVar60 * _UNK_143035ef8 +
                                          fStack_280);
            uStack_138 = 0x7bff00003c000000;
            uStack_130 = (undefined4)auVar29._0_8_;
            uStack_12c = (undefined2)((ulonglong)auVar29._0_8_ >> 0x20);
            uStack_12a = 0;
            uStack_120 = uStack_104;
            uStack_11c = 0x3f80000000000000;
            uStack_110 = 0;
            pfStack_128 = pfVar17;
            pdb_1414a9f00(param_7,&uStack_148);
            bVar18 = false;
            pfVar17 = pfVar23;
            param_5 = pfVar15;
            fVar35 = _DAT_142e36f28;
          } while (pfVar23 != pfStack_1c0);
        }
        bVar18 = false;
        pfVar16 = pfStack_170;
        pfVar17 = pfStack_1b8;
        param_5 = pfVar15;
      }
      if (lStack_190 != 0) {
        pub_1406abac0((byte *)pfStack_168,lStack_190 << 2,4);
      }
      uVar19 = uStack_1e0;
      lVar22 = lStack_1e8;
    } while (lStack_1e8 != 0x70);
    if (lStack_200 != 0) {
      pub_1406abac0((byte *)pfStack_160,lStack_200 << 2,4);
    }
  }
  return;
}

