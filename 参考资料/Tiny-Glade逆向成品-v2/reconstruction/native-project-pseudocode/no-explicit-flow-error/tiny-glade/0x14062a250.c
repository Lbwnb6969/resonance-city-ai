// VA 0x14062a250, PDB extent 6452 bytes
// tiny_glade::gui::gui_tod_editor::draw_ruler
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::draw_ruler
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 6452 */

float * pdb_14062a250(float *param_1,longlong param_2,byte *param_3,longlong param_4,
                     longlong param_5,undefined8 *param_6)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  byte *pbVar20;
  bool bVar21;
  bool bVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined2 uVar43;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  uint auStack_388 [4];
  longlong *aplStack_378 [6];
  int iStack_348;
  float fStack_344;
  char cStack_335;
  char cStack_334;
  byte bStack_331;
  uint uStack_328;
  undefined4 uStack_324;
  undefined8 uStack_318;
  uint uStack_310;
  undefined4 uStack_30c;
  ulonglong uStack_308;
  uint *puStack_300;
  code *pcStack_2f8;
  longlong *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint uStack_2d0;
  float fStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  char cStack_2bc;
  byte bStack_2b9;
  undefined8 uStack_2b8;
  ulonglong uStack_2b0;
  byte *pbStack_2a8;
  longlong lStack_298;
  float *pfStack_290;
  int iStack_284;
  float fStack_280;
  float fStack_27c;
  undefined8 uStack_278;
  code *pcStack_270;
  float *pfStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  float fStack_250;
  undefined4 uStack_24c;
  longlong *plStack_248;
  float fStack_240;
  uint uStack_23c;
  longlong *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  longlong *plStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  float fStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  uint uStack_198;
  float fStack_194;
  byte *pbStack_190;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong *plStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  float fStack_108;
  undefined1 uStack_101;
  longlong lStack_100;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pdb_140d15f80(param_2);
  uVar42 = 0;
  pdb_140d17380(&uStack_178,param_2);
  *param_1 = (float)uStack_178;
  param_1[1] = uStack_178._4_4_;
  param_1[2] = (float)uStack_170;
  param_1[3] = uStack_170._4_4_;
  LOCK();
  *plStack_158 = *plStack_158 + -1;
  UNLOCK();
  if (*plStack_158 == 0) {
    pdb_140d71bf0(&plStack_158);
  }
  fVar41 = *param_1;
  uVar3 = *(ulonglong *)param_1;
  fStack_1e8 = (float)*(undefined8 *)(param_1 + 1);
  fStack_1e4 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  fVar1 = param_1[3];
  plStack_1c0 = *(longlong **)(param_2 + 0x120);
  LOCK();
  lVar15 = *plStack_1c0;
  *plStack_1c0 = *plStack_1c0 + 1;
  UNLOCK();
  lStack_298 = param_4;
  pbStack_190 = param_3;
  if (*plStack_1c0 == 0 || SCARRY8(lVar15,1) != *plStack_1c0 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uStack_1d0 = *(undefined8 *)(param_2 + 0x110);
  uStack_1c8 = *(undefined1 *)(param_2 + 0x118);
  uStack_1a0 = *(undefined1 *)(param_2 + 0x140);
  uStack_1a4 = *(undefined4 *)(param_2 + 0x13c);
  fStack_1a8 = *(float *)(param_2 + 0x138);
  uVar2 = *(ulonglong *)(param_2 + 0x128);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar2;
  auVar30 = maxps(auVar29,auVar26);
  uStack_1b8 = CONCAT44(~-(uint)NAN(fStack_1e8) & auVar30._4_4_,~-(uint)NAN(fVar41) & auVar30._0_4_)
               | CONCAT44((uint)(uVar2 >> 0x20) & -(uint)NAN(fStack_1e8),
                          (uint)uVar2 & -(uint)NAN(fVar41));
  uVar3 = *(ulonglong *)(param_2 + 0x130);
  uStack_1e0 = 0;
  uStack_1dc = 0;
  auVar27._4_4_ = fVar1;
  auVar27._0_4_ = fStack_1e4;
  auVar27._8_8_ = 0;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar3;
  auVar30 = minps(auVar31,auVar27);
  uStack_1b0 = CONCAT44(~-(uint)NAN(fVar1) & auVar30._4_4_,~-(uint)NAN(fStack_1e4) & auVar30._0_4_)
               | CONCAT44((uint)(uVar3 >> 0x20) & -(uint)NAN(fVar1),
                          (uint)uVar3 & -(uint)NAN(fStack_1e4));
  pfStack_290 = param_1;
  lStack_100 = param_2;
  pdb_14063ea10(&uStack_1d0,param_1,uStack_1a4,0xff191919,uVar42);
  uVar43 = (undefined2)((uint)uVar42 >> 0x10);
  pdb_140d354a0(&uStack_178,&UNK_142f89770,*(longlong *)(lStack_100 + 0x150) + 0x10);
  auVar30._4_4_ = fStack_1e4;
  auVar30._0_4_ = fStack_1e8;
  auVar30._8_4_ = uStack_1e0;
  auVar30._12_4_ = uStack_1dc;
  auVar32._4_12_ = auVar30._4_12_;
  auVar32._0_4_ = (fStack_1e8 + fVar1) * _DAT_142e36f50;
  pdb_14063ef80(&uStack_258,&uStack_1d0,_DAT_142e37900 + fVar41,auVar32._0_8_,CONCAT22(uVar43,0x100)
                ,&UNK_142f89788,0x10,&uStack_178,0xffffffff);
  fVar41 = fVar41 + _DAT_142f895e4;
  uStack_178 = (uint *)CONCAT44(fStack_1e8,fVar41);
  uStack_170 = (code *)CONCAT44(fVar1,fStack_1e4);
  cVar9 = pdb_140d174c0(lStack_100,&uStack_178);
  fStack_188 = fStack_1e4;
  fStack_184 = fStack_1e4;
  uStack_180 = uStack_1dc;
  uStack_17c = uStack_1dc;
  auStack_1f8._0_8_ = lStack_100 + 0x120;
  if (cVar9 != '\0') {
    pdb_1400acc60(&uStack_178,lStack_100 + 0x120);
    iVar8 = (int)(float)uStack_178;
    fVar35 = uStack_178._4_4_;
    iVar11 = pdb_1400ac260(auStack_1f8._0_8_);
    pbVar20 = pbStack_190;
    if (iVar11 == 1) {
      if ((extraout_XMM0_Da != 0.0) || (NAN(extraout_XMM0_Da))) {
        if (iVar8 == 0) {
          fVar35 = (fVar41 + fStack_188) * _DAT_142e36f50;
        }
        fVar28 = *(float *)(pbStack_190 + 0x28);
        if (fVar41 <= fStack_188) {
          fVar23 = 0.0;
          if (((fVar41 < fVar35) && (fVar23 = _DAT_142e36f28, fVar35 < fStack_188)) &&
             (fVar35 = (fVar35 - fVar41) / (fStack_188 - fVar41), fVar35 < _DAT_142e36f28)) {
            fVar23 = (_DAT_142e36f28 - fVar35) * 0.0 + fVar35;
          }
        }
        else {
          uStack_258 = CONCAT44(fVar41,fStack_188);
          fStack_250 = (float)((uint)fStack_250 & 0xffffff00);
          uStack_178 = (uint *)(ulonglong)(uint)_DAT_142e36f28;
          uStack_170 = (code *)((ulonglong)uStack_170 & 0xffffffffffffff00);
          fVar23 = (float)pdb_1402205a0(fVar35,&uStack_258,&uStack_178);
        }
        fVar35 = _DAT_142e36f28;
        fVar33 = *(float *)(&UNK_142f895e8 + (ulonglong)(0.0 < extraout_XMM0_Da) * 4) * fVar28;
        fVar34 = _DAT_142e36f28;
        if (_DAT_142e36f28 <= fVar33) {
          fVar34 = fVar33;
        }
        fVar33 = _DAT_142f57bc8;
        if (fVar34 <= _DAT_142f57bc8) {
          fVar33 = fVar34;
        }
        *(float *)(pbVar20 + 0x28) = fVar33;
        fVar34 = fVar35 - fVar35 / fVar33;
        if (fVar34 < 0.0) {
          uStack_310 = 0;
          uStack_258 = CONCAT44(uStack_258._4_4_,fVar34);
          uStack_178 = &uStack_310;
          uStack_170 = pdb_140f705d0;
          uStack_168 = (uint *)&uStack_258;
          uStack_160 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_142f896b0,&uStack_178,&UNK_142f89750);
        }
        fVar28 = ((fVar35 / fVar28) * fVar23 + *(float *)(pbVar20 + 0x2c)) -
                 (fVar35 / fVar33) * fVar23;
        fVar35 = 0.0;
        if (0.0 <= fVar28) {
          fVar35 = fVar28;
        }
        if (fVar35 <= fVar34) {
          fVar34 = fVar35;
        }
        *(float *)(pbVar20 + 0x2c) = fVar34;
      }
    }
  }
  fVar23 = _DAT_142f57bc4;
  fVar28 = _DAT_142e36f28;
  fStack_108 = _DAT_142e36f28 / *(float *)(pbStack_190 + 0x28);
  fVar35 = *(float *)(pbStack_190 + 0x2c);
  fVar34 = fVar35 + fStack_108;
  bVar21 = false;
  uVar16 = 0;
  while ((uVar14 = uVar16, !bVar21 && ((int)uVar14 < 0x19))) {
    bVar21 = uVar14 == 0x18;
    uVar16 = uVar14 + 1;
    if (bVar21) {
      uVar16 = uVar14;
    }
    fVar33 = (float)(int)uVar14 / fVar23;
    if ((fVar35 <= fVar33) && (fVar33 <= fVar34)) {
      uStack_160 = (code *)0xff8282823f800000;
      bVar22 = (uVar14 & 3) == 0;
      if (!bVar22) {
        uStack_160 = (code *)0xff4646463f800000;
      }
      fVar36 = (fVar33 - fVar35) / (fVar34 - fVar35);
      fVar36 = fVar36 * fStack_188 + (fVar28 - fVar36) * fVar41;
      uStack_170 = (code *)CONCAT44(fVar1 - *(float *)(&UNK_142f895f0 + (ulonglong)bVar22 * 4),
                                    fVar36);
      uStack_168 = (uint *)CONCAT44(fVar1,fVar36);
      uStack_178 = (uint *)0x6;
      pdb_14063ec50(&uStack_1d0,&uStack_178);
      if ((uVar14 & 3) == 0) {
        fVar33 = (float)pub_142e32a70(fVar33 * fVar23 + _DAT_142f57bc8);
        fVar33 = (float)pub_142e32b00(fVar33 * _DAT_142f3e554);
        uVar14 = 0;
        if (0.0 <= fVar33) {
          uVar14 = (uint)(longlong)fVar33;
        }
        uVar12 = 0xffffffff;
        if (fVar33 <= _DAT_142e46a48) {
          uVar12 = uVar14;
        }
        auStack_388[0] = (uVar12 % 0x5a0) / 0x3c;
        uStack_310 = (uVar12 % 0x5a0) % 0x3c;
        uStack_178 = auStack_388;
        uStack_170 = pdb_140f71a50;
        uStack_160 = pdb_140f71a50;
        uStack_168 = &uStack_310;
        pdb_140f60760(&uStack_258,&UNK_142f89864,&uStack_178);
        uStack_f4 = 1;
        pdb_140d354a0(&uStack_178,&UNK_142f897f0,*(longlong *)(lStack_100 + 0x150) + 0x10);
        uStack_f4 = 0;
        pdb_14063f1e0(&uStack_310,&uStack_1d0);
      }
    }
  }
  pdb_1400ad000(&iStack_284);
  if (iStack_284 == 1) {
    if ((*(longlong *)(param_5 + 0x10) != 0) &&
       ((float)((uint)(fStack_27c - (_DAT_142f895f8 + fVar1)) & _DAT_142e377e0) <= _DAT_142e37878))
    {
      lVar15 = 0;
      do {
        fVar33 = *(float *)(*(longlong *)(param_5 + 8) + 0x58 + lVar15);
        if (((fVar35 <= fVar33) && (fVar33 <= fVar34)) &&
           (fVar33 = (fVar33 - fVar35) / (fVar34 - fVar35),
           (float)((uint)(fStack_280 - (fVar33 * fStack_188 + (fVar28 - fVar33) * fVar41)) &
                  _DAT_142e377e0) <= _DAT_142f895fc)) {
          bVar21 = true;
          goto LAB_14062a98b;
        }
        lVar15 = lVar15 + 0x60;
      } while (*(longlong *)(param_5 + 0x10) * 0x60 != lVar15);
    }
    bVar21 = false;
  }
  else {
    bVar21 = false;
  }
LAB_14062a98b:
  uStack_178 = (uint *)&UNK_142f89798;
  uStack_170 = (code *)0x18;
  uVar13 = pdb_140572860(*(undefined8 *)(lStack_100 + 0x148),&uStack_178);
  uStack_178 = (uint *)CONCAT44(fStack_1e8,fVar41);
  uStack_170 = (code *)CONCAT44(fVar1,fStack_1e4);
  pdb_140d19f30(auStack_388,lStack_100,&uStack_178,uVar13,0x10101);
  pbVar20 = pbStack_190;
  lVar15 = lStack_298;
  if (!bVar21) {
    if (cStack_334 == '\0') {
      uStack_178 = (uint *)((ulonglong)uStack_178 & 0xffffffffffffff00);
      if (cStack_335 != '\0') {
        bVar10 = pdb_1400ad370(aplStack_378,&uStack_178);
        bStack_331 = (bVar10 | bStack_331) & 1;
      }
      if (bStack_331 == 0) goto LAB_14062abda;
    }
    if (iStack_348 == 1) {
      if (fVar41 <= fStack_188) {
        fVar33 = fVar35;
        if (((fVar41 < fStack_344) && (fVar33 = fVar34, fStack_344 < fStack_188)) &&
           (fVar36 = (fStack_344 - fVar41) / (fStack_188 - fVar41), fVar36 < _DAT_142e36f28)) {
          fVar33 = fVar36 * fVar34 + (fVar28 - fVar36) * fVar35;
        }
      }
      else {
        uStack_258 = CONCAT44(fVar41,fStack_188);
        fStack_250 = (float)((uint)fStack_250 & 0xffffff00);
        uStack_178 = (uint *)CONCAT44(fVar35,fVar34);
        uStack_170 = (code *)((ulonglong)uStack_170 & 0xffffffffffffff00);
        fVar33 = (float)pdb_1402205a0(fStack_344,&uStack_258,&uStack_178);
      }
      *(float *)(lVar15 + 8) = fVar33;
      pdb_140c1edd0(&uStack_178,param_5);
      *param_6 = CONCAT44(uStack_140,uStack_144);
      *(undefined4 *)(param_6 + 1) = uStack_13c;
    }
  }
LAB_14062abda:
  fVar7 = _UNK_142f8961c;
  fVar6 = _UNK_142f89618;
  fVar36 = _UNK_142f89614;
  fVar33 = _DAT_142f89610;
  pfVar18 = *(float **)(param_5 + 8);
  pfVar17 = pfVar18 + *(longlong *)(param_5 + 0x10) * 0x18;
  fVar38 = _DAT_142f895f8 + fVar1;
  fStack_194 = fStack_188 - fVar41;
  auStack_1f8 = ZEXT416((uint)fVar38);
  fVar39 = fVar38 + _UNK_142f89604;
  fVar38 = fVar38 + _UNK_142f8960c;
  bVar21 = false;
  do {
    pfVar19 = pfVar18 + -2;
    do {
      pfVar18 = pfVar19;
      if (pfVar18 + 2 == pfVar17) {
        if (bVar21) {
          uVar3 = *(ulonglong *)(param_5 + 0x10);
          uStack_178 = (uint *)&uStack_101;
          if (1 < uVar3) {
            if (uVar3 < 0x15) {
              pdb_1400e1980(*(undefined8 *)(param_5 + 8),uVar3,1,&uStack_178);
            }
            else {
              pdb_140224b00(*(undefined8 *)(param_5 + 8),uVar3,&uStack_178);
            }
          }
        }
        fVar35 = (*(float *)(lVar15 + 8) - fVar35) / ((fStack_108 + fVar35) - fVar35);
        fVar35 = fVar35 * fStack_188 + (fVar28 - fVar35) * fVar41;
        if ((fVar41 <= fVar35) && (fVar35 <= fStack_188)) {
          uStack_170 = (code *)CONCAT44(fStack_1e8,fVar35);
          uStack_168 = (uint *)CONCAT44(fVar1,fVar35);
          uStack_160 = (code *)0xff32beff40000000;
          uStack_178 = (uint *)0x6;
          pdb_14063ec50(&uStack_1d0,&uStack_178);
        }
        LOCK();
        *aplStack_378[0] = *aplStack_378[0] + -1;
        UNLOCK();
        if (*aplStack_378[0] == 0) {
          pdb_140d71bf0(aplStack_378);
        }
        LOCK();
        *plStack_1c0 = *plStack_1c0 + -1;
        UNLOCK();
        if (*plStack_1c0 == 0) {
          pdb_140d71bf0(&plStack_1c0);
        }
        return pfStack_290;
      }
      fVar40 = pfVar18[0x18];
      pfVar19 = pfVar18 + 0x18;
    } while ((fVar40 < fVar35) || (fVar34 < fVar40));
    fVar37 = fStack_108 + fVar35;
    fVar40 = (fVar40 - fVar35) / (fVar37 - fVar35);
    fVar40 = fVar40 * fStack_188 + (fVar28 - fVar40) * fVar41;
    fStack_398 = fVar40 + fVar33;
    fStack_394 = fVar39 + fVar36;
    fStack_390 = fVar40 + fVar6;
    fStack_38c = fVar38 + fVar7;
    uStack_168 = *(uint **)(pfVar18 + 0x16);
    uStack_178 = (uint *)&UNK_142f897b0;
    uStack_170 = (code *)0xc;
    uVar13 = pdb_140572400(*(undefined8 *)(lStack_100 + 0x148),&uStack_178);
    pdb_140d19f30(&uStack_310,lStack_100,&fStack_398,uVar13,0x10101);
    bVar10 = bStack_2b9;
    if (cStack_2bc == '\x01') {
LAB_14062ad26:
      uVar13 = *(undefined8 *)(pfVar18 + 0x16);
      pbVar20[0] = 1;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbVar20[4] = 0;
      pbVar20[5] = 0;
      pbVar20[6] = 0;
      pbVar20[7] = 0;
      *(undefined8 *)(pbVar20 + 8) = uVar13;
      if ((bVar10 == 1) && ((uStack_2d0 & 1) != 0)) {
        if (fVar41 <= fStack_188) {
          fVar24 = fVar35;
          if (((fVar41 < fStack_2cc) && (fVar24 = fVar37, fStack_2cc < fStack_188)) &&
             (fVar25 = (fStack_2cc - fVar41) / fStack_194, fVar25 < fVar28)) {
            fVar24 = fVar35 * (fVar28 - fVar25) + fVar37 * fVar25;
          }
        }
        else {
          uStack_258 = CONCAT44(fVar41,fStack_188);
          fStack_250 = (float)((uint)fStack_250 & 0xffffff00);
          uStack_178 = (uint *)CONCAT44(fVar35,fVar37);
          uStack_170 = (code *)((ulonglong)uStack_170 & 0xffffffffffffff00);
          fVar24 = (float)pdb_1402205a0(fStack_2cc,&uStack_258,&uStack_178);
        }
        *pfVar19 = fVar24;
        bVar21 = true;
      }
    }
    else {
      uStack_178 = (uint *)((ulonglong)uStack_178 & 0xffffffffffffff00);
      if (uStack_2c0._3_1_ == '\0') {
        bVar10 = 1;
        bVar4 = bStack_2b9;
      }
      else {
        uStack_f1 = 1;
        bVar10 = pdb_1400ad370(&puStack_300,&uStack_178);
        bVar4 = (bVar10 | bStack_2b9) & 1;
        bVar10 = bStack_2b9;
      }
      if (bVar4 != 0) goto LAB_14062ad26;
    }
    bVar10 = *(longlong *)(pbVar20 + 8) == *(longlong *)(pfVar18 + 0x16) & *pbVar20;
    fVar35 = _DAT_142e37900;
    if (bVar10 == 0) {
      fVar35 = _DAT_142f89620;
    }
    if ((((char)uStack_1a4 == '\x01') && (CONCAT13(uStack_1a0,uStack_1a4._1_3_) == 0)) ||
       ((fStack_1a8 == 0.0 && (!NAN(fStack_1a8))))) {
      uStack_f1 = 1;
      pdb_1400ad0e0(&plStack_1c0,&uStack_1d0,&uStack_1d0);
    }
    else {
      uStack_23c = -(uint)bVar10 | 0xffbeb4b4;
      uStack_24c = auStack_1f8._0_4_;
      plStack_248 = (longlong *)0x0;
      uStack_258 = 4;
      uStack_f3 = 1;
      fStack_250 = fVar40;
      fStack_240 = fVar35;
      pdb_140d24750(&uStack_1d0,&uStack_258);
      uStack_138 = uStack_218;
      uStack_130 = uStack_210;
      uStack_148 = (undefined4)uStack_228;
      uStack_144 = (undefined4)((ulonglong)uStack_228 >> 0x20);
      uStack_140 = (undefined4)uStack_220;
      uStack_13c = (undefined4)((ulonglong)uStack_220 >> 0x20);
      plStack_158 = plStack_238;
      uStack_150 = uStack_230;
      uStack_168 = (uint *)plStack_248;
      uStack_160 = (code *)CONCAT44(uStack_23c,fStack_240);
      uStack_178 = (uint *)uStack_258;
      uStack_170 = (code *)CONCAT44(uStack_24c,fStack_250);
      uStack_f3 = 0;
      puStack_128 = &uStack_1d0;
      puStack_120 = &uStack_1d0;
      pdb_1400abaf0(&plStack_1c0,&uStack_178);
    }
    puStack_120 = (undefined8 *)uStack_2b8;
    uStack_130 = uStack_2c8;
    uStack_178 = (uint *)CONCAT44(uStack_30c,uStack_310);
    uStack_148 = (undefined4)uStack_2e0;
    uStack_144 = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    uStack_140 = (undefined4)uStack_2d8;
    uStack_13c = (undefined4)((ulonglong)uStack_2d8 >> 0x20);
    plStack_158 = plStack_2f0;
    uStack_150 = uStack_2e8;
    uStack_168 = puStack_300;
    uStack_160 = pcStack_2f8;
    uStack_170 = (code *)uStack_308;
    fVar35 = (float)pub_142e32a70(*pfVar19 * fVar23 + _DAT_142f57bc8);
    fVar35 = (float)pub_142e32b00(fVar35 * _DAT_142f3e554);
    uVar16 = (uint)(longlong)fVar35;
    if (fVar35 < 0.0) {
      uVar16 = 0;
    }
    if (_DAT_142e46a48 < fVar35) {
      uVar16 = 0xffffffff;
    }
    uStack_198 = (uVar16 % 0x5a0) / 0x3c;
    uStack_328 = (uVar16 % 0x5a0) % 0x3c;
    uStack_278 = (ulonglong *)&uStack_198;
    pcStack_270 = pdb_140f71a50;
    pfStack_268 = (float *)&uStack_328;
    pcStack_260 = pdb_140f71a50;
    uStack_f2 = 1;
    pdb_140f60760(&uStack_2b0,&UNK_142f89864,&uStack_278);
    uStack_278 = &uStack_2b0;
    pcStack_270 = pdb_140001020;
    pcStack_260 = pdb_140f70fc0;
    pfStack_268 = pfVar19;
    pdb_140f60760(&uStack_328,&UNK_142f897bc,&uStack_278);
    if (uStack_2b0 != 0) {
      pub_1406abac0(pbStack_2a8,uStack_2b0,1);
    }
    uStack_278 = (ulonglong *)CONCAT44(uStack_324,uStack_328);
    pfStack_268 = (float *)uStack_318;
    uStack_f2 = 0;
    pdb_14056db00(&uStack_258,&uStack_178,&uStack_278);
    LOCK();
    *plStack_248 = *plStack_248 + -1;
    UNLOCK();
    if (*plStack_248 == 0) {
      uStack_f1 = 0;
      pdb_140d71bf0(&plStack_248);
    }
    pfVar18 = pfVar18 + 0x1a;
    fVar35 = *(float *)(pbStack_190 + 0x2c);
    pbVar20 = pbStack_190;
  } while( true );
}

