// VA 0x1419a7e00, PDB extent 160 bytes
// utils::curve::Curve::get_pos_at_u<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_pos_at_u<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 160 */

undefined8 * pdb_1419a7e00(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float extraout_XMM0_Da;
  float fVar10;
  
  uVar8 = pdb_1419a9060(param_2,param_3);
  uVar9 = (ulonglong)uVar8;
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar9,uVar6,&UNK_14335e4e0);
  }
  uVar1 = uVar9 + 1;
  if (uVar1 < uVar6) {
    lVar7 = *(longlong *)(param_2 + 8);
    fVar10 = _DAT_142e36f28 - extraout_XMM0_Da;
    fVar2 = *(float *)(lVar7 + 8 + uVar9 * 0xc);
    fVar3 = *(float *)(lVar7 + 8 + uVar1 * 0xc);
    uVar4 = *(undefined8 *)(lVar7 + uVar9 * 0xc);
    uVar5 = *(undefined8 *)(lVar7 + uVar1 * 0xc);
    *param_1 = CONCAT44((float)((ulonglong)uVar5 >> 0x20) * extraout_XMM0_Da +
                        (float)((ulonglong)uVar4 >> 0x20) * fVar10,
                        (float)uVar5 * extraout_XMM0_Da + (float)uVar4 * fVar10);
    *(float *)(param_1 + 1) = fVar3 * extraout_XMM0_Da + fVar10 * fVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,uVar6,&UNK_14335e4f8);
}

