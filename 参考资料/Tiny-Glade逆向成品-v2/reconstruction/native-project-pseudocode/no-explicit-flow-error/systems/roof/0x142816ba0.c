// VA 0x142816ba0, PDB extent 4728 bytes
// system_roof::utils::assemble_circular_roof::assemble_circular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/utils/assemble_circular_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::utils::assemble_circular_roof::assemble_circular_roof<system_roof::visual::assemble_roof_tiles::assemble_roof_tiles::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/utils/assemble_circular_roof.rs
   Extent: 4728 */

void pdb_142816ba0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte param_4,
                  undefined8 param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 in_RDX;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 uVar38;
  undefined *puVar37;
  longlong lStack_2d0;
  byte *pbStack_2c8;
  longlong lStack_2b8;
  byte *pbStack_2b0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  longlong lStack_248;
  byte *pbStack_240;
  ulonglong uStack_238;
  longlong lStack_230;
  byte *pbStack_228;
  float fStack_218;
  float afStack_20c [3];
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_190;
  undefined4 uStack_18c;
  byte *pbStack_188;
  ulonglong uStack_180;
  float fStack_178;
  uint uStack_174;
  float fStack_170;
  int iStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  int iStack_104;
  undefined8 uStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_158 = 0;
  uStack_14c = param_3;
  pdb_140b73b80(&uStack_138);
  uVar13 = pdb_140b73b40(&uStack_138);
  pdb_140b772d0(&lStack_2d0,in_RDX);
  uVar14 = pdb_140b77a00(in_RDX);
  puVar37 = (undefined *)CONCAT44(uVar38,uVar14);
  pdb_140b768b0(&lStack_248,&lStack_2d0,uVar13,param_2,puVar37);
  fVar15 = (float)pub_142e329c0(fStack_218 / _DAT_14359cbd8);
  if (fVar15 <= _DAT_142e37830) {
    fVar15 = _DAT_142e37830;
  }
  iVar1 = (int)fVar15;
  if (_DAT_142e382cc < fVar15) {
    iVar1 = 0x7fffffff;
  }
  if (NAN(fVar15)) {
    iVar1 = 0;
  }
  fStack_168 = fVar15 + _DAT_142e36f34;
  uStack_268 = *param_1;
  uStack_260 = 0;
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0xc);
  fStack_170 = (fStack_218 / fVar15) * _DAT_14359cbdc;
  uStack_174 = -iVar1;
  iVar9 = 0;
  fVar15 = _DAT_142e36f28;
  iVar10 = 0;
  do {
    uVar13 = (undefined4)((ulonglong)puVar37 >> 0x20);
    iVar3 = iVar10;
    if (iVar10 < iVar1) {
      iVar3 = iVar1;
    }
    uVar11 = -iVar10;
    do {
      if (-iVar3 == uVar11) {
        if (lStack_248 != 0) {
          pub_1406abac0(pbStack_240,lStack_248 << 3,4);
        }
        if (lStack_230 != 0) {
          pub_1406abac0(pbStack_228,lStack_230 << 2,4);
        }
        if (lStack_2d0 != 0) {
          pub_1406abac0(pbStack_2c8,lStack_2d0 << 3,4);
        }
        if (lStack_2b8 != 0) {
          pub_1406abac0(pbStack_2b0,lStack_2b8 << 2,4);
        }
        return;
      }
      uVar11 = uVar11 - 1;
    } while (uStack_174 == uVar11);
    fStack_190 = (float)(int)~uVar11 / fStack_168;
    if ((fStack_190 < 0.0) || (fVar15 < fStack_190)) {
      uStack_138 = &fStack_190;
      uStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14359b36c,&uStack_138,&UNK_14359d038);
    }
    auStack_1d8 = ZEXT416((uint)fStack_190);
    uVar4 = pdb_142802660(&lStack_248);
    pbVar2 = pbStack_240;
    uVar8 = (ulonglong)uVar4;
    if (uStack_238 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar8,uStack_238,&UNK_14359b2b0);
    }
    uStack_140 = uStack_238;
    if (uStack_238 <= uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar8 + 1,uStack_238,&UNK_14359b2c8);
    }
    fVar28 = *(float *)(pbStack_240 + uVar8 * 8);
    fVar17 = *(float *)(pbStack_240 + uVar8 * 8 + 8);
    fVar18 = (float)auStack_1d8._0_4_;
    uVar4 = pdb_142802660(&lStack_248);
    uVar8 = (ulonglong)uVar4;
    if (uStack_140 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar8,uStack_140,&UNK_14359b2b0);
    }
    if (uStack_140 <= uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar8 + 1,uStack_140,&UNK_14359b2c8);
    }
    fVar19 = *(float *)(pbVar2 + uVar8 * 8 + 4);
    fVar29 = *(float *)(pbVar2 + uVar8 * 8 + 0xc);
    fVar16 = (float)pdb_140b771f0(in_RDX);
    uStack_138 = (float *)CONCAT44(fVar18 * (float)auStack_1d8._0_4_ + uStack_268._4_4_,
                                   fVar16 * (float)auStack_1d8._0_4_ + (float)uStack_268);
    pdb_140df4540(&uStack_200,&uStack_138,
                  fVar29 * extraout_XMM0_Da_00 + (fVar15 - extraout_XMM0_Da_00) * fVar19);
    fVar28 = (fVar15 - extraout_XMM0_Da) * fVar28 + fVar17 * extraout_XMM0_Da;
    pdb_140def2a0(auStack_1e8,0,0,fVar28,CONCAT44(uVar13,uStack_164));
    fVar17 = (float)pdb_140de8220(_DAT_143007998,_DAT_142e37988,fVar28);
    fVar28 = 0.0;
    if (0.0 <= fVar17) {
      fVar28 = fVar17;
    }
    fVar17 = fVar15;
    if (fVar28 <= fVar15) {
      fVar17 = fVar28;
    }
    fVar29 = fVar17 * _DAT_142e36f50;
    fVar18 = (float)pdb_140deff30(auStack_1e8);
    fVar19 = (float)pdb_140e02880(&uStack_158);
    fVar29 = fVar29 + (fVar15 - fVar17);
    fVar28 = (float)pub_142e329c0(fVar18 / (fVar29 * _DAT_142e36f50));
    if (fVar28 <= _DAT_142e37834) {
      fVar28 = _DAT_142e37834;
    }
    iVar10 = (int)fVar28;
    if (_DAT_142e382cc < fVar28) {
      iVar10 = 0x7fffffff;
    }
    if (NAN(fVar28)) {
      iVar10 = 0;
    }
    fVar19 = fVar19 * _DAT_142f57bcc;
    fVar28 = (float)pub_142e32b30(fVar19);
    fVar17 = (float)pub_142e329e0(fVar19);
    puVar37 = &UNK_14359d050;
    pdb_140de8290(&fStack_190,(longlong)iVar10 + 1,(fVar29 * 0.0) / fVar18,&uStack_158,
                  &UNK_14359d050);
    uVar8 = uStack_180;
    iStack_160 = iVar1;
    if (uStack_180 < 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14359d068,0x23,&UNK_14359d090);
    }
    iStack_15c = -uVar11;
    fStack_250 = (float)((uint)fVar28 ^ _DAT_142e37820);
    iStack_16c = (uVar11 == 0xffffffff | param_4) + 1;
    uVar12 = 0;
    fStack_258 = fVar17;
    fStack_254 = fVar28;
    fStack_24c = fVar17;
    uStack_1f0 = in_RDX;
    bStack_f1 = param_4;
    while (uVar12 < uVar8 - 1) {
      if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar8,&UNK_14359d0c0);
      }
      fVar28 = *(float *)(pbStack_188 + uVar12 * 4);
      uStack_148 = CONCAT44(uStack_148._4_4_,fVar28);
      if ((fVar28 < 0.0) || (fVar15 < fVar28)) {
        uStack_138 = (float *)&uStack_148;
        uStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14359b36c,&uStack_138,&UNK_14359d0d8);
      }
      uVar12 = uVar12 + 1;
      if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar8,&UNK_14359d0f0);
      }
      fVar17 = *(float *)(pbStack_188 + uVar12 * 4);
      uStack_148 = CONCAT44(uStack_148._4_4_,fVar17);
      if ((fVar17 < 0.0) || (fVar15 < fVar17)) {
        uStack_138 = (float *)&uStack_148;
        uStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14359b36c,&uStack_138,&UNK_14359d108);
      }
      fVar15 = fVar28;
      fVar19 = (float)pdb_140def2c0(auStack_1e8);
      fVar18 = fVar17;
      fVar29 = (float)pdb_140def2c0(auStack_1e8);
      fVar16 = fVar15 * fStack_250 + fVar19 * fStack_258;
      fVar19 = fVar15 * fStack_24c + fVar19 * fStack_254;
      fVar26 = fVar18 * fStack_250 + fVar29 * fStack_258;
      fVar29 = fVar18 * fStack_24c + fVar29 * fStack_254;
      uStack_148 = CONCAT44((fVar19 + fVar29) * _UNK_142e36f64,(fVar16 + fVar26) * _DAT_142e36f60);
      pdb_140df4520(&uStack_138,&uStack_148);
      uVar6 = uStack_138;
      uStack_298 = uStack_200;
      uStack_290 = 0;
      auStack_278 = ZEXT416(uStack_1f8);
      auStack_288 = ZEXT416((uint)(float)uStack_130);
      fVar18 = (float)pdb_140e02880(&uStack_158);
      fVar27 = (_DAT_142e36f28 - fVar18) * _DAT_142e3c670;
      fVar18 = fVar18 * _DAT_142e37990;
      uVar4 = pdb_142802660(&lStack_248,auStack_1d8._0_4_);
      fVar15 = _DAT_142e36f28;
      uVar5 = (ulonglong)uVar4;
      if (uStack_140 <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar5 + 1,uStack_140,&UNK_14359b2e0);
      }
      fVar21 = *(float *)(pbVar2 + uVar5 * 8 + 8) - *(float *)(pbVar2 + uVar5 * 8);
      fVar22 = *(float *)(pbVar2 + uVar5 * 8 + 0xc) - *(float *)(pbVar2 + uVar5 * 8 + 4);
      fVar20 = _DAT_142e36f28 / SQRT(fVar22 * fVar22 + fVar21 * fVar21);
      fVar20 = (float)pub_142e32990((fVar20 * fVar22) / (fVar21 * fVar20));
      fVar28 = (fVar28 + fVar17) * _DAT_142e36f50;
      fStack_178 = fVar28;
      if ((fVar28 < 0.0) || (fVar15 < fVar28)) {
        uStack_138 = &fStack_178;
        uStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14359b36c,&uStack_138,&UNK_14359d0a8);
      }
      fVar15 = (float)pdb_140def5e0(auStack_1e8);
      uStack_138 = (float *)CONCAT44(fVar28 * fStack_24c + fVar15 * fStack_254,
                                     fVar28 * fStack_250 + fVar15 * fStack_258);
      pdb_140df4520(afStack_20c,&uStack_138);
      fVar15 = afStack_20c[0];
      uStack_1c8 = uVar6;
      uStack_1c0 = 0;
      fVar35 = (float)afStack_20c._4_8_;
      fVar36 = SUB84(afStack_20c._4_8_,4);
      fVar34 = afStack_20c[0] * _DAT_142f61040 + fVar36 * 0.0;
      fVar21 = fVar36 * _UNK_142f61044 + fVar35 * 0.0;
      fVar17 = (_DAT_14359cff8 - fVar20) * _DAT_142e36f38;
      fVar28 = (float)pub_142e32b30(fVar17);
      fVar17 = (float)pub_142e329e0(fVar17);
      fVar33 = fVar15 - fVar35 * 0.0;
      fVar22 = fVar21 * fVar28;
      fVar23 = fVar34 * fVar28;
      fVar28 = fVar33 * fVar28;
      fVar24 = fVar28 * fVar28;
      fVar25 = fVar17 * fVar17;
      fVar32 = fVar23 * fVar23 + fVar22 * fVar22;
      fVar20 = fVar36 * fVar28 + fVar35 * fVar23 + fVar15 * fVar22;
      fVar20 = fVar20 + fVar20;
      fVar17 = fVar17 + fVar17;
      fVar30 = fVar17 * (fVar23 * fVar36 - fVar35 * fVar28) +
               fVar20 * fVar22 + (fVar25 - (fVar32 + fVar24)) * fVar15;
      fVar31 = fVar17 * (fVar28 * fVar15 - fVar36 * fVar22) +
               fVar20 * fVar23 + (fVar25 - (fVar32 + fVar24)) * fVar35;
      fVar20 = fVar17 * (fVar22 * fVar35 - fVar15 * fVar23) +
               fVar20 * fVar28 + (fVar25 - (fVar32 + fVar24)) * fVar36;
      fVar15 = fVar20 * fVar34 - fVar33 * fVar31;
      fVar28 = fVar30 * fVar33 - fVar21 * fVar20;
      fVar17 = fVar21 * fVar31 - fVar34 * fVar30;
      if (fVar17 <= 0.0) {
        fVar22 = fVar31 - fVar21;
        if (fVar22 <= 0.0) {
          fVar22 = (_DAT_142e36f28 - fVar17) - fVar22;
          uStack_130._4_4_ = _DAT_142e36f50 / SQRT(fVar22);
          fVar17 = fVar22 * uStack_130._4_4_;
          fVar22 = (fVar34 + fVar30) * uStack_130._4_4_;
          uStack_130._0_4_ = (fVar15 + fVar33) * uStack_130._4_4_;
          uStack_130._4_4_ = (fVar20 - fVar28) * uStack_130._4_4_;
        }
        else {
          fVar22 = fVar22 + (_DAT_142e36f28 - fVar17);
          uStack_130._4_4_ = _DAT_142e36f50 / SQRT(fVar22);
          fVar17 = uStack_130._4_4_ * (fVar34 + fVar30);
          fVar22 = uStack_130._4_4_ * fVar22;
          uStack_130._0_4_ = uStack_130._4_4_ * (fVar28 + fVar20);
          uStack_130._4_4_ = uStack_130._4_4_ * (fVar15 - fVar33);
        }
      }
      else {
        uStack_130._4_4_ = fVar31 + fVar21;
        if (uStack_130._4_4_ <= 0.0) {
          uStack_130._4_4_ = (fVar17 + _DAT_142e36f28) - uStack_130._4_4_;
          fVar23 = _DAT_142e36f50 / SQRT(uStack_130._4_4_);
          fVar17 = fVar23 * (fVar33 + fVar15);
          fVar22 = fVar23 * (fVar20 + fVar28);
          uStack_130._0_4_ = uStack_130._4_4_ * fVar23;
          uStack_130._4_4_ = fVar23 * (fVar34 - fVar30);
        }
        else {
          uStack_130._4_4_ = uStack_130._4_4_ + fVar17 + _DAT_142e36f28;
          fVar23 = _DAT_142e36f50 / SQRT(uStack_130._4_4_);
          fVar17 = (fVar20 - fVar28) * fVar23;
          fVar22 = (fVar15 - fVar33) * fVar23;
          uStack_130._0_4_ = (fVar34 - fVar30) * fVar23;
          uStack_130._4_4_ = uStack_130._4_4_ * fVar23;
        }
      }
      fVar15 = (float)uStack_1c8;
      fVar28 = uStack_1c8._4_4_;
      uStack_138 = (float *)CONCAT44(fVar22,fVar17);
      uVar6 = pdb_1424e5b90(&uStack_138);
      fVar16 = fVar16 - fVar26;
      fVar19 = fVar19 - fVar29;
      fVar19 = SQRT(fVar19 * fVar19 + fVar16 * fVar16);
      fVar29 = (fVar18 + fVar27) * fStack_170;
      uStack_138 = (float *)CONCAT44(fVar29,fVar19);
      uStack_130 = (code *)CONCAT44(uStack_130._4_4_,0x3dcccccd);
      uVar7 = pdb_140df4560(&uStack_138);
      fVar17 = (float)pdb_140e02880(&uStack_158);
      fVar18 = fVar17 * _DAT_142e3787c + (float)auStack_1d8._0_4_;
      fVar17 = 0.0;
      if (0.0 <= fVar18) {
        fVar17 = fVar18;
      }
      fVar18 = _DAT_142e36f28;
      if (fVar17 <= _DAT_142e36f28) {
        fVar18 = fVar17;
      }
      uStack_11a = pdb_141e3c420(fVar18);
      fVar15 = fVar15 + (float)uStack_298;
      fVar28 = fVar28 + uStack_298._4_4_;
      fVar17 = (float)auStack_288._0_4_ + (float)auStack_278._0_4_;
      fVar18 = _UNK_14300b15c + _UNK_142e4e65c;
      uStack_138 = (float *)CONCAT44(fVar28,fVar15);
      uStack_130 = (code *)(ulonglong)(uint)fVar17;
      uStack_128 = 0x7bff00003c000000;
      uStack_120 = (undefined4)uVar7;
      uStack_11c = (undefined2)((ulonglong)uVar7 >> 0x20);
      uStack_110 = uStack_14c;
      uStack_10c = 0;
      uStack_100 = CONCAT44(iStack_16c,1);
      uStack_118 = uVar6;
      iStack_104 = iVar9;
      pdb_142817e20(param_5,&uStack_138);
      if (uVar11 == 0xffffffff) {
        fVar26 = fVar30 * fVar29 * _DAT_143314dc0;
        fVar27 = fVar20 * fVar29 * _UNK_143314dc8;
        fVar20 = _DAT_142e36f28 * _UNK_142e378e4 * _UNK_143314dcc;
        fVar16 = fVar15 + fVar26;
        fVar28 = fVar28 + fVar31 * fVar29 * _UNK_143314dc4;
        fVar29 = fVar17 + fVar27;
        uStack_138 = (float *)CONCAT44(fVar17 - fVar27,fVar15 - fVar26);
        pdb_140df4540(&fStack_1a0,&uStack_138,fVar28);
        fVar15 = fStack_1a0 - fVar16;
        fVar17 = fStack_198 - fVar29;
        fVar15 = SQRT(fVar17 * fVar17 +
                      (fStack_19c - fVar28) * (fStack_19c - fVar28) + fVar15 * fVar15);
        if (_DAT_142e3b1d8 < fVar15) {
          uStack_1a4 = 0x3dcccccd;
          fVar27 = fStack_1a0 * _DAT_143314dc0;
          fVar22 = fStack_19c * _UNK_143314dc4;
          fVar23 = fStack_198 * _UNK_143314dc8;
          fVar24 = _DAT_142e36f28 * _UNK_143314dcc;
          fVar16 = fVar16 * _DAT_143035ef0;
          fVar28 = fVar28 * _UNK_143035ef4;
          fVar29 = fVar29 * _UNK_143035ef8;
          fVar26 = (fVar18 + fVar20) * _UNK_143035efc;
          fVar17 = fVar33 - fVar34 * _DAT_142e378e0;
          fVar18 = (fVar33 * _DAT_142e377f0 + fVar21 * 0.0) - fVar21 * _UNK_142e378e4;
          fVar21 = fVar34 * _DAT_142e378e0 - fVar21;
          if (fVar18 <= 0.0) {
            fVar20 = _DAT_142e36f50 / SQRT(_DAT_143277eb0 - fVar18);
            fVar25 = fVar20 * (_DAT_143277eb0 - fVar18);
            fVar17 = fVar20 * (fVar17 + fVar34);
            fVar18 = fVar20 * (fVar33 + _UNK_143277eb8);
            fVar20 = fVar20 * (fVar21 + _UNK_143277ebc);
          }
          else {
            fVar20 = _DAT_142e36f50 / SQRT(_DAT_142e36f28 + fVar18);
            fVar25 = fVar20 * (fVar34 + fVar17);
            fVar17 = fVar20 * (_DAT_142e36f28 + fVar18);
            fVar18 = (fVar21 + _DAT_142e36f28) * fVar20;
            fVar20 = fVar20 * (0.0 - fVar33);
          }
          uStack_138 = (float *)CONCAT44(fVar17,fVar25);
          uStack_130 = (code *)CONCAT44(fVar20,fVar18);
          fStack_1ac = fVar19;
          fStack_1a8 = fVar15;
          uVar6 = pdb_1424e5b90(&uStack_138);
          uVar7 = pdb_140df4560(&fStack_1ac);
          uStack_11a = pdb_141e3c420(0);
          uStack_138 = (float *)CONCAT44(fVar28 + fVar22,fVar16 + fVar27);
          uStack_130 = (code *)CONCAT44(fVar26 + fVar24,fVar29 + fVar23);
          uStack_128 = 0x7bff00003c000000;
          uStack_120 = (undefined4)uVar7;
          uStack_11c = (undefined2)((ulonglong)uVar7 >> 0x20);
          uStack_110 = uStack_14c;
          uStack_10c = 0;
          uStack_100 = 0x200000001;
          uStack_118 = uVar6;
          iStack_104 = iVar9;
          pdb_142817e20(param_5,&uStack_138);
        }
      }
      iVar9 = iVar9 + 1;
      fVar15 = _DAT_142e36f28;
    }
    in_RDX = uStack_1f0;
    iVar10 = iStack_15c;
    iVar1 = iStack_160;
    param_4 = bStack_f1;
    if (CONCAT44(uStack_18c,fStack_190) != 0) {
      pub_1406abac0(pbStack_188,CONCAT44(uStack_18c,fStack_190) << 2,4);
      in_RDX = uStack_1f0;
      iVar10 = iStack_15c;
      iVar1 = iStack_160;
      param_4 = bStack_f1;
    }
  } while( true );
}

