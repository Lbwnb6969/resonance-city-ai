// VA 0x140b74440, PDB extent 903 bytes
// country_core::systems::utils_intersect::line_x_shape_overlap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/utils_intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::utils_intersect::line_x_shape_overlap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/utils_intersect.rs
   Extent: 903 */

undefined4 *
pdb_140b74440(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int *param_5,float param_6)

{
  int *piVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar10 = (float)param_2[1];
  fVar11 = (float)((ulonglong)param_2[1] >> 0x20);
  piVar1 = param_5 + 1;
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar4 = (float)*param_2;
  if (*param_5 == 1) {
    pdb_140df1c10(&fStack_a8,piVar1);
    auVar5 = _DAT_14301bc40;
    fVar7 = fStack_9c * fStack_a8;
    fVar9 = fStack_a0 * fStack_a4;
    auVar8._4_4_ = fVar7 - fVar9;
    auVar8._0_4_ = fVar7 - fVar9;
    auVar8._8_4_ = fVar7 - fVar9;
    auVar8._12_4_ = fVar7 - fVar9;
    auVar8 = divps(_DAT_14301bc40,auVar8);
    fVar12 = fVar4 - (float)*(undefined8 *)(param_5 + 3);
    fVar13 = fVar3 - (float)((ulonglong)*(undefined8 *)(param_5 + 3) >> 0x20);
    pdb_140df1c10(&fStack_b8,piVar1);
    fVar7 = fStack_ac * fStack_b8;
    fVar9 = fStack_b0 * fStack_b4;
    auVar14._4_4_ = fVar7 - fVar9;
    auVar14._0_4_ = fVar7 - fVar9;
    auVar14._8_4_ = fVar7 - fVar9;
    auVar14._12_4_ = fVar7 - fVar9;
    auVar14 = divps(auVar5,auVar14);
    fVar10 = fVar10 - fVar4;
    fVar11 = fVar11 - fVar3;
    fStack_98 = fVar13 * fStack_a0 * auVar8._8_4_ + fVar12 * fStack_9c * auVar8._0_4_;
    fStack_94 = fVar13 * fStack_a8 * auVar8._12_4_ + fVar12 * fStack_a4 * auVar8._4_4_;
    fStack_90 = fVar11 * fStack_b0 * auVar14._8_4_ + fVar10 * fStack_ac * auVar14._0_4_;
    fStack_8c = fVar11 * fStack_b8 * auVar14._12_4_ + fVar10 * fStack_b4 * auVar14._4_4_;
    fVar4 = 0.0;
    pdb_140deead0(&fStack_b8);
    fVar3 = (float)pdb_140deea90(&fStack_b8,&fStack_98);
    fStack_a8 = fVar3;
    fStack_a4 = fVar4;
    cVar2 = pdb_140dee720(&fStack_a8);
    if ((cVar2 == '\0') || ((_DAT_142e36f28 < fVar3 || (fVar4 < 0.0)))) goto LAB_140b746ee;
    if (0.0 <= fVar3) {
      if ((fVar3 < 0.0) || (_DAT_142e36f28 < fVar3)) goto LAB_140b747ae;
      goto LAB_140b74751;
    }
LAB_140b7466e:
    fVar3 = _DAT_142e36f28;
    auVar5._8_4_ = in_XMM2_Dc;
    auVar5._0_8_ = param_3;
    auVar5._12_4_ = in_XMM2_Dd;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = (float)param_3 + param_6;
    fVar10 = (float)pub_142e32a70(auVar6._0_8_);
    fVar3 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                   (uint)(fVar3 + fVar10) & -(uint)(fVar10 < 0.0));
    if (_DAT_142e36f28 < fVar4) goto LAB_140b746b4;
  }
  else {
    pdb_140def380(&fStack_b8,piVar1,fVar4,fVar3,fVar10 - fVar4,fVar11 - fVar3);
    if (((fStack_b8._0_1_ == '\0') || (_DAT_142e36f28 < fStack_b4)) || (fStack_b0 < 0.0))
    goto LAB_140b746ee;
    fVar4 = fStack_b0;
    if (fStack_b4 < 0.0) goto LAB_140b7466e;
    if ((fStack_b4 < 0.0) || (_DAT_142e36f28 < fStack_b4)) goto LAB_140b747ae;
LAB_140b74751:
    fVar3 = (float)pdb_140de9fd0();
    if (_DAT_142e36f28 < fVar4) {
LAB_140b746b4:
      fVar4 = _DAT_142e36f28;
      fVar10 = (float)pub_142e32a70();
      fVar4 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                     (uint)(fVar4 + fVar10) & -(uint)(fVar10 < 0.0));
      if (fVar3 <= fVar4) goto LAB_140b74798;
      goto LAB_140b746ee;
    }
  }
  if ((fVar4 < 0.0) || (_DAT_142e36f28 < fVar4)) {
LAB_140b747ae:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335ec80,0x2a,&UNK_14335ecd0);
  }
  fVar4 = (float)pdb_140de9fd0();
  if (fVar3 <= fVar4) {
LAB_140b74798:
    param_1[1] = fVar3;
    param_1[2] = fVar4;
    *param_1 = 1;
    return param_1;
  }
LAB_140b746ee:
  *param_1 = 0;
  return param_1;
}

