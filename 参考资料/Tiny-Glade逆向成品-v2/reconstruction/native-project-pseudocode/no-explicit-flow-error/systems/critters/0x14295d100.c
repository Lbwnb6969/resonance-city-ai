// VA 0x14295d100, PDB extent 3204 bytes
// system_critters::wren::update_roof_bird_spots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::wren::update_roof_bird_spots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
   Extent: 3204 */

void pdb_14295d100(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong *param_9)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong *puVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined *in_stack_fffffffffffffd58;
  undefined1 auStack_290 [24];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 uStack_248;
  longlong lStack_240;
  float *pfStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  float *pfStack_1f8;
  longlong lStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1d8;
  longlong lStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float *pfStack_1a0;
  float *pfStack_198;
  float *pfStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined4 uStack_16c;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar31 = (ulonglong *)*param_2;
  lVar30 = param_2[1];
  uVar17 = *puVar31;
  uVar26 = 0;
  uVar14 = uVar17 - *(ulonglong *)(lVar30 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar30 + 0x18)) {
    uVar14 = uVar26;
  }
  uVar23 = uVar17 - *(ulonglong *)(lVar30 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar30 + 0x38)) {
    uVar23 = uVar26;
  }
  lVar24 = uVar14 * 0x20 + *(longlong *)(lVar30 + 8);
  uVar17 = *(ulonglong *)(lVar30 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar30 + 0x10) < uVar14) {
    lVar24 = 8;
    uVar17 = uVar26;
  }
  lVar29 = uVar23 * 0x20 + *(longlong *)(lVar30 + 0x28);
  uVar14 = *(ulonglong *)(lVar30 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar30 + 0x30) < uVar23) {
    lVar29 = 8;
    uVar14 = uVar26;
  }
  *puVar31 = (*(longlong *)(lVar30 + 0x40) - uVar14) - uVar17;
  lStack_218 = uVar17 * 0x20 + lVar24;
  lStack_208 = uVar14 * 0x20 + lVar29;
  puVar1 = (ulonglong *)*param_3;
  lVar30 = param_3[1];
  uVar17 = *puVar1;
  uVar14 = uVar17 - *(ulonglong *)(lVar30 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar30 + 0x18)) {
    uVar14 = uVar26;
  }
  uVar23 = uVar17 - *(ulonglong *)(lVar30 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar30 + 0x38)) {
    uVar23 = uVar26;
  }
  lVar27 = uVar14 * 0x10 + *(longlong *)(lVar30 + 8);
  uVar17 = *(ulonglong *)(lVar30 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar30 + 0x10) < uVar14) {
    lVar27 = 8;
    uVar17 = uVar26;
  }
  lVar25 = uVar23 * 0x10 + *(longlong *)(lVar30 + 0x28);
  uVar14 = *(ulonglong *)(lVar30 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar30 + 0x30) < uVar23) {
    lVar25 = 8;
    uVar14 = uVar26;
  }
  *puVar1 = (*(longlong *)(lVar30 + 0x40) - uVar14) - uVar17;
  fVar8 = _DAT_142e42360;
  fVar7 = _DAT_142e3b1d8;
  fVar6 = _DAT_142e37988;
  fVar5 = _DAT_142e3783c;
  fVar4 = _DAT_142e36f50;
  fVar3 = _DAT_142e36f28;
  lStack_228 = uVar17 * 0x10 + lVar27;
  lStack_220 = uVar14 * 0x10 + lVar25;
  lStack_150 = *param_4;
  lStack_1d0 = param_4[1];
  lStack_200 = *param_9;
  uStack_114 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_120 = *param_5;
  puStack_1c8 = (undefined4 *)param_5[2];
  uStack_1c0 = *param_6;
  uStack_1b8 = param_6[1];
  uStack_1b0 = param_6[3];
  uStack_1a8 = param_6[2];
  uVar2 = *param_7;
  lVar30 = lStack_1d0;
  uStack_210 = param_1;
LAB_14295d33a:
  do {
    lVar28 = lVar27;
    lStack_108 = lVar29;
    lStack_100 = lVar24;
    if (puVar31 == (ulonglong *)0x0) goto LAB_14295d416;
    if ((lVar24 == 0) || (lVar24 == lStack_218)) {
      if ((lVar29 == 0) || (lVar29 == lStack_208)) {
        lStack_100 = 0;
        goto LAB_14295d416;
      }
      lStack_108 = lVar29 + 0x20;
      lStack_100 = 0;
      lVar24 = lVar29;
    }
    else {
      lStack_100 = lVar24 + 0x20;
    }
    *puVar31 = *puVar31 + 1;
    uVar17 = *(ulonglong *)(lVar24 + 8);
    if ((uVar17 & 0xffffffff) == 0) goto LAB_14295d416;
    uVar14 = uVar17 & 0xffffffff ^ 0xffffffff;
    lVar24 = lStack_100;
    lVar29 = lStack_108;
  } while (*(ulonglong *)(lVar30 + 0x10) <= uVar14);
  goto LAB_14295d478;
LAB_14295d416:
  do {
    if ((lVar28 == 0) || (lVar28 == lStack_228)) {
      if ((lVar25 == 0) || (lVar25 == lStack_220)) {
        *puStack_1c8 = uStack_114;
        pdb_14293cc50(uStack_120,uStack_210);
        return;
      }
      lVar27 = 0;
      lVar28 = lVar25;
      lVar25 = lVar25 + 0x10;
    }
    else {
      lVar27 = lVar28 + 0x10;
    }
    *puVar1 = *puVar1 + 1;
    uVar17 = pdb_140b54b40(uVar2,*(undefined8 *)(lVar28 + 8));
    lVar28 = lVar27;
  } while ((uVar17 & 0xffffffff) == 0);
  puVar31 = (ulonglong *)0x0;
  uVar14 = uVar17 & 0xffffffff ^ 0xffffffff;
  lVar24 = lStack_100;
  lVar29 = lStack_108;
  lVar30 = lStack_1d0;
  if (*(ulonglong *)(lStack_1d0 + 0x10) <= uVar14) goto LAB_14295d33a;
LAB_14295d478:
  fVar39 = fStack_148;
  piVar15 = (int *)(uVar14 * 0x18 + *(longlong *)(lVar30 + 8));
  iVar21 = (int)(uVar17 >> 0x20);
  lVar24 = lStack_100;
  lVar29 = lStack_108;
  if ((((piVar15[4] != iVar21) || (*piVar15 == 0)) ||
      (uVar14 = *(ulonglong *)(piVar15 + 2),
      *(ulonglong *)(lStack_150 + 0x38) <= (uVar14 & 0xffffffff))) ||
     ((*(ulonglong *)(*(longlong *)(lStack_150 + 0x28) + (uVar14 >> 6 & 0x3ffffff) * 8) >>
       (uVar14 & 0x3f) & 1) == 0)) goto LAB_14295d33a;
  if (*(ulonglong *)(lStack_150 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar30 + 0x1a0) + 0x40 + (uVar14 >> 0x20) * 0x48)) {
    lVar24 = *(longlong *)(lVar30 + 0x1a0) + (uVar14 >> 0x20) * 0x48;
    uVar14 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lStack_150 + 0x110) * 8);
    if (uVar14 != 0) {
      lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar14 * 0x30);
      goto LAB_14295d528;
    }
  }
  lVar24 = 0;
LAB_14295d528:
  fStack_148 = (float)uVar17;
  fVar9 = fStack_148;
  lVar29 = lStack_100;
  lVar28 = lStack_108;
  if (*(int *)(lVar24 + 8 + (ulonglong)(uint)~piVar15[1] * 0x58) == 1) {
    lStack_110 = lVar24 + (ulonglong)(uint)~piVar15[1] * 0x58;
    fStack_148 = fVar39;
    lVar24 = lStack_108;
    lStack_108 = lStack_100;
    lStack_100 = lVar24;
    cVar11 = pdb_140b77b50(lStack_110);
    uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
    lVar29 = lStack_108;
    lVar28 = lStack_100;
    if (cVar11 == '\0') {
      uStack_248 = *(undefined8 *)(lStack_110 + 0x1c);
      uStack_258 = *(undefined4 *)(lStack_110 + 0xc);
      uStack_254 = *(undefined4 *)(lStack_110 + 0x10);
      fStack_250 = *(float *)(lStack_110 + 0x14);
      fStack_24c = *(float *)(lStack_110 + 0x18);
      uVar16 = pdb_140ac6110(lStack_110);
      fStack_148 = (float)uVar16;
      fStack_144 = (float)((ulonglong)uVar16 >> 0x20);
      uVar17 = pdb_140315970(&fStack_148);
      uVar35 = 0;
      uVar32 = pdb_140ac6200(lStack_110);
      pdb_140df1c10(&fStack_278,&uStack_258);
      in_stack_fffffffffffffd58 = (undefined *)CONCAT44(uVar13,uVar35);
      pdb_140df1b90(auStack_290,uVar17 & 0xffffffff,uVar17 >> 0x20,uVar32,in_stack_fffffffffffffd58,
                    &UNK_143604cb0);
      cVar11 = pdb_140b77b60(lStack_110);
      if ((cVar11 == '\0') || (*(char *)(lStack_110 + 0x54) != '\0')) {
        uVar12 = pdb_140901380(lStack_110 + 0x3c);
        pdb_140df07e0(&fStack_148,auStack_290,uVar12);
        fVar39 = fStack_140;
        fVar40 = fStack_13c;
      }
      else {
        uVar12 = pdb_140901380(lStack_110 + 0x3c);
        pdb_140df07e0(&fStack_148,auStack_290,uVar12);
        fVar37 = fVar7 / SQRT((fStack_144 - fStack_13c) * (fStack_144 - fStack_13c) +
                              (fStack_148 - fStack_140) * (fStack_148 - fStack_140));
        fVar36 = fVar3 - fVar37;
        fVar39 = fStack_148 * fVar37 + fStack_140 * fVar36;
        fVar40 = fStack_144 * fVar37 + fStack_13c * fVar36;
        fStack_148 = fStack_140 * fVar37 + fStack_148 * fVar36;
        fStack_144 = fStack_13c * fVar37 + fStack_144 * fVar36;
      }
      fVar37 = fStack_144;
      fVar36 = fStack_148;
      fVar41 = SQRT((fStack_144 - fVar40) * (fStack_144 - fVar40) +
                    (fStack_148 - fVar39) * (fStack_148 - fVar39));
      lVar29 = lStack_108;
      lVar28 = lStack_100;
      if (fVar4 < fVar41) {
        lStack_168 = 0;
        lStack_160 = 8;
        lStack_158 = 0;
        uStack_f2 = 1;
        uStack_1d8 = pdb_140dedfe0(*(undefined4 *)(lStack_200 + 0x2c));
        fVar33 = fVar41 / fVar6;
        iVar22 = (int)fVar33;
        if (_DAT_142e382cc < fVar33) {
          iVar22 = 0x7fffffff;
        }
        if (NAN(fVar33)) {
          iVar22 = 0;
        }
        if (iVar22 < 2) {
          iVar22 = 1;
        }
        if (6 < iVar22) {
          iVar22 = 7;
        }
        fVar33 = fVar41 / (float)iVar22 + fVar8;
        auVar38 = ZEXT416((uint)fVar33);
        if (fVar33 <= 0.0) {
          auVar38 = ZEXT816(0) << 0x20;
        }
        auVar38._0_4_ = (auVar38._0_4_ + auVar38._0_4_) / fVar41;
        uStack_f2 = 1;
        in_stack_fffffffffffffd58 = &UNK_143604cc8;
        pdb_140de8290(&lStack_240,iVar22 + 1,auVar38._0_8_,&uStack_1d8,&UNK_143604cc8);
        pfStack_198 = pfStack_238 + lStack_230;
        bVar20 = true;
        fStack_268 = fStack_278;
        fStack_264 = fStack_274;
        fStack_260 = fStack_270;
        fStack_25c = fStack_26c;
        pfStack_190 = pfStack_238;
        pfVar18 = pfStack_238;
        while (pfVar18 != pfStack_198) {
          pfVar10 = pfVar18 + 1;
          pfVar19 = pfVar18;
          if (bVar20) {
            if (pfVar10 == pfStack_198) break;
            pfVar19 = pfVar10;
            pfStack_1f8 = pfVar18;
            pfVar10 = pfVar18 + 2;
          }
          pfStack_1a0 = pfVar10;
          fVar41 = *pfStack_1f8;
          fVar33 = *pfVar19;
          uStack_f1 = 1;
          pfStack_1f8 = pfVar19;
          fVar34 = (float)pdb_140e02880(&uStack_1d8);
          fVar34 = fVar34 * fVar5 + (fVar3 - fVar34) * fVar6;
          fVar33 = fVar33 * fVar34 + fVar41 * (fVar3 - fVar34);
          fVar41 = fVar33 * fVar39 + (fVar3 - fVar33) * fVar36;
          fVar33 = fVar33 * fVar40 + (fVar3 - fVar33) * fVar37;
          fStack_148 = fVar33 * fStack_260 + fVar41 * fStack_268 + fStack_250;
          fStack_144 = fVar33 * fStack_25c + fVar41 * fStack_264 + fStack_24c;
          uStack_f1 = 1;
          pdb_140b77a00(lStack_110);
          uStack_f1 = 1;
          pdb_140df4540(&lStack_1f0,&fStack_148);
          uStack_f1 = 1;
          pdb_140b76780(&lStack_1f0);
          lStack_180 = CONCAT44(lStack_180._4_4_,uStack_1e8);
          lStack_188 = lStack_1f0;
          *puStack_1c8 = uStack_114;
          uStack_f1 = 1;
          uVar13 = pdb_1411630c0(uStack_120);
          lVar30 = lStack_158;
          fStack_13c = (float)lStack_180;
          fStack_144 = (float)lStack_188;
          fStack_140 = (float)((ulonglong)lStack_188 >> 0x20);
          if (lStack_158 == lStack_168) {
            uStack_f1 = 1;
            uStack_16c = uVar13;
            pdb_142d7e830(&lStack_168);
            uVar13 = uStack_16c;
          }
          *(undefined4 *)(lStack_160 + lVar30 * 0x18) = 0;
          pfVar18 = (float *)(lStack_160 + 4 + lVar30 * 0x18);
          *pfVar18 = fStack_148;
          pfVar18[1] = fStack_144;
          pfVar18[2] = fStack_140;
          pfVar18[3] = fStack_13c;
          *(undefined4 *)(lStack_160 + 0x14 + lVar30 * 0x18) = uVar13;
          lStack_158 = lVar30 + 1;
          bVar20 = false;
          pfVar18 = pfStack_1a0;
        }
        fStack_140 = (float)uStack_1c0;
        fStack_13c = (float)((ulonglong)uStack_1c0 >> 0x20);
        uStack_138 = uStack_1b8;
        uStack_130 = uStack_1a8;
        uStack_128 = uStack_1b0;
        lStack_178 = lStack_158;
        lStack_188 = lStack_168;
        lStack_180 = lStack_160;
        uStack_f1 = 0;
        fStack_148 = fVar9;
        fStack_144 = (float)iVar21;
        pdb_141162f00(&lStack_1f0,uStack_120,&lStack_188);
        uStack_f1 = 0;
        pdb_14296be80(&fStack_148,&lStack_1f0,&UNK_143604ce0);
        lVar24 = lStack_108;
        lVar29 = lStack_100;
        lVar30 = lStack_1d0;
        if (lStack_240 != 0) {
          pub_1406abac0((byte *)pfStack_190,lStack_240 << 2,4);
          lVar24 = lStack_108;
          lVar29 = lStack_100;
          lVar30 = lStack_1d0;
        }
        goto LAB_14295d33a;
      }
    }
  }
  lStack_100 = lVar28;
  lStack_108 = lVar29;
  fStack_140 = (float)uStack_1c0;
  fStack_13c = (float)((ulonglong)uStack_1c0 >> 0x20);
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1a8;
  uStack_128 = uStack_1b0;
  lStack_188 = 0;
  lStack_180 = 8;
  lStack_178 = 0;
  fStack_148 = fVar9;
  fStack_144 = (float)iVar21;
  pdb_141162f00(&lStack_1f0,uStack_120,&lStack_188);
  pdb_14296be80(&fStack_148,&lStack_1f0,&UNK_143604cf8);
  lVar24 = lStack_108;
  lVar29 = lStack_100;
  goto LAB_14295d33a;
}

