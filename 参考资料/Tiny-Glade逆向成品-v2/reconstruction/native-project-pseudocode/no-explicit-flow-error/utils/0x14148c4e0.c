// VA 0x14148c4e0, PDB extent 144 bytes
// utils::curve::Curve::get_pos_at_coord<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::get_pos_at_coord<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 144 */

undefined8 * pdb_14148c4e0(undefined8 *param_1,longlong param_2,ulonglong param_3,float param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  param_3 = param_3 & 0xffffffff;
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  if (uVar6 <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_3,uVar6,&UNK_14330d718);
  }
  uVar1 = param_3 + 1;
  if (uVar1 < uVar6) {
    lVar7 = *(longlong *)(param_2 + 8);
    fVar8 = _DAT_142e36f28 - param_4;
    fVar2 = *(float *)(lVar7 + 8 + param_3 * 0xc);
    fVar3 = *(float *)(lVar7 + 8 + uVar1 * 0xc);
    uVar4 = *(undefined8 *)(lVar7 + param_3 * 0xc);
    uVar5 = *(undefined8 *)(lVar7 + uVar1 * 0xc);
    *param_1 = CONCAT44((float)((ulonglong)uVar5 >> 0x20) * param_4 +
                        (float)((ulonglong)uVar4 >> 0x20) * fVar8,
                        (float)uVar5 * param_4 + (float)uVar4 * fVar8);
    *(float *)(param_1 + 1) = param_4 * fVar3 + fVar8 * fVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,uVar6,&UNK_14330d730);
}

