// VA 0x142b4e0f0, PDB extent 3614 bytes
// system_critters::boids::Boid::frame_update<system_critters::wren_boids::sim_wren_boids::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::boids::Boid::frame_update<system_critters::wren_boids::sim_wren_boids::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
   Extent: 3614 */

undefined8
pdb_142b4e0f0(float *param_1,int *param_2,longlong param_3,float *param_4,longlong param_5,
             undefined8 param_6,float param_7,float param_8,float param_9,float param_10,
             undefined8 param_11,float param_12)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  undefined8 **ppuStack_1a0;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  code *pcStack_188;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar28 [16];
  
  uStack_110 = param_11;
  uStack_f8 = *(undefined8 *)(param_1 + 3);
  uStack_f0 = 0;
  fVar33 = param_1[5];
  pdb_142b4dbb0(uStack_f8,param_2,param_3,param_6);
  uVar11 = (ulonglong)(uint)param_1[4];
  fVar37 = 0.0;
  if (0.0 < param_1[4]) {
    uVar11 = pdb_140de93b0();
  }
  fVar25 = param_1[3];
  fVar17 = param_1[5];
  fVar12 = (float)(uVar11 >> 0x20);
  fVar14 = (float)uVar11;
  fVar13 = 0.0;
  if (param_5 != 0) {
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    pfVar1 = param_4 + param_5 * 6;
    fVar35 = *param_1;
    fVar27 = (float)*(undefined8 *)(param_1 + 1);
    fVar32 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    fStack_16c = param_9 * param_9;
    fStack_170 = 0.0 - param_9;
    fVar38 = 0.0;
    fVar40 = 0.0;
    fVar41 = 0.0;
    fVar42 = 0.0;
    lVar9 = 0;
    iVar6 = 0;
    fVar23 = 0.0;
    fVar37 = 0.0;
    _auStack_158 = ZEXT816(0);
    auVar29 = ZEXT816(0);
    auVar34 = ZEXT816(0);
LAB_142b4e252:
    _auStack_138 = auVar34;
    auStack_128 = auVar29;
    lVar9 = lVar9 + 1;
    auVar29 = auStack_128;
    auVar34 = _auStack_138;
    if (0 < iVar6) {
      do {
        if (-param_3 + lVar9 != 1) {
          fVar10 = *param_4;
          fVar24 = fVar10 - fVar35;
          auVar39._0_8_ = *(undefined8 *)(param_4 + 1);
          fVar26 = (float)auVar39._0_8_ - fVar27;
          fVar30 = (float)((ulonglong)auVar39._0_8_ >> 0x20) - fVar32;
          uVar11 = CONCAT44(fVar30,fVar26);
          fVar36 = fVar30 * fVar30 + fVar24 * fVar24 + fVar26 * fVar26;
          if (fVar36 < _DAT_1430241ac) {
            fVar31 = param_4[3];
            auVar20._0_8_ = *(undefined8 *)(param_4 + 4);
            fVar21 = (float)auVar20._0_8_;
            fVar22 = (float)((ulonglong)auVar20._0_8_ >> 0x20);
            if ((0.0 <= fVar17 * fVar22 + fVar25 * fVar31 + fVar14 * fVar21) &&
               (_DAT_142e36f38 <=
                (fVar30 * fVar22 + fVar24 * fVar31 + fVar26 * fVar21) /
                SQRT((fVar22 * fVar22 + fVar31 * fVar31 + fVar21 * fVar21) * fVar36)))
            goto LAB_142b4e448;
          }
        }
        param_4 = param_4 + 6;
        lVar9 = lVar9 + 1;
        if (param_4 == pfVar1) goto LAB_142b4e537;
      } while( true );
    }
    do {
      if (-param_3 + lVar9 != 1) {
        fVar10 = *param_4;
        fVar24 = fVar10 - fVar35;
        auVar39._0_8_ = *(undefined8 *)(param_4 + 1);
        fVar26 = (float)auVar39._0_8_ - fVar27;
        fVar30 = (float)((ulonglong)auVar39._0_8_ >> 0x20) - fVar32;
        uVar11 = CONCAT44(fVar30,fVar26);
        fVar36 = fVar30 * fVar30 + fVar24 * fVar24 + fVar26 * fVar26;
        if (fVar36 < _DAT_1430241ac) {
          fVar31 = param_4[3];
          auVar20._0_8_ = *(undefined8 *)(param_4 + 4);
          fVar21 = (float)auVar20._0_8_;
          fVar22 = (float)((ulonglong)auVar20._0_8_ >> 0x20);
          if (_DAT_142e36f38 <=
              (fVar30 * fVar22 + fVar24 * fVar31 + fVar26 * fVar21) /
              SQRT((fVar22 * fVar22 + fVar31 * fVar31 + fVar21 * fVar21) * fVar36))
          goto LAB_142b4e448;
        }
      }
      param_4 = param_4 + 6;
      lVar9 = lVar9 + 1;
      if (param_4 == pfVar1) goto LAB_142b4e537;
    } while( true );
  }
  fVar38 = 0.0;
  fVar40 = 0.0;
  fVar41 = 0.0;
  fVar42 = 0.0;
LAB_142b4e6c1:
  pfVar1 = param_1 + 3;
  fVar25 = fVar37 * _DAT_14367db30 + fVar25;
  fVar14 = fVar38 * _DAT_14367db40 + fVar14;
  fVar17 = fVar40 * _UNK_14367db44 + fVar17;
  fVar12 = fVar41 * _UNK_14367db48 + fVar12;
  fVar13 = fVar42 * _UNK_14367db4c + fVar13;
  param_1[3] = fVar25;
  param_1[4] = fVar14;
  param_1[5] = fVar17;
  iVar6 = *param_2;
  fVar37 = _DAT_142e37adc;
  if (iVar6 == 1) {
    fStack_198 = (float)param_2[3] - param_1[2];
    fVar37 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)param_1;
    fVar17 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) -
             (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    ppuStack_1a0 = (undefined8 **)CONCAT44(fVar17,fVar37);
    fVar37 = _DAT_143007998 * SQRT(fStack_198 * fStack_198 + fVar17 * fVar17 + fVar37 * fVar37);
    if (_DAT_142e37adc <= fVar37) {
      fVar37 = _DAT_142e37adc;
    }
    fStack_160 = param_1[5];
    uStack_168 = *(undefined8 *)pfVar1;
    pdb_140de9a40(&fStack_17c,&uStack_168,&ppuStack_1a0);
    param_1[5] = fStack_174;
    *(ulonglong *)pfVar1 = CONCAT44(fStack_178,fStack_17c);
    fVar25 = param_1[3];
    fVar14 = param_1[4];
    fVar17 = param_1[5];
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  fVar35 = _DAT_142e36f28;
  fVar23 = 0.0;
  fStack_198 = param_1[2];
  ppuStack_1a0 = *(undefined8 ***)param_1;
  fVar27 = _DAT_142e36f28 / SQRT(fVar17 * fVar17 + fVar25 * fVar25 + fVar14 * fVar14);
  pcStack_188 = (code *)CONCAT44(pcStack_188._4_4_,fVar37);
  fStack_194 = fVar25 * fVar27;
  uStack_190._0_4_ = fVar27 * fVar14;
  uStack_190._4_4_ = fVar27 * fVar17;
  cVar5 = pdb_142b4df50(param_11,&ppuStack_1a0);
  if (cVar5 == '\0') {
    puVar8 = &UNK_14367db50;
    fVar37 = *(float *)(&UNK_14367db50 + (ulonglong)(iVar6 == 0) * 4);
LAB_142b4eaf4:
    fVar25 = fVar25 - (float)uStack_f8;
    fVar14 = fVar14 - uStack_f8._4_4_;
    fVar17 = fVar17 - fVar33;
    auVar39._0_8_ = CONCAT44(fVar17,fVar14);
    auVar39._8_4_ = fVar12 - uStack_f0._4_4_;
    auVar39._12_4_ = fVar13 - uStack_f0._4_4_;
    fVar17 = fVar17 * fVar17 + fVar25 * fVar25 + fVar14 * fVar14;
    if (fVar37 * fVar37 < fVar17) {
      fVar17 = SQRT(fVar17);
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar17;
      auVar2._8_4_ = auVar39._12_4_ * auVar39._12_4_;
      auVar2._12_4_ = auVar39._12_4_ * auVar39._12_4_;
      auVar29 = divps(auVar39,auVar2);
      fVar25 = (fVar25 / fVar17) * fVar37;
      auVar39._0_8_ = CONCAT44(auVar29._4_4_ * fVar37,auVar29._0_4_ * fVar37);
    }
    fVar17 = _DAT_142e36f38 * fVar37;
    fVar37 = fVar37 * _DAT_142e36f50;
    if (fVar37 < fVar17) {
      uStack_168 = CONCAT44(uStack_168._4_4_,fVar37);
      ppuStack_1a0 = (undefined8 **)&fStack_17c;
      fStack_198 = 7.7194595;
      fStack_194 = 1.4013e-45;
      uStack_190 = &uStack_168;
      pcStack_188 = pdb_140f705d0;
      fStack_17c = fVar17;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14367db58,&ppuStack_1a0,&UNK_14367dbf8);
    }
    if (fVar17 <= (float)auVar39._0_8_) {
      fVar17 = (float)auVar39._0_8_;
    }
    if (fVar17 <= fVar37) {
      fVar37 = fVar17;
    }
    fVar25 = (float)uStack_f8 + fVar25;
    fVar37 = uStack_f8._4_4_ + fVar37;
    auVar20._0_8_ = CONCAT44(fVar37,fVar25);
    auVar20._8_4_ = (float)uStack_f0 + fVar23;
    auVar20._12_4_ = uStack_f0._4_4_ + 0.0;
    fVar33 = fVar33 + (float)((ulonglong)auVar39._0_8_ >> 0x20);
    *(undefined8 *)(param_1 + 3) = auVar20._0_8_;
    param_1[5] = fVar33;
    fVar17 = param_7;
    if (*param_2 == 1) {
      fVar14 = SQRT(((float)param_2[3] - param_1[2]) * ((float)param_2[3] - param_1[2]) +
                    ((float)param_2[2] - param_1[1]) * ((float)param_2[2] - param_1[1]) +
                    ((float)param_2[1] - *param_1) * ((float)param_2[1] - *param_1)) *
               _DAT_142e36f50;
      fVar17 = fVar35;
      if (fVar14 <= fVar35) {
        fVar17 = fVar14;
      }
      fVar17 = (float)pdb_140de9fd0(puVar8,fVar35,
                                    (_DAT_142e3788c - (fVar17 + fVar17)) * fVar17 * fVar17);
      fVar17 = fVar17 * param_7;
    }
    fVar37 = fVar33 * fVar33 + fVar37 * fVar37 + fVar25 * fVar25;
    if ((fVar37 < fVar17 * fVar17) || (fVar17 = param_8, param_8 * param_8 < fVar37)) {
      fVar37 = SQRT(fVar37);
      auVar15._4_4_ = fVar37;
      auVar15._0_4_ = fVar37;
      auVar15._8_8_ = 0;
      auVar29 = divps(auVar20,auVar15);
      auVar20._0_8_ = CONCAT44(auVar29._4_4_ * fVar17,auVar29._0_4_ * fVar17);
      fVar33 = (fVar33 / fVar37) * fVar17;
    }
    *(undefined8 *)(param_1 + 3) = auVar20._0_8_;
    param_1[5] = fVar33;
    if (((0x7f7fffff < ((uint)auVar20._0_8_ & 0x7fffffff)) ||
        (0x7f7fffff < ((uint)((ulonglong)auVar20._0_8_ >> 0x20) & 0x7fffffff))) ||
       (0x7f7fffff < (uint)ABS(fVar33))) {
      param_1[5] = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      auVar20._0_8_ = 0;
      fVar33 = 0.0;
    }
    fVar17 = param_12 * (float)auVar20._0_8_;
    fVar25 = param_12 * (float)((ulonglong)auVar20._0_8_ >> 0x20);
    fVar33 = fVar33 * param_12;
    fVar37 = SQRT(fVar33 * fVar33 + fVar25 * fVar25 + fVar17 * fVar17);
    fVar35 = fVar35 / fVar37;
    if ((int)fVar35 - 1U < 0x7fffff || (int)ABS(fVar35) - 0x800000U < 0x7f000000 && -1 < (int)fVar35
       ) {
      uStack_190._4_4_ = fVar33 * fVar35;
      fStack_198 = param_1[2];
      ppuStack_1a0 = *(undefined8 ***)param_1;
      fStack_194 = fVar35 * fVar17;
      uStack_190._0_4_ = fVar35 * fVar25;
      pcStack_188 = (code *)CONCAT44(pcStack_188._4_4_,fVar37);
      cVar5 = pdb_142b4df50(param_11,&ppuStack_1a0);
      if (cVar5 == '\0') {
        *(ulonglong *)param_1 = CONCAT44(fVar25 + param_1[1],fVar17 + *param_1);
        param_1[2] = fVar33 + param_1[2];
      }
      else {
        *param_1 = *param_1 - fVar17;
        fVar37 = (float)(_DAT_142e37820 ^ (uint)fVar33);
        uVar11 = CONCAT44(fVar25,fVar17) ^ UNK_142e37824._4_8_;
        auVar4._4_8_ = uVar11;
        auVar4._0_4_ = (float)((uint)fVar25 ^ (uint)UNK_142e37824) * param_7;
        auVar16._0_8_ = auVar4._0_8_ << 0x20;
        auVar16._8_4_ = (float)uVar11 * param_7;
        auVar16._12_4_ = (float)(uVar11 >> 0x20) * param_7;
        *(ulonglong *)(param_1 + 1) = CONCAT44(param_1[2] - fVar33,param_1[1] - fVar25);
        *(longlong *)(param_1 + 3) = auVar16._8_8_;
        param_1[5] = fVar37 * param_7;
      }
    }
    auVar39._0_8_ = 0;
  }
  else {
    fVar37 = _DAT_142e4e650;
    fVar12 = _UNK_142e4e654;
    fVar13 = _UNK_142e4e658;
    fVar23 = _UNK_142e4e65c;
    if ((int)fVar27 - 1U < 0x7fffff || (int)ABS(fVar27) - 0x800000U < 0x7f000000 && -1 < (int)fVar27
       ) {
      fStack_198 = 1.0;
      ppuStack_1a0 = (undefined8 **)0x0;
      fStack_17c = fVar25 * fVar27;
      fStack_178 = fVar27 * fVar14;
      fStack_174 = fVar27 * fVar17;
      pdb_140f335d0(&uStack_168,&ppuStack_1a0,&fStack_17c);
      fVar37 = (float)uStack_168;
      fVar12 = uStack_168._4_4_;
      fVar13 = fStack_160;
      fVar23 = fStack_15c;
    }
    uStack_108 = 0x143cb2890;
    if (_DAT_143cb2aa0 != 0) {
      puStack_100 = &uStack_108;
      ppuStack_1a0 = &puStack_100;
      pdb_142dc7060(&DAT_143cb2aa0,0,&ppuStack_1a0,&UNK_14367da60,&UNK_14367da38);
    }
    fVar25 = fVar13 * fVar13;
    fVar14 = fVar23 * fVar23;
    fVar17 = fVar12 * fVar12 + fVar37 * fVar37;
    fVar23 = fVar23 + fVar23;
    lVar9 = 0;
    do {
      fVar27 = *(float *)(lVar9 + 0x143cb28a0);
      fVar32 = *(float *)(lVar9 + 0x143cb28a4);
      fVar38 = *(float *)(lVar9 + 0x143cb28a8);
      fVar40 = fVar13 * fVar38 + fVar12 * fVar32 + fVar37 * fVar27;
      fVar40 = fVar40 + fVar40;
      fVar41 = (fVar12 * fVar38 - fVar32 * fVar13) * fVar23 +
               fVar40 * fVar37 + (fVar14 - (fVar17 + fVar25)) * fVar27;
      fVar42 = (fVar13 * fVar27 - fVar38 * fVar37) * fVar23 +
               fVar40 * fVar12 + (fVar14 - (fVar17 + fVar25)) * fVar32;
      fVar27 = (fVar37 * fVar32 - fVar27 * fVar12) * fVar23 +
               fVar40 * fVar13 + (fVar14 - (fVar17 + fVar25)) * fVar38;
      fStack_198 = param_1[2];
      ppuStack_1a0 = *(undefined8 ***)param_1;
      pcStack_188 = (code *)CONCAT44(pcStack_188._4_4_,0x40800000);
      fStack_194 = fVar41;
      uStack_190._0_4_ = fVar42;
      uStack_190._4_4_ = fVar27;
      cVar5 = pdb_1429528b0(&uStack_110,&ppuStack_1a0);
      if (cVar5 == '\0') {
        fVar37 = param_1[3];
        fVar17 = fVar35 / SQRT(fVar27 * fVar27 + fVar42 * fVar42 + fVar41 * fVar41);
        puVar8 = (undefined *)(ulonglong)(-1 < (int)fVar17);
        bVar3 = (int)fVar17 - 1U < 0x7fffff ||
                (int)ABS(fVar17) - 0x800000U < 0x7f000000 && -1 < (int)fVar17;
        if (bVar3) {
          fVar41 = fVar41 * fVar17;
          fVar23 = fVar42;
        }
        else {
          fVar41 = 0.0;
          fVar23 = 0.0;
        }
        uVar7 = (uint)bVar3;
        fVar14 = (float)*(undefined8 *)(param_1 + 4);
        fVar13 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
        fVar12 = SQRT(fVar13 * fVar13 + fVar37 * fVar37 + fVar14 * fVar14);
        fVar25 = fVar41 * fVar12 * _DAT_142e37900 + fVar37 * _DAT_143006a20;
        fVar14 = fVar12 * (float)((int)(uVar7 << 0x1f) >> 0x1f & (uint)(fVar42 * fVar17)) *
                 _DAT_142e37910 + fVar14 * _DAT_143015140;
        fVar17 = fVar12 * (float)((int)(uVar7 << 0x1f) >> 0x1f & (uint)(fVar27 * fVar17)) *
                 _UNK_142e37914 + fVar13 * _UNK_143015144;
        fVar12 = _UNK_142e37918 * 0.0 + _UNK_143015148 * 0.0;
        fVar13 = _UNK_142e3791c * 0.0 + _UNK_14301514c * 0.0;
        param_1[3] = fVar25;
        param_1[4] = fVar14;
        param_1[5] = fVar17;
        fVar37 = _DAT_142e3788c;
        goto LAB_142b4eaf4;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x200);
    auVar39._0_8_ = 1;
  }
  return auVar39._0_8_;
LAB_142b4e448:
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar11;
  param_4 = param_4 + 6;
  if (fVar36 < fStack_16c) {
    fVar36 = SQRT(fVar36);
    auVar18._4_4_ = fVar36;
    auVar18._0_4_ = fVar36;
    auVar18._8_8_ = 0;
    fVar30 = (fVar36 - param_9) / fStack_170;
    fVar26 = 0.0;
    if (0.0 <= fVar30) {
      fVar26 = fVar30;
    }
    fVar30 = _DAT_142e36f28;
    if (fVar26 <= _DAT_142e36f28) {
      fVar30 = fVar26;
    }
    fVar26 = (_DAT_142e3788c - (fVar30 + fVar30)) * fVar30 * fVar30;
    fVar37 = fVar37 - (fVar24 / fVar36) * fVar26;
    auVar29 = divps(auVar28,auVar18);
    fVar38 = fVar38 - fVar26 * auVar29._0_4_;
    fVar40 = fVar40 - fVar26 * auVar29._4_4_;
    fVar41 = fVar41 - auVar29._8_4_ * 0.0;
    fVar42 = fVar42 - auVar29._12_4_ * 0.0;
  }
  iVar6 = iVar6 + 1;
  fVar23 = fVar23 + fVar31;
  auStack_158._4_4_ = (float)auStack_158._4_4_ + (float)((ulonglong)auVar20._0_8_ >> 0x20);
  auStack_158._0_4_ = (float)auStack_158._0_4_ + (float)auVar20._0_8_;
  fStack_150 = fStack_150 + 0.0;
  fStack_14c = fStack_14c + 0.0;
  auVar34._4_4_ = (float)auStack_138._4_4_ + fVar10;
  auVar34._0_4_ = (float)auStack_138._0_4_ + (float)((ulonglong)auVar39._0_8_ >> 0x20);
  auVar34._8_4_ = fStack_130 + 0.0;
  auVar34._12_4_ = fStack_12c + 0.0;
  auVar29._4_12_ = auStack_128._4_12_;
  auVar29._0_4_ = auStack_128._0_4_ + (float)auVar39._0_8_;
  if (param_4 == pfVar1) goto LAB_142b4e537;
  goto LAB_142b4e252;
LAB_142b4e537:
  fStack_148 = fVar33;
  if (iVar6 != 0) {
    auVar19._0_4_ = (float)iVar6;
    fVar27 = auVar29._0_4_ / auVar19._0_4_ - fVar27;
    fVar13 = _DAT_142e36f28 - param_10;
    fVar25 = (fVar23 / auVar19._0_4_) * param_10 + fVar25 * fVar13;
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_8_ = 0;
    auVar29 = divps(auVar34,auVar19);
    fVar32 = auVar29._0_4_ - fVar32;
    fVar35 = auVar29._4_4_ - fVar35;
    fVar23 = _DAT_142e36f28 / SQRT(fVar35 * fVar35 + fVar27 * fVar27 + fVar32 * fVar32);
    bVar3 = (int)fVar23 - 1U < 0x7fffff ||
            (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23;
    if (bVar3) {
      fVar35 = fVar35 * fVar23;
    }
    else {
      fVar35 = 0.0;
    }
    auVar29 = divps(_auStack_158,auVar19);
    fVar14 = param_10 * auVar29._0_4_ + fVar13 * fVar14;
    fVar17 = param_10 * auVar29._4_4_ + fVar13 * fVar17;
    fVar13 = auVar29._12_4_ * 0.0 + 0.0;
    uVar7 = (uint)bVar3;
    fVar10 = SQRT(fVar17 * fVar17 + fVar25 * fVar25 + fVar14 * fVar14);
    fVar25 = fVar35 * fVar10 * _DAT_14367db10 + fVar25;
    fVar14 = fVar10 * (float)((uint)(fVar27 * fVar23) & (int)(uVar7 << 0x1f) >> 0x1f) *
             _DAT_14367db20 + fVar14;
    fVar17 = fVar10 * (float)((uint)(fVar32 * fVar23) & (int)(uVar7 << 0x1f) >> 0x1f) *
             _UNK_14367db24 + fVar17;
    fVar12 = fVar13 * fVar13 * 0.0 * _UNK_14367db28 + auVar29._8_4_ * 0.0 + fVar12 * 0.0;
    fVar13 = fVar13 * fVar13 * 0.0 * _UNK_14367db2c + fVar13;
  }
  goto LAB_142b4e6c1;
}

