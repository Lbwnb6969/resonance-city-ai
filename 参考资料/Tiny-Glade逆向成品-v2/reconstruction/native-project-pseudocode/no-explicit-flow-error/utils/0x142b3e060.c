// VA 0x142b3e060, PDB extent 472 bytes
// utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<system_color::radial_menu::RadialMenuRing>,array$<glam::f32::vec2::Vec2,2>,system_color::show_color_menu::show_color_options::closure_env$30> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<core::slice::iter::Iter<system_color::radial_menu::RadialMenuRing>,array$<glam::f32::vec2::Vec2,2>,system_color::show_color_menu::show_color_options::closure_env$30>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 472 */

void pdb_142b3e060(float *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float afStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  float afStack_78 [4];
  longlong lStack_68;
  longlong lStack_60;
  float *pfStack_50;
  undefined8 uStack_48;
  
  uVar4 = _UNK_14366ce10;
  uStack_48 = 0xfffffffffffffffe;
  pfStack_50 = param_1;
  *(undefined8 *)param_1 = _DAT_14366ce08;
  *(undefined8 *)(param_1 + 2) = uVar4;
  lVar10 = *param_2;
  lVar8 = param_2[1];
  lVar7 = param_2[2];
  lVar2 = param_2[7];
  lVar9 = param_2[10];
  lVar3 = param_2[0xb];
  lStack_68 = lVar9;
  lStack_60 = lVar3;
  afStack_a0[0] = *(float *)(param_2 + 3);
  afStack_a0[1] = (float)*(undefined4 *)((longlong)param_2 + 0x1c);
  lStack_88 = param_2[6];
  lStack_80 = lVar2;
  afStack_a0[2] = (float)(int)param_2[4];
  afStack_a0[3] = (float)*(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = (int)param_2[5];
  uVar6 = uStack_90;
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  afStack_78[0] = *(float *)(param_2 + 8);
  afStack_78[1] = (float)*(undefined4 *)((longlong)param_2 + 0x44);
  afStack_78[2] = (float)(int)param_2[9];
  afStack_78[3] = (float)*(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_90._0_1_ = (byte)(int)param_2[5];
  bVar5 = (byte)uStack_90;
  lVar13 = param_2[6];
  fVar15 = _DAT_143021a70;
  fVar16 = _UNK_143021a74;
  fVar17 = _UNK_143021a78;
  fVar18 = _UNK_143021a7c;
  uStack_90 = uVar6;
  do {
    if ((lVar10 == 1) && (lVar7 != lVar8)) {
      fVar14 = afStack_a0[lVar8 * 2];
LAB_142b3e106:
      pfVar11 = afStack_a0 + lVar8 * 2;
      lVar8 = lVar8 + 1;
      lVar10 = 1;
      lVar12 = lVar13;
    }
    else {
      if ((lVar9 != 0) && (lVar9 != lVar3)) {
        lVar9 = lVar9 + 0x78;
        lStack_68 = lVar9;
        pdb_1428d0870();
        afStack_a0[0] = fStack_d8;
        afStack_a0[1] = (float)uStack_d4;
        afStack_a0[2] = (float)uStack_d0;
        afStack_a0[3] = (float)uStack_cc;
        lVar7 = 2;
        lVar8 = 0;
        fVar14 = fStack_d8;
        goto LAB_142b3e106;
      }
      if ((lVar2 != lVar13 & bVar5) != 1) {
        *pfStack_50 = fVar15;
        pfStack_50[1] = fVar16;
        pfStack_50[2] = fVar17;
        pfStack_50[3] = fVar18;
        return;
      }
      lVar12 = lVar13 + 1;
      lStack_88 = lVar12;
      pfVar11 = afStack_78 + lVar13 * 2;
      fVar14 = afStack_78[lVar13 * 2];
      lVar10 = 0;
    }
    fVar1 = pfVar11[1];
    fVar15 = (float)((uint)fVar15 & -(uint)(fVar15 < fVar14) |
                    ~-(uint)(fVar15 < fVar14) & (uint)fVar14);
    fVar16 = (float)((uint)fVar16 & -(uint)(fVar16 < fVar1) | ~-(uint)(fVar16 < fVar1) & (uint)fVar1
                    );
    fVar17 = (float)((uint)fVar17 & -(uint)(fVar14 < fVar17) |
                    ~-(uint)(fVar14 < fVar17) & (uint)fVar14);
    fVar18 = (float)((uint)fVar18 & -(uint)(fVar1 < fVar18) | ~-(uint)(fVar1 < fVar18) & (uint)fVar1
                    );
    lVar13 = lVar12;
  } while( true );
}

