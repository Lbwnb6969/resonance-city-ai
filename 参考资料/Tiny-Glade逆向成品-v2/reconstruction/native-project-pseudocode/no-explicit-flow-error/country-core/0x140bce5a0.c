// VA 0x140bce5a0, PDB extent 799 bytes
// country_core::utils::project_cursor_onto_ray::ProportionalScreenSpaceCoord::project_onto_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::project_cursor_onto_ray::ProportionalScreenSpaceCoord::project_onto_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/project_cursor_onto_ray.rs
   Extent: 799 */

undefined8 *
pdb_140bce5a0(undefined8 *param_1,float param_2,float param_3,longlong param_4,float *param_5,
             undefined8 *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fStack_e0;
  float fStack_dc;
  float *pfStack_d8;
  code *pcStack_d0;
  float *pfStack_c8;
  code *pcStack_c0;
  undefined1 auStack_b8 [16];
  
  fVar13 = _DAT_142e36f28;
  fStack_e0 = *param_7;
  fStack_dc = param_7[1];
  if (fStack_e0 <= fStack_dc) {
    fVar6 = *(float *)(param_6 + 1);
    auStack_b8 = ZEXT416((uint)fVar6);
    fVar9 = *(float *)((longlong)param_6 + 0x14) + fVar6;
    fVar7 = (float)*param_6;
    fVar8 = (float)((ulonglong)*param_6 >> 0x20);
    fVar2 = fVar8 * param_5[0x24] + fVar7 * param_5[0x20] + fVar6 * param_5[0x28] + param_5[0x2c];
    fVar5 = fVar8 * param_5[0x25] + fVar7 * param_5[0x21] + fVar6 * param_5[0x29] + param_5[0x2d];
    fVar6 = fVar8 * param_5[0x26] + fVar7 * param_5[0x22] + fVar6 * param_5[0x2a] + param_5[0x2e];
    fVar10 = (float)*(undefined8 *)((longlong)param_6 + 0xc) + fVar7;
    fVar11 = (float)((ulonglong)*(undefined8 *)((longlong)param_6 + 0xc) >> 0x20) + fVar8;
    fVar12 = fVar11 * param_5[0x24] + fVar10 * param_5[0x20] + fVar9 * param_5[0x28] + param_5[0x2c]
    ;
    fVar15 = fVar11 * param_5[0x25] + fVar10 * param_5[0x21] + fVar9 * param_5[0x29] + param_5[0x2d]
    ;
    fVar16 = fVar11 * param_5[0x26] + fVar10 * param_5[0x22] + fVar9 * param_5[0x2a] + param_5[0x2e]
    ;
    auVar3._0_4_ = fVar5 * param_5[4] + fVar2 * *param_5 + fVar6 * param_5[8] + param_5[0xc];
    auVar3._4_4_ = fVar5 * param_5[5] + fVar2 * param_5[1] + fVar6 * param_5[9] + param_5[0xd];
    auVar3._8_4_ = fVar5 * param_5[6] + fVar2 * param_5[2] + fVar6 * param_5[10] + param_5[0xe];
    auVar3._12_4_ = fVar5 * param_5[7] + fVar2 * param_5[3] + fVar6 * param_5[0xb] + param_5[0xf];
    auVar14._0_4_ = fVar15 * param_5[4] + fVar12 * *param_5 + fVar16 * param_5[8] + param_5[0xc];
    auVar14._4_4_ = fVar15 * param_5[5] + fVar12 * param_5[1] + fVar16 * param_5[9] + param_5[0xd];
    auVar14._8_4_ = fVar15 * param_5[6] + fVar12 * param_5[2] + fVar16 * param_5[10] + param_5[0xe];
    auVar14._12_4_ =
         fVar15 * param_5[7] + fVar12 * param_5[3] + fVar16 * param_5[0xb] + param_5[0xf];
    auVar1._4_4_ = auVar3._12_4_;
    auVar1._0_4_ = auVar3._12_4_;
    auVar1._8_4_ = auVar3._12_4_;
    auVar1._12_4_ = auVar3._12_4_;
    auVar4 = divps(auVar3,auVar1);
    fVar6 = (float)*(undefined8 *)(param_4 + 8);
    fVar2 = auVar4._0_4_ * fVar6;
    fVar12 = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20);
    fVar5 = auVar4._4_4_ * fVar12;
    auVar4._4_4_ = auVar14._12_4_;
    auVar4._0_4_ = auVar14._12_4_;
    auVar4._8_4_ = auVar14._12_4_;
    auVar4._12_4_ = auVar14._12_4_;
    auVar4 = divps(auVar14,auVar4);
    fVar15 = auVar4._0_4_ * fVar6 - fVar2;
    fVar12 = auVar4._4_4_ * fVar12 - fVar5;
    fVar6 = fVar12 * fVar12 + fVar15 * fVar15;
    if (fVar6 <= _DAT_143006dc0) {
      fVar6 = _DAT_143006dc0;
    }
    fVar6 = ((param_3 - fVar5) * fVar12 + (param_2 - fVar2) * fVar15) / fVar6;
    if (fStack_e0 <= fVar6) {
      fStack_e0 = fVar6;
    }
    fVar6 = fStack_dc;
    if (fStack_e0 <= fStack_dc) {
      fVar6 = fStack_e0;
    }
    fVar5 = _DAT_142e36f28 / auVar14._12_4_;
    fVar2 = (float)pdb_140de9fd0(0.0 / auVar3._12_4_,fVar5,fVar6);
    fVar6 = (float)pdb_140de9fd0(fVar13 / auVar3._12_4_,fVar5,fVar6);
    if (fVar6 <= _DAT_14304ab40) {
      fVar6 = _DAT_14304ab40;
    }
    fVar2 = fVar2 / fVar6;
    fVar13 = fVar13 - fVar2;
    *param_1 = CONCAT44(fVar2 * fVar11 + fVar13 * fVar8,fVar2 * fVar10 + fVar13 * fVar7);
    *(float *)(param_1 + 1) = fVar2 * fVar9 + fVar13 * (float)auStack_b8._0_4_;
    return param_1;
  }
  pfStack_d8 = &fStack_e0;
  pcStack_d0 = pdb_140f705d0;
  pfStack_c8 = &fStack_dc;
  pcStack_c0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143063f40,&pfStack_d8,&UNK_143063fe0);
}

