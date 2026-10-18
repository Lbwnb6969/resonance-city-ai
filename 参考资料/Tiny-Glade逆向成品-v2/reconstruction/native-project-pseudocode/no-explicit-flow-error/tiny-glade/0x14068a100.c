// VA 0x14068a100, PDB extent 4347 bytes
// tiny_glade::gui::gui_tod::do_time_of_day_screen::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod::do_time_of_day_screen::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 4347 */

void pdb_14068a100(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  float fVar37;
  undefined8 in_stack_fffffffffffffe60;
  ulonglong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_158;
  longlong *plStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulonglong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong *plStack_110;
  ulonglong uStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [160];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar9 = pdb_140725a70(param_2);
  pdb_140732af0(uVar9);
  pdb_1403051b0(&uStack_188,param_2,0);
  uVar9 = pdb_140725a70(&uStack_188);
  pdb_140732b70(uVar9,1);
  uStack_128 = uStack_188;
  uStack_120 = uStack_180;
  uStack_118 = uStack_178;
  lVar10 = pdb_1403062c0(&uStack_128);
  bVar2 = *(byte *)(lVar10 + 8);
  pfVar11 = (float *)pdb_1403062c0(&uStack_128);
  fVar25 = _DAT_142f57bcc;
  fVar24 = _DAT_142e36f28;
  fVar37 = *pfVar11 * _DAT_142e37ae4 * _DAT_142f57bcc;
  pbVar5 = (byte *)*param_1;
  if ((fVar37 != 0.0) || (NAN(fVar37))) {
    plVar16 = (longlong *)param_1[1];
    lVar10 = *plVar16;
    if (*pbVar5 == 1) {
      fVar24 = (float)pub_142e32a70();
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      *(uint *)(lVar10 + 4) =
           ~-(uint)(fVar24 < 0.0) & (uint)fVar24 | (uint)(fVar25 + fVar24) & -(uint)(fVar24 < 0.0);
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      *(undefined1 *)(*plVar16 + 0xc) = 1;
    }
    else {
      fVar25 = (float)pub_142e32a70();
      fVar24 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                      (uint)(fVar25 + fVar24) & -(uint)(fVar25 < 0.0));
      if ((((0.0 <= fVar24) && (fVar24 <= _DAT_142f94720)) ||
          ((_DAT_142f94720 <= fVar24 && (fVar24 <= _DAT_142f4473c)))) ||
         ((_DAT_142f4473c <= fVar24 && (fVar24 <= _DAT_142e36f28)))) {
        uVar9 = pdb_140de9fb0();
        pub_142e32a70(uVar9,_DAT_142f57bcc);
      }
      fVar24 = _DAT_142f57bcc;
      uVar9 = pub_142e32a70();
      fVar25 = (float)uVar9;
      auVar27._0_4_ = (uint)(fVar25 + fVar24) & -(uint)(fVar25 < 0.0);
      auVar27._4_4_ = (int)((ulonglong)uVar9 >> 0x20);
      auVar27._8_4_ = (int)extraout_XMM0_Qb;
      auVar27._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar27 = ZEXT416(~-(uint)(fVar25 < 0.0) & (uint)fVar25) | auVar27;
      fVar24 = auVar27._0_4_;
      if ((fVar24 < 0.0) || (_DAT_142f94714 < fVar24)) {
        uVar36 = 0;
        if ((_DAT_142f94714 <= fVar24) && (fVar25 = _DAT_142f94714, fVar24 <= _DAT_142f57bcc))
        goto LAB_14068a3ca;
      }
      else {
        fVar25 = 0.0;
LAB_14068a3ca:
        auVar28._0_8_ = pdb_140de9fb0(auVar27._0_8_,fVar25);
        fVar24 = _DAT_142e36f28;
        auVar28._8_8_ = extraout_XMM0_Qb_00;
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = (float)auVar28._0_8_ + _DAT_142f9471c;
        fVar25 = (float)pub_142e32a70(auVar29._0_8_);
        uVar36 = ~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                 (uint)(fVar24 + fVar25) & -(uint)(fVar25 < 0.0);
      }
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      *(uint *)*plVar16 = uVar36;
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      *(undefined1 *)(*plVar16 + 0xb) = 1;
    }
  }
  uStack_138 = uStack_118;
  uStack_148 = uStack_128;
  uStack_140 = uStack_120;
  *(byte *)param_1[2] = *(byte *)param_1[2] | bVar2;
  uVar9 = pdb_1400b02c0(pbVar5);
  bVar3 = *pbVar5;
  puVar23 = &UNK_142f9554a;
  if (bVar3 != 0) {
    puVar23 = &UNK_142f9555d;
  }
  pdb_140306b80(auStack_e0,&uStack_148,uVar9,puVar23,(ulonglong)bVar3 * 2 + 0x13,
                CONCAT44(uVar26,0x432a0000));
  if (*pbVar5 != 0) {
    uVar9 = pdb_140725a70(auStack_e0);
    pdb_140732b10(uVar9);
  }
  uVar9 = pdb_140725900(&uStack_148);
  lVar10 = pdb_140732b30(uVar9);
  if (lVar10 != 0) {
    pdb_140737640(lVar10);
  }
  fVar24 = _DAT_142e36f28;
  plVar16 = (longlong *)param_1[1];
  if (bVar3 == 0) {
    fVar25 = (float)pub_142e32a70();
    fVar24 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                    (uint)(fVar25 + fVar24) & -(uint)(fVar25 < 0.0));
    if ((((fVar24 < 0.0) || (_DAT_142f94720 < fVar24)) &&
        ((fVar24 < _DAT_142f94720 || (_DAT_142f4473c < fVar24)))) &&
       ((fVar24 < _DAT_142f4473c || (_DAT_142e36f28 < fVar24)))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f95578);
    }
    uVar9 = pdb_140de9fb0();
    pub_142e32a70(uVar9,_DAT_142f57bcc);
  }
  fVar24 = (float)pub_142e329e0();
  fVar25 = (float)pub_142e32b30();
  uStack_158 = pdb_14072cd40(&uStack_148);
  plVar12 = (longlong *)pdb_140315970(&uStack_148);
  bVar4 = *pbVar5;
  uStack_170._0_5_ = CONCAT14(bVar4,1);
  uStack_188 = pdb_1400b0430(&uStack_170);
  uVar13 = pdb_140315970(&uStack_188);
  uVar13 = uVar13 ^ 0xb1695320004fb443;
  uVar19 = uVar13;
  lVar10 = pdb_14072c2d0(plVar12);
  *(undefined1 *)(lVar10 + 0x5e) = 0;
  if ((uVar19 & 1) == 0) {
    fVar24 = fVar24 * _DAT_142f95170 * _DAT_142f95180;
    fVar25 = fVar25 * _UNK_142f95174 * _UNK_142f95184;
    lVar10 = plVar12[2];
    if (lVar10 == *plVar12) {
      pdb_142d7f080(plVar12);
    }
    lVar17 = plVar12[1];
    lVar18 = lVar10 * 0x38;
    *(undefined8 *)(lVar17 + lVar18) = 3;
    *(undefined8 *)(lVar17 + 0x10 + lVar18) = uStack_158;
    *(ulonglong *)(lVar17 + 0x18 + lVar18) = CONCAT44(fVar25,fVar24);
    puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)(lVar17 + 0x30 + lVar18) = uVar13;
    plVar12[2] = lVar10 + 1;
  }
  uStack_100 = 0;
  uStack_170 = 0;
  plStack_110 = plVar12;
  uStack_108 = uVar13;
  uStack_188 = pdb_140315970(&uStack_170);
  uVar7 = _UNK_142f3b4f8;
  uVar9 = _DAT_142f3b4f0;
  uStack_180 = _DAT_142f3b4f0;
  uStack_178 = _UNK_142f3b4f8;
  uStack_180 = pdb_1400affa0(&uStack_188);
  uStack_188 = uVar13;
  uVar14 = pdb_1400b0130(&uStack_188);
  pdb_14072caa0(&uStack_170,&plStack_110,uVar14);
  lVar10 = pdb_140725a70(&uStack_170);
  *(undefined4 *)(lVar10 + 0xbc) = 0x43480000;
  uVar14 = pdb_140725a70(&uStack_170);
  pdb_140732b20(uVar14);
  uVar14 = pdb_140725a70(&uStack_170);
  pdb_140732ae0(uVar14,0,0xf);
  fVar24 = _DAT_142e36f30;
  plVar12 = (longlong *)param_1[5];
  lVar10 = *plVar12;
  if (bVar3 == 0) {
    fVar24 = *(float *)(lVar10 + 0xc) * _DAT_142e37844;
    uVar19 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
    if (fVar24 < 0.0) {
      uVar19 = 0;
    }
    if (_DAT_142e36f30 < fVar24) {
      uVar19 = 0xffffffffffffffff;
    }
    fVar24 = _DAT_142e37844 * *(float *)*plVar16;
    uVar13 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
    if (fVar24 < 0.0) {
      uVar13 = 0;
    }
    if (_DAT_142e36f30 < fVar24) {
      uVar13 = 0xffffffffffffffff;
    }
    *(float *)(lVar10 + 0xc) = *(float *)*plVar16;
  }
  else {
    fVar25 = (*(float *)(lVar10 + 8) / _DAT_142f57bcc) * _DAT_142e37844;
    uVar19 = (longlong)(fVar25 - _DAT_142e36f2c) & (longlong)fVar25 >> 0x3f | (longlong)fVar25;
    if (fVar25 < 0.0) {
      uVar19 = 0;
    }
    if (_DAT_142e36f30 < fVar25) {
      uVar19 = 0xffffffffffffffff;
    }
    fVar25 = (*(float *)(*plVar16 + 4) / _DAT_142f57bcc) * _DAT_142e37844;
    uVar13 = (longlong)(fVar25 - _DAT_142e36f2c) & (longlong)fVar25 >> 0x3f | (longlong)fVar25;
    if (fVar25 < 0.0) {
      uVar13 = 0;
    }
    *(float *)(lVar10 + 8) = *(float *)(*plVar16 + 4);
    if (fVar24 < fVar25) {
      uVar13 = 0xffffffffffffffff;
    }
  }
  if (uVar19 != uVar13) {
    plVar22 = (longlong *)param_1[6];
    *(undefined4 *)plVar22[2] = *(undefined4 *)((longlong)plVar22 + 0x1c);
    lVar10 = *plVar22;
    lVar17 = *(longlong *)(lVar10 + 0x30);
    uVar14 = *(undefined8 *)(lVar10 + 0x40);
    if (lVar17 == *(longlong *)(lVar10 + 0x20)) {
      pdb_142d7e6e0(lVar10 + 0x20);
    }
    lVar18 = *(longlong *)(lVar10 + 0x28);
    *(undefined4 *)(lVar18 + lVar17 * 0x20) = 0x24;
    *(undefined8 *)(lVar18 + 0x18 + lVar17 * 0x20) = uVar14;
    *(longlong *)(lVar10 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
  }
  uVar19 = pdb_14072c6d0(&uStack_170);
  if ((uVar19 & 2) != 0) {
    plVar22 = (longlong *)param_1[6];
    *(undefined4 *)plVar22[2] = *(undefined4 *)((longlong)plVar22 + 0x1c);
    lVar10 = *plVar22;
    lVar17 = *(longlong *)(lVar10 + 0x30);
    uVar14 = *(undefined8 *)(lVar10 + 0x40);
    if (lVar17 == *(longlong *)(lVar10 + 0x20)) {
      pdb_142d7e6e0(lVar10 + 0x20);
    }
    lVar18 = *(longlong *)(lVar10 + 0x28);
    *(undefined4 *)(lVar18 + lVar17 * 0x20) = 0x20;
    *(undefined8 *)(lVar18 + 0x18 + lVar17 * 0x20) = uVar14;
    *(longlong *)(lVar10 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
  }
  uVar19 = pdb_14072c6d0(&uStack_170);
  if ((uVar19 & 8) != 0) {
    plVar22 = (longlong *)param_1[6];
    *(undefined4 *)plVar22[2] = *(undefined4 *)((longlong)plVar22 + 0x1c);
    lVar10 = *plVar22;
    lVar17 = *(longlong *)(lVar10 + 0x30);
    uVar14 = *(undefined8 *)(lVar10 + 0x40);
    if (lVar17 == *(longlong *)(lVar10 + 0x20)) {
      pdb_142d7e6e0(lVar10 + 0x20);
    }
    lVar18 = *(longlong *)(lVar10 + 0x28);
    *(undefined4 *)(lVar18 + lVar17 * 0x20) = 0x21;
    *(undefined8 *)(lVar18 + 0x18 + lVar17 * 0x20) = uVar14;
    *(longlong *)(lVar10 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
  }
  if ((*(char *)(*plVar16 + 0xb) == '\0') && (*(char *)(*plVar16 + 0xc) == '\0')) {
    plVar22 = (longlong *)param_1[7];
  }
  else {
    if (bVar3 == 0) {
      fVar24 = *(float *)(*plVar12 + 0x14) * _DAT_142e37844;
      uVar19 = 0;
      if (0.0 <= fVar24) {
        uVar19 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
      }
      uVar13 = 0xffffffffffffffff;
      if (fVar24 <= _DAT_142e36f30) {
        uVar13 = uVar19;
      }
      plVar22 = (longlong *)param_1[7];
      fVar24 = *(float *)(*plVar22 + 8);
    }
    else {
      fVar24 = (*(float *)(*plVar12 + 0x10) / _DAT_142f57bcc) * _DAT_142e37844;
      uVar19 = 0;
      if (0.0 <= fVar24) {
        uVar19 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
      }
      uVar13 = 0xffffffffffffffff;
      if (fVar24 <= _DAT_142e36f30) {
        uVar13 = uVar19;
      }
      plVar22 = (longlong *)param_1[7];
      fVar24 = *(float *)(*plVar22 + 0xc) / _DAT_142f57bcc;
    }
    fVar24 = fVar24 * _DAT_142e37844;
    uVar19 = 0;
    if (0.0 <= fVar24) {
      uVar19 = (longlong)(fVar24 - _DAT_142e36f2c) & (longlong)fVar24 >> 0x3f | (longlong)fVar24;
    }
    uVar21 = 0xffffffffffffffff;
    if (fVar24 <= _DAT_142e36f30) {
      uVar21 = uVar19;
    }
    if (uVar13 != uVar21) {
      plVar6 = (longlong *)param_1[6];
      *(undefined4 *)plVar6[2] = *(undefined4 *)((longlong)plVar6 + 0x1c);
      lVar10 = *plVar6;
      lVar17 = *(longlong *)(lVar10 + 0x30);
      uVar14 = *(undefined8 *)(lVar10 + 0x40);
      plStack_150 = plVar22;
      if (lVar17 == *(longlong *)(lVar10 + 0x20)) {
        pdb_142d7e6e0(lVar10 + 0x20);
      }
      lVar18 = *(longlong *)(lVar10 + 0x28);
      *(undefined4 *)(lVar18 + lVar17 * 0x20) = 0x25;
      *(undefined8 *)(lVar18 + 0x18 + lVar17 * 0x20) = uVar14;
      *(longlong *)(lVar10 + 0x30) = lVar17 + 1;
      *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
      plVar22 = plStack_150;
    }
  }
  if (bVar3 != 0) {
    *(undefined4 *)(*plVar12 + 0x10) = *(undefined4 *)(*plVar22 + 0xc);
    uVar19 = pdb_14072c6d0(&uStack_170);
    if ((uVar19 & 4) != 0) {
      auVar30._0_8_ = pub_142e32980();
      auVar30._8_8_ = extraout_XMM0_Qb_01;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = (float)auVar30._0_8_ + _DAT_142f94714 + _DAT_142f94714;
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      lVar10 = *plVar16;
      uVar26 = pub_142e32a70(auVar31._0_8_,_DAT_142f57bcc);
      *(undefined4 *)(lVar10 + 4) = uVar26;
      *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
      *(undefined1 *)(*plVar16 + 0xc) = 1;
    }
    cVar8 = pdb_14072ce40(&uStack_170);
    fVar25 = *(float *)(*(longlong *)param_1[8] + 0x28) / _DAT_142e3c608;
    fVar24 = fVar25;
    if (bVar2 == 0) {
      fVar24 = (float)(_DAT_142e37820 ^ (uint)fVar25);
    }
    if (cVar8 == '\0') {
      fVar25 = fVar24;
    }
    *(float *)(*plVar12 + 4) = fVar25 + *(float *)(*plVar12 + 4);
    fVar24 = *(float *)(*plVar12 + 4);
    fVar25 = 0.0;
    if (0.0 <= fVar24) {
      fVar25 = fVar24;
    }
    fVar24 = _DAT_142e36f28;
    if (fVar25 <= _DAT_142e36f28) {
      fVar24 = fVar25;
    }
    *(float *)(*plVar12 + 4) = fVar24;
    puVar15 = (undefined4 *)(*plVar12 + 4);
    goto LAB_14068ae18;
  }
  *(undefined4 *)(*plVar12 + 0x14) = *(undefined4 *)(*plVar22 + 8);
  uVar19 = pdb_14072c6d0(&uStack_170);
  if ((uVar19 & 4) != 0) {
    auVar32._0_8_ = pub_142e32980();
    auVar32._8_8_ = extraout_XMM0_Qb_02;
    auVar33._4_12_ = auVar32._4_12_;
    auVar33._0_4_ = (float)auVar32._0_8_ + _DAT_142f94714;
    if ((auVar33._0_4_ < 0.0) || (_DAT_142f94714 < auVar33._0_4_)) {
      uVar36 = 0;
      if ((_DAT_142f94714 <= auVar33._0_4_) &&
         (fVar24 = _DAT_142f94714, auVar33._0_4_ <= _DAT_142f57bcc)) goto LAB_14068ad5a;
    }
    else {
      fVar24 = 0.0;
LAB_14068ad5a:
      auVar34._0_8_ = pdb_140de9fb0(auVar33._0_8_,fVar24);
      fVar24 = _DAT_142e36f28;
      auVar34._8_8_ = extraout_XMM0_Qb_03;
      auVar35._4_12_ = auVar34._4_12_;
      auVar35._0_4_ = (float)auVar34._0_8_ + _DAT_142f9471c;
      fVar25 = (float)pub_142e32a70(auVar35._0_8_);
      uVar36 = ~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
               (uint)(fVar24 + fVar25) & -(uint)(fVar25 < 0.0);
    }
    *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
    *(uint *)*plVar16 = uVar36;
    *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
    *(undefined1 *)(*plVar16 + 0xb) = 1;
  }
  cVar8 = pdb_14072ce40(&uStack_170);
  fVar25 = *(float *)(*(longlong *)param_1[8] + 0x28) / _DAT_142e3c608;
  fVar24 = fVar25;
  if (bVar2 == 0) {
    fVar24 = (float)(_DAT_142e37820 ^ (uint)fVar25);
  }
  if (cVar8 == '\0') {
    fVar25 = fVar24;
  }
  *(float *)*plVar12 = fVar25 + *(float *)*plVar12;
  fVar24 = *(float *)*plVar12;
  fVar25 = 0.0;
  if (0.0 <= fVar24) {
    fVar25 = fVar24;
  }
  fVar24 = _DAT_142e36f28;
  if (fVar25 <= _DAT_142e36f28) {
    fVar24 = fVar25;
  }
  *(float *)*plVar12 = fVar24;
  puVar15 = (undefined4 *)*plVar12;
LAB_14068ae18:
  fVar25 = (float)pdb_140dedcd0(&UNK_142f95534,*puVar15);
  fVar24 = _DAT_142e36f28;
  pdb_140306cd0(&uStack_188,&uStack_170,&UNK_142f95590,3,&UNK_142f95593,0x13,
                (fVar25 * _DAT_142e37884 + (_DAT_142e36f28 - fVar25) * _DAT_142f3e558) *
                _DAT_142e382c0);
  uVar14 = pdb_140725a70(&uStack_188);
  pdb_140732b00(uVar14);
  if (bVar3 == 0) {
    fVar25 = (float)pub_142e32a70();
    fVar24 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                    (uint)(fVar25 + fVar24) & -(uint)(fVar25 < 0.0));
    if ((((fVar24 < 0.0) || (_DAT_142f94720 < fVar24)) &&
        ((fVar24 < _DAT_142f94720 || (_DAT_142f4473c < fVar24)))) &&
       ((fVar24 < _DAT_142f4473c || (_DAT_142e36f28 < fVar24)))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f955a8);
    }
    uVar14 = pdb_140de9fb0();
    pub_142e32a70(uVar14,_DAT_142f57bcc);
    lVar10 = 0;
  }
  else {
    lVar10 = 4;
  }
  fVar24 = (float)pub_142e329e0();
  fVar25 = (float)pub_142e32b30();
  plVar16 = (longlong *)pdb_140315970(&plStack_110);
  uStack_170._0_5_ = CONCAT14(bVar4,2);
  uStack_188 = pdb_1400b0430(&uStack_170);
  uVar13 = pdb_140315970(&uStack_188);
  uVar13 = uVar13 ^ 0xb1695320004fb443;
  uVar19 = uVar13;
  lVar17 = pdb_14072c2d0(plVar16);
  *(undefined1 *)(lVar17 + 0x5e) = 0;
  if ((uVar19 & 1) == 0) {
    fVar24 = fVar24 * _DAT_142f95170 * _DAT_142f95180;
    fVar25 = fVar25 * _UNK_142f95174 * _UNK_142f95184;
    lVar17 = plVar16[2];
    if (lVar17 == *plVar16) {
      pdb_142d7f080(plVar16);
    }
    lVar18 = plVar16[1];
    lVar20 = lVar17 * 0x38;
    *(undefined8 *)(lVar18 + lVar20) = 3;
    *(undefined8 *)(lVar18 + 0x10 + lVar20) = uStack_158;
    *(ulonglong *)(lVar18 + 0x18 + lVar20) = CONCAT44(fVar25,fVar24);
    puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)(lVar18 + 0x30 + lVar20) = uVar13;
    plVar16[2] = lVar17 + 1;
  }
  uStack_e8 = 0;
  uStack_170 = 0;
  plStack_f8 = plVar16;
  uStack_f0 = uVar13;
  uStack_188 = pdb_140315970(&uStack_170);
  uStack_180 = uVar9;
  uStack_178 = uVar7;
  uStack_180 = pdb_1400affa0(&uStack_188);
  uStack_188 = uVar13;
  uVar9 = pdb_1400b0130(&uStack_188);
  pdb_14072caa0(&uStack_170,&plStack_f8,uVar9);
  lVar17 = pdb_140725a70(&uStack_170);
  *(undefined4 *)(lVar17 + 0xbc) = 0x437a0000;
  fVar24 = (float)pdb_140dedcd0(&UNK_142f95534,*(undefined4 *)(*plVar12 + lVar10));
  pdb_140306cd0(&uStack_188,&uStack_170,&UNK_142f95590,3,&UNK_142f955c0,0x15,
                (fVar24 * _DAT_142e37884 + (_DAT_142e36f28 - fVar24) * _DAT_142f3e558) *
                _DAT_142e382c0);
  uVar9 = pdb_140725a70(&uStack_188);
  pdb_140732b00(uVar9);
  return;
}

