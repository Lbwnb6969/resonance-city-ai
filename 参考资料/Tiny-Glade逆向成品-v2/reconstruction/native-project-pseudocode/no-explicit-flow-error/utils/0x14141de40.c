// VA 0x14141de40, PDB extent 303 bytes
// utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>,utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>,utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_platform_stairs::construct_platform_stairs::closure_env$0>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 303 */

void pdb_14141de40(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = _DAT_142e36f28;
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_1433084c8);
  }
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar4;
  lVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar5 == 0) {
    if (uVar3 == 0) {
      return;
    }
    lVar7 = lVar2 + uVar3 * 8;
    lVar6 = lVar2;
    if (lVar2 + 8 == lVar7) {
      return;
    }
  }
  else {
    if (uVar3 <= uVar5) {
      return;
    }
    lVar6 = lVar2 + uVar5 * 8;
    lVar7 = lVar2 + uVar3 * 8;
    if (lVar6 + 8 == lVar7) {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1[2] + 0x20);
  fVar10 = *(float *)(lVar2 + 4 + uVar5 * 4);
  fVar11 = (float)((uint)(fVar10 - *(float *)(lVar2 + uVar5 * 4)) & _DAT_142e377e0);
  param_2 = (_DAT_142e36f28 - *(float *)((longlong)param_1 + 0x24)) * fVar11 - param_2;
  if (0.0 <= param_2) {
LAB_14141df21:
    *(uint *)(param_1 + 4) = uVar4;
    fVar9 = fVar9 - param_2 / fVar11;
  }
  else {
    lVar6 = lVar6 + 0x10;
    if (lVar6 != lVar7) {
      lVar8 = uVar5 + 2;
      do {
        fVar1 = *(float *)(lVar2 + lVar8 * 4);
        fVar11 = (float)((uint)(fVar1 - fVar10) & _DAT_142e377e0);
        param_2 = param_2 + fVar11;
        if (0.0 <= param_2) {
          uVar4 = (int)uVar5 + 1;
          goto LAB_14141df21;
        }
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        fVar10 = fVar1;
      } while (lVar6 != lVar7);
    }
    *(uint *)(param_1 + 4) = uVar4;
  }
  *(float *)((longlong)param_1 + 0x24) = fVar9;
  return;
}

