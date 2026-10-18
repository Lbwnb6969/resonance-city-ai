// VA 0x1413f9bf0, PDB extent 149 bytes
// utils::curve::Curve::get_tangent_at_coord<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_tangent_at_coord<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 149 */

undefined8 * pdb_1413f9bf0(undefined8 *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = (ulonglong)param_3;
  uVar1 = uVar5 + 1;
  if (uVar1 < *(ulonglong *)(param_2 + 0x10)) {
    lVar4 = *(longlong *)(param_2 + 8);
    fVar6 = *(float *)(lVar4 + 8 + uVar1 * 0xc) - *(float *)(lVar4 + 8 + uVar5 * 0xc);
    uVar2 = *(undefined8 *)(lVar4 + uVar1 * 0xc);
    uVar3 = *(undefined8 *)(lVar4 + uVar5 * 0xc);
    fVar7 = (float)uVar2 - (float)uVar3;
    fVar8 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
    fVar9 = _DAT_142e36f28 / SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    *param_1 = CONCAT44(fVar9 * fVar8,fVar9 * fVar7);
    *(float *)(param_1 + 1) = fVar9 * fVar6;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,*(ulonglong *)(param_2 + 0x10),&UNK_1433067d0);
}

