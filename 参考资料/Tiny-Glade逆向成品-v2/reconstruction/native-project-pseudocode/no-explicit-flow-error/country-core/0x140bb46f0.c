// VA 0x140bb46f0, PDB extent 635 bytes
// country_core::systems::ivy::ivy_grower::closest_segment_index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_grower::closest_segment_index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
   Extent: 635 */

undefined8 *
pdb_140bb46f0(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,longlong param_5,
             float param_6)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  
  *param_1 = 0;
  fVar6 = _DAT_143006dc0;
  fVar5 = _DAT_142e3a74c;
  uVar4 = _UNK_142e37824;
  uVar3 = _DAT_142e37820;
  uVar2 = _DAT_142e377e0;
  fVar1 = _DAT_142e36f28;
  if (param_5 != 0) {
    puVar7 = param_4 + param_5 * 7;
    lVar8 = 0;
    fVar10 = _DAT_142e3a74c;
    do {
      while( true ) {
        if ((*(float *)(param_4 + 3) <= param_6) ||
           (*(float *)((longlong)param_4 + 0x1c) <= param_6)) break;
LAB_140bb484c:
        param_4 = param_4 + 7;
        lVar8 = lVar8 + 1;
        if (param_4 == puVar7) {
          return param_1;
        }
      }
      fVar11 = (float)*param_4;
      fVar12 = (float)((ulonglong)*param_4 >> 0x20);
      fVar13 = (float)param_4[1] - fVar11;
      fVar14 = (float)((ulonglong)param_4[1] >> 0x20) - fVar12;
      fVar19 = fVar14 * fVar14 + fVar13 * fVar13;
      fVar20 = fVar19;
      if (fVar19 <= fVar6) {
        fVar20 = fVar6;
      }
      fVar20 = ((param_3 - fVar12) * fVar14 + (param_2 - fVar11) * fVar13) / fVar20;
      fVar15 = 0.0;
      if (0.0 <= fVar20) {
        fVar15 = fVar20;
      }
      fVar20 = fVar1;
      if (fVar15 <= fVar1) {
        fVar20 = fVar15;
      }
      if (param_6 < *(float *)((longlong)param_4 + 0x1c) * fVar20 +
                    *(float *)(param_4 + 3) * (fVar1 - fVar20)) goto LAB_140bb484c;
      fVar19 = SQRT(fVar19);
      fVar15 = (float)((uint)(fVar20 - fVar20) & uVar2) * fVar19 * fVar5;
      if (fVar10 <= fVar15) goto LAB_140bb484c;
      auVar16._0_4_ = (uint)fVar14 ^ uVar3;
      auVar17._4_4_ = (uint)fVar14 ^ uVar4;
      auVar17._0_4_ = auVar16._0_4_;
      auVar17._8_4_ = auVar17._4_4_;
      auVar17._12_4_ = fVar14;
      auVar16._8_8_ = auVar17._8_8_;
      auVar16._4_4_ = fVar13;
      auVar18._4_4_ = fVar19;
      auVar18._0_4_ = fVar19;
      auVar18._8_8_ = 0;
      auVar18 = divps(auVar16,auVar18);
      fVar15 = (float)((uint)(auVar18._4_4_ * (fVar12 - param_3) +
                             auVar18._0_4_ * (fVar11 - param_2)) & uVar2) + fVar15;
      if (fVar15 < fVar10) {
        if ((fVar20 < 0.0) || (fVar1 < fVar20)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
        }
        uVar9 = pdb_140de9fd0(*(undefined4 *)(param_4 + 2),*(undefined4 *)((longlong)param_4 + 0x14)
                             );
        param_1[1] = lVar8;
        *(float *)(param_1 + 2) = fVar15;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar9;
        *param_1 = 1;
        fVar10 = fVar15;
      }
      lVar8 = lVar8 + 1;
      param_4 = param_4 + 7;
    } while (param_4 != puVar7);
  }
  return param_1;
}

