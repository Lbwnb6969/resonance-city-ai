// VA 0x140df3ef0, PDB extent 123 bytes
// utils::geometry::rectangle::Rectangle3d::contains_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::contains_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 123 */

undefined4 pdb_140df3ef0(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar2;
  
  uVar5 = 0;
  if ((*(float *)(param_1 + 3) <= param_2[1]) && (param_2[1] < *(float *)((longlong)param_1 + 0x1c))
     ) {
    fVar10 = (float)*param_1;
    fVar6 = (float)((ulonglong)*param_1 >> 0x20);
    fVar9 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar7 = (float)param_1[1];
    fVar8 = (param_2[2] - fVar9) * fVar6 + (*param_2 - fVar7) * fVar10;
    fVar10 = (param_2[2] - fVar9) * fVar10 +
             (*param_2 - fVar7) * (float)((uint)fVar6 ^ _UNK_142e37824);
    uVar1 = param_1[2];
    uVar2 = param_1[2];
    auVar3._4_4_ = -(uint)((float)(_UNK_142e37824 ^ (uint)fVar10) <=
                          ((float)((ulonglong)uVar1 >> 0x20) + 0.0) * _UNK_142e36f44);
    auVar3._0_4_ = -(uint)((float)(_DAT_142e37820 ^ (uint)fVar8) <=
                          ((float)uVar1 + 0.0) * _DAT_142e36f40);
    auVar3._8_4_ = -(uint)(fVar8 <= ((float)uVar2 + 0.0) * _UNK_142e36f48);
    auVar3._12_4_ = -(uint)(fVar10 <= ((float)((ulonglong)uVar2 >> 0x20) + 0.0) * _UNK_142e36f4c);
    iVar4 = movmskps(0,auVar3);
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0xf);
  }
  return uVar5;
}

