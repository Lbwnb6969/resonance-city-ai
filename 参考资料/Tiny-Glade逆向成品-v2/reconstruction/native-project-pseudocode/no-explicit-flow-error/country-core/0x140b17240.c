// VA 0x140b17240, PDB extent 1333 bytes
// mesh_to_sdf::geo::closest_point_triangle<array$<f32,3> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: mesh_to_sdf::geo::closest_point_triangle<array$<f32,3> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1333 */

void pdb_140b17240(undefined8 *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  float fVar26;
  float fVar27;
  
  if ((((*param_3 != *param_4) || (NAN(*param_3) || NAN(*param_4))) || (param_3[1] != param_4[1]))
     || (NAN(param_3[1]) || NAN(param_4[1]))) {
    bVar1 = false;
    bVar2 = bVar1;
    if ((*param_4 == *param_5) && (bVar2 = false, !NAN(*param_4) && !NAN(*param_5)))
    goto LAB_140b172ee;
LAB_140b1731f:
    bVar1 = bVar2;
    bVar2 = false;
    if ((*param_3 != *param_5) || (NAN(*param_3) || NAN(*param_5))) goto LAB_140b17392;
LAB_140b1732e:
    if ((param_3[1] != param_5[1]) || (NAN(param_3[1]) || NAN(param_5[1]))) goto LAB_140b17392;
    bVar3 = param_5[2] == param_3[2];
  }
  else {
    bVar1 = param_4[2] == param_3[2];
    bVar2 = bVar1;
    if ((*param_4 != *param_5) || (NAN(*param_4) || NAN(*param_5))) goto LAB_140b1731f;
LAB_140b172ee:
    bVar2 = bVar1;
    if ((param_4[1] != param_5[1]) || (NAN(param_4[1]) || NAN(param_5[1]))) goto LAB_140b1731f;
    bVar2 = param_5[2] == param_4[2];
    if ((*param_3 == *param_5) && (!NAN(*param_3) && !NAN(*param_5))) goto LAB_140b1732e;
LAB_140b17392:
    bVar3 = false;
  }
  if (bVar1) {
    if ((bool)(bVar2 & bVar3)) {
LAB_140b1739e:
      *(float *)(param_1 + 1) = param_3[2];
      *param_1 = *(undefined8 *)param_3;
      return;
    }
    fVar19 = param_3[2];
    uVar6 = *(undefined8 *)param_3;
    fVar7 = (float)*(undefined8 *)param_5 - (float)uVar6;
    fVar11 = (float)((ulonglong)uVar6 >> 0x20);
    fVar9 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20) - fVar11;
    fVar10 = *param_2 - (float)uVar6;
    fVar11 = param_2[1] - fVar11;
    fVar16 = param_5[2];
  }
  else {
    if ((!bVar2) && (!bVar3)) {
      fVar20 = (float)*(undefined8 *)param_4;
      fVar21 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      fVar4 = (float)*(undefined8 *)param_3;
      fVar5 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
      fVar9 = fVar20 - fVar4;
      fVar10 = fVar21 - fVar5;
      fVar19 = param_4[2];
      fVar16 = param_3[2];
      fVar14 = (float)*(undefined8 *)param_5;
      fVar17 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
      fVar15 = fVar14 - fVar4;
      fVar18 = fVar17 - fVar5;
      fVar11 = param_5[2];
      fVar12 = fVar11 - fVar16;
      fVar13 = fVar19 - fVar16;
      fVar8 = (float)*(undefined8 *)param_2;
      fVar27 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      fVar7 = param_2[2];
      fVar25 = (fVar7 - fVar16) * fVar13 + (fVar8 - fVar4) * fVar9 + fVar10 * (fVar27 - fVar5);
      fVar26 = (fVar7 - fVar16) * fVar12 + (fVar27 - fVar5) * fVar18 + fVar15 * (fVar8 - fVar4);
      if ((0.0 < fVar25) || (0.0 < fVar26)) {
        fVar23 = (fVar7 - fVar19) * fVar12 + (fVar27 - fVar21) * fVar18 + fVar15 * (fVar8 - fVar20);
        fVar24 = (fVar7 - fVar19) * fVar13 + (fVar8 - fVar20) * fVar9 + fVar10 * (fVar27 - fVar21);
        if ((0.0 <= fVar24) && (fVar23 <= fVar24)) {
          *(float *)(param_1 + 1) = param_4[2];
          *param_1 = *(undefined8 *)param_4;
          return;
        }
        fVar22 = fVar13 * (fVar7 - fVar11) + fVar9 * (fVar8 - fVar14) + fVar10 * (fVar27 - fVar17);
        fVar7 = fVar12 * (fVar7 - fVar11) + fVar18 * (fVar27 - fVar17) + fVar15 * (fVar8 - fVar14);
        if ((0.0 <= fVar7) && (fVar22 <= fVar7)) {
          *(float *)(param_1 + 1) = param_5[2];
          *param_1 = *(undefined8 *)param_5;
          return;
        }
        fVar8 = fVar25 * fVar23 - fVar26 * fVar24;
        if (((0.0 < fVar24) || (fVar25 < 0.0)) || (0.0 < fVar8)) {
          fVar25 = fVar26 * fVar22 - fVar25 * fVar7;
          if (((0.0 < fVar7) || (fVar26 < 0.0)) || (0.0 < fVar25)) {
            fVar26 = fVar24 * fVar7 - fVar23 * fVar22;
            if (((fVar26 <= 0.0) && (fVar23 = fVar23 - fVar24, 0.0 <= fVar23)) &&
               (0.0 <= fVar22 - fVar7)) {
              fVar23 = fVar23 / ((fVar22 - fVar7) + fVar23);
              *param_1 = CONCAT44(fVar23 * (fVar17 - fVar21) + fVar21,
                                  fVar23 * (fVar14 - fVar20) + fVar20);
              *(float *)(param_1 + 1) = (fVar11 - fVar19) * fVar23 + fVar19;
              return;
            }
            fVar19 = _DAT_142e36f28 / (fVar8 + fVar26 + fVar25);
            fVar25 = fVar25 * fVar19;
            fVar19 = fVar19 * fVar8;
            *param_1 = CONCAT44(fVar18 * fVar19 + fVar5 + fVar10 * fVar25,
                                fVar15 * fVar19 + fVar4 + fVar9 * fVar25);
            *(float *)(param_1 + 1) = fVar12 * fVar19 + fVar16 + fVar13 * fVar25;
            return;
          }
          fVar26 = fVar26 / (fVar26 - fVar7);
          fVar13 = fVar12 * fVar26;
          fVar9 = fVar15 * fVar26;
          fVar10 = fVar18 * fVar26;
        }
        else {
          fVar25 = fVar25 / (fVar25 - fVar24);
          fVar13 = fVar13 * fVar25;
          fVar9 = fVar9 * fVar25;
          fVar10 = fVar10 * fVar25;
        }
        *param_1 = CONCAT44(fVar5 + fVar10,fVar4 + fVar9);
        *(float *)(param_1 + 1) = fVar16 + fVar13;
        return;
      }
      goto LAB_140b1739e;
    }
    fVar19 = param_3[2];
    uVar6 = *(undefined8 *)param_3;
    fVar7 = (float)*(undefined8 *)param_4 - (float)uVar6;
    fVar11 = (float)((ulonglong)uVar6 >> 0x20);
    fVar9 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20) - fVar11;
    fVar10 = *param_2 - (float)uVar6;
    fVar11 = param_2[1] - fVar11;
    fVar16 = param_4[2];
  }
  fVar16 = fVar16 - fVar19;
  fVar10 = (fVar9 * fVar11 + fVar10 * fVar7 + (param_2[2] - fVar19) * fVar16) /
           (fVar7 * fVar7 + fVar9 * fVar9 + fVar16 * fVar16);
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar10;
  }
  fVar10 = _DAT_142e36f28;
  if (fVar11 <= _DAT_142e36f28) {
    fVar10 = fVar11;
  }
  *param_1 = CONCAT44(fVar10 * fVar9 + (float)((ulonglong)uVar6 >> 0x20),
                      fVar10 * fVar7 + (float)uVar6);
  *(float *)(param_1 + 1) = fVar10 * fVar16 + fVar19;
  return;
}

