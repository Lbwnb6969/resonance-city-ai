// VA 0x142b4ef10, PDB extent 3616 bytes
// system_critters::boids::Boid::frame_update<system_critters::fish::fish::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::boids::Boid::frame_update<system_critters::fish::fish::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
   Extent: 3616 */

undefined8
pdb_142b4ef10(float *param_1,int *param_2,longlong param_3,float *param_4,longlong param_5,
             undefined8 param_6,float param_7,float param_8,float param_9,float param_10,
             undefined8 *param_11,float param_12)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  longlong lVar11;
  float fVar12;
  float extraout_XMM0_Da;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  undefined4 uVar39;
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  float fVar48;
  undefined8 **ppuStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  code *pcStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [8];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auVar33 [16];
  
  uStack_e8 = *(undefined8 *)(param_1 + 3);
  uStack_e0 = 0;
  fVar48 = param_1[5];
  pdb_142b4dbb0(uStack_e8,param_2,param_3,param_6);
  uVar13 = (ulonglong)(uint)param_1[4];
  fVar42 = 0.0;
  if (0.0 < param_1[4]) {
    uVar13 = pdb_140de93b0();
  }
  fVar41 = *param_1;
  fVar32 = param_1[3];
  fVar23 = param_1[5];
  fVar14 = (float)(uVar13 >> 0x20);
  fVar16 = (float)uVar13;
  fVar15 = 0.0;
  auStack_108 = ZEXT416((uint)fVar48);
  if (param_5 != 0) {
    pfVar1 = param_4 + param_5 * 6;
    fVar29 = (float)*(undefined8 *)(param_1 + 1);
    fVar37 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    fStack_15c = param_9 * param_9;
    fStack_160 = 0.0 - param_9;
    fVar43 = 0.0;
    fVar45 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    lVar11 = 0;
    iVar7 = 0;
    fVar31 = 0.0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    fVar42 = 0.0;
    fStack_138 = 0.0;
    fStack_134 = 0.0;
    fStack_130 = 0.0;
    fStack_12c = 0.0;
    fVar48 = 0.0;
    auVar34 = ZEXT816(0);
LAB_142b4f058:
    _auStack_128 = auVar34;
    fStack_118 = fVar48;
    lVar11 = lVar11 + 1;
    fVar48 = fStack_118;
    auVar34 = _auStack_128;
    if (0 < iVar7) {
      do {
        if (-param_3 + lVar11 != 1) {
          fVar12 = *param_4;
          fVar24 = fVar12 - fVar41;
          uVar9 = *(undefined8 *)(param_4 + 1);
          fVar30 = (float)uVar9 - fVar29;
          fVar35 = (float)((ulonglong)uVar9 >> 0x20) - fVar37;
          uVar13 = CONCAT44(fVar35,fVar30);
          fVar40 = fVar35 * fVar35 + fVar24 * fVar24 + fVar30 * fVar30;
          if (fVar40 < _DAT_1430241ac) {
            fVar36 = param_4[3];
            auVar44._0_8_ = *(undefined8 *)(param_4 + 4);
            fVar27 = (float)auVar44._0_8_;
            fVar28 = (float)((ulonglong)auVar44._0_8_ >> 0x20);
            if ((0.0 <= fVar23 * fVar28 + fVar32 * fVar36 + fVar16 * fVar27) &&
               (_DAT_142e36f38 <=
                (fVar35 * fVar28 + fVar24 * fVar36 + fVar30 * fVar27) /
                SQRT((fVar28 * fVar28 + fVar36 * fVar36 + fVar27 * fVar27) * fVar40)))
            goto LAB_142b4f247;
          }
        }
        param_4 = param_4 + 6;
        lVar11 = lVar11 + 1;
        if (param_4 == pfVar1) goto LAB_142b4f32d;
      } while( true );
    }
    do {
      if (-param_3 + lVar11 != 1) {
        fVar12 = *param_4;
        fVar24 = fVar12 - fVar41;
        uVar9 = *(undefined8 *)(param_4 + 1);
        fVar30 = (float)uVar9 - fVar29;
        fVar35 = (float)((ulonglong)uVar9 >> 0x20) - fVar37;
        uVar13 = CONCAT44(fVar35,fVar30);
        fVar40 = fVar35 * fVar35 + fVar24 * fVar24 + fVar30 * fVar30;
        if (fVar40 < _DAT_1430241ac) {
          fVar36 = param_4[3];
          auVar44._0_8_ = *(undefined8 *)(param_4 + 4);
          fVar27 = (float)auVar44._0_8_;
          fVar28 = (float)((ulonglong)auVar44._0_8_ >> 0x20);
          if (_DAT_142e36f38 <=
              (fVar35 * fVar28 + fVar24 * fVar36 + fVar30 * fVar27) /
              SQRT((fVar28 * fVar28 + fVar36 * fVar36 + fVar27 * fVar27) * fVar40))
          goto LAB_142b4f247;
        }
      }
      param_4 = param_4 + 6;
      lVar11 = lVar11 + 1;
      if (param_4 == pfVar1) goto LAB_142b4f32d;
    } while( true );
  }
  fVar43 = 0.0;
  fVar45 = 0.0;
  fVar46 = 0.0;
  fVar47 = 0.0;
LAB_142b4f48d:
  pfVar1 = param_1 + 3;
  fVar32 = fVar42 * _DAT_14367db30 + fVar32;
  fVar16 = fVar43 * _DAT_14367db40 + fVar16;
  fVar23 = fVar45 * _UNK_14367db44 + fVar23;
  fVar14 = fVar46 * _UNK_14367db48 + fVar14;
  fVar15 = fVar47 * _UNK_14367db4c + fVar15;
  param_1[3] = fVar32;
  param_1[4] = fVar16;
  param_1[5] = fVar23;
  iVar7 = *param_2;
  if (iVar7 == 0) {
    fVar48 = param_1[2];
    fVar42 = _DAT_142e37adc;
  }
  else {
    fVar48 = param_1[2];
    fVar23 = (float)param_2[3] - fVar48;
    fVar42 = (float)*(undefined8 *)(param_2 + 1) - fVar41;
    fVar32 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) - param_1[1];
    uStack_158 = (float *)CONCAT44(fVar32,fVar42);
    fVar42 = _DAT_143007998 * SQRT(fVar23 * fVar23 + fVar32 * fVar32 + fVar42 * fVar42);
    if (_DAT_142e37adc <= fVar42) {
      fVar42 = _DAT_142e37adc;
    }
    uStack_150 = (code *)CONCAT44(uStack_150._4_4_,fVar23);
    fStack_170 = param_1[5];
    ppuStack_178 = *(undefined8 ***)pfVar1;
    pdb_140de9a40(&fStack_16c,&ppuStack_178,&uStack_158);
    param_1[5] = fStack_164;
    *(longlong *)pfVar1 = CONCAT44(fStack_168,fStack_16c);
    fVar32 = param_1[3];
    fVar16 = param_1[4];
    fVar23 = param_1[5];
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  fVar29 = _DAT_142e36f28;
  fVar31 = 0.0;
  fVar37 = _DAT_142e36f28 / SQRT(fVar23 * fVar23 + fVar32 * fVar32 + fVar16 * fVar16);
  uVar9 = *param_11;
  fVar42 = (float)pdb_140a7d8d0(uVar9,fVar42 * fVar32 * fVar37 + fVar41);
  if (_DAT_142e36f50 <= fVar42) {
    puVar10 = &UNK_14367db50;
    fVar42 = *(float *)(&UNK_14367db50 + (ulonglong)(iVar7 == 0) * 4);
    uVar39 = auStack_108._8_4_;
LAB_142b4f910:
    fVar32 = fVar32 - (float)uStack_e8;
    fVar16 = fVar16 - uStack_e8._4_4_;
    fVar23 = fVar23 - (float)auStack_108._0_4_;
    auVar44._0_8_ = CONCAT44(fVar23,fVar16);
    auVar44._8_4_ = fVar14 - uStack_e0._4_4_;
    auVar44._12_4_ = fVar15 - uStack_e0._4_4_;
    fVar23 = fVar23 * fVar23 + fVar32 * fVar32 + fVar16 * fVar16;
    if (fVar42 * fVar42 < fVar23) {
      fVar23 = SQRT(fVar23);
      auVar2._4_4_ = fVar23;
      auVar2._0_4_ = fVar23;
      auVar2._8_4_ = auVar44._12_4_ * auVar44._12_4_;
      auVar2._12_4_ = auVar44._12_4_ * auVar44._12_4_;
      auVar34 = divps(auVar44,auVar2);
      fVar32 = (fVar32 / fVar23) * fVar42;
      auVar44._0_8_ = CONCAT44(auVar34._4_4_ * fVar42,auVar34._0_4_ * fVar42);
    }
    fVar23 = _DAT_142e36f38 * fVar42;
    fVar42 = fVar42 * _DAT_142e36f50;
    if (fVar42 < fVar23) {
      ppuStack_178 = (undefined8 **)CONCAT44(ppuStack_178._4_4_,fVar42);
      uStack_158 = &fStack_16c;
      uStack_150 = pdb_140f705d0;
      pppuStack_148 = &ppuStack_178;
      pcStack_140 = pdb_140f705d0;
      fStack_16c = fVar23;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14367db58,&uStack_158,&UNK_14367dbf8);
    }
    if (fVar23 <= (float)auVar44._0_8_) {
      fVar23 = (float)auVar44._0_8_;
    }
    if (fVar23 <= fVar42) {
      fVar42 = fVar23;
    }
    fVar32 = (float)uStack_e8 + fVar32;
    fVar42 = uStack_e8._4_4_ + fVar42;
    auVar26._0_8_ = CONCAT44(fVar42,fVar32);
    auVar26._8_4_ = (float)uStack_e0 + fVar31;
    auVar26._12_4_ = uStack_e0._4_4_ + 0.0;
    fVar16 = (float)auStack_108._0_4_ + (float)((ulonglong)auVar44._0_8_ >> 0x20);
    *(undefined8 *)(param_1 + 3) = auVar26._0_8_;
    param_1[5] = fVar16;
    fVar23 = param_7;
    if (*param_2 == 1) {
      fVar14 = SQRT(((float)param_2[1] - fVar41) * ((float)param_2[1] - fVar41) +
                    ((float)param_2[2] - param_1[1]) * ((float)param_2[2] - param_1[1]) +
                    ((float)param_2[3] - fVar48) * ((float)param_2[3] - fVar48)) * _DAT_142e36f50;
      fVar23 = fVar29;
      if (fVar14 <= fVar29) {
        fVar23 = fVar14;
      }
      fVar23 = (float)pdb_140de9fd0(puVar10,fVar29,
                                    (_DAT_142e3788c - (fVar23 + fVar23)) * fVar23 * fVar23);
      fVar23 = fVar23 * param_7;
    }
    fVar42 = fVar16 * fVar16 + fVar42 * fVar42 + fVar32 * fVar32;
    if ((fVar42 < fVar23 * fVar23) || (fVar23 = param_8, param_8 * param_8 < fVar42)) {
      fVar42 = SQRT(fVar42);
      auVar21._4_4_ = fVar42;
      auVar21._0_4_ = fVar42;
      auVar21._8_4_ = uVar39;
      auVar21._12_4_ = uVar39;
      auVar34 = divps(auVar26,auVar21);
      auVar26._0_8_ = CONCAT44(auVar34._4_4_ * fVar23,auVar34._0_4_ * fVar23);
      fVar16 = (fVar16 / fVar42) * fVar23;
    }
    *(undefined8 *)(param_1 + 3) = auVar26._0_8_;
    param_1[5] = fVar16;
    if (((0x7f7fffff < ((uint)auVar26._0_8_ & 0x7fffffff)) ||
        (0x7f7fffff < ((uint)((ulonglong)auVar26._0_8_ >> 0x20) & 0x7fffffff))) ||
       (0x7f7fffff < (uint)ABS(fVar16))) {
      param_1[5] = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      auVar26._0_8_ = 0;
      fVar16 = 0.0;
    }
    fVar23 = param_12 * (float)auVar26._0_8_;
    fVar32 = param_12 * (float)((ulonglong)auVar26._0_8_ >> 0x20);
    fVar16 = fVar16 * param_12;
    fVar42 = SQRT(fVar16 * fVar16 + fVar32 * fVar32 + fVar23 * fVar23);
    fVar29 = fVar29 / fVar42;
    if ((int)fVar29 - 1U < 0x7fffff || (int)ABS(fVar29) - 0x800000U < 0x7f000000 && -1 < (int)fVar29
       ) {
      fVar42 = (float)pdb_140a7d8d0(uVar9,fVar23 * fVar29 * fVar42 + fVar41);
      if (_DAT_142e36f50 <= fVar42) {
        *(ulonglong *)param_1 = CONCAT44(fVar32 + param_1[1],fVar23 + fVar41);
        param_1[2] = fVar16 + fVar48;
      }
      else {
        *param_1 = fVar41 - fVar23;
        fVar42 = (float)(_DAT_142e37820 ^ (uint)fVar16);
        uVar13 = CONCAT44(fVar32,fVar23) ^ UNK_142e37824._4_8_;
        auVar5._4_8_ = uVar13;
        auVar5._0_4_ = (float)((uint)fVar32 ^ (uint)UNK_142e37824) * param_7;
        auVar22._0_8_ = auVar5._0_8_ << 0x20;
        auVar22._8_4_ = (float)uVar13 * param_7;
        auVar22._12_4_ = (float)(uVar13 >> 0x20) * param_7;
        *(ulonglong *)(param_1 + 1) = CONCAT44(fVar48 - fVar16,param_1[1] - fVar32);
        *(longlong *)(param_1 + 3) = auVar22._8_8_;
        param_1[5] = fVar42 * param_7;
      }
    }
    uVar9 = 0;
  }
  else {
    fVar42 = _DAT_142e4e650;
    fVar14 = _UNK_142e4e654;
    fVar15 = _UNK_142e4e658;
    fVar31 = _UNK_142e4e65c;
    if ((int)fVar37 - 1U < 0x7fffff || (int)ABS(fVar37) - 0x800000U < 0x7f000000 && -1 < (int)fVar37
       ) {
      fStack_168 = fVar16 * fVar37;
      fStack_170 = 1.0;
      ppuStack_178 = (undefined8 **)0x0;
      fStack_16c = fVar32 * fVar37;
      fStack_164 = fVar23 * fVar37;
      pdb_140f335d0(&uStack_158,&ppuStack_178,&fStack_16c);
      fVar42 = (float)uStack_158;
      fVar14 = uStack_158._4_4_;
      fVar15 = (float)uStack_150;
      fVar31 = uStack_150._4_4_;
    }
    uStack_f8 = 0x143cb2890;
    if (_DAT_143cb2aa0 != 0) {
      puStack_f0 = &uStack_f8;
      ppuStack_178 = &puStack_f0;
      pdb_142dc7060(&DAT_143cb2aa0,0,&ppuStack_178,&UNK_14367da60,&UNK_14367da38);
    }
    fVar23 = _DAT_142e37adc;
    fVar16 = fVar15 * fVar15;
    fVar37 = fVar31 * fVar31;
    fVar32 = fVar14 * fVar14 + fVar42 * fVar42;
    fVar43 = fVar31 + fVar31;
    fVar41 = *param_1;
    fVar48 = param_1[2];
    lVar11 = 0;
    do {
      fVar45 = *(float *)(lVar11 + 0x143cb28a0);
      fVar46 = *(float *)(lVar11 + 0x143cb28a4);
      fVar47 = *(float *)(lVar11 + 0x143cb28a8);
      fVar12 = *(float *)(lVar11 + 0x143cb28ac);
      fVar40 = fVar15 * fVar47 + fVar14 * fVar46 + fVar42 * fVar45;
      fVar40 = fVar40 + fVar40;
      auVar17._0_4_ = fVar40 * fVar42 + (fVar37 - (fVar32 + fVar16)) * fVar45;
      auVar17._4_4_ = fVar40 * fVar14 + (fVar37 - (fVar32 + fVar16)) * fVar46;
      auVar17._8_4_ = fVar40 * fVar15 + (fVar37 - (fVar32 + fVar16)) * fVar47;
      auVar17._12_4_ = fVar40 * fVar31 + (fVar37 - (fVar32 + fVar16)) * fVar12;
      fVar40 = (fVar14 * fVar47 - fVar46 * fVar15) * fVar43 + auVar17._0_4_;
      fVar47 = (fVar15 * fVar45 - fVar47 * fVar42) * fVar43 + auVar17._4_4_;
      fVar45 = (fVar42 * fVar46 - fVar45 * fVar14) * fVar43 + auVar17._8_4_;
      fVar46 = (fVar31 * fVar12 - fVar12 * fVar31) * fVar43 + auVar17._12_4_;
      auVar4._4_8_ = auVar17._8_8_;
      auVar4._0_4_ = fVar47;
      auVar18._0_8_ = auVar4._0_8_ << 0x20;
      auVar18._8_4_ = fVar45;
      auVar18._12_4_ = fVar46;
      auVar19._12_4_ = fVar46;
      auVar19._8_4_ = fVar45;
      auVar19._0_8_ = auVar18._8_8_;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar45 * fVar23 + fVar48;
      pdb_140a7d8d0(uVar9,fVar40 * fVar23 + fVar41,auVar20._0_8_);
      if (_DAT_142e36f50 <= extraout_XMM0_Da) {
        fVar42 = param_1[3];
        fVar23 = fVar29 / SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar40 * fVar40);
        puVar10 = (undefined *)(ulonglong)(-1 < (int)fVar23);
        bVar3 = (int)fVar23 - 1U < 0x7fffff ||
                (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23;
        if (bVar3) {
          fVar40 = fVar40 * fVar23;
          fVar31 = fVar47;
        }
        else {
          fVar40 = 0.0;
          fVar31 = 0.0;
        }
        uVar8 = (uint)bVar3;
        fVar16 = (float)*(undefined8 *)(param_1 + 4);
        fVar15 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
        fVar14 = SQRT(fVar15 * fVar15 + fVar42 * fVar42 + fVar16 * fVar16);
        fVar32 = fVar40 * fVar14 * _DAT_142e37900 + fVar42 * _DAT_143006a20;
        fVar16 = fVar14 * (float)((int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar47 * fVar23)) *
                 _DAT_142e37910 + fVar16 * _DAT_143015140;
        fVar23 = fVar14 * (float)((int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar45 * fVar23)) *
                 _UNK_142e37914 + fVar15 * _UNK_143015144;
        fVar14 = _UNK_142e37918 * 0.0 + _UNK_143015148 * 0.0;
        fVar15 = _UNK_142e3791c * 0.0 + _UNK_14301514c * 0.0;
        param_1[3] = fVar32;
        param_1[4] = fVar16;
        param_1[5] = fVar23;
        fVar42 = _DAT_142e3788c;
        uVar39 = auStack_108._8_4_;
        goto LAB_142b4f910;
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x200);
    uVar9 = 1;
  }
  return uVar9;
LAB_142b4f247:
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar13;
  param_4 = param_4 + 6;
  if (fVar40 < fStack_15c) {
    fVar40 = SQRT(fVar40);
    auVar38._4_4_ = fVar40;
    auVar38._0_4_ = fVar40;
    auVar38._8_8_ = 0;
    fVar30 = (fVar40 - param_9) / fStack_160;
    fVar48 = 0.0;
    if (0.0 <= fVar30) {
      fVar48 = fVar30;
    }
    fVar30 = _DAT_142e36f28;
    if (fVar48 <= _DAT_142e36f28) {
      fVar30 = fVar48;
    }
    fVar48 = (_DAT_142e3788c - (fVar30 + fVar30)) * fVar30 * fVar30;
    fVar42 = fVar42 - (fVar24 / fVar40) * fVar48;
    auVar34 = divps(auVar33,auVar38);
    fVar43 = fVar43 - fVar48 * auVar34._0_4_;
    fVar45 = fVar45 - fVar48 * auVar34._4_4_;
    fVar46 = fVar46 - auVar34._8_4_ * 0.0;
    fVar47 = fVar47 - auVar34._12_4_ * 0.0;
  }
  iVar7 = iVar7 + 1;
  fVar31 = fVar31 + fVar36;
  fStack_138 = fStack_138 + (float)auVar44._0_8_;
  fStack_134 = fStack_134 + (float)((ulonglong)auVar44._0_8_ >> 0x20);
  fStack_130 = fStack_130 + 0.0;
  fStack_12c = fStack_12c + 0.0;
  auVar34._0_4_ = (float)auStack_128._0_4_ + (float)((ulonglong)uVar9 >> 0x20);
  auVar34._4_4_ = (float)auStack_128._4_4_ + fVar12;
  auVar34._8_4_ = fStack_120 + 0.0;
  auVar34._12_4_ = fStack_11c + 0.0;
  fVar48 = fStack_118 + (float)uVar9;
  if (param_4 == pfVar1) goto LAB_142b4f32d;
  goto LAB_142b4f058;
LAB_142b4f32d:
  if (iVar7 != 0) {
    auVar25._0_4_ = (float)iVar7;
    fVar29 = fVar48 / auVar25._0_4_ - fVar29;
    fVar15 = _DAT_142e36f28 - param_10;
    fVar32 = (fVar31 / auVar25._0_4_) * param_10 + fVar32 * fVar15;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_8_ = 0;
    auVar34 = divps(auVar34,auVar25);
    fVar37 = auVar34._0_4_ - fVar37;
    fVar48 = auVar34._4_4_ - fVar41;
    fVar31 = _DAT_142e36f28 / SQRT(fVar48 * fVar48 + fVar29 * fVar29 + fVar37 * fVar37);
    bVar3 = (int)fVar31 - 1U < 0x7fffff ||
            (int)ABS(fVar31) - 0x800000U < 0x7f000000 && -1 < (int)fVar31;
    if (bVar3) {
      fVar48 = fVar48 * fVar31;
    }
    else {
      fVar48 = 0.0;
    }
    auVar6._4_4_ = fStack_134;
    auVar6._0_4_ = fStack_138;
    auVar6._8_4_ = fStack_130;
    auVar6._12_4_ = fStack_12c;
    auVar34 = divps(auVar6,auVar25);
    fVar16 = param_10 * auVar34._0_4_ + fVar15 * fVar16;
    fVar23 = param_10 * auVar34._4_4_ + fVar15 * fVar23;
    fVar15 = auVar34._12_4_ * 0.0 + 0.0;
    uVar8 = (uint)bVar3;
    fVar12 = SQRT(fVar23 * fVar23 + fVar32 * fVar32 + fVar16 * fVar16);
    fVar32 = fVar48 * fVar12 * _DAT_14367db10 + fVar32;
    fVar16 = fVar12 * (float)((uint)(fVar29 * fVar31) & (int)(uVar8 << 0x1f) >> 0x1f) *
             _DAT_14367db20 + fVar16;
    fVar23 = fVar12 * (float)((uint)(fVar37 * fVar31) & (int)(uVar8 << 0x1f) >> 0x1f) *
             _UNK_14367db24 + fVar23;
    fVar14 = fVar15 * fVar15 * 0.0 * _UNK_14367db28 + auVar34._8_4_ * 0.0 + fVar14 * 0.0;
    fVar15 = fVar15 * fVar15 * 0.0 * _UNK_14367db2c + fVar15;
  }
  goto LAB_142b4f48d;
}

