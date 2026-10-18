// VA 0x14298ada0, PDB extent 6145 bytes
// toolbar::photomode::ui_slider::ui_slider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014298c3b3) overlaps instruction at (ram,0x00014298c3b2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::ui_slider::ui_slider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
   Extent: 6145 */

void pdb_14298ada0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  byte *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12,
                  longlong *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16,
                  ulonglong *param_17)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  byte *pbVar14;
  uint *puVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar23;
  longlong lVar22;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  float *pfVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  uint *puVar33;
  uint uVar34;
  char *pcVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_278 [32];
  undefined *puStack_258;
  longlong lStack_250;
  uint uStack_244;
  ulonglong uStack_240;
  longlong lStack_238;
  undefined4 uStack_22c;
  longlong lStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  longlong lStack_210;
  longlong lStack_208;
  ulonglong uStack_200;
  longlong lStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  longlong lStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  float fStack_188;
  float fStack_184;
  float *pfStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  float *pfStack_160;
  longlong lStack_158;
  undefined8 *puStack_150;
  longlong lStack_148;
  undefined8 *puStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 auStack_110 [26];
  
  fVar40 = _DAT_142f61034;
  fVar45 = _DAT_142e37988;
  fVar39 = _DAT_142e36f28;
  puVar24 = auStack_278;
  puVar25 = auStack_278;
  puStack_140 = param_1;
  fStack_184 = *(float *)(*param_6 + 0x28);
  lStack_238 = *param_3;
  lStack_250 = param_3[1];
  uStack_22c = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar33 = *(uint **)(lStack_238 + 0xf8);
  puVar15 = puVar33 + *(longlong *)(lStack_238 + 0x100);
  pfStack_180 = (float *)*param_2;
  fVar46 = fStack_184 / _DAT_142e3787c;
  lStack_1b0 = *param_7;
  lStack_178 = *param_8;
  pbVar14 = (byte *)*param_4;
  lVar22 = param_4[1];
  fStack_128 = (float)(_DAT_142e37820 ^ (uint)fVar46);
  uStack_124 = _UNK_142e37824;
  uStack_120 = _UNK_142e37828;
  uStack_11c = _UNK_142e3782c;
  lStack_210 = CONCAT71(lStack_210._1_7_,*(undefined1 *)(lStack_238 + 0x108));
  uStack_218 = *param_11;
  uStack_198 = *param_12;
  pfStack_160 = (float *)*param_14;
  uStack_1a0 = *param_15;
  lStack_148 = lStack_1b0 + 0x10;
  uStack_244 = (uint)*param_9;
  uStack_130 = param_4[3];
  uStack_138 = param_4[2];
  uStack_170 = 0;
  lStack_208 = 8;
  lStack_228 = 0;
  lStack_1f8 = 0;
  uStack_240 = 0;
  lStack_158 = 8;
  lVar13 = 0;
  uStack_168 = 8;
  uStack_21c = 0;
  uStack_1a8 = 8;
  uVar32 = 0;
  puStack_150 = param_4;
LAB_14298afb8:
  do {
    do {
      iVar31 = (int)uVar32;
      if ((char)lStack_210 == '\0') {
        if (iVar31 != (int)lVar13) {
          uVar32 = uVar32 & 0xffffffff;
LAB_14298b263:
          puVar9 = (ulonglong *)(lStack_158 + uVar32 * 0x10);
          uVar32 = (ulonglong)~*(uint *)(lStack_158 + 8 + uVar32 * 0x10);
          goto LAB_14298b279;
        }
        if (puVar33 != puVar15) {
          while( true ) {
            lVar13 = *(longlong *)
                      (*(longlong *)(lStack_250 + 0x100) + 0x58 + (ulonglong)*puVar33 * 0xa0);
            if (lVar13 != 0) break;
            puVar33 = puVar33 + 1;
            if (puVar33 == puVar15) goto LAB_14298b78e;
          }
          lVar8 = *(longlong *)(lStack_250 + 0x100) + (ulonglong)*puVar33 * 0xa0;
          uVar32 = (ulonglong)*(uint *)(lVar8 + 0x94);
          lVar17 = *(longlong *)(lStack_250 + 0x1a0);
          lVar28 = lVar17 + uVar32 * 0x48;
          lVar21 = *(longlong *)(lVar17 + 0x38 + uVar32 * 0x48);
          uVar32 = *(ulonglong *)(lVar17 + 0x40 + uVar32 * 0x48);
          if (*(ulonglong *)(lStack_238 + 0x110) < uVar32) {
            uVar19 = *(ulonglong *)(lVar21 + *(ulonglong *)(lStack_238 + 0x110) * 8);
            lVar28 = *(longlong *)(lVar28 + 0x18);
            if (uVar19 == 0) goto LAB_14298b1d6;
            uStack_240 = *(ulonglong *)(lVar28 + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_238 + 0x120);
            if (uVar19 < uVar32) goto LAB_14298b1f0;
LAB_14298b210:
            lStack_228 = 0;
          }
          else {
            lVar28 = *(longlong *)(lVar28 + 0x18);
LAB_14298b1d6:
            uStack_240 = 0;
            uVar19 = *(ulonglong *)(lStack_238 + 0x120);
            if (uVar32 <= uVar19) goto LAB_14298b210;
LAB_14298b1f0:
            uVar32 = *(ulonglong *)(lVar21 + uVar19 * 8);
            if (uVar32 == 0) goto LAB_14298b210;
            lStack_228 = *(longlong *)(lVar28 + 0x10 + ~uVar32 * 0x30);
          }
          puVar33 = puVar33 + 1;
          lVar17 = ~*(ulonglong *)(lVar21 + *(longlong *)(lStack_238 + 0x118) * 8) * 0x30;
          lStack_1f8 = *(longlong *)(lVar28 + 0x10 + lVar17);
          lStack_190 = *(longlong *)(lVar28 + 0x28 + lVar17);
          lStack_158 = *(longlong *)(lVar8 + 0x50);
          iVar31 = 0;
          uVar32 = 0;
          goto LAB_14298b263;
        }
LAB_14298b78e:
        puVar9 = (ulonglong *)*puStack_140;
        lVar13 = puStack_140[1];
        uVar32 = *puVar9;
        uVar18 = 0;
        uVar19 = uVar32 - *(ulonglong *)(lVar13 + 0x18);
        if (uVar32 < *(ulonglong *)(lVar13 + 0x18)) {
          uVar19 = uVar18;
        }
        uVar36 = uVar32 - *(ulonglong *)(lVar13 + 0x38);
        if (uVar32 < *(ulonglong *)(lVar13 + 0x38)) {
          uVar36 = uVar18;
        }
        lVar22 = uVar19 * 0x18 + *(longlong *)(lVar13 + 8);
        uVar32 = *(ulonglong *)(lVar13 + 0x10) - uVar19;
        if (*(ulonglong *)(lVar13 + 0x10) < uVar19) {
          lVar22 = 8;
          uVar32 = uVar18;
        }
        lVar28 = uVar36 * 0x18 + *(longlong *)(lVar13 + 0x28);
        uVar19 = *(ulonglong *)(lVar13 + 0x30) - uVar36;
        if (*(ulonglong *)(lVar13 + 0x30) < uVar36) {
          lVar28 = 8;
          uVar19 = uVar18;
        }
        *puVar9 = (*(longlong *)(lVar13 + 0x40) - uVar19) - uVar32;
        fVar42 = _DAT_142e36f50;
        lStack_208 = lVar22 + uVar32 * 0x18;
        lStack_210 = lVar28 + uVar19 * 0x18;
        uStack_240 = CONCAT44(uStack_240._4_4_,*param_5);
        fVar46 = (float)param_5[1];
        lVar21 = lStack_210;
        lVar8 = lStack_208;
        lVar17 = lStack_238;
        lVar13 = lStack_250;
        fVar38 = fStack_188;
        goto LAB_14298b850;
      }
      if (iVar31 == (int)lVar13) {
        if (puVar33 == puVar15) goto LAB_14298b78e;
        while( true ) {
          lVar13 = *(longlong *)
                    (*(longlong *)(lStack_250 + 0x1a0) + 0x10 + (ulonglong)*puVar33 * 0x48);
          if (lVar13 != 0) break;
          puVar33 = puVar33 + 1;
          if (puVar33 == puVar15) goto LAB_14298b78e;
        }
        lVar28 = *(longlong *)(lStack_250 + 0x1a0) + (ulonglong)*puVar33 * 0x48;
        lVar17 = *(longlong *)(lVar28 + 0x38);
        uVar32 = *(ulonglong *)(lVar28 + 0x40);
        if (*(ulonglong *)(lStack_238 + 0x110) < uVar32) {
          uVar19 = *(ulonglong *)(lVar17 + *(ulonglong *)(lStack_238 + 0x110) * 8);
          lVar21 = *(longlong *)(lVar28 + 0x18);
          if (uVar19 == 0) goto LAB_14298b139;
          uStack_240 = *(ulonglong *)(lVar21 + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_238 + 0x120);
          if (uVar19 < uVar32) goto LAB_14298b153;
LAB_14298b173:
          lStack_228 = 0;
        }
        else {
          lVar21 = *(longlong *)(lVar28 + 0x18);
LAB_14298b139:
          uStack_240 = 0;
          uVar19 = *(ulonglong *)(lStack_238 + 0x120);
          if (uVar32 <= uVar19) goto LAB_14298b173;
LAB_14298b153:
          uVar32 = *(ulonglong *)(lVar17 + uVar19 * 8);
          if (uVar32 == 0) goto LAB_14298b173;
          lStack_228 = *(longlong *)(lVar21 + 0x10 + ~uVar32 * 0x30);
        }
        puVar33 = puVar33 + 1;
        lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lStack_238 + 0x118) * 8) * 0x30;
        lStack_1f8 = *(longlong *)(lVar21 + 0x10 + lVar17);
        lStack_190 = *(longlong *)(lVar21 + 0x28 + lVar17);
        lStack_208 = *(longlong *)(lVar28 + 8);
        uVar32 = 0;
      }
      iVar31 = (int)uVar32;
      uVar32 = uVar32 & 0xffffffff;
      puVar9 = (ulonglong *)(lStack_208 + uVar32 * 8);
LAB_14298b279:
      puVar1 = (undefined4 *)(lStack_190 + uVar32 * 4);
      pfVar27 = (float *)(uVar32 * 0x10 + uStack_240);
      piVar12 = (int *)(lStack_1f8 + uVar32 * 0x18);
      pcVar35 = (char *)(uVar32 * 3 + lStack_228);
      uStack_200 = *puVar9;
      if ((int)uStack_200 == 0) goto LAB_14298b78e;
      if (*piVar12 != 0) {
        pbStack_1f0 = *(byte **)piVar12;
        uStack_1d8 = uStack_138;
        uStack_1d0 = uStack_130;
        pbStack_1e8 = pbVar14;
        lStack_1e0 = lVar22;
        pdb_140f04aa0(&pbStack_1f0,&UNK_143608cc0);
      }
      uVar32 = (ulonglong)(iVar31 + 1);
      *puVar1 = uStack_22c;
      *piVar12 = 0;
    } while (*pcVar35 != '\x01');
    fVar42 = (float)*(undefined8 *)(pfVar27 + 2);
    fVar38 = (float)((ulonglong)*(undefined8 *)(pfVar27 + 2) >> 0x20);
  } while (fVar38 * fVar38 + fVar42 * fVar42 <= 0.0);
  fVar38 = fVar38 * fVar45;
  fVar37 = *pfVar27;
  fVar42 = (fVar38 * fVar40 + fVar42) * _DAT_142e36f50;
  puStack_258 = (undefined *)uStack_1a0;
  uStack_1b8 = uVar32;
  fVar41 = (float)pdb_14298a480((char)piVar12[4],uStack_218,uStack_198,*pfStack_160);
  fVar43 = (fVar42 + fVar37) * fVar41 + (fVar39 - fVar41) * (fVar37 - fVar42);
  fVar42 = pfVar27[1];
  puStack_258 = (undefined *)CONCAT44(puStack_258._4_4_,fVar38 * _DAT_142f6e3f0);
  pdb_140deead0(&pbStack_1f0,fVar43,fVar42);
  cVar7 = pdb_140deec60(&pbStack_1f0,*pfStack_180);
  *puVar1 = uStack_22c;
  fVar37 = fVar46;
  if (cVar7 == '\0') {
    fVar37 = fStack_128;
  }
  fVar44 = 0.0;
  if (0.0 <= fVar37 + (float)piVar12[2]) {
    fVar44 = fVar37 + (float)piVar12[2];
  }
  fVar37 = fVar39;
  if (fVar44 <= fVar39) {
    fVar37 = fVar44;
  }
  piVar12[2] = (int)fVar37;
  fVar37 = (float)pdb_140dedcd0(&UNK_143608cd8);
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x15,1);
  uVar6 = _UNK_143608cec;
  uVar5 = _UNK_143608ce8;
  uVar2 = _UNK_143608ce4;
  if (pbVar10 != (byte *)0x0) {
    fStack_1c8 = fVar38 * (fVar37 * _DAT_142f6e3f0 + (fVar39 - fVar37));
    *(undefined4 *)pbVar10 = _DAT_143608ce0;
    *(undefined4 *)(pbVar10 + 4) = uVar2;
    *(undefined4 *)(pbVar10 + 8) = uVar5;
    *(undefined4 *)(pbVar10 + 0xc) = uVar6;
    pbVar10[0xd] = 0x72;
    pbVar10[0xe] = 0x5f;
    pbVar10[0xf] = 0x77;
    pbVar10[0x10] = 0x69;
    pbVar10[0x11] = 100;
    pbVar10[0x12] = 0x67;
    pbVar10[0x13] = 0x65;
    pbVar10[0x14] = 0x74;
    uStack_1d0 = CONCAT44(fVar42,fVar43);
    pbStack_1f0 = (byte *)0x15;
    lStack_1e0 = 0x15;
    uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
    uStack_1c0 = 1;
    pbStack_1e8 = pbVar10;
    fStack_1c4 = fStack_1c8;
    pdb_1411b0cf0(auStack_110,puStack_150,&pbStack_1f0,&UNK_143608cf8);
    lVar28 = lStack_178;
    *puVar1 = uStack_22c;
    *(undefined8 *)piVar12 = auStack_110[0];
    uVar32 = uStack_1b8;
    if ((*(int *)(lStack_1b0 + 0x10) == 1) && (*(ulonglong *)(lStack_1b0 + 0x18) == uStack_200)) {
      cVar7 = pdb_140938b60(*(undefined4 *)(lStack_178 + 0xb0),*(undefined4 *)(lStack_178 + 0xb4));
      if ((((cVar7 != '\0') ||
           (cVar7 = pdb_140938b60(*(undefined4 *)(lVar28 + 0xb8),*(undefined4 *)(lVar28 + 0xbc)),
           uVar34 = uStack_244, cVar7 != '\0')) &&
          (uVar34 = uStack_244, *param_10 == *(longlong *)(lStack_1b0 + 0x10))) &&
         ((*param_10 == 0 || (param_10[1] == *(longlong *)(lStack_1b0 + 0x18))))) {
        *param_9 = 1;
        uVar34 = 1;
      }
      cVar7 = pdb_140938bb0(*(undefined4 *)(lVar28 + 0xb0),*(undefined4 *)(lVar28 + 0xb4));
      if ((cVar7 != '\0') &&
         (cVar7 = pdb_140938bb0(*(undefined4 *)(lVar28 + 0xb8),*(undefined4 *)(lVar28 + 0xbc)),
         cVar7 != '\0')) {
        *param_9 = 0;
        uStack_244 = 0;
        uVar32 = uStack_1b8;
        goto LAB_14298afb8;
      }
      lVar28 = lStack_178;
      uStack_244 = 0;
      uVar32 = uStack_1b8;
      if ((uVar34 & 1) != 0) {
        cVar7 = pdb_140938ba0(*(undefined4 *)(lStack_178 + 0xb0));
        if (cVar7 != '\0') {
          fVar42 = 0.0;
          if (0.0 <= fVar41 - fStack_184) {
            fVar42 = fVar41 - fStack_184;
          }
          fStack_188 = fVar39;
          if (fVar42 <= fVar39) {
            fStack_188 = fVar42;
          }
          uStack_1a8 = uStack_200 >> 0x20;
          uStack_21c = (uint)uStack_200;
        }
        cVar7 = pdb_140938ba0(*(undefined4 *)(lVar28 + 0xb8),*(undefined4 *)(lVar28 + 0xbc));
        if (cVar7 != '\0') {
          fVar42 = 0.0;
          if (0.0 <= fVar41 + fStack_184) {
            fVar42 = fVar41 + fStack_184;
          }
          fStack_188 = fVar39;
          if (fVar42 <= fVar39) {
            fStack_188 = fVar42;
          }
          uStack_1a8 = uStack_200 >> 0x20;
          uStack_21c = (uint)uStack_200;
        }
        cVar7 = pdb_140938b60(*(undefined4 *)(lVar28 + 0xb0),*(undefined4 *)(lVar28 + 0xb4));
        if (cVar7 == '\0') {
          uVar32 = (ulonglong)*(uint *)(lStack_178 + 0xb8);
          cVar7 = pdb_140938b60(uVar32,*(undefined4 *)(lStack_178 + 0xbc));
          uStack_244 = (uint)CONCAT71((int7)(uVar32 >> 8),1);
          uVar32 = uStack_1b8;
          if (cVar7 == '\0') goto LAB_14298afb8;
        }
        uStack_170 = uStack_200;
        uStack_168 = uStack_200 >> 0x20;
        uStack_244 = (uint)CONCAT71((uint7)(uStack_200 >> 0x28),1);
        uVar32 = uStack_1b8;
      }
    }
    goto LAB_14298afb8;
  }
  uVar32 = 1;
  pbVar14 = (byte *)pdb_142dc7e2a(1,0x15);
  goto LAB_14298c55d;
LAB_14298b850:
  do {
    do {
      do {
        uVar19 = uStack_168;
        if ((lVar22 == 0) || (lVar22 == lVar8)) {
          if ((lVar28 == 0) || (lVar28 == lVar21)) goto LAB_14298bb7b;
          lVar29 = lVar28 + 0x18;
          lVar11 = 0;
          lVar30 = lVar28;
        }
        else {
          lVar11 = lVar22 + 0x18;
          lVar29 = lVar28;
          lVar30 = lVar22;
        }
        *puVar9 = *puVar9 + 1;
        uVar32 = *(ulonglong *)(lVar30 + 8);
        uVar34 = (uint)uVar32;
        lVar22 = lVar11;
        lVar28 = lVar29;
      } while (*(ulonglong *)(lVar13 + 0x10) <= (ulonglong)~uVar34);
      piVar12 = (int *)((ulonglong)~uVar34 * 0x18 + *(longlong *)(lVar13 + 8));
    } while (((piVar12[4] != (int)(uVar32 >> 0x20)) || (*piVar12 == 0)) ||
            ((uVar19 = *(ulonglong *)(piVar12 + 2),
             *(ulonglong *)(lVar17 + 0x38) <= (uVar19 & 0xffffffff) ||
             ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
               (uVar19 & 0x3f) & 1) == 0))));
    uVar19 = uVar19 >> 0x20;
    lVar11 = *(longlong *)(lVar13 + 0x1a0);
    lVar21 = lVar11 + uVar19 * 0x48;
    lVar29 = *(longlong *)(lVar11 + 0x38 + uVar19 * 0x48);
    if (*(ulonglong *)(lVar17 + 0x110) < *(ulonglong *)(lVar11 + 0x40 + uVar19 * 0x48)) {
      uVar19 = *(ulonglong *)(lVar29 + *(ulonglong *)(lVar17 + 0x110) * 8);
      lVar11 = *(longlong *)(lVar21 + 0x18);
      if (uVar19 == 0) goto LAB_14298b938;
      uVar19 = *(ulonglong *)(lVar11 + 0x10 + ~uVar19 * 0x30);
    }
    else {
      lVar11 = *(longlong *)(lVar21 + 0x18);
LAB_14298b938:
      uVar19 = 0;
    }
    lVar21 = lStack_210;
  } while (uVar34 == 0);
  lVar13 = ~*(ulonglong *)(lVar29 + *(longlong *)(lVar17 + 0x118) * 8) * 0x30;
  lStack_190 = *(longlong *)(lVar11 + 0x10 + lVar13);
  lStack_228 = *(longlong *)(lVar11 + 0x28 + lVar13);
  uVar18 = (ulonglong)(uint)~piVar12[1];
  lStack_1f8 = uVar18 * 3;
  lVar13 = uVar18 * 0x10;
  fVar44 = *(float *)(uVar19 + 0xc + lVar13) * fVar45;
  fVar41 = (fVar44 * fVar40 + *(float *)(uVar19 + 8 + lVar13)) * fVar42;
  fVar43 = *(float *)(uVar19 + lVar13) - fVar41;
  fVar41 = fVar41 + *(float *)(uVar19 + lVar13);
  puStack_258 = (undefined *)uStack_1a0;
  uStack_200 = uVar19;
  fVar37 = (float)pdb_14298a480(*(undefined1 *)(lStack_190 + 0x10 + uVar18 * 0x18),uStack_218,
                                uStack_198,*pfStack_160);
  uVar2 = *(undefined4 *)(uStack_200 + 4 + lVar13);
  *(undefined4 *)(lStack_228 + uVar18 * 4) = uStack_22c;
  *(undefined4 *)(lStack_190 + 8 + lStack_1f8 * 8) = 0x3f800000;
  cVar7 = *(byte *)(lVar30 + 0x10) - 2;
  if (*(byte *)(lVar30 + 0x10) < 2) {
    cVar7 = '\x03';
  }
  if (cVar7 == '\x03') {
    uStack_170 = uVar32 & 0xffffffff;
    uStack_168 = uVar32 >> 0x20;
LAB_14298bb04:
    uVar19 = uStack_240 & 1;
    uStack_240 = uStack_240 & 0xffffffff00000000;
    lVar21 = lStack_210;
    lVar8 = lStack_208;
    lVar17 = lStack_238;
    lVar13 = lStack_250;
    if (uVar19 == 0) goto LAB_14298b850;
  }
  else {
    if (cVar7 != '\x01') goto LAB_14298bb04;
    fVar38 = fVar37 * fVar41 + (fVar39 - fVar37) * fVar43;
    *param_5 = 0;
    fVar44 = fVar44 * _DAT_142f6e3f0;
    puStack_258 = (undefined *)CONCAT44(puStack_258._4_4_,fVar44);
    pdb_140deead0(&pbStack_1f0,fVar38,uVar2,fVar44);
    cVar7 = pdb_140deec60(&pbStack_1f0,*pfStack_180,pfStack_180[1]);
    fVar46 = 0.0;
    if (cVar7 != '\0') {
      fVar46 = fVar38 - *pfStack_180;
    }
    *param_5 = 1;
    param_5[1] = fVar46;
  }
  lVar17 = lStack_238;
  lVar13 = lStack_250;
  fVar38 = (float)pdb_140de8220(fVar43,fVar41,*pfStack_180 + fVar46);
  fVar37 = 0.0;
  if (0.0 <= fVar38) {
    fVar37 = fVar38;
  }
  fVar38 = fVar39;
  if (fVar37 <= fVar39) {
    fVar38 = fVar37;
  }
  uStack_240 = CONCAT44(uStack_240._4_4_,1);
  lVar21 = lStack_210;
  lVar8 = lStack_208;
  uStack_21c = uVar34;
  uStack_1a8 = uVar32 >> 0x20;
  goto LAB_14298b850;
LAB_14298bb7b:
  if (uStack_21c != 0) {
    uVar32 = (ulonglong)uStack_21c;
    pbVar14 = (byte *)0x1;
    if (((*(ulonglong *)(lVar13 + 0x10) <= (uVar32 ^ 0xffffffff)) ||
        (piVar12 = (int *)((uVar32 ^ 0xffffffff) * 0x18 + *(longlong *)(lVar13 + 8)),
        piVar12[4] != (int)uStack_1a8)) || (*piVar12 == 0)) {
LAB_14298c55d:
      pbStack_1e8 = (byte *)(uStack_1a8 << 0x20 | uVar32);
      puStack_258 = &UNK_143608c90;
      pbStack_1f0 = pbVar14;
      goto LAB_14298c57b;
    }
    uVar18 = *(ulonglong *)(piVar12 + 2);
    if ((*(ulonglong *)(lVar17 + 0x38) <= (uVar18 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
         (uVar18 & 0x3f) & 1) == 0)) {
      pbVar14 = (byte *)(uVar18 << 0x20);
      goto LAB_14298c55d;
    }
    if (0x7f7fffff < (uint)ABS(fVar38)) goto LAB_14298c263;
    lVar22 = *(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x18 + (uVar18 >> 0x20) * 0x48);
    lVar13 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x38 + (uVar18 >> 0x20) * 0x48) +
               *(longlong *)(lVar17 + 0x118) * 8) * 0x30;
    pcVar35 = *(char **)(lVar22 + 0x28 + lVar13);
    uVar18 = (ulonglong)(uint)~piVar12[1];
    lVar13 = *(longlong *)(lVar22 + lVar13 + 0x10);
    lVar22 = lVar13 + uVar18 * 0x18;
    bVar23 = *(byte *)(lVar13 + 0x10 + uVar18 * 0x18);
    fVar40 = *(float *)(lVar13 + 0xc + uVar18 * 0x18) * _DAT_143008730;
    uVar32 = (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f | (longlong)fVar40;
    if (fVar40 < 0.0) {
      uVar32 = 0;
    }
    if (_DAT_142e36f30 < fVar40) {
      uVar32 = 0xffffffffffffffff;
    }
    fVar40 = _DAT_143008730 * fVar38;
    uVar36 = (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f | (longlong)fVar40;
    if (fVar40 < 0.0) {
      uVar36 = 0;
    }
    if (_DAT_142e36f30 < fVar40) {
      uVar36 = 0xffffffffffffffff;
    }
    fVar40 = *(float *)(&UNK_143608d78 + (uint)bVar23 * 4);
    fVar46 = *(float *)(&UNK_143608d44 + (uint)bVar23 * 4);
    if (uVar32 != uVar36) {
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      lVar13 = *param_13;
      lVar28 = *(longlong *)(lVar13 + 0x30);
      uVar3 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar28 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e6e0(lVar13 + 0x20);
      }
      lVar17 = *(longlong *)(lVar13 + 0x28);
      *(undefined4 *)(lVar17 + lVar28 * 0x20) = 0x22;
      *(undefined8 *)(lVar17 + 0x18 + lVar28 * 0x20) = uVar3;
      *(longlong *)(lVar13 + 0x30) = lVar28 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
      fVar40 = fVar46 * fVar38 + (fVar39 - fVar38) * fVar40;
      bVar16 = *(byte *)*param_16;
      uVar20 = (ulonglong)bVar16;
      uVar36 = (ulonglong)*(int *)(&UNK_143608e14 + (ulonglong)*(byte *)(lVar22 + 0x10) * 4);
      pbVar14 = &UNK_143608e14 + uVar36;
      lVar17 = lStack_238;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(lVar22 + 0x10)) {
      case 0:
        goto code_r0x00014298bdcd;
      case 1:
        goto code_r0x00014298c0b2;
      case 2:
        goto code_r0x00014298bf57;
      case 3:
        goto code_r0x00014298bfd1;
      case 4:
        goto code_r0x00014298be75;
      case 5:
        goto code_r0x00014298c121;
      case 6:
        goto code_r0x00014298c191;
      case 7:
        goto code_r0x00014298c041;
      case 8:
        goto code_r0x00014298c20d;
      case 9:
        goto code_r0x00014298bf15;
      case 10:
        goto code_r0x00014298c1e0;
      case 0xb:
        goto code_r0x00014298be41;
      case 0xc:
        goto code_r0x00014298bee1;
      case 0xd:
        goto code_r0x00014298c2ff;
      case 0xe:
        goto code_r0x00014298c408;
      case 0xf:
        goto code_r0x00014298c357;
      case 0x10:
        goto code_r0x00014298c3af;
      default:
        goto code_r0x000143608e14;
      }
    }
    fVar40 = fVar46 * fVar38 + (fVar39 - fVar38) * fVar40;
    bVar16 = *(byte *)*param_16;
    uVar20 = (ulonglong)bVar16;
    uVar36 = (ulonglong)*(int *)(&UNK_143608e14 + (ulonglong)bVar23 * 4);
    pbVar14 = &UNK_143608e14 + uVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar23) {
    case 0:
code_r0x00014298bdcd:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x1c) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 1:
code_r0x00014298c0b2:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x20) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 2:
code_r0x00014298bf57:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x24) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 3:
code_r0x00014298bfd1:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x30) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 4:
code_r0x00014298be75:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x38) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 5:
code_r0x00014298c121:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
        pdb_1409aa280(&pbStack_1f0,uStack_218);
        lVar28 = lStack_1e0;
        for (pbVar14 = pbStack_1f0; pbVar14 != pbStack_1e8; pbVar14 = pbVar14 + 0x40) {
          if ((lVar28 != 0) && (pbVar14 != (byte *)0x0)) {
            *(float *)(pbVar14 + 0x34) = fVar40;
          }
          lVar28 = lVar28 + 1;
        }
      }
      break;
    case 6:
code_r0x00014298c191:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        lVar28 = pdb_140a36600(uStack_198);
        *(float *)(lVar28 + 8) =
             fVar40 * (float)((ulonglong)*(undefined8 *)(lVar28 + 0xc) >> 0x20) +
             (fVar39 - fVar40) * (float)*(undefined8 *)(lVar28 + 0xc);
      }
      break;
    case 7:
code_r0x00014298c041:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        fVar39 = (float)pdb_142b5a620(&UNK_143608c4c,fVar40);
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        puVar15 = (uint *)pdb_140a368d0(uStack_198);
        if ((((float)puVar15[6] != fVar39) || (NAN((float)puVar15[6]) || NAN(fVar39))) &&
           (puVar15[6] = (uint)fVar39, *puVar15 < 2)) {
          *puVar15 = 3;
          *(undefined8 *)(puVar15 + 1) = *(undefined8 *)(puVar15 + 4);
        }
      }
      break;
    case 8:
code_r0x00014298c20d:
      lVar13 = lStack_250;
      if (bVar16 == 0x10) {
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        lVar28 = pdb_140a36600(uStack_198);
        *(float *)(lVar28 + 0x18) =
             fVar40 * (float)((ulonglong)*(undefined8 *)(lVar28 + 0x1c) >> 0x20) +
             (fVar39 - fVar40) * (float)*(undefined8 *)(lVar28 + 0x1c);
      }
      break;
    case 9:
code_r0x00014298bf15:
      lVar13 = lStack_250;
      if (bVar16 != 0x10) {
        if (fVar45 <= fVar40) {
          fVar45 = fVar40;
        }
        fVar39 = _DAT_142e37830;
        if (fVar45 <= _DAT_142e37830) {
          fVar39 = fVar45;
        }
        *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
        *pfStack_160 = fVar39;
      }
      break;
    case 10:
code_r0x00014298c1e0:
      lVar13 = lStack_250;
      if (bVar16 != 0x10) {
        *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
        pdb_140b673a0(uStack_1a0,fVar40);
      }
      break;
    case 0xb:
code_r0x00014298be41:
      lVar13 = lStack_250;
      if (bVar16 != 0x10) {
        *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
        pdb_140b673c0(uStack_1a0,fVar40);
      }
      break;
    case 0xc:
code_r0x00014298bee1:
      lVar13 = lStack_250;
      if (bVar16 != 0x10) {
        *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
        pdb_140b67360(uStack_1a0,fVar40);
      }
      break;
    case 0xd:
      goto code_r0x00014298c2ff;
    case 0xe:
code_r0x00014298c408:
      *(char *)(uVar20 + 0x328b4801) =
           *(char *)(uVar20 + 0x328b4801) + (char)uVar20 + (0xfffffffebc9f71eb < uVar36);
      goto code_r0x00014298c40f;
    case 0xf:
code_r0x00014298c357:
      *(int *)(pbVar14 + -0x75) = *(int *)(pbVar14 + -0x75) + (int)uVar20;
      bVar23 = (byte)uVar20 ^ pbVar14[-0x75];
      if ((char)bVar23 < '\x01') {
        cVar7 = (char)pbVar14 + *pbVar14;
        pcVar35 = (char *)CONCAT71((int7)((ulonglong)pbVar14 >> 8),cVar7);
        pcVar35[-0x75] = pcVar35[-0x75] + bVar23;
        pcVar35[-0x7bf0f4c8] = pcVar35[-0x7bf0f4c8] + cVar7;
        *pcVar35 = *pcVar35 + cVar7;
        pcVar35[-0x75] = pcVar35[-0x75] + bVar23;
        puVar24 = (undefined1 *)((ulonglong)pcVar35 & 0xffffffff);
        pbVar14 = (byte *)(lVar22 + -0x74b7e3be);
        bVar16 = *pbVar14;
        *pbVar14 = *pbVar14 + bVar23;
        *(char *)((ulonglong)bVar23 + 0x328b4801) =
             *(char *)((ulonglong)bVar23 + 0x328b4801) + bVar23 + CARRY1(bVar16,bVar23);
        goto code_r0x00014298c3b3;
      }
      goto code_r0x00014298c35f;
    case 0x10:
code_r0x00014298c3af:
      *(uint *)(pbVar14 + -0x75) = *(int *)(pbVar14 + -0x75) + (uint)bVar16;
      bVar16 = bVar16 ^ pbVar14[-0x75];
      puVar24 = auStack_278;
      if ((char)bVar16 < '\x01') {
        uVar32 = CONCAT71((int7)((ulonglong)pbVar14 >> 8),(char)pbVar14 + *pbVar14);
        *(char *)(uVar32 - 0x75) = *(char *)(uVar32 - 0x75) + bVar16;
        *pcVar35 = *pcVar35 + bVar16;
        goto code_r0x00014298c3f1;
      }
      goto code_r0x00014298c3b7;
    default:
code_r0x000143608e14:
      bVar23 = (byte)((ulonglong)lVar22 >> 8) ^ *pbVar14;
      piVar12 = (int *)(CONCAT62((int6)((ulonglong)lVar22 >> 0x10),CONCAT11(bVar23,(char)lVar22)) +
                       0x31);
      *piVar12 = *piVar12 + 1;
      *pbVar14 = *pbVar14 ^ bVar23;
      iRam00000001c15fc660 = iRam00000001c15fc660 + -1;
                    /* WARNING: Could not recover jumptable at 0x000143608e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulonglong)uRam000000013d5fc667)(0x9eff382f);
      return;
    }
    *(undefined4 *)(pcVar35 + uVar18 * 4) = uStack_22c;
    *(float *)(lVar22 + 0xc) = fVar38;
  }
LAB_14298c263:
  puVar26 = auStack_278;
  if ((int)uStack_170 == 0) goto LAB_14298c49a;
  uVar32 = uStack_170 & 0xffffffff ^ 0xffffffff;
  pbVar14 = (byte *)0x1;
  if (((uVar32 < *(ulonglong *)(lVar13 + 0x10)) &&
      (piVar12 = (int *)(uVar32 * 0x18 + *(longlong *)(lVar13 + 8)), piVar12[4] == (int)uVar19)) &&
     (*piVar12 != 0)) {
    uVar18 = *(ulonglong *)(piVar12 + 2);
    if (((uVar18 & 0xffffffff) < *(ulonglong *)(lVar17 + 0x38)) &&
       ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
         (uVar18 & 0x3f) & 1) != 0)) {
      pbVar14 = (byte *)(ulonglong)(uint)piVar12[1];
      uVar32 = *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x18 + (uVar18 >> 0x20) * 0x48);
      uVar20 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x38 + (uVar18 >> 0x20) * 0x48) +
                 *(longlong *)(lVar17 + 0x118) * 8);
      goto code_r0x00014298c2ff;
    }
    pbVar14 = (byte *)(uVar18 << 0x20);
  }
  pbStack_1e8 = (byte *)(uVar19 << 0x20 | uStack_170 & 0xffffffff);
  puStack_258 = &UNK_143608ca8;
  pbStack_1f0 = pbVar14;
LAB_14298c57b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143608b58,0x2b,&pbStack_1f0,&UNK_143608b38);
code_r0x00014298c2ff:
  puVar26 = auStack_278;
  switch(*(undefined1 *)
          (*(longlong *)(uVar32 + 0x10 + uVar20 * 0x30) + 0x10 + (ulonglong)~(uint)pbVar14 * 0x18))
  {
  case 9:
    puVar26 = auStack_278;
    if (*(char *)*param_16 == '\x04') goto LAB_14298c49a;
    *(undefined4 *)param_17[2] = *(undefined4 *)((longlong)param_17 + 0x1c);
    uVar18 = *param_17;
    pcVar35 = *(char **)(uVar18 + 0x30);
code_r0x00014298c35f:
    uVar3 = *(undefined8 *)(uVar18 + 0x40);
    if (pcVar35 == *(char **)(uVar18 + 0x20)) {
      pdb_142d7e980(uVar18 + 0x20);
    }
    lVar13 = *(longlong *)(uVar18 + 0x28);
    *(undefined8 *)(lVar13 + (longlong)pcVar35 * 0x10) = uVar3;
    *(undefined1 *)(lVar13 + 8 + (longlong)pcVar35 * 0x10) = 4;
    puVar25 = auStack_278;
    break;
  case 10:
    puVar26 = auStack_278;
    if ((*(byte *)*param_16 & 0x1e) == 2) goto LAB_14298c49a;
    *(undefined4 *)param_17[2] = *(undefined4 *)((longlong)param_17 + 0x1c);
    uVar18 = *param_17;
    pcVar35 = *(char **)(uVar18 + 0x30);
    uVar3 = *(undefined8 *)(uVar18 + 0x40);
    if (pcVar35 == *(char **)(uVar18 + 0x20)) {
      pdb_142d7e980(uVar18 + 0x20);
    }
    lVar13 = *(longlong *)(uVar18 + 0x28);
    *(undefined8 *)(lVar13 + (longlong)pcVar35 * 0x10) = uVar3;
    *(undefined1 *)(lVar13 + 8 + (longlong)pcVar35 * 0x10) = 1;
    break;
  case 0xb:
    puVar26 = auStack_278;
    if (*(char *)*param_16 == '\v') goto LAB_14298c49a;
    *(undefined4 *)param_17[2] = *(undefined4 *)((longlong)param_17 + 0x1c);
    uVar18 = *param_17;
code_r0x00014298c3b3:
    pcVar35 = *(char **)(uVar18 + 0x30);
code_r0x00014298c3b7:
    uVar3 = *(undefined8 *)(uVar18 + 0x40);
    if (pcVar35 == *(char **)(uVar18 + 0x20)) {
      *(undefined8 *)(puVar24 + -8) = 0x14298c3ca;
      pdb_142d7e980(uVar18 + 0x20);
    }
    lVar13 = *(longlong *)(uVar18 + 0x28);
    *(undefined8 *)(lVar13 + (longlong)pcVar35 * 0x10) = uVar3;
    *(undefined1 *)(lVar13 + 8 + (longlong)pcVar35 * 0x10) = 8;
    puVar25 = puVar24;
    break;
  case 0xc:
    uVar32 = (ulonglong)*(byte *)*param_16;
code_r0x00014298c3f1:
    puVar26 = auStack_278;
    if ((byte)((char)uVar32 - 0xdU) < 2) goto LAB_14298c49a;
    *(undefined4 *)param_17[2] = *(undefined4 *)((longlong)param_17 + 0x1c);
    uVar18 = *param_17;
code_r0x00014298c40f:
    pcVar35 = *(char **)(uVar18 + 0x30);
    uVar3 = *(undefined8 *)(uVar18 + 0x40);
    if (pcVar35 == *(char **)(uVar18 + 0x20)) {
      pdb_142d7e980(uVar18 + 0x20);
    }
    lVar13 = *(longlong *)(uVar18 + 0x28);
    *(undefined8 *)(lVar13 + (longlong)pcVar35 * 0x10) = uVar3;
    *(undefined1 *)(lVar13 + 8 + (longlong)pcVar35 * 0x10) = 9;
    puVar25 = auStack_278;
    break;
  default:
    goto LAB_14298c49a;
  }
  *(char **)(uVar18 + 0x30) = pcVar35 + 1;
  *(longlong *)(uVar18 + 0x40) = *(longlong *)(uVar18 + 0x40) + 1;
  puVar26 = puVar25;
LAB_14298c49a:
  uVar3 = (*(undefined8 **)(puVar26 + 0x130))[1];
  puVar4 = *(undefined8 **)(puVar26 + 0x2c8);
  *puVar4 = **(undefined8 **)(puVar26 + 0x130);
  puVar4[1] = uVar3;
  return;
}

