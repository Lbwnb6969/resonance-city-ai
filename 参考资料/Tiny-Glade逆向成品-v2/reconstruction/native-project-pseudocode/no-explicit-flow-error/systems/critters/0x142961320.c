// VA 0x142961320, PDB extent 5133 bytes
// system_critters::ui_pet_ducks::ui_pet_ducks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ui_pet_ducks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::ui_pet_ducks::ui_pet_ducks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/ui_pet_ducks.rs
   Extent: 5133 */

void pdb_142961320(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,float *param_7,undefined8 *param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  float fVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  uint *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  longlong unaff_RSI;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulonglong uStack_378;
  float *pfStack_370;
  undefined8 uStack_318;
  undefined8 uStack_310;
  float fStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  byte *pbStack_170;
  undefined8 *puStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  byte *pbStack_128;
  undefined4 uStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  fVar50 = _DAT_142e3798c;
  uVar8 = _DAT_142e37820;
  fVar7 = _DAT_142e36f28;
  uStack_f0 = 0xfffffffffffffffe;
  lStack_100 = *param_3;
  lStack_160 = param_3[1];
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar11 = *(uint **)(lStack_100 + 0xf8);
  puVar1 = puVar11 + *(longlong *)(lStack_100 + 0x100);
  lStack_140 = *param_5;
  if (*(char *)(lStack_100 + 0x108) == '\0') {
    lVar19 = 0;
    piVar21 = (int *)0x8;
    lVar20 = 0;
    uVar18 = 0;
    do {
      if (uVar18 == (uint)lVar19) {
        if (puVar11 == puVar1) goto LAB_142961693;
        while( true ) {
          lVar19 = *(longlong *)
                    (*(longlong *)(lStack_160 + 0x100) + 0x58 + (ulonglong)*puVar11 * 0xa0);
          if (lVar19 != 0) break;
          puVar11 = puVar11 + 1;
          if (puVar11 == puVar1) goto LAB_142961693;
        }
        lVar16 = *(longlong *)(lStack_160 + 0x100) + (ulonglong)*puVar11 * 0xa0;
        uVar12 = (ulonglong)*(uint *)(lVar16 + 0x94);
        lVar24 = *(longlong *)(*(longlong *)(lStack_160 + 0x1a0) + 0x18 + uVar12 * 0x48);
        lVar23 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lStack_160 + 0x1a0) + 0x38 + uVar12 * 0x48) +
                   *(longlong *)(lStack_100 + 0x110) * 8) * 0x30;
        lVar20 = *(longlong *)(lVar24 + 0x10 + lVar23);
        unaff_RSI = *(longlong *)(lVar24 + 0x28 + lVar23);
        piVar21 = *(int **)(lVar16 + 0x50);
        puVar11 = puVar11 + 1;
        uVar18 = 1;
        lVar24 = 0;
        iVar5 = *piVar21;
      }
      else {
        uVar12 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        lVar24 = uVar12 * 0x10;
        iVar5 = piVar21[uVar12 * 4];
      }
      if (iVar5 == 0) goto LAB_142961693;
      uVar12 = (ulonglong)~*(uint *)((longlong)piVar21 + lVar24 + 8);
      lVar24 = uVar12 * 0x100 + lVar20;
      fVar39 = *(float *)(lStack_140 + 0x28);
      bVar25 = *(char *)(lVar24 + 0xfc) == '\0';
      if (bVar25) {
        fVar39 = (float)((uint)fVar39 ^ uVar8);
      }
      if ((!bVar25) && (fVar7 <= *(float *)(lVar24 + 0xf8))) {
        *(undefined4 *)(unaff_RSI + uVar12 * 4) = uStack_11c;
        *(undefined1 *)(lVar24 + 0xfc) = 0;
      }
      *(undefined4 *)(unaff_RSI + uVar12 * 4) = uStack_11c;
      fVar38 = fVar39 / fVar50 + *(float *)(lVar24 + 0xf8);
      fVar39 = 0.0;
      if (0.0 <= fVar38) {
        fVar39 = fVar38;
      }
      fVar38 = fVar7;
      if (fVar39 <= fVar7) {
        fVar38 = fVar39;
      }
      *(float *)(lVar24 + 0xf8) = fVar38;
    } while( true );
  }
  lVar19 = 0;
  lVar20 = 8;
  lVar24 = 0;
  uVar18 = 0;
  do {
    if (uVar18 == (uint)lVar19) {
      if (puVar11 == puVar1) break;
      while( true ) {
        lVar19 = *(longlong *)
                  (*(longlong *)(lStack_160 + 0x1a0) + 0x10 + (ulonglong)*puVar11 * 0x48);
        if (lVar19 != 0) break;
        puVar11 = puVar11 + 1;
        if (puVar11 == puVar1) goto LAB_142961693;
      }
      lVar23 = *(longlong *)(lStack_160 + 0x1a0) + (ulonglong)*puVar11 * 0x48;
      lVar20 = *(longlong *)(lVar23 + 8);
      lVar16 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lStack_100 + 0x110) * 8)
               * 0x30;
      lVar24 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x10 + lVar16);
      unaff_RSI = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x28 + lVar16);
      puVar11 = puVar11 + 1;
      uVar18 = 0;
    }
    uVar12 = (ulonglong)uVar18;
    if (*(int *)(lVar20 + uVar12 * 8) == 0) break;
    lVar23 = uVar12 * 0x100 + lVar24;
    fVar39 = *(float *)(lStack_140 + 0x28);
    if (*(char *)(lVar23 + 0xfc) == '\0') {
      fVar39 = (float)((uint)fVar39 ^ uVar8);
    }
    if ((*(char *)(lVar23 + 0xfc) == '\x01') && (fVar7 <= *(float *)(lVar23 + 0xf8))) {
      *(undefined4 *)(unaff_RSI + uVar12 * 4) = uStack_11c;
      *(undefined1 *)(lVar23 + 0xfc) = 0;
    }
    uVar18 = uVar18 + 1;
    *(undefined4 *)(unaff_RSI + uVar12 * 4) = uStack_11c;
    fVar38 = fVar39 / fVar50 + *(float *)(lVar23 + 0xf8);
    fVar39 = 0.0;
    if (0.0 <= fVar38) {
      fVar39 = fVar38;
    }
    fVar38 = fVar7;
    if (fVar39 <= fVar7) {
      fVar38 = fVar39;
    }
    *(float *)(lVar23 + 0xf8) = fVar38;
  } while( true );
LAB_142961693:
  cVar9 = *(char *)*param_1;
  if (cVar9 == '\x10') {
    puStack_168 = param_4;
    cVar9 = pdb_140a36620(*param_6);
    if (cVar9 == '\x03') goto LAB_1429616dc;
  }
  else if ((cVar9 != '\t') &&
          ((puStack_168 = param_4, cVar9 != '\x01' || (((char *)*param_1)[1] == '\0')))) {
LAB_1429616dc:
    fVar7 = _DAT_142e36f28;
    puVar11 = *(uint **)(lStack_100 + 0xf8);
    puVar1 = puVar11 + *(longlong *)(lStack_100 + 0x100);
    cStack_f3 = *(char *)(lStack_100 + 0x108);
    lStack_118 = *param_6;
    uStack_1a0 = *param_2;
    puStack_198 = (undefined8 *)*param_8;
    uStack_180 = *puStack_168;
    lStack_140 = lStack_140 + 0x2c;
    lVar19 = 0;
    lVar20 = 8;
    lVar24 = 8;
    lStack_138 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    puStack_168 = (undefined8 *)0x0;
    fVar39 = _DAT_142e37900;
    fVar38 = _DAT_143314df0;
    fVar46 = _UNK_143314df4;
    fVar47 = _UNK_143314df8;
    fVar48 = _UNK_143314dfc;
    fVar50 = _DAT_142e36f50;
    do {
      if (cStack_f3 == '\0') {
        if ((int)puStack_168 == (int)lVar19) {
          if (puVar11 == puVar1) {
            return;
          }
          while( true ) {
            lVar19 = *(longlong *)
                      (*(longlong *)(lStack_160 + 0x100) + 0x58 + (ulonglong)*puVar11 * 0xa0);
            if (lVar19 != 0) break;
            puVar11 = puVar11 + 1;
            if (puVar11 == puVar1) {
              return;
            }
          }
          lVar16 = *(longlong *)(lStack_160 + 0x100) + (ulonglong)*puVar11 * 0xa0;
          uVar14 = (ulonglong)*(uint *)(lVar16 + 0x94);
          lVar24 = *(longlong *)(lStack_160 + 0x1a0);
          uVar12 = *(ulonglong *)(lVar24 + 0x40 + uVar14 * 0x48);
          lVar23 = *(longlong *)(lVar24 + 0x18 + uVar14 * 0x48);
          lVar24 = *(longlong *)(lVar24 + 0x38 + uVar14 * 0x48);
          if ((*(ulonglong *)(lStack_100 + 0x118) < uVar12) &&
             (uVar14 = *(ulonglong *)(lVar24 + *(ulonglong *)(lStack_100 + 0x118) * 8), uVar14 != 0)
             ) {
            lStack_110 = *(longlong *)(lVar23 + 0x10 + ~uVar14 * 0x30);
            uVar14 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar12 <= uVar14) goto LAB_142961a38;
LAB_1429619c2:
            uVar12 = *(ulonglong *)(lVar24 + uVar14 * 8);
            if (uVar12 == 0) goto LAB_142961a38;
            lStack_108 = *(longlong *)(lVar23 + 0x10 + ~uVar12 * 0x30);
          }
          else {
            lStack_110 = 0;
            uVar14 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar14 < uVar12) goto LAB_1429619c2;
LAB_142961a38:
            lStack_108 = 0;
          }
          lVar24 = ~*(ulonglong *)(lVar24 + *(longlong *)(lStack_100 + 0x110) * 8) * 0x30;
          lStack_138 = *(longlong *)(lVar23 + 0x10 + lVar24);
          lStack_158 = *(longlong *)(lVar23 + 0x28 + lVar24);
          puVar11 = puVar11 + 1;
          lVar24 = *(longlong *)(lVar16 + 0x50);
          puStack_168 = (undefined8 *)0x0;
        }
        puVar15 = (undefined8 *)(lVar24 + (longlong)puStack_168 * 0x10);
        uVar12 = (ulonglong)~*(uint *)(lVar24 + 8 + (longlong)puStack_168 * 0x10);
      }
      else {
        uVar12 = (ulonglong)puStack_168;
        if ((int)puStack_168 == (int)lVar19) {
          if (puVar11 == puVar1) {
            return;
          }
          while( true ) {
            lVar19 = *(longlong *)
                      (*(longlong *)(lStack_160 + 0x1a0) + 0x10 + (ulonglong)*puVar11 * 0x48);
            if (lVar19 != 0) break;
            puVar11 = puVar11 + 1;
            if (puVar11 == puVar1) {
              return;
            }
          }
          lVar20 = *(longlong *)(lStack_160 + 0x1a0) + (ulonglong)*puVar11 * 0x48;
          uVar12 = *(ulonglong *)(lVar20 + 0x40);
          lVar23 = *(longlong *)(lVar20 + 0x18);
          lVar16 = *(longlong *)(lVar20 + 0x38);
          if ((*(ulonglong *)(lStack_100 + 0x118) < uVar12) &&
             (uVar14 = *(ulonglong *)(lVar16 + *(ulonglong *)(lStack_100 + 0x118) * 8), uVar14 != 0)
             ) {
            lStack_110 = *(longlong *)(lVar23 + 0x10 + ~uVar14 * 0x30);
            uVar14 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar12 <= uVar14) goto LAB_1429619e4;
LAB_142961982:
            uVar12 = *(ulonglong *)(lVar16 + uVar14 * 8);
            if (uVar12 == 0) goto LAB_1429619e4;
            lStack_108 = *(longlong *)(lVar23 + 0x10 + ~uVar12 * 0x30);
          }
          else {
            lStack_110 = 0;
            uVar14 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar14 < uVar12) goto LAB_142961982;
LAB_1429619e4:
            lStack_108 = 0;
          }
          lVar16 = ~*(ulonglong *)(lVar16 + *(longlong *)(lStack_100 + 0x110) * 8) * 0x30;
          lStack_138 = *(longlong *)(lVar23 + 0x10 + lVar16);
          lStack_158 = *(longlong *)(lVar23 + 0x28 + lVar16);
          puVar11 = puVar11 + 1;
          lVar20 = *(longlong *)(lVar20 + 8);
          uVar12 = 0;
        }
        puVar15 = (undefined8 *)(lVar20 + uVar12 * 8);
        puStack_168 = (undefined8 *)uVar12;
      }
      uStack_130 = uVar12 * 0x100 + lStack_138;
      pbStack_128 = (byte *)(lStack_158 + uVar12 * 4);
      pfVar22 = (float *)(uVar12 * 0x30 + lStack_110);
      uStack_188 = *puVar15;
      if ((int)uStack_188 == 0) {
        return;
      }
      if (*(char *)(uVar12 + lStack_108) == '\x02') {
        cVar9 = pdb_140a36620(lStack_118);
        if ((cVar9 != '\x03') ||
           (pdb_140a34500(&fStack_268,lStack_118),
           SQRT((fStack_260 - pfVar22[6]) * (fStack_260 - pfVar22[6]) +
                (fStack_264 - pfVar22[5]) * (fStack_264 - pfVar22[5]) +
                (fStack_268 - pfVar22[4]) * (fStack_268 - pfVar22[4])) <= fVar39)) {
          uStack_318 = &uStack_188;
          uStack_310 = pdb_140ed4b80;
          lStack_150 = lVar20;
          lStack_148 = lVar24;
          pdb_140f60760(&fStack_268,&UNK_143605270,&uStack_318);
          fStack_1b8 = fStack_268;
          fStack_1b4 = fStack_264;
          fStack_1b0 = fStack_260;
          uStack_1ac = uStack_25c;
          fStack_308 = pfVar22[6];
          uStack_310 = *(code **)(pfVar22 + 4);
          uStack_318 = (undefined8 *)CONCAT44(0x3f000000,(float)uStack_318);
          uStack_318 = (undefined8 *)((ulonglong)uStack_318 & 0xffffffffffffff00);
          uStack_378 = uStack_378 & 0xffffffffffffff00;
          uStack_f1 = 1;
          pdb_140c9dcb0(&fStack_268,&uStack_318,&uStack_378);
          uStack_f2 = 1;
          pdb_140c9dee0(&uStack_378);
          uStack_f2 = 0;
          pdb_140c9dd20(&uStack_318,&fStack_268,&uStack_378);
          uStack_f1 = 1;
          pdb_140c9dc40(&fStack_268,&uStack_318);
          uStack_f1 = 0;
          pfVar17 = &fStack_1b8;
          uStack_378 = pdb_142807c30(uStack_1a0,pfVar17,&fStack_268);
          pfStack_370 = pfVar17;
          pdb_1408ff9a0(&fStack_268,&uStack_378);
          fVar40 = fStack_23c;
          fVar49 = fStack_240;
          fVar27 = fStack_244;
          if (fStack_268 != 2.8026e-45) {
            pdb_140a34500(&uStack_318,lStack_118);
            *param_7 = SQRT((fVar40 - (float)uStack_310) * (fVar40 - (float)uStack_310) +
                            (fVar49 - uStack_318._4_4_) * (fVar49 - uStack_318._4_4_) +
                            (fVar27 - (float)uStack_318) * (fVar27 - (float)uStack_318));
          }
          cVar9 = pdb_1408ffaf0(&uStack_378);
          if (cVar9 != '\0') {
            fVar26 = *(float *)(lStack_118 + 0xc4);
            fVar27 = *(float *)(lStack_118 + 200);
            fVar29 = *(float *)(lStack_118 + 0xd0);
            fVar49 = *(float *)(lStack_118 + 0xd8);
            fVar30 = *(float *)(lStack_118 + 0xe0);
            fVar31 = *(float *)(lStack_118 + 0xe4);
            fVar40 = *(float *)(lStack_118 + 0xe8);
            if (fVar40 <= 0.0) {
              fVar43 = *(float *)(lStack_118 + 0xd4) - *(float *)(lStack_118 + 0xc0);
              if (fVar43 <= 0.0) {
                fVar43 = (fVar7 - fVar40) - fVar43;
                fVar45 = fVar50 / SQRT(fVar43);
                fVar40 = fVar45 * fVar43;
                fVar28 = fVar45 * (*(float *)(lStack_118 + 0xd8) - fVar31);
                fVar43 = fVar45 * (fVar26 + fVar29);
                fVar45 = fVar45 * (*(float *)(lStack_118 + 200) + fVar30);
              }
              else {
                fVar43 = fVar43 + (fVar7 - fVar40);
                fVar45 = fVar50 / SQRT(fVar43);
                fVar40 = (fVar26 + fVar29) * fVar45;
                fVar28 = (fVar30 - fVar27) * fVar45;
                fVar43 = fVar43 * fVar45;
                fVar45 = (fVar49 + fVar31) * fVar45;
              }
            }
            else {
              fVar28 = *(float *)(lStack_118 + 0xd4) + *(float *)(lStack_118 + 0xc0);
              if (fVar28 <= 0.0) {
                fVar45 = (fVar40 + fVar7) - fVar28;
                fVar32 = fVar50 / SQRT(fVar45);
                fVar40 = fVar32 * (fVar27 + fVar30);
                fVar28 = fVar32 * (fVar26 - fVar29);
                fVar43 = fVar32 * (fVar49 + fVar31);
                fVar45 = fVar45 * fVar32;
              }
              else {
                fVar28 = fVar28 + fVar40 + fVar7;
                fVar45 = fVar50 / SQRT(fVar28);
                fVar40 = (fVar49 - fVar31) * fVar45;
                fVar28 = fVar28 * fVar45;
                fVar43 = (fVar30 - fVar27) * fVar45;
                fVar45 = (fVar26 - fVar29) * fVar45;
              }
            }
            fVar27 = *param_7;
            uVar3 = *puStack_198;
            uVar4 = *(undefined8 *)((longlong)puStack_198 + 0xc);
            fVar49 = *(float *)((longlong)puStack_198 + 0x14);
            fVar26 = *(float *)(puStack_198 + 1);
            cVar9 = pdb_140a36620(lStack_118);
            uStack_318 = (undefined8 *)lStack_140;
            uStack_310 = pdb_140f71a50;
            pdb_140f60760(&fStack_268,&UNK_14360527c,&uStack_318);
            uStack_178 = CONCAT44(fStack_264,fStack_268);
            pbVar6 = (byte *)CONCAT44(uStack_25c,fStack_260);
            uStack_190 = CONCAT44(uStack_254,fStack_258);
            pdb_14007ee60();
            pbVar13 = pub_1406abab0(0x30,0x10);
            if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(0x10,0x30);
            }
            uVar2 = *(undefined4 *)(&UNK_143605258 + (ulonglong)(cVar9 == '\x03') * 4);
            fVar29 = fVar40 * fVar38 * _DAT_142e377b0;
            fVar30 = fVar40 * fVar46 * _UNK_142e377b4;
            fVar32 = fVar40 * fVar47 * _UNK_142e377b8;
            fVar34 = fVar40 * fVar48 * _UNK_142e377bc;
            fVar35 = fVar28 * _DAT_143314de0;
            fVar36 = fVar28 * _UNK_143314de4;
            fVar37 = fVar28 * _UNK_143314de8;
            fVar28 = fVar28 * _UNK_143314dec;
            fVar40 = fVar43 * _DAT_143314e00 * _DAT_142e377c0;
            fVar31 = fVar43 * _UNK_143314e04 * _UNK_142e377c4;
            fVar33 = fVar43 * _UNK_143314e08 * _UNK_142e377c8;
            fVar43 = fVar43 * _UNK_143314e0c * _UNK_142e377cc;
            fVar41 = fVar45 * _DAT_143314e10 * _DAT_142e377d0;
            fVar42 = fVar45 * _UNK_143314e14 * _UNK_142e377d4;
            fVar44 = fVar45 * _UNK_143314e18 * _UNK_142e377d8;
            fVar45 = fVar45 * _UNK_143314e1c * _UNK_142e377dc;
            pbVar13[0] = 1;
            pbVar13[1] = 0;
            pbVar13[2] = 0;
            pbVar13[3] = 0;
            pbVar13[4] = 0;
            pbVar13[5] = 0;
            pbVar13[6] = 0;
            pbVar13[7] = 0;
            pbVar13[8] = 1;
            pbVar13[9] = 0;
            pbVar13[10] = 0;
            pbVar13[0xb] = 0;
            pbVar13[0xc] = 0;
            pbVar13[0xd] = 0;
            pbVar13[0xe] = 0;
            pbVar13[0xf] = 0;
            *(float *)(pbVar13 + 0x10) = fVar41 + fVar40 + fVar35 + fVar29;
            *(float *)(pbVar13 + 0x14) = fVar42 + fVar31 + fVar36 + fVar30;
            *(float *)(pbVar13 + 0x18) = fVar44 + fVar33 + fVar37 + fVar32;
            *(float *)(pbVar13 + 0x1c) = fVar45 + fVar43 + fVar28 + fVar34;
            *(ulonglong *)(pbVar13 + 0x20) =
                 CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                          (float)((ulonglong)uVar4 >> 0x20) * fVar27,
                          (float)uVar3 + (float)uVar4 * fVar27);
            *(float *)(pbVar13 + 0x28) = fVar49 * fVar27 + fVar26;
            *(undefined4 *)(pbVar13 + 0x2c) = uVar2;
            pbStack_170 = pbVar6;
            pdb_1409baea0(&fStack_268,pbVar6,uStack_190,pbVar13,&UNK_143605288);
            fStack_308 = fStack_258;
            uStack_304 = uStack_254;
            uStack_300 = uStack_250;
            uStack_2fc = uStack_24c;
            uStack_318 = (undefined8 *)CONCAT44(fStack_264,fStack_268);
            uStack_310 = (code *)CONCAT44(uStack_25c,fStack_260);
            pdb_140b133a0(uStack_180,&uStack_318);
            if (uStack_178 != 0) {
              pub_1406abac0(pbStack_170,uStack_178,1);
            }
          }
          bVar10 = pdb_1408ffab0(&uStack_378);
          cVar9 = bVar10 - 2;
          if (bVar10 < 2) {
            cVar9 = '\x03';
          }
          if (cVar9 == '\x01') {
            *(undefined4 *)pbStack_128 = uStack_11c;
            *(undefined1 *)(uStack_130 + 0xfc) = 1;
            pdb_140a8a6f0();
            lVar20 = lStack_150;
            lVar24 = lStack_148;
          }
          else {
            lVar20 = lStack_150;
            lVar24 = lStack_148;
            if (cVar9 == '\x02') {
              fVar50 = pfVar22[7];
              fVar27 = (float)*(undefined8 *)(pfVar22 + 8);
              fVar49 = (float)((ulonglong)*(undefined8 *)(pfVar22 + 8) >> 0x20);
              fVar38 = *pfVar22;
              fVar46 = pfVar22[1];
              fVar47 = pfVar22[2];
              fVar48 = pfVar22[3];
              fVar39 = pfVar22[4];
              uVar3 = *(undefined8 *)(pfVar22 + 5);
              uStack_318 = &uStack_188;
              uStack_310 = pdb_140ed4b80;
              pdb_140f60760(&fStack_268,&UNK_1436052b8,&uStack_318);
              uStack_130 = CONCAT44(fStack_264,fStack_268);
              pbVar6 = (byte *)CONCAT44(uStack_25c,fStack_260);
              uVar4 = CONCAT44(uStack_254,fStack_258);
              pdb_14007ee60();
              pbVar13 = pub_1406abab0(0x20,8);
              if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x20);
              }
              fVar29 = fVar47 + fVar47;
              fVar43 = fVar46 + fVar46;
              fVar30 = (fVar38 + fVar38) * fVar48;
              fVar31 = (fVar38 + fVar38) * fVar38;
              fVar40 = (fVar43 * fVar38 - fVar48 * fVar29) * fVar27 * _DAT_143605260;
              fVar26 = (fVar7 - (fVar31 + fVar29 * fVar47)) * fVar27 * _UNK_143605264;
              fVar27 = (fVar29 * fVar46 + fVar30) * fVar27 * _UNK_143605268;
              pbVar13[0] = 1;
              pbVar13[1] = 0;
              pbVar13[2] = 0;
              pbVar13[3] = 0;
              pbVar13[4] = 0;
              pbVar13[5] = 0;
              pbVar13[6] = 0;
              pbVar13[7] = 0;
              pbVar13[8] = 1;
              pbVar13[9] = 0;
              pbVar13[10] = 0;
              pbVar13[0xb] = 0;
              pbVar13[0xc] = 0;
              pbVar13[0xd] = 0;
              pbVar13[0xe] = 0;
              pbVar13[0xf] = 0;
              *(ulonglong *)(pbVar13 + 0x10) =
                   CONCAT44((fVar48 * fVar29 + fVar43 * fVar38) * fVar50 * 0.0 + fVar26 +
                            (fVar29 * fVar46 - fVar30) * fVar49 * 0.0 + (float)uVar3,
                            (fVar7 - (fVar29 * fVar47 + fVar43 * fVar46)) * fVar50 * 0.0 + fVar40 +
                            (fVar29 * fVar38 + fVar43 * fVar48) * fVar49 * 0.0 + fVar39);
              *(float *)(pbVar13 + 0x18) =
                   (fVar29 * fVar38 - fVar43 * fVar48) * fVar50 * 0.0 + fVar27 +
                   (fVar7 - (fVar31 + fVar43 * fVar46)) * fVar49 * 0.0 +
                   (float)((ulonglong)uVar3 >> 0x20);
              pbStack_128 = pbVar6;
              pdb_1409baea0(&fStack_268,pbVar6,uVar4,pbVar13,&UNK_1436052c8);
              fStack_308 = fStack_258;
              uStack_304 = uStack_254;
              uStack_300 = uStack_250;
              uStack_2fc = uStack_24c;
              uStack_318 = (undefined8 *)CONCAT44(fStack_264,fStack_268);
              uStack_310 = (code *)CONCAT44(uStack_25c,fStack_260);
              pdb_140b133a0(uStack_180,&uStack_318);
              lVar24 = lStack_148;
              lVar20 = lStack_150;
              fVar48 = _UNK_143314dfc;
              fVar47 = _UNK_143314df8;
              fVar46 = _UNK_143314df4;
              fVar38 = _DAT_143314df0;
              fVar39 = _DAT_142e37900;
              fVar50 = _DAT_142e36f50;
              if (uStack_130 != 0) {
                pub_1406abac0(pbStack_128,uStack_130,1);
              }
            }
          }
        }
      }
      puStack_168 = (undefined8 *)(ulonglong)((int)puStack_168 + 1);
    } while( true );
  }
  return;
}

