// VA 0x1424f0b60, PDB extent 2676 bytes
// system_decorator::decorator_visual::chimney_assemble_bricks::construct_crossbrick_chimney<system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks::closure$0::closure$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::chimney_assemble_bricks::construct_crossbrick_chimney<system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks::closure$0::closure$0::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/chimney_assemble_bricks.rs
   Extent: 2676 */

void pdb_1424f0b60(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,undefined1 *param_12,undefined8 param_13,
                  undefined4 param_14)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
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
  undefined *puVar31;
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [24];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  ulonglong uStack_150;
  byte *pbStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  byte *pbStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_104 = param_1;
  uStack_100 = param_2;
  fVar15 = (float)pub_142e329c0((param_3 - param_4) / _DAT_142e3798c);
  uVar11 = 0;
  if (0.0 <= fVar15) {
    uVar11 = (longlong)(fVar15 - _DAT_142e36f2c) & (longlong)fVar15 >> 0x3f | (longlong)fVar15;
  }
  uVar13 = 0xffffffffffffffff;
  if (fVar15 <= _DAT_142e36f30) {
    uVar13 = uVar11;
  }
  uVar11 = 3;
  if (3 < uVar13) {
    uVar11 = uVar13;
  }
  puVar31 = &UNK_143513138;
  pdb_140de8290(&fStack_218,uVar11,_DAT_142e3787c / (param_3 - param_4),param_8,&UNK_143513138);
  pbVar1 = (byte *)CONCAT44(fStack_20c,fStack_210);
  uVar11 = CONCAT44(fStack_204,fStack_208);
  uStack_118 = uVar11 * 4;
  if (uVar11 == 0) {
    pbVar12 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(uStack_118,4);
    fVar24 = _UNK_142e3c64c;
    fVar30 = _UNK_142e3c648;
    fVar27 = _UNK_142e3c644;
    fVar15 = _DAT_142e3c640;
    if (pbVar12 == (byte *)0x0) {
      pdb_142dc7e2a(4,uStack_118);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar11 < 8) {
      uVar13 = 0;
      fVar15 = _DAT_142e36f28;
    }
    else {
      uVar13 = uVar11 & 0xfffffffffffffff8;
      uVar14 = 0;
      do {
        pfVar3 = (float *)(pbVar1 + uVar14 * 4);
        fVar18 = pfVar3[1];
        fVar16 = pfVar3[2];
        fVar17 = pfVar3[3];
        pfVar4 = (float *)(pbVar1 + uVar14 * 4 + 0x10);
        fVar22 = *pfVar4;
        fVar21 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar4 = (float *)(pbVar12 + uVar14 * 4);
        *pfVar4 = *pfVar3 * param_3 + (fVar15 - *pfVar3) * param_4;
        pfVar4[1] = fVar18 * param_3 + (fVar27 - fVar18) * param_4;
        pfVar4[2] = fVar16 * param_3 + (fVar30 - fVar16) * param_4;
        pfVar4[3] = fVar17 * param_3 + (fVar24 - fVar17) * param_4;
        pfVar3 = (float *)(pbVar12 + uVar14 * 4 + 0x10);
        *pfVar3 = fVar22 * param_3 + (fVar15 - fVar22) * param_4;
        pfVar3[1] = fVar21 * param_3 + (fVar27 - fVar21) * param_4;
        pfVar3[2] = fVar20 * param_3 + (fVar30 - fVar20) * param_4;
        pfVar3[3] = fVar23 * param_3 + (fVar24 - fVar23) * param_4;
        uVar14 = uVar14 + 8;
      } while (uVar13 != uVar14);
      fVar15 = _DAT_142e36f28;
      if (uVar11 == uVar13) goto LAB_1424f0d66;
    }
    do {
      *(float *)(pbVar12 + uVar13 * 4) =
           *(float *)(pbVar1 + uVar13 * 4) * param_3 +
           (fVar15 - *(float *)(pbVar1 + uVar13 * 4)) * param_4;
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
LAB_1424f0d66:
  if (CONCAT44(fStack_214,fStack_218) != 0) {
    pub_1406abac0(pbVar1,CONCAT44(fStack_214,fStack_218) << 2,4);
  }
  fVar15 = _DAT_142e36f28;
  if (uVar11 != 0) {
    fStack_fc = (float)(uVar11 - 2);
    pbStack_120 = pbVar12 + uVar11 * 4;
    bVar8 = true;
    fVar27 = 0.0;
    uVar11 = 0;
    pbStack_110 = pbVar12;
    do {
      uVar19 = (undefined4)((ulonglong)puVar31 >> 0x20);
      pbVar1 = pbVar12 + 4;
      uStack_f8 = uVar11;
      if (bVar8) {
        if (pbVar1 == pbStack_120) break;
        pbVar2 = pbVar12 + 8;
        pbStack_148 = pbVar12;
        pbVar12 = pbVar1;
        pbVar1 = pbVar2;
      }
      pbStack_128 = pbVar1;
      uVar5 = *(undefined4 *)pbStack_148;
      pbStack_148 = pbVar12;
      pdb_140df4540(&fStack_134,&uStack_104,uVar5);
      pdb_140df4540(&fStack_140,&uStack_104);
      fVar22 = fStack_12c;
      fVar17 = fStack_130;
      fVar16 = fStack_134;
      fVar18 = fStack_138;
      fVar24 = fStack_13c;
      fVar30 = fStack_140;
      fVar20 = ((float)uStack_f8 / fStack_fc + _DAT_1435130e0) / _DAT_1435130e4;
      fVar21 = 0.0;
      if (0.0 <= fVar20) {
        fVar21 = fVar20;
      }
      fVar20 = fVar15;
      if (fVar21 <= fVar15) {
        fVar20 = fVar21;
      }
      fVar20 = (_DAT_142e3788c - (fVar20 + fVar20)) * fVar20 * fVar20 * param_7;
      fVar21 = fVar20 + param_5;
      puVar31 = (undefined *)CONCAT44(uVar19,param_10);
      pdb_140df3380(auStack_290,fVar21,param_6 + fVar20,param_9,puVar31,
                    (fStack_134 + fStack_140) * _DAT_142e36f50,
                    (fStack_12c + fStack_138) * _DAT_142e36f50,&UNK_143513150);
      fVar20 = fVar24 - fVar17;
      uStack_150 = uStack_f8 + 1;
      fVar24 = (fVar17 + fVar24) * _DAT_142e36f50;
      fVar30 = SQRT((fVar18 - fVar22) * (fVar18 - fVar22) +
                    fVar20 * fVar20 + (fVar30 - fVar16) * (fVar30 - fVar16));
      uStack_228 = CONCAT44(*(undefined4 *)(&UNK_142f61070 + (ulonglong)((uStack_f8 & 1) == 0) * 4),
                            *(undefined4 *)(&UNK_142f61070 + (ulonglong)((uStack_f8 & 1) == 0) * 4))
      ;
      uStack_220 = 0;
      uVar11 = 0;
      while (uVar11 < 4) {
        fVar16 = (float)pdb_140df3e10(auStack_290,uVar11);
        uVar13 = uVar11 + 1;
        fVar18 = fVar21;
        fVar17 = (float)pdb_140df3e10(auStack_290,(uint)uVar13 & 3);
        fVar22 = fVar17 - fVar16;
        fVar20 = fVar18 - fVar21;
        fVar23 = fVar15 / SQRT(fVar20 * fVar20 + fVar22 * fVar22);
        fVar22 = fVar23 * fVar22 * _DAT_143009bd0 * _DAT_142e36f60 * (float)uStack_228;
        fVar20 = fVar23 * fVar20 * _UNK_143009bd4 * _UNK_142e36f64 * uStack_228._4_4_;
        fVar16 = fVar16 + fVar22;
        fVar21 = fVar21 + fVar20;
        fVar22 = fVar22 + fVar17;
        fVar20 = fVar20 + fVar18;
        uStack_158 = CONCAT44(fVar20 * _UNK_142e36f64 + fVar21 * _UNK_142e36f64,
                              fVar22 * _DAT_142e36f60 + fVar16 * _DAT_142e36f60);
        fVar18 = (float)pdb_140e02880(param_8);
        fVar25 = (fVar18 * _DAT_142e37ad4 - (fVar15 - fVar18) * _DAT_142e37ad4) + _DAT_142e37988;
        fVar18 = _DAT_142e37ad4;
        pdb_140df4540(&uStack_1b8,&uStack_158,fVar24);
        uVar19 = pdb_140df1760(auStack_290,uVar11);
        pdb_140de88f0(&fStack_218,uVar19,fVar18);
        fVar16 = fVar16 - fVar22;
        fVar21 = fVar21 - fVar20;
        fVar26 = SQRT(fVar21 * fVar21 + fVar16 * fVar16);
        fVar20 = fStack_210 + fStack_210;
        fVar17 = fStack_214 + fStack_214;
        fVar18 = fVar17 * fStack_218;
        fVar28 = fVar20 * fStack_218;
        fVar29 = fVar20 * fStack_214;
        fVar21 = fStack_218 * (fStack_218 + fStack_218);
        fVar16 = fVar17 * fStack_20c;
        fVar22 = (fStack_218 + fStack_218) * fStack_20c;
        fVar23 = fVar28 - fVar16;
        fStack_1fc = fVar22 + fVar29;
        fStack_208 = (fVar18 - fStack_20c * fVar20) * fVar30;
        fStack_204 = (fVar15 - (fStack_210 * fVar20 + fVar21)) * fVar30;
        fStack_200 = fStack_1fc * fVar30;
        fStack_1fc = fStack_1fc * fVar30;
        fStack_1ec = fVar15 - (fVar21 + fStack_214 * fVar17);
        fStack_218 = fVar26 * (fVar15 - (fStack_214 * fVar17 + fStack_210 * fVar20));
        fStack_214 = fVar26 * (fVar18 + fStack_20c * fVar20);
        fStack_210 = fVar26 * fVar23;
        fStack_20c = fVar26 * fVar23;
        fStack_1f8 = fVar25 * (fVar16 + fVar28);
        fStack_1f4 = fVar25 * (fVar29 - fVar22);
        fStack_1f0 = fVar25 * fStack_1ec;
        fStack_1ec = fVar25 * fStack_1ec;
        uStack_1e8 = (undefined4)uStack_1b8;
        uStack_1e4 = uStack_1b8._4_4_;
        uStack_1e0 = (undefined4)uStack_1b0;
        uStack_1dc = (undefined4)uStack_1b0;
        pdb_140e07fe0(&uStack_1b8,&fStack_218);
        uVar19 = pdb_14094c330(param_14);
        iVar10 = pdb_140315970(&param_13);
        pdb_140951920(&fStack_218);
        fVar26 = fVar26 + fVar27;
        iStack_16c = iVar10 + (int)uVar11 + (int)uStack_f8;
        uStack_278 = uStack_1b8;
        uStack_270 = uStack_1b0;
        uStack_248 = CONCAT44(uStack_1e4,uStack_1e8);
        uStack_240 = CONCAT44(uStack_1dc,uStack_1e0);
        uStack_230 = uStack_1d0;
        uStack_238 = uStack_1d8;
        uVar7 = uStack_238;
        uStack_188 = uStack_1e8;
        uStack_184 = uStack_1e4;
        uStack_180 = uStack_1e0;
        uStack_238._0_4_ = (undefined4)uStack_1d8;
        uStack_238._4_4_ = (undefined4)((ulonglong)uStack_1d8 >> 0x20);
        uStack_17c = uStack_1dc;
        uStack_178 = (undefined4)uStack_238;
        uStack_174 = uStack_238._4_4_;
        uStack_170 = uStack_1d0;
        uStack_164 = CONCAT44(fVar26,fVar27);
        uStack_15c = uStack_1bc;
        fVar21 = fStack_1a8;
        uStack_238 = uVar7;
        uStack_168 = uVar19;
        pdb_14094c790(auStack_2d0,&uStack_1b8);
        cVar9 = pdb_1414aad80(param_11,auStack_2d0);
        uVar11 = uVar13;
        fVar27 = fVar26;
        if (cVar9 != '\0') {
          *param_12 = 1;
        }
      }
      bVar8 = false;
      uVar11 = uStack_150;
      pbVar12 = pbStack_128;
    } while (pbStack_128 != pbStack_120);
    pub_1406abac0(pbStack_110,uStack_118,4);
  }
  return;
}

