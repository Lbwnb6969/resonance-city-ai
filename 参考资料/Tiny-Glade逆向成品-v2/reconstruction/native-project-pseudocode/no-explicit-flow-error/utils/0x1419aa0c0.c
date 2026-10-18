// VA 0x1419aa0c0, PDB extent 161 bytes
// utils::curve::Curve::get_tangent_at_u<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_tangent_at_u<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 161 */

undefined8 * pdb_1419aa0c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = pdb_1419a9060(param_2,param_3);
  uVar6 = (ulonglong)uVar5;
  uVar1 = uVar6 + 1;
  if (uVar1 < *(ulonglong *)(param_2 + 0x10)) {
    lVar4 = *(longlong *)(param_2 + 8);
    fVar7 = *(float *)(lVar4 + 8 + uVar1 * 0xc) - *(float *)(lVar4 + 8 + uVar6 * 0xc);
    uVar2 = *(undefined8 *)(lVar4 + uVar1 * 0xc);
    uVar3 = *(undefined8 *)(lVar4 + uVar6 * 0xc);
    fVar8 = (float)uVar2 - (float)uVar3;
    fVar9 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
    fVar10 = _DAT_142e36f28 / SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    *param_1 = CONCAT44(fVar10 * fVar9,fVar10 * fVar8);
    *(float *)(param_1 + 1) = fVar10 * fVar7;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,*(ulonglong *)(param_2 + 0x10),&UNK_14335e510);
}

