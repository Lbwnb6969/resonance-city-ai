// VA 0x14141e280, PDB extent 434 bytes
// utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>),utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>)> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>),utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>)> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 434 */

void pdb_14141e280(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uStack_101;
  int aiStack_100 [10];
  undefined8 auStack_d8 [5];
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_1433084c8);
  }
  fVar5 = *(float *)((longlong)param_1 + 0x1c);
  uStack_88 = (ulonglong)*(uint *)(param_1 + 3);
  puVar1 = (undefined8 *)*param_1;
  uStack_a8 = *puVar1;
  uStack_a0 = puVar1[1];
  uStack_98 = *(undefined4 *)(puVar1 + 2);
  uStack_94 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_90 = *(undefined4 *)(puVar1 + 3);
  uStack_8c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  uStack_78 = 0;
  uStack_70 = 0;
  plStack_b0 = param_1 + 1;
  auStack_d8[0] = 0;
  puStack_68 = &uStack_101;
  uStack_60 = 0;
  uStack_80 = uStack_88;
  pdb_1414673b0(aiStack_100,auStack_d8);
  fVar2 = _DAT_142e36f28;
  if (aiStack_100[0] == 1) {
    uVar3 = (undefined4)aiStack_100._8_8_;
    fVar4 = (float)aiStack_100._32_8_ - (float)aiStack_100._16_8_;
    fVar6 = SUB84(aiStack_100._32_8_,4) - SUB84(aiStack_100._16_8_,4);
    fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    param_2 = (_DAT_142e36f28 - fVar5) * fVar4 - param_2;
    if (param_2 < 0.0) {
      do {
        *(int *)(param_1 + 3) = (int)aiStack_100._8_8_;
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
        pdb_1414673b0(aiStack_100,auStack_d8);
        if (aiStack_100[0] != 1) {
          return;
        }
        uVar3 = (undefined4)aiStack_100._8_8_;
        fVar5 = (float)aiStack_100._32_8_ - (float)aiStack_100._16_8_;
        fVar4 = SUB84(aiStack_100._32_8_,4) - SUB84(aiStack_100._16_8_,4);
        fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        param_2 = param_2 + fVar4;
      } while (param_2 < 0.0);
    }
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(float *)((longlong)param_1 + 0x1c) = fVar2 - param_2 / fVar4;
  }
  return;
}

