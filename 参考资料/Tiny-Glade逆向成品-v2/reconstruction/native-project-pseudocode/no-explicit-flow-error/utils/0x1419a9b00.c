// VA 0x1419a9b00, PDB extent 1464 bytes
// utils::curve::Curve::smooth_weighted<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::smooth_weighted<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1464 */

longlong *
pdb_1419a9b00(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  
  fVar14 = _UNK_142e3c64c;
  fVar13 = _UNK_142e3c648;
  fVar12 = _UNK_142e3c644;
  fVar11 = _DAT_142e3c640;
  fVar10 = _UNK_142e36f6c;
  fVar9 = _UNK_142e36f68;
  fVar8 = _UNK_142e36f64;
  fVar7 = _DAT_142e36f60;
  fVar27 = _UNK_142e36f4c;
  fVar26 = _UNK_142e36f48;
  fVar24 = _UNK_142e36f44;
  fVar32 = _DAT_142e36f40;
  fVar29 = _DAT_142e36f28;
  if (param_2[2] != param_5) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e490,0x35,&UNK_14335e4c8);
  }
  puVar4 = (undefined8 *)param_2[1];
  if (2 < param_5 && param_3 != 0) {
    fVar23 = (float)*puVar4;
    fVar25 = (float)((ulonglong)*puVar4 >> 0x20);
    uVar1 = param_5 - 1;
    uVar16 = param_5 - 3;
    if (uVar1 < param_5 - 3) {
      uVar16 = uVar1;
    }
    lVar15 = 0;
    do {
      fVar28 = (float)puVar4[1];
      fVar30 = (float)((ulonglong)puVar4[1] >> 0x20);
      uVar21 = 1;
      fVar36 = fVar23;
      fVar37 = fVar25;
      fVar38 = 0.0;
      fVar31 = 0.0;
      if (2 < uVar16 + 1) {
        uVar22 = 0;
        fVar31 = fVar30;
        fVar38 = fVar28;
        fVar39 = fVar25;
        fVar40 = fVar23;
        do {
          uVar21 = *(ulonglong *)(param_4 + 0x10 + uVar22 * 8);
          if ((longlong)uVar21 < 0) {
            fVar35 = (float)uVar21;
            uVar21 = *(ulonglong *)(param_4 + 8 + uVar22 * 8);
            if ((longlong)uVar21 < 0) goto LAB_1419a9d07;
LAB_1419a9c20:
            fVar43 = (float)(longlong)uVar21;
          }
          else {
            fVar35 = (float)(longlong)uVar21;
            uVar21 = *(ulonglong *)(param_4 + 8 + uVar22 * 8);
            if (-1 < (longlong)uVar21) goto LAB_1419a9c20;
LAB_1419a9d07:
            fVar43 = (float)uVar21;
          }
          pfVar2 = (float *)(puVar4 + uVar22 + 2);
          fVar36 = *pfVar2;
          fVar37 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar30 = pfVar2[3];
          auVar44._0_4_ = fVar38 * fVar43 + fVar40 * fVar32 + fVar36 * fVar32;
          auVar44._4_4_ = fVar31 * fVar43 + fVar39 * fVar24 + fVar37 * fVar24;
          auVar44._8_4_ = fVar36 * fVar35 + fVar38 * fVar26 + fVar28 * fVar26;
          auVar44._12_4_ = fVar37 * fVar35 + fVar31 * fVar27 + fVar30 * fVar27;
          auVar42._4_4_ = fVar43 + fVar12;
          auVar42._0_4_ = fVar43 + fVar11;
          auVar42._8_4_ = fVar35 + fVar13;
          auVar42._12_4_ = fVar35 + fVar14;
          auVar42 = divps(auVar44,auVar42);
          *(undefined1 (*) [16])(puVar4 + uVar22 + 1) = auVar42;
          uVar22 = uVar22 + 2;
          uVar21 = uVar16 | 1;
          fVar31 = fVar30;
          fVar38 = fVar28;
          fVar39 = fVar37;
          fVar40 = fVar36;
        } while ((uVar16 & 0xfffffffffffffffe) != uVar22);
      }
      lVar15 = lVar15 + 1;
      fVar39 = fVar38;
      fVar40 = fVar31;
      do {
        fVar34 = fVar31;
        fVar33 = fVar38;
        fVar43 = fVar30;
        fVar35 = fVar28;
        if (param_5 == uVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(param_5,param_5,&UNK_14335ea58);
        }
        fVar38 = (float)*(ulonglong *)(param_4 + uVar21 * 8);
        fVar28 = (float)puVar4[uVar21 + 1];
        fVar30 = (float)((ulonglong)puVar4[uVar21 + 1] >> 0x20);
        auVar41._0_4_ = fVar38 * fVar35 + fVar36 * fVar7 + fVar28 * fVar7;
        auVar41._4_4_ = fVar38 * fVar43 + fVar37 * fVar8 + fVar30 * fVar8;
        auVar41._8_4_ = fVar33 * 0.0 + fVar39 * fVar9 + fVar9 * 0.0;
        auVar41._12_4_ = fVar34 * 0.0 + fVar40 * fVar10 + fVar10 * 0.0;
        auVar6._4_4_ = fVar38 + fVar29;
        auVar6._0_4_ = fVar38 + fVar29;
        auVar6._8_8_ = 0;
        auVar42 = divps(auVar41,auVar6);
        puVar4[uVar21] = auVar42._0_8_;
        uVar21 = uVar21 + 1;
        fVar38 = 0.0;
        fVar31 = 0.0;
        fVar36 = fVar35;
        fVar37 = fVar43;
        fVar39 = fVar33;
        fVar40 = fVar34;
      } while (uVar1 != uVar21);
    } while (lVar15 != param_3);
  }
  param_2[5] = 0;
  if (param_5 < 2) {
    uVar17 = 0;
  }
  else {
    fVar29 = (float)*puVar4;
    fVar32 = (float)((ulonglong)*puVar4 >> 0x20);
    if ((ulonglong)param_2[3] < param_5) {
      pdb_142d7f1b0(param_2 + 3,0,param_5,4,4);
      lVar15 = param_2[5];
    }
    else {
      lVar15 = 0;
    }
    lVar5 = param_2[4];
    lVar19 = lVar5 + lVar15 * 4;
    fVar24 = 0.0;
    lVar18 = 0;
    lVar20 = 0;
    do {
      uVar3 = *(undefined8 *)((longlong)puVar4 + lVar20 * 2);
      fVar26 = (float)uVar3;
      fVar27 = (float)((ulonglong)uVar3 >> 0x20);
      fVar29 = fVar29 - fVar26;
      fVar32 = fVar32 - fVar27;
      fVar24 = SQRT(fVar32 * fVar32 + fVar29 * fVar29) + fVar24;
      *(float *)(lVar19 + lVar20) = fVar24;
      uVar3 = *(undefined8 *)((longlong)puVar4 + lVar20 * 2 + 8);
      fVar29 = (float)uVar3;
      fVar32 = (float)((ulonglong)uVar3 >> 0x20);
      fVar26 = fVar26 - fVar29;
      fVar27 = fVar27 - fVar32;
      fVar24 = SQRT(fVar27 * fVar27 + fVar26 * fVar26) + fVar24;
      *(float *)(lVar19 + 4 + lVar20) = fVar24;
      lVar20 = lVar20 + 8;
      lVar18 = lVar18 + -2;
    } while (-lVar18 != (param_5 & 0xfffffffffffffffe));
    if ((param_5 & 1) == 0) {
      lVar15 = lVar15 - lVar18;
    }
    else {
      uVar3 = *(undefined8 *)((longlong)puVar4 + lVar20 * 2);
      fVar29 = fVar29 - (float)uVar3;
      fVar32 = fVar32 - (float)((ulonglong)uVar3 >> 0x20);
      fVar24 = fVar24 + SQRT(fVar32 * fVar32 + fVar29 * fVar29);
      *(float *)(lVar20 + lVar19) = fVar24;
      lVar15 = (lVar15 - lVar18) + 1;
    }
    param_2[5] = lVar15;
    uVar17 = 1;
    if ((fVar24 != 0.0) || (NAN(fVar24))) {
      lVar19 = 0;
      do {
        if (lVar15 * 4 == lVar19) {
          *(float *)(param_2 + 6) = fVar24;
          lVar15 = *param_2;
          lVar19 = param_2[1];
          lVar5 = param_2[2];
          lVar18 = param_2[3];
          lVar20 = param_2[5];
          param_1[4] = param_2[4];
          param_1[5] = lVar20;
          param_1[2] = lVar5;
          param_1[3] = lVar18;
          *param_1 = lVar15;
          param_1[1] = lVar19;
          param_1[6] = param_2[6];
          return param_1;
        }
        fVar29 = *(float *)(lVar5 + lVar19) / fVar24;
        *(float *)(lVar5 + lVar19) = fVar29;
        lVar19 = lVar19 + 4;
      } while ((uint)ABS(fVar29) < 0x7f800000);
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar17;
  *(char *)((longlong)param_1 + 9) = (char)param_5;
  *param_1 = -0x8000000000000000;
  if (*param_2 != 0) {
    pub_1406abac0((byte *)param_2[1],*param_2 << 3,4);
  }
  if (param_2[3] != 0) {
    pub_1406abac0((byte *)param_2[4],param_2[3] << 2,4);
  }
  return param_1;
}

