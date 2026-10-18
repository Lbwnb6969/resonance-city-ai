// VA 0x141473740, PDB extent 125 bytes
// utils::geometry::intersect::Triangle::aabb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::intersect::Triangle::aabb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/intersect.rs
   Extent: 125 */

uint * pdb_141473740(uint *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  
  auVar7 = *param_2;
  fVar11 = auVar7._0_4_;
  fVar13 = auVar7._12_4_;
  fVar9 = *(float *)param_2[1];
  fVar1 = *(float *)(param_2[1] + 8);
  fVar2 = *(float *)(param_2[1] + 0xc);
  uVar3 = -(uint)(auVar7._4_4_ < fVar9);
  uVar4 = -(uint)(auVar7._8_4_ < *(float *)(param_2[1] + 4));
  fVar8 = (float)(~-(uint)(fVar11 < fVar13) & (uint)fVar13 | (uint)fVar11 & -(uint)(fVar11 < fVar13)
                 );
  fVar9 = (float)(~uVar3 & (uint)fVar9 | (uint)auVar7._4_4_ & uVar3);
  fVar10 = (float)(~uVar4 & (uint)*(float *)(param_2[1] + 4) | (uint)auVar7._8_4_ & uVar4);
  fVar11 = (float)(~-(uint)(fVar13 < fVar11) & (uint)fVar13 |
                  (uint)fVar11 & -(uint)(fVar13 < fVar11));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulonglong *)(param_2[1] + 0xc);
  auVar7._0_8_ = auVar7._4_8_;
  auVar7._12_4_ = fVar13;
  auVar7 = maxps(auVar7,param_2[1]);
  auVar7 = maxps(auVar7,auVar12);
  fVar13 = (float)(*(ulonglong *)(param_2[1] + 0xc) >> 0x20);
  uVar3 = -(uint)(fVar8 < fVar1);
  uVar4 = -(uint)(fVar9 < fVar2);
  uVar5 = -(uint)(fVar10 < fVar13);
  uVar6 = -(uint)(fVar1 < fVar11);
  *param_1 = ~uVar3 & (uint)fVar1 | (uint)fVar8 & uVar3;
  param_1[1] = ~uVar4 & (uint)fVar2 | (uint)fVar9 & uVar4;
  param_1[2] = ~uVar5 & (uint)fVar13 | (uint)fVar10 & uVar5;
  param_1[3] = ~uVar6 & (uint)fVar1 | (uint)fVar11 & uVar6;
  *(longlong *)(param_1 + 4) = auVar7._0_8_;
  return param_1;
}

