// VA 0x14062bb90, PDB extent 10628 bytes
// tiny_glade::gui::gui_tod_editor::draw_track
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014062efa9) overlaps instruction at (ram,0x00014062efa7)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::draw_track
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 10628 */

ulonglong pdb_14062bb90(longlong param_1,longlong param_2,byte param_3,undefined4 param_4,
                       longlong param_5)

{
  longlong lVar1;
  byte *pbVar2;
  code cVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  undefined8 uVar24;
  undefined7 uVar29;
  longlong lVar25;
  longlong *plVar26;
  char *pcVar27;
  code *pcVar28;
  char cVar30;
  code *pcVar31;
  code *pcVar32;
  uint *puVar33;
  longlong lVar34;
  undefined *puVar35;
  int *piVar36;
  int iVar37;
  ulonglong uVar38;
  undefined1 *puVar39;
  undefined8 *puVar40;
  undefined1 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined4 *puVar44;
  uint uVar45;
  int *piVar46;
  undefined4 *puVar47;
  undefined8 *puVar48;
  int iVar49;
  ulonglong uVar50;
  byte *pbVar51;
  uint *puVar52;
  bool bVar53;
  uint uVar54;
  int iVar55;
  float fVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [12];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_XMM9_Da;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auStack_3c8 [32];
  uint uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined4 uStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 auStack_348 [4];
  undefined8 uStack_338;
  undefined4 uStack_330;
  code *pcStack_2c0;
  ulonglong uStack_2b8;
  longlong lStack_2b0;
  undefined4 uStack_274;
  uint uStack_270;
  ulonglong uStack_268;
  byte bStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined1 uStack_238;
  longlong *plStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [12];
  undefined1 auStack_1d4 [12];
  byte *pbStack_1c8;
  undefined4 *puStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulonglong uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined4 *puStack_148;
  byte *pbStack_140;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  byte abStack_f2 [2];
  undefined8 uStack_f0;
  
  puVar39 = auStack_3c8;
  puVar44 = auStack_348;
  uStack_f0 = 0xfffffffffffffffe;
  uStack_274 = param_4;
  lStack_180 = param_2;
  abStack_f2[0] = param_3;
  pdb_140d15f80(param_1);
  uStack_3a8 = 0;
  pdb_140d17380(&uStack_1f8,param_1);
  fVar66 = (float)((ulonglong)uStack_1f8 >> 0x20);
  uVar57 = auStack_1f0._0_4_;
  fVar67 = auStack_1f0._4_4_;
  LOCK();
  *stack0xfffffffffffffe28 = *stack0xfffffffffffffe28 + -1;
  UNLOCK();
  if (*stack0xfffffffffffffe28 == 0) {
    pdb_140d71bf0(auStack_1e0 + 8);
  }
  fStack_118 = (float)_DAT_142f89630 + SUB84(uStack_1f8,0);
  fStack_114 = (float)((ulonglong)_DAT_142f89630 >> 0x20) + fVar66;
  uStack_250 = 0;
  uStack_378 = CONCAT44(fVar67,fVar67);
  uStack_370 = 0;
  fVar69 = _DAT_142f69450 + fVar67;
  if ((abStack_f2[0] < 4) || (fStack_10c = fVar69, abStack_f2[0] == 8)) {
    fStack_10c = _DAT_142e46a40 + fVar69 + _DAT_142e382d4;
  }
  fStack_110 = (float)auStack_1f0._0_4_;
  plStack_230 = *(longlong **)(param_1 + 0x120);
  LOCK();
  lVar25 = *plStack_230;
  *plStack_230 = *plStack_230 + 1;
  UNLOCK();
  uStack_258._0_4_ = fStack_118;
  uStack_258._4_4_ = fStack_114;
  if (*plStack_230 == 0 || SCARRY8(lVar25,1) != *plStack_230 < 0) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)invalidInstructionException();
    (*pcVar28)();
  }
  uStack_240 = *(undefined8 *)(param_1 + 0x110);
  uStack_238 = *(undefined1 *)(param_1 + 0x118);
  uStack_210 = *(undefined1 *)(param_1 + 0x140);
  uStack_214 = *(undefined4 *)(param_1 + 0x13c);
  uStack_218 = *(undefined4 *)(param_1 + 0x138);
  uVar38 = *(ulonglong *)(param_1 + 0x128);
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar38;
  uVar54 = -(uint)NAN(SUB84(uStack_1f8,0));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uStack_1f8;
  auVar59 = maxps(auVar58,auVar7);
  uStack_228 = CONCAT44(~-(uint)NAN(fVar66) & auVar59._4_4_,~uVar54 & auVar59._0_4_) |
               CONCAT44((uint)(uVar38 >> 0x20) & -(uint)NAN(fVar66),(uint)uVar38 & uVar54);
  uVar38 = *(ulonglong *)(param_1 + 0x130);
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar38;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = auStack_1f0;
  auVar59 = minps(auVar60,auVar59);
  uStack_220 = CONCAT44(~-(uint)NAN(fVar67) & auVar59._4_4_,
                        ~-(uint)NAN((float)auStack_1f0._0_4_) & auVar59._0_4_) |
               CONCAT44((uint)(uVar38 >> 0x20) & -(uint)NAN(fVar67),
                        (uint)uVar38 & -(uint)NAN((float)auStack_1f0._0_4_));
  pdb_14063ea10(&uStack_240,&uStack_1f8,uStack_214,0xff141414);
  uStack_1f8._0_4_ = fStack_118;
  uStack_1f8._4_4_ = fStack_114;
  auStack_1f0._0_4_ = fStack_110;
  auStack_1f0._4_4_ = fStack_10c;
  pdb_14063ea10(&uStack_240,&uStack_1f8);
  uVar24 = *(undefined8 *)(&UNK_142f89c70 + (ulonglong)abStack_f2[0] * 8);
  iVar55 = *(int *)(&UNK_142f89cc0 + (ulonglong)abStack_f2[0] * 4);
  pdb_140d354a0(&uStack_1f8,&UNK_142f89770,*(longlong *)(param_1 + 0x150) + 0x10);
  puStack_3a0 = (undefined8 *)(&UNK_142f89cc0 + iVar55);
  uStack_368 = CONCAT44(fVar66,fVar66);
  uStack_360 = 0;
  uStack_388 = 0xffffffff;
  uStack_3a8 = uStack_3a8 & 0xffff0000;
  puStack_398 = (undefined8 *)uVar24;
  puStack_390 = &uStack_1f8;
  pdb_14063ef80(&uStack_178,&uStack_240);
  uStack_108 = *(undefined4 *)(&UNK_142f89ce8 + (ulonglong)abStack_f2[0] * 4);
  uStack_104 = *(undefined4 *)(&UNK_142f89d10 + (ulonglong)abStack_f2[0] * 4);
  uStack_178 = &uStack_108;
  uStack_170 = pdb_140f70fc0;
  pdb_140f60760(&uStack_1f8,&UNK_142f89808,&uStack_178);
  uStack_178 = (undefined4 *)CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  uStack_170 = (code *)CONCAT44(auStack_1f0._4_4_,auStack_1f0._0_4_);
  uStack_168 = (ulonglong)uStack_1e8;
  uStack_f4 = 1;
  lStack_2b0 = param_1;
  pdb_140d354a0(&uStack_1f8,&UNK_142f897f0,*(longlong *)(param_1 + 0x150) + 0x10);
  uStack_f4 = 0;
  puStack_390._0_4_ = 0xffa0a0a0;
  uStack_3a8 = uStack_3a8 & 0xffff0000;
  puStack_3a0 = &uStack_178;
  puStack_398 = &uStack_1f8;
  pdb_14063f1e0(&uStack_338,&uStack_240);
  uStack_178 = &uStack_104;
  uStack_170 = pdb_140f70fc0;
  pdb_140f60760(&uStack_1f8,&UNK_142f89808,&uStack_178);
  uStack_178 = (undefined4 *)CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  uStack_170 = (code *)CONCAT44(auStack_1f0._4_4_,auStack_1f0._0_4_);
  uStack_168 = (ulonglong)uStack_1e8;
  puVar47 = (undefined4 *)(*(longlong *)(lStack_2b0 + 0x150) + 0x10);
  uStack_f5 = 1;
  pdb_140d354a0(&uStack_1f8,&UNK_142f897f0);
  uStack_f5 = 0;
  puStack_390 = (undefined8 *)CONCAT44(puStack_390._4_4_,0xffa0a0a0);
  uStack_3a8 = CONCAT22(uStack_3a8._2_2_,0x200);
  puStack_3a0 = &uStack_178;
  puStack_398 = &uStack_1f8;
  pdb_14063f1e0(&uStack_338,&uStack_240);
  uStack_170 = (code *)0x3;
  uStack_168 = _DAT_142f89640;
  uStack_160 = 0x3f800000;
  lVar25 = 0;
  do {
    lVar1 = lVar25 + 1;
    uStack_178 = (undefined4 *)lVar1;
    fVar67 = *(float *)((longlong)&uStack_168 + lVar25 * 4);
    auStack_1f0._4_4_ = fVar67 * fStack_114 + (_DAT_142e36f28 - fVar67) * fStack_10c;
    auStack_1f0._0_4_ = fStack_118;
    uStack_1e8 = (undefined4 *)CONCAT44(auStack_1f0._4_4_,fStack_110);
    auStack_1e0._0_8_ = 0xff3030303f800000;
    uStack_1f8 = (float *)0x6;
    pdb_14063ec50(&uStack_240,&uStack_1f8);
    lVar25 = lVar1;
  } while (lVar1 != 3);
  fStack_fc = _DAT_142e36f28 / *(float *)(lStack_180 + 0x28);
  fStack_100 = *(float *)(lStack_180 + 0x2c);
  uVar38 = 1;
  if ((ulonglong)abStack_f2[0] < 9) {
    uVar38 = *(ulonglong *)(&UNK_142f89d38 + (ulonglong)abStack_f2[0] * 8);
  }
  uVar50 = 0;
  pbVar51 = abStack_f2;
  if (uVar38 != 0) {
    do {
      uStack_1f8 = &fStack_100;
      auStack_1f0 = (undefined1  [8])&fStack_fc;
      uStack_1e8 = (undefined4 *)param_5;
      pbStack_1c8 = (byte *)&uStack_104;
      puStack_1c0 = &uStack_108;
      pbStack_1b8 = (byte *)0x0;
      uStack_1b0 = 0xc0;
      uStack_1a8 = 0;
      uStack_2b8 = uVar50;
      auStack_1d4._4_8_ = &fStack_118;
      auStack_1e0._0_8_ = pbVar51;
      unique0x10003a61 = &uStack_2b8;
      pdb_14017ae40(&uStack_178,&uStack_1f8);
      if ((abStack_f2[0] < 4) || (uVar22 = 0xfff5be6e3fc00000, abStack_f2[0] == 8)) {
        uStack_338 = 0xff64dc50ff4b4beb;
        uStack_330 = 0xfff58755;
        if (2 < uStack_2b8) {
          uStack_258 = (undefined4 *)uStack_170;
          lStack_180 = (longlong)uStack_178;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_2b8,3,&UNK_142f89878);
        }
        uVar22 = (ulonglong)*(uint *)((longlong)&uStack_338 + uStack_2b8 * 4) << 0x20 | 0x3fc00000;
        puVar47 = (undefined4 *)uStack_170;
      }
      auStack_1f0 = (undefined1  [8])uStack_178;
      uStack_1e8 = (undefined4 *)uStack_170;
      stack0xfffffffffffffe28 = (ulonglong *)uVar22;
      auStack_1e0._0_8_ = uStack_168;
      auStack_1d4._4_8_ = auStack_1d4._4_8_ & 0xffffff0000000000;
      uStack_1f8 = (float *)0x7;
      pdb_14063ec50(&uStack_240,&uStack_1f8);
      uVar50 = uVar50 + 1;
    } while (uVar50 < uVar38);
  }
  fVar18 = fStack_fc;
  fVar66 = fStack_100;
  fVar67 = _DAT_142f89650;
  if ((abStack_f2[0] < 4) || (abStack_f2[0] == 8)) {
    fVar70 = fStack_10c + _DAT_142e3788c;
    uStack_168 = 0;
    uStack_160 = 4;
    uStack_15c = 0;
    uStack_158 = 0;
    pbStack_150 = (byte *)0x0;
    puStack_148 = (undefined4 *)0x4;
    pbStack_140 = (byte *)0x0;
    uStack_178 = (undefined4 *)0x0;
    uStack_170 = (code *)0x0;
    uStack_270 = (uint)abStack_f2[0];
    uStack_268 = (ulonglong)uStack_270;
    bVar53 = false;
    uVar38 = 0;
    while (uVar50 = uVar38, bStack_260 = 0xc0 < uVar50 | bVar53, 0xc0 >= uVar50 && bVar53 == false)
    {
      bVar53 = uVar50 == 0xc0;
      uVar38 = uVar50 + 1;
      if (bVar53) {
        uVar38 = uVar50;
      }
      fVar68 = (float)(longlong)uVar50 / _DAT_142f684e0;
      pdb_140c1edd0(&uStack_1f8,param_5,fVar18 * fVar68 + fVar66);
      if (8 < uStack_270) {
LAB_14062d791:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_142f89ab0,0x28,&UNK_142f89ad8);
      }
      puVar23 = &uStack_1f8;
      switch(&UNK_142f89d80 + *(int *)(&UNK_142f89d80 + uStack_268 * 4)) {
      case (undefined *)0x14062c42d:
        puVar23 = (ulonglong *)(auStack_1e0 + 0xc);
        break;
      case (undefined *)0x14062c436:
        puVar23 = (ulonglong *)auStack_1e0;
        break;
      case (undefined *)0x14062c43f:
        puVar23 = (ulonglong *)(auStack_1f0 + 4);
        break;
      case (undefined *)0x14062c8aa:
        auVar61._8_8_ = 0;
        auVar61._0_8_ = pbStack_1b8;
        fVar71 = (float)((ulonglong)pbStack_1b8 >> 0x20);
        if (fVar71 <= (float)uStack_1b0) {
          fVar71 = (float)uStack_1b0;
        }
        auVar64._8_4_ = 0;
        auVar64._0_8_ = pbStack_1b8;
        if (SUB84(pbStack_1b8,0) <= fVar71) {
          auVar64._4_8_ = (ulonglong)pbStack_1b8 >> 0x20;
          auVar64._0_4_ = fVar71;
        }
        if (auVar64._0_4_ <= _DAT_142e37934) {
          auVar64._4_8_ = auVar64._4_8_;
          auVar64._0_4_ = _DAT_142e37934;
        }
        fVar71 = auVar64._0_4_ * _DAT_142e37838;
        auVar5._4_4_ = fVar71;
        auVar5._0_4_ = fVar71;
        auVar5._8_4_ = auVar64._8_4_;
        auVar5._12_4_ = auVar64._8_4_;
        auVar62 = divps(auVar61,auVar5);
        unaff_XMM9_Da = (float)uStack_1b0 / fVar71;
        goto code_r0x00014062c450;
      case (undefined *)0x14062d791:
        goto LAB_14062d791;
      }
      auVar62._8_8_ = 0;
      auVar62._0_8_ = *puVar23;
      unaff_XMM9_Da = *(float *)(puVar23 + 1);
code_r0x00014062c450:
      auVar59 = maxps(auVar62,ZEXT816(0));
      fVar56 = auVar59._4_4_;
      iVar55 = -(uint)(auVar59._0_4_ < _DAT_142e37950);
      auVar6._4_4_ = iVar55;
      auVar6._0_4_ = iVar55;
      auVar6._8_4_ = -(uint)(fVar56 < _UNK_142e37954);
      auVar6._12_4_ = -(uint)(fVar56 < _UNK_142e37954);
      uVar54 = movmskpd((int)puVar23,auVar6);
      fVar71 = auVar59._0_4_;
      if ((uVar54 & 1) == 0) {
        fVar71 = _DAT_142e36f28;
      }
      if ((uVar54 & 2) == 0) {
        fVar56 = _DAT_142e36f28;
        if (fVar71 <= 0.0) goto code_r0x00014062c48a;
code_r0x00014062c49b:
        if (fVar71 <= fVar67) {
          fVar71 = fVar71 * _UNK_142f89654;
code_r0x00014062c4d8:
          fVar8 = 0.0;
          if (0.0 <= fVar71 + _DAT_142e36f50) {
            fVar8 = fVar71 + _DAT_142e36f50;
          }
          fVar71 = _DAT_142e4fba0;
          if (fVar8 <= _DAT_142e4fba0) {
            fVar71 = fVar8;
          }
          uVar54 = (uint)fVar71;
        }
        else {
          uVar54 = 0xff;
          if (fVar71 <= _DAT_142e36f28) {
            fVar71 = (float)pub_142e32ad0();
            fVar71 = fVar71 * _UNK_142f8965c + _UNK_142f89660;
            goto code_r0x00014062c4d8;
          }
        }
      }
      else {
        if (0.0 < fVar71) goto code_r0x00014062c49b;
code_r0x00014062c48a:
        uVar54 = 0;
      }
      if (fVar56 <= 0.0) {
        uVar21 = 0;
code_r0x00014062c583:
        if (unaff_XMM9_Da <= 0.0) {
          unaff_XMM9_Da = 0.0;
        }
        if (_DAT_142e36f28 <= unaff_XMM9_Da) {
          unaff_XMM9_Da = _DAT_142e36f28;
        }
        if (unaff_XMM9_Da <= 0.0) goto code_r0x00014062c653;
code_r0x00014062c59b:
        if (unaff_XMM9_Da <= fVar67) {
          unaff_XMM9_Da = unaff_XMM9_Da * _UNK_142f89654 + _DAT_142e36f50;
          fVar71 = 0.0;
          if (0.0 <= unaff_XMM9_Da) {
            fVar71 = unaff_XMM9_Da;
          }
          fVar56 = _DAT_142e4fba0;
          if (fVar71 <= _DAT_142e4fba0) {
            fVar56 = fVar71;
          }
          uVar45 = (uint)fVar56;
          pbVar51 = pbStack_140;
          if (pbStack_140 == pbStack_150) goto code_r0x00014062c665;
        }
        else {
          uVar45 = 0xff;
          if (_DAT_142e36f28 < unaff_XMM9_Da) goto code_r0x00014062c655;
          fVar71 = (float)pub_142e32ad0(unaff_XMM9_Da);
          fVar56 = fVar71 * _UNK_142f8965c + _UNK_142f89660 + _DAT_142e36f50;
          fVar71 = 0.0;
          if (0.0 <= fVar56) {
            fVar71 = fVar56;
          }
          fVar56 = _DAT_142e4fba0;
          if (fVar71 <= _DAT_142e4fba0) {
            fVar56 = fVar71;
          }
          uVar45 = (uint)fVar56;
          pbVar51 = pbStack_140;
          if (pbStack_140 == pbStack_150) goto code_r0x00014062c665;
        }
      }
      else {
        if (fVar56 <= fVar67) {
          fVar56 = fVar56 * _UNK_142f89654 + _DAT_142e36f50;
          fVar71 = 0.0;
          if (0.0 <= fVar56) {
            fVar71 = fVar56;
          }
          fVar56 = _DAT_142e4fba0;
          if (fVar71 <= _DAT_142e4fba0) {
            fVar56 = fVar71;
          }
          if (unaff_XMM9_Da <= 0.0) {
            unaff_XMM9_Da = 0.0;
          }
          if (_DAT_142e36f28 <= unaff_XMM9_Da) {
            unaff_XMM9_Da = _DAT_142e36f28;
          }
        }
        else {
          uVar21 = 0xff;
          if (_DAT_142e36f28 < fVar56) goto code_r0x00014062c583;
          fVar71 = (float)pub_142e32ad0(fVar56);
          fVar56 = fVar71 * _UNK_142f8965c + _UNK_142f89660 + _DAT_142e36f50;
          fVar71 = 0.0;
          if (0.0 <= fVar56) {
            fVar71 = fVar56;
          }
          fVar56 = _DAT_142e4fba0;
          if (fVar71 <= _DAT_142e4fba0) {
            fVar56 = fVar71;
          }
          if (unaff_XMM9_Da <= 0.0) {
            unaff_XMM9_Da = 0.0;
          }
          if (_DAT_142e36f28 <= unaff_XMM9_Da) {
            unaff_XMM9_Da = _DAT_142e36f28;
          }
        }
        uVar21 = (uint)fVar56;
        if (0.0 < unaff_XMM9_Da) goto code_r0x00014062c59b;
code_r0x00014062c653:
        uVar45 = 0;
code_r0x00014062c655:
        pbVar51 = pbStack_140;
        if (pbStack_140 == pbStack_150) {
code_r0x00014062c665:
          pbVar51 = pbStack_140;
          pdb_142db5640(&pbStack_150);
        }
      }
      uVar54 = uVar54 & 0xff | (uVar21 & 0xff) << 8 | (uVar45 & 0xff) << 0x10 | 0xff000000;
      fVar68 = fVar68 * (float)uVar57 + (_DAT_142e36f28 - fVar68) * (float)uStack_258;
      puStack_148[(longlong)pbVar51 * 5] = fVar68;
      puStack_148[(longlong)pbVar51 * 5 + 1] = fVar70;
      *(undefined8 *)(puStack_148 + (longlong)pbVar51 * 5 + 2) = 0;
      puStack_148[(longlong)pbVar51 * 5 + 4] = uVar54;
      pbVar2 = pbVar51 + 1;
      if (pbVar2 == pbStack_150) {
        pbStack_140 = pbVar2;
        pdb_142db5640(&pbStack_150);
      }
      uVar22 = uStack_158;
      pbVar51 = pbVar51 + 2;
      puStack_148[(longlong)pbVar2 * 5] = fVar68;
      puStack_148[(longlong)pbVar2 * 5 + 1] = fVar69;
      *(undefined8 *)(puStack_148 + (longlong)pbVar2 * 5 + 2) = 0;
      puStack_148[(longlong)pbVar2 * 5 + 4] = uVar54;
      pbStack_140 = pbVar51;
      if (uVar50 != 0xc0) {
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        iVar55 = (int)uVar50;
        *(int *)(CONCAT44(uStack_15c,uStack_160) + uVar22 * 4) = iVar55 * 2;
        uStack_158 = uVar22 + 1;
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        iVar49 = iVar55 * 2 + 1;
        *(int *)(CONCAT44(uStack_15c,uStack_160) + 4 + uVar22 * 4) = iVar49;
        uStack_158 = uVar22 + 2;
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        iVar37 = iVar55 * 2 + 2;
        *(int *)(CONCAT44(uStack_15c,uStack_160) + 8 + uVar22 * 4) = iVar37;
        uStack_158 = uVar22 + 3;
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        *(int *)(CONCAT44(uStack_15c,uStack_160) + 0xc + uVar22 * 4) = iVar49;
        uStack_158 = uVar22 + 4;
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        *(int *)(CONCAT44(uStack_15c,uStack_160) + 0x10 + uVar22 * 4) = iVar37;
        uStack_158 = uVar22 + 5;
        if (uStack_158 == uStack_168) {
          pdb_142db0990(&uStack_168);
        }
        uVar54 = iVar55 * 2 + 3;
        pbVar51 = (byte *)(ulonglong)uVar54;
        *(uint *)(CONCAT44(uStack_15c,uStack_160) + 0x14 + uVar22 * 4) = uVar54;
        uStack_158 = uVar22 + 6;
      }
    }
    auStack_1e0._8_4_ = uStack_160;
    auStack_1e0._0_8_ = uStack_168;
    unique0x10001d59 = uStack_15c;
    puStack_1c0 = puStack_148;
    pbStack_1b8 = pbStack_140;
    auStack_1d4._4_8_ = uStack_158;
    pbStack_1c8 = pbStack_150;
    auStack_1f0 = (undefined1  [8])uStack_178;
    uStack_1e8 = (undefined4 *)uStack_170;
    uStack_1f8 = (float *)0xa;
    pdb_14063ec50(&uStack_240,&uStack_1f8);
    uStack_1f8 = (float *)CONCAT44(fVar70,(float)uStack_258);
    auStack_1f0 = (undefined1  [8])CONCAT44(fVar69,uVar57);
    pdb_14063eb30(&uStack_240,&uStack_1f8);
  }
  fVar70 = _DAT_142f89668;
  fVar18 = _DAT_142f89664;
  fVar69 = _DAT_142f57bc4;
  fVar66 = _DAT_142f3e554;
  fVar67 = _DAT_142e46a48;
  uStack_268 = CONCAT44(uStack_268._4_4_,fStack_100 + fStack_fc);
  pcVar28 = *(code **)(param_5 + 8) + *(longlong *)(param_5 + 0x10) * 0x60;
  piVar46 = (int *)&uStack_178;
  pcStack_2c0 = pcVar28;
  pcVar32 = *(code **)(param_5 + 8);
  do {
    do {
      pcVar31 = pcVar32;
      if (pcVar31 == pcVar28) {
        fVar67 = (float)puVar44[0x8e];
        fVar66 = (float)puVar44[0x92];
        fVar66 = ((float)puVar44[0x35] - fVar66) / (((float)puVar44[0x93] + fVar66) - fVar66);
        fVar66 = fVar66 * fVar67 + (_DAT_142e36f28 - fVar66) * (float)puVar44[0x8c];
        uVar38 = (ulonglong)(uint)fVar67;
        if (((float)puVar44[0x8c] <= fVar66) && (uVar38 = (ulonglong)(uint)fVar67, fVar66 <= fVar67)
           ) {
          puVar44[0x56] = fVar66;
          puVar44[0x57] = puVar44[-8];
          puVar44[0x58] = fVar66;
          puVar44[0x59] = puVar44[-0xc];
          *(undefined8 *)(puVar44 + 0x5a) = 0xff32beff3fc00000;
          *(undefined8 *)(puVar44 + 0x54) = 6;
          *(undefined8 *)(puVar39 + -8) = 0x14062d715;
          uVar38 = pdb_14063ec50(puVar44 + 0x42,puVar44 + 0x54);
        }
        plVar26 = *(longlong **)(puVar44 + 0x46);
        LOCK();
        *plVar26 = *plVar26 + -1;
        UNLOCK();
        if (*plVar26 == 0) {
          *(undefined8 *)(puVar39 + -8) = 0x14062d72f;
          uVar38 = pdb_140d71bf0(puVar44 + 0x46);
        }
        return uVar38;
      }
      pcVar32 = pcVar31 + 0x60;
      fVar68 = (float)puVar44[0x92];
      fVar71 = *(float *)(pcVar31 + 0x58);
    } while ((fVar71 < fVar68) || ((float)puVar44[0x38] < fVar71));
    *(code **)(puVar44 + 0x36) = pcVar32;
    *(undefined8 *)(puVar44 + 0x3a) = 1;
    if ((ulonglong)*(byte *)((longlong)puVar44 + 0x256) < 9) {
      *(undefined8 *)(puVar44 + 0x3a) =
           *(undefined8 *)(&UNK_142f89d38 + (ulonglong)*(byte *)((longlong)puVar44 + 0x256) * 8);
    }
    fVar71 = (fVar71 - fVar68) / (((float)puVar44[0x93] + fVar68) - fVar68);
    fVar68 = (_DAT_142e36f28 - fVar71) * (float)puVar44[0x8c];
    uVar38 = (ulonglong)(uint)fVar68;
    fVar68 = fVar71 * (float)puVar44[0x8e] + fVar68;
    for (puVar52 = (uint *)0x0; uVar57 = (undefined4)uVar38, puVar52 < *(uint **)(puVar44 + 0x3a);
        puVar52 = (uint *)((longlong)puVar52 + 1)) {
      bVar20 = *(byte *)((longlong)puVar44 + 0x256);
      plVar26 = (longlong *)(ulonglong)bVar20;
      piVar36 = (int *)&UNK_142f89da4;
      puVar33 = (uint *)(&UNK_142f89da4 + *(int *)(&UNK_142f89da4 + (longlong)plVar26 * 4));
      pcVar28 = pcVar31 + 0x30;
      bVar19 = (byte)pcVar28;
      cVar30 = (char)puVar33;
      iVar55 = (int)pcVar31;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar20) {
      case 0:
        pcVar28 = pcVar31;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 8, puVar52 != (uint *)0x2)) {
          pcVar28 = pcVar31 + 4;
        }
        break;
      case 1:
        pcVar28 = pcVar31 + 0x24;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x2c, puVar52 != (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x28;
        }
        break;
      case 2:
        pcVar28 = pcVar31 + 0x18;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x20, puVar52 != (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x1c;
        }
        break;
      case 3:
        pcVar28 = pcVar31 + 0xc;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x14, puVar52 != (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x10;
        }
        break;
      case 4:
        break;
      case 5:
        pcVar28 = pcVar31 + 0x34;
        break;
      case 6:
        pcVar28 = pcVar31 + 0x38;
        break;
      case 7:
        pcVar28 = pcVar31 + 0x3c;
        break;
      case 8:
        pcVar28 = pcVar31 + 0x40;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x48, puVar52 != (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x44;
        }
        break;
      case 9:
        pcVar28 = pcVar31 + 0x4c;
        break;
      case 10:
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        pcVar31[-0x47] = (code)((char)pcVar31[-0x47] + cVar30);
        goto code_r0x00014062cd30;
      case 0xb:
        goto code_r0x00014062cee1;
      case 0xc:
        pcVar28 = (code *)((ulonglong)pcVar28 ^ 1);
        *pcVar28 = (code)((char)*pcVar28 + (char)pcVar28);
        goto code_r0x00014062ceaa;
      case 0xd:
        goto code_r0x00014062cebf;
      case 0xe:
        goto code_r0x00014062ce9a;
      case 0xf:
        goto code_r0x00014062cefe;
      case 0x10:
        goto code_r0x00014062cf04;
      case 0x11:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x1c);
        goto code_r0x00014062cedb;
      case 0x12:
        goto code_r0x00014062cf34;
      case 0x13:
        *(byte *)puVar33 = (byte)*puVar33 | bVar19;
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        bVar53 = *pcVar28 == (code)0x0;
        goto code_r0x00014062cea4;
      default:
        pcVar31[-0x47] = (code)((char)pcVar31[-0x47] + cVar30);
        puVar33 = (uint *)(ulonglong)((int)puVar44 - 8);
        goto code_r0x00014062d32f;
      case 0x18:
        (&UNK_142f89d9d)
        [(longlong)puVar33 * 4 + (longlong)*(int *)(&UNK_142f89da4 + (longlong)plVar26 * 4)] =
             (&UNK_142f89d9d)
             [(longlong)puVar33 * 4 + (longlong)*(int *)(&UNK_142f89da4 + (longlong)plVar26 * 4)] +
             cVar30;
        goto code_r0x00014062d3c1;
      case 0x19:
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        pcVar31[-0x43] = (code)((char)pcVar31[-0x43] + cVar30);
        goto code_r0x00014062d42b;
      case 0x1a:
        goto code_r0x00014062d401;
      case 0x1b:
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
      case 0x21:
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        uVar57 = LocalDescriptorTableRegister();
        *(undefined4 *)pcVar28 = uVar57;
        pcVar31[-0x43] = (code)((char)pcVar31[-0x43] + cVar30);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1d:
        pcVar28 = (code *)((ulonglong)pcVar28 | 0x82);
        goto code_r0x00014062d3c1;
      case 0x1e:
        if (puVar33 != (uint *)0x0) {
          puVar35 = (undefined *)0x42f8982c;
          goto code_r0x00014062d37a;
        }
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        goto code_r0x00014062d39a;
      case 0x1f:
        goto code_r0x00014062d458;
      case 0x20:
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        goto code_r0x00014062d473;
      case 0x22:
        goto code_r0x00014062d4b8;
      case 0x23:
        goto code_r0x00014062d490;
      case 0x24:
        pcVar28 = (code *)0x42f89a85;
        goto code_r0x00014062d49c;
      case 0x25:
        goto code_r0x00014062d48a;
      case 0x26:
        goto code_r0x00014062d49c;
      case 0x27:
        *pcVar28 = *pcVar28;
        *pcVar28 = (code)((char)*pcVar28 + bVar19);
        *(undefined **)(puVar39 + 0x10) = &UNK_142f89da4;
        *(undefined4 **)(puVar39 + -8) = puVar44;
        *(uint **)(puVar39 + -0x10) = puVar52;
        *(byte **)(puVar39 + -0x18) = pbVar51;
        *(longlong **)(puVar39 + -0x20) = plVar26;
        *(int **)(puVar39 + -0x28) = piVar46;
        *(code **)(puVar39 + -0x30) = pcVar31;
        if (_UNK_142f89dcc != 0) {
          return uVar38;
        }
        *(undefined8 *)(puVar39 + -0x60) = 0x14062ef75;
        uVar38 = pdb_1404b2940(&UNK_142f89e54);
        return uVar38;
      case 0x28:
        if (puVar47 == (undefined4 *)0x1) {
          return (ulonglong)_UNK_142f89da8;
        }
        if (puVar47 != (undefined4 *)0x2) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar39 + -8) = 0x14062f19f;
          pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89af0);
        }
        goto code_r0x00014062eff0;
      case 0x29:
        goto code_r0x00014062ef7b;
      case 0x2a:
        goto code_r0x00014062efa5;
      case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x2c:
        return uVar38;
      case 0x2d:
        return uVar38;
      case 0x2e:
        goto code_r0x00014062efcf;
      case 0x2f:
        if (puVar47 == (undefined4 *)0x1) {
          return (ulonglong)_UNK_142f89dc0;
        }
        bVar53 = puVar47 == (undefined4 *)0x2;
        goto code_r0x00014062f02e;
      case 0x30:
        return uVar38;
      }
      uVar57 = *(undefined4 *)pcVar28;
      puVar44[0x74] = puVar44[0x91];
      puVar44[0x75] = puVar44[0x90];
      *(undefined1 *)(puVar44 + 0x76) = 0;
      puVar44[0x54] = puVar44[0x8f];
      puVar44[0x55] = puVar44[0x8d];
      *(undefined1 *)(puVar44 + 0x56) = 0;
      *(undefined8 *)(puVar39 + -8) = 0x14062cc0d;
      unaff_XMM9_Da = (float)pdb_1402205a0(uVar57,piVar46,&uStack_1f8);
      puVar44[0x74] = fVar68 + fVar18;
      puVar44[0x75] = unaff_XMM9_Da + fVar18;
      puVar44[0x76] = fVar68 + fVar70;
      puVar44[0x77] = unaff_XMM9_Da + fVar70;
      uVar24 = *(undefined8 *)(pcVar31 + 0x50);
      *(undefined **)(puVar44 + 0x54) = &UNK_142f89810;
      *(undefined8 *)(puVar44 + 0x56) = 0xd;
      *(byte *)(puVar44 + 0x5a) = bVar20;
      *(undefined8 *)(puVar44 + 0x58) = uVar24;
      *(uint **)(puVar44 + 0x5c) = puVar52;
      plVar26 = *(longlong **)(puVar44 + 0x26);
      lVar25 = plVar26[0x29];
      *(undefined8 *)(puVar39 + -8) = 0x14062cc88;
      uVar24 = pdb_1405726d0(lVar25,&uStack_1f8);
      *(undefined4 *)(puVar39 + 0x20) = 0x10101;
      *(undefined8 *)(puVar39 + -8) = 0x14062cca3;
      pdb_140d19f30(puVar44 + 4,plVar26,piVar46,uVar24);
      if (*(char *)(puVar44 + 0x19) != '\x01') {
        if (*(char *)((longlong)puVar44 + 99) == '\0') {
          bVar20 = 1;
          bVar19 = *(byte *)((longlong)puVar44 + 0x67);
        }
        else {
          lVar25 = *(longlong *)(puVar44 + 8);
          uVar38 = lVar25 + 0x10;
          LOCK();
          bVar53 = *(longlong *)(lVar25 + 0x10) == 0;
          if (bVar53) {
            *(longlong *)(lVar25 + 0x10) = 8;
          }
          UNLOCK();
          if (!bVar53) {
            *(undefined1 *)((longlong)puVar44 + 599) = 1;
            *(undefined8 *)(puVar39 + -8) = 0x14062d647;
            pdb_142dbc1f0(uVar38);
          }
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          *(undefined8 *)(puVar39 + -8) = 0x14062cdb4;
          pdb_140e9a150(uVar38);
          pbVar51 = (byte *)(uVar38 | 1);
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          *(undefined8 *)(puVar39 + -8) = 0x14062cdcb;
          pdb_140e9a150(pbVar51);
          *(ulonglong *)(puVar44 + 0x3c) = uVar38;
          *(undefined8 *)(puVar39 + -8) = 0x14062cddf;
          lVar25 = pdb_140d534b0(lVar25 + 0x18);
          *(undefined8 *)(puVar39 + -8) = 0x14062cdf0;
          bVar19 = pdb_140d0b9e0(lVar25 + 0xb0,0);
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          plVar26 = *(longlong **)(puVar44 + 0x3c);
          *(undefined8 *)(puVar39 + -8) = 0x14062ce0a;
          pdb_140e9a350(plVar26);
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          *(undefined8 *)(puVar39 + -8) = 0x14062ce1a;
          pdb_140e9a350();
          LOCK();
          lVar25 = *plVar26;
          if (lVar25 == 8) {
            *plVar26 = 0;
          }
          UNLOCK();
          if (lVar25 != 8) {
            *(undefined1 *)((longlong)puVar44 + 599) = 1;
            *(undefined8 *)(puVar39 + -8) = 0x14062d65e;
            pdb_142dbca40(plVar26,0);
          }
          bVar20 = *(byte *)((longlong)puVar44 + 0x67);
          bVar19 = (bVar19 | bVar20) & 1;
        }
        if (bVar19 != 0) goto code_r0x00014062ccb2;
code_r0x00014062ce4c:
        piVar36 = (int *)(ulonglong)*(byte *)((longlong)puVar44 + 0x256);
        uVar54 = -(uint)(*(longlong *)(*(byte **)(puVar44 + 0x72) + 8) ==
                         *(longlong *)(pcVar31 + 0x50) & **(byte **)(puVar44 + 0x72)) | 0xff191919;
        pcVar28 = (code *)(ulonglong)uVar54;
        if (*(byte *)((longlong)puVar44 + 0x256) < 4) {
          piVar46 = puVar44 + 0x42;
          goto code_r0x00014062cfde;
        }
        puVar33 = (uint *)0xfff5be6e3fc00000;
code_r0x00014062ce9a:
        bVar53 = (int)piVar36 == 8;
        piVar46 = puVar44 + 0x42;
code_r0x00014062cea4:
        uVar54 = (uint)pcVar28;
        if (bVar53) goto code_r0x00014062cfde;
code_r0x00014062ceaa:
        uVar54 = (uint)pcVar28;
        cVar30 = *(char *)(puVar44 + 0x4d);
        goto joined_r0x00014062cf51;
      }
      bVar20 = *(byte *)((longlong)puVar44 + 0x67);
code_r0x00014062ccb2:
      plVar26 = *(longlong **)(pcVar31 + 0x50);
      puVar48 = *(undefined8 **)(puVar44 + 0x72);
      *puVar48 = 1;
      puVar48[1] = plVar26;
      if ((bVar20 != 1) || ((*(byte *)(puVar44 + 0x14) & 1) == 0)) goto code_r0x00014062ce4c;
      uVar57 = puVar44[0x16];
      puVar44[0x74] = puVar44[0x8f];
      puVar44[0x75] = puVar44[0x8d];
      *(undefined1 *)(puVar44 + 0x76) = 0;
      puVar44[0x54] = puVar44[0x91];
      puVar44[0x55] = puVar44[0x90];
      *(undefined1 *)(puVar44 + 0x56) = 0;
      piVar36 = piVar46;
code_r0x00014062cd30:
      *(undefined8 *)(puVar39 + -8) = 0x14062cd38;
      puVar48 = &uStack_1f8;
      uVar38 = pdb_1402205a0(uVar57);
      uVar57 = (undefined4)uVar38;
      puVar33 = (uint *)&UNK_142f89dcc;
      iVar49 = *(int *)(&UNK_142f89dcc + (ulonglong)*(byte *)((longlong)puVar44 + 0x256) * 4);
      pcVar28 = (code *)(&UNK_142f89dcc + iVar49);
      bVar53 = pcVar28 == (code *)0x0;
      bVar20 = (byte)pcVar28;
      uVar29 = (undefined7)((ulonglong)pcVar28 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)((longlong)puVar44 + 0x256)) {
      case 0:
        pcVar28 = pcVar31;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 4, puVar52 == (uint *)0x2)) {
          pcVar28 = pcVar31 + 8;
        }
        *(undefined4 *)pcVar28 = uVar57;
        bVar20 = **(byte **)(puVar44 + 0x72);
        plVar26 = *(longlong **)(*(byte **)(puVar44 + 0x72) + 8);
        goto code_r0x00014062cfc4;
      case 1:
        pcVar28 = pcVar31 + 0x24;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x28, puVar52 == (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x2c;
        }
        goto code_r0x00014062cf1d;
      case 2:
        pcVar28 = pcVar31 + 0x18;
        if (puVar52 != (uint *)0x0) {
          pcVar28 = pcVar31 + 0x1c;
code_r0x00014062cedb:
          if (puVar52 == (uint *)0x2) {
code_r0x00014062cee1:
            pcVar28 = pcVar31 + 0x20;
          }
        }
        goto code_r0x00014062cf1d;
      case 3:
        pcVar28 = pcVar31 + 0xc;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x10, puVar52 == (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x14;
code_r0x00014062cefe:
        }
code_r0x00014062cf1d:
        *(undefined4 *)pcVar28 = uVar57;
code_r0x00014062cfc2:
        bVar20 = 1;
code_r0x00014062cfc4:
        piVar46 = puVar44 + 0x42;
        uVar54 = -(uint)(plVar26 == *(longlong **)(pcVar31 + 0x50) & bVar20) | 0xff191919;
code_r0x00014062cfde:
        *(undefined8 *)(puVar44 + 0x54) = 0xff64dc50ff4b4beb;
        puVar44[0x56] = 0xfff58755;
        puVar33 = (uint *)((ulonglong)(uint)puVar44[(longlong)(puVar52 + 0x15)] << 0x20 | 0x3fc00000
                          );
        cVar30 = *(char *)(puVar44 + 0x4d);
        goto joined_r0x00014062cf51;
      case 4:
        pcVar28 = pcVar31 + 0x30;
        break;
      case 5:
        pcVar28 = pcVar31 + 0x34;
        break;
      case 6:
        pcVar28 = pcVar31 + 0x38;
        break;
      case 7:
        pcVar28 = pcVar31 + 0x3c;
code_r0x00014062cf04:
        break;
      case 8:
        pcVar28 = pcVar31 + 0x40;
        if ((puVar52 != (uint *)0x0) && (pcVar28 = pcVar31 + 0x44, puVar52 == (uint *)0x2)) {
          pcVar28 = pcVar31 + 0x48;
        }
        *(undefined4 *)pcVar28 = uVar57;
        fVar71 = *(float *)(pcVar31 + 0x48);
        uVar38 = *(ulonglong *)(pcVar31 + 0x40);
        auVar65._8_8_ = 0;
        auVar65._0_8_ = uVar38;
        fVar56 = (float)(uVar38 >> 0x20) * _UNK_142f89674 + (float)uVar38 * _DAT_142f89670 +
                 fVar71 * _DAT_142f8966c;
        if (fVar56 <= _DAT_142e37934) {
          fVar56 = _DAT_142e37934;
        }
        auVar63._4_4_ = fVar56;
        auVar63._0_4_ = fVar56;
        auVar63._8_4_ = _UNK_142f8967c * 0.0;
        auVar63._12_4_ = _UNK_142f8967c * 0.0;
        auVar59 = divps(auVar65,auVar63);
        *(ulonglong *)(pcVar31 + 0x40) = auVar59._0_8_;
        *(float *)(pcVar31 + 0x48) = fVar71 / fVar56;
        goto code_r0x00014062cfc2;
      case 9:
        pcVar28 = pcVar31 + 0x4c;
code_r0x00014062cebf:
        *(int *)pcVar28 = *(int *)pcVar28 + (int)pcVar28;
        pcVar28[-0x73] = (code)((char)pcVar28[-0x73] + (char)puVar33);
        puVar40 = (undefined8 *)(puVar39 + -8);
        puVar39 = puVar39 + -8;
        *puVar40 = 0x4c438d48;
        break;
      default:
        pcVar28 = (code *)(ulonglong)((int)puVar44 + 0xa0);
        goto code_r0x00014062d32f;
      case 0xe:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x30);
        goto code_r0x00014062d3c1;
      case 0xf:
        goto code_r0x00014062d530;
      case 0x10:
        puVar33 = (uint *)&UNK_142f89d51;
code_r0x00014062d42b:
        *puVar33 = *puVar33 + (int)pcVar28;
        *pcVar28 = (code)((char)*pcVar28 + (char)pcVar28);
        goto code_r0x00014062d42f;
      case 0x11:
        goto code_r0x00014062d46f;
      case 0x13:
        pcVar28 = (code *)CONCAT71(uVar29,bVar20 - 0x17);
code_r0x00014062d401:
        *(int *)pcVar28 = *(int *)pcVar28 + (int)pcVar28;
        pcVar28[-0x73] = (code)((char)pcVar28[-0x73] + (char)puVar33);
        uVar54 = (uint)CONCAT71((int7)((ulonglong)pcVar28 >> 8),(char)pcVar28 + -0x17) & *puVar33;
        *(char *)(ulonglong)uVar54 = *(char *)(ulonglong)uVar54 + (char)uVar54;
        goto code_r0x00014062d40d;
      case 0x14:
        goto code_r0x00014062d39a;
      case 0x15:
        (&UNK_142f89d93)[iVar49] = (&UNK_142f89d93)[iVar49] + -0x34;
        cVar3 = *pcVar28;
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        pcVar28 = (code *)CONCAT71(uVar29,bVar20 + CARRY1((byte)cVar3,bVar20));
code_r0x00014062d48a:
        *pcVar28 = (code)((char)*pcVar28 + (char)pcVar28);
        goto code_r0x00014062d48c;
      case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x17:
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        (&UNK_142f89d59)[iVar49] = (&UNK_142f89d59)[iVar49] + -0x34;
code_r0x00014062d46f:
        puVar44 = (undefined4 *)0x48000000;
        goto code_r0x00014062d473;
      case 0x18:
        goto code_r0x00014062d4e0;
      case 0x19:
code_r0x00014062d4b8:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0xc);
        bVar53 = puVar52 == (uint *)0x0;
      case 0x1a:
        if (!bVar53) {
          pcVar28 = pcVar31 + 0x14;
          goto code_r0x00014062d4c4;
        }
        goto code_r0x00014062d530;
      case 0x1b:
        goto code_r0x00014062d4b2;
      case 0x1c:
        goto code_r0x00014062d4c4;
      case 0x1d:
        return uVar38;
      case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1f:
code_r0x00014062efa5:
        *(undefined8 *)(puVar39 + -8) = 0x14062efac;
        func_0xc3ab80ab();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x20:
        goto code_r0x00014062efcd;
      case 0x21:
        puVar42 = (undefined8 *)(puVar39 + -8);
        puVar39 = puVar39 + -8;
        *puVar42 = plVar26;
code_r0x00014062ef7b:
        *pcVar28 = (code)((char)*pcVar28 + (char)pcVar28);
        *pcVar28 = (code)((char)*pcVar28 + (char)pcVar28);
        pcVar28[-0x77] = (code)((char)pcVar28[-0x77] + (char)puVar33);
        *(undefined1 **)(puVar39 + -8) = puVar39;
        *(undefined4 **)(puVar39 + -0x10) = puVar44;
        *(uint **)(puVar39 + -0x18) = puVar52;
        *(byte **)(puVar39 + -0x20) = pbVar51;
        puVar43 = (undefined8 *)(puVar39 + -0x28);
        puVar39 = puVar39 + -0x28;
        *puVar43 = plVar26;
        goto code_r0x00014062ef8b;
      case 0x22:
        goto code_r0x00014062f02e;
      case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x25:
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        if (puVar48 == (undefined8 *)0x1) {
          return (ulonglong)(uint)piVar36[4];
        }
        if (puVar48 != (undefined8 *)0x2) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar39 + -8) = 0x14062f187;
          pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b38);
        }
        iVar55 = piVar36[5];
        uVar57 = 0;
        goto code_r0x00014062f066;
      case 0x26:
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        goto code_r0x00014062ef8b;
      }
      *(undefined4 *)pcVar28 = uVar57;
code_r0x00014062cf34:
      uVar54 = 0xffffffff;
      puVar33 = (uint *)0xfff5be6e3fc00000;
      piVar46 = puVar44 + 0x42;
      cVar30 = *(char *)(puVar44 + 0x4d);
joined_r0x00014062cf51:
      if (((cVar30 == '\x01') && (*(int *)((longlong)puVar44 + 0x135) == 0)) ||
         (((float)puVar44[0x4c] == 0.0 && (!NAN((float)puVar44[0x4c]))))) {
        lVar25 = *(longlong *)(puVar44 + 0x46);
        uVar38 = lVar25 + 0x10;
        LOCK();
        bVar53 = *(longlong *)(lVar25 + 0x10) == 0;
        if (bVar53) {
          *(longlong *)(lVar25 + 0x10) = 8;
        }
        UNLOCK();
        if (!bVar53) {
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          *(undefined8 *)(puVar39 + -8) = 0x14062d62c;
          pdb_142dbc1f0(uVar38);
        }
        *(undefined1 *)((longlong)puVar44 + 599) = 1;
        *(undefined8 *)(puVar39 + -8) = 0x14062d062;
        pdb_140e9a150(uVar38);
        pbVar51 = (byte *)(uVar38 | 1);
        *(undefined1 *)((longlong)puVar44 + 599) = 1;
        *(undefined8 *)(puVar39 + -8) = 0x14062d079;
        pdb_140e9a150(pbVar51);
        *(ulonglong *)(puVar44 + 0x3c) = uVar38;
        uVar24 = *(undefined8 *)(puVar44 + 0x42);
        uVar4 = *(undefined1 *)(puVar44 + 0x44);
        *(undefined8 *)(puVar39 + -8) = 0x14062d09b;
        lVar25 = pdb_140d534b0(lVar25 + 0x18);
        *(undefined8 *)(puVar39 + -8) = 0x14062d0b0;
        plVar26 = (longlong *)
                  pdb_140d42b70(lVar25 + 0x630,uVar24,
                                CONCAT71((int7)(uVar38 >> 8),uVar4) & 0xffffffff);
        puVar44[0x68] = puVar44[0x48];
        puVar44[0x69] = puVar44[0x49];
        puVar44[0x6a] = puVar44[0x4a];
        puVar44[0x6b] = puVar44[0x4b];
        lVar25 = plVar26[2];
        *(undefined8 *)(puVar44 + 0x54) = 2;
        if (lVar25 == *plVar26) {
          *(undefined8 *)(puVar39 + -8) = 0x14062d0e5;
          pdb_142db5410(plVar26);
        }
        lVar1 = plVar26[1];
        lVar34 = lVar25 * 0x60;
        uVar24 = *(undefined8 *)(puVar44 + 0x6a);
        puVar48 = (undefined8 *)(lVar1 + 0x50 + lVar34);
        *puVar48 = *(undefined8 *)(puVar44 + 0x68);
        puVar48[1] = uVar24;
        uVar24 = *(undefined8 *)(puVar44 + 0x66);
        puVar48 = (undefined8 *)(lVar1 + 0x40 + lVar34);
        *puVar48 = *(undefined8 *)(puVar44 + 100);
        puVar48[1] = uVar24;
        uVar57 = puVar44[0x54];
        uVar9 = puVar44[0x55];
        uVar10 = puVar44[0x56];
        uVar11 = puVar44[0x57];
        uVar24 = *(undefined8 *)(puVar44 + 0x58);
        uVar15 = *(undefined8 *)(puVar44 + 0x5a);
        uVar16 = *(undefined8 *)(puVar44 + 0x5c);
        uVar17 = *(undefined8 *)(puVar44 + 0x5e);
        uVar12 = puVar44[0x61];
        uVar13 = puVar44[0x62];
        uVar14 = puVar44[99];
        puVar47 = (undefined4 *)(lVar1 + 0x30 + lVar34);
        *puVar47 = puVar44[0x60];
        puVar47[1] = uVar12;
        puVar47[2] = uVar13;
        puVar47[3] = uVar14;
        puVar48 = (undefined8 *)(lVar1 + 0x20 + lVar34);
        *puVar48 = uVar16;
        puVar48[1] = uVar17;
        puVar48 = (undefined8 *)(lVar1 + 0x10 + lVar34);
        *puVar48 = uVar24;
        puVar48[1] = uVar15;
        puVar47 = (undefined4 *)(lVar1 + lVar34);
        *puVar47 = uVar57;
        puVar47[1] = uVar9;
        puVar47[2] = uVar10;
        puVar47[3] = uVar11;
        plVar26[2] = lVar25 + 1;
        *(undefined1 *)((longlong)puVar44 + 599) = 1;
        plVar26 = *(longlong **)(puVar44 + 0x3c);
        *(undefined8 *)(puVar39 + -8) = 0x14062d156;
        pdb_140e9a350(plVar26);
        *(undefined1 *)((longlong)puVar44 + 599) = 1;
        *(undefined8 *)(puVar39 + -8) = 0x14062d16d;
        pdb_140e9a350();
        LOCK();
        lVar25 = *plVar26;
        if (lVar25 == 8) {
          *plVar26 = 0;
        }
        UNLOCK();
        if (lVar25 != 8) {
          *(undefined1 *)((longlong)puVar44 + 599) = 1;
          *(undefined8 *)(puVar39 + -8) = 0x14062d191;
          pdb_142dbca40(plVar26,0);
        }
      }
      else {
        puVar44[0x76] = fVar68;
        puVar44[0x77] = unaff_XMM9_Da;
        *(uint **)(puVar44 + 0x78) = puVar33;
        puVar44[0x7a] = 0x40a00000;
        puVar44[0x7b] = uVar54;
        *(undefined8 *)(puVar44 + 0x74) = 4;
        *(undefined1 *)((longlong)puVar44 + 0x252) = 1;
        *(undefined8 *)(puVar39 + -8) = 0x14062d1ea;
        pdb_140d24750(piVar46,puVar44 + 0x74);
        *(undefined8 *)(puVar44 + 100) = *(undefined8 *)(puVar44 + 0x84);
        *(undefined8 *)(puVar44 + 0x66) = *(undefined8 *)(puVar44 + 0x86);
        puVar44[0x60] = puVar44[0x80];
        puVar44[0x61] = puVar44[0x81];
        puVar44[0x62] = puVar44[0x82];
        puVar44[99] = puVar44[0x83];
        *(undefined8 *)(puVar44 + 0x5c) = *(undefined8 *)(puVar44 + 0x7c);
        *(undefined8 *)(puVar44 + 0x5e) = *(undefined8 *)(puVar44 + 0x7e);
        *(undefined8 *)(puVar44 + 0x58) = *(undefined8 *)(puVar44 + 0x78);
        *(undefined8 *)(puVar44 + 0x5a) = *(undefined8 *)(puVar44 + 0x7a);
        puVar44[0x54] = puVar44[0x74];
        puVar44[0x55] = puVar44[0x75];
        puVar44[0x56] = puVar44[0x76];
        puVar44[0x57] = puVar44[0x77];
        *(int **)(puVar44 + 0x68) = piVar46;
        *(int **)(puVar44 + 0x6a) = piVar46;
        *(undefined1 *)((longlong)puVar44 + 0x252) = 0;
        *(undefined8 *)(puVar39 + -8) = 0x14062d255;
        pdb_1400abaf0(puVar44 + 0x46,&uStack_1f8);
      }
      piVar46 = puVar44 + 0x74;
      *(undefined8 *)(puVar44 + 0x68) = *(undefined8 *)(puVar44 + 0x18);
      *(undefined8 *)(puVar44 + 0x6a) = *(undefined8 *)(puVar44 + 0x1a);
      *(undefined8 *)(puVar44 + 100) = *(undefined8 *)(puVar44 + 0x14);
      *(undefined8 *)(puVar44 + 0x66) = *(undefined8 *)(puVar44 + 0x16);
      puVar44[0x60] = puVar44[0x10];
      puVar44[0x61] = puVar44[0x11];
      puVar44[0x62] = puVar44[0x12];
      puVar44[99] = puVar44[0x13];
      *(undefined1 (*) [16])(puVar44 + 0x5c) = *(undefined1 (*) [16])(puVar44 + 0xc);
      *(undefined8 *)(puVar44 + 0x58) = *(undefined8 *)(puVar44 + 8);
      *(undefined8 *)(puVar44 + 0x5a) = *(undefined8 *)(puVar44 + 10);
      *(undefined8 *)(puVar44 + 0x54) = *(undefined8 *)(puVar44 + 4);
      *(undefined8 *)(puVar44 + 0x56) = *(undefined8 *)(puVar44 + 6);
      fVar71 = *(float *)(pcVar31 + 0x58);
      *(undefined8 *)(puVar39 + -8) = 0x14062d2ba;
      fVar71 = (float)pub_142e32a70(fVar71 * fVar69 + _DAT_142f57bc8);
      *(undefined8 *)(puVar39 + -8) = 0x14062d2c4;
      fVar71 = (float)pub_142e32b00(fVar71 * fVar66);
      uVar54 = 0;
      if (0.0 <= fVar71) {
        uVar54 = (uint)(longlong)fVar71;
      }
      uVar21 = 0xffffffff;
      if (fVar71 <= fVar67) {
        uVar21 = uVar54;
      }
      puVar44[0x50] = (uVar21 % 0x5a0) / 0x3c;
      puVar44[-2] = (uVar21 % 0x5a0) % 0x3c;
      *(undefined4 **)(puVar44 + 0x28) = puVar44 + 0x50;
      pcVar28 = pdb_140f71a50;
      *(code **)(puVar44 + 0x2a) = pdb_140f71a50;
      puVar33 = puVar44 + -2;
code_r0x00014062d32f:
      *(uint **)(puVar44 + 0x2c) = puVar33;
      *(code **)(puVar44 + 0x2e) = pcVar28;
      *(undefined1 *)((longlong)puVar44 + 0x255) = 1;
      *(undefined8 *)(puVar39 + -8) = 0x14062d35b;
      uVar50 = pdb_140f60760(puVar44 + 0x1c,&UNK_142f89864,puVar44 + 0x28);
      bVar20 = *(byte *)((longlong)puVar44 + 0x256);
      pcVar28 = (code *)(ulonglong)bVar20;
      piVar36 = (int *)&UNK_142f89df4;
      uVar38 = (ulonglong)*(int *)(&UNK_142f89df4 + (longlong)pcVar28 * 4);
      puVar33 = (uint *)(&UNK_142f89df4 + uVar38);
      cVar30 = (char)puVar33;
      uVar54 = (uint)bVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar20) {
      default:
        puVar35 = &UNK_142f8982c;
code_r0x00014062d37a:
        *(undefined **)(puVar44 + 0x28) = puVar35;
        *(undefined8 *)(puVar44 + 0x2a) = 3;
        *(undefined **)(puVar44 + 0x2c) = &UNK_142f8982f;
code_r0x00014062d39a:
        *(undefined8 *)(puVar44 + 0x2e) = 5;
        *(undefined **)(puVar44 + 0x30) = &UNK_142f89834;
        *(undefined8 *)(puVar44 + 0x32) = 4;
        puVar33 = puVar52;
        goto code_r0x00014062d3c1;
      case 4:
code_r0x00014062d40d:
        *(undefined **)(puVar44 + 0x50) = &UNK_142f89a4e;
        *(undefined8 *)(puVar44 + 0x52) = 0x13;
        pcVar28 = pcVar31 + 0x30;
        break;
      case 5:
code_r0x00014062d473:
        *(undefined **)(puVar44 + 0x50) = &UNK_142f89a61;
        *(undefined8 *)(puVar44 + 0x52) = 0x14;
code_r0x00014062d48c:
        pcVar28 = pcVar31 + 0x34;
code_r0x00014062d490:
        break;
      case 6:
        pcVar28 = (code *)&UNK_142f89a75;
code_r0x00014062d458:
        *(code **)(puVar44 + 0x50) = pcVar28;
        *(undefined8 *)(puVar44 + 0x52) = 0x10;
        pcVar28 = pcVar31 + 0x38;
        break;
      case 7:
        pcVar28 = (code *)&UNK_142f89a85;
        goto code_r0x00014062d49c;
      case 9:
code_r0x00014062d42f:
        *(undefined **)(puVar44 + 0x50) = &UNK_142f89aa1;
        *(undefined8 *)(puVar44 + 0x52) = 0xf;
        pcVar28 = pcVar31 + 0x4c;
        break;
      case 10:
        puVar33 = (uint *)(ulonglong)(uint)((int)puVar33 << 4);
code_r0x00014062d3c1:
        puVar47 = puVar44 + (longlong)puVar33 * 4 + 0x28;
        uVar57 = puVar47[1];
        uVar9 = puVar47[2];
        uVar10 = puVar47[3];
        puVar44[0x50] = *puVar47;
        puVar44[0x51] = uVar57;
        puVar44[0x52] = uVar9;
        puVar44[0x53] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00014062d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar38 = (*(code *)(&UNK_142f89e1c +
                           *(int *)(&UNK_142f89e1c + ((ulonglong)pcVar28 & 0xffffffff) * 4)))
                           (&UNK_142f89e1c +
                            *(int *)(&UNK_142f89e1c + ((ulonglong)pcVar28 & 0xffffffff) * 4));
        return uVar38;
      case 0xb:
        cVar3 = *pcVar28;
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        bVar20 = bVar20 + CARRY1((byte)cVar3,bVar20);
        pcVar28 = (code *)(ulonglong)bVar20;
        *pcVar28 = (code)((char)*pcVar28 + bVar20);
        goto code_r0x00014062d49c;
      case 0xc:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x14);
code_r0x00014062d4c4:
        if (puVar52 != (uint *)0x2) {
          pcVar28 = pcVar31 + 0x10;
        }
        break;
      case 0xd:
        pcVar27 = (char *)((ulonglong)pcVar28 ^ 0xe9);
        *pcVar27 = *pcVar27 + (char)pcVar27;
        pcVar27[-0x73] = pcVar27[-0x73] + cVar30;
        pcVar28 = (code *)(ulonglong)((int)pcVar27 + 0x295c5e9);
code_r0x00014062d49c:
        *(code **)(puVar44 + 0x50) = pcVar28;
        *(undefined8 *)(puVar44 + 0x52) = 0x14;
        pcVar28 = pcVar31 + 0x3c;
code_r0x00014062d4b2:
        break;
      case 0xe:
        pcVar28 = pcVar31 + 0x34;
        break;
      case 0xf:
code_r0x00014062d4e0:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x28);
        break;
      case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x11:
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x2c);
        if (puVar52 != (uint *)0x2) {
          pcVar28 = pcVar31 + 0x28;
        }
        break;
      case 0x12:
        *(char *)((longlong)puVar44 + -0x7b) =
             (*(char *)((longlong)puVar44 + -0x7b) - cVar30) - (0xfffffffebd07620b < uVar38);
        puVar41 = puVar39 + -8;
        *(undefined8 *)(puVar39 + -8) = *(undefined8 *)((longlong)(plVar26 + 9) + (longlong)piVar46)
        ;
        pcVar28 = (code *)(ulonglong)(iVar55 + 0x20);
        puVar39 = puVar39 + -8;
        if (puVar52 != (uint *)0x2) {
          pcVar28 = pcVar31 + 0x1c;
          puVar39 = puVar41;
        }
        break;
      case 0x13:
code_r0x00014062ef8b:
        *(int **)(puVar39 + -8) = piVar46;
        *(code **)(puVar39 + -0x10) = pcVar31;
        piVar36[0x32] = 4;
        piVar36[0x33] = 0;
        *(undefined8 *)(puVar39 + -0x40) = 0x14062efa9;
        uVar38 = pdb_1404b6260(piVar36 + 0x2c);
        return uVar38;
      case 0x14:
        iVar55 = *piVar46;
        *(uint *)pcVar28 = *(int *)pcVar28 + uVar54;
        pcVar28[-0x7d] = (code)((char)pcVar28[-0x7d] + cVar30 + (char)iVar55);
        return uVar50;
      case 0x15:
        pcVar28 = (code *)((ulonglong)puVar44 & 0xffffffff);
code_r0x00014062efcd:
        puVar33 = (uint *)CONCAT71((int7)((ulonglong)puVar33 >> 8),(char)puVar33 + (char)pcVar28[99]
                                  );
        pcVar28 = (code *)CONCAT71((int7)((ulonglong)pcVar28 >> 8),(char)pcVar28 + -0x7f);
code_r0x00014062efcf:
                    /* WARNING: Could not recover jumptable at 0x00014062efd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar38 = (*(code *)((ulonglong)puVar33[(longlong)pcVar28] + (longlong)puVar33))();
        return uVar38;
      case 0x16:
code_r0x00014062eff0:
        return (ulonglong)(uint)piVar36[2];
      case 0x17:
        return uVar50;
      case 0x18:
        iVar55 = *piVar46;
        *(uint *)pcVar28 = *(int *)pcVar28 + uVar54;
        pcVar28[-0x7d] = (code)((char)pcVar28[-0x7d] + cVar30 + (char)iVar55);
        return uVar50;
      case 0x19:
        iVar55 = _UNK_142f89df4;
        uVar57 = _UNK_142f89df8;
code_r0x00014062f066:
        return CONCAT44(uVar57,iVar55);
      case 0x1a:
        (&UNK_142f89d77)[uVar38] = (&UNK_142f89d77)[uVar38] + cVar30;
        *piVar46 = *piVar46 + (int)puVar33;
        bVar53 = uVar54 == 2;
code_r0x00014062f02e:
        if (bVar53) {
          return (ulonglong)(uint)piVar36[8];
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar39 + -8) = 0x14062f16f;
        pdb_142dc83d0(&UNK_142f89c38,0x27,&UNK_142f89b20);
      case 0x1b:
        return CONCAT44(_UNK_142f89df8,_UNK_142f89df4);
      case 0x1c:
        pcVar28 = (code *)swi(3);
        uVar38 = (*pcVar28)();
        return uVar38;
      }
code_r0x00014062d530:
      puVar44[0x34] = *(undefined4 *)pcVar28;
      *(undefined4 **)(puVar44 + 0x28) = puVar44 + 0x1c;
      *(code **)(puVar44 + 0x2a) = pdb_140001020;
      *(undefined4 **)(puVar44 + 0x2c) = puVar44 + 0x50;
      *(code **)(puVar44 + 0x2e) = pdb_1402ed400;
      *(undefined4 **)(puVar44 + 0x30) = puVar44 + 0x34;
      *(code **)(puVar44 + 0x32) = pdb_140f70fc0;
      *(undefined8 *)(puVar39 + -8) = 0x14062d5a4;
      pdb_140f60760(puVar44 + -2,&UNK_142f8981d,puVar44 + 0x28);
      uVar38 = *(ulonglong *)(puVar44 + 0x1c);
      if (uVar38 != 0) {
        pbVar2 = *(byte **)(puVar44 + 0x1e);
        *(undefined8 *)(puVar39 + -8) = 0x14062d5bd;
        pub_1406abac0(pbVar2,uVar38,1);
      }
      puVar44[0x28] = puVar44[-2];
      puVar44[0x29] = puVar44[-1];
      puVar44[0x2a] = *puVar44;
      puVar44[0x2b] = puVar44[1];
      *(undefined8 *)(puVar44 + 0x2c) = *(undefined8 *)(puVar44 + 2);
      *(undefined1 *)((longlong)puVar44 + 0x255) = 0;
      puVar47 = puVar44 + 0x28;
      *(undefined8 *)(puVar39 + -8) = 0x14062d5ec;
      uVar38 = pdb_14056db00(piVar46,&uStack_1f8);
      plVar26 = *(longlong **)(puVar44 + 0x78);
      LOCK();
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (*plVar26 == 0) {
        *(undefined1 *)((longlong)puVar44 + 599) = 0;
        *(undefined8 *)(puVar39 + -8) = 0x14062d611;
        uVar38 = pdb_140d71bf0(puVar44 + 0x78);
      }
    }
    pcVar28 = *(code **)(puVar44 + 0x22);
    pcVar32 = *(code **)(puVar44 + 0x36);
  } while( true );
}

