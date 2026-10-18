// VA 0x14297c6a0, PDB extent 5592 bytes
// toolbar::ui_interaction::render_taffy_ui_to_widgets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::render_taffy_ui_to_widgets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 5592 */

void pdb_14297c6a0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12,
                  longlong param_13,undefined8 *param_14,undefined8 *param_15)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  ulonglong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 in_stack_fffffffffffffba8;
  undefined4 uVar38;
  ulonglong uStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  uint *puStack_3b8;
  undefined1 auStack_328 [16];
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  float fStack_308;
  float fStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  uint *puStack_2f8;
  uint *puStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2d8;
  longlong lStack_2c8;
  byte bStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_290;
  undefined4 uStack_284;
  byte bStack_278;
  uint uStack_270;
  uint uStack_26c;
  byte bStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  float *pfStack_230;
  int *piStack_228;
  int *piStack_220;
  undefined8 uStack_218;
  undefined4 *puStack_210;
  longlong *plStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  char *pcStack_1f0;
  undefined4 *puStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  int *piStack_148;
  longlong *plStack_140;
  undefined4 *puStack_138;
  longlong lStack_130;
  longlong lStack_128;
  int *piStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined4 uStack_fc;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  byte bStack_ca;
  char cStack_c9;
  uint uStack_c8;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
  uStack_c0 = 0xfffffffffffffffe;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_1b0 = 0;
  }
  else {
    puVar30 = &UNK_143607523;
    lVar25 = 0x33;
    uVar24 = 0x33;
    lVar17 = pdb_142978b70(&UNK_143607523);
    if (lVar17 == 1) {
      if (0x33 < uVar24) {
LAB_14297d82b:
        pdb_142dc8070(&UNK_143607523,0x33,0);
LAB_14297d84b:
        pdb_142dc8070(&UNK_143607523,0x33);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar30 = &UNK_143607523;
      uVar18 = pdb_142978b70(&UNK_143607523);
      if ((uVar18 & 1) != 0) {
        if (0x33 < uVar24 + 2) goto LAB_14297d84b;
        lVar25 = 0x31 - uVar24;
        puVar30 = &UNK_143607525 + uVar24;
      }
    }
    puVar27 = &UNK_143607874;
    puVar29 = &UNK_143607848;
    do {
      bVar15 = puVar27[-1];
      uVar16 = (uint)(char)bVar15;
      plStack_d8 = param_2;
      if ((char)bVar15 < '\0') {
        bVar2 = puVar27[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar27[-3];
          if ((char)bVar3 < -0x40) {
            pbVar21 = puVar27 + -4;
            puVar27 = puVar27 + -4;
            uVar16 = bVar3 & 0x3f | (*pbVar21 & 7) << 6;
          }
          else {
            puVar27 = puVar27 + -3;
            uVar16 = bVar3 & 0xf;
          }
          uVar16 = bVar2 & 0x3f | uVar16 << 6;
        }
        else {
          puVar27 = puVar27 + -2;
          uVar16 = bVar2 & 0x1f;
        }
        uVar16 = (uint)(bVar15 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_14297c804;
LAB_14297c81d:
        puVar29 = puVar27 + -0x143607847;
        if ((undefined *)0x2c < puVar29) {
          pdb_142dc8070(&UNK_143607848,0x2c,puVar29,0x2c,&UNK_1436076a0);
          goto LAB_14297d82b;
        }
        lVar17 = 0x2c - (longlong)puVar29;
        puVar29 = puVar27 + 1;
        goto LAB_14297c840;
      }
      puVar27 = puVar27 + -1;
      if (uVar16 == 0x5c) goto LAB_14297c81d;
LAB_14297c804:
      if (uVar16 == 0x2f) goto LAB_14297c81d;
    } while (puVar27 != &UNK_143607848);
    lVar17 = 0x2c;
LAB_14297c840:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142dcf3a0(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_14297d7e9;
    if (*plVar19 != 0) goto LAB_14297d7b5;
    *plVar19 = -1;
    plStack_e0 = plVar19;
    uStack_1a8 = pdb_140e94f10(plVar19 + 1,puVar30,lVar25,puVar29,lVar17,1,0);
    uVar38 = (undefined4)((ulonglong)lVar17 >> 0x20);
    *plStack_e0 = *plStack_e0 + 1;
    lStack_1b0 = 1;
    param_2 = plStack_d8;
  }
  piStack_148 = (int *)*param_3;
  piStack_120 = piStack_148 + 4;
  cVar13 = pdb_140c9dda0();
  if (cVar13 != '\0') {
    puVar5 = (undefined4 *)*param_11;
    cVar13 = pdb_140938ba0(*puVar5,puVar5[1]);
    if ((cVar13 != '\0') ||
       (fVar32 = (float)*(undefined8 *)(puVar5 + 0x56),
       fVar34 = (float)((ulonglong)*(undefined8 *)(puVar5 + 0x56) >> 0x20),
       _DAT_142e36f28 < SQRT(fVar34 * fVar34 + fVar32 * fVar32))) {
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar5 = (undefined4 *)param_3[2];
      iVar7 = piStack_120[1];
      iVar8 = piStack_120[2];
      iVar9 = piStack_120[3];
      *piStack_148 = *piStack_120;
      piStack_148[1] = iVar7;
      piStack_148[2] = iVar8;
      piStack_148[3] = iVar9;
      *puVar5 = uVar4;
      piStack_148[4] = 0;
      piStack_148[5] = 0;
    }
  }
  cStack_c9 = pdb_1409cb300(piStack_120);
  uStack_174 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puStack_210 = (undefined4 *)param_4[2];
  *puStack_210 = uStack_174;
  plStack_208 = (longlong *)*param_4;
  *(undefined4 *)plStack_208 = 0;
  lStack_158 = *param_1;
  lStack_160 = param_1[1];
  pdb_142b53b00(&puStack_2f8,lStack_160,lStack_158,(int)param_1[2],
                CONCAT44(uVar38,*(undefined4 *)((longlong)param_1 + 0x14)));
  uVar12 = _DAT_1430151c0;
  fVar11 = _DAT_142f3e554;
  fVar10 = _DAT_142e37878;
  fVar34 = _UNK_142e36f64;
  fVar32 = _DAT_142e36f60;
  piStack_228 = (int *)*param_15;
  plStack_140 = *(longlong **)(param_13 + 8);
  lStack_150 = *param_12;
  if (plStack_140 == (longlong *)0x0) {
    plStack_140 = *(longlong **)(param_13 + 0x10);
  }
  lStack_190 = *param_10;
  pfStack_230 = (float *)*param_14;
  uStack_218 = *param_2;
  puStack_1e8 = (undefined4 *)param_12[2];
  pcStack_1f0 = (char *)*param_7;
  uStack_164 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puStack_1b8 = (undefined4 *)param_3[2];
  puStack_1c8 = (undefined8 *)*param_9;
  uStack_1c0 = *param_8;
  uStack_168 = *(undefined4 *)((longlong)param_12 + 0x1c);
  uStack_170 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_188 = *param_5;
  puStack_200 = (undefined4 *)param_5[2];
  uStack_16c = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_180 = *param_6;
  puStack_1f8 = (undefined4 *)param_6[2];
  bStack_ca = bStack_268;
  lStack_1a0 = lStack_2e8;
  lStack_198 = lStack_2d8;
  lStack_110 = lStack_2c8;
  uStack_c8 = (uint)bStack_2c0;
  lStack_f8 = lStack_2b8;
  lStack_f0 = lStack_2b0;
  lStack_e8 = lStack_2a8;
  lStack_130 = lStack_2a0;
  lStack_128 = lStack_290;
  uStack_fc = uStack_284;
  uStack_118 = (ulonglong)bStack_278;
  uVar24 = (ulonglong)uStack_270;
  plStack_d8 = (longlong *)(ulonglong)uStack_26c;
  piStack_220 = piStack_228 + 1;
  lStack_1d0 = lStack_150 + 0x20;
  lStack_1e0 = lStack_188 + 0x20;
  lStack_1d8 = lStack_180 + 0x20;
  puVar31 = puStack_2f8;
LAB_14297cbd9:
  if ((bStack_ca & 1) == 0) {
    if ((int)plStack_d8 == (int)uVar24) {
      if (puVar31 == puStack_2f0) goto LAB_14297d723;
      while( true ) {
        uVar24 = *(ulonglong *)
                  (*(longlong *)(lStack_160 + 0x100) + 0x58 + (ulonglong)*puVar31 * 0xa0);
        if (uVar24 != 0) break;
        puVar31 = puVar31 + 1;
        if (puVar31 == puStack_2f0) goto LAB_14297d723;
      }
      lVar25 = *(longlong *)(lStack_160 + 0x100) + (ulonglong)*puVar31 * 0xa0;
      lVar17 = *(longlong *)(lStack_160 + 0x1a0) + (ulonglong)*(uint *)(lVar25 + 0x94) * 0x48;
      uVar18 = *(ulonglong *)
                (*(longlong *)(lStack_160 + 0x1a0) + 0x40 +
                (ulonglong)*(uint *)(lVar25 + 0x94) * 0x48);
      if ((*(ulonglong *)(lStack_158 + 0x110) < uVar18) &&
         (uVar22 = *(ulonglong *)
                    (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_158 + 0x110) * 8),
         uVar22 != 0)) {
        lStack_f8 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar18 <= uVar22) goto LAB_14297cea4;
LAB_14297cdff:
        uVar22 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar22 * 8);
        if (uVar22 == 0) goto LAB_14297cea4;
        lStack_f0 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lStack_158 + 0x120);
        lVar23 = *(longlong *)(lVar17 + 0x38);
        if (uVar18 <= uVar22) goto LAB_14297ce3f;
LAB_14297cebf:
        uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8);
        lVar17 = *(longlong *)(lVar17 + 0x18);
        if (uVar22 == 0) goto LAB_14297cef8;
        lStack_e8 = *(longlong *)(lVar17 + 0x10 + ~uVar22 * 0x30);
        uVar28 = *(ulonglong *)(lStack_158 + 0x130);
        uVar22 = *(ulonglong *)(lVar25 + 0x88);
        if (uVar28 < uVar22) goto LAB_14297cf16;
LAB_14297cf55:
        uStack_c8 = 0;
      }
      else {
        lStack_f8 = 0;
        uVar22 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar22 < uVar18) goto LAB_14297cdff;
LAB_14297cea4:
        lStack_f0 = 0;
        uVar22 = *(ulonglong *)(lStack_158 + 0x120);
        lVar23 = *(longlong *)(lVar17 + 0x38);
        if (uVar22 < uVar18) goto LAB_14297cebf;
LAB_14297ce3f:
        lVar17 = *(longlong *)(lVar17 + 0x18);
LAB_14297cef8:
        lStack_e8 = 0;
        uVar28 = *(ulonglong *)(lStack_158 + 0x130);
        uVar22 = *(ulonglong *)(lVar25 + 0x88);
        if (uVar22 <= uVar28) goto LAB_14297cf55;
LAB_14297cf16:
        if (*(longlong *)(*(longlong *)(lVar25 + 0x80) + uVar28 * 8) == 0) goto LAB_14297cf55;
        uStack_c8 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar25 + 0x80) >> 8),1);
        if ((uVar28 < uVar18) && (uVar18 = *(ulonglong *)(lVar23 + uVar28 * 8), uVar18 != 0)) {
          lStack_110 = *(longlong *)(lVar17 + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lStack_110 = 0;
        }
      }
      uVar18 = *(ulonglong *)(lStack_158 + 0x138);
      uStack_118 = 0;
      if (uVar18 < uVar22) {
        uStack_118 = CONCAT71((int7)(uVar18 >> 8),
                              *(longlong *)(*(longlong *)(lVar25 + 0x80) + uVar18 * 8) != 0);
      }
      plStack_d8 = (undefined8 *)0x0;
      puVar31 = puVar31 + 1;
      lVar23 = ~*(ulonglong *)(lVar23 + *(longlong *)(lStack_158 + 0x128) * 8) * 0x30;
      lStack_130 = *(longlong *)(lVar17 + 0x10 + lVar23);
      lStack_128 = *(longlong *)(lVar17 + 0x28 + lVar23);
      lStack_198 = *(longlong *)(lVar25 + 0x50);
      uVar18 = 0;
    }
    else {
      uVar18 = (ulonglong)plStack_d8 & 0xffffffff;
    }
    plVar19 = (longlong *)(lStack_198 + uVar18 * 0x10);
    uVar18 = (ulonglong)~*(uint *)(lStack_198 + 8 + uVar18 * 0x10);
  }
  else {
    if ((int)plStack_d8 == (int)uVar24) {
      if (puVar31 == puStack_2f0) goto LAB_14297d723;
      while( true ) {
        uVar24 = *(ulonglong *)
                  (*(longlong *)(lStack_160 + 0x1a0) + 0x10 + (ulonglong)*puVar31 * 0x48);
        if (uVar24 != 0) break;
        puVar31 = puVar31 + 1;
        if (puVar31 == puStack_2f0) goto LAB_14297d723;
      }
      lVar17 = *(longlong *)(lStack_160 + 0x1a0) + (ulonglong)*puVar31 * 0x48;
      uVar18 = *(ulonglong *)(lVar17 + 0x40);
      if ((*(ulonglong *)(lStack_158 + 0x110) < uVar18) &&
         (uVar22 = *(ulonglong *)
                    (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_158 + 0x110) * 8),
         uVar22 != 0)) {
        lStack_f8 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar18 <= uVar22) goto LAB_14297ce48;
LAB_14297cd80:
        uVar22 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar22 * 8);
        if (uVar22 == 0) goto LAB_14297ce48;
        lStack_f0 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lStack_158 + 0x120);
        lVar25 = *(longlong *)(lVar17 + 0x38);
        if (uVar18 <= uVar22) goto LAB_14297cdc0;
LAB_14297ce67:
        uVar22 = *(ulonglong *)(lVar25 + uVar22 * 8);
        lVar23 = *(longlong *)(lVar17 + 0x18);
        if (uVar22 == 0) {
          uVar22 = *(ulonglong *)(lStack_158 + 0x130);
          goto joined_r0x00014297cdd9;
        }
        lStack_e8 = *(longlong *)(lVar23 + 0x10 + ~uVar22 * 0x30);
        uVar22 = *(ulonglong *)(lStack_158 + 0x130);
        if (uVar22 < uVar18) goto LAB_14297d017;
LAB_14297d043:
        uStack_c8 = 0;
      }
      else {
        lStack_f8 = 0;
        uVar22 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar22 < uVar18) goto LAB_14297cd80;
LAB_14297ce48:
        lStack_f0 = 0;
        uVar22 = *(ulonglong *)(lStack_158 + 0x120);
        lVar25 = *(longlong *)(lVar17 + 0x38);
        if (uVar22 < uVar18) goto LAB_14297ce67;
LAB_14297cdc0:
        lVar23 = *(longlong *)(lVar17 + 0x18);
        uVar22 = *(ulonglong *)(lStack_158 + 0x130);
joined_r0x00014297cdd9:
        lStack_e8 = 0;
        if (uVar18 <= uVar22) goto LAB_14297d043;
LAB_14297d017:
        uVar22 = *(ulonglong *)(lVar25 + uVar22 * 8);
        if (uVar22 == 0) goto LAB_14297d043;
        lStack_110 = *(longlong *)(lVar23 + 0x10 + ~uVar22 * 0x30);
        uStack_c8 = (uint)CONCAT71((int7)((ulonglong)lStack_110 >> 8),1);
      }
      plStack_d8 = (undefined8 *)0x0;
      uStack_118 = 0;
      if (*(ulonglong *)(lStack_158 + 0x138) < uVar18) {
        uStack_118 = CONCAT71((int7)(uVar18 >> 8),
                              *(longlong *)(lVar25 + *(ulonglong *)(lStack_158 + 0x138) * 8) != 0);
      }
      puVar31 = puVar31 + 1;
      lVar25 = ~*(ulonglong *)(lVar25 + *(longlong *)(lStack_158 + 0x128) * 8) * 0x30;
      lStack_130 = *(longlong *)(lVar23 + 0x10 + lVar25);
      lStack_128 = *(longlong *)(lVar23 + 0x28 + lVar25);
      lStack_1a0 = *(longlong *)(lVar17 + 8);
    }
    uVar18 = (ulonglong)plStack_d8 & 0xffffffff;
    plVar19 = (longlong *)(lStack_1a0 + uVar18 * 8);
  }
  puVar20 = (undefined8 *)(uVar18 * 0x10 + lStack_f8);
  puVar5 = (undefined4 *)(lStack_f0 + uVar18 * 4);
  lVar17 = lStack_e8 + uVar18 * 0x14;
  plStack_e0 = (longlong *)(uVar18 * 3 + lStack_130);
  puStack_138 = (undefined4 *)(lStack_128 + uVar18 * 4);
  puVar26 = (undefined1 *)(uVar18 + lStack_110);
  if ((uStack_c8 & 1) == 0) {
    puVar26 = (undefined1 *)0x0;
  }
  lStack_108 = *plVar19;
  if ((int)lStack_108 == 0) goto LAB_14297d723;
  plStack_d8 = (longlong *)(ulonglong)((int)plStack_d8 + 1);
  *puStack_138 = uStack_fc;
  *(undefined1 *)((longlong)plStack_e0 + 1) = 0;
  if ((char)*plStack_e0 == '\x01') {
    uVar1 = puVar20[1];
    fVar35 = (float)uVar1;
    fVar36 = (float)((ulonglong)uVar1 >> 0x20);
    fVar33 = fVar35;
    if (fVar36 <= fVar35) {
      fVar33 = fVar36;
    }
    if (0.0 < fVar33) {
      fVar33 = *(float *)(lStack_190 + 0xe8) * fVar10 * *pfStack_230;
      fVar35 = fVar35 + fVar33;
      fVar36 = fVar36 + fVar33;
      uVar1 = *puVar20;
      fVar33 = (float)uVar1;
      fVar37 = (float)((ulonglong)uVar1 >> 0x20);
      pdb_140deead0(auStack_328,fVar33,fVar37,fVar35,fVar36);
      uStack_3d8 = *(longlong *)piStack_220;
      uStack_3d0 = *(code **)(piStack_220 + 2);
      if ((*piStack_228 != 1) ||
         (iStack_318 = *piStack_220, iStack_314 = piStack_220[1], iStack_310 = piStack_220[2],
         iStack_30c = piStack_220[3], cVar13 = pdb_140deea30(&iStack_318,auStack_328),
         cVar13 == '\0')) {
        if ((*piStack_120 == 1) && (*(longlong *)(piStack_148 + 6) == lStack_108)) {
          *puStack_138 = uStack_fc;
          *(undefined1 *)((longlong)plStack_e0 + 1) = 1;
        }
        uStack_3d0 = pdb_142978f90;
        uStack_3d8 = lVar17;
        pdb_140f60760(&iStack_318,&UNK_143607874,&uStack_3d8);
        uStack_258 = CONCAT44(iStack_314,iStack_318);
        uStack_250 = CONCAT44(iStack_30c,iStack_310);
        fVar35 = fVar35 * fVar32;
        fVar36 = fVar36 * fVar34;
        fStack_3c8 = fVar35 + fVar33;
        fStack_3c4 = fVar36 + fVar37;
        uStack_3d0 = (code *)CONCAT44(fVar37 - fVar36,fVar33 - fVar35);
        uStack_3d8 = CONCAT44(*puVar5,(undefined4)uStack_3d8);
        uStack_3d8 = CONCAT71(uStack_3d8._1_7_,3);
        uStack_438 = uStack_438 & 0xffffffffffffff00;
        uStack_c1 = 1;
        pdb_140c9dcb0(&iStack_318,&uStack_3d8);
        uStack_c1 = 1;
        pdb_140c9dc40(&uStack_3d8,&iStack_318);
        uStack_c1 = 1;
        pdb_140c9dbe0(&iStack_318,&uStack_3d8,0);
        uStack_c1 = 1;
        pdb_140c9dc70(&uStack_3d8,&iStack_318,1);
        uStack_c2 = 1;
        pdb_140c9dee0(&uStack_438);
        uStack_c2 = 0;
        pdb_140c9dd20(&iStack_318,&uStack_3d8,&uStack_438);
        uStack_c1 = 0;
        puVar20 = &uStack_258;
        uStack_438 = pdb_1409008d0(uStack_218,puVar20,&iStack_318);
        puStack_430 = puVar20;
        if (puVar26 == (undefined1 *)0x0) {
          if (*pcStack_1f0 != '\t') goto LAB_14297d560;
          cVar13 = pdb_1408ffaf0(&uStack_438);
          if (cVar13 != '\0') {
            uVar1 = *puStack_1c8;
            fVar33 = *(float *)(lStack_190 + 0xe8);
            pdb_14007ee60();
            pbVar21 = pub_1406abab0(0x20,8);
            if (pbVar21 == (byte *)0x0) goto LAB_14297d7f6;
            pbVar21[0] = 1;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
            pbVar21[4] = 0;
            pbVar21[5] = 0;
            pbVar21[6] = 0;
            pbVar21[7] = 0;
            pbVar21[8] = 1;
            pbVar21[9] = 0;
            pbVar21[10] = 0;
            pbVar21[0xb] = 0;
            pbVar21[0xc] = 0;
            pbVar21[0xd] = 0;
            pbVar21[0xe] = 0;
            pbVar21[0xf] = 0;
            *(undefined8 *)(pbVar21 + 0x10) = uVar1;
            *(float *)(pbVar21 + 0x18) = fVar33 * fVar11;
            pdb_1409baea0(&iStack_318,&UNK_1436078b8,0x12,pbVar21,&UNK_143607888);
            puStack_3b8 = puStack_2f8;
            fStack_3c8 = fStack_308;
            fStack_3c4 = fStack_304;
            uStack_3c0 = uStack_300;
            uStack_3bc = uStack_2fc;
            uStack_3d8 = CONCAT44(iStack_314,iStack_318);
            uStack_3d0 = (code *)CONCAT44(iStack_30c,iStack_310);
            pdb_140b133a0(uStack_1c0,&uStack_3d8);
          }
        }
        else {
          uVar14 = pdb_1408ffab0(&uStack_438);
          iStack_318 = CONCAT31(iStack_318._1_3_,uVar14);
          cVar13 = pdb_140901040(&iStack_318);
          if (cVar13 != '\0') {
            uVar14 = *puVar26;
            *puStack_1e8 = uStack_168;
            lVar17 = *(longlong *)(lStack_150 + 0x30);
            uVar1 = *(undefined8 *)(lStack_150 + 0x40);
            if (lVar17 == *(longlong *)(lStack_150 + 0x20)) {
              pdb_142d7e980(lStack_1d0);
            }
            lVar25 = *(longlong *)(lStack_150 + 0x28);
            *(undefined8 *)(lVar25 + lVar17 * 0x10) = uVar1;
            *(undefined1 *)(lVar25 + 8 + lVar17 * 0x10) = uVar14;
            *(longlong *)(lStack_150 + 0x30) = lVar17 + 1;
            *(longlong *)(lStack_150 + 0x40) = *(longlong *)(lStack_150 + 0x40) + 1;
          }
          cVar13 = pdb_1408ffab0(&uStack_438);
          if (cVar13 == '\x03') {
            lVar17 = plStack_140[2];
            if ((ulonglong)(*plStack_140 - lVar17) < 0x20) {
              pdb_142d7f1b0(plStack_140,lVar17,0x20,1,1);
            }
            lVar25 = plStack_140[1];
            *(code **)(lVar25 + lVar17) = pdb_1411ae9e0;
            *(longlong *)(lVar25 + 8 + lVar17) = lStack_108;
            *(undefined8 *)(lVar25 + 0x10 + lVar17) = uVar12;
            *(undefined4 *)(lVar25 + 0x18 + lVar17) = 0;
            *(undefined1 *)(lVar25 + 0x1c + lVar17) = 0;
            plStack_140[2] = lVar17 + 0x20;
          }
LAB_14297d560:
          if (((cStack_c9 != '\0') && ((char)*plStack_e0 == '\x01')) &&
             (cVar13 = pdb_1408ffaf0(&uStack_438), cVar13 != '\0')) {
            *puStack_138 = uStack_fc;
            *(undefined1 *)((longlong)plStack_e0 + 1) = 1;
            bVar15 = pdb_1409cb300(piStack_120);
            if ((bVar15 & (byte)uStack_118) == 1) {
              *puStack_1b8 = uStack_164;
              piStack_148[4] = 1;
              piStack_148[5] = 0;
              *(longlong *)(piStack_148 + 6) = lStack_108;
            }
          }
          cVar13 = pdb_1408ffa90(&uStack_438);
          if (cVar13 != '\0') {
            *puStack_200 = uStack_170;
            lVar17 = *(longlong *)(lStack_188 + 0x30);
            uVar1 = *(undefined8 *)(lStack_188 + 0x40);
            if (lVar17 == *(longlong *)(lStack_188 + 0x20)) {
              pdb_142d7e980(lStack_1e0);
            }
            lVar25 = *(longlong *)(lStack_188 + 0x28);
            *(longlong *)(lVar25 + lVar17 * 0x10) = lStack_108;
            *(undefined8 *)(lVar25 + 8 + lVar17 * 0x10) = uVar1;
            *(longlong *)(lStack_188 + 0x30) = lVar17 + 1;
            *(longlong *)(lStack_188 + 0x40) = *(longlong *)(lStack_188 + 0x40) + 1;
          }
          cVar13 = pdb_1408ffab0(&uStack_438);
          if (cVar13 != '\x02') {
            uVar14 = pdb_1408ffab0(&uStack_438);
            *puStack_1f8 = uStack_16c;
            lVar17 = *(longlong *)(lStack_180 + 0x30);
            uVar1 = *(undefined8 *)(lStack_180 + 0x40);
            if (lVar17 == *(longlong *)(lStack_180 + 0x20)) {
              pdb_142d7e830(lStack_1d8);
            }
            lVar25 = *(longlong *)(lStack_180 + 0x28);
            *(undefined8 *)(lVar25 + lVar17 * 0x18) = uVar1;
            *(longlong *)(lVar25 + 8 + lVar17 * 0x18) = lStack_108;
            *(undefined1 *)(lVar25 + 0x10 + lVar17 * 0x18) = uVar14;
            *(longlong *)(lStack_180 + 0x30) = lVar17 + 1;
            *(longlong *)(lStack_180 + 0x40) = *(longlong *)(lStack_180 + 0x40) + 1;
          }
        }
        if (*(char *)((longlong)plStack_e0 + 1) != '\0') {
          *puStack_210 = uStack_174;
          *plStack_208 = lStack_108;
        }
      }
    }
  }
  goto LAB_14297cbd9;
LAB_14297d723:
  if (lStack_1b0 == 0) {
    return;
  }
  plVar19 = (longlong *)pdb_140e97000();
  if ((char)plVar19[0xd] != '\x01') goto LAB_14297d7c1;
  do {
    if (*plVar19 == 0) {
      *plVar19 = -1;
      plStack_d8 = plVar19;
      pdb_140e95370(plVar19 + 1,uStack_1a8);
      *plStack_d8 = *plStack_d8 + 1;
      return;
    }
LAB_14297d7b5:
    plVar19 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14297d7c1:
    plVar19 = (longlong *)pdb_142dcf3a0(plVar19,0);
  } while (plVar19 != (longlong *)0x0);
LAB_14297d7e9:
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297d7f6:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x20);
}

