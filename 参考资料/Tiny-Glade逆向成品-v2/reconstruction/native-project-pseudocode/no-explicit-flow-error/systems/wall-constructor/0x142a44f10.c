// VA 0x142a44f10, PDB extent 2900 bytes
// system_wall_constructor::construct_elevation_supports::util_cross_brick_pillar::construct_crossbrick_pillar<ref_mut$<system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_wooden_pillar_w_stone_base::closure_env$1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_cross_brick_pillar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::util_cross_brick_pillar::construct_crossbrick_pillar<ref_mut$<system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_wooden_pillar_w_stone_base::closure_env$1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_cross_brick_pillar.rs
   Extent: 2900 */

void pdb_142a44f10(float param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined8 *param_9,
                  undefined8 param_10,undefined4 param_11,char param_12)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong uVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
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
  float fVar37;
  undefined *puVar38;
  undefined1 auStack_2f0 [24];
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  int iStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  byte *pbStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  byte *pbStack_118;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar32 = _DAT_142e3787c * param_1;
  uStack_10c = param_2;
  uStack_108 = param_3;
  fStack_100 = param_1;
  fVar23 = (float)pub_142e329c0((param_4 - param_5) / (_DAT_142e3798c * param_1));
  uVar19 = 0;
  if (0.0 <= fVar23) {
    uVar19 = (longlong)(fVar23 - _DAT_142e36f2c) & (longlong)fVar23 >> 0x3f | (longlong)fVar23;
  }
  uVar21 = 0xffffffffffffffff;
  if (fVar23 <= _DAT_142e36f30) {
    uVar21 = uVar19;
  }
  uVar19 = 3;
  if (3 < uVar21) {
    uVar19 = uVar21;
  }
  puVar38 = &UNK_143624070;
  pdb_140de8290(&fStack_1d8,uVar19,fVar32 / (param_4 - param_5),param_6,&UNK_143624070);
  pbVar1 = (byte *)CONCAT44(fStack_1cc,fStack_1d0);
  uVar19 = CONCAT44(fStack_1c4,fStack_1c8);
  uStack_120 = uVar19 * 4;
  if (uVar19 == 0) {
    pbVar20 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar20 = pub_1406abab0(uStack_120,4);
    fVar37 = _UNK_142e3c64c;
    fVar36 = _UNK_142e3c648;
    fVar32 = _UNK_142e3c644;
    fVar23 = _DAT_142e3c640;
    if (pbVar20 == (byte *)0x0) {
      pdb_142dc7e2a(4,uStack_120);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (uVar19 < 8) {
      uVar21 = 0;
      fVar23 = _DAT_142e36f28;
    }
    else {
      uVar21 = uVar19 & 0xfffffffffffffff8;
      uVar22 = 0;
      do {
        pfVar3 = (float *)(pbVar1 + uVar22 * 4);
        fVar26 = pfVar3[1];
        fVar24 = pfVar3[2];
        fVar25 = pfVar3[3];
        pfVar4 = (float *)(pbVar1 + uVar22 * 4 + 0x10);
        fVar28 = *pfVar4;
        fVar29 = pfVar4[1];
        fVar27 = pfVar4[2];
        fVar31 = pfVar4[3];
        pfVar4 = (float *)(pbVar20 + uVar22 * 4);
        *pfVar4 = *pfVar3 * param_4 + (fVar23 - *pfVar3) * param_5;
        pfVar4[1] = fVar26 * param_4 + (fVar32 - fVar26) * param_5;
        pfVar4[2] = fVar24 * param_4 + (fVar36 - fVar24) * param_5;
        pfVar4[3] = fVar25 * param_4 + (fVar37 - fVar25) * param_5;
        pfVar3 = (float *)(pbVar20 + uVar22 * 4 + 0x10);
        *pfVar3 = fVar28 * param_4 + (fVar23 - fVar28) * param_5;
        pfVar3[1] = fVar29 * param_4 + (fVar32 - fVar29) * param_5;
        pfVar3[2] = fVar27 * param_4 + (fVar36 - fVar27) * param_5;
        pfVar3[3] = fVar31 * param_4 + (fVar37 - fVar31) * param_5;
        uVar22 = uVar22 + 8;
      } while (uVar21 != uVar22);
      fVar23 = _DAT_142e36f28;
      if (uVar19 == uVar21) goto LAB_142a45136;
    }
    do {
      *(float *)(pbVar20 + uVar21 * 4) =
           *(float *)(pbVar1 + uVar21 * 4) * param_4 +
           (fVar23 - *(float *)(pbVar1 + uVar21 * 4)) * param_5;
      uVar21 = uVar21 + 1;
    } while (uVar19 != uVar21);
  }
LAB_142a45136:
  if (CONCAT44(fStack_1d4,fStack_1d8) != 0) {
    pub_1406abac0(pbVar1,CONCAT44(fStack_1d4,fStack_1d8) << 2,4);
  }
  fVar23 = _DAT_142e36f28;
  if (uVar19 != 0) {
    fStack_fc = (float)(uVar19 - 2);
    pbStack_128 = pbVar20 + uVar19 * 4;
    fVar36 = _DAT_142e37ad4 * fStack_100;
    uStack_168 = *param_9;
    puStack_160 = (undefined1 *)param_9[1];
    bVar15 = true;
    fVar32 = 0.0;
    uVar19 = 0;
    pbStack_118 = pbVar20;
    do {
      uVar17 = (undefined4)((ulonglong)puVar38 >> 0x20);
      pbVar1 = pbVar20 + 4;
      uStack_f8 = uVar19;
      if (bVar15) {
        if (pbVar1 == pbStack_128) break;
        pbVar2 = pbVar20 + 8;
        pbStack_150 = pbVar20;
        pbVar20 = pbVar1;
        pbVar1 = pbVar2;
      }
      pbStack_130 = pbVar1;
      uVar5 = *(undefined4 *)pbStack_150;
      uVar6 = *(undefined4 *)pbVar20;
      pbStack_150 = pbVar20;
      pdb_140df4540(&fStack_13c,&uStack_10c,uVar5);
      pdb_140df4540(&fStack_148,&uStack_10c,uVar6);
      fVar29 = fStack_134;
      fVar28 = fStack_138;
      fVar25 = fStack_13c;
      fVar24 = fStack_140;
      fVar26 = fStack_144;
      fVar37 = fStack_148;
      fVar30 = 0.0;
      fVar27 = _DAT_143009bc0;
      fVar31 = _DAT_143009bc4;
      if (param_12 == '\0') {
        fVar31 = ((float)uStack_f8 / fStack_fc + _DAT_1435130e0) / _DAT_1435130e4;
        fVar27 = 0.0;
        if (0.0 <= fVar31) {
          fVar27 = fVar31;
        }
        fVar31 = fVar23;
        if (fVar27 <= fVar23) {
          fVar31 = fVar27;
        }
        fVar30 = (_DAT_142e3788c - (fVar31 + fVar31)) * fVar31 * fVar31;
        fVar27 = _DAT_142e42360;
        fVar31 = _DAT_142e3b1d8;
      }
      fVar31 = ((float)uStack_f8 / fStack_fc + fVar27) / fVar31;
      fVar27 = 0.0;
      if (0.0 <= fVar31) {
        fVar27 = fVar31;
      }
      fVar31 = fVar23;
      if (fVar27 <= fVar23) {
        fVar31 = fVar27;
      }
      fVar31 = fVar23 - (_DAT_142e3788c - (fVar31 + fVar31)) * fVar31 * fVar31;
      fVar27 = fVar31;
      if (fVar31 <= fVar30) {
        fVar27 = fVar30;
      }
      fVar27 = ((float)(~-(uint)NAN(fVar30) & (uint)fVar27 | -(uint)NAN(fVar30) & (uint)fVar31) *
                _DAT_142e37988 + _DAT_142e37988) * fStack_100;
      puVar38 = (undefined *)CONCAT44(uVar17,param_8);
      pdb_140df3380(auStack_2f0,fVar27,fVar27,param_7,puVar38,
                    (fStack_13c + fStack_148) * _DAT_142e36f50,
                    (fStack_134 + fStack_140) * _DAT_142e36f50,&UNK_143624088);
      fVar31 = fVar26 - fVar28;
      uStack_158 = uStack_f8 + 1;
      fStack_104 = (fVar28 + fVar26) * _DAT_142e36f50;
      fVar37 = SQRT((fVar24 - fVar29) * (fVar24 - fVar29) +
                    fVar31 * fVar31 + (fVar37 - fVar25) * (fVar37 - fVar25));
      uStack_1e8 = CONCAT44(*(undefined4 *)(&UNK_142f61070 + (ulonglong)((uStack_f8 & 1) == 0) * 4),
                            *(undefined4 *)(&UNK_142f61070 + (ulonglong)((uStack_f8 & 1) == 0) * 4))
      ;
      uStack_1e0 = 0;
      uVar19 = 0;
      while (uVar19 < 4) {
        fVar24 = (float)pdb_140df3e10(auStack_2f0,uVar19);
        uVar21 = uVar19 + 1;
        fVar26 = fVar27;
        fVar25 = (float)pdb_140df3e10(auStack_2f0,(uint)uVar21 & 3);
        fVar28 = fVar25 - fVar24;
        fVar29 = fVar26 - fVar27;
        fVar31 = fVar23 / SQRT(fVar29 * fVar29 + fVar28 * fVar28);
        fVar28 = fVar31 * fVar28 * _DAT_142e37a90 * _DAT_142e36f60 * (float)uStack_1e8;
        fVar29 = fVar31 * fVar29 * _UNK_142e37a94 * _UNK_142e36f64 * uStack_1e8._4_4_;
        fVar24 = fVar24 + fVar28;
        fVar27 = fVar27 + fVar29;
        fVar28 = fVar28 + fVar25;
        fVar29 = fVar29 + fVar26;
        fStack_170 = fVar28 * _DAT_142e36f60 + fVar24 * _DAT_142e36f60;
        fStack_16c = fVar29 * _UNK_142e36f64 + fVar27 * _UNK_142e36f64;
        fVar26 = (float)pdb_140e02880(param_6);
        fVar30 = (fVar26 * fVar36 - (fVar23 - fVar26) * fVar36) + _DAT_142e3798c;
        pdb_140df4540(&uStack_2d8,&fStack_170,fStack_104);
        pdb_140df1760(auStack_2f0,uVar19);
        pdb_140de88f0(&fStack_1d8);
        fVar24 = fVar24 - fVar28;
        fVar27 = fVar27 - fVar29;
        fVar33 = SQRT(fVar27 * fVar27 + fVar24 * fVar24);
        fVar34 = fStack_1d0 + fStack_1d0;
        fVar25 = fStack_1d4 + fStack_1d4;
        fVar26 = fVar25 * fStack_1d8;
        fVar27 = fVar34 * fStack_1d8;
        fVar31 = fVar34 * fStack_1d4;
        fVar29 = fStack_1d8 * (fStack_1d8 + fStack_1d8);
        fVar24 = fVar25 * fStack_1cc;
        fVar28 = (fStack_1d8 + fStack_1d8) * fStack_1cc;
        fVar35 = fVar27 - fVar24;
        fStack_1bc = fVar28 + fVar31;
        fStack_1c8 = (fVar26 - fStack_1cc * fVar34) * fVar37;
        fStack_1c4 = (fVar23 - (fStack_1d0 * fVar34 + fVar29)) * fVar37;
        fStack_1c0 = fStack_1bc * fVar37;
        fStack_1bc = fStack_1bc * fVar37;
        fStack_1ac = fVar23 - (fVar29 + fStack_1d4 * fVar25);
        fStack_1d8 = fVar33 * (fVar23 - (fStack_1d4 * fVar25 + fStack_1d0 * fVar34));
        fStack_1d4 = fVar33 * (fVar26 + fStack_1cc * fVar34);
        fStack_1d0 = fVar33 * fVar35;
        fStack_1cc = fVar33 * fVar35;
        fStack_1b8 = fVar30 * (fVar24 + fVar27);
        fStack_1b4 = fVar30 * (fVar31 - fVar28);
        fStack_1b0 = fVar30 * fStack_1ac;
        fStack_1ac = fVar30 * fStack_1ac;
        uStack_1a8 = uStack_2d8;
        uStack_1a4 = uStack_2d4;
        uStack_1a0 = uStack_2d0;
        _uStack_19c = CONCAT44(uStack_198,uStack_2d0);
        pdb_140e07fe0(&uStack_278,&fStack_1d8);
        uVar17 = pdb_1409012c0(param_11);
        iVar18 = pdb_140315970(&param_10);
        pdb_140951920(&uStack_2d8);
        fVar33 = fVar33 + fVar32;
        iStack_18c = iVar18 + (int)uVar19 + (int)uStack_f8;
        uStack_218 = uStack_258;
        uVar12 = uStack_218;
        uStack_210 = uStack_250;
        uVar13 = uStack_210;
        uStack_228 = uStack_268;
        uVar10 = uStack_228;
        uStack_220 = uStack_260;
        uVar11 = uStack_220;
        uStack_238 = uStack_278;
        uVar8 = uStack_238;
        uStack_230 = uStack_270;
        uVar9 = uStack_230;
        uStack_208 = uStack_2a8;
        uVar14 = uStack_208;
        uStack_200 = (undefined4)uStack_2a0;
        uStack_1fc = (undefined4)((ulonglong)uStack_2a0 >> 0x20);
        uStack_1f0 = uStack_290;
        uStack_1f8 = (undefined4)uStack_298;
        uStack_1f4 = (undefined4)((ulonglong)uStack_298 >> 0x20);
        uStack_194 = CONCAT44(uStack_290,uStack_1f4);
        uStack_238._0_4_ = (float)uStack_278;
        uStack_238._4_4_ = (float)((ulonglong)uStack_278 >> 0x20);
        uStack_230._0_4_ = (float)uStack_270;
        uStack_230._4_4_ = (float)((ulonglong)uStack_270 >> 0x20);
        uStack_228._0_4_ = (float)uStack_268;
        uStack_228._4_4_ = (undefined4)((ulonglong)uStack_268 >> 0x20);
        uStack_220._0_4_ = (undefined4)uStack_260;
        uStack_220._4_4_ = (undefined4)((ulonglong)uStack_260 >> 0x20);
        uStack_218._0_4_ = (undefined4)uStack_258;
        uStack_218._4_4_ = (undefined4)((ulonglong)uStack_258 >> 0x20);
        uStack_210._0_4_ = (undefined4)uStack_250;
        uStack_210._4_4_ = (undefined4)((ulonglong)uStack_250 >> 0x20);
        uStack_208._0_4_ = (undefined4)uStack_2a8;
        uStack_208._4_4_ = (undefined4)((ulonglong)uStack_2a8 >> 0x20);
        uStack_1a8 = (undefined4)uStack_208;
        uStack_1a4 = uStack_208._4_4_;
        uStack_1a0 = uStack_200;
        _uStack_19c = CONCAT44(uStack_1f8,uStack_1fc);
        fStack_1b8 = (float)(undefined4)uStack_218;
        fStack_1b4 = (float)uStack_218._4_4_;
        fStack_1b0 = (float)(undefined4)uStack_210;
        fStack_1ac = (float)uStack_210._4_4_;
        fStack_1c8 = (float)uStack_228;
        fStack_1c4 = (float)uStack_228._4_4_;
        fStack_1c0 = (float)(undefined4)uStack_220;
        fStack_1bc = (float)uStack_220._4_4_;
        fStack_1d8 = (float)uStack_238;
        fStack_1d4 = uStack_238._4_4_;
        fStack_1d0 = (float)uStack_230;
        fStack_1cc = uStack_230._4_4_;
        uStack_184 = CONCAT44(fVar33,fVar32);
        uStack_17c = uStack_27c;
        fVar27 = (float)uStack_228;
        uStack_238 = uVar8;
        uStack_230 = uVar9;
        uStack_228 = uVar10;
        uStack_220 = uVar11;
        uStack_218 = uVar12;
        uStack_210 = uVar13;
        uStack_208 = uVar14;
        uStack_188 = uVar17;
        pdb_14094c790(&uStack_278,&fStack_1d8);
        cVar16 = pdb_1413f66a0(uStack_168,&uStack_278);
        uVar19 = uVar21;
        fVar32 = fVar33;
        if (cVar16 != '\0') {
          *puStack_160 = 1;
        }
      }
      bVar15 = false;
      uVar19 = uStack_158;
      pbVar20 = pbStack_130;
    } while (pbStack_130 != pbStack_128);
    pub_1406abac0(pbStack_118,uStack_120,4);
  }
  return;
}

