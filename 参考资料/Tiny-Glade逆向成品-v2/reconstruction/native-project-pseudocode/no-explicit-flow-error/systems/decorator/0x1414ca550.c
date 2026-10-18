// VA 0x1414ca550, PDB extent 9279 bytes
// system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
   Extent: 9279 */

undefined8 *
pdb_1414ca550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             float *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,byte param_14,undefined8 param_15,byte param_16,undefined8 param_17
             ,undefined8 param_18)

{
  undefined1 auVar1 [16];
  byte bVar2;
  float *pfVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong extraout_RAX;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined8 uVar20;
  byte bVar21;
  float fVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  float extraout_XMM0_Da;
  undefined4 uVar26;
  float fVar27;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 in_stack_fffffffffffffcd8;
  undefined8 *puVar49;
  undefined8 uVar50;
  undefined8 in_stack_fffffffffffffce0;
  undefined8 in_stack_fffffffffffffce8;
  undefined8 *puVar51;
  undefined8 uVar52;
  undefined8 in_stack_fffffffffffffcf0;
  undefined8 in_stack_fffffffffffffcf8;
  undefined4 uVar53;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float *pfStack_2a8;
  undefined1 auStack_2a0 [8];
  float fStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  float fStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  float fStack_260;
  undefined1 auStack_258 [16];
  float fStack_244;
  undefined8 uStack_240;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 uStack_1d0;
  byte bStack_1cf;
  undefined1 uStack_1ce;
  undefined4 uStack_1cd;
  undefined1 uStack_1c9;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float *pfStack_198;
  longlong lStack_190;
  float *pfStack_188;
  undefined8 *puStack_180;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_10c;
  float *pfStack_108;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  bVar2 = param_16;
  bVar21 = param_14;
  uVar50 = param_12;
  puVar51 = param_7;
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffce0 >> 0x20);
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffce8 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffcf0 >> 0x20);
  uVar53 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  uStack_f8 = param_6;
  uVar14 = *(undefined8 *)(param_5 + 8);
  fVar37 = param_5[10];
  uStack_268._0_4_ = (float)uVar14;
  fVar39 = (float)uStack_268;
  auVar40 = ZEXT416((uint)(float)uStack_268);
  uStack_268._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
  uStack_268 = uVar14;
  fStack_260 = fVar37;
  if ((0x7f7fffff < (uint)ABS((float)uStack_268) || 0x7f7fffff < (uStack_268._4_4_ & 0x7fffffff)) ||
     ((uint)ABS(fVar37) >= 0x7f800000)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143313670,0x26,&UNK_143313698);
  }
  fVar22 = *param_5;
  fVar31 = param_5[1];
  uVar14 = *(undefined8 *)param_5;
  fVar30 = param_5[2];
  fVar27 = param_5[3];
  uVar20 = *(undefined8 *)(param_5 + 2);
  auVar1._4_4_ = -(uint)((float)(_UNK_142e377e4 & (uint)fVar31) < _UNK_14301cce4);
  auVar1._0_4_ = -(uint)((float)(_DAT_142e377e0 & (uint)fVar22) < _DAT_14301cce0);
  auVar1._8_4_ = -(uint)((float)(_UNK_142e377e8 & (uint)fVar30) < _UNK_14301cce8);
  auVar1._12_4_ = -(uint)((float)(_UNK_142e377ec & (uint)fVar27) < _UNK_14301ccec);
  iVar7 = movmskps(CONCAT31((int3)((uint)ABS((float)uStack_268) >> 8),(uint)ABS(fVar37) < 0x7f800000
                           ),auVar1);
  if (iVar7 != 0xf) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433136b0,0x26,&UNK_1433136d8);
  }
  pfStack_108 = param_5 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_5 + 4)) {
  case 0:
    auStack_1b8._0_8_ = param_3;
    uStack_26c = param_6;
    auStack_288._0_8_ = *(undefined8 *)(param_5 + 6);
    lVar24 = pdb_140b54f80(param_2,*(undefined8 *)(param_5 + 6),&UNK_1433137e8);
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143313800);
    }
    uVar8 = pdb_14092f860(lVar24);
    puVar49 = param_11;
    uStack_158 = CONCAT44(uStack_158._4_4_,uVar8);
    uStack_240 = puVar51;
    uStack_238 = (code *)param_12;
    uStack_230 = param_13;
    uVar14 = param_11[1];
    uVar8 = pdb_1408de710(&uStack_240,uVar14,param_2,auStack_1b8._0_8_);
    uVar5 = *(undefined1 *)((longlong)puVar51 + 0x59);
    uVar6 = pdb_1409012c0(uVar8,*puVar49);
    uStack_f9 = uVar5;
    uVar5 = pdb_140c44ba0(uVar5);
    uStack_1a8._0_2_ = CONCAT11(uVar6,uVar5);
    puVar51 = &uStack_1a8;
    uStack_290 = uVar14;
    lVar12 = pdb_141494370(uVar14,puVar51);
    if (lVar12 == 0) {
code_r0x0001414cc69e:
      uStack_240 = &uStack_1a8;
      uStack_238 = pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_240,&UNK_14330e2f8);
    }
    fVar37 = *(float *)(lVar12 + 0x3c);
    fVar39 = *(float *)(lVar12 + 0x38);
    fVar32 = *(float *)(lVar12 + 0x30);
    fVar29 = param_5[9];
    fVar41 = param_5[10];
    fVar45 = (float)pdb_14148ca40(lVar24);
    fVar44 = _DAT_142e36f28;
    fVar42 = 0.0;
    if (0.0 <= fVar45) {
      fVar42 = fVar45;
    }
    fVar45 = _DAT_142e36f28;
    if (fVar42 <= _DAT_142e36f28) {
      fVar45 = fVar42;
    }
    fVar42 = (float)pdb_14007ee60(fVar45 * *(float *)(lVar24 + 0x30));
    uStack_f1 = pdb_14007fac0();
    uVar14 = pdb_14007fac0();
    bVar2 = param_16;
    auStack_258._0_8_ = uVar14;
    bVar25 = *(uint *)(lVar24 + 600) < 2;
    uVar14 = auStack_288._0_8_;
    if (bVar21 != 0) {
      uStack_1a8 = (float *)0x0;
      uStack_1a0 = (code *)0x4;
      pfStack_198 = (float *)0x0;
      lVar12 = pdb_140c3e440(param_10,auStack_288._0_8_);
      if (lVar12 != 0) {
        uVar26 = (undefined4)((ulonglong)&uStack_26c >> 0x20);
        puVar49 = param_11;
        fStack_130 = fVar42;
        fStack_12c = fVar29;
        fStack_128 = fVar32;
        fStack_124 = fVar37 - fVar39;
        pdb_1424cc460(&fStack_130,uStack_158 & 0xffffffff);
        uVar28 = (undefined4)((ulonglong)puVar49 >> 0x20);
        uVar34 = (undefined4)((ulonglong)puVar51 >> 0x20);
      }
      lVar12 = pdb_140c3e440(param_10,uVar14);
      if (lVar12 == 0) {
        if (uStack_1a8 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_1a0,(longlong)uStack_1a8 << 2,4);
        }
      }
      else {
        uVar52 = CONCAT44(uVar34,extraout_XMM0_Da);
        uVar20 = CONCAT44(uVar26,(float)uStack_158);
        uVar50 = param_9;
        pdb_1414f7500(&uStack_240,uStack_f8,param_7,param_8,param_9,uVar20,uVar52,
                      CONCAT44(uVar11,fVar42),CONCAT44(uVar53,fVar29),uStack_1a0,pfStack_198,lVar12,
                      param_11);
        puVar51 = uStack_240;
        uVar28 = (undefined4)((ulonglong)uVar50 >> 0x20);
        uVar26 = (undefined4)((ulonglong)uVar20 >> 0x20);
        uVar34 = (undefined4)((ulonglong)uVar52 >> 0x20);
        if (uStack_1a8 != (float *)0x0) {
          pub_1406abac0((byte *)uStack_1a0,(longlong)uStack_1a8 << 2,4);
        }
        auVar40 = auStack_258;
        if (puVar51 != (undefined8 *)0x8) {
          auStack_258._4_4_ = fStack_1d4;
          auStack_258._0_4_ = fStack_1d8;
          auStack_258._8_8_ = auVar40._8_8_;
          uStack_f1 = uStack_1d0;
          fStack_10c = (float)CONCAT31(fStack_10c._1_3_,uStack_1ce);
          uStack_160 = uStack_1cd;
          uStack_15c = uStack_1c9;
          pfVar17 = (float *)(ulonglong)uStack_1e8._1_1_;
          uVar11 = 1;
          fVar37 = uStack_1e0;
          bVar21 = bStack_1cf;
          uVar43 = uStack_1c8;
          fVar29 = fStack_1dc;
          goto code_r0x0001414cc2ac;
        }
      }
    }
    fVar37 = fVar42;
    if (*(int *)(lVar24 + 600) == 1) {
      fStack_10c = (float)CONCAT31(fStack_10c._1_3_,bVar25);
      pfStack_198 = *(float **)(lVar24 + 0x26c);
      uStack_1a8 = *(float **)(lVar24 + 0x25c);
      uStack_1a0 = *(code **)(lVar24 + 0x264);
      uVar14 = *param_7;
      uVar50 = param_7[1];
      fStack_144 = fVar32;
      pdb_140df0700(&uStack_1a8,0);
      fStack_130 = (float)uStack_158;
      fStack_12c = extraout_XMM0_Da;
      fVar48 = (float)pdb_140dea610(&fStack_130);
      fStack_130 = (float)uVar14;
      fVar39 = fStack_130;
      fStack_12c = (float)((ulonglong)uVar14 >> 0x20);
      fVar32 = fStack_12c;
      fStack_128 = (float)uVar50;
      fVar45 = fStack_128;
      fStack_124 = (float)((ulonglong)uVar50 >> 0x20);
      fVar47 = fStack_124;
      cVar4 = pdb_140901320(&fStack_130);
      if (cVar4 == '\0') {
code_r0x0001414cbe2c:
        pdb_140df0700(&uStack_1a8,1);
        fStack_130 = (float)uStack_158;
        fStack_12c = extraout_XMM0_Da;
        fVar48 = (float)pdb_140dea610(&fStack_130);
        fStack_130 = fVar39;
        fStack_12c = fVar32;
        fStack_128 = fVar45;
        fStack_124 = fVar47;
        cVar4 = pdb_140901320(&fStack_130);
        if (cVar4 != '\0') {
          fStack_134 = fVar29;
          cVar4 = pdb_1408ff990(lVar24 + 0x2a3);
          fVar41 = _DAT_142e3787c;
          if (cVar4 == '\0') {
            fVar41 = _DAT_142e3c620;
          }
          uVar11 = pdb_14092f860(lVar24);
          uStack_140 = (float *)CONCAT44(extraout_XMM0_Da_08,uVar11);
          uVar43 = pdb_140dea7c0(&uStack_140);
          uVar20 = 1;
          fVar29 = fStack_134;
          if ((float)(uVar43 & _DAT_142e377e0) < _DAT_142e36f50 * fStack_144 + fVar41)
          goto code_r0x0001414cc07e;
        }
        pdb_140df0700(&uStack_1a8,2);
        fStack_130 = (float)uStack_158;
        fStack_12c = extraout_XMM0_Da;
        fVar48 = (float)pdb_140dea610(&fStack_130);
        fStack_130 = fVar39;
        fStack_12c = fVar32;
        fStack_128 = fVar45;
        fStack_124 = fVar47;
        cVar4 = pdb_140901320(&fStack_130);
        if (cVar4 != '\0') {
          fStack_134 = fVar29;
          cVar4 = pdb_1408ff990(lVar24 + 0x2a3);
          fVar39 = _DAT_142e3787c;
          if (cVar4 == '\0') {
            fVar39 = _DAT_142e3c620;
          }
          uVar11 = pdb_14092f860(lVar24);
          uStack_140 = (float *)CONCAT44(extraout_XMM0_Da_09,uVar11);
          uVar43 = pdb_140dea7c0(&uStack_140);
          uVar20 = 2;
          fVar29 = fStack_134;
          if ((float)(uVar43 & _DAT_142e377e0) < _DAT_142e36f50 * fStack_144 + fVar39)
          goto code_r0x0001414cc07e;
        }
        uVar20 = 3;
        pdb_140df0700(&uStack_1a8,3);
        fStack_130 = (float)uStack_158;
        fStack_12c = extraout_XMM0_Da;
        fVar48 = (float)pdb_140dea610(&fStack_130);
        cVar4 = pdb_1408da150(uVar14,uVar50,lVar24);
        if (cVar4 != '\0') goto code_r0x0001414cc07e;
      }
      else {
        fStack_134 = fVar41;
        cVar4 = pdb_1408ff990(lVar24 + 0x2a3);
        fVar41 = _DAT_142e3787c;
        if (cVar4 == '\0') {
          fVar41 = _DAT_142e3c620;
        }
        uVar11 = pdb_14092f860(lVar24);
        uStack_140 = (float *)CONCAT44(extraout_XMM0_Da_07,uVar11);
        uVar43 = pdb_140dea7c0(&uStack_140);
        if (_DAT_142e36f50 * fStack_144 + fVar41 <= (float)(uVar43 & _DAT_142e377e0))
        goto code_r0x0001414cbe2c;
        uVar20 = 0;
code_r0x0001414cc07e:
        uStack_f1 = pdb_140b86c90(uVar20);
        uVar14 = pdb_14007fac0();
        auStack_258._0_8_ = uVar14;
        fVar37 = fVar48;
      }
      uVar14 = auStack_288._0_8_;
      bVar25 = fStack_10c._0_1_;
    }
    pdb_14148ca40(lVar24);
    uVar43 = pdb_14148c300(lVar24);
    uVar16 = (ulonglong)uVar43;
    uVar13 = *(ulonglong *)(lVar24 + 0x10);
    if (uVar13 <= uVar16) {
code_r0x0001414cc61a:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar16,uVar13,&UNK_14330d718);
    }
    uVar15 = uVar16 + 1;
    if (uVar15 < uVar13) {
      fStack_10c = (float)CONCAT31(fStack_10c._1_3_,bVar25 | bVar2 ^ 1);
      uVar50 = *(undefined8 *)(*(longlong *)(lVar24 + 8) + uVar16 * 8);
      uVar20 = *(undefined8 *)(*(longlong *)(lVar24 + 8) + 8 + uVar16 * 8);
      uStack_1a8 = (float *)CONCAT44(extraout_XMM0_Da_10 * (float)((ulonglong)uVar20 >> 0x20) +
                                     (fVar44 - extraout_XMM0_Da_10) *
                                     (float)((ulonglong)uVar50 >> 0x20),
                                     extraout_XMM0_Da_10 * (float)uVar20 +
                                     (fVar44 - extraout_XMM0_Da_10) * (float)uVar50);
      pfVar17 = &fStack_2b8;
      pdb_140df4540(pfVar17,&uStack_1a8);
      puVar51 = param_7;
      fVar32 = fVar31 * fVar31 + fVar22 * fVar22;
      fVar39 = _UNK_142e37b08 * fVar30 + _UNK_142e37b04 * fVar31 + _DAT_142e37b00 * fVar22;
      fVar39 = fVar39 + fVar39;
      uVar11 = 0;
      pdb_1414c9780(&uStack_1a8,0,param_7,pfVar17,
                    CONCAT44(uVar28,(fVar27 + fVar27) *
                                    (fVar31 * _DAT_142e37b10 - fVar30 * _DAT_142e377a0) +
                                    fVar39 * fVar22 +
                                    (fVar27 * fVar27 - (fVar32 + fVar30 * fVar30)) * _DAT_142e37af0)
                    ,CONCAT44(uVar26,(fVar27 + fVar27) *
                                     (fVar22 * _UNK_142e37b18 - fVar31 * _UNK_142e377a8) +
                                     fVar39 * fVar30 +
                                     (fVar27 * fVar27 - (fVar32 + fVar30 * fVar30)) * _UNK_142e37af8
                             ),CONCAT44(uVar34,fVar42));
      pfVar3 = uStack_1a8;
      bVar2 = uStack_1a0._4_1_;
      uVar43 = (uint)uStack_1a0._4_1_;
      if (uStack_1a0._4_1_ < 3) {
        fVar39 = (float)uStack_1a0;
        lVar24 = pdb_1409012b0(puVar51);
        if (lVar24 != 0) {
          bVar25 = pdb_140c01460(lVar24 + 8);
          bVar21 = bVar21 | bVar25 | *(byte *)(lVar24 + 0x21);
        }
        pfVar17 = (float *)auStack_258._0_8_;
        if ((bVar21 & 1) != 0) {
          pfVar17 = pfVar3;
          fVar29 = fVar39;
        }
        auStack_258._0_8_ = pfVar17;
        pfVar17 = pfVar3;
        bVar21 = bVar21 & 1 & bVar2 == 1;
        uVar11 = 0;
      }
      else {
        bVar21 = 0;
      }
code_r0x0001414cc2ac:
      pfVar3 = pfStack_108;
      uStack_1a8 = (float *)CONCAT44(extraout_XMM0_Da,(int)uStack_158);
      uVar18 = pdb_140dea700(&uStack_1a8,fVar37 + 0.0);
      if ((uVar18 & 1) == 0) {
        *(float *)(param_1 + 5) = pfVar3[2];
        param_1[4] = *(undefined8 *)pfVar3;
        *(float *)(param_1 + 2) = fVar22;
        *(float *)((longlong)param_1 + 0x14) = fVar31;
        *(float *)(param_1 + 3) = fVar30;
        *(float *)((longlong)param_1 + 0x1c) = fVar27;
        param_12 = 4;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x3f) = uStack_15c;
        *(undefined4 *)((longlong)param_1 + 0x3b) = uStack_160;
        param_1[10] = *(undefined8 *)pfVar3;
        *(float *)(param_1 + 0xb) = pfVar3[2];
        param_1[1] = param_13;
        param_1[2] = 0;
        param_1[3] = uVar14;
        *(undefined4 *)(param_1 + 4) = 1;
        *(float *)(param_1 + 5) = fVar37;
        *(float *)((longlong)param_1 + 0x2c) = fVar29;
        param_1[6] = auStack_258._0_8_;
        *(undefined1 *)(param_1 + 7) = uStack_f1;
        *(byte *)((longlong)param_1 + 0x39) = bVar21;
        *(byte *)((longlong)param_1 + 0x3a) = fStack_10c._0_1_;
        *(undefined4 *)(param_1 + 8) = uVar11;
        *(uint *)((longlong)param_1 + 0x44) = uVar43;
        *(char *)(param_1 + 9) = (char)pfVar17;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_f8;
        *(undefined1 *)((longlong)param_1 + 0x5c) = uStack_f9;
      }
      *param_1 = param_12;
      return param_1;
    }
code_r0x0001414cc626:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar15,uVar13,&UNK_14330d730);
  case 1:
    auStack_1b8._0_8_ = param_3;
    uStack_140 = param_5 + 6;
    cVar4 = pdb_1409012f0(param_7);
    if (cVar4 != '\0') {
      uStack_158 = *(ulonglong *)(param_5 + 6);
      uVar13 = pdb_140b54b40(param_2);
      if ((uVar13 & 0xffffffff) == 0) {
        uStack_240 = &uStack_140;
        uStack_238 = pdb_1414ec8d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143313790,&uStack_240,&UNK_1433137d0);
      }
      lVar24 = *(longlong *)(auStack_1b8._0_8_ + 8);
      uVar18 = uVar13 & 0xffffffff ^ 0xffffffff;
      uVar26 = 1;
      if (*(ulonglong *)(lVar24 + 0x10) <= uVar18) {
code_r0x0001414cc65f:
        uStack_240 = (undefined8 *)CONCAT44((int)uVar18,uVar26);
        uStack_238 = (code *)uVar13;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143313850,0x2b,&uStack_240,&UNK_143313830,&UNK_1433136f0);
      }
      piVar19 = (int *)(uVar18 * 0x18 + *(longlong *)(lVar24 + 8));
      uVar18 = uVar13 >> 0x20;
      if ((piVar19[4] != (int)(uVar13 >> 0x20)) || (*piVar19 == 0)) goto code_r0x0001414cc65f;
      lVar12 = *(longlong *)auStack_1b8._0_8_;
      uVar18 = *(ulonglong *)(piVar19 + 2);
      uVar26 = 0;
      if ((*(ulonglong *)(lVar12 + 0x38) <= (uVar18 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar12 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
           (uVar18 & 0x3f) & 1) == 0)) goto code_r0x0001414cc65f;
      lVar24 = (ulonglong)(uint)~piVar19[1] * 0x58 +
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar24 + 0x1a0) + 0x18 + (uVar18 >> 0x20) * 0x48) +
                 0x10 + ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(lVar24 + 0x1a0) + 0x38 + (uVar18 >> 0x20) * 0x48) +
                          *(longlong *)(lVar12 + 0x110) * 8) * 0x30);
      cVar4 = pdb_140b77b50(lVar24);
      if (bVar2 != 1 || cVar4 != '\0') {
        uVar50 = *param_7;
        fVar37 = 0.0;
        pfVar17 = param_5 + 8;
        if ((~(uint)uVar50 & 6) == 0) {
          fVar37 = (float)pdb_140901640(param_5);
        }
        if (((uint)param_5[0xb] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143313708);
        }
        fVar39 = param_5[0xc];
        fVar32 = param_5[0xd];
        fVar29 = (float)pdb_140b77280(lVar24);
        fVar37 = fVar37 - fVar29;
        pfStack_108 = (float *)CONCAT71(pfStack_108._1_7_,*(undefined1 *)((longlong)param_7 + 0x59))
        ;
        uStack_278 = *(undefined8 *)pfVar17;
        fStack_270 = param_5[10];
        fStack_2b8 = fVar39;
        fStack_2b4 = fVar32;
        if ((uint)uVar50 == 5) {
          uVar18 = pdb_140b77b50();
          if ((char)uVar18 == '\0') {
            uStack_238 = (code *)CONCAT44(uStack_238._4_4_,param_5[10]);
            uStack_240 = *(undefined8 **)pfVar17;
            pdb_140b51610(&fStack_130,lVar24,&uStack_240);
            uVar13 = uStack_158;
            uVar14 = param_12;
            if (fStack_130 == 2.8026e-45) {
              uStack_1a0 = (code *)pdb_140b4b7e0();
              fStack_124 = fStack_124 + _UNK_142f6a634;
              uStack_120._0_4_ = (float)uStack_120 + _UNK_142f6a638;
              uStack_120._4_4_ = uStack_120._4_4_ + _UNK_142f6a63c;
              *(float *)uStack_1a0 = fStack_128 + _DAT_142f6a630;
              *(float *)((longlong)uStack_1a0 + 4) = fStack_124;
              *(float *)((longlong)uStack_1a0 + 8) = (float)uStack_120;
              *(float *)((longlong)uStack_1a0 + 0xc) = uStack_120._4_4_;
              *(ulonglong *)((longlong)uStack_1a0 + 0x10) =
                   CONCAT44((float)((ulonglong)uStack_118 >> 0x20) + 0.0,
                            _DAT_142e3787c + (float)uStack_118);
              uStack_1a8 = (float *)0x2;
              pfStack_198 = (float *)0x2;
              pdb_140a89130(&uStack_240,&uStack_1a8);
              pdb_140a89100(&uStack_1a8,&uStack_240,_DAT_142e37834);
              pdb_140a891b0(&uStack_240,&uStack_1a8);
              pdb_140a89170(&uStack_240,param_17);
            }
            else if (fStack_130 == 1.4013e-45) {
              fStack_298 = fStack_124;
              pdb_140a88230(&uStack_240,auStack_2a0);
              pdb_140a882b0(&uStack_1a8,&uStack_240,_DAT_142e3787c);
              pdb_140a88290(&uStack_240,&uStack_1a8);
              pdb_140a88260(&uStack_240,param_17);
            }
            pdb_140b51610(&uStack_240,lVar24,&uStack_268);
            uVar18 = (ulonglong)uStack_240 & 0xffffffff;
            if ((int)uStack_240 != 0) {
              fVar39 = _UNK_143313470;
              fVar32 = _UNK_143313474;
              if ((int)uStack_240 != 1) {
                fVar39 = uStack_240._4_4_;
                fVar32 = _UNK_143313464;
              }
              fVar37 = 0.0;
            }
            uVar26 = 0;
            param_12 = uVar14;
            fVar22 = 0.0;
            goto code_r0x0001414cc53b;
          }
        }
        else {
          if ((_DAT_142e36f28 < fVar32) && (cVar4 = pdb_140b77b50(lVar24), cVar4 == '\0')) {
            *(float *)(param_1 + 5) = param_5[10];
            uVar14 = *(undefined8 *)pfVar17;
            goto code_r0x0001414cb6d5;
          }
          puVar51 = param_11;
          uStack_240 = param_7;
          uStack_238 = (code *)param_12;
          uStack_230 = param_13;
          uVar52 = param_11[1];
          uVar26 = pdb_1408de710(&uStack_240,uVar52,param_2,auStack_1b8._0_8_);
          uVar5 = pdb_1409012c0(uVar26,*puVar51);
          uVar6 = pdb_140c44ba0((ulonglong)pfStack_108 & 0xff);
          uStack_1a8._0_2_ = CONCAT11(uVar5,uVar6);
          uVar18 = pdb_141494370(uVar52,&uStack_1a8);
          if (uVar18 == 0) goto code_r0x0001414cc69e;
          fVar22 = 0.0;
          if (param_14 != 0) {
            uVar26 = *(undefined4 *)(uVar18 + 0x30);
            uVar18 = pdb_140b77b50();
            uVar13 = uStack_158;
            if ((char)uVar18 == '\0') {
              uVar52 = param_7[1];
              uVar18 = pdb_140901330(uVar50,uVar52);
              if (1 < uVar18) {
                fStack_130 = 0.0;
                fStack_12c = 0.0;
                fStack_128 = 5.60519e-45;
                fStack_124 = 0.0;
                uStack_120 = 0;
                lVar12 = pdb_140c3e440(param_10,uVar13);
                fVar31 = uStack_1e0;
                if (lVar12 != 0) {
                  uStack_208 = param_7[6];
                  uStack_228 = param_7[2];
                  uStack_220 = param_7[3];
                  uStack_218 = param_7[4];
                  uStack_210 = param_7[5];
                  uStack_1f0 = param_7[9];
                  uStack_200 = *(undefined4 *)(param_7 + 7);
                  uStack_1fc = *(undefined4 *)((longlong)param_7 + 0x3c);
                  uStack_1f8 = *(undefined4 *)(param_7 + 8);
                  uStack_1f4 = *(undefined4 *)((longlong)param_7 + 0x44);
                  uStack_240 = (undefined8 *)CONCAT44(uStack_240._4_4_,uStack_f8);
                  uStack_1e8 = param_7[10];
                  uStack_1e0._3_1_ = SUB41(fVar31,3);
                  uStack_1e0._0_3_ =
                       CONCAT12(*(undefined1 *)((longlong)param_7 + 0x5a),
                                CONCAT11(pfStack_108._0_1_,*(undefined1 *)(param_7 + 0xb)));
                  uStack_1a0 = (code *)CONCAT44(uStack_1a0._4_4_,param_5[10]);
                  uStack_1a8 = *(float **)pfVar17;
                  uStack_238 = (code *)uVar50;
                  uStack_230 = uVar52;
                  pfStack_198 = (float *)uVar14;
                  lStack_190 = uVar20;
                  pdb_1424cba20(&uStack_240,&uStack_1a8,uVar26,uStack_1e8,lVar12,param_11,&param_6,
                                &fStack_130,param_15,param_17);
                }
                uVar14 = pdb_140c3e440(param_10,uVar13);
                uStack_1a8 = (float *)param_7;
                uStack_1a0 = (code *)&fStack_2b8;
                pfStack_188 = &fStack_130;
                puStack_180 = param_11;
                pfStack_198 = pfVar17;
                lStack_190 = lVar24;
                uVar18 = pdb_1414cc990(&uStack_240,uVar14,&uStack_1a8);
                uVar14 = param_12;
                if (CONCAT44(fStack_12c,fStack_130) != 0) {
                  pub_1406abac0((byte *)CONCAT44(fStack_124,fStack_128),
                                CONCAT44(fStack_12c,fStack_130) << 2,4);
                  uVar18 = extraout_RAX;
                }
                uVar26 = 0;
                param_12 = uVar14;
                if ((int)uStack_240 != 8) {
                  uStack_2c8 = CONCAT17(uStack_1c9,
                                        CONCAT43(uStack_1cd,
                                                 CONCAT12(uStack_1ce,CONCAT11(bStack_1cf,uStack_1d0)
                                                         )));
                  uStack_2c0 = CONCAT44(uStack_1c4,uStack_1c8);
                  uVar18 = (ulonglong)CONCAT14(uStack_1e8._1_1_,uStack_1c0);
                  uVar26 = 1;
                  fVar22 = uStack_1e0;
                  fVar37 = fStack_1dc;
                  fVar39 = fStack_1d8;
                  fVar32 = fStack_1d4;
                }
                goto code_r0x0001414cc53b;
              }
            }
            uVar26 = 0;
            goto code_r0x0001414cc53b;
          }
        }
        uVar26 = 0;
        uVar13 = uStack_158;
        fVar22 = 0.0;
code_r0x0001414cc53b:
        *param_1 = param_12;
        param_1[1] = param_13;
        param_1[2] = 0;
        param_1[3] = uVar13;
        *(float *)(param_1 + 4) = fVar22;
        *(float *)((longlong)param_1 + 0x24) = fVar37;
        *(float *)(param_1 + 5) = fVar39;
        *(float *)((longlong)param_1 + 0x2c) = fVar32;
        param_1[6] = uStack_2c8;
        param_1[7] = uStack_2c0;
        *(undefined4 *)(param_1 + 8) = uVar26;
        *(ulonglong *)((longlong)param_1 + 0x44) = uVar18;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_f8;
        param_1[10] = uStack_278;
        *(float *)(param_1 + 0xb) = fStack_270;
        *(undefined1 *)((longlong)param_1 + 0x5c) = pfStack_108._0_1_;
        return param_1;
      }
    }
    break;
  case 2:
    cVar4 = pdb_140901300(param_7);
    if (cVar4 != '\0') {
      uVar26 = pdb_140901640(param_5);
      uVar5 = *(undefined1 *)((longlong)puVar51 + 0x59);
      param_1[10] = *(undefined8 *)pfStack_108;
      *(float *)(param_1 + 0xb) = pfStack_108[2];
      *param_1 = uVar50;
      param_1[1] = param_13;
      param_1[2] = 1;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar26;
      *(float *)(param_1 + 5) = fVar39;
      *(float *)((longlong)param_1 + 0x2c) = fVar37;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_f8;
      *(undefined1 *)((longlong)param_1 + 0x5c) = uVar5;
      return param_1;
    }
    *(float *)(param_1 + 2) = pfStack_108[2];
    param_1[1] = *(undefined8 *)pfStack_108;
    *param_1 = 3;
    return param_1;
  case 3:
    pfStack_2a8 = param_5 + 5;
    cVar4 = pdb_1409012f0(param_7);
    if (cVar4 != '\0') {
      uVar18 = *(ulonglong *)(param_4 + 0x10);
      fVar22 = param_5[5];
      fVar31 = param_5[6];
      lVar12 = uVar18 * 0x150;
      lVar24 = *(longlong *)(param_4 + 8) + -0x150;
      do {
        lVar23 = lVar24;
        if (lVar12 == 0) {
          uVar26 = SUB84(&pfStack_2a8,0);
          uVar13 = pdb_142de60c0();
          goto code_r0x0001414cc65f;
        }
        lVar24 = lVar23 + 0x150;
        lVar12 = lVar12 + -0x150;
      } while ((*(float *)(lVar23 + 0x278) != fVar22) || (*(float *)(lVar23 + 0x27c) != fVar31));
      puVar51 = *(undefined8 **)(lVar23 + 0x1c0);
      uVar18 = *(ulonglong *)(lVar23 + 0x1c8);
      uStack_238 = (code *)0x0;
      uStack_230 = 0;
      uStack_228 = uStack_228 & 0xffffffff00000000;
      if (uVar18 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_143313658);
      }
      if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143313658);
      }
      uVar13 = *(ulonglong *)(lVar23 + 0x160);
      if (uVar13 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_14330d730);
      }
      if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14330d718);
      }
      fVar30 = (float)*puVar51;
      fVar32 = (float)((ulonglong)*puVar51 >> 0x20);
      puVar49 = *(undefined8 **)(lVar23 + 0x158);
      fVar30 = ((float)puVar51[1] - fVar30) * 0.0 + fVar30;
      fVar32 = ((float)((ulonglong)puVar51[1] >> 0x20) - fVar32) * 0.0 + fVar32;
      fVar27 = ((float)puVar49[1] * 0.0 + (float)*puVar49) - fVar39;
      fVar29 = ((float)((ulonglong)puVar49[1] >> 0x20) * 0.0 + (float)((ulonglong)*puVar49 >> 0x20))
               - fVar37;
      fVar42 = fVar27 * fVar32;
      fVar41 = fVar29 * fVar30 - fVar42;
      fVar27 = fVar27 + fVar41 * fVar32;
      fVar29 = fVar29 - fVar41 * fVar30;
      uVar43 = (uint)(fVar42 - fVar42) & _UNK_142e377e4;
      fVar30 = (float)((uint)fVar41 & _DAT_142e377e0) + fVar29 * fVar29 + fVar27 * fVar27;
      uStack_240 = (undefined8 *)CONCAT44(uStack_240._4_4_,fVar30);
      uVar16 = (ulonglong)((int)uVar13 - 2);
      if (uVar18 <= uVar16) {
code_r0x0001414cc635:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar16,uVar18,&UNK_143313658);
      }
      uVar15 = uVar16 + 1;
      if (uVar18 <= uVar15) {
code_r0x0001414cc644:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar15,uVar18,&UNK_143313658);
      }
      if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
      auStack_288 = auVar40;
      auStack_258 = ZEXT416((uint)fVar37);
      fStack_10c = fVar31;
      if (uVar15 < uVar13) {
        fVar31 = (float)puVar51[uVar16];
        fVar27 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
        fVar31 = ((float)puVar51[uVar16 + 1] - fVar31) + fVar31;
        fVar27 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar27) + fVar27;
        fVar32 = ((float)puVar49[uVar16] * 0.0 + (float)puVar49[uVar16 + 1]) - fVar39;
        fVar42 = ((float)((ulonglong)puVar49[uVar16] >> 0x20) * 0.0 +
                 (float)((ulonglong)puVar49[uVar16 + 1] >> 0x20)) - fVar37;
        fVar41 = fVar32 * fVar27;
        fVar29 = fVar42 * fVar31 - fVar41;
        fVar32 = fVar32 + fVar29 * fVar27;
        fVar42 = fVar42 - fVar29 * fVar31;
        auStack_1b8._0_4_ =
             (float)((uint)fVar29 & _DAT_142e377e0) + fVar42 * fVar42 + fVar32 * fVar32;
        auStack_1b8._4_4_ = (uint)(fVar41 - fVar41) & _UNK_142e377e4;
        auStack_1b8._8_8_ = 0;
        uStack_228 = (ulonglong)(uint)auStack_1b8._0_4_ << 0x20;
        iVar7 = 4;
        uVar26 = 0;
        uVar28 = 0;
        uVar34 = 0;
        fVar27 = 0.0;
        fVar31 = _DAT_142e36f28;
        do {
          fVar31 = fVar31 - fVar27;
          fStack_130 = fVar31 * _UNK_14331344c + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) {
code_r0x0001414cc3f9:
            uStack_1a8 = &fStack_130;
            uStack_1a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d448,&uStack_1a8,&UNK_143313640);
          }
          uVar9 = pdb_14148c300(lVar24);
          uVar16 = (ulonglong)uVar9;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          fVar41 = (float)puVar51[uVar16];
          fVar42 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar41 = ((float)puVar51[uVar16 + 1] - fVar41) * extraout_XMM0_Da_00 + fVar41;
          fVar42 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar42) * extraout_XMM0_Da_00
                   + fVar42;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar32 = ((float)uVar50 * extraout_XMM0_Da_00 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_00) * (float)uVar14) - fVar39;
          fVar29 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_00 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_00) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar45 = fVar32 * fVar42;
          fVar44 = fVar29 * fVar41 - fVar45;
          fVar32 = fVar32 + fVar44 * fVar42;
          fVar29 = fVar29 - fVar44 * fVar41;
          uVar9 = (uint)(fVar45 - fVar45) & _UNK_142e377e4;
          fVar32 = (float)((uint)fVar44 & _DAT_142e377e0) + fVar29 * fVar29 + fVar32 * fVar32;
          uStack_240 = (undefined8 *)CONCAT44(fVar32,(int)uStack_240);
          fStack_130 = fVar31 * _UNK_143313450 + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) goto code_r0x0001414cc3f9;
          uVar10 = pdb_14148c300(lVar24);
          uVar16 = (ulonglong)uVar10;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          fVar42 = (float)puVar51[uVar16];
          fVar44 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar42 = ((float)puVar51[uVar16 + 1] - fVar42) * extraout_XMM0_Da_01 + fVar42;
          fVar44 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar44) * extraout_XMM0_Da_01
                   + fVar44;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar29 = ((float)uVar50 * extraout_XMM0_Da_01 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)uVar14) - fVar39;
          fVar41 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_01 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_01) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar45 = fVar41 * fVar42 - fVar29 * fVar44;
          fVar29 = fVar29 + fVar45 * fVar44;
          fVar41 = fVar41 - fVar45 * fVar42;
          fVar29 = (float)((uint)fVar45 & _DAT_142e377e0) + fVar41 * fVar41 + fVar29 * fVar29;
          uStack_238 = (code *)CONCAT44(uStack_238._4_4_,fVar29);
          fStack_130 = fVar31 * _UNK_143313454 + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) goto code_r0x0001414cc3f9;
          uVar10 = pdb_14148c300(lVar24);
          uVar16 = (ulonglong)uVar10;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          fVar44 = (float)puVar51[uVar16];
          fVar45 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar44 = ((float)puVar51[uVar16 + 1] - fVar44) * extraout_XMM0_Da_02 + fVar44;
          fVar45 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar45) * extraout_XMM0_Da_02
                   + fVar45;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar41 = ((float)uVar50 * extraout_XMM0_Da_02 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)uVar14) - fVar39;
          fVar42 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_02 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_02) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar47 = fVar42 * fVar44 - fVar41 * fVar45;
          fVar41 = fVar41 + fVar47 * fVar45;
          fVar42 = fVar42 - fVar47 * fVar44;
          fVar41 = (float)((uint)fVar47 & _DAT_142e377e0) + fVar42 * fVar42 + fVar41 * fVar41;
          uStack_238 = (code *)CONCAT44(fVar41,(undefined4)uStack_238);
          fStack_130 = fVar31 * _UNK_143313458 + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) goto code_r0x0001414cc3f9;
          uVar10 = pdb_14148c300(lVar24);
          uVar16 = (ulonglong)uVar10;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          fVar45 = (float)puVar51[uVar16];
          fVar47 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar45 = ((float)puVar51[uVar16 + 1] - fVar45) * extraout_XMM0_Da_03 + fVar45;
          fVar47 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar47) * extraout_XMM0_Da_03
                   + fVar47;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar42 = ((float)uVar50 * extraout_XMM0_Da_03 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_03) * (float)uVar14) - fVar39;
          fVar44 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_03 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_03) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar48 = fVar44 * fVar45 - fVar42 * fVar47;
          fVar42 = fVar42 + fVar48 * fVar47;
          fVar44 = fVar44 - fVar48 * fVar45;
          fVar42 = (float)((uint)fVar48 & _DAT_142e377e0) + fVar44 * fVar44 + fVar42 * fVar42;
          uStack_230 = CONCAT44(uStack_230._4_4_,fVar42);
          fStack_130 = fVar31 * _DAT_143015ed0 + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) goto code_r0x0001414cc3f9;
          uVar10 = pdb_14148c300(lVar24);
          uVar16 = (ulonglong)uVar10;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          fVar47 = (float)puVar51[uVar16];
          fVar48 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar47 = ((float)puVar51[uVar16 + 1] - fVar47) * extraout_XMM0_Da_04 + fVar47;
          fVar48 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar48) * extraout_XMM0_Da_04
                   + fVar48;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar44 = ((float)uVar50 * extraout_XMM0_Da_04 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_04) * (float)uVar14) - fVar39;
          fVar45 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_04 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_04) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar46 = fVar45 * fVar47 - fVar44 * fVar48;
          fVar44 = fVar44 + fVar46 * fVar48;
          fVar45 = fVar45 - fVar46 * fVar47;
          fVar44 = (float)((uint)fVar46 & _DAT_142e377e0) + fVar45 * fVar45 + fVar44 * fVar44;
          uStack_230 = CONCAT44(fVar44,(undefined4)uStack_230);
          fStack_130 = fVar31 * _UNK_14331345c + fVar27;
          if ((fStack_130 < 0.0) || (_DAT_142e36f28 < fStack_130)) goto code_r0x0001414cc3f9;
          uVar10 = pdb_14148c300(lVar24);
          fVar45 = _DAT_142e36f28;
          uVar16 = (ulonglong)uVar10;
          if (uVar18 <= uVar16) goto code_r0x0001414cc635;
          uVar15 = uVar16 + 1;
          if (uVar18 <= uVar15) goto code_r0x0001414cc644;
          uVar13 = *(ulonglong *)(lVar23 + 0x160);
          if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
          if (uVar13 <= uVar15) goto code_r0x0001414cc626;
          uStack_158 = CONCAT44(uVar26,fVar31);
          uStack_150 = uVar28;
          uStack_14c = uVar34;
          fVar48 = (float)puVar51[uVar16];
          fVar35 = (float)((ulonglong)puVar51[uVar16] >> 0x20);
          fVar48 = ((float)puVar51[uVar16 + 1] - fVar48) * extraout_XMM0_Da_05 + fVar48;
          fVar35 = ((float)((ulonglong)puVar51[uVar16 + 1] >> 0x20) - fVar35) * extraout_XMM0_Da_05
                   + fVar35;
          uVar14 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + uVar16 * 8);
          uVar50 = *(undefined8 *)(*(longlong *)(lVar23 + 0x158) + 8 + uVar16 * 8);
          fVar46 = ((float)uVar50 * extraout_XMM0_Da_05 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_05) * (float)uVar14) - fVar39;
          fVar33 = ((float)((ulonglong)uVar50 >> 0x20) * extraout_XMM0_Da_05 +
                   (_DAT_142e36f28 - extraout_XMM0_Da_05) * (float)((ulonglong)uVar14 >> 0x20)) -
                   fVar37;
          fVar47 = fVar33 * fVar48 - fVar46 * fVar35;
          fVar46 = fVar46 + fVar47 * fVar35;
          fVar33 = fVar33 - fVar47 * fVar48;
          fVar47 = (float)((uint)fVar47 & _DAT_142e377e0) + fVar33 * fVar33 + fVar46 * fVar46;
          uStack_228 = CONCAT44(uStack_228._4_4_,fVar47);
          if (NAN(fVar30) || NAN(fVar32)) {
code_r0x0001414cc3ed:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143315e70);
          }
          auVar40._0_4_ = -(uint)(fVar32 < fVar30) & (uint)fVar32;
          auVar40._4_4_ = uVar43 & uVar9;
          auVar40._8_8_ = 0;
          auVar40 = ZEXT416(~-(uint)(fVar32 < fVar30) & (uint)fVar30) | auVar40;
          fVar48 = auVar40._0_4_;
          if (NAN(fVar48) || NAN(fVar29)) goto code_r0x0001414cc3ed;
          uVar26 = auVar40._4_4_;
          uVar28 = auVar40._8_4_;
          uVar34 = auVar40._12_4_;
          fVar46 = (float)(~-(uint)(fVar48 <= fVar29) & (uint)fVar29 |
                          (uint)fVar48 & -(uint)(fVar48 <= fVar29));
          if ((((NAN(fVar46) || NAN(fVar41)) ||
               (fVar35 = (float)(~-(uint)(fVar46 <= fVar41) & (uint)fVar41 |
                                (uint)fVar46 & -(uint)(fVar46 <= fVar41)),
               NAN(fVar35) || NAN(fVar42))) ||
              (fVar33 = (float)(~-(uint)(fVar35 <= fVar42) & (uint)fVar42 |
                               (uint)fVar35 & -(uint)(fVar35 <= fVar42)), NAN(fVar33) || NAN(fVar44)
              )) || (fVar36 = (float)(~-(uint)(fVar33 <= fVar44) & (uint)fVar44 |
                                     (uint)fVar33 & -(uint)(fVar33 <= fVar44)),
                    NAN(fVar36) || NAN(fVar47))) goto code_r0x0001414cc3ed;
          fVar38 = (float)(~-(uint)(fVar36 <= fVar47) & (uint)fVar47 |
                          (uint)fVar36 & -(uint)(fVar36 <= fVar47));
          if (NAN(fVar38) || NAN((float)auStack_1b8._0_4_)) goto code_r0x0001414cc3ed;
          if (fVar48 <= fVar29) {
            uVar13 = (ulonglong)(fVar32 < fVar30);
          }
          else {
            uVar13 = 2;
          }
          if (fVar41 < fVar46) {
            uVar13 = 3;
          }
          if (fVar42 < fVar35) {
            uVar13 = 4;
          }
          if (fVar44 < fVar33) {
            uVar13 = 5;
          }
          if (fVar47 < fVar36) {
            uVar13 = 6;
          }
          if ((float)auStack_1b8._0_4_ < fVar38) {
            uVar13 = 7;
          }
          lVar12 = (uVar13 - 1) + (ulonglong)(uVar13 == 0);
          if (5 < uVar13) {
            uVar13 = 6;
          }
          fVar30 = *(float *)((longlong)&uStack_240 + lVar12 * 4);
          uVar43 = 0;
          uStack_240 = (undefined8 *)CONCAT44(uStack_240._4_4_,fVar30);
          uVar9 = *(uint *)((longlong)&uStack_240 + (uVar13 + 1) * 4);
          auStack_1b8 = ZEXT416(uVar9);
          uStack_228 = CONCAT44(uVar9,fVar47);
          fVar32 = (float)lVar12 * _UNK_14331344c * fVar31 + fVar27;
          fVar27 = (float)(uVar13 + 1) * _UNK_14331344c * fVar31 + fVar27;
          fVar31 = fVar27;
          if (fVar27 <= fVar32) {
            fVar31 = fVar32;
          }
          fVar29 = fVar27;
          if (fVar32 <= fVar27) {
            fVar29 = fVar32;
          }
          fVar27 = (float)(~-(uint)NAN(fVar32) & (uint)fVar29 | -(uint)NAN(fVar32) & (uint)fVar27);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        fVar37 = (fVar31 + fVar27) * _DAT_142e36f50;
        fStack_130 = fVar37;
        if ((fVar37 < 0.0) || (_DAT_142e36f28 < fVar37)) {
          uStack_1a8 = &fStack_130;
          uStack_1a0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143313620,&uStack_1a8,&UNK_143313628);
        }
        uVar43 = pdb_14148c300(lVar24);
        uVar26 = uStack_f8;
        uVar16 = (ulonglong)uVar43;
        uVar13 = *(ulonglong *)(lVar23 + 0x160);
        if (uVar13 <= uVar16) goto code_r0x0001414cc61a;
        uVar15 = uVar16 + 1;
        if (uVar15 < uVar13) {
          uVar18 = *(ulonglong *)(lVar23 + 0x1c8);
          if (uVar18 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar16,uVar18,&UNK_143313720);
          }
          if (uVar15 < uVar18) {
            lVar24 = *(longlong *)(lVar23 + 0x1c0);
            fVar39 = *(float *)(lVar24 + uVar16 * 8);
            fVar31 = *(float *)(lVar24 + 4 + uVar16 * 8);
            fVar39 = (*(float *)(lVar24 + 8 + uVar16 * 8) - fVar39) * extraout_XMM0_Da_06 + fVar39;
            fVar31 = (*(float *)(lVar24 + 0xc + uVar16 * 8) - fVar31) * extraout_XMM0_Da_06 + fVar31
            ;
            fVar30 = fVar45 / SQRT(fVar31 * fVar31 + fVar39 * fVar39);
            if ((int)fVar30 - 1U < 0x7fffff ||
                (int)ABS(fVar30) - 0x800000U < 0x7f000000 && -1 < (int)fVar30) {
              fVar39 = fVar39 * fVar30;
              fVar31 = fVar31 * (float)((uint)fVar30 ^ _DAT_142e37820);
            }
            else {
              fVar39 = 0.0;
              fVar31 = _DAT_142e377f0;
            }
            uVar18 = *(ulonglong *)(lVar23 + 0x1b0);
            if (uVar16 < uVar18) {
              if (uVar15 < uVar18) {
                lVar24 = *(longlong *)(lVar23 + 0x158);
                fVar45 = fVar45 - extraout_XMM0_Da_06;
                fVar30 = *(float *)(*(longlong *)(lVar23 + 0x1a8) + uVar16 * 4);
                fVar27 = ((*(float *)(*(longlong *)(lVar23 + 0x1a8) + 4 + uVar16 * 4) - fVar30) *
                          extraout_XMM0_Da_06 + fVar30) * _DAT_142e36f50;
                fVar30 = (float)auStack_288._0_4_ -
                         (*(float *)(lVar24 + 8 + uVar16 * 8) * extraout_XMM0_Da_06 +
                         *(float *)(lVar24 + uVar16 * 8) * fVar45);
                fVar32 = (float)auStack_258._0_4_ -
                         (*(float *)(lVar24 + 0xc + uVar16 * 8) * extraout_XMM0_Da_06 +
                         fVar45 * *(float *)(lVar24 + 4 + uVar16 * 8));
                uVar28 = pdb_140901640(param_5);
                pdb_1409015a0(fVar31);
                uVar28 = pdb_1409015c0(uVar28);
                uVar5 = *(undefined1 *)((longlong)param_7 + 0x59);
                param_1[10] = *(undefined8 *)pfStack_108;
                *(float *)(param_1 + 0xb) = pfStack_108[2];
                *param_1 = param_12;
                param_1[1] = param_13;
                param_1[2] = 2;
                *(undefined4 *)(param_1 + 4) = 3;
                *(undefined4 *)((longlong)param_1 + 0x24) = uVar28;
                *(float *)(param_1 + 5) = fVar22;
                *(float *)((longlong)param_1 + 0x2c) = fStack_10c;
                *(float *)(param_1 + 6) = (fVar32 * fVar39 + fVar30 * fVar31) / fVar27;
                *(float *)((longlong)param_1 + 0x34) = fVar37;
                *(undefined4 *)(param_1 + 8) = 0;
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar26;
                *(undefined1 *)((longlong)param_1 + 0x5c) = uVar5;
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar15,uVar18,&UNK_143313738);
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar16,uVar18,&UNK_143313738);
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar15,uVar18,&UNK_143313720);
        }
      }
      goto code_r0x0001414cc626;
    }
  }
  *(float *)(param_1 + 5) = pfStack_108[2];
  uVar14 = *(undefined8 *)pfStack_108;
code_r0x0001414cb6d5:
  param_1[4] = uVar14;
  *(float *)(param_1 + 2) = fVar22;
  *(float *)((longlong)param_1 + 0x14) = fVar31;
  *(float *)(param_1 + 3) = fVar30;
  *(float *)((longlong)param_1 + 0x1c) = fVar27;
  *param_1 = 4;
  return param_1;
}

