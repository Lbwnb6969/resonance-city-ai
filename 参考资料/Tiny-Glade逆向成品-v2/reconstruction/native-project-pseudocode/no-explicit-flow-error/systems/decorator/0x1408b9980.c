// VA 0x1408b9980, PDB extent 5249 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::queue_wooden_railing_cells
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::queue_wooden_railing_cells
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 5249 */

void pdb_1408b9980(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5,undefined8 *param_6,ulonglong param_7,uint *param_8,float *param_9)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar40;
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  float *pfStack_170;
  uint *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  ulonglong uStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  float *pfStack_128;
  ulonglong uStack_120;
  float *pfStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  undefined4 *puStack_100;
  float *pfStack_f8;
  undefined8 uStack_f0;
  
  fVar15 = _DAT_142e36f28;
  fVar14 = _DAT_142e36f24;
  uStack_f0 = 0xfffffffffffffffe;
  puStack_168 = param_8;
  lStack_140 = 0;
  uStack_138 = 8;
  lStack_130 = 0;
  puVar1 = (undefined8 *)((longlong)param_6 + param_7 * 0xc);
  fVar9 = *(float *)(&UNK_143015930 + (ulonglong)(param_5 == '\x02') * 4);
  uStack_178 = param_1;
  uStack_15c = param_3;
  uStack_158 = param_2;
  uStack_154 = param_4;
LAB_1408b9aa5:
  uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  pfStack_170 = param_9;
  if (param_9 < (float *)0x2) {
    uStack_160 = 0x3e20c49c;
    lStack_108 = uStack_138 + lStack_130 * 0x18;
    uStack_120 = uStack_138;
    pfStack_118 = (float *)uStack_138;
    uStack_110 = lStack_140;
    puStack_100 = &uStack_160;
    pdb_1414948b0(auStack_190,&uStack_120);
    pdb_1408b13e0(uStack_178,uStack_158,uStack_15c,auStack_190,CONCAT44(uVar40,uStack_154));
    return;
  }
  fVar27 = (float)puStack_168[1];
  uVar21 = (ulonglong)*puStack_168;
  uVar22 = (ulonglong)puStack_168[2];
  fVar3 = (float)puStack_168[3];
  uStack_120 = 0;
  pfStack_118 = (float *)0x4;
  uStack_110 = 0;
  if (param_7 <= uVar21) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar21,param_7,&UNK_143015a40);
  }
  uVar23 = uVar21 + 1;
  if (param_7 <= uVar23) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar23,param_7,&UNK_143015a40);
  }
  fVar4 = *(float *)((longlong)param_6 + uVar21 * 0xc + 8);
  uVar29 = *(undefined8 *)((longlong)param_6 + uVar21 * 0xc);
  uVar8 = *(undefined8 *)((longlong)param_6 + uVar23 * 0xc);
  fVar38 = *(float *)((longlong)param_6 + uVar23 * 0xc + 8);
  pdb_142db7820(&uStack_120);
  pfStack_f8 = (float *)((longlong)pfStack_170 + -1);
  puStack_168 = puStack_168 + 2;
  fVar37 = (float)uVar29;
  fVar28 = (float)((ulonglong)uVar29 >> 0x20);
  *(ulonglong *)pfStack_118 =
       CONCAT44(fVar27 * ((float)((ulonglong)uVar8 >> 0x20) - fVar28) + fVar28,
                fVar27 * ((float)uVar8 - fVar37) + fVar37);
  pfStack_118[2] = (fVar38 - fVar4) * fVar27 + fVar4;
  uStack_110 = 1;
  uVar21 = uVar22 + 1;
  lVar26 = 0;
  puVar25 = param_6;
  do {
    uVar16 = uStack_110;
    if (uVar23 == 0) {
      if ((uVar21 == 0) || (puVar25 == puVar1)) break;
      uVar21 = uVar21 - 1;
      puVar13 = puVar25;
    }
    else {
      if ((uVar21 <= uVar23) ||
         (((ulonglong)((longlong)puVar1 - (longlong)puVar25) >> 2) * -0x5555555555555555 <= uVar23))
      break;
      uVar21 = uVar21 + ~uVar23;
      puVar13 = (undefined8 *)((longlong)puVar25 + uVar23 * 0xc);
    }
    puVar25 = (undefined8 *)((longlong)puVar13 + 0xc);
    if (uStack_110 == uStack_120) {
      if (uVar21 == 0) {
        lVar24 = 1;
      }
      else {
        uVar23 = ((ulonglong)((longlong)puVar1 - (longlong)puVar25) >> 2) * -0x5555555555555555;
        if (uVar21 < uVar23) {
          uVar23 = uVar21;
        }
        lVar24 = uVar23 + 1;
      }
      in_stack_fffffffffffffe68 = 0;
      pdb_142d7f1b0(&uStack_120,uStack_110,lVar24,4,0xc);
    }
    pfStack_118[uVar16 * 3 + 2] = *(float *)(puVar13 + 1);
    *(undefined8 *)(pfStack_118 + uVar16 * 3) = *puVar13;
    uStack_110 = uVar16 + 1;
    lVar26 = lVar26 + 1;
    uVar23 = 0;
  } while( true );
  if (param_7 <= uVar22) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar22,param_7,&UNK_143015a58);
  }
  uVar21 = uVar22 + 1;
  if (param_7 <= uVar21) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar21,param_7,&UNK_143015a58);
  }
  fVar27 = *(float *)((longlong)param_6 + uVar22 * 0xc + 8);
  fVar4 = *(float *)((longlong)param_6 + uVar21 * 0xc + 8);
  uVar29 = *(undefined8 *)((longlong)param_6 + uVar22 * 0xc);
  fVar38 = (float)uVar29;
  fVar37 = (float)((ulonglong)uVar29 >> 0x20);
  uVar29 = *(undefined8 *)((longlong)param_6 + uVar21 * 0xc);
  if (uStack_110 == uStack_120) {
    pdb_142db7820(&uStack_120);
  }
  param_9 = pfStack_f8;
  *(ulonglong *)(pfStack_118 + uVar16 * 3) =
       CONCAT44(fVar3 * ((float)((ulonglong)uVar29 >> 0x20) - fVar37) + fVar37,
                fVar3 * ((float)uVar29 - fVar38) + fVar38);
  pfStack_118[uVar16 * 3 + 2] = (fVar4 - fVar27) * fVar3 + fVar27;
  uVar29 = _DAT_143015950;
  fVar37 = _UNK_14301594c;
  fVar38 = _UNK_143015948;
  fVar4 = _UNK_143015944;
  fVar3 = _DAT_143015940;
  fVar27 = _DAT_143009d64;
  uStack_110 = uVar16 + 1;
  pfVar18 = pfStack_118 + 5;
  pfVar17 = pfStack_118 + 6;
  uVar21 = 0;
  while( true ) {
    fVar28 = (float)*(undefined8 *)(pfVar18 + -2) - (float)*(undefined8 *)(pfVar18 + -5);
    fVar30 = (float)((ulonglong)*(undefined8 *)(pfVar18 + -2) >> 0x20) -
             (float)((ulonglong)*(undefined8 *)(pfVar18 + -5) >> 0x20);
    uVar21 = uVar21 + 1;
    fVar39 = (float)((ulonglong)_DAT_143015950 >> 0x20);
    if ((*pfVar18 - pfVar18[-3]) * (*pfVar18 - pfVar18[-3]) + fVar30 * fVar30 + fVar28 * fVar28 <
        fVar14) break;
    pfVar18 = pfVar18 + 3;
    pfVar17 = pfVar17 + 3;
    lVar26 = lVar26 + -1;
    if (uVar16 == uVar21) goto LAB_1408b9e79;
  }
  uStack_110 = uVar21;
  if (uVar21 < uVar16) {
    do {
      if (fVar14 <= (pfVar17[2] - pfStack_118[uVar21 * 3 + -1]) *
                    (pfVar17[2] - pfStack_118[uVar21 * 3 + -1]) +
                    (pfVar17[1] - pfStack_118[uVar21 * 3 + -2]) *
                    (pfVar17[1] - pfStack_118[uVar21 * 3 + -2]) +
                    (*pfVar17 - pfStack_118[uVar21 * 3 + -3]) *
                    (*pfVar17 - pfStack_118[uVar21 * 3 + -3])) {
        (pfStack_118 + uVar21 * 3)[2] = pfVar17[2];
        *(undefined8 *)(pfStack_118 + uVar21 * 3) = *(undefined8 *)pfVar17;
        uVar21 = uVar21 + 1;
      }
      pfVar17 = pfVar17 + 3;
      lVar26 = lVar26 + -1;
      uStack_110 = uVar21;
    } while (lVar26 != 0);
  }
  uVar21 = uStack_120;
  pfVar18 = pfStack_118;
  if (1 < uStack_110) {
LAB_1408b9e79:
    fVar28 = (float)uVar29;
    pfVar18 = pfStack_118 + uStack_110 * 3;
    if (pfVar18 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143015a70);
    }
    if (uStack_110 == 2) {
      uVar22 = 2;
LAB_1408ba0aa:
      fVar27 = pfStack_118[2] - pfStack_118[5];
      uVar29 = *(undefined8 *)(pfStack_118 + 3);
      fVar30 = (float)*(undefined8 *)pfStack_118 - (float)uVar29;
      fVar35 = (float)((ulonglong)*(undefined8 *)pfStack_118 >> 0x20) -
               (float)((ulonglong)uVar29 >> 0x20);
      fVar27 = SQRT(fVar27 * fVar27 + fVar35 * fVar35 + fVar30 * fVar30);
      if (uVar22 != 2) {
        pfVar17 = pfStack_118 + 6;
        fVar30 = pfStack_118[5];
        do {
          pfVar19 = pfVar17 + 2;
          uVar8 = *(undefined8 *)pfVar17;
          pfVar17 = pfVar17 + 3;
          fVar30 = fVar30 - *pfVar19;
          fVar35 = (float)uVar29 - (float)uVar8;
          fVar31 = (float)((ulonglong)uVar29 >> 0x20) - (float)((ulonglong)uVar8 >> 0x20);
          fVar27 = fVar27 + SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar35 * fVar35);
          uVar29 = uVar8;
          fVar30 = *pfVar19;
        } while (pfVar17 != pfVar18);
      }
      if (fVar27 < _DAT_143015938) goto LAB_1408ba13b;
      uStack_150 = uStack_120;
      pfVar18 = pfStack_118;
    }
    else {
      fVar30 = pfStack_118[3];
      fVar35 = pfStack_118[5];
      fVar31 = SQRT((pfStack_118[2] - fVar35) * (pfStack_118[2] - fVar35) +
                    (*pfStack_118 - fVar30) * (*pfStack_118 - fVar30));
      uVar21 = uStack_110 * 0xc - 0x24;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      if ((SUB164(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
        pfVar17 = pfStack_118 + 9;
        fVar32 = pfStack_118[6];
        fVar33 = pfStack_118[8];
        fVar31 = fVar31 + SQRT((fVar35 - fVar33) * (fVar35 - fVar33) +
                               (fVar30 - fVar32) * (fVar30 - fVar32));
      }
      else {
        pfVar17 = pfStack_118 + 6;
        fVar32 = fVar30;
        fVar33 = fVar35;
      }
      if (0xb < uVar21) {
        do {
          fVar30 = fVar32 - *pfVar17;
          fVar35 = fVar33 - pfVar17[2];
          fVar32 = pfVar17[3];
          fVar33 = pfVar17[5];
          fVar36 = *pfVar17 - fVar32;
          fVar34 = pfVar17[2] - fVar33;
          fVar31 = SQRT(fVar34 * fVar34 + fVar36 * fVar36) +
                   SQRT(fVar35 * fVar35 + fVar30 * fVar30) + fVar31;
          pfVar17 = pfVar17 + 6;
        } while (pfVar17 != pfVar18);
      }
      fVar30 = pfStack_118[1];
      fVar35 = pfVar18[-2];
      fVar32 = 0.0;
      lVar26 = 0x14;
      uVar21 = 0;
      do {
        if (uStack_110 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar21,uStack_110,&UNK_143015ab8);
        }
        uVar21 = uVar21 + 1;
        if (uStack_110 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar21,uStack_110,&UNK_143015ad0);
        }
        fVar33 = *(float *)((longlong)pfStack_118 + lVar26 + -0x14) -
                 *(float *)((longlong)pfStack_118 + lVar26 + -8);
        fVar36 = *(float *)((longlong)pfStack_118 + lVar26 + -0xc) -
                 *(float *)((longlong)pfStack_118 + lVar26);
        fVar32 = fVar32 + SQRT(fVar36 * fVar36 + fVar33 * fVar33);
        if (fVar27 < fVar31) {
          fVar33 = fVar32 / fVar31;
        }
        else {
          fVar33 = (float)uVar21 / (float)(longlong)(uStack_110 - 1);
        }
        *(float *)((longlong)pfStack_118 + lVar26 + -4) =
             fVar33 * fVar35 + (fVar15 - fVar33) * fVar30;
        lVar26 = lVar26 + 0xc;
      } while (uStack_110 - 2 != uVar21);
      if (1 < uStack_110) {
        pfVar18 = pfStack_118 + uStack_110 * 3;
        uVar22 = uStack_110;
        goto LAB_1408ba0aa;
      }
LAB_1408ba13b:
      pdb_14007ee60();
      pfVar18 = (float *)pub_1406abab0(0x18,4);
      if (pfVar18 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      if (uStack_110 == 0) {
        pfStack_f8 = pfVar18;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143015a88);
      }
      if (pfStack_118 + uStack_110 * 3 + -3 == (float *)0x0) {
        pfStack_f8 = pfVar18;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143015aa0);
      }
      pfVar18[5] = pfStack_118[uStack_110 * 3 + -1];
      *(undefined8 *)(pfVar18 + 3) = *(undefined8 *)(pfStack_118 + uStack_110 * 3 + -3);
      pfVar18[2] = pfStack_118[2];
      *(undefined8 *)pfVar18 = *(undefined8 *)pfStack_118;
      if (uStack_120 != 0) {
        pub_1406abac0((byte *)pfStack_118,uStack_120 * 0xc,4);
      }
      uStack_150 = 2;
      uVar22 = 2;
    }
    uVar21 = uVar22 * 0xc;
    pfVar17 = pfVar18 + uVar22 * 3;
    pfStack_f8 = pfVar18;
    if (pfVar17 == (float *)0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143015c38);
    }
    fVar27 = pfVar18[3];
    fVar30 = pfVar18[5];
    fVar35 = SQRT((pfVar18[2] - fVar30) * (pfVar18[2] - fVar30) +
                  (*pfVar18 - fVar27) * (*pfVar18 - fVar27));
    if (uVar22 != 2) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar21 - 0x24;
      if ((SUB164(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
        pfVar19 = pfVar18 + 9;
        fVar31 = pfVar18[6];
        fVar32 = pfVar18[8];
        fVar35 = fVar35 + SQRT((fVar30 - fVar32) * (fVar30 - fVar32) +
                               (fVar27 - fVar31) * (fVar27 - fVar31));
      }
      else {
        pfVar19 = pfVar18 + 6;
        fVar31 = fVar27;
        fVar32 = fVar30;
      }
      if (0xb < uVar21 - 0x24) {
        do {
          fVar27 = fVar31 - *pfVar19;
          fVar30 = fVar32 - pfVar19[2];
          fVar31 = pfVar19[3];
          fVar32 = pfVar19[5];
          fVar33 = *pfVar19 - fVar31;
          fVar36 = pfVar19[2] - fVar32;
          fVar35 = SQRT(fVar36 * fVar36 + fVar33 * fVar33) +
                   SQRT(fVar30 * fVar30 + fVar27 * fVar27) + fVar35;
          pfVar19 = pfVar19 + 6;
        } while (pfVar19 != pfVar17);
      }
    }
    uStack_148 = uVar21;
    if ((param_5 == '\x02') ||
       ((float)((uint)(pfVar18[1] - pfVar17[-2]) & _DAT_142e377e0) / fVar35 < _DAT_14300a33c)) {
      pdb_14007ee60();
      pfVar19 = (float *)pub_1406abab0(uVar21,4);
      lVar26 = lStack_130;
      if (pfVar19 == (float *)0x0) {
        pdb_142dc7e2a(4,uVar21);
        goto LAB_1408ba8c2;
      }
      if ((uVar22 < 4) || ((pfVar19 < pfVar17 && (pfVar18 < pfVar19 + uVar22 * 3)))) {
        uVar21 = 0;
LAB_1408ba356:
        uVar23 = uVar21;
        if ((uVar22 & 1) != 0) {
          fVar27 = pfVar18[uVar21 * 3 + 2];
          *(ulonglong *)(pfVar19 + uVar21 * 3) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar18 + uVar21 * 3) >> 0x20) + fVar9,
                        (float)*(undefined8 *)(pfVar18 + uVar21 * 3) + 0.0);
          pfVar19[uVar21 * 3 + 2] = fVar27 + 0.0;
          uVar23 = uVar21 | 1;
        }
        if (uVar22 != (uVar21 | 1)) {
          lVar20 = uVar22 - uVar23;
          lVar24 = uVar23 * 0xc + 0x14;
          do {
            fVar27 = *(float *)((longlong)pfVar18 + lVar24 + -0xc);
            uVar29 = *(undefined8 *)((longlong)pfVar18 + lVar24 + -0x14);
            *(ulonglong *)((longlong)pfVar19 + lVar24 + -0x14) =
                 CONCAT44((float)((ulonglong)uVar29 >> 0x20) + fVar9,(float)uVar29 + 0.0);
            *(float *)((longlong)pfVar19 + lVar24 + -0xc) = fVar27 + 0.0;
            fVar27 = *(float *)((longlong)pfVar18 + lVar24);
            uVar29 = *(undefined8 *)((longlong)pfVar18 + lVar24 + -8);
            *(ulonglong *)((longlong)pfVar19 + lVar24 + -8) =
                 CONCAT44((float)((ulonglong)uVar29 >> 0x20) + fVar9,(float)uVar29 + 0.0);
            *(float *)((longlong)pfVar19 + lVar24) = fVar27 + 0.0;
            lVar24 = lVar24 + 0x18;
            lVar20 = lVar20 + -2;
          } while (lVar20 != 0);
        }
      }
      else {
        uVar21 = uVar22 & 0xffffffffffffffc;
        lVar24 = 0;
        uVar23 = uVar21;
        do {
          fVar27 = *(float *)((longlong)pfVar18 + lVar24 + 0x24);
          fVar30 = *(float *)((longlong)pfVar18 + lVar24 + 0x18);
          fVar35 = *(float *)((longlong)pfVar18 + lVar24);
          fVar31 = *(float *)((longlong)pfVar18 + lVar24 + 4);
          fVar32 = *(float *)((longlong)pfVar18 + lVar24 + 8);
          fVar33 = *(float *)((longlong)pfVar18 + lVar24 + 0xc);
          fVar36 = *(float *)((longlong)pfVar18 + lVar24 + 0x28);
          fVar34 = *(float *)((longlong)pfVar18 + lVar24 + 0x1c);
          fVar5 = *(float *)((longlong)pfVar18 + lVar24 + 0x2c);
          fVar6 = *(float *)((longlong)pfVar18 + lVar24 + 0x20);
          fVar7 = *(float *)((longlong)pfVar18 + lVar24 + 0x14);
          pfVar2 = (float *)((longlong)pfVar19 + lVar24 + 0x10);
          *pfVar2 = *(float *)((longlong)pfVar18 + lVar24 + 0x10) + fVar9;
          pfVar2[1] = fVar7 + 0.0;
          pfVar2[2] = fVar30 + 0.0;
          pfVar2[3] = fVar34 + fVar9;
          pfVar2 = (float *)((longlong)pfVar19 + lVar24);
          *pfVar2 = fVar35 + 0.0;
          pfVar2[1] = fVar31 + fVar9;
          pfVar2[2] = fVar32 + 0.0;
          pfVar2[3] = fVar33 + 0.0;
          pfVar2 = (float *)((longlong)pfVar19 + lVar24 + 0x20);
          *pfVar2 = fVar6 + 0.0;
          pfVar2[1] = fVar27 + 0.0;
          pfVar2[2] = fVar36 + fVar9;
          pfVar2[3] = fVar5 + 0.0;
          lVar24 = lVar24 + 0x30;
          uVar23 = uVar23 - 4;
        } while (uVar23 != 0);
        if (uVar22 != uVar21) goto LAB_1408ba356;
      }
      pfStack_128 = pfVar19;
      if (lStack_130 == lStack_140) {
        pdb_142d7e830(&lStack_140);
      }
      lStack_130 = lVar26 + 1;
      *(ulonglong *)(uStack_138 + lVar26 * 0x18) = uVar22;
      *(float **)(uStack_138 + 8 + lVar26 * 0x18) = pfStack_128;
      *(ulonglong *)(uStack_138 + 0x10 + lVar26 * 0x18) = uVar22;
      uVar21 = uStack_150;
      pfVar18 = pfStack_f8;
      if (param_5 == '\x02') goto joined_r0x0001408b9a8a;
    }
    pfVar18 = pfStack_f8;
    uVar21 = uStack_148;
    pdb_14007ee60();
    pfVar19 = (float *)pub_1406abab0(uVar21,4);
    lVar26 = lStack_130;
    if (pfVar19 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar21);
LAB_1408ba8c2:
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    if ((uVar22 < 4) || ((pfVar19 < pfVar17 && (pfVar18 < (float *)((longlong)pfVar19 + uVar21)))))
    {
      uVar21 = 0;
LAB_1408ba55b:
      uVar23 = uVar21;
      if ((uVar22 & 1) != 0) {
        fVar27 = pfVar18[uVar21 * 3 + 2];
        *(ulonglong *)(pfVar19 + uVar21 * 3) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar18 + uVar21 * 3) >> 0x20) + fVar39,
                      (float)*(undefined8 *)(pfVar18 + uVar21 * 3) + fVar28);
        pfVar19[uVar21 * 3 + 2] = fVar27 + 0.0;
        uVar23 = uVar21 | 1;
      }
      if (uVar22 != (uVar21 | 1)) {
        lVar20 = uVar22 - uVar23;
        lVar24 = uVar23 * 0xc + 0x14;
        do {
          fVar27 = *(float *)((longlong)pfVar18 + lVar24 + -0xc);
          uVar29 = *(undefined8 *)((longlong)pfVar18 + lVar24 + -0x14);
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -0x14) =
               CONCAT44((float)((ulonglong)uVar29 >> 0x20) + fVar39,(float)uVar29 + fVar28);
          *(float *)((longlong)pfVar19 + lVar24 + -0xc) = fVar27 + 0.0;
          fVar27 = *(float *)((longlong)pfVar18 + lVar24);
          uVar29 = *(undefined8 *)((longlong)pfVar18 + lVar24 + -8);
          *(ulonglong *)((longlong)pfVar19 + lVar24 + -8) =
               CONCAT44((float)((ulonglong)uVar29 >> 0x20) + fVar39,(float)uVar29 + fVar28);
          *(float *)((longlong)pfVar19 + lVar24) = fVar27 + 0.0;
          lVar24 = lVar24 + 0x18;
          lVar20 = lVar20 + -2;
        } while (lVar20 != 0);
      }
    }
    else {
      uVar21 = uVar22 & 0xffffffffffffffc;
      lVar24 = 0;
      uVar23 = uVar21;
      do {
        fVar27 = *(float *)((longlong)pfVar18 + lVar24 + 0x2c);
        fVar30 = *(float *)((longlong)pfVar18 + lVar24 + 0x20);
        fVar35 = *(float *)((longlong)pfVar18 + lVar24 + 0x14);
        fVar31 = *(float *)((longlong)pfVar18 + lVar24);
        fVar32 = *(float *)((longlong)pfVar18 + lVar24 + 4);
        fVar33 = *(float *)((longlong)pfVar18 + lVar24 + 8);
        fVar36 = *(float *)((longlong)pfVar18 + lVar24 + 0xc);
        fVar34 = *(float *)((longlong)pfVar18 + lVar24 + 0x28);
        fVar5 = *(float *)((longlong)pfVar18 + lVar24 + 0x1c);
        fVar6 = *(float *)((longlong)pfVar18 + lVar24 + 0x24);
        fVar7 = *(float *)((longlong)pfVar18 + lVar24 + 0x18);
        pfVar17 = (float *)((longlong)pfVar19 + lVar24 + 0x10);
        *pfVar17 = *(float *)((longlong)pfVar18 + lVar24 + 0x10) + fVar4;
        pfVar17[1] = fVar35 + 0.0;
        pfVar17[2] = fVar7 + 0.0;
        pfVar17[3] = fVar5 + fVar38;
        pfVar17 = (float *)((longlong)pfVar19 + lVar24);
        *pfVar17 = fVar31 + 0.0;
        pfVar17[1] = fVar32 + fVar3;
        pfVar17[2] = fVar33 + 0.0;
        pfVar17[3] = fVar36 + 0.0;
        pfVar17 = (float *)((longlong)pfVar19 + lVar24 + 0x20);
        *pfVar17 = fVar30 + 0.0;
        pfVar17[1] = fVar6 + 0.0;
        pfVar17[2] = fVar34 + fVar37;
        pfVar17[3] = fVar27 + 0.0;
        lVar24 = lVar24 + 0x30;
        uVar23 = uVar23 - 4;
      } while (uVar23 != 0);
      if (uVar22 != uVar21) goto LAB_1408ba55b;
    }
    pfStack_128 = pfVar19;
    if (lStack_130 == lStack_140) {
      pdb_142d7e830(&lStack_140);
    }
    *(ulonglong *)(uStack_138 + lVar26 * 0x18) = uVar22;
    *(float **)(uStack_138 + 8 + lVar26 * 0x18) = pfStack_128;
    *(ulonglong *)(uStack_138 + 0x10 + lVar26 * 0x18) = uVar22;
    lStack_130 = lVar26 + 1;
    uVar21 = uStack_150;
    pfVar18 = pfStack_f8;
  }
joined_r0x0001408b9a8a:
  if (uVar21 != 0) {
    pub_1406abac0((byte *)pfVar18,uVar21 * 0xc,4);
  }
  goto LAB_1408b9aa5;
}

