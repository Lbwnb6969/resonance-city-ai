// VA 0x140decfc0, PDB extent 3006 bytes
// utils::natural_cubic::Spline3D::from_control_points_with_tangents
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::Spline3D::from_control_points_with_tangents
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 3006 */

undefined8 *
pdb_140decfc0(undefined8 *param_1,longlong param_2,float *param_3,ulonglong param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar39 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  longlong lStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  float *pfStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pfStack_a8 = param_3;
  if (param_4 < 2) goto LAB_140deda18;
  uVar29 = param_4 * 4 - 4;
  puVar4 = *(ulonglong **)(param_2 + 0x10);
  uVar33 = puVar4[4] & 0xfffffffffffffffc;
  if ((uVar33 < *puVar4) || (uVar33 - *puVar4 < uVar29)) {
    pfVar34 = (float *)pdb_142dc60a0(param_2,4);
    if (pfVar34 != (float *)0x0) goto LAB_140ded04e;
LAB_140deda13:
    pdb_142dc6350();
LAB_140deda18:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ff2b8,0x23,&UNK_1431ff310);
  }
  pfVar34 = (float *)(uVar33 - uVar29);
  puVar4[4] = (ulonglong)pfVar34;
LAB_140ded04e:
  pfVar23 = pfStack_a8 + param_4 * 3;
  uStack_b0 = param_4 - 1;
  fVar37 = pfStack_a8[4];
  fVar35 = pfStack_a8[5];
  fVar50 = pfStack_a8[3];
  *pfVar34 = SQRT((fVar35 - pfStack_a8[2]) * (fVar35 - pfStack_a8[2]) +
                  (fVar37 - pfStack_a8[1]) * (fVar37 - pfStack_a8[1]) +
                  (fVar50 - *pfStack_a8) * (fVar50 - *pfStack_a8));
  if (uStack_b0 != 1) {
    pfVar13 = pfStack_a8 + 6;
    uVar33 = param_4 + 0x3ffffffffffffffe & 0x3fffffffffffffff;
    if (param_4 - 3 <= uVar33) {
      uVar33 = param_4 - 3;
    }
    if (uVar33 < 4) {
      auVar44._4_4_ = fVar35;
      auVar44._0_4_ = fVar50;
      auVar44._8_8_ = 0;
      lVar22 = 1;
      pfVar14 = pfVar13;
      fVar49 = fVar37;
    }
    else {
      uVar33 = uVar33 + 1;
      uVar31 = 4;
      if ((uVar33 & 3) != 0) {
        uVar31 = (ulonglong)((uint)uVar33 & 3);
      }
      lVar25 = uVar33 - uVar31;
      pfVar14 = pfVar13 + lVar25 * 3;
      lVar22 = lVar25 + 1;
      lVar16 = 0;
      do {
        fVar49 = pfVar13[10];
        fVar36 = pfVar13[9];
        fVar41 = pfVar13[10];
        fVar6 = pfVar13[0xb];
        fVar50 = *pfVar13 - fVar50;
        fVar51 = pfVar13[3] - *pfVar13;
        fVar52 = pfVar13[6] - pfVar13[3];
        fVar53 = fVar36 - pfVar13[6];
        fVar37 = pfVar13[1] - fVar37;
        fVar46 = pfVar13[4] - pfVar13[1];
        fVar47 = pfVar13[7] - pfVar13[4];
        fVar48 = fVar41 - pfVar13[7];
        fVar35 = pfVar13[2] - fVar35;
        fVar40 = pfVar13[5] - pfVar13[2];
        fVar42 = pfVar13[8] - pfVar13[5];
        fVar43 = fVar6 - pfVar13[8];
        auVar38._0_4_ = fVar35 * fVar35 + fVar37 * fVar37 + fVar50 * fVar50;
        auVar38._4_4_ = fVar40 * fVar40 + fVar46 * fVar46 + fVar51 * fVar51;
        auVar38._8_4_ = fVar42 * fVar42 + fVar47 * fVar47 + fVar52 * fVar52;
        auVar38._12_4_ = fVar43 * fVar43 + fVar48 * fVar48 + fVar53 * fVar53;
        auVar38 = sqrtps(auVar38,auVar38);
        *(undefined1 (*) [16])(pfVar34 + lVar16 + 1) = auVar38;
        lVar16 = lVar16 + 4;
        pfVar13 = pfVar13 + 0xc;
        fVar35 = fVar6;
        fVar37 = fVar41;
        fVar50 = fVar36;
      } while (lVar25 != lVar16);
      auVar45._4_4_ = fVar36;
      auVar45._0_4_ = fVar36;
      auVar45._8_4_ = fVar36;
      auVar45._12_4_ = fVar6;
      auVar44._8_8_ = auVar45._8_8_;
      auVar44._4_4_ = fVar6;
      auVar44._0_4_ = fVar36;
    }
    do {
      if (pfVar14 == pfVar23) goto LAB_140deda41;
      fVar37 = pfVar14[1];
      fVar49 = fVar37 - fVar49;
      fVar35 = pfVar14[2];
      fVar50 = *pfVar14;
      fVar36 = fVar50 - auVar44._0_4_;
      fVar41 = fVar35 - auVar44._4_4_;
      pfVar34[lVar22] = SQRT(fVar41 * fVar41 + fVar49 * fVar49 + fVar36 * fVar36);
      lVar22 = lVar22 + 1;
      pfVar14 = pfVar14 + 3;
      auVar44._4_4_ = fVar35;
      auVar44._0_4_ = fVar50;
      auVar44._8_8_ = 0;
      fVar49 = fVar37;
    } while (param_4 - 1 != lVar22);
  }
  uVar33 = param_4 * 4;
  puVar4 = *(ulonglong **)(param_2 + 0x10);
  uVar31 = puVar4[4] & 0xfffffffffffffffc;
  lStack_98 = param_2;
  if ((uVar31 < *puVar4) || (uVar31 - *puVar4 <= uVar33 && uVar33 - (uVar31 - *puVar4) != 0)) {
    puVar32 = (undefined4 *)pdb_142dc60a0(param_2,4);
    if (puVar32 == (undefined4 *)0x0) goto LAB_140deda13;
  }
  else {
    puVar32 = (undefined4 *)(uVar31 + param_4 * -4);
    puVar4[4] = (ulonglong)puVar32;
  }
  uVar31 = 0;
  pub_142e32780(puVar32,0,uVar33);
  uVar33 = (param_4 - 1) + (ulonglong)(param_4 == 0);
  if (param_4 - 1 < uVar33) {
    uVar33 = param_4 - 1;
  }
  uVar15 = (ulonglong)((uint)uVar33 & 3);
  if (uVar33 - 1 < 3) {
    auVar39 = ZEXT816(0);
LAB_140ded335:
    uVar33 = 0;
    do {
      auVar39._0_4_ = auVar39._0_4_ + pfVar34[uVar31 + uVar33];
      puVar32[uVar31 + uVar33 + 1] = auVar39._0_4_;
      uVar33 = uVar33 + 1;
    } while (uVar15 != uVar33);
  }
  else {
    auVar39 = ZEXT816(0);
    uVar31 = 0;
    do {
      fVar37 = auVar39._0_4_ + pfVar34[uVar31];
      puVar32[uVar31 + 1] = fVar37;
      fVar37 = fVar37 + pfVar34[uVar31 + 1];
      puVar32[uVar31 + 2] = fVar37;
      fVar37 = fVar37 + pfVar34[uVar31 + 2];
      puVar32[uVar31 + 3] = fVar37;
      auVar39._0_4_ = fVar37 + pfVar34[uVar31 + 3];
      puVar32[uVar31 + 4] = auVar39._0_4_;
      uVar31 = uVar31 + 4;
    } while ((uVar33 & 0xffffffffffffffc) != uVar31);
    if (uVar15 != 0) goto LAB_140ded335;
  }
  puVar4 = *(ulonglong **)(lStack_98 + 0x10);
  uVar33 = puVar4[4] & 0xfffffffffffffffc;
  uStack_a0 = param_4;
  if ((uVar33 < *puVar4) || (uVar33 - *puVar4 < uVar29)) {
    uVar33 = pdb_142dc60a0(lStack_98,4,uVar29);
    if (uVar33 == 0) goto LAB_140deda13;
  }
  else {
    uVar33 = uVar33 - uVar29;
    puVar4[4] = uVar33;
  }
  auVar38 = _DAT_142e3c640;
  uVar29 = uStack_b0 & 0x3fffffffffffffff;
  if (uStack_a0 - 2 <= (uStack_b0 & 0x3fffffffffffffff)) {
    uVar29 = uStack_a0 - 2;
  }
  uVar31 = 0;
  pfVar13 = pfVar34;
  if ((3 < uVar29) && (0xf < uVar33 - (longlong)pfVar34)) {
    uVar29 = uVar29 + 1;
    uVar31 = 4;
    if ((uVar29 & 3) != 0) {
      uVar31 = (ulonglong)((uint)uVar29 & 3);
    }
    uVar31 = uVar29 - uVar31;
    pfVar13 = pfVar34 + uVar31;
    uVar29 = 0;
    do {
      auVar45 = divps(auVar38,*(undefined1 (*) [16])(pfVar34 + uVar29));
      *(undefined1 (*) [16])(uVar33 + uVar29 * 4) = auVar45;
      uVar29 = uVar29 + 4;
    } while (uVar31 != uVar29);
  }
  fVar37 = _DAT_142e36f28;
  do {
    if (pfVar13 == pfVar34 + uStack_b0) {
LAB_140deda41:
      pdb_142dc8110(&UNK_1431ff328,0x22,&UNK_1431ff3a8);
      pcVar5 = (code *)swi(3);
      puVar21 = (undefined8 *)(*pcVar5)();
      return puVar21;
    }
    fVar35 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    *(float *)(uVar33 + uVar31 * 4) = fVar37 / fVar35;
    uVar31 = uVar31 + 1;
  } while (uStack_b0 != uVar31);
  lStack_d8 = 4;
  lStack_d0 = lStack_98;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pdb_141e39310(&lStack_d8,0,uStack_a0,1);
  pfVar13 = pfStack_a8;
  do {
    fVar37 = *pfVar13;
    if (uStack_c0 == uStack_c8) {
      pdb_141e39310(&lStack_d8,uStack_c0,1,1);
    }
    uVar29 = uStack_c8;
    lVar25 = lStack_d0;
    lVar22 = lStack_d8;
    pfVar13 = pfVar13 + 3;
    *(float *)(lStack_d8 + uStack_c0 * 4) = fVar37;
    uVar31 = uStack_c0 + 1;
    uStack_c0 = uVar31;
  } while (pfVar13 != pfVar23);
  uStack_b8 = *param_5;
  uStack_b4 = *param_6;
  puVar26 = puVar32;
  lVar16 = pdb_140deab40(lStack_98,puVar32,uStack_a0,pfVar34,uStack_b0,uVar33,uStack_b0,lStack_d8,
                         uVar31,uStack_b8,param_5[1],uStack_b4,param_6[1]);
  uVar15 = uVar31;
  if (uStack_a0 < uVar31) {
    uVar15 = uStack_a0;
  }
  if (uVar31 != 0) {
    if (uVar15 < 9) {
      uVar17 = 0;
    }
    else {
      uVar17 = 8;
      if ((uVar15 & 7) != 0) {
        uVar17 = (ulonglong)((uint)uVar15 & 7);
      }
      uVar17 = uVar15 - uVar17;
      pfVar23 = pfStack_a8 + 0x16;
      uVar27 = 0;
      do {
        fVar37 = pfVar23[-0xf];
        fVar35 = pfVar23[-0xc];
        fVar50 = *pfVar23;
        fVar49 = pfVar23[-3];
        fVar36 = pfVar23[-6];
        fVar41 = pfVar23[-9];
        puVar21 = (undefined8 *)(lVar22 + uVar27 * 4);
        *puVar21 = CONCAT44(pfVar23[-0x12],pfVar23[-0x15]);
        puVar21[1] = CONCAT44(fVar35,fVar37);
        pfVar13 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        *pfVar13 = fVar41;
        pfVar13[1] = fVar36;
        pfVar13[2] = fVar49;
        pfVar13[3] = fVar50;
        uVar27 = uVar27 + 8;
        pfVar23 = pfVar23 + 0x18;
      } while (uVar17 != uVar27);
    }
    pfVar23 = pfStack_a8 + uVar17 * 3 + 1;
    do {
      *(float *)(lVar22 + uVar17 * 4) = *pfVar23;
      uVar17 = uVar17 + 1;
      pfVar23 = pfVar23 + 3;
    } while (uVar15 != uVar17);
  }
  puVar20 = puVar32;
  lVar18 = pdb_140deab40(lStack_98,puVar32,uStack_a0,pfVar34,uStack_b0,uVar33,uStack_b0,lVar22,
                         uVar31,uStack_b8,param_5[2],uStack_b4,param_6[2]);
  if (uVar31 != 0) {
    if (uVar15 < 9) {
      uVar17 = 0;
    }
    else {
      uVar17 = 8;
      if ((uVar15 & 7) != 0) {
        uVar17 = (ulonglong)((uint)uVar15 & 7);
      }
      uVar17 = uVar15 - uVar17;
      pfVar23 = pfStack_a8 + 0x17;
      uVar27 = 0;
      do {
        fVar37 = pfVar23[-0xf];
        fVar35 = pfVar23[-0xc];
        fVar50 = *pfVar23;
        fVar49 = pfVar23[-3];
        fVar36 = pfVar23[-6];
        fVar41 = pfVar23[-9];
        puVar21 = (undefined8 *)(lVar22 + uVar27 * 4);
        *puVar21 = CONCAT44(pfVar23[-0x12],pfVar23[-0x15]);
        puVar21[1] = CONCAT44(fVar35,fVar37);
        pfVar13 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        *pfVar13 = fVar41;
        pfVar13[1] = fVar36;
        pfVar13[2] = fVar49;
        pfVar13[3] = fVar50;
        uVar27 = uVar27 + 8;
        pfVar23 = pfVar23 + 0x18;
      } while (uVar17 != uVar27);
    }
    pfVar23 = pfStack_a8 + uVar17 * 3 + 2;
    do {
      *(float *)(lVar22 + uVar17 * 4) = *pfVar23;
      uVar17 = uVar17 + 1;
      pfVar23 = pfVar23 + 3;
    } while (uVar15 != uVar17);
  }
  puVar28 = puVar32;
  lVar19 = pdb_140deab40(lStack_98,puVar32,uStack_a0,pfVar34,uStack_b0,uVar33,uStack_b0,lVar22,
                         uVar31,uStack_b8,param_5[3],uStack_b4,param_6[3]);
  if (puVar20 < puVar26) {
    puVar26 = puVar20;
  }
  if (puVar28 < puVar26) {
    puVar26 = puVar28;
  }
  if ((ulonglong)puVar26 >> 0x39 != 0) {
    pdb_142dc6350();
LAB_140deda3f:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  puVar4 = *(ulonglong **)(lStack_98 + 0x10);
  uVar33 = puVar4[4] & 0xfffffffffffffffc;
  if ((uVar33 < *puVar4) || (uVar33 - *puVar4 < (ulonglong)((longlong)puVar26 * 0x40))) {
    puVar20 = (undefined4 *)pdb_142dc60a0(lStack_98,4);
    if (puVar20 == (undefined4 *)0x0) {
      pdb_142dc6350();
      goto LAB_140deda3f;
    }
  }
  else {
    puVar20 = (undefined4 *)(uVar33 + (longlong)puVar26 * -0x40);
    puVar4[4] = (ulonglong)puVar20;
  }
  if (puVar26 != (undefined4 *)0x0) {
    lVar24 = 0;
    puVar28 = puVar26;
    puVar30 = puVar20;
    do {
      uVar1 = *(undefined4 *)(lVar16 + 0x10 + lVar24);
      uVar7 = *(undefined8 *)(lVar16 + lVar24);
      uVar8 = ((undefined8 *)(lVar16 + lVar24))[1];
      uVar2 = *(undefined4 *)(lVar18 + 0x10 + lVar24);
      uVar9 = *(undefined8 *)(lVar18 + lVar24);
      uVar10 = ((undefined8 *)(lVar18 + lVar24))[1];
      uVar11 = *(undefined8 *)(lVar19 + lVar24);
      uVar12 = ((undefined8 *)(lVar19 + lVar24))[1];
      uVar3 = *(undefined4 *)(lVar19 + 0x10 + lVar24);
      *puVar30 = *(undefined4 *)(lVar16 + 0x10 + lVar24);
      puVar30[5] = uVar1;
      *(undefined8 *)(puVar30 + 1) = uVar7;
      *(undefined8 *)(puVar30 + 3) = uVar8;
      *(undefined8 *)(puVar30 + 6) = uVar9;
      *(undefined8 *)(puVar30 + 8) = uVar10;
      puVar30[10] = uVar2;
      *(undefined8 *)(puVar30 + 0xb) = uVar11;
      *(undefined8 *)(puVar30 + 0xd) = uVar12;
      puVar30[0xf] = uVar3;
      puVar30 = puVar30 + 0x10;
      lVar24 = lVar24 + 0x14;
      puVar28 = (undefined4 *)((longlong)puVar28 + -1);
    } while (puVar28 != (undefined4 *)0x0);
  }
  uVar1 = *puVar32;
  uVar2 = puVar32[uStack_a0 - 1];
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar20;
  param_1[2] = puVar26;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  if (uVar29 != 0) {
    lVar16 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x20);
    if (lVar16 == lVar22) {
      *(ulonglong *)(*(longlong *)(lVar25 + 0x10) + 0x20) = lVar16 + uVar29 * 4;
    }
  }
  return param_1;
}

