// VA 0x140deb3d0, PDB extent 2724 bytes
// utils::natural_cubic::compute_periodic_spline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::compute_periodic_spline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 2724 */

ulonglong pdb_140deb3d0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       ulonglong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                       ulonglong param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float *pfVar20;
  float *pfVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong uVar24;
  float *pfVar25;
  uint *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float *pfVar29;
  undefined4 *puVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  puVar11 = *(ulonglong **)(param_1 + 0x10);
  uVar28 = puVar11[4] & 0xfffffffffffffffc;
  uVar27 = param_2;
  if ((uVar28 < *puVar11) ||
     (uVar28 - *puVar11 <= param_9 * 4 && param_9 * 4 - (uVar28 - *puVar11) != 0)) {
    uVar28 = pdb_142dc60a0(param_1);
    if (uVar28 != 0) goto LAB_140deb468;
  }
  else {
    uVar28 = uVar28 + param_9 * -4;
    puVar11[4] = uVar28;
LAB_140deb468:
    fVar5 = _UNK_1430067c4;
    fVar32 = _DAT_1430067c0;
    if (param_9 != 0) {
      uVar24 = 1;
      do {
        uVar18 = (param_9 + uVar24) - 2;
        if ((uVar18 | param_9) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (param_9 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % param_9;
        }
        if (uVar24 - param_7 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_7,param_7,&UNK_1431ff1d0);
        }
        if (param_7 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar18,param_7,&UNK_1431ff1e8);
        }
        fVar33 = *(float *)(param_8 + -4 + uVar24 * 4);
        uVar19 = 0;
        if (param_9 != uVar24) {
          uVar19 = uVar24;
        }
        *(float *)((uVar28 - 4) + uVar24 * 4) =
             *(float *)(param_6 + -4 + uVar24 * 4) *
             (*(float *)(param_8 + uVar19 * 4) - fVar33) * fVar32 -
             *(float *)(param_6 + uVar18 * 4) * (fVar33 - *(float *)(param_8 + uVar18 * 4)) * fVar5;
        bVar31 = uVar24 != param_9;
        uVar24 = uVar24 + 1;
      } while (bVar31);
    }
    puVar11 = *(ulonglong **)(param_1 + 0x10);
    uVar24 = puVar11[4] & 0xfffffffffffffffc;
    if ((uVar24 < *puVar11) ||
       (uVar24 - *puVar11 <= param_9 * 4 && param_9 * 4 - (uVar24 - *puVar11) != 0)) {
      pfVar25 = (float *)pdb_142dc60a0(param_1);
      if (pfVar25 == (float *)0x0) goto LAB_140debd8e;
    }
    else {
      pfVar25 = (float *)(uVar24 + param_9 * -4);
      puVar11[4] = (ulonglong)pfVar25;
    }
    if (param_9 != 0) {
      uVar27 = 0;
      do {
        uVar24 = (param_9 - 1) + uVar27;
        if ((uVar24 | param_9) >> 0x20 == 0) {
          uVar24 = (uVar24 & 0xffffffff) % (param_9 & 0xffffffff);
        }
        else {
          uVar24 = uVar24 % param_9;
        }
        if (param_5 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar24,param_5,&UNK_1431ff1b8);
        }
        pfVar25[uVar27] = *(float *)(param_4 + uVar24 * 4);
        uVar27 = uVar27 + 1;
      } while (param_9 != uVar27);
    }
    puVar11 = *(ulonglong **)(param_1 + 0x10);
    uVar24 = puVar11[4] & 0xfffffffffffffffc;
    uVar27 = param_5;
    if ((uVar24 < *puVar11) || (uVar24 - *puVar11 < param_9 * 4)) {
      pfVar29 = (float *)pdb_142dc60a0(param_1);
      if (pfVar29 == (float *)0x0) goto LAB_140debd8e;
    }
    else {
      pfVar29 = (float *)(uVar24 + param_9 * -4);
      puVar11[4] = (ulonglong)pfVar29;
    }
    if (param_9 != 0) {
      uVar24 = param_9 - 1;
      if (param_5 < param_9 - 1) {
        uVar24 = param_5;
      }
      uVar18 = 0;
      if ((7 < uVar24) && (0x1f < (ulonglong)((longlong)pfVar29 - (longlong)pfVar25))) {
        uVar24 = uVar24 + 1;
        uVar18 = 8;
        if ((uVar24 & 7) != 0) {
          uVar18 = (ulonglong)((uint)uVar24 & 7);
        }
        uVar18 = uVar24 - uVar18;
        uVar24 = 0;
        do {
          pfVar23 = (float *)(param_4 + uVar24 * 4);
          pfVar20 = (float *)(param_4 + 0x10 + uVar24 * 4);
          fVar32 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar33 = pfVar20[2];
          fVar6 = pfVar20[3];
          pfVar21 = pfVar25 + uVar24;
          pfVar20 = pfVar25 + uVar24 + 4;
          fVar7 = *pfVar20;
          fVar8 = pfVar20[1];
          fVar9 = pfVar20[2];
          fVar12 = pfVar20[3];
          auVar34._0_4_ = *pfVar21 + *pfVar23 + *pfVar21 + *pfVar23;
          auVar34._4_4_ = pfVar21[1] + pfVar23[1] + pfVar21[1] + pfVar23[1];
          auVar34._8_4_ = pfVar21[2] + pfVar23[2] + pfVar21[2] + pfVar23[2];
          auVar34._12_4_ = pfVar21[3] + pfVar23[3] + pfVar21[3] + pfVar23[3];
          *(undefined1 (*) [16])(pfVar29 + uVar24) = auVar34;
          pfVar23 = pfVar29 + uVar24 + 4;
          *pfVar23 = fVar7 + fVar32 + fVar7 + fVar32;
          pfVar23[1] = fVar8 + fVar5 + fVar8 + fVar5;
          pfVar23[2] = fVar9 + fVar33 + fVar9 + fVar33;
          pfVar23[3] = fVar12 + fVar6 + fVar12 + fVar6;
          uVar24 = uVar24 + 8;
        } while (uVar18 != uVar24);
      }
      do {
        if (param_5 == uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_5,param_5,&UNK_1431ff248);
        }
        fVar32 = *(float *)(param_4 + uVar18 * 4) + pfVar25[uVar18];
        pfVar29[uVar18] = fVar32 + fVar32;
        uVar18 = uVar18 + 1;
      } while (param_9 != uVar18);
    }
    puVar11 = *(ulonglong **)(param_1 + 0x10);
    uVar24 = puVar11[4] & 0xfffffffffffffffc;
    if ((uVar24 < *puVar11) || (uVar24 - *puVar11 < param_9 * 4)) {
      uVar24 = pdb_142dc60a0(param_1);
      if (uVar24 == 0) goto LAB_140debd8e;
    }
    else {
      uVar24 = uVar24 + param_9 * -4;
      puVar11[4] = uVar24;
    }
    if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1431fef90);
    }
    uVar18 = param_9 - 1;
    uVar19 = uVar18;
    if (param_5 < uVar18) {
      uVar19 = param_5;
    }
    if (uVar19 < 8) {
      uVar19 = 0;
    }
    else {
      uVar19 = uVar19 + 1;
      uVar22 = 8;
      if ((uVar19 & 7) != 0) {
        uVar22 = (ulonglong)((uint)uVar19 & 7);
      }
      uVar19 = uVar19 - uVar22;
      uVar22 = 0;
      do {
        puVar1 = (undefined8 *)(param_4 + uVar22 * 4);
        uVar13 = puVar1[1];
        puVar2 = (undefined8 *)(param_4 + 0x10 + uVar22 * 4);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (undefined8 *)(uVar24 + uVar22 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar1 = (undefined8 *)(uVar24 + 0x10 + uVar22 * 4);
        *puVar1 = uVar14;
        puVar1[1] = uVar15;
        uVar22 = uVar22 + 8;
      } while (uVar19 != uVar22);
    }
    do {
      if (param_5 == uVar19) goto LAB_140debdab;
      *(undefined4 *)(uVar24 + uVar19 * 4) = *(undefined4 *)(param_4 + uVar19 * 4);
      uVar19 = uVar19 + 1;
    } while (param_9 != uVar19);
    fVar32 = *(float *)((uVar24 - 4) + param_9 * 4);
    fVar5 = *pfVar29;
    fVar33 = *pfVar25;
    *pfVar29 = fVar5 + fVar5;
    pfVar29[param_9 - 1] = (fVar33 * fVar32) / fVar5 + pfVar29[param_9 - 1];
    puVar11 = *(ulonglong **)(param_1 + 0x10);
    uVar27 = puVar11[4] & 0xfffffffffffffffc;
    if ((uVar27 < *puVar11) || (uVar27 - *puVar11 < param_9 * 4)) {
      puVar26 = (uint *)pdb_142dc60a0(param_1);
      if (puVar26 == (uint *)0x0) {
        uVar27 = 0;
        goto LAB_140debd8e;
      }
    }
    else {
      puVar26 = (uint *)(uVar27 + param_9 * -4);
      puVar11[4] = (ulonglong)puVar26;
    }
    *puVar26 = _DAT_142e37820 ^ (uint)fVar5;
    lVar17 = _UNK_1431feea8;
    lVar16 = _DAT_1431feea0;
    auVar34 = _DAT_142e4ffa0;
    if (param_9 != 1) {
      uVar27 = 1;
      if (7 < uVar18) {
        uVar19 = uVar18 & 0xfffffffffffffff8;
        uVar27 = uVar19 + 1;
        uVar22 = 0;
        auVar35 = _DAT_143009dd0;
        auVar37 = _DAT_143006db0;
        do {
          lVar38 = auVar34._0_8_;
          uVar40 = auVar35._0_8_;
          uVar41 = auVar35._8_8_;
          lVar39 = auVar34._8_8_;
          uVar42 = auVar37._0_8_;
          uVar43 = auVar37._8_8_;
          puVar3 = puVar26 + uVar22 + 1;
          *puVar3 = -(uint)(uVar18 == uVar42) & (uint)fVar32;
          puVar3[1] = -(uint)(uVar18 == uVar43) & (uint)fVar32;
          puVar3[2] = -(uint)(uVar18 == uVar40) & (uint)fVar32;
          puVar3[3] = -(uint)(uVar18 == uVar41) & (uint)fVar32;
          puVar3 = puVar26 + uVar22 + 5;
          *puVar3 = -(uint)(uVar42 + lVar38 == uVar18) & (uint)fVar32;
          puVar3[1] = -(uint)(uVar43 + lVar39 == uVar18) & (uint)fVar32;
          puVar3[2] = -(uint)(uVar40 + lVar38 == uVar18) & (uint)fVar32;
          puVar3[3] = -(uint)(uVar41 + lVar39 == uVar18) & (uint)fVar32;
          uVar22 = uVar22 + 8;
          auVar37._0_8_ = uVar42 + lVar16;
          auVar37._8_8_ = uVar43 + lVar17;
          auVar35._0_8_ = uVar40 + lVar16;
          auVar35._8_8_ = uVar41 + lVar17;
        } while (uVar19 != uVar22);
        if (uVar18 == uVar19) goto LAB_140deb8bf;
      }
      if (param_9 != uVar27 + 1) {
        do {
          fVar33 = fVar32;
          if (uVar18 != uVar27) {
            fVar33 = 0.0;
          }
          puVar26[uVar27] = (uint)fVar33;
          uVar27 = uVar27 + 1;
        } while (uVar18 != uVar27);
      }
      fVar33 = fVar32;
      if (uVar27 != uVar18) {
        fVar33 = 0.0;
      }
      puVar26[uVar27] = (uint)fVar33;
    }
LAB_140deb8bf:
    pfVar23 = pfVar25;
    pfVar20 = (float *)pdb_140dea8b0(param_1,pfVar25,param_9,pfVar29,param_9,uVar24,param_9,uVar28,
                                     param_9);
    pfVar21 = (float *)pdb_140dea8b0(param_1,pfVar25,param_9,pfVar29,param_9,uVar24,param_9,puVar26,
                                     param_9);
    pfVar29 = (float *)(param_9 - 1);
    if (pfVar23 <= pfVar29) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfVar29,pfVar23,&UNK_1431fefa8);
    }
    if (pfVar25 <= pfVar29) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pfVar29);
    }
    fVar33 = *pfVar20;
    fVar6 = *pfVar21;
    fVar7 = pfVar20[param_9 - 1];
    fVar8 = pfVar21[param_9 - 1];
    puVar11 = *(ulonglong **)(param_1 + 0x10);
    uVar27 = puVar11[4] & 0xfffffffffffffffc;
    if ((uVar27 < *puVar11) ||
       (uVar27 - *puVar11 <= param_9 * 4 && param_9 * 4 - (uVar27 - *puVar11) != 0)) {
      uVar27 = pdb_142dc60a0(param_1,4);
      if (uVar27 == 0) goto LAB_140debd8e;
    }
    else {
      uVar27 = uVar27 + param_9 * -4;
      puVar11[4] = uVar27;
    }
    fVar32 = (fVar33 - (fVar7 * fVar32) / fVar5) /
             ((fVar6 + _DAT_142e36f28) - (fVar32 * fVar8) / fVar5);
    uVar28 = param_9 - 1;
    if (param_9 < param_9 - 1) {
      uVar28 = param_9;
    }
    if (uVar28 < 8) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      if ((0x1f < uVar27 - (longlong)pfVar20) && (0x1f < uVar27 - (longlong)pfVar21)) {
        uVar28 = uVar28 + 1;
        uVar24 = 8;
        if ((uVar28 & 7) != 0) {
          uVar24 = (ulonglong)((uint)uVar28 & 7);
        }
        uVar24 = uVar28 - uVar24;
        uVar28 = 0;
        do {
          pfVar4 = pfVar20 + uVar28;
          fVar5 = pfVar4[1];
          fVar33 = pfVar4[2];
          fVar6 = pfVar4[3];
          pfVar29 = pfVar20 + uVar28 + 4;
          pfVar25 = pfVar21 + uVar28;
          fVar7 = pfVar25[1];
          fVar8 = pfVar25[2];
          fVar9 = pfVar25[3];
          pfVar23 = pfVar21 + uVar28 + 4;
          auVar36._0_4_ = *pfVar29 - *pfVar23 * fVar32;
          auVar36._4_4_ = pfVar29[1] - pfVar23[1] * fVar32;
          auVar36._8_4_ = pfVar29[2] - pfVar23[2] * fVar32;
          auVar36._12_4_ = pfVar29[3] - pfVar23[3] * fVar32;
          pfVar29 = (float *)(uVar27 + uVar28 * 4);
          *pfVar29 = *pfVar4 - *pfVar25 * fVar32;
          pfVar29[1] = fVar5 - fVar7 * fVar32;
          pfVar29[2] = fVar33 - fVar8 * fVar32;
          pfVar29[3] = fVar6 - fVar9 * fVar32;
          *(undefined1 (*) [16])(uVar27 + 0x10 + uVar28 * 4) = auVar36;
          uVar28 = uVar28 + 8;
        } while (uVar24 != uVar28);
      }
    }
    do {
      if (param_9 == uVar24) goto LAB_140debd93;
      *(float *)(uVar27 + uVar24 * 4) = pfVar20[uVar24] - pfVar21[uVar24] * fVar32;
      uVar24 = uVar24 + 1;
    } while (param_9 != uVar24);
    if (param_9 < 0x666666666666667) {
      puVar11 = *(ulonglong **)(param_1 + 0x10);
      uVar28 = puVar11[4] & 0xfffffffffffffffc;
      if ((uVar28 < *puVar11) || (uVar28 - *puVar11 < param_9 * 0x14)) {
        uVar28 = pdb_142dc60a0(param_1);
        if (uVar28 == 0) goto LAB_140debd8e;
      }
      else {
        uVar28 = uVar28 + param_9 * -0x14;
        puVar11[4] = uVar28;
      }
      fVar32 = _DAT_142e3788c;
      puVar30 = (undefined4 *)(uVar28 + 0x10);
      uVar24 = 1;
      while (uVar24 - param_9 != 1) {
        if ((uVar24 | param_9) >> 0x20 == 0) {
          uVar18 = (uVar24 & 0xffffffff) % (param_9 & 0xffffffff);
        }
        else {
          uVar18 = uVar24 % param_9;
        }
        if (uVar24 - param_7 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_7,param_7,&UNK_1431ff200);
        }
        if (uVar24 - param_5 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_5,param_5,&UNK_1431ff218);
        }
        if (uVar24 - param_3 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_3,param_3,&UNK_1431ff230);
        }
        fVar5 = *(float *)(param_8 + -4 + uVar24 * 4);
        fVar33 = *(float *)(param_8 + uVar18 * 4);
        fVar6 = *(float *)(uVar27 + uVar18 * 4);
        fVar7 = *(float *)(param_4 + -4 + uVar24 * 4);
        fVar8 = *(float *)((uVar27 - 4) + uVar24 * 4);
        fVar9 = *(float *)(param_6 + -4 + uVar24 * 4);
        uVar10 = *(undefined4 *)((param_2 - 4) + uVar24 * 4);
        puVar30[-4] = fVar5;
        puVar30[-3] = (fVar33 - fVar5) * fVar9 - ((fVar8 + fVar8 + fVar6) * fVar7) / fVar32;
        puVar30[-2] = fVar8;
        puVar30[-1] = (fVar6 - fVar8) / (fVar7 * fVar32);
        *puVar30 = uVar10;
        puVar30 = puVar30 + 5;
        bVar31 = uVar24 == param_9;
        uVar24 = uVar24 + 1;
        if (bVar31) {
          return uVar28;
        }
      }
      goto LAB_140debd93;
    }
  }
LAB_140debd8e:
  pdb_142dc6350();
LAB_140debd93:
  pdb_142dc8110(&UNK_1431ff328,0x22,&UNK_1431ff3a8);
LAB_140debdab:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar27,uVar27,&UNK_1431ff260);
}

