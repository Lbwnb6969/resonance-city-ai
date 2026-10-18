// VA 0x140df24f0, PDB extent 117 bytes
// utils::geometry::rectangle::Rectangle2d::contains_point_padding
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::contains_point_padding
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 117 */

undefined4
pdb_140df24f0(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar2;
  
  fVar6 = (float)*param_1;
  fVar7 = (float)((ulonglong)*param_1 >> 0x20);
  fVar9 = (float)((ulonglong)param_1[1] >> 0x20);
  fVar8 = (float)param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[2];
  fVar5 = (param_3 - fVar9) * fVar7 + (param_2 - fVar8) * fVar6;
  fVar6 = (param_3 - fVar9) * fVar6 + (param_2 - fVar8) * (float)((uint)fVar7 ^ _UNK_142e37824);
  auVar3._4_4_ = -(uint)((float)(_UNK_142e37824 ^ (uint)fVar6) <=
                        ((float)((ulonglong)uVar1 >> 0x20) + param_5) * _UNK_142e36f44);
  auVar3._0_4_ = -(uint)((float)(_DAT_142e37820 ^ (uint)fVar5) <=
                        ((float)uVar1 + param_4) * _DAT_142e36f40);
  auVar3._8_4_ = -(uint)(fVar5 <= ((float)uVar2 + param_4) * _UNK_142e36f48);
  auVar3._12_4_ = -(uint)(fVar6 <= ((float)((ulonglong)uVar2 >> 0x20) + param_5) * _UNK_142e36f4c);
  iVar4 = movmskps(in_EAX,auVar3);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0xf);
}

