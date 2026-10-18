// VA 0x141421f10, PDB extent 246 bytes
// utils::curve::impl$12::sample_at_coord<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$12::sample_at_coord<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 246 */

undefined8 *
pdb_141421f10(undefined8 *param_1,longlong *param_2,int param_3,float param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  uVar5 = *(uint *)(param_2 + 3);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8510(param_5);
  }
  param_3 = param_3 + (int)param_2[2];
  if (param_3 != -0x80000000 || uVar5 != 0xffffffff) {
    uVar8 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar8 = uVar5;
    }
    uVar11 = (ulonglong)(int)((param_3 % (int)uVar5 >> 0x1f & uVar8) + param_3 % (int)uVar5);
    uVar6 = param_2[1];
    if (uVar6 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar11,uVar6);
    }
    if (uVar5 != 0xffffffff || param_3 != 0x7fffffff) {
      iVar10 = (param_3 + 1) % (int)uVar5;
      uVar9 = (ulonglong)(int)((iVar10 >> 0x1f & uVar8) + iVar10);
      if (uVar9 < uVar6) {
        lVar7 = *param_2;
        uVar3 = *(undefined8 *)(lVar7 + uVar11 * 0xc);
        fVar1 = *(float *)(lVar7 + 8 + uVar11 * 0xc);
        fVar2 = *(float *)(lVar7 + 8 + uVar9 * 0xc);
        uVar4 = *(undefined8 *)(lVar7 + uVar9 * 0xc);
        fVar12 = (float)uVar3;
        fVar13 = (float)((ulonglong)uVar3 >> 0x20);
        *param_1 = CONCAT44(param_4 * ((float)((ulonglong)uVar4 >> 0x20) - fVar13) + fVar13,
                            param_4 * ((float)uVar4 - fVar12) + fVar12);
        *(float *)(param_1 + 1) = (fVar2 - fVar1) * param_4 + fVar1;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar9,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8550(param_5);
}

