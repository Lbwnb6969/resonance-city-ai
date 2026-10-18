// VA 0x140b4ad10, PDB extent 755 bytes
// country_core::systems::ui_wall_transform_gizmos::clip_polygon_to_half_space<country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::clip_polygon_to_half_space<country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 755 */

ulonglong * pdb_140b4ad10(ulonglong *param_1,ulonglong *param_2,float *param_3,float *param_4)

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
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  undefined8 uStack_104;
  float fStack_fc;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  
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
    uStack_108 = 0;
    fVar2 = *param_3;
    fVar3 = *param_4;
    uStack_c8 = *param_2;
    uStack_c0 = param_2[1];
    uStack_98 = param_2[6];
    uStack_90 = param_2[7];
    uStack_a8 = param_2[4];
    uStack_a0 = param_2[5];
    uStack_b8 = param_2[2];
    uStack_b0 = param_2[3];
    uVar15 = uStack_108;
    if ((uStack_c8 & 0xffffffff) != 0) {
      pfVar14 = (float *)((longlong)&uStack_c0 + 4);
      uVar15 = 0;
      uStack_88 = 1;
      fVar17 = (pfVar1[-1] - fVar2) / fVar3;
      fVar20 = *pfVar1;
      fVar21 = (float)*(undefined8 *)(pfVar1 + -2);
      fVar22 = (float)((ulonglong)*(undefined8 *)(pfVar1 + -2) >> 0x20);
      do {
        uVar5 = *(undefined8 *)(pfVar14 + -2);
        fVar18 = (float)uVar5;
        fVar19 = (float)((ulonglong)uVar5 >> 0x20);
        fVar4 = *pfVar14;
        fVar23 = (fVar19 - fVar2) / fVar3;
        if (0.0 <= fVar23 != 0.0 <= fVar17) {
          fVar17 = fVar17 / (fVar17 - fVar23);
          fVar24 = _DAT_142e36f28 - fVar17;
          fStack_114 = fVar17 * fVar18 + fVar21 * fVar24;
          fStack_110 = fVar17 * fVar19 + fVar22 * fVar24;
          fStack_10c = fVar17 * fVar4 + fVar20 * fVar24;
          if (4 < uVar15) {
            puVar13 = &UNK_143059238;
            goto LAB_140b4afe0;
          }
          *(ulonglong *)((longlong)&uStack_104 + (ulonglong)uVar15 * 0xc) =
               CONCAT44(fStack_110,fStack_114);
          (&fStack_fc)[(ulonglong)uVar15 * 3] = fStack_10c;
          uVar15 = uVar15 + 1;
        }
        if (0.0 <= fVar23) {
          if (4 < uVar15) {
            puVar13 = &UNK_143059250;
            fStack_114 = fVar18;
            fStack_110 = fVar19;
            fStack_10c = fVar4;
LAB_140b4afe0:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143383e10,0x2b,&fStack_114,&UNK_143383e60,puVar13);
          }
          *(undefined8 *)((longlong)&uStack_104 + (ulonglong)uVar15 * 0xc) = uVar5;
          (&fStack_fc)[(ulonglong)uVar15 * 3] = fVar4;
          uVar15 = uVar15 + 1;
        }
        pfVar14 = pfVar14 + 3;
        bVar16 = uStack_88 != (uStack_c8 & 0xffffffff);
        uStack_88 = uStack_88 + 1;
        fVar17 = fVar23;
        fVar20 = fVar4;
        fVar21 = fVar18;
        fVar22 = fVar19;
      } while (bVar16);
    }
    uStack_108 = uVar15;
    param_1[6] = uStack_d8;
    param_1[7] = uStack_d0;
    param_1[4] = uStack_e8;
    param_1[5] = uStack_e0;
    param_1[2] = uStack_f8;
    param_1[3] = uStack_f0;
    *(uint *)param_1 = uStack_108;
    *(undefined8 *)((longlong)param_1 + 4) = uStack_104;
    *(float *)((longlong)param_1 + 0xc) = fStack_fc;
  }
  return param_1;
}

