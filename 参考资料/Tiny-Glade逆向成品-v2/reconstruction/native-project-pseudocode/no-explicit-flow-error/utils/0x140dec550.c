// VA 0x140dec550, PDB extent 2122 bytes
// utils::natural_cubic::Spline2D::from_control_points_with_tangents
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::Spline2D::from_control_points_with_tangents
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 2122 */

undefined8 *
pdb_140dec550(undefined8 *param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  float *pfVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined4 *puVar37;
  ulonglong uVar38;
  float *pfVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar46;
  undefined1 auVar45 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (param_4 < 2) goto LAB_140decc90;
  uVar30 = param_4 * 4 - 4;
  puVar25 = *(ulonglong **)(param_2 + 0x10);
  uVar38 = puVar25[4] & 0xfffffffffffffffc;
  if ((uVar38 < *puVar25) || (uVar38 - *puVar25 < uVar30)) {
    pfVar39 = (float *)pdb_142dc60a0(param_2,4,uVar30);
    if (pfVar39 != (float *)0x0) goto LAB_140dec5c0;
LAB_140decc8b:
    pdb_142dc6350();
LAB_140decc90:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ff2b8,0x23,&UNK_1431ff2e0);
  }
  pfVar39 = (float *)(uVar38 - uVar30);
  puVar25[4] = (ulonglong)pfVar39;
LAB_140dec5c0:
  uVar38 = param_4 - 1;
  uVar26 = param_3[1];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar26;
  fVar44 = (float)uVar26 - (float)*param_3;
  fVar46 = (float)(uVar26 >> 0x20) - (float)(*param_3 >> 0x20);
  *pfVar39 = SQRT(fVar46 * fVar46 + fVar44 * fVar44);
  if (uVar38 != 1) {
    puVar25 = param_3 + 2;
    uVar36 = param_4 * 8 - 0x10 >> 3;
    if (param_4 - 3 <= uVar36) {
      uVar36 = param_4 - 3;
    }
    lVar19 = 1;
    if (3 < uVar36) {
      uVar36 = uVar36 + 1;
      uVar20 = 4;
      if ((uVar36 & 3) != 0) {
        uVar20 = (ulonglong)((uint)uVar36 & 3);
      }
      lVar21 = uVar36 - uVar20;
      lVar19 = lVar21 + 1;
      auVar45._8_8_ = uVar26;
      auVar45._0_8_ = uVar26;
      lVar35 = 0;
      fVar44 = (float)uVar26;
      do {
        pfVar27 = (float *)(puVar25 + lVar35);
        fVar6 = pfVar27[1];
        fVar7 = pfVar27[3];
        auVar41 = *(undefined1 (*) [16])(param_3 + lVar35 + 4);
        fVar46 = auVar41._4_4_;
        fVar4 = auVar41._8_4_;
        fVar5 = auVar41._12_4_;
        fVar44 = *pfVar27 - fVar44;
        fVar47 = pfVar27[2] - *pfVar27;
        fVar48 = auVar41._0_4_ - pfVar27[2];
        fVar49 = fVar4 - auVar41._0_4_;
        fVar40 = fVar6 - auVar45._12_4_;
        auVar42._0_4_ = fVar40 * fVar40 + fVar44 * fVar44;
        auVar42._4_4_ = (fVar7 - fVar6) * (fVar7 - fVar6) + fVar47 * fVar47;
        auVar42._8_4_ = (fVar46 - fVar7) * (fVar46 - fVar7) + fVar48 * fVar48;
        auVar42._12_4_ = (fVar5 - fVar46) * (fVar5 - fVar46) + fVar49 * fVar49;
        auVar45 = sqrtps(auVar42,auVar42);
        *(undefined1 (*) [16])(pfVar39 + lVar35 + 1) = auVar45;
        lVar35 = lVar35 + 4;
        auVar45._4_4_ = fVar7;
        auVar45._0_4_ = fVar6;
        auVar45._8_4_ = fVar46;
        auVar45._12_4_ = fVar5;
        fVar44 = fVar4;
      } while (lVar21 != lVar35);
      auVar41._0_8_ = auVar41._8_8_;
      auVar41._8_4_ = fVar4;
      auVar41._12_4_ = fVar5;
      puVar25 = puVar25 + lVar21;
    }
    do {
      if (puVar25 == param_3 + param_4) goto LAB_140deccb9;
      uVar26 = *puVar25;
      fVar44 = (float)uVar26 - auVar41._0_4_;
      fVar46 = (float)(uVar26 >> 0x20) - auVar41._4_4_;
      pfVar39[lVar19] = SQRT(fVar46 * fVar46 + fVar44 * fVar44);
      lVar19 = lVar19 + 1;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar26;
      puVar25 = puVar25 + 1;
    } while (param_4 - 1 != lVar19);
  }
  uVar26 = param_4 * 4;
  puVar25 = *(ulonglong **)(param_2 + 0x10);
  uVar36 = puVar25[4] & 0xfffffffffffffffc;
  if ((uVar36 < *puVar25) || (uVar36 - *puVar25 <= uVar26 && uVar26 - (uVar36 - *puVar25) != 0)) {
    puVar37 = (undefined4 *)pdb_142dc60a0(param_2,4);
    if (puVar37 == (undefined4 *)0x0) goto LAB_140decc8b;
  }
  else {
    puVar37 = (undefined4 *)(uVar36 + param_4 * -4);
    puVar25[4] = (ulonglong)puVar37;
  }
  uVar36 = 0;
  pub_142e32780(puVar37,0,uVar26);
  uVar26 = (param_4 - 1) + (ulonglong)(param_4 == 0);
  if (param_4 - 1 < uVar26) {
    uVar26 = param_4 - 1;
  }
  uVar20 = (ulonglong)((uint)uVar26 & 3);
  if (uVar26 - 1 < 3) {
    auVar43 = ZEXT816(0);
LAB_140dec7d5:
    uVar26 = 0;
    do {
      auVar43._0_4_ = auVar43._0_4_ + pfVar39[uVar36 + uVar26];
      puVar37[uVar36 + uVar26 + 1] = auVar43._0_4_;
      uVar26 = uVar26 + 1;
    } while (uVar20 != uVar26);
  }
  else {
    auVar43 = ZEXT816(0);
    uVar36 = 0;
    do {
      fVar44 = auVar43._0_4_ + pfVar39[uVar36];
      puVar37[uVar36 + 1] = fVar44;
      fVar44 = fVar44 + pfVar39[uVar36 + 1];
      puVar37[uVar36 + 2] = fVar44;
      fVar44 = fVar44 + pfVar39[uVar36 + 2];
      puVar37[uVar36 + 3] = fVar44;
      auVar43._0_4_ = fVar44 + pfVar39[uVar36 + 3];
      puVar37[uVar36 + 4] = auVar43._0_4_;
      uVar36 = uVar36 + 4;
    } while ((uVar26 & 0xffffffffffffffc) != uVar36);
    if (uVar20 != 0) goto LAB_140dec7d5;
  }
  puVar25 = *(ulonglong **)(param_2 + 0x10);
  uVar26 = puVar25[4] & 0xfffffffffffffffc;
  lStack_68 = param_2;
  if ((uVar26 < *puVar25) || (uVar26 - *puVar25 < uVar30)) {
    uVar26 = pdb_142dc60a0(param_2,4,uVar30);
    if (uVar26 == 0) goto LAB_140decc8b;
  }
  else {
    uVar26 = uVar26 - uVar30;
    puVar25[4] = uVar26;
  }
  auVar41 = _DAT_142e3c640;
  uVar30 = uVar38 & 0x3fffffffffffffff;
  if (param_4 - 2 <= (uVar38 & 0x3fffffffffffffff)) {
    uVar30 = param_4 - 2;
  }
  uVar36 = 0;
  pfVar27 = pfVar39;
  if ((3 < uVar30) && (0xf < uVar26 - (longlong)pfVar39)) {
    uVar30 = uVar30 + 1;
    uVar36 = 4;
    if ((uVar30 & 3) != 0) {
      uVar36 = (ulonglong)((uint)uVar30 & 3);
    }
    uVar36 = uVar30 - uVar36;
    pfVar27 = pfVar39 + uVar36;
    uVar30 = 0;
    do {
      auVar45 = divps(auVar41,*(undefined1 (*) [16])(pfVar39 + uVar30));
      *(undefined1 (*) [16])(uVar26 + uVar30 * 4) = auVar45;
      uVar30 = uVar30 + 4;
    } while (uVar36 != uVar30);
  }
  fVar44 = _DAT_142e36f28;
  do {
    if (pfVar27 == pfVar39 + uVar38) {
LAB_140deccb9:
      pdb_142dc8110(&UNK_1431ff328,0x22,&UNK_1431ff3a8);
      pcVar3 = (code *)swi(3);
      puVar24 = (undefined8 *)(*pcVar3)();
      return puVar24;
    }
    fVar46 = *pfVar27;
    pfVar27 = pfVar27 + 1;
    *(float *)(uVar26 + uVar36 * 4) = fVar44 / fVar46;
    uVar36 = uVar36 + 1;
  } while (uVar38 != uVar36);
  lStack_88 = 4;
  lStack_80 = lStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  pdb_141e39310(&lStack_88,0,param_4,CONCAT71((int7)(uVar38 >> 8),1));
  puVar25 = param_3;
  do {
    uVar30 = *puVar25;
    if (uStack_70 == uStack_78) {
      pdb_141e39310(&lStack_88,uStack_70,1,1);
    }
    uVar36 = uStack_78;
    lVar35 = lStack_80;
    lVar19 = lStack_88;
    puVar25 = puVar25 + 1;
    *(int *)(lStack_88 + uStack_70 * 4) = (int)uVar30;
    uVar30 = uStack_70 + 1;
    uStack_70 = uVar30;
  } while (puVar25 != param_3 + param_4);
  uVar1 = *param_5;
  uVar2 = *param_6;
  puVar31 = puVar37;
  lVar21 = pdb_140deab40(lStack_68,puVar37,param_4,pfVar39,uVar38,uVar26,uVar38,lStack_88,uVar30,
                         uVar1,param_5[1],uVar2,param_6[1]);
  uVar20 = uVar30;
  if (param_4 < uVar30) {
    uVar20 = param_4;
  }
  if (uVar30 != 0) {
    if (uVar20 < 9) {
      uVar28 = 0;
    }
    else {
      uVar28 = 8;
      if ((uVar20 & 7) != 0) {
        uVar28 = (ulonglong)((uint)uVar20 & 7);
      }
      uVar28 = uVar20 - uVar28;
      uVar32 = 0;
      do {
        puVar33 = (undefined4 *)((longlong)param_3 + uVar32 * 8 + 4);
        uVar8 = puVar33[2];
        puVar23 = (undefined4 *)((longlong)param_3 + uVar32 * 8 + 0x14);
        uVar9 = *puVar23;
        uVar10 = puVar23[2];
        puVar23 = (undefined4 *)((longlong)param_3 + uVar32 * 8 + 0x24);
        uVar11 = *puVar23;
        uVar12 = puVar23[2];
        puVar23 = (undefined4 *)((longlong)param_3 + uVar32 * 8 + 0x34);
        uVar13 = *puVar23;
        uVar14 = puVar23[2];
        puVar23 = (undefined4 *)(lVar19 + uVar32 * 4);
        *puVar23 = *puVar33;
        puVar23[1] = uVar8;
        puVar23[2] = uVar9;
        puVar23[3] = uVar10;
        puVar23 = (undefined4 *)(lVar19 + 0x10 + uVar32 * 4);
        *puVar23 = uVar11;
        puVar23[1] = uVar12;
        puVar23[2] = uVar13;
        puVar23[3] = uVar14;
        uVar32 = uVar32 + 8;
      } while (uVar28 != uVar32);
    }
    do {
      *(undefined4 *)(lVar19 + uVar28 * 4) = *(undefined4 *)((longlong)param_3 + uVar28 * 8 + 4);
      uVar28 = uVar28 + 1;
    } while (uVar20 != uVar28);
  }
  puVar23 = puVar37;
  lVar22 = pdb_140deab40(lStack_68,puVar37,param_4,pfVar39,uVar38,uVar26,uVar38,lVar19,uVar30,uVar1,
                         param_5[2],uVar2,param_6[2]);
  if (puVar23 < puVar31) {
    puVar31 = puVar23;
  }
  if ((undefined4 *)0x2e8ba2e8ba2e8ba < puVar31) {
    pdb_142dc6350();
LAB_140deccb7:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar25 = *(ulonglong **)(lStack_68 + 0x10);
  uVar30 = puVar25[4] & 0xfffffffffffffffc;
  if ((uVar30 < *puVar25) ||
     (uVar30 - *puVar25 <= (ulonglong)((longlong)puVar31 * 0x2c) &&
      (longlong)puVar31 * 0x2c - (uVar30 - *puVar25) != 0)) {
    puVar23 = (undefined4 *)pdb_142dc60a0(lStack_68,4);
    if (puVar23 == (undefined4 *)0x0) {
      pdb_142dc6350();
      goto LAB_140deccb7;
    }
  }
  else {
    puVar23 = (undefined4 *)(uVar30 + (longlong)puVar31 * -0x2c);
    puVar25[4] = (ulonglong)puVar23;
  }
  if (puVar31 != (undefined4 *)0x0) {
    lVar29 = 0;
    puVar33 = puVar31;
    puVar34 = puVar23;
    do {
      uVar1 = *(undefined4 *)(lVar21 + 0x10 + lVar29);
      uVar15 = *(undefined8 *)(lVar21 + lVar29);
      uVar16 = ((undefined8 *)(lVar21 + lVar29))[1];
      uVar17 = *(undefined8 *)(lVar22 + lVar29);
      uVar18 = ((undefined8 *)(lVar22 + lVar29))[1];
      uVar2 = *(undefined4 *)(lVar22 + 0x10 + lVar29);
      *puVar34 = *(undefined4 *)(lVar21 + 0x10 + lVar29);
      *(undefined8 *)(puVar34 + 1) = uVar15;
      *(undefined8 *)(puVar34 + 3) = uVar16;
      puVar34[5] = uVar1;
      *(undefined8 *)(puVar34 + 6) = uVar17;
      *(undefined8 *)(puVar34 + 8) = uVar18;
      puVar34[10] = uVar2;
      puVar34 = puVar34 + 0xb;
      lVar29 = lVar29 + 0x14;
      puVar33 = (undefined4 *)((longlong)puVar33 + -1);
    } while (puVar33 != (undefined4 *)0x0);
  }
  uVar1 = *puVar37;
  uVar2 = puVar37[param_4 - 1];
  *param_1 = puVar23;
  param_1[1] = puVar31;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  if (uVar36 != 0) {
    lVar21 = *(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x20);
    if (lVar21 == lVar19) {
      *(ulonglong *)(*(longlong *)(lVar35 + 0x10) + 0x20) = lVar21 + uVar36 * 4;
    }
  }
  return param_1;
}

