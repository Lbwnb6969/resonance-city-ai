// VA 0x1404004c0, PDB extent 420 bytes
// utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true> >,utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true>
   >,utils::curve::curve_slice::impl$6::extend_right::closure_env$0<glam::f32::vec2::Vec2,slice2$<glam::f32::vec2::Vec2>,utils::curve::CurveCoordSemantic2D,f32,system_wall_constructor::wall_constructor::impl$0::from_curve::closure_env$4<system_wall_constructor::construct_playermade_stairs::construct_playermade_stairs_arches_n_walls::closure_env$9<true>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 420 */

void pdb_1404004c0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 uStack_f1;
  int aiStack_f0 [4];
  float fStack_e0;
  float fStack_d0;
  undefined8 auStack_c8 [5];
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142f564f8,0x21,&UNK_142f56540);
  }
  fVar1 = *(float *)((longlong)param_1 + 0x24);
  uStack_88 = (ulonglong)*(uint *)(param_1 + 4);
  lStack_98 = *param_1;
  lStack_90 = lStack_98 + param_1[1] * 8;
  uStack_78 = 0;
  uStack_70 = 0;
  plStack_a0 = param_1 + 2;
  auStack_c8[0] = 0;
  puStack_68 = &uStack_f1;
  uStack_60 = 0;
  uStack_80 = uStack_88;
  pdb_1400de250(aiStack_f0,auStack_c8);
  uVar3 = _DAT_142e377e0;
  fVar2 = _DAT_142e36f28;
  if (aiStack_f0[0] == 1) {
    uVar4 = (undefined4)aiStack_f0._8_8_;
    fVar5 = (float)((uint)(fStack_d0 - fStack_e0) & _DAT_142e377e0);
    param_2 = (_DAT_142e36f28 - fVar1) * fVar5 - param_2;
    if (param_2 < 0.0) {
      do {
        *(int *)(param_1 + 4) = (int)aiStack_f0._8_8_;
        *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
        pdb_1400de250(aiStack_f0,auStack_c8);
        if (aiStack_f0[0] != 1) {
          return;
        }
        uVar4 = (undefined4)aiStack_f0._8_8_;
        fVar5 = (float)((uint)(fStack_d0 - fStack_e0) & uVar3);
        param_2 = param_2 + fVar5;
      } while (param_2 < 0.0);
    }
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(float *)((longlong)param_1 + 0x24) = fVar2 - param_2 / fVar5;
  }
  return;
}

