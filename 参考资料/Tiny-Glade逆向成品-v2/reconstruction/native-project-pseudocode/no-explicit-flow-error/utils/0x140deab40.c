// VA 0x140deab40, PDB extent 2181 bytes
// utils::natural_cubic::solve_clamped_spline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::solve_clamped_spline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 2181 */

void pdb_140deab40(longlong param_1,longlong param_2,ulonglong param_3,float *param_4,
                  ulonglong param_5,float *param_6,ulonglong param_7,float *param_8,
                  ulonglong param_9,int param_10,float param_11,uint param_12,float param_13)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  float *pfVar30;
  ulonglong uVar31;
  float *pfVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  float *pfVar35;
  bool bVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar29 = param_9 * 4;
  puVar9 = *(ulonglong **)(param_1 + 0x10);
  uVar31 = puVar9[4] & 0xfffffffffffffffc;
  if ((uVar31 < *puVar9) || (uVar31 - *puVar9 <= uVar29 && uVar29 - (uVar31 - *puVar9) != 0)) {
    pfVar32 = (float *)pdb_142dc60a0(param_1,4,uVar29);
    if (pfVar32 == (float *)0x0) goto LAB_140deb2b5;
  }
  else {
    pfVar32 = (float *)(uVar31 + param_9 * -4);
    puVar9[4] = (ulonglong)pfVar32;
  }
  if (param_9 != 0) {
    if (param_10 == 1) {
      if (param_9 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,1,&UNK_1431ff188);
      }
      if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_1431ff1a0);
      }
      *pfVar32 = (param_8[1] - *param_8) * _DAT_142e3788c * *param_6 - _DAT_142e3788c * param_11;
    }
    else {
      *pfVar32 = 0.0;
      if (param_9 == 1) goto LAB_140deac30;
    }
    fVar4 = _DAT_142e382d4;
    fVar38 = _DAT_142e3788c;
    uVar31 = param_9 - 2;
    param_13 = param_13 * _DAT_142e3788c;
    uVar27 = 1;
    do {
      uVar1 = uVar27 + 1;
      if (uVar27 - param_9 == -1) {
        fVar39 = 0.0;
        if ((param_12 & 1) != 0) {
          if (param_7 <= uVar31) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar31,param_7,&UNK_1431ff170);
          }
          fVar40 = param_8[param_9 - 1] - param_8[param_9 - 2];
          uVar34 = uVar31;
          fVar39 = param_13;
          goto LAB_140dead57;
        }
      }
      else {
        if (param_9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar1,param_9,&UNK_1431ff0f8);
        }
        if (param_7 <= uVar27) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar27,param_7,&UNK_1431ff110);
        }
        fVar39 = (param_8[uVar27 + 1] - param_8[uVar27]) * fVar38 * param_6[uVar27];
        uVar34 = uVar27 - 1;
        fVar40 = param_8[uVar27] - param_8[uVar27 - 1];
LAB_140dead57:
        fVar39 = fVar40 * fVar4 * param_6[uVar34] + fVar39;
      }
      pfVar32[uVar27] = fVar39;
      uVar27 = uVar1;
    } while (uVar1 != param_9);
  }
LAB_140deac30:
  puVar9 = *(ulonglong **)(param_1 + 0x10);
  uVar31 = puVar9[4] & 0xfffffffffffffffc;
  if ((uVar31 < *puVar9) || (uVar31 - *puVar9 <= uVar29 && uVar29 - (uVar31 - *puVar9) != 0)) {
    puVar33 = (undefined4 *)pdb_142dc60a0(param_1,4,uVar29);
    if (puVar33 == (undefined4 *)0x0) goto LAB_140deb2b5;
  }
  else {
    puVar33 = (undefined4 *)(uVar31 + param_9 * -4);
    puVar9[4] = (ulonglong)puVar33;
  }
  if (param_9 != 0) {
    pub_142e32780(puVar33,0,uVar29);
  }
  puVar9 = *(ulonglong **)(param_1 + 0x10);
  uVar31 = puVar9[4] & 0xfffffffffffffffc;
  if ((uVar31 < *puVar9) || (uVar31 - *puVar9 <= uVar29 && uVar29 - (uVar31 - *puVar9) != 0)) {
    pfVar30 = (float *)pdb_142dc60a0(param_1,4,uVar29);
    if (pfVar30 == (float *)0x0) goto LAB_140deb2b5;
  }
  else {
    pfVar30 = (float *)(uVar31 + param_9 * -4);
    puVar9[4] = (ulonglong)pfVar30;
  }
  if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1431ff038);
  }
  pub_142e32780(pfVar30,0,uVar29);
  uVar37 = 0;
  if (param_10 != 0) {
    uVar37 = _DAT_142e36f50;
  }
  *puVar33 = uVar37;
  fVar38 = _DAT_142e36f28;
  if (param_10 != 0) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1431ff050);
    }
    fVar38 = *param_4 + *param_4;
  }
  fVar38 = *pfVar32 / fVar38;
  *pfVar30 = fVar38;
  uVar29 = param_9 - 1;
  if (1 < uVar29) {
    uVar31 = 2;
    if (2 < param_3) {
      uVar31 = param_3;
    }
    lVar28 = param_5 + (param_5 == 0);
    uVar27 = 0;
    do {
      if (uVar31 - 2 == uVar27) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar27 + 2,param_3,&UNK_1431ff098);
      }
      if (param_5 == uVar27) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar27,param_5,&UNK_1431ff0b0);
      }
      if (lVar28 - 1U == uVar27) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar28,param_5,&UNK_1431ff0c8);
      }
      if (param_9 - 1 == uVar27) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_9,param_9,&UNK_1431ff0e0);
      }
      fVar38 = *(float *)(param_2 + 8 + uVar27 * 4) - *(float *)(param_2 + uVar27 * 4);
      fVar4 = param_4[uVar27];
      fVar38 = (fVar38 + fVar38) - (float)puVar33[uVar27] * fVar4;
      puVar33[uVar27 + 1] = param_4[uVar27 + 1] / fVar38;
      pfVar30[uVar27 + 1] = (pfVar32[uVar27 + 1] - fVar4 * pfVar30[uVar27]) / fVar38;
      uVar27 = uVar27 + 1;
    } while (param_9 - 2 != uVar27);
  }
  uVar31 = uVar29;
  if (param_12 == 0) {
    pfVar30[param_9 - 1] = 0.0;
    if (uVar29 != 0) {
      bVar36 = false;
      goto LAB_140deaf20;
    }
    bVar36 = true;
  }
  else {
    if (param_5 <= param_9 - 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_9 - 2,param_5,&UNK_1431ff068);
    }
    fVar38 = param_4[param_9 - 2] * pfVar30[param_9 - 2];
    pfVar30[param_9 - 1] =
         (pfVar32[param_9 - 1] - fVar38) /
         ((_DAT_142e37830 - (float)puVar33[param_9 - 2]) * param_4[param_9 - 2]);
    bVar36 = uVar29 == 0;
LAB_140deaf20:
    do {
      if (param_9 <= uVar31) goto LAB_140deb2ba;
      fVar38 = (float)puVar33[uVar31 - 1] * pfVar30[uVar31];
      pfVar30[uVar31 - 1] = pfVar30[uVar31 - 1] - fVar38;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
    if (0x666666666666666 < uVar29) goto LAB_140deb2b5;
  }
  puVar9 = *(ulonglong **)(param_1 + 0x10);
  uVar31 = puVar9[4] & 0xfffffffffffffffc;
  if ((uVar31 < *puVar9) || (uVar31 - *puVar9 < uVar29 * 0x14)) {
    pfVar32 = (float *)pdb_142dc60a0(param_1,4);
    if (pfVar32 == (float *)0x0) {
LAB_140deb2b5:
      fVar38 = (float)pdb_142dc6350();
LAB_140deb2ba:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(fVar38,param_9,&UNK_1431ff080);
    }
  }
  else {
    pfVar32 = (float *)(uVar31 + uVar29 * -0x14);
    puVar9[4] = (ulonglong)pfVar32;
  }
  auVar26 = _DAT_142f97fd0;
  if (bVar36) {
    return;
  }
  uVar29 = param_5;
  if (param_7 < param_5) {
    uVar29 = param_7;
  }
  if (param_3 <= uVar29) {
    uVar29 = param_3;
  }
  uVar31 = param_9 - 2;
  if (uVar31 <= uVar29) {
    uVar29 = uVar31;
  }
  if (3 < uVar29) {
    uVar27 = param_5;
    if (param_7 < param_5) {
      uVar27 = param_7;
    }
    if (param_3 <= uVar27) {
      uVar27 = param_3;
    }
    if (uVar31 <= uVar27) {
      uVar27 = uVar31;
    }
    if ((pfVar30 + uVar27 + 2 <= pfVar32) || (pfVar32 + uVar27 * 5 + 5 <= pfVar30)) {
      uVar29 = uVar29 + 1;
      uVar31 = 4;
      if ((uVar29 & 3) != 0) {
        uVar31 = (ulonglong)((uint)uVar29 & 3);
      }
      uVar29 = uVar29 - uVar31;
      uVar31 = 0;
      fVar38 = (float)DAT_142f97fd0;
      fVar4 = DAT_142f97fd0._4_4_;
      fVar39 = DAT_142f97fd0._8_4_;
      fVar40 = DAT_142f97fd0._12_4_;
      pfVar35 = pfVar32;
      do {
        pfVar2 = param_8 + uVar31;
        fVar5 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        pfVar2 = param_8 + uVar31 + 1;
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar2 = param_6 + uVar31;
        fVar14 = *pfVar2;
        fVar15 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar2 = param_4 + uVar31;
        pfVar3 = pfVar30 + uVar31;
        fVar18 = *pfVar3;
        fVar19 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar3 = pfVar30 + uVar31 + 1;
        auVar43._0_4_ = *pfVar3 - fVar18;
        auVar43._4_4_ = pfVar3[1] - fVar19;
        auVar43._8_4_ = pfVar3[2] - fVar20;
        auVar43._12_4_ = pfVar3[3] - fVar21;
        auVar42._0_4_ = (fVar18 + fVar18 + *pfVar3) * *pfVar2;
        auVar42._4_4_ = (fVar19 + fVar19 + pfVar3[1]) * pfVar2[1];
        auVar42._8_4_ = (fVar20 + fVar20 + pfVar3[2]) * pfVar2[2];
        auVar42._12_4_ = (fVar21 + fVar21 + pfVar3[3]) * pfVar2[3];
        auVar41._4_4_ = pfVar2[1] * fVar4;
        auVar41._0_4_ = *pfVar2 * fVar38;
        auVar41._8_4_ = pfVar2[2] * fVar39;
        auVar41._12_4_ = pfVar2[3] * fVar40;
        auVar41 = divps(auVar43,auVar41);
        auVar43 = divps(auVar42,auVar26);
        pfVar2 = (float *)(param_2 + uVar31 * 4);
        fVar22 = *pfVar2;
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        pfVar35[0xc] = fVar20;
        pfVar35[0xd] = auVar41._8_4_;
        pfVar35[0xe] = fVar24;
        pfVar35[0xf] = fVar8;
        pfVar35[0x10] = (fVar13 - fVar8) * fVar17 - auVar43._12_4_;
        pfVar35[0x11] = fVar21;
        pfVar35[0x12] = auVar41._12_4_;
        pfVar35[0x13] = fVar25;
        pfVar35[8] = auVar41._4_4_;
        pfVar35[9] = fVar23;
        pfVar35[10] = fVar7;
        pfVar35[0xb] = (fVar12 - fVar7) * fVar16 - auVar43._8_4_;
        *pfVar35 = fVar5;
        pfVar35[1] = (fVar10 - fVar5) * fVar14 - auVar43._0_4_;
        pfVar35[2] = fVar18;
        pfVar35[3] = auVar41._0_4_;
        pfVar35[4] = fVar22;
        pfVar35[5] = fVar6;
        pfVar35[6] = (fVar11 - fVar6) * fVar15 - auVar43._4_4_;
        pfVar35[7] = fVar19;
        uVar31 = uVar31 + 4;
        pfVar35 = pfVar35 + 0x14;
      } while (uVar29 != uVar31);
      goto LAB_140deb116;
    }
  }
  uVar29 = 0;
LAB_140deb116:
  fVar38 = _DAT_142e3788c;
  pfVar32 = pfVar32 + uVar29 * 5 + 4;
  lVar28 = 0;
  do {
    if (param_7 - uVar29 == lVar28) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_7,param_7,&UNK_1431ff128);
    }
    if (param_5 - uVar29 == lVar28) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_5,param_5,&UNK_1431ff140);
    }
    if (param_3 - uVar29 == lVar28) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_3,param_3,&UNK_1431ff158);
    }
    fVar4 = param_8[uVar29 + lVar28];
    fVar39 = param_8[uVar29 + lVar28 + 1];
    fVar40 = param_4[uVar29 + lVar28];
    fVar5 = pfVar30[uVar29 + lVar28];
    fVar6 = pfVar30[uVar29 + lVar28 + 1];
    fVar7 = param_6[uVar29 + lVar28];
    fVar8 = *(float *)(param_2 + uVar29 * 4 + lVar28 * 4);
    pfVar32[-4] = fVar4;
    pfVar32[-3] = (fVar39 - fVar4) * fVar7 - ((fVar5 + fVar5 + fVar6) * fVar40) / fVar38;
    pfVar32[-2] = fVar5;
    pfVar32[-1] = (fVar6 - fVar5) / (fVar40 * fVar38);
    *pfVar32 = fVar8;
    lVar28 = lVar28 + 1;
    pfVar32 = pfVar32 + 5;
  } while (~uVar29 + param_9 != lVar28);
  return;
}

