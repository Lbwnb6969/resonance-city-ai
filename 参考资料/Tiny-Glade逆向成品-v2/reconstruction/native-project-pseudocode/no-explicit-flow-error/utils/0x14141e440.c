// VA 0x14141e440, PDB extent 981 bytes
// utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec3::Vec3,glam::f32::vec3::Vec3 (*)(usize,ref$<glam::f32::vec3::Vec3>),system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_right_until<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec3::Vec3,glam::f32::vec3::Vec3
   (*)(usize,ref$<glam::f32::vec3::Vec3>),system_wall_constructor::segmentation::calculate_wall_path_segmentation::score_split_candidate::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 981 */

void pdb_14141e440(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float in_XMM1_Da;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  longlong lStack_128;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  float fStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uVar10;
  
  uStack_88 = param_3;
  uStack_80 = param_4;
  if (in_XMM1_Da < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_1433084c8);
  }
  fVar9 = *(float *)((longlong)param_1 + 0x1c);
  uStack_d0 = (ulonglong)*(uint *)(param_1 + 3);
  puVar1 = (undefined8 *)*param_1;
  uStack_f0 = *puVar1;
  uStack_e8 = puVar1[1];
  uStack_e0 = *(undefined4 *)(puVar1 + 2);
  uStack_dc = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_d8 = *(undefined4 *)(puVar1 + 3);
  uStack_d4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_f8 = param_1 + 1;
  uStack_130 = 0;
  puStack_b0 = &uStack_88;
  uStack_a8 = 0;
  uStack_c8 = uStack_d0;
  lVar4 = pdb_1424bb310(&uStack_f0);
  if (param_2 != 0) {
    lVar6 = lVar4;
    (*(code *)*plStack_f8)(&fStack_140,lVar4,param_2);
    uStack_114 = uStack_fc;
    fStack_118 = fStack_100;
    fStack_11c = fStack_104;
    if ((int)uStack_130 == 1) {
      fStack_104 = fStack_13c;
      lVar7 = CONCAT44(uStack_134,fStack_138);
      fStack_100 = fStack_138;
      uStack_fc = uStack_134;
      lStack_128 = lStack_110;
      fVar12 = fStack_140;
      uVar10 = CONCAT44(fStack_138,fStack_13c);
      lStack_110 = lVar4;
    }
    else {
      lStack_110 = pdb_1424bb310(&uStack_f0);
      if (lVar6 == 0) {
        return;
      }
      lVar7 = lStack_110;
      (*(code *)*plStack_f8)(&fStack_98,lStack_110,lVar6);
      uStack_114 = uStack_134;
      uStack_130 = 1;
      fStack_104 = (float)uStack_94;
      fStack_100 = (float)((ulonglong)uStack_94 >> 0x20);
      uStack_fc = uStack_8c;
      fVar12 = fStack_98;
      fStack_108 = fStack_140;
      uVar10 = uStack_94;
      lStack_128 = lVar4;
      fStack_11c = fStack_13c;
      fStack_118 = fStack_138;
    }
    fVar2 = _DAT_142e36f28;
    uVar3 = (undefined4)lStack_128;
    fVar8 = (float)uVar10 - fStack_11c;
    fVar11 = (float)((ulonglong)uVar10 >> 0x20) - fStack_118;
    fVar8 = SQRT(fVar11 * fVar11 + (fVar12 - fStack_108) * (fVar12 - fStack_108) + fVar8 * fVar8);
    in_XMM1_Da = (_DAT_142e36f28 - fVar9) * fVar8 - in_XMM1_Da;
    if (in_XMM1_Da < 0.0) {
      fStack_108 = fVar12;
      do {
        *(int *)(param_1 + 3) = (int)lStack_128;
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
        lVar4 = pdb_1424bb310(&uStack_f0);
        if (lVar7 == 0) {
          return;
        }
        lVar6 = lVar4;
        (*(code *)*plStack_f8)(&fStack_140,lVar4,lVar7);
        uVar3 = uStack_fc;
        fVar12 = fStack_100;
        fVar9 = fStack_104;
        if ((int)uStack_130 == 1) {
          fStack_100 = fStack_138;
          uStack_fc = uStack_134;
          lVar7 = CONCAT44(fStack_13c,fStack_140);
          fStack_104 = fStack_13c;
          lStack_128 = lStack_110;
          uStack_114 = uVar3;
          uVar10 = CONCAT44(fStack_138,fStack_13c);
          fVar11 = fStack_140;
          lStack_110 = lVar4;
          fStack_11c = fVar9;
          fStack_118 = fVar12;
        }
        else {
          lVar5 = pdb_1424bb310(&uStack_f0);
          if (lVar6 == 0) {
            return;
          }
          lVar7 = lVar5;
          (*(code *)*plStack_f8)(&fStack_98,lVar5,lVar6);
          uStack_114 = uStack_134;
          uStack_fc = uStack_8c;
          uStack_130 = 1;
          fStack_104 = (float)uStack_94;
          fStack_100 = (float)((ulonglong)uStack_94 >> 0x20);
          fVar11 = fStack_98;
          fStack_108 = fStack_140;
          uVar10 = uStack_94;
          lStack_128 = lVar4;
          lStack_110 = lVar5;
          fStack_11c = fStack_13c;
          fStack_118 = fStack_138;
        }
        uVar3 = (undefined4)lStack_128;
        fVar9 = (float)uVar10 - fStack_11c;
        fVar12 = (float)((ulonglong)uVar10 >> 0x20) - fStack_118;
        fVar8 = SQRT(fVar12 * fVar12 + (fVar11 - fStack_108) * (fVar11 - fStack_108) + fVar9 * fVar9
                    );
        in_XMM1_Da = in_XMM1_Da + fVar8;
        fStack_108 = fVar11;
      } while (in_XMM1_Da < 0.0);
    }
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(float *)((longlong)param_1 + 0x1c) = fVar2 - in_XMM1_Da / fVar8;
  }
  return;
}

