// VA 0x140080c90, PDB extent 682 bytes
// utils::curve::Curve::try_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::try_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 682 */

longlong * pdb_140080c90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  float *pfVar1;
  ulonglong arg0;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  byte *arg0_00;
  ulonglong uVar6;
  byte *arg0_01;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = param_2[2];
  if (uVar2 < 2) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)((longlong)param_1 + 9) = (char)uVar2;
    *param_1 = -0x8000000000000000;
    lVar8 = *param_2;
    if (lVar8 == 0) {
      return param_1;
    }
    arg0_01 = (byte *)param_2[1];
  }
  else {
    arg0 = uVar2 * 4;
    pdb_14007ee60();
    arg0_00 = pub_1406abab0(arg0,4);
    if (arg0_00 == (byte *)0x0) {
      pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    arg0_01 = (byte *)param_2[1];
    fVar11 = (float)*(undefined8 *)arg0_01;
    fVar12 = (float)((ulonglong)*(undefined8 *)arg0_01 >> 0x20);
    fVar10 = 0.0;
    uVar6 = 0;
    fVar13 = fVar11;
    fVar14 = fVar12;
    do {
      fVar15 = (float)*(undefined8 *)(arg0_01 + uVar6 * 2);
      fVar13 = fVar13 - fVar15;
      fVar16 = (float)((ulonglong)*(undefined8 *)(arg0_01 + uVar6 * 2) >> 0x20);
      fVar14 = fVar14 - fVar16;
      fVar10 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) + fVar10;
      *(float *)(arg0_00 + uVar6) = fVar10;
      fVar13 = (float)*(undefined8 *)(arg0_01 + uVar6 * 2 + 8);
      fVar14 = (float)((ulonglong)*(undefined8 *)(arg0_01 + uVar6 * 2 + 8) >> 0x20);
      fVar15 = fVar15 - fVar13;
      fVar16 = fVar16 - fVar14;
      fVar10 = SQRT(fVar16 * fVar16 + fVar15 * fVar15) + fVar10;
      *(float *)(arg0_00 + uVar6 + 4) = fVar10;
      uVar6 = uVar6 + 8;
    } while ((arg0 & 0xfffffffffffffff8) != uVar6);
    if ((uVar2 & 1) != 0) {
      fVar13 = fVar13 - (float)*(undefined8 *)(arg0_01 + uVar6 * 2);
      fVar14 = fVar14 - (float)((ulonglong)*(undefined8 *)(arg0_01 + uVar6 * 2) >> 0x20);
      fVar10 = fVar10 + SQRT(fVar14 * fVar14 + fVar13 * fVar13);
      *(float *)(arg0_00 + uVar6) = fVar10;
    }
    if ((fVar10 != 0.0) || (NAN(fVar10))) {
      lVar8 = 0;
      while (arg0 - lVar8 != 0) {
        fVar13 = *(float *)(arg0_00 + lVar8);
        *(float *)(arg0_00 + lVar8) = fVar13 / fVar10;
        lVar8 = lVar8 + 4;
        if (0x7f7fffff < (uint)ABS(fVar13 / fVar10)) goto LAB_140080dec;
      }
      if ((param_3 & 1) == 0) goto LAB_140080e41;
      fVar13 = *(float *)(arg0_01 + 8);
      fVar14 = *(float *)(arg0_01 + 0xc);
      if ((fVar11 == fVar13) && (!NAN(fVar11) && !NAN(fVar13))) {
        if ((fVar12 == fVar14) && (!NAN(fVar12) && !NAN(fVar14))) {
          lVar8 = 0;
          goto LAB_140080ec8;
        }
      }
      lVar7 = uVar2 * 8 + -0x10;
      lVar8 = 0;
      pfVar9 = (float *)(arg0_01 + 0x10);
      do {
        do {
          fVar11 = fVar14;
          if (lVar7 == 0) {
LAB_140080e41:
            param_1[2] = param_2[2];
            lVar8 = param_2[1];
            *param_1 = *param_2;
            param_1[1] = lVar8;
            param_1[3] = uVar2;
            param_1[4] = (longlong)arg0_00;
            param_1[5] = uVar2;
            *(float *)(param_1 + 6) = fVar10;
            return param_1;
          }
          pfVar1 = pfVar9 + 2;
          fVar12 = *pfVar9;
          fVar14 = pfVar9[1];
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + -8;
          bVar3 = NAN(fVar13);
          bVar4 = fVar13 != fVar12;
          pfVar9 = pfVar1;
          fVar13 = fVar12;
        } while ((bVar4) || (bVar3 || NAN(fVar12)));
      } while ((fVar11 != fVar14) || (NAN(fVar11) || NAN(fVar14)));
LAB_140080ec8:
      *(undefined1 *)(param_1 + 1) = 2;
      param_1[2] = lVar8;
    }
    else {
LAB_140080dec:
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = -0x8000000000000000;
    pub_1406abac0(arg0_00,arg0,4);
    lVar8 = *param_2;
    if (lVar8 == 0) {
      return param_1;
    }
  }
  pub_1406abac0(arg0_01,lVar8 << 3,4);
  return param_1;
}

