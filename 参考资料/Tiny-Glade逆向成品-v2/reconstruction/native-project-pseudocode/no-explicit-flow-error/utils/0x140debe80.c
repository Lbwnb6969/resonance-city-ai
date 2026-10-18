// VA 0x140debe80, PDB extent 1738 bytes
// utils::natural_cubic::Spline2D::from_periodic_loop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::Spline2D::from_periodic_loop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 1738 */

undefined8 *
pdb_140debe80(undefined8 *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float *pfVar31;
  ulonglong uVar32;
  undefined4 *puVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (param_4 < 3) goto LAB_140dec442;
  uVar24 = param_4 * 4;
  puVar3 = *(ulonglong **)(param_2 + 0x10);
  uVar30 = puVar3[4] & 0xfffffffffffffffc;
  if ((uVar30 < *puVar3) || (uVar30 - *puVar3 <= uVar24 && uVar24 - (uVar30 - *puVar3) != 0)) {
    pfVar31 = (float *)pdb_142dc60a0(param_2,4,uVar24);
    if (pfVar31 != (float *)0x0) goto LAB_140debeea;
LAB_140dec43d:
    pdb_142dc6350();
LAB_140dec442:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ff278,0x23,&UNK_1431ff2a0);
  }
  pfVar31 = (float *)(uVar30 + param_4 * -4);
  puVar3[4] = (ulonglong)pfVar31;
LAB_140debeea:
  fVar35 = (float)param_3[1];
  fVar38 = (float)((ulonglong)param_3[1] >> 0x20);
  fVar34 = fVar35 - (float)*param_3;
  fVar37 = fVar38 - (float)((ulonglong)*param_3 >> 0x20);
  *pfVar31 = SQRT(fVar37 * fVar37 + fVar34 * fVar34);
  puVar20 = param_3 + 2;
  uVar30 = 1;
  do {
    if (param_4 == uVar30) goto LAB_140dec46b;
    if (puVar20 == param_3 + param_4) {
      puVar20 = param_3;
    }
    fVar34 = (float)*puVar20;
    fVar37 = (float)((ulonglong)*puVar20 >> 0x20);
    puVar20 = puVar20 + 1;
    fVar35 = fVar34 - fVar35;
    fVar38 = fVar37 - fVar38;
    pfVar31[uVar30] = SQRT(fVar38 * fVar38 + fVar35 * fVar35);
    uVar30 = uVar30 + 1;
    fVar35 = fVar34;
    fVar38 = fVar37;
  } while (param_4 != uVar30);
  uVar30 = param_4 * 4 + 4;
  puVar3 = *(ulonglong **)(param_2 + 0x10);
  uVar32 = puVar3[4] & 0xfffffffffffffffc;
  lStack_68 = param_2;
  if ((uVar32 < *puVar3) || (uVar32 - *puVar3 < uVar30)) {
    puVar33 = (undefined4 *)pdb_142dc60a0(param_2,4);
    if (puVar33 == (undefined4 *)0x0) goto LAB_140dec43d;
  }
  else {
    puVar33 = (undefined4 *)(uVar32 - uVar30);
    puVar3[4] = (ulonglong)puVar33;
  }
  uVar32 = 0;
  pub_142e32780(puVar33,0,uVar30);
  uVar30 = (ulonglong)((uint)param_4 & 3);
  if (param_4 == 3) {
    fVar35 = 0.0;
LAB_140dec015:
    uVar29 = 0;
    do {
      fVar35 = fVar35 + pfVar31[uVar32 + uVar29];
      puVar33[uVar32 + uVar29 + 1] = fVar35;
      uVar29 = uVar29 + 1;
    } while (uVar30 != uVar29);
  }
  else {
    fVar35 = 0.0;
    uVar32 = 0;
    do {
      fVar38 = pfVar31[uVar32];
      puVar33[uVar32 + 1] = fVar35 + fVar38;
      fVar35 = fVar35 + fVar38 + pfVar31[uVar32 + 1];
      puVar33[uVar32 + 2] = fVar35;
      fVar35 = fVar35 + pfVar31[uVar32 + 2];
      puVar33[uVar32 + 3] = fVar35;
      fVar35 = fVar35 + pfVar31[uVar32 + 3];
      puVar33[uVar32 + 4] = fVar35;
      uVar32 = uVar32 + 4;
    } while ((param_4 & 0xffffffffffffffc) != uVar32);
    if (uVar30 != 0) goto LAB_140dec015;
  }
  puVar3 = *(ulonglong **)(lStack_68 + 0x10);
  uVar30 = puVar3[4] & 0xfffffffffffffffc;
  if ((uVar30 < *puVar3) || (uVar30 - *puVar3 <= uVar24 && uVar24 - (uVar30 - *puVar3) != 0)) {
    uVar30 = pdb_142dc60a0(lStack_68,4);
    if (uVar30 == 0) goto LAB_140dec43d;
  }
  else {
    uVar30 = uVar30 + param_4 * -4;
    puVar3[4] = uVar30;
  }
  auVar14 = _DAT_142e3c640;
  uVar24 = param_4 - 1;
  if (param_4 < param_4 - 1) {
    uVar24 = param_4;
  }
  uVar32 = 0;
  pfVar21 = pfVar31;
  if ((3 < uVar24) && (0xf < uVar30 - (longlong)pfVar31)) {
    uVar24 = uVar24 + 1;
    uVar32 = 4;
    if ((uVar24 & 3) != 0) {
      uVar32 = (ulonglong)((uint)uVar24 & 3);
    }
    uVar32 = uVar24 - uVar32;
    pfVar21 = pfVar31 + uVar32;
    uVar24 = 0;
    do {
      auVar36 = divps(auVar14,*(undefined1 (*) [16])(pfVar31 + uVar24));
      *(undefined1 (*) [16])(uVar30 + uVar24 * 4) = auVar36;
      uVar24 = uVar24 + 4;
    } while (uVar32 != uVar24);
  }
  fVar35 = _DAT_142e36f28;
  do {
    if (pfVar21 == pfVar31 + param_4) {
LAB_140dec46b:
      pdb_142dc8110(&UNK_1431ff328,0x22,&UNK_1431ff3a8);
      pcVar4 = (code *)swi(3);
      puVar20 = (undefined8 *)(*pcVar4)();
      return puVar20;
    }
    fVar38 = *pfVar21;
    pfVar21 = pfVar21 + 1;
    *(float *)(uVar30 + uVar32 * 4) = fVar35 / fVar38;
    uVar32 = uVar32 + 1;
  } while (param_4 != uVar32);
  lStack_88 = 4;
  lStack_80 = lStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  pdb_141e39310(&lStack_88,0,param_4,1);
  puVar20 = param_3;
  do {
    uVar1 = *(undefined4 *)puVar20;
    if (uStack_70 == uStack_78) {
      pdb_141e39310(&lStack_88,uStack_70,1,1);
    }
    uVar24 = uStack_78;
    lVar16 = lStack_80;
    lVar15 = lStack_88;
    puVar20 = puVar20 + 1;
    *(undefined4 *)(lStack_88 + uStack_70 * 4) = uVar1;
    uVar32 = uStack_70 + 1;
    uStack_70 = uVar32;
  } while (puVar20 != param_3 + param_4);
  puVar25 = puVar33;
  lVar17 = pdb_140deb3d0(lStack_68,puVar33,param_4 + 1,pfVar31,param_4,uVar30,param_4,lStack_88,
                         uVar32);
  uVar29 = uVar32;
  if (param_4 < uVar32) {
    uVar29 = param_4;
  }
  if (uVar32 != 0) {
    if (uVar29 < 9) {
      uVar22 = 0;
    }
    else {
      uVar22 = 8;
      if ((uVar29 & 7) != 0) {
        uVar22 = (ulonglong)((uint)uVar29 & 7);
      }
      uVar22 = uVar29 - uVar22;
      uVar26 = 0;
      do {
        puVar27 = (undefined4 *)((longlong)param_3 + uVar26 * 8 + 4);
        uVar1 = puVar27[2];
        puVar19 = (undefined4 *)((longlong)param_3 + uVar26 * 8 + 0x14);
        uVar2 = *puVar19;
        uVar5 = puVar19[2];
        puVar19 = (undefined4 *)((longlong)param_3 + uVar26 * 8 + 0x24);
        uVar6 = *puVar19;
        uVar7 = puVar19[2];
        puVar19 = (undefined4 *)((longlong)param_3 + uVar26 * 8 + 0x34);
        uVar8 = *puVar19;
        uVar9 = puVar19[2];
        puVar19 = (undefined4 *)(lVar15 + uVar26 * 4);
        *puVar19 = *puVar27;
        puVar19[1] = uVar1;
        puVar19[2] = uVar2;
        puVar19[3] = uVar5;
        puVar19 = (undefined4 *)(lVar15 + 0x10 + uVar26 * 4);
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
        puVar19[2] = uVar8;
        puVar19[3] = uVar9;
        uVar26 = uVar26 + 8;
      } while (uVar22 != uVar26);
    }
    do {
      *(undefined4 *)(lVar15 + uVar22 * 4) = *(undefined4 *)((longlong)param_3 + uVar22 * 8 + 4);
      uVar22 = uVar22 + 1;
    } while (uVar29 != uVar22);
  }
  puVar19 = puVar33;
  lVar18 = pdb_140deb3d0(lStack_68,puVar33,param_4 + 1,pfVar31,param_4,uVar30,param_4,lVar15,uVar32)
  ;
  if (puVar19 < puVar25) {
    puVar25 = puVar19;
  }
  if ((undefined4 *)0x2e8ba2e8ba2e8ba < puVar25) {
    pdb_142dc6350();
LAB_140dec469:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar3 = *(ulonglong **)(lStack_68 + 0x10);
  uVar30 = puVar3[4] & 0xfffffffffffffffc;
  if ((uVar30 < *puVar3) ||
     (uVar30 - *puVar3 <= (ulonglong)((longlong)puVar25 * 0x2c) &&
      (longlong)puVar25 * 0x2c - (uVar30 - *puVar3) != 0)) {
    puVar19 = (undefined4 *)pdb_142dc60a0(lStack_68,4);
    if (puVar19 == (undefined4 *)0x0) {
      pdb_142dc6350();
      goto LAB_140dec469;
    }
  }
  else {
    puVar19 = (undefined4 *)(uVar30 + (longlong)puVar25 * -0x2c);
    puVar3[4] = (ulonglong)puVar19;
  }
  if (puVar25 != (undefined4 *)0x0) {
    lVar23 = 0;
    puVar27 = puVar25;
    puVar28 = puVar19;
    do {
      uVar1 = *(undefined4 *)(lVar17 + 0x10 + lVar23);
      uVar10 = *(undefined8 *)(lVar17 + lVar23);
      uVar11 = ((undefined8 *)(lVar17 + lVar23))[1];
      uVar12 = *(undefined8 *)(lVar18 + lVar23);
      uVar13 = ((undefined8 *)(lVar18 + lVar23))[1];
      uVar2 = *(undefined4 *)(lVar18 + 0x10 + lVar23);
      *puVar28 = *(undefined4 *)(lVar17 + 0x10 + lVar23);
      *(undefined8 *)(puVar28 + 1) = uVar10;
      *(undefined8 *)(puVar28 + 3) = uVar11;
      puVar28[5] = uVar1;
      *(undefined8 *)(puVar28 + 6) = uVar12;
      *(undefined8 *)(puVar28 + 8) = uVar13;
      puVar28[10] = uVar2;
      puVar28 = puVar28 + 0xb;
      lVar23 = lVar23 + 0x14;
      puVar27 = (undefined4 *)((longlong)puVar27 + -1);
    } while (puVar27 != (undefined4 *)0x0);
  }
  uVar1 = *puVar33;
  uVar2 = puVar33[param_4];
  *param_1 = puVar19;
  param_1[1] = puVar25;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 3) = 1;
  if (uVar24 != 0) {
    lVar17 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x20);
    if (lVar17 == lVar15) {
      *(ulonglong *)(*(longlong *)(lVar16 + 0x10) + 0x20) = lVar17 + uVar24 * 4;
    }
  }
  return param_1;
}

