// VA 0x1428f4740, PDB extent 783 bytes
// utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemantic3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>),utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemantic3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>)> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemantic3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>),utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemantic3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>)> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 783 */

void pdb_1428f4740(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack_149;
  ulonglong uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  longlong lStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  char cStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  longlong **pplStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1435b38eb,0x21,&UNK_1435b3938);
  }
  fVar14 = *(float *)((longlong)param_1 + 0x24);
  uVar6 = (ulonglong)*(uint *)(param_1 + 4);
  plStack_120 = param_1 + 2;
  lStack_100 = uVar6 + 1;
  lStack_118 = *param_1;
  uVar8 = param_1[1];
  lStack_110 = lStack_118 + uVar8 * 0xc;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_148 = 0;
  puStack_e8 = &uStack_149;
  cStack_e0 = '\0';
  if (uVar6 == 0) {
    if (uVar8 == 0) {
      return;
    }
  }
  else {
    if (uVar8 <= uVar6) {
      return;
    }
    lStack_118 = lStack_118 + uVar6 * 0xc;
  }
  uStack_108 = 0;
  lStack_118 = lStack_118 + 0xc;
  fVar10 = param_2;
  uStack_c0 = (*(code *)*plStack_120)(uVar6);
  uStack_d0 = 1;
  uStack_c8 = uVar6;
  fStack_bc = fVar10;
  pplStack_b8 = &plStack_120;
  pdb_1414e3dd0(&uStack_b0,&uStack_d0);
  cVar2 = cStack_e0;
  lVar1 = lStack_110;
  fVar10 = _DAT_142e36f28;
  uStack_128 = uStack_90;
  uStack_138 = uStack_a0;
  uStack_148 = uStack_b0;
  lStack_140 = lStack_a8;
  if ((uStack_b0 & 1) != 0) {
    uVar5 = (undefined4)lStack_a8;
    fVar12 = (float)((ulonglong)uStack_90 >> 0x20);
    fVar11 = (float)uStack_90 - (float)uStack_a0;
    fVar13 = fVar12 - (float)((ulonglong)uStack_a0 >> 0x20);
    fVar11 = SQRT(fVar13 * fVar13 + fVar11 * fVar11);
    param_2 = (_DAT_142e36f28 - fVar14) * fVar11 - param_2;
    if (param_2 < 0.0) {
      plStack_d8 = plStack_120;
      lVar4 = lStack_118;
      lVar7 = lStack_100;
      uVar8 = uStack_108;
      fVar14 = (float)uStack_90;
      do {
        fVar13 = fVar11;
        lVar3 = lStack_98;
        *(int *)(param_1 + 4) = (int)lStack_a8;
        *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
        if (cVar2 != '\0') {
          return;
        }
        uVar5 = (undefined4)lVar3;
        if (uVar8 == 0) {
          if (lVar4 == lVar1) {
            return;
          }
        }
        else {
          uStack_108 = 0;
          if (((ulonglong)(lVar1 - lVar4) >> 2) * -0x5555555555555555 <= uVar8) {
            return;
          }
          lVar4 = lVar4 + uVar8 * 0xc;
          uVar8 = 0;
        }
        lVar4 = lVar4 + 0xc;
        lStack_130 = lVar3;
        lStack_118 = lVar4;
        lStack_100 = lVar7 + 1;
        fVar9 = (float)(*(code *)*plStack_d8)(lVar7);
        uStack_128 = CONCAT44(fVar13,fVar9);
        fVar11 = SQRT((fVar13 - fVar12) * (fVar13 - fVar12) + (fVar9 - fVar14) * (fVar9 - fVar14));
        param_2 = param_2 + fVar11;
        lStack_98 = lVar7;
        lStack_a8 = lVar3;
        lVar7 = lVar7 + 1;
        fVar14 = fVar9;
        fVar12 = fVar13;
      } while (param_2 < 0.0);
    }
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(float *)((longlong)param_1 + 0x24) = fVar10 - param_2 / fVar11;
  }
  return;
}

