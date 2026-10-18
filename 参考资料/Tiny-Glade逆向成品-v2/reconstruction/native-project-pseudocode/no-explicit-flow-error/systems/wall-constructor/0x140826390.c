// VA 0x140826390, PDB extent 4035 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::plan_cross_brace
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::plan_cross_brace
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 4035 */

void pdb_140826390(longlong *param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *arg0;
  byte *arg0_00;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  float fStack_2e8;
  float fStack_2e4;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *apbStack_2b8 [2];
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  undefined8 uStack_268;
  byte *pbStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  byte *pbStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte *pbStack_188;
  float fStack_180;
  float fStack_17c;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  byte *pbStack_100;
  char cStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar19 = param_2[1];
  fVar15 = param_2[4];
  fStack_130 = param_2[7];
  fStack_104 = param_2[0xf];
  if (_DAT_143009d08 <= fStack_104) {
    fVar16 = fVar19 - param_2[9];
    fStack_180 = fVar15 - param_2[10];
    if (_DAT_142f7737c <= fVar16) {
      fVar16 = _DAT_142f7737c;
    }
    if (fVar16 <= fStack_180) {
      fStack_180 = fVar16;
    }
  }
  else {
    fStack_180 = fStack_130 - param_2[0xb];
  }
  lStack_178 = 0;
  lStack_170 = 4;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 8;
  pbStack_150 = (byte *)0x0;
  lStack_148 = 0;
  lStack_140 = 4;
  lStack_138 = 0;
  if (_DAT_142e37830 < fStack_180) {
    fStack_108 = (float)pdb_141473db0(_DAT_142e3783c);
    lVar12 = lStack_168;
    fVar16 = *param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    fVar1 = param_2[5];
    fStack_110 = fVar19 + _DAT_143009d0c + _DAT_143009d10;
    fStack_10c = fVar15 + _DAT_143009d0c + _DAT_143009d10;
    if (_DAT_143009d08 <= fStack_104) {
      if (lStack_168 == lStack_178) {
        pdb_142d8d940(&lStack_178);
      }
      lVar11 = lVar12 * 0x2c;
      *(undefined4 *)(lStack_170 + lVar11) = 0;
      *(float *)(lStack_170 + 0x10 + lVar11) = fVar16;
      *(float *)(lStack_170 + 0x14 + lVar11) = fStack_110;
      *(undefined8 *)(lStack_170 + 0x18 + lVar11) = uVar2;
      *(float *)(lStack_170 + 0x20 + lVar11) = fStack_10c;
      *(float *)(lStack_170 + 0x24 + lVar11) = fVar1;
      *(undefined4 *)(lStack_170 + 0x28 + lVar11) = 0x3e2e147b;
      lStack_168 = lVar12 + 1;
    }
    cStack_f2 = param_3 == 0;
    cVar13 = fStack_104 < _DAT_143009d08 || !(bool)cStack_f2;
    fStack_17c = _DAT_142e36f28 - fStack_108;
    uVar14 = 0;
    cStack_f1 = cVar13;
    for (fVar19 = _DAT_142e37900; fVar19 < fStack_180; fVar19 = fVar19 + _DAT_142e37adc) {
      fVar15 = (float)(uVar14 - (uVar14 != 0));
      fVar17 = fVar15 + fVar15 + (float)uVar14 + (float)uVar14;
      fVar15 = fVar17 * 0.0;
      fVar20 = fStack_110 - fVar17;
      fStack_2e8 = (float)uVar2;
      fStack_2e4 = (float)((ulonglong)uVar2 >> 0x20);
      fStack_2e8 = fStack_2e8 - fVar15;
      fStack_2e4 = fStack_2e4 - fVar15;
      fVar17 = fStack_10c - fVar17;
      fVar21 = fVar16 - fVar15;
      fVar15 = fVar1 - fVar15;
      fVar18 = fVar20 + _DAT_142e37890;
      fVar22 = fVar17 + _DAT_142e37890;
      if (cVar13 == '\0') {
        uStack_1b8 = (byte *)CONCAT44(fVar18,fVar21);
        pbStack_1b0 = (byte *)CONCAT44(pbStack_1b0._4_4_,fStack_2e8);
        uStack_248 = (byte *)CONCAT44(fVar17,fStack_2e4);
        pbStack_240 = (byte *)CONCAT44(pbStack_240._4_4_,fVar15);
        pdb_141473cd0(&pbStack_2c8,&uStack_1b8,&uStack_248,_DAT_142e3783c);
        pbVar4 = apbStack_2b8[0];
        if (SBORROW8(0,(longlong)pbStack_2c8)) {
          cVar10 = '\0';
          bVar3 = false;
        }
        else {
          pbStack_100 = pbStack_2c8;
          pbStack_128 = pbStack_2c0;
          uStack_1b8 = (byte *)CONCAT44(fVar22,fStack_2e4);
          pbStack_1b0 = (byte *)CONCAT44(pbStack_1b0._4_4_,fVar15);
          uStack_248 = (byte *)CONCAT44(fVar20,fVar21);
          pbStack_240 = (byte *)CONCAT44(pbStack_240._4_4_,fStack_2e8);
          pdb_141473cd0(&pbStack_2c8,&uStack_1b8,&uStack_248,_DAT_142e3783c);
          pbVar5 = apbStack_2b8[0];
          arg0 = pbStack_2c0;
          pbVar7 = pbStack_2c8;
          if (SBORROW8(0,(longlong)pbStack_2c8)) {
            if (pbStack_100 != (byte *)0x0) {
              pub_1406abac0(pbStack_128,(longlong)pbStack_100 * 0xc,4);
            }
            cVar10 = '\0';
            bVar3 = false;
          }
          else {
            uStack_1c0 = 0;
            pdb_1408281d0(&uStack_1b8,pbStack_128,pbVar4);
            pbStack_218 = pbStack_188;
            uStack_228 = uStack_198;
            pbVar4 = uStack_228;
            pbStack_238 = pbStack_1a8;
            pbStack_230 = pbStack_1a0;
            uStack_248 = uStack_1b8;
            pbStack_240 = pbStack_1b0;
            pbStack_298 = pbStack_188;
            uStack_228._0_4_ = SUB84(uStack_198,0);
            uStack_228._4_4_ = (undefined4)((ulonglong)uStack_198 >> 0x20);
            uStack_2a8 = (undefined4)uStack_228;
            uStack_2a4 = uStack_228._4_4_;
            uStack_2a0 = uStack_190;
            uStack_29c = uStack_18c;
            apbStack_2b8[0] = pbStack_1a8;
            apbStack_2b8[1] = pbStack_1a0;
            pbStack_2c8 = uStack_1b8;
            pbStack_2c0 = pbStack_1b0;
            uStack_1c0 = 1;
            uStack_228 = pbVar4;
            pdb_1408281d0(&uStack_1b8,arg0,pbVar5);
            pbStack_270 = uStack_198;
            pbStack_288 = pbStack_1b0;
            pbStack_290 = uStack_1b8;
            arg0_00 = pbStack_2c0;
            pbVar8 = pbStack_2c8;
            uVar9 = uStack_198._4_4_;
            uStack_248 = uStack_1b8;
            pbStack_240 = pbStack_1b0;
            pbStack_238 = pbStack_1a8;
            pbStack_230 = pbStack_1a0;
            uStack_228 = uStack_198;
            uStack_220 = (byte *)CONCAT44(uStack_18c,uStack_190);
            pbStack_218 = pbStack_188;
            pbStack_260 = pbStack_188;
            uVar6 = SUB84(uStack_198,0);
            uStack_268 = CONCAT44(uStack_18c,uStack_190);
            pbStack_280 = pbStack_1a8;
            pbStack_278 = pbStack_1a0;
            uStack_198 = pbStack_298;
            pbVar4 = (byte *)CONCAT44(uStack_2a4,uStack_2a8);
            pbVar5 = (byte *)CONCAT44(uStack_29c,uStack_2a0);
            uStack_1b8 = apbStack_2b8[0];
            pbStack_1b0 = apbStack_2b8[1];
            bVar3 = !SBORROW8(0,(longlong)pbStack_290) && !SBORROW8(0,(longlong)pbStack_2c8);
            if (!SBORROW8(0,(longlong)pbStack_290) && !SBORROW8(0,(longlong)pbStack_2c8)) {
              pbStack_208 = pbStack_298;
              uStack_228 = apbStack_2b8[0];
              uStack_220 = apbStack_2b8[1];
              pbStack_1d0 = pbStack_188;
              uStack_358 = SUB84(pbStack_1a8,0);
              uStack_354 = (undefined4)((ulonglong)pbStack_1a8 >> 0x20);
              uStack_350 = SUB84(pbStack_1a0,0);
              uStack_34c = (undefined4)((ulonglong)pbStack_1a0 >> 0x20);
              uStack_1dc = uVar9;
              uStack_1d8 = uStack_190;
              uStack_1d4 = uStack_18c;
              uStack_1f0 = uStack_358;
              uStack_1ec = uStack_354;
              uStack_1e8 = uStack_350;
              uStack_1e4 = uStack_34c;
              pbStack_238 = pbStack_2c8;
              pbStack_230 = pbStack_2c0;
              pbStack_200 = pbStack_290;
              pbStack_1f8 = pbStack_288;
              uStack_248 = (byte *)0x0;
              pbStack_240 = (byte *)0x2;
              pbStack_218 = pbVar4;
              pbStack_210 = pbVar5;
              uStack_1e0 = uVar6;
              pbStack_1a8 = pbVar4;
              pbStack_1a0 = pbVar5;
              if ((ulonglong)(lStack_160 - (longlong)pbStack_150) < 2) {
                pdb_142d7f1b0(&lStack_160,pbStack_150,2,8,0x38);
              }
              pbVar8 = pbStack_150;
              pbVar5 = pbStack_240;
              pbVar4 = uStack_248;
              pbStack_2c8 = uStack_248;
              pbStack_2c0 = pbStack_240;
              uStack_258 = CONCAT44(uStack_1d4,uStack_1d8);
              pbStack_250 = pbStack_1d0;
              uStack_268 = CONCAT44(uStack_1e4,uStack_1e8);
              pbStack_260 = (byte *)CONCAT44(uStack_1dc,uStack_1e0);
              pbStack_270 = (byte *)CONCAT44(uStack_1ec,uStack_1f0);
              pbStack_278 = pbStack_1f8;
              pbStack_288 = pbStack_208;
              pbStack_280 = pbStack_200;
              pbStack_298 = pbStack_218;
              pbStack_290 = pbStack_210;
              uStack_2a8 = (undefined4)uStack_228;
              uStack_2a4 = uStack_228._4_4_;
              uStack_2a0 = (undefined4)uStack_220;
              uStack_29c = uStack_220._4_4_;
              apbStack_2b8[0] = pbStack_238;
              apbStack_2b8[1] = pbStack_230;
              if ((longlong)pbStack_240 - (longlong)uStack_248 != 0) {
                pub_142e32760(lStack_158 + (longlong)pbStack_150 * 0x38,
                              apbStack_2b8 + (longlong)uStack_248 * 7,
                              ((longlong)pbStack_240 - (longlong)uStack_248) * 0x38);
                pbStack_150 = pbVar5 + ((longlong)pbVar8 - (longlong)pbVar4);
              }
            }
            else {
              pbStack_1a8 = pbVar4;
              pbStack_1a0 = pbVar5;
              if (((ulonglong)pbStack_290 & 0x7fffffffffffffff) != 0) {
                pub_1406abac0(pbStack_288,(longlong)pbStack_290 * 0x30,4);
              }
              if (((ulonglong)pbVar8 & 0x7fffffffffffffff) != 0) {
                pub_1406abac0(arg0_00,(longlong)pbVar8 * 0x30,4);
              }
            }
            if (pbStack_100 != (byte *)0x0) {
              pub_1406abac0(pbStack_128,(longlong)pbStack_100 * 0xc,4);
            }
            if (pbVar7 != (byte *)0x0) {
              pub_1406abac0(arg0,(longlong)pbVar7 * 0xc,4);
            }
            cVar10 = '\x01';
            cVar13 = cStack_f1;
          }
        }
      }
      else {
        bVar3 = false;
        cVar10 = cStack_f2;
      }
      fStack_118 = fVar22 * _DAT_142e36f50 + fVar20 * _DAT_142e36f50;
      fStack_11c = fStack_2e4 * _DAT_142e36f60 + fVar21 * _DAT_142e36f60;
      fStack_114 = fStack_2e8 * _UNK_142e36f64 + fVar15 * _UNK_142e36f64;
      if (cVar10 != '\0') {
        pbStack_2c8 = (byte *)CONCAT44(fStack_114,fStack_11c);
        pdb_140df4540(&fStack_11c,&pbStack_2c8);
      }
      if (_DAT_143009d08 <= fStack_104 && !bVar3) {
        if ((ulonglong)(lStack_178 - lStack_168) < 2) {
          pdb_142d7f1b0(&lStack_178,lStack_168,2,4,0x2c);
        }
        lVar12 = lStack_168 * 0x2c;
        *(undefined4 *)(lStack_170 + lVar12) = 0;
        *(float *)(lStack_170 + 0x10 + lVar12) = fVar21;
        *(float *)(lStack_170 + 0x14 + lVar12) = fVar20;
        *(ulonglong *)(lStack_170 + 0x18 + lVar12) = CONCAT44(fStack_2e4,fStack_2e8);
        *(float *)(lStack_170 + 0x20 + lVar12) = fVar22;
        *(float *)(lStack_170 + 0x24 + lVar12) = fVar15;
        *(undefined8 *)(lStack_170 + 0x28 + lVar12) = 0x3e2e147b;
        *(float *)(lStack_170 + 0x3c + lVar12) = fStack_2e4;
        *(float *)(lStack_170 + 0x40 + lVar12) = fVar17;
        *(float *)(lStack_170 + 0x44 + lVar12) = fVar15;
        *(float *)(lStack_170 + 0x48 + lVar12) = fVar21;
        *(float *)(lStack_170 + 0x4c + lVar12) = fVar18;
        *(float *)(lStack_170 + 0x50 + lVar12) = fStack_2e8;
        *(undefined4 *)(lStack_170 + 0x54 + lVar12) = 0x3e2e147b;
        lStack_168 = lStack_168 + 2;
      }
      lVar12 = lStack_138;
      if (lStack_138 == lStack_148) {
        pdb_142db7820(&lStack_148);
      }
      *(float *)(lStack_140 + 8 + lVar12 * 0xc) = fStack_114;
      *(ulonglong *)(lStack_140 + lVar12 * 0xc) = CONCAT44(fStack_118,fStack_11c);
      lStack_138 = lVar12 + 1;
      uVar14 = uVar14 + 1;
    }
  }
  param_1[8] = lStack_138;
  param_1[9] = CONCAT44(uStack_12c,fStack_130);
  param_1[6] = lStack_148;
  param_1[7] = lStack_140;
  param_1[4] = lStack_158;
  param_1[5] = (longlong)pbStack_150;
  param_1[2] = lStack_168;
  param_1[3] = lStack_160;
  *param_1 = lStack_178;
  param_1[1] = lStack_170;
  return;
}

