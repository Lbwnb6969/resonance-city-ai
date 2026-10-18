// VA 0x1419a60d0, PDB extent 1614 bytes
// utils::curve::smooth_in_place<glam::f32::vec3::Vec3,utils::curve::UniformCurveSmoother>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::smooth_in_place<glam::f32::vec3::Vec3,utils::curve::UniformCurveSmoother>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1614 */

void pdb_1419a60d0(undefined8 *param_1,ulonglong param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar7 = _UNK_142e36f4c;
  fVar6 = _UNK_142e36f48;
  fVar5 = _UNK_142e36f44;
  fVar4 = _DAT_142e36f40;
  if (2 < param_2 && param_3 != 0) {
    uVar1 = param_2 - 1;
    if (param_4 == '\0') {
      fVar13 = (float)*param_1;
      fVar14 = (float)((ulonglong)*param_1 >> 0x20);
      fVar25 = *(float *)(param_1 + 1);
      param_2 = param_2 - 2;
      uVar12 = param_2 & 0xfffffffffffffffc;
      lVar10 = 0;
      fVar21 = _DAT_142e36f60;
      fVar22 = _UNK_142e36f64;
      fVar20 = _DAT_142e36f50;
      do {
        uVar18 = *(undefined8 *)((longlong)param_1 + 0xc);
        fVar15 = (float)uVar18;
        fVar17 = (float)((ulonglong)uVar18 >> 0x20);
        fVar26 = *(float *)((longlong)param_1 + 0x14);
        lVar8 = 1;
        uVar11 = uVar12;
        pfVar9 = (float *)((longlong)param_1 + 0x44);
        fVar27 = fVar26;
        fVar16 = fVar25;
        fVar28 = fVar13;
        fVar29 = fVar14;
        fVar30 = fVar14;
        fVar31 = fVar15;
        fVar32 = fVar13;
        fVar23 = fVar25;
        if (param_2 < 4) {
LAB_1419a66a6:
          pfVar9 = (float *)((longlong)param_1 + lVar8 * 0xc + 0x14);
          lVar8 = uVar1 - lVar8;
          do {
            fVar31 = fVar26;
            fVar30 = fVar17;
            fVar27 = fVar15;
            fVar26 = *pfVar9;
            fVar15 = (float)*(undefined8 *)(pfVar9 + -2);
            fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
            *(ulonglong *)(pfVar9 + -5) =
                 CONCAT44(((fVar29 + fVar17) * fVar22 - fVar30) * fVar22 + fVar30,
                          ((fVar28 + fVar15) * fVar21 - fVar27) * fVar21 + fVar27);
            pfVar9[-3] = ((fVar16 + fVar26) * fVar20 - fVar31) * fVar20 + fVar31;
            pfVar9 = pfVar9 + 3;
            lVar8 = lVar8 + -1;
            fVar16 = fVar31;
            fVar28 = fVar27;
            fVar29 = fVar30;
          } while (lVar8 != 0);
        }
        else {
          do {
            fVar16 = pfVar9[-3];
            fVar26 = *pfVar9;
            fVar21 = pfVar9[-6];
            fVar22 = pfVar9[-0xb];
            fVar20 = pfVar9[-10];
            fVar24 = pfVar9[-9];
            fVar2 = pfVar9[-8];
            fVar3 = pfVar9[-7];
            fVar19 = (float)((ulonglong)uVar18 >> 0x20);
            fVar28 = (float)*(undefined8 *)(pfVar9 + -5);
            fVar29 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -5) >> 0x20);
            fVar15 = (float)*(undefined8 *)(pfVar9 + -2);
            fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
            pfVar9[-0xe] = ((fVar32 + fVar22) * fVar4 - fVar31) * fVar4 + fVar31;
            pfVar9[-0xd] = ((fVar30 + fVar20) * fVar4 - fVar19) * fVar4 + fVar19;
            pfVar9[-0xc] = ((fVar23 + fVar24) * fVar4 - fVar27) * fVar4 + fVar27;
            pfVar9[-0xb] = ((fVar31 + fVar2) * fVar5 - fVar22) * fVar5 + fVar22;
            pfVar9[-10] = ((fVar19 + fVar3) * fVar5 - fVar20) * fVar5 + fVar20;
            pfVar9[-9] = ((fVar27 + fVar21) * fVar5 - fVar24) * fVar5 + fVar24;
            pfVar9[-8] = ((fVar22 + fVar28) * fVar6 - fVar2) * fVar6 + fVar2;
            pfVar9[-7] = ((fVar20 + fVar29) * fVar6 - fVar3) * fVar6 + fVar3;
            pfVar9[-6] = ((fVar24 + fVar16) * fVar6 - fVar21) * fVar6 + fVar21;
            pfVar9[-5] = ((fVar2 + fVar15) * fVar7 - fVar28) * fVar7 + fVar28;
            pfVar9[-4] = ((fVar3 + fVar17) * fVar7 - fVar29) * fVar7 + fVar29;
            pfVar9[-3] = ((fVar21 + fVar26) * fVar7 - fVar16) * fVar7 + fVar16;
            uVar18 = CONCAT44(fVar17,fVar29);
            uVar11 = uVar11 - 4;
            pfVar9 = pfVar9 + 0xc;
            fVar27 = fVar26;
            fVar30 = fVar29;
            fVar31 = fVar15;
            fVar32 = fVar28;
            fVar23 = fVar16;
          } while (uVar11 != 0);
          lVar8 = uVar12 + 1;
          fVar21 = _DAT_142e36f60;
          fVar22 = _UNK_142e36f64;
          fVar20 = _DAT_142e36f50;
          if (param_2 != uVar12) goto LAB_1419a66a6;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != param_3);
    }
    else {
      uVar12 = uVar1 & 0xfffffffffffffffc;
      lVar10 = 0;
      fVar25 = _DAT_142e36f50;
      fVar21 = _DAT_142e36f60;
      fVar22 = _UNK_142e36f64;
      do {
        fVar20 = *(float *)((longlong)param_1 + param_2 * 0xc + -0x10);
        uVar18 = *(undefined8 *)((longlong)param_1 + param_2 * 0xc + -0x18);
        fVar14 = (float)*param_1;
        fVar16 = (float)((ulonglong)*param_1 >> 0x20);
        fVar13 = *(float *)(param_1 + 1);
        if (uVar1 < 4) {
          uVar11 = 0;
LAB_1419a63d9:
          pfVar9 = (float *)((longlong)param_1 + uVar11 * 0xc + 0x14);
          lVar8 = uVar1 - uVar11;
          do {
            fVar26 = *pfVar9;
            fVar15 = (float)*(undefined8 *)(pfVar9 + -2);
            fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
            *(ulonglong *)(pfVar9 + -5) =
                 CONCAT44((((float)((ulonglong)uVar18 >> 0x20) + fVar17) * fVar22 - fVar16) * fVar22
                          + fVar16,(((float)uVar18 + fVar15) * fVar21 - fVar14) * fVar21 + fVar14);
            pfVar9[-3] = ((fVar20 + fVar26) * fVar25 - fVar13) * fVar25 + fVar13;
            pfVar9 = pfVar9 + 3;
            uVar18 = CONCAT44(fVar16,fVar14);
            lVar8 = lVar8 + -1;
            fVar14 = fVar15;
            fVar16 = fVar17;
            fVar20 = fVar13;
            fVar13 = fVar26;
          } while (lVar8 != 0);
        }
        else {
          pfVar9 = (float *)(param_1 + 7);
          uVar11 = uVar12;
          fVar25 = fVar16;
          fVar21 = (float)((ulonglong)uVar18 >> 0x20);
          fVar22 = fVar14;
          fVar26 = (float)uVar18;
          fVar15 = fVar13;
          fVar17 = fVar20;
          do {
            fVar20 = pfVar9[-3];
            fVar13 = *pfVar9;
            fVar27 = pfVar9[-6];
            fVar28 = pfVar9[-0xb];
            fVar29 = pfVar9[-10];
            fVar30 = pfVar9[-9];
            fVar31 = pfVar9[-8];
            fVar32 = pfVar9[-7];
            uVar18 = *(undefined8 *)(pfVar9 + -5);
            fVar23 = (float)uVar18;
            fVar24 = (float)((ulonglong)uVar18 >> 0x20);
            fVar14 = (float)*(undefined8 *)(pfVar9 + -2);
            fVar16 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
            pfVar9[-0xe] = ((fVar26 + fVar28) * fVar4 - fVar22) * fVar4 + fVar22;
            pfVar9[-0xd] = ((fVar21 + fVar29) * fVar4 - fVar25) * fVar4 + fVar25;
            pfVar9[-0xc] = ((fVar17 + fVar30) * fVar4 - fVar15) * fVar4 + fVar15;
            pfVar9[-0xb] = ((fVar22 + fVar31) * fVar5 - fVar28) * fVar5 + fVar28;
            pfVar9[-10] = ((fVar25 + fVar32) * fVar5 - fVar29) * fVar5 + fVar29;
            pfVar9[-9] = ((fVar15 + fVar27) * fVar5 - fVar30) * fVar5 + fVar30;
            pfVar9[-8] = ((fVar28 + fVar23) * fVar6 - fVar31) * fVar6 + fVar31;
            pfVar9[-7] = ((fVar29 + fVar24) * fVar6 - fVar32) * fVar6 + fVar32;
            pfVar9[-6] = ((fVar30 + fVar20) * fVar6 - fVar27) * fVar6 + fVar27;
            pfVar9[-5] = ((fVar31 + fVar14) * fVar7 - fVar23) * fVar7 + fVar23;
            pfVar9[-4] = ((fVar32 + fVar16) * fVar7 - fVar24) * fVar7 + fVar24;
            pfVar9[-3] = ((fVar27 + fVar13) * fVar7 - fVar20) * fVar7 + fVar20;
            pfVar9 = pfVar9 + 0xc;
            uVar11 = uVar11 - 4;
            fVar25 = fVar16;
            fVar21 = fVar24;
            fVar22 = fVar14;
            fVar26 = fVar23;
            fVar15 = fVar13;
            fVar17 = fVar20;
          } while (uVar11 != 0);
          uVar11 = uVar12;
          fVar25 = _DAT_142e36f50;
          fVar21 = _DAT_142e36f60;
          fVar22 = _UNK_142e36f64;
          if (uVar1 != uVar12) goto LAB_1419a63d9;
        }
        lVar10 = lVar10 + 1;
        uVar18 = *param_1;
        *(undefined4 *)((longlong)param_1 + param_2 * 0xc + -4) = *(undefined4 *)(param_1 + 1);
        *(undefined8 *)((longlong)param_1 + param_2 * 0xc + -0xc) = uVar18;
      } while (lVar10 != param_3);
    }
  }
  return;
}

