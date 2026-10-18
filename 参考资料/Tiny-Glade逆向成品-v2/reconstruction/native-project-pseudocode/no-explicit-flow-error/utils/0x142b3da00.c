// VA 0x142b3da00, PDB extent 383 bytes
// utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<tuple$<glam::f32::vec2::Vec2,glam::f32::vec2::Vec2> >,array$<glam::f32::vec2::Vec2,2>,system_color::radial_menu::icon_bounds::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<tuple$<glam::f32::vec2::Vec2,glam::f32::vec2::Vec2>
   >,array$<glam::f32::vec2::Vec2,2>,system_color::radial_menu::icon_bounds::closure_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 383 */

void pdb_142b3da00(float *param_1,longlong *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong alStack_58 [2];
  float *pfStack_48;
  float *pfStack_40;
  
  uVar7 = _UNK_14366ce10;
  *(undefined8 *)param_1 = _DAT_14366ce08;
  *(undefined8 *)(param_1 + 2) = uVar7;
  fVar6 = _UNK_14306134c;
  fVar5 = _UNK_143061348;
  fVar4 = _UNK_143061344;
  fVar3 = _DAT_143061340;
  pfVar12 = (float *)param_2[10];
  pfStack_40 = (float *)param_2[0xb];
  pfStack_48 = pfVar12;
  lVar8 = *param_2;
  lVar10 = param_2[1];
  lVar9 = param_2[2];
  lStack_60 = param_2[7];
  uStack_80 = param_2[3];
  uStack_78 = param_2[4];
  lStack_70 = param_2[5];
  lStack_68 = param_2[6];
  alStack_58[0] = param_2[8];
  alStack_58[1] = param_2[9];
  lStack_70._0_1_ = (byte)param_2[5];
  lVar11 = param_2[6];
  auVar14 = _DAT_14305a4a0;
  fVar15 = _DAT_142e36f3c;
  fVar16 = _DAT_142e36f3c;
  do {
    if ((lVar8 == 1) && (lVar9 != lVar10)) {
      fVar17 = *(float *)(&uStack_80 + lVar10);
      fVar18 = 0.0;
LAB_142b3daa6:
      plVar13 = &uStack_80 + lVar10;
      lVar10 = lVar10 + 1;
      lVar8 = 1;
      lStack_68 = lVar11;
    }
    else {
      if ((pfVar12 != (float *)0x0) && (pfVar12 != pfStack_40)) {
        pfStack_48 = pfVar12 + 4;
        fVar17 = *pfVar12 * fVar3 - pfVar12[2] * fVar5;
        fVar18 = pfVar12[1] * fVar4 - pfVar12[3] * fVar6;
        uStack_80 = CONCAT44(fVar18,fVar17);
        uStack_78 = CONCAT44(pfVar12[1] * fVar4 + pfVar12[3] * fVar6,
                             *pfVar12 * fVar3 + pfVar12[2] * fVar5);
        lVar9 = 2;
        lVar10 = 0;
        pfVar12 = pfVar12 + 4;
        goto LAB_142b3daa6;
      }
      if ((lStack_60 != lVar11 & (byte)lStack_70) != 1) {
        *param_1 = fVar16;
        return;
      }
      lStack_68 = lVar11 + 1;
      plVar13 = alStack_58 + lVar11;
      fVar17 = *(float *)(alStack_58 + lVar11);
      fVar18 = 0.0;
      lVar8 = 0;
    }
    fVar1 = *(float *)((longlong)plVar13 + 4);
    if (fVar17 <= fVar16) {
      fVar16 = fVar17;
    }
    if (fVar1 <= fVar15) {
      fVar15 = fVar1;
    }
    param_1[1] = fVar15;
    auVar2._4_4_ = fVar1;
    auVar2._0_4_ = fVar17;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = 0;
    auVar14 = maxps(auVar14,auVar2);
    *(longlong *)(param_1 + 2) = auVar14._0_8_;
    lVar11 = lStack_68;
  } while( true );
}

