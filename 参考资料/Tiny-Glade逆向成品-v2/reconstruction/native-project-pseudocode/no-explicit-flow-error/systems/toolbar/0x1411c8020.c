// VA 0x1411c8020, PDB extent 4731 bytes
// toolbar::quick_tool_palette::quick_tool_palette_draw_reticle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::quick_tool_palette::quick_tool_palette_draw_reticle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
   Extent: 4731 */

void pdb_1411c8020(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  byte *pbStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  float fStack_fc;
  float fStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*(char *)(*param_6 + 199) != '\x01') {
    return;
  }
  fVar25 = _DAT_142e4bfe4 / (float)*(uint *)(*param_5 + 4);
  plVar4 = (longlong *)*param_1;
  lVar18 = plVar4[0xc];
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  if (!SBORROW8(0,*plVar4)) {
    if ((char)lVar18 == '\0') {
LAB_1411c835d:
      pdb_140cb90e0(&lStack_178);
      pdb_140a1aa60(&uStack_160);
      uStack_f1 = 1;
      pdb_140f60be0(&lStack_148,plVar4);
      pdb_1406ccf20(&uStack_1a8,&lStack_148);
      auVar12 = auStack_118;
      auVar11 = auStack_128;
      auStack_118._4_4_ = uStack_1a4;
      auStack_118._0_4_ = uStack_1a8;
      auStack_118._8_8_ = auVar12._8_8_;
      auStack_128._4_4_ = uStack_19c;
      auStack_128._0_4_ = uStack_1a0;
      auStack_128._8_8_ = auVar11._8_8_;
      if (lStack_150 == CONCAT44(uStack_15c,uStack_160)) {
        pdb_142d7e6e0(&uStack_160);
      }
      lVar18 = CONCAT44(uStack_154,uStack_158);
      lVar17 = lStack_150 * 0x20;
      *(undefined8 *)(lVar18 + lVar17) = auStack_118._0_8_;
      *(undefined8 *)(lVar18 + 8 + lVar17) = auStack_128._0_8_;
      *(longlong *)(lVar18 + 0x10 + lVar17) = uStack_198;
      *(undefined1 *)(lVar18 + 0x18 + lVar17) = 0;
      uStack_198 = lStack_150 + 1;
      uStack_1a8 = uStack_160;
      uStack_1a4 = uStack_15c;
      uStack_1a0 = uStack_158;
      uStack_19c = uStack_154;
      pdb_140cb9100(&lStack_178,&uStack_1a8,*param_7,&UNK_1432a9bb0);
      pbVar21 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
      if (uStack_198 != 0) {
        pbVar20 = pbVar21 + 8;
        lVar18 = uStack_198;
        do {
          uVar19 = *(ulonglong *)(pbVar20 + -8);
          if ((-1 < (longlong)uVar19) && (uVar19 != 0)) {
            pub_1406abac0(*(byte **)pbVar20,uVar19,1);
          }
          pbVar20 = pbVar20 + 0x20;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if (CONCAT44(uStack_1a4,uStack_1a8) != 0) {
        pub_1406abac0(pbVar21,CONCAT44(uStack_1a4,uStack_1a8) << 5,8);
      }
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      fVar30 = _DAT_1432a9888;
      if (*(char *)((longlong)plVar4 + 0x34) == '\0') {
        fVar30 = _DAT_142e3787c;
      }
      fVar22 = (*(float *)(plVar4 + 6) - fVar30) / _DAT_142e3b1d8;
      fVar30 = 0.0;
      if (0.0 <= fVar22) {
        fVar30 = fVar22;
      }
      fVar22 = _DAT_142e36f28;
      if (fVar30 <= _DAT_142e36f28) {
        fVar22 = fVar30;
      }
      pdb_140cb8180(*param_8,CONCAT44((*(float *)((longlong)plVar4 + 0x24) -
                                      _DAT_142e36f50 * *(float *)((longlong)plVar4 + 0x2c)) * fVar25
                                      ,(*(float *)(plVar4 + 4) -
                                       *(float *)(plVar4 + 5) * _DAT_142e36f50) * fVar25),
                    CONCAT44(*(float *)((longlong)plVar4 + 0x2c) * fVar25,
                             *(float *)(plVar4 + 5) * fVar25),_DAT_142e36f28 - fVar22,&lStack_178);
      if (lStack_178 != 0) {
        pub_1406abac0(pbStack_170,lStack_178 << 2,4);
      }
      fStack_fc = *(float *)(plVar4 + 4);
      fStack_f8 = *(float *)((longlong)plVar4 + 0x24);
      auStack_118 = ZEXT416(*(uint *)(plVar4 + 5));
      auStack_128 = ZEXT416(*(uint *)((longlong)plVar4 + 0x2c));
    }
    else {
      uVar19 = (ulonglong)~(uint)plVar4[3];
      lVar18 = param_2[1];
      if (((*(ulonglong *)(lVar18 + 0x10) <= uVar19) ||
          (piVar13 = (int *)(uVar19 * 0x18 + *(longlong *)(lVar18 + 8)),
          piVar13[4] != (int)((ulonglong)plVar4[3] >> 0x20))) || (*piVar13 == 0))
      goto LAB_1411c835d;
      lVar17 = *param_2;
      uVar19 = *(ulonglong *)(piVar13 + 2);
      if ((*(ulonglong *)(lVar17 + 0x38) <= (uVar19 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
           (uVar19 & 0x3f) & 1) == 0)) goto LAB_1411c835d;
      uVar19 = uVar19 >> 0x20;
      lVar15 = *(longlong *)(lVar18 + 0x1a0);
      lVar18 = lVar15 + uVar19 * 0x48;
      lVar5 = *(longlong *)(lVar15 + 0x38 + uVar19 * 0x48);
      if (*(ulonglong *)(lVar17 + 0x110) < *(ulonglong *)(lVar15 + 0x40 + uVar19 * 0x48)) {
        uVar19 = *(ulonglong *)(lVar5 + *(ulonglong *)(lVar17 + 0x110) * 8);
        lVar18 = *(longlong *)(lVar18 + 0x18);
        if (uVar19 == 0) goto LAB_1411c82e9;
        lVar15 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
      }
      else {
        lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1411c82e9:
        lVar15 = 0;
      }
      if (*(char *)(*(longlong *)
                     (lVar18 + 0x10 +
                     ~*(ulonglong *)(lVar5 + *(longlong *)(lVar17 + 0x118) * 8) * 0x30) +
                   (ulonglong)(uint)~piVar13[1] * 3) != '\x01') goto LAB_1411c835d;
      pfVar16 = (float *)(lVar15 + (ulonglong)(uint)~piVar13[1] * 0x10);
      fVar30 = pfVar16[2];
      if (pfVar16[3] <= pfVar16[2]) {
        fVar30 = pfVar16[3];
      }
      if (fVar30 <= 0.0) goto LAB_1411c835d;
      fStack_fc = *pfVar16;
      fStack_f8 = pfVar16[1];
      *(float *)(plVar4 + 4) = fStack_fc;
      *(float *)((longlong)plVar4 + 0x24) = fStack_f8;
      auStack_118._0_8_ = *(undefined8 *)(pfVar16 + 2);
      auStack_128._4_4_ = (undefined4)((ulonglong)auStack_118._0_8_ >> 0x20);
      plVar4[5] = auStack_118._0_8_;
      auStack_118._8_8_ = 0;
      auStack_128._0_4_ = auStack_128._4_4_;
      auStack_128._8_8_ = 0;
    }
    fVar30 = *(float *)(plVar4 + 6);
    fVar22 = _DAT_142e36f28;
    if (0.0 <= fVar30) {
      fVar22 = _DAT_14300b140;
      if ((*(byte *)((longlong)plVar4 + 0x34) & 1) == 0) {
        fVar22 = _DAT_14300bbe0;
      }
      if (fVar30 < fVar22) {
        fVar30 = fVar30 / _DAT_142e3c650;
        uVar19 = 0;
        if (0.0 <= fVar30) {
          uVar19 = (longlong)fVar30 & 0xffffffff;
        }
        uVar14 = 0xffffffff;
        if (fVar30 <= _DAT_142e46a48) {
          uVar14 = uVar19;
        }
        fVar22 = *(float *)(&UNK_1432a9890 + (ulonglong)((uVar14 & 1) == 0) * 4);
      }
      else {
        fVar22 = _DAT_1432a9888;
        if ((*(byte *)((longlong)plVar4 + 0x34) & 1) == 0) {
          fVar22 = _DAT_142e3787c;
        }
        fVar22 = (fVar30 - fVar22) / _DAT_142e3b1d8;
        fVar30 = 0.0;
        if (0.0 <= fVar22) {
          fVar30 = fVar22;
        }
        fVar22 = _DAT_142e36f28;
        if (fVar30 <= _DAT_142e36f28) {
          fVar22 = fVar30;
        }
        fVar22 = _DAT_142e36f28 - fVar22;
      }
    }
    goto LAB_1411c8628;
  }
  if ((int)plVar4[10] == 0) {
    return;
  }
  uVar19 = (ulonglong)~(uint)plVar4[10];
  lVar18 = param_2[1];
  if (*(ulonglong *)(lVar18 + 0x10) <= uVar19) {
    return;
  }
  piVar13 = (int *)(uVar19 * 0x18 + *(longlong *)(lVar18 + 8));
  if (piVar13[4] != (int)((ulonglong)plVar4[10] >> 0x20)) {
    return;
  }
  if (*piVar13 == 0) {
    return;
  }
  lVar17 = *param_2;
  uVar19 = *(ulonglong *)(piVar13 + 2);
  if (*(ulonglong *)(lVar17 + 0x38) <= (uVar19 & 0xffffffff)) {
    return;
  }
  if ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
       (uVar19 & 0x3f) & 1) == 0) {
    return;
  }
  uVar19 = uVar19 >> 0x20;
  lVar15 = *(longlong *)(lVar18 + 0x1a0);
  lVar18 = lVar15 + uVar19 * 0x48;
  lVar5 = *(longlong *)(lVar15 + 0x38 + uVar19 * 0x48);
  if (*(ulonglong *)(lVar17 + 0x110) < *(ulonglong *)(lVar15 + 0x40 + uVar19 * 0x48)) {
    uVar19 = *(ulonglong *)(lVar5 + *(ulonglong *)(lVar17 + 0x110) * 8);
    lVar18 = *(longlong *)(lVar18 + 0x18);
    if (uVar19 == 0) goto LAB_1411c8275;
    lVar15 = *(longlong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
  }
  else {
    lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1411c8275:
    lVar15 = 0;
  }
  if (*(char *)(*(longlong *)
                 (lVar18 + 0x10 + ~*(ulonglong *)(lVar5 + *(longlong *)(lVar17 + 0x118) * 8) * 0x30)
               + (ulonglong)(uint)~piVar13[1] * 3) != '\x01') {
    return;
  }
  pfVar16 = (float *)(lVar15 + (ulonglong)(uint)~piVar13[1] * 0x10);
  fVar30 = pfVar16[2];
  fVar22 = pfVar16[3];
  auStack_118 = ZEXT416((uint)fVar30);
  auStack_128 = ZEXT416((uint)fVar22);
  if (fVar22 <= fVar30) {
    fVar30 = fVar22;
  }
  if (fVar30 <= 0.0) {
    return;
  }
  fStack_fc = *pfVar16;
  fStack_f8 = pfVar16[1];
  fVar22 = _DAT_142e36f28;
LAB_1411c8628:
  fVar30 = *(float *)(*param_3 + 0xe8);
  fVar26 = *(float *)*param_4;
  pdb_140a1aa60(&uStack_1a8);
  pdb_140cb8ed0(&lStack_148,&uStack_1a8,0xfff4dcff);
  pdb_140cb9030(&lStack_178,&lStack_148);
  pbVar21 = pbStack_140;
  if (uStack_138 != 0) {
    pbVar20 = pbStack_140 + 8;
    lVar18 = uStack_138;
    do {
      uVar19 = *(ulonglong *)(pbVar20 + -8);
      if ((-1 < (longlong)uVar19) && (uVar19 != 0)) {
        pub_1406abac0(*(byte **)pbVar20,uVar19,1);
      }
      pbVar20 = pbVar20 + 0x20;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (lStack_148 != 0) {
    pub_1406abac0(pbVar21,lStack_148 << 5,8);
  }
  pdb_140a1aa60(&uStack_1a8);
  pdb_140cb8ed0(&lStack_148,&uStack_1a8,0x30271dff);
  pdb_140cb9030(&uStack_160,&lStack_148);
  fVar8 = _DAT_142e36f50;
  auStack_118._0_4_ = (float)auStack_118._0_4_ * fVar25;
  auStack_128._0_4_ = (float)auStack_128._0_4_ * fVar25;
  fVar30 = fVar30 * fVar26 * fVar25;
  if (uStack_138 != 0) {
    pbVar21 = pbStack_140 + 8;
    lVar18 = uStack_138;
    do {
      uVar19 = *(ulonglong *)(pbVar21 + -8);
      if ((-1 < (longlong)uVar19) && (uVar19 != 0)) {
        pub_1406abac0(*(byte **)pbVar21,uVar19,1);
      }
      pbVar21 = pbVar21 + 0x20;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  auStack_118._0_4_ = (float)auStack_118._0_4_ * fVar8;
  auStack_128._0_4_ = (float)auStack_128._0_4_ * fVar8;
  fVar28 = _DAT_142f3e570 * fVar30;
  fVar31 = _DAT_143008730 * fVar30;
  fVar26 = _DAT_142e37adc * fVar30;
  if (lStack_148 != 0) {
    pub_1406abac0(pbStack_140,lStack_148 << 5,8);
  }
  uVar10 = _UNK_142f94738;
  uVar9 = _DAT_142f94730;
  fStack_fc = fStack_fc * fVar25;
  fStack_f8 = fStack_f8 * fVar25;
  auStack_118._0_4_ = (float)auStack_118._0_4_ + fVar28;
  auStack_128._0_4_ = (float)auStack_128._0_4_ + fVar28;
  uStack_198 = _DAT_1430879a0;
  uStack_190 = _UNK_1430879a8;
  uStack_188 = _DAT_1432a98a0;
  uStack_180 = _UNK_1432a98a8;
  fVar31 = fVar31 - fVar26;
  uVar3 = *(undefined4 *)((longlong)param_8 + 0x1c);
  uVar6 = *param_8;
  puVar7 = (undefined4 *)param_8[2];
  fVar25 = fVar30 * _DAT_142e37838 + fVar30 * _DAT_142e37838 + fVar26;
  lVar18 = 0;
  do {
    fVar30 = *(float *)(&uStack_198 + lVar18);
    fVar28 = *(float *)((longlong)&uStack_198 + lVar18 * 8 + 4);
    lVar18 = lVar18 + 1;
    fVar27 = (float)auStack_118._0_4_ * fVar30 + fStack_fc;
    fVar29 = (float)auStack_128._0_4_ * fVar28 + fStack_f8;
    uStack_138 = uVar9;
    uStack_130 = uVar10;
    for (lVar17 = 0; lVar17 != 2; lVar17 = lVar17 + 1) {
      fVar1 = *(float *)(&uStack_138 + lVar17);
      fVar2 = *(float *)((longlong)&uStack_138 + lVar17 * 8 + 4);
      fVar24 = fVar1 * fVar31 + fVar25;
      fVar23 = fVar2 * fVar31 + fVar25;
      *puVar7 = uVar3;
      pdb_140cb8180(uVar6,CONCAT44((fVar29 - fVar28 * fVar2 * fVar31 * fVar8) - fVar23 * fVar8,
                                   (fVar27 - fVar30 * fVar1 * fVar31 * fVar8) - fVar24 * fVar8),
                    CONCAT44(fVar23,fVar24),fVar22,&uStack_160);
    }
    uStack_138 = uVar9;
    uStack_130 = uVar10;
    for (lVar17 = 0; lVar17 != 2; lVar17 = lVar17 + 1) {
      fVar1 = *(float *)(&uStack_138 + lVar17);
      fVar2 = *(float *)((longlong)&uStack_138 + lVar17 * 8 + 4);
      fVar24 = fVar1 * fVar31 + fVar26 + 0.0;
      fVar23 = fVar2 * fVar31 + fVar26 + 0.0;
      *puVar7 = uVar3;
      pdb_140cb8180(uVar6,CONCAT44((fVar29 - fVar28 * fVar2 * fVar31 * fVar8) - fVar23 * fVar8,
                                   (fVar27 - fVar30 * fVar1 * fVar31 * fVar8) - fVar24 * fVar8),
                    CONCAT44(fVar23,fVar24),fVar22,&lStack_178);
    }
  } while (lVar18 != 4);
  if (CONCAT44(uStack_15c,uStack_160) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_154,uStack_158),CONCAT44(uStack_15c,uStack_160) << 2,4);
  }
  if (lStack_178 != 0) {
    pub_1406abac0(pbStack_170,lStack_178 << 2,4);
  }
  return;
}

