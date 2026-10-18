// VA 0x140b4a9f0, PDB extent 792 bytes
// country_core::systems::ui_wall_transform_gizmos::clip_polygon_to_half_space<country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::clip_polygon_to_half_space<country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 792 */

ulonglong * pdb_140b4a9f0(ulonglong *param_1,ulonglong *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  float *pfVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  undefined8 uStack_114;
  float fStack_10c;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  
  uVar12 = (ulonglong)(uint)*param_2;
  if ((uVar12 == 0) || ((uint *)((longlong)param_2 + uVar12 * 0xc) == (uint *)0x8)) {
    uVar12 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = param_2[4];
    uVar10 = param_2[5];
    uVar11 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar11;
    param_1[4] = uVar9;
    param_1[5] = uVar10;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *param_1 = uVar12;
    param_1[1] = uVar6;
  }
  else {
    pfVar1 = (float *)((longlong)param_2 + uVar12 * 0xc);
    uStack_118 = 0;
    fVar2 = *param_3;
    fVar3 = *param_4;
    uStack_d8 = *param_2;
    uStack_d0 = param_2[1];
    uStack_a8 = param_2[6];
    uStack_a0 = param_2[7];
    uStack_b8 = param_2[4];
    uStack_b0 = param_2[5];
    uStack_c8 = param_2[2];
    uStack_c0 = param_2[3];
    uVar15 = uStack_118;
    if ((uStack_d8 & 0xffffffff) != 0) {
      pfVar14 = (float *)((longlong)&uStack_d0 + 4);
      uVar15 = 0;
      uStack_98 = 1;
      fVar19 = *pfVar1;
      fVar20 = (float)*(undefined8 *)(pfVar1 + -2);
      fVar21 = (float)((ulonglong)*(undefined8 *)(pfVar1 + -2) >> 0x20);
      fVar22 = _DAT_143058d40 - (pfVar1[-1] - fVar2) / fVar3;
      do {
        uVar5 = *(undefined8 *)(pfVar14 + -2);
        fVar17 = (float)uVar5;
        fVar18 = (float)((ulonglong)uVar5 >> 0x20);
        fVar4 = *pfVar14;
        fVar23 = _DAT_143058d40 - (fVar18 - fVar2) / fVar3;
        if (0.0 <= fVar23 != 0.0 <= fVar22) {
          fVar22 = fVar22 / (fVar22 - fVar23);
          fVar24 = _DAT_142e36f28 - fVar22;
          fStack_124 = fVar22 * fVar17 + fVar20 * fVar24;
          fStack_120 = fVar22 * fVar18 + fVar21 * fVar24;
          fStack_11c = fVar22 * fVar4 + fVar19 * fVar24;
          if (4 < uVar15) {
            puVar13 = &UNK_143059238;
            goto LAB_140b4ace5;
          }
          *(ulonglong *)((longlong)&uStack_114 + (ulonglong)uVar15 * 0xc) =
               CONCAT44(fStack_120,fStack_124);
          (&fStack_10c)[(ulonglong)uVar15 * 3] = fStack_11c;
          uVar15 = uVar15 + 1;
        }
        if (0.0 <= fVar23) {
          if (4 < uVar15) {
            puVar13 = &UNK_143059250;
            fStack_124 = fVar17;
            fStack_120 = fVar18;
            fStack_11c = fVar4;
LAB_140b4ace5:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143383e10,0x2b,&fStack_124,&UNK_143383e60,puVar13);
          }
          *(undefined8 *)((longlong)&uStack_114 + (ulonglong)uVar15 * 0xc) = uVar5;
          (&fStack_10c)[(ulonglong)uVar15 * 3] = fVar4;
          uVar15 = uVar15 + 1;
        }
        pfVar14 = pfVar14 + 3;
        bVar16 = uStack_98 != (uStack_d8 & 0xffffffff);
        uStack_98 = uStack_98 + 1;
        fVar19 = fVar4;
        fVar20 = fVar17;
        fVar21 = fVar18;
        fVar22 = fVar23;
      } while (bVar16);
    }
    uStack_118 = uVar15;
    param_1[6] = uStack_e8;
    param_1[7] = uStack_e0;
    param_1[4] = uStack_f8;
    param_1[5] = uStack_f0;
    param_1[2] = uStack_108;
    param_1[3] = uStack_100;
    *(uint *)param_1 = uStack_118;
    *(undefined8 *)((longlong)param_1 + 4) = uStack_114;
    *(float *)((longlong)param_1 + 0xc) = fStack_10c;
  }
  return param_1;
}

