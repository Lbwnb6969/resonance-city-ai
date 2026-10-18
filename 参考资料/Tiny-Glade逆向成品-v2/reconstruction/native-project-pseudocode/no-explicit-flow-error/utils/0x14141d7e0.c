// VA 0x14141d7e0, PDB extent 460 bytes
// utils::curve::curve_slice::CurveSlice::extend_left<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>)>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_left<glam::f32::vec3::Vec3,slice2$<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>)>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 460 */

void pdb_14141d7e0(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uStack_e1;
  int aiStack_e0 [2];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [5];
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  longlong lVar2;
  
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_143308498);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lStack_78 = *param_1;
    fVar4 = *(float *)((longlong)param_1 + 0x1c);
    lStack_70 = lStack_78 + lVar2 * 0xc;
    lStack_50 = (ulonglong)*(uint *)(param_1 + 3) + 1;
    lStack_68 = (lVar2 - (ulonglong)*(uint *)(param_1 + 3)) + -2;
    uStack_88 = 0;
    uStack_80 = 0;
    plStack_90 = param_1 + 2;
    auStack_b8[0] = 0;
    puStack_60 = &uStack_e1;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    pdb_141467230(aiStack_e0,auStack_b8);
    if (aiStack_e0[0] == 1) {
      if (lStack_d8 == 0) {
LAB_14141d987:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433084b0);
      }
      lVar2 = lStack_d8 + -1;
      uVar1 = (undefined4)lVar2;
      fVar3 = (float)uStack_c0 - (float)uStack_d0;
      fVar5 = (float)((ulonglong)uStack_c0 >> 0x20) - (float)((ulonglong)uStack_d0 >> 0x20);
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
      param_2 = (fVar4 + _DAT_142e36f34 + _DAT_142e36f28) * fVar3 - param_2;
      if (param_2 < 0.0) {
        do {
          *(int *)(param_1 + 3) = (int)lVar2;
          *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
          pdb_141467230(aiStack_e0,auStack_b8);
          if (aiStack_e0[0] != 1) {
            return;
          }
          if (lStack_d8 == 0) goto LAB_14141d987;
          lVar2 = lStack_d8 + -1;
          uVar1 = (undefined4)lVar2;
          fVar4 = (float)uStack_c0 - (float)uStack_d0;
          fVar3 = (float)((ulonglong)uStack_c0 >> 0x20) - (float)((ulonglong)uStack_d0 >> 0x20);
          fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
          param_2 = param_2 + fVar3;
        } while (param_2 < 0.0);
      }
      *(undefined4 *)(param_1 + 3) = uVar1;
      *(float *)((longlong)param_1 + 0x1c) = param_2 / fVar3;
    }
  }
  return;
}

