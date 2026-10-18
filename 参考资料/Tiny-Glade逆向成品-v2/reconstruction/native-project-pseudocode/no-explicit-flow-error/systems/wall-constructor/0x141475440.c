// VA 0x141475440, PDB extent 3414 bytes
// system_wall_constructor::construct_elevation_supports::circle_pillars::construct_circle_pillars
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::circle_pillars::construct_circle_pillars
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_pillars.rs
   Extent: 3414 */

void pdb_141475440(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong *param_12)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int *piVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  byte *pbVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  byte *pbVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar26;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  ulonglong uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_134;
  float fStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  uint uStack_110;
  float fStack_10c;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar31 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x2a2) == '\0') {
    lStack_128 = 0;
    pbStack_120 = (byte *)0x8;
    lStack_118 = 0;
    uStack_f1 = 1;
    uStack_1a0 = param_1;
    uStack_160 = param_1;
    lStack_108 = param_2;
    puStack_100 = param_3;
    pdb_140deff30(param_3);
    uStack_f1 = 1;
    fVar23 = (float)pdb_140de8220();
    fVar24 = 0.0;
    if (0.0 <= fVar23) {
      fVar24 = fVar23;
    }
    fVar23 = _DAT_142e36f28;
    if (fVar24 <= _DAT_142e36f28) {
      fVar23 = fVar24;
    }
    fVar24 = (float)pub_142e32b00(fVar23 * _DAT_142f3e570 +
                                  (_DAT_142e36f28 - fVar23) * _DAT_142e37adc);
    uVar16 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
    if (fVar24 < 0.0) {
      uVar16 = 0;
    }
    uStack_190 = 0xffffffffffffffff;
    if (fVar24 <= _DAT_142e36f30) {
      uStack_190 = uVar16;
    }
    fStack_10c = (float)uStack_190;
    lVar18 = param_6 * 0x50 + param_5;
    uVar4 = *puStack_100;
    uVar16 = 0;
LAB_1414756b0:
    uVar21 = uVar16;
    if (uVar21 < uStack_190) {
      fVar24 = (float)uVar21 / fStack_10c;
      uStack_158 = (float *)CONCAT44(uStack_158._4_4_,fVar24);
      if ((fVar24 < 0.0) || (_DAT_142e36f28 < fVar24)) {
        uStack_188 = &uStack_158;
        fStack_180 = 7.7206726;
        uStack_17c = 1;
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143307ab0,&uStack_188,&UNK_14330bf40);
      }
      uStack_f1 = 1;
      fVar36 = 0.0;
      fVar45 = fVar24;
      uVar27 = pdb_140def2c0(puStack_100);
      fVar44 = (float)uVar27;
      fVar23 = *(float *)(lStack_108 + 0x284);
      uStack_f1 = 1;
      fStack_198 = fVar44;
      fStack_194 = fVar45;
      fVar25 = (float)pdb_14140ce00(param_10,fVar44);
      uVar16 = uVar21 + 1;
      lVar17 = param_5;
      if (fVar25 + _DAT_142e37ad4 <= fVar23) {
        do {
          if (lVar17 == lVar18) {
            uStack_f1 = 1;
            pdb_140df4540(&uStack_158,&fStack_198);
            uStack_f1 = 1;
            fVar23 = fVar24;
            fStack_134 = (float)pdb_140def5e0(puStack_100);
            uStack_f1 = 1;
            fStack_130 = fVar23;
            pdb_140df4520(&uStack_188,&fStack_134);
            uStack_1b0 = CONCAT44((float)((ulonglong)uStack_158 >> 0x20) +
                                  uStack_188._4_4_ * _UNK_143309384,
                                  SUB84(uStack_158,0) + (float)uStack_188 * _DAT_143309380);
            fStack_1a8 = fStack_180 * _DAT_142e42360 + pcStack_150._0_4_;
            uStack_188._4_4_ = (float)*puStack_100;
            fStack_180 = (float)((ulonglong)*puStack_100 >> 0x20);
            uStack_17c = (undefined4)puStack_100[1];
            uStack_178 = (undefined4)((ulonglong)puStack_100[1] >> 0x20);
            uStack_188._0_4_ = 0.0;
            uStack_f1 = 1;
            uVar11 = pdb_141479670(param_9,&uStack_1b0,param_10,&uStack_188,uStack_160);
            if ((uVar11 & 1) != 0) {
              fStack_164 = *(float *)(lStack_108 + 0x284);
              fVar25 = ((fStack_164 - extraout_XMM0_Da) + _DAT_143006a20) / _DAT_142e37834;
              fVar23 = 0.0;
              if (0.0 <= fVar25) {
                fVar23 = fVar25;
              }
              fVar25 = _DAT_142e36f28;
              if (fVar23 <= _DAT_142e36f28) {
                fVar25 = fVar23;
              }
              fVar23 = (_DAT_142e3788c - (fVar25 + fVar25)) * fVar25 * fVar25;
              fVar43 = fVar23 * _DAT_142e37838;
              uStack_f1 = 1;
              fVar25 = 0.0;
              uVar10 = pdb_140def5e0(puStack_100);
              fVar43 = fVar43 + (_DAT_142e36f28 - fVar23);
              fVar44 = fVar44 + fVar43 * (float)uVar10 * _DAT_14330bec0;
              fVar45 = fVar45 + fVar43 * fVar24 * _UNK_14330bec4;
              fVar23 = (float)((ulonglong)uVar27 >> 0x20) +
                       (float)((ulonglong)uVar10 >> 0x20) * 0.0 * _UNK_14330bec8;
              fVar36 = fVar36 + fVar25 * 0.0 * _UNK_14330becc;
              uStack_110 = 0;
              lVar17 = param_5;
              fVar24 = _DAT_142e37874;
              goto LAB_141475990;
            }
            break;
          }
          uStack_f1 = 1;
          lVar9 = pdb_140b54f80(param_4,*(undefined8 *)(lVar17 + 0x38),&UNK_14330bf58);
          if (lVar9 == 0) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14330bf70);
          }
          uStack_f1 = 1;
          uVar10 = pdb_14092f900(lVar9);
          uStack_f1 = 1;
          cVar7 = pdb_140a84de0(uVar10,fVar44);
          lVar17 = lVar17 + 0x50;
        } while (cVar7 == '\0');
      }
      goto LAB_1414756b0;
    }
    uStack_f1 = 1;
    iVar8 = pdb_140315970(&uStack_1a0);
    fVar24 = *(float *)(lStack_108 + 0x284) * _DAT_142e3a74c;
    uVar15 = 0;
    if (0.0 <= fVar24) {
      uVar15 = (uint)(longlong)fVar24 |
               (uint)(longlong)(fVar24 - _DAT_142e36f2c) & (uint)((longlong)fVar24 >> 0x3f);
    }
    uVar14 = 0xffffffff;
    if (fVar24 <= _DAT_142e36f30) {
      uVar14 = uVar15;
    }
    uStack_f1 = 1;
    uStack_1b8 = pdb_140dedfe0(iVar8 + uVar14);
    fVar44 = _UNK_142e36f6c;
    fVar45 = _UNK_142e36f64;
    fVar23 = _DAT_142e36f60;
    fVar24 = _DAT_142e36f50;
    pbVar22 = pbStack_120 + lStack_118 * 0x40;
    puStack_100 = (undefined8 *)uStack_1b8;
    for (pbVar19 = pbStack_120; pbVar19 != pbVar22; pbVar19 = pbVar19 + 0x40) {
      uStack_1c0 = *(undefined8 *)pbVar19;
      fVar25 = *(float *)(pbVar19 + 0x30);
      uVar2 = *(undefined4 *)(pbVar19 + 0x10);
      uVar3 = *(undefined4 *)(pbVar19 + 0x14);
      fVar43 = (float)*(undefined8 *)(pbVar19 + 0x28);
      fVar42 = (float)((ulonglong)*(undefined8 *)(pbVar19 + 0x28) >> 0x20);
      fVar36 = fVar42 * fVar45;
      auVar40._4_4_ = fVar36;
      auVar40._0_4_ = fVar36;
      auVar40._8_4_ = fVar44 * 0.0;
      auVar40._12_4_ = fVar44 * 0.0;
      auVar41._4_12_ = auVar40._4_12_;
      auVar41._0_4_ = fVar36 + fVar43 * fVar23;
      uStack_f1 = 1;
      pdb_140df4540(&fStack_134,&uStack_1c0,auVar41._0_8_);
      uStack_158 = (float *)CONCAT44(fVar42 - fVar43,fVar25 * fVar24);
      pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,fVar25 * fVar24);
      uStack_f1 = 1;
      pdb_140df3fd0(&uStack_188,&fStack_134,&uStack_158,uVar2,uVar3,&UNK_14330bf28);
      uStack_158 = (float *)CONCAT44(uStack_188._4_4_,(float)uStack_188);
      pcStack_150 = (code *)CONCAT44(uStack_17c,fStack_180);
      uStack_148 = uStack_178;
      uStack_144 = uStack_174;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      lVar18 = param_12[2];
      if (lVar18 == *param_12) {
        uStack_f1 = 1;
        pdb_142d8a7a0(param_12);
      }
      lVar17 = param_12[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar18 * 0x20);
      *puVar1 = CONCAT44(uStack_144,uStack_148);
      puVar1[1] = CONCAT44(uStack_13c,uStack_140);
      puVar1 = (undefined8 *)(lVar17 + lVar18 * 0x20);
      *puVar1 = uStack_158;
      puVar1[1] = pcStack_150;
      param_12[2] = lVar18 + 1;
    }
    uStack_f1 = 1;
    cVar7 = pdb_1408ff990(lStack_108 + 0x2a3);
    if (cVar7 == '\0') {
      uStack_f1 = 1;
      cVar7 = pdb_1408ff980(lStack_108 + 0x29f);
      if (cVar7 == '\0') {
        uStack_178 = (undefined4)lStack_118;
        uStack_174 = (undefined4)((ulonglong)lStack_118 >> 0x20);
        uStack_188._0_4_ = (float)lStack_128;
        uStack_188._4_4_ = (float)((ulonglong)lStack_128 >> 0x20);
        fStack_180 = SUB84(pbStack_120,0);
        uStack_17c = (undefined4)((ulonglong)pbStack_120 >> 0x20);
        uStack_f1 = 0;
        pdb_1424c6230(param_7,lStack_108,&uStack_188,puStack_100,uStack_160,param_11);
        return;
      }
    }
    lVar18 = lStack_118;
    pbVar19 = pbStack_120;
    uStack_f1 = 1;
    cVar7 = pdb_1408ff980(lStack_108 + 0x29f);
    bVar13 = true;
    if (cVar7 != '\0') {
      uStack_f1 = 1;
      cVar7 = pdb_1408ff980();
      if ((cVar7 == '\0') || (1 < *(uint *)(lStack_108 + 600))) {
        bVar13 = false;
      }
      else {
        bVar13 = 0.0 < *(float *)(lStack_108 + 0x294);
      }
    }
    uStack_f1 = 1;
    pdb_1424c6540(param_7,lStack_108,pbVar19,lVar18,bVar13,uStack_160,&uStack_1b8,param_11);
    if (lStack_128 != 0) {
      pub_1406abac0(pbStack_120,lStack_128 << 6,8);
    }
  }
  return;
LAB_141475990:
  fVar25 = _DAT_142e36f28;
  if (lVar17 != lVar18) {
    uStack_f1 = 1;
    lVar9 = pdb_140b54f80(param_4,*(undefined8 *)(lVar17 + 0x38),&UNK_14330bf88);
    if (lVar9 == 0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14330bfa0);
    }
    uStack_f1 = 1;
    piVar12 = (int *)pdb_14092f900(lVar9);
    lVar17 = lVar17 + 0x50;
    puVar20 = (ulonglong *)(piVar12 + 1);
    if (*piVar12 != 1) goto LAB_141475a10;
    uStack_f1 = 1;
    uVar27 = pdb_140df28b0(puVar20,fVar44);
    if (extraout_XMM0_Da_00 < fVar24) {
      auStack_1d8._8_8_ = 0;
      auStack_1d8._0_8_ = *puVar20;
      fVar24 = extraout_XMM0_Da_00;
      goto LAB_141475a6b;
    }
    goto LAB_141475990;
  }
  fStack_1e8 = (float)auStack_1d8._0_4_;
  fVar24 = (float)auStack_1d8._4_4_;
  if ((uStack_110 & 1) == 0) {
    fStack_1e8 = (float)uVar4;
    fStack_1e4 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_1e8 = fStack_1e8 - fVar44;
    fStack_1e4 = fStack_1e4 - fVar45;
    fVar24 = _DAT_142e36f28 / SQRT(fStack_1e4 * fStack_1e4 + fStack_1e8 * fStack_1e8);
    fStack_1e8 = fVar24 * fStack_1e8;
    fVar24 = fVar24 * fStack_1e4;
  }
  if (NAN((float)uVar16 / fStack_10c)) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
  }
  uVar27 = pub_142e32a70((float)uVar16 / fStack_10c,_DAT_142e36f28);
  fVar42 = (float)uVar27;
  fStack_134 = fVar42;
  if ((fVar42 < 0.0) || (fVar25 < fVar42)) {
    uStack_158 = &fStack_134;
    pcStack_150 = pdb_140f70fc0;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143307a98);
  }
  uStack_f1 = 1;
  fVar33 = (float)((ulonglong)uVar27 >> 0x20);
  uVar27 = pdb_140def2c0(puStack_100);
  fVar25 = _DAT_142e36f28;
  uVar11 = uVar21;
  if (uVar21 == 0) {
    uVar11 = uStack_190;
  }
  fVar26 = (float)(uVar11 - 1) / fStack_10c;
  if (NAN(fVar26)) {
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
  }
  uVar10 = pub_142e32a70(fVar26,_DAT_142e36f28);
  fVar26 = (float)uVar10;
  fStack_134 = fVar26;
  if ((fVar26 < 0.0) || (fVar25 < fVar26)) {
    uStack_158 = &fStack_134;
    pcStack_150 = pdb_140f70fc0;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143307ab0,&uStack_158,&UNK_143307a98);
  }
  uStack_f1 = 1;
  fVar25 = (float)((ulonglong)uVar10 >> 0x20);
  uVar10 = pdb_140def2c0(puStack_100);
  lVar17 = lStack_118;
  if (lStack_118 == lStack_128) {
    uStack_f1 = 1;
    pdb_142d7ee50(&lStack_128);
  }
  fVar34 = (float)uVar27 - fVar44;
  fVar35 = fVar42 - fVar45;
  fVar37 = (float)uVar10 - fVar44;
  fVar38 = fVar26 - fVar45;
  auVar28._0_4_ = fVar34 * fVar34 + fVar35 * fVar35;
  auVar28._4_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar28._8_4_ = fVar34 * fVar34 + fVar35 * fVar35;
  auVar28._12_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar29 = sqrtps(auVar28,auVar28);
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._8_4_ = auVar29._4_4_;
  auVar31._12_4_ = auVar29._4_4_;
  auVar30._0_4_ = auVar29._0_4_;
  auVar30._8_8_ = auVar31._8_8_;
  auVar30._4_4_ = auVar30._0_4_;
  auVar29 = divps(_DAT_142e3c640,auVar30);
  auVar39._0_4_ = auVar29._0_4_ * fVar34;
  auVar39._4_4_ = auVar29._4_4_ * fVar35;
  auVar39._8_4_ = auVar29._8_4_ * fVar37;
  auVar39._12_4_ = auVar29._12_4_ * fVar38;
  fVar34 = fVar44 - (float)uVar27;
  fVar35 = fVar44 - (float)uVar10;
  fVar37 = fVar23 - (float)((ulonglong)uVar27 >> 0x20);
  fVar23 = fVar23 - (float)((ulonglong)uVar10 >> 0x20);
  auVar32._0_4_ = fVar34 * fVar34;
  auVar32._4_4_ = fVar35 * fVar35;
  auVar32._8_4_ = fVar37 * fVar37;
  auVar32._12_4_ = fVar23 * fVar23;
  auVar5._4_4_ = (fVar45 - fVar26) * (fVar45 - fVar26) + auVar32._4_4_;
  auVar5._0_4_ = (fVar45 - fVar42) * (fVar45 - fVar42) + auVar32._0_4_;
  auVar5._8_4_ = (fVar36 - fVar33) * (fVar36 - fVar33) + auVar32._8_4_;
  auVar5._12_4_ = (fVar36 - fVar25) * (fVar36 - fVar25) + auVar32._12_4_;
  auVar29 = sqrtps(auVar32,auVar5);
  lVar9 = lVar17 * 0x40;
  *(ulonglong *)(pbStack_120 + lVar9) = CONCAT44(fVar45,fVar44);
  *(ulonglong *)(pbStack_120 + lVar9 + 8) = uVar21;
  *(ulonglong *)(pbStack_120 + lVar9 + 0x10) = CONCAT44(fVar24,fStack_1e8);
  *(undefined1 (*) [16])(pbStack_120 + lVar9 + 0x18) = auVar39;
  *(float *)(pbStack_120 + lVar9 + 0x28) = extraout_XMM0_Da;
  *(float *)(pbStack_120 + lVar9 + 0x2c) = fStack_164;
  *(float *)(pbStack_120 + lVar9 + 0x30) = fVar43;
  *(longlong *)(pbStack_120 + lVar9 + 0x34) = auVar29._0_8_;
  lStack_118 = lVar17 + 1;
  goto LAB_1414756b0;
LAB_141475a10:
  uStack_f1 = 1;
  uVar27 = pdb_140def6a0(puVar20,fVar44);
  auVar29._8_8_ = extraout_XMM0_Qb;
  auVar29._0_8_ = extraout_XMM0_Qa;
  if ((float)extraout_XMM0_Qa <= 0.0) {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar29._4_12_;
    auVar29 = auVar6 << 0x20;
  }
  if (auVar29._0_4_ < fVar24) {
    fVar24 = (float)*puVar20 - fVar44;
    fVar25 = (float)(*puVar20 >> 0x20) - fVar45;
    fVar42 = _DAT_142e36f28 / SQRT(fVar25 * fVar25 + fVar24 * fVar24);
    auStack_1d8._0_4_ = fVar42 * fVar24;
    auStack_1d8._4_4_ = fVar42 * fVar25;
    auStack_1d8._8_4_ = (0.0 - fVar23) * 0.0;
    auStack_1d8._12_4_ = (0.0 - fVar36) * 0.0;
    fVar24 = auVar29._0_4_;
LAB_141475a6b:
    uStack_110 = (uint)CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
  }
  goto LAB_141475990;
}

