// VA 0x140b48640, PDB extent 822 bytes
// country_core::systems::ui_move_wall_group::group_wire_rms_displacement
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::group_wire_rms_displacement
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 822 */

uint pdb_140b48640(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_2 == 0) {
    fVar19 = 0.0;
    fVar20 = 0.0;
  }
  else {
    lVar16 = param_2 * 200 + param_1;
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar6 = param_4[2];
    fVar7 = param_4[3];
    fVar8 = param_4[5];
    fVar9 = *param_3;
    fVar10 = param_3[1];
    fVar11 = param_3[2];
    fVar12 = param_3[3];
    fVar13 = param_3[5];
    fVar14 = param_4[4];
    fVar15 = param_3[4];
    fVar19 = 0.0;
    fVar20 = 0.0;
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x10);
      if (1 < uVar2) {
        puVar3 = *(undefined8 **)(param_1 + 8);
        fVar24 = (float)*puVar3;
        fVar22 = (float)((ulonglong)*puVar3 >> 0x20);
        fVar23 = (float)puVar3[1];
        fVar26 = (float)((ulonglong)puVar3[1] >> 0x20);
        fVar21 = SQRT((fVar22 - fVar26) * (fVar22 - fVar26) + (fVar24 - fVar23) * (fVar24 - fVar23))
        ;
        fVar25 = (fVar6 * fVar26 + fVar4 * fVar23 + fVar14) -
                 (fVar26 * fVar11 + fVar23 * fVar9 + fVar15);
        fVar27 = (fVar22 * fVar6 + fVar24 * fVar4 + fVar14) -
                 (fVar22 * fVar11 + fVar24 * fVar9 + fVar15);
        fVar23 = (fVar7 * fVar26 + fVar5 * fVar23 + fVar8) -
                 (fVar26 * fVar12 + fVar23 * fVar10 + fVar13);
        fVar24 = (fVar22 * fVar7 + fVar24 * fVar5 + fVar8) -
                 (fVar22 * fVar12 + fVar24 * fVar10 + fVar13);
        fVar19 = fVar19 + ((fVar24 * fVar24 + fVar27 * fVar27 + fVar24 * fVar23 + fVar27 * fVar25 +
                           fVar23 * fVar23 + fVar25 * fVar25) / _DAT_142e3788c) * fVar21;
        fVar20 = fVar20 + fVar21;
        if (uVar2 != 2) {
          lVar17 = uVar2 * 8 + -0x10;
          lVar18 = 0;
          do {
            if ((uVar2 * 8 + -8 == lVar18) || (lVar17 == lVar18)) break;
            uVar1 = *(undefined8 *)((longlong)puVar3 + lVar18 + 8);
            fVar24 = (float)uVar1;
            fVar22 = (float)((ulonglong)uVar1 >> 0x20);
            uVar1 = *(undefined8 *)((longlong)puVar3 + lVar18 + 0x10);
            fVar23 = (float)uVar1;
            fVar26 = (float)((ulonglong)uVar1 >> 0x20);
            fVar21 = SQRT((fVar22 - fVar26) * (fVar22 - fVar26) +
                          (fVar24 - fVar23) * (fVar24 - fVar23));
            fVar25 = (fVar6 * fVar26 + fVar4 * fVar23 + fVar14) -
                     (fVar26 * fVar11 + fVar23 * fVar9 + fVar15);
            fVar27 = (fVar6 * fVar22 + fVar4 * fVar24 + fVar14) -
                     (fVar22 * fVar11 + fVar24 * fVar9 + fVar15);
            fVar23 = (fVar7 * fVar26 + fVar5 * fVar23 + fVar8) -
                     (fVar26 * fVar12 + fVar23 * fVar10 + fVar13);
            fVar24 = (fVar7 * fVar22 + fVar5 * fVar24 + fVar8) -
                     (fVar22 * fVar12 + fVar24 * fVar10 + fVar13);
            fVar19 = fVar19 + ((fVar24 * fVar24 + fVar27 * fVar27 +
                                fVar24 * fVar23 + fVar27 * fVar25 +
                               fVar23 * fVar23 + fVar25 * fVar25) / _DAT_142e3788c) * fVar21;
            fVar20 = fVar20 + fVar21;
            lVar18 = lVar18 + 8;
          } while (lVar17 != lVar18);
        }
      }
      param_1 = param_1 + 200;
    } while (param_1 != lVar16);
  }
  return -(uint)(0.0 < fVar20) & (uint)SQRT(fVar19 / fVar20);
}

