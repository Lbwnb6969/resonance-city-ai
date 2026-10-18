// VA 0x14141dbc0, PDB extent 640 bytes
// utils::curve::curve_slice::CurveSlice::extend_left_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec3::Vec3,glam::f32::vec3::Vec3 (*)(usize,ref$<glam::f32::vec3::Vec3>),system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_left_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec3::Vec3,glam::f32::vec3::Vec3
   (*)(usize,ref$<glam::f32::vec3::Vec3>),system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 640 */

void pdb_14141dbc0(longlong *param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  int aiStack_160 [2];
  longlong lStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 auStack_e8 [7];
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  
  uStack_128 = param_3;
  uStack_120 = param_4;
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_143308498);
  }
  puVar3 = (undefined4 *)*param_1;
  lVar5 = pdb_1413f84b0(puVar3 + 4);
  if (lVar5 != 0) {
    fVar1 = *(float *)((longlong)param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 2);
    uStack_108 = *puVar3;
    uStack_104 = puVar3[1];
    uStack_100 = puVar3[2];
    uStack_fc = puVar3[3];
    uStack_f8 = puVar3[4];
    uStack_f4 = puVar3[5];
    uStack_f0 = puVar3[6];
    uStack_ec = puVar3[7];
    lVar5 = pdb_1413f84b0(puVar3 + 4);
    lStack_78 = (lVar5 - (ulonglong)uVar2) + -2;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_b0 = param_1 + 1;
    auStack_e8[0] = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = uStack_108;
    uStack_94 = uStack_104;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    uStack_88 = uStack_f8;
    uStack_84 = uStack_f4;
    uStack_80 = uStack_f0;
    uStack_7c = uStack_ec;
    puStack_70 = &uStack_128;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_60 = (ulonglong)uVar2 + 1;
    pdb_141466fa0(aiStack_160,auStack_e8);
    if (aiStack_160[0] == 1) {
      if (lStack_158 == 0) {
LAB_14141de1b:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433084b0);
      }
      lVar5 = lStack_158 + -1;
      uVar4 = (undefined4)lVar5;
      fVar6 = SQRT((fStack_130 - fStack_148) * (fStack_130 - fStack_148) +
                   (fStack_134 - fStack_14c) * (fStack_134 - fStack_14c) +
                   (fStack_138 - fStack_150) * (fStack_138 - fStack_150));
      param_2 = (fVar1 + _DAT_142e36f34 + _DAT_142e36f28) * fVar6 - param_2;
      if (param_2 < 0.0) {
        do {
          *(int *)(param_1 + 2) = (int)lVar5;
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          pdb_141466fa0(aiStack_160,auStack_e8);
          if (aiStack_160[0] != 1) {
            return;
          }
          if (lStack_158 == 0) goto LAB_14141de1b;
          lVar5 = lStack_158 + -1;
          uVar4 = (undefined4)lVar5;
          fVar6 = SQRT((fStack_130 - fStack_148) * (fStack_130 - fStack_148) +
                       (fStack_134 - fStack_14c) * (fStack_134 - fStack_14c) +
                       (fStack_138 - fStack_150) * (fStack_138 - fStack_150));
          param_2 = param_2 + fVar6;
        } while (param_2 < 0.0);
      }
      *(undefined4 *)(param_1 + 2) = uVar4;
      *(float *)((longlong)param_1 + 0x14) = param_2 / fVar6;
    }
  }
  return;
}

