// VA 0x14141d9b0, PDB extent 528 bytes
// utils::curve::curve_slice::CurveSlice::extend_left<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2 (*)(usize,ref$<glam::f32::vec3::Vec3>)>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::curve_slice::CurveSlice::extend_left<glam::f32::vec3::Vec3,utils::loop_range::LoopSlice<glam::f32::vec3::Vec3>,utils::curve::CurveCoordSemanticThresholded3D,glam::f32::vec2::Vec2,glam::f32::vec2::Vec2
   (*)(usize,ref$<glam::f32::vec3::Vec3>)>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/curve_slice.rs
   Extent: 528 */

void pdb_14141d9b0(longlong *param_1,float param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uStack_131;
  int aiStack_130 [2];
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 auStack_d8 [5];
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
  undefined1 *puStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  
  if (param_2 < 0.0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143308450,0x21,&UNK_143308498);
  }
  puVar2 = (undefined4 *)*param_1;
  lVar4 = pdb_1413f84b0(puVar2 + 4);
  if (lVar4 != 0) {
    fVar6 = *(float *)((longlong)param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 2);
    uStack_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    uStack_e8 = puVar2[4];
    uStack_e4 = puVar2[5];
    uStack_e0 = puVar2[6];
    uStack_dc = puVar2[7];
    lVar4 = pdb_1413f84b0(puVar2 + 4);
    lStack_78 = (lVar4 - (ulonglong)uVar1) + -2;
    uStack_108 = 0;
    uStack_100 = 0;
    plStack_b0 = param_1 + 1;
    auStack_d8[0] = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = uStack_f8;
    uStack_94 = uStack_f4;
    uStack_90 = uStack_f0;
    uStack_8c = uStack_ec;
    uStack_88 = uStack_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    puStack_70 = &uStack_131;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_60 = (ulonglong)uVar1 + 1;
    pdb_141466970(aiStack_130,auStack_d8);
    if (aiStack_130[0] == 1) {
      if (lStack_128 == 0) {
LAB_14141db9b:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433084b0);
      }
      lVar4 = lStack_128 + -1;
      uVar3 = (undefined4)lVar4;
      fVar5 = (float)uStack_110 - (float)uStack_120;
      fVar7 = (float)((ulonglong)uStack_110 >> 0x20) - (float)((ulonglong)uStack_120 >> 0x20);
      fVar5 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
      param_2 = (fVar6 + _DAT_142e36f34 + _DAT_142e36f28) * fVar5 - param_2;
      if (param_2 < 0.0) {
        do {
          *(int *)(param_1 + 2) = (int)lVar4;
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          pdb_141466970(aiStack_130,auStack_d8);
          if (aiStack_130[0] != 1) {
            return;
          }
          if (lStack_128 == 0) goto LAB_14141db9b;
          lVar4 = lStack_128 + -1;
          uVar3 = (undefined4)lVar4;
          fVar6 = (float)uStack_110 - (float)uStack_120;
          fVar5 = (float)((ulonglong)uStack_110 >> 0x20) - (float)((ulonglong)uStack_120 >> 0x20);
          fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          param_2 = param_2 + fVar5;
        } while (param_2 < 0.0);
      }
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(float *)((longlong)param_1 + 0x14) = param_2 / fVar5;
    }
  }
  return;
}

