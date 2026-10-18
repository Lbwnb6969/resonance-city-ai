// VA 0x142b3db80, PDB extent 1233 bytes
// utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<bevy_ecs::query::iter::QueryIter<ref$<system_color::radial_menu::ColorRadialMenu>,tuple$<> >,array$<glam::f32::vec2::Vec2,2>,system_color::show_color_menu::publish_palette_bounds::closure$0::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::aabb::Aabb2::from_points<core::iter::adapters::flatten::FlatMap<bevy_ecs::query::iter::QueryIter<ref$<system_color::radial_menu::ColorRadialMenu>,tuple$<>
   >,array$<glam::f32::vec2::Vec2,2>,system_color::show_color_menu::publish_palette_bounds::closure$0::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/aabb.rs
   Extent: 1233 */

float * pdb_142b3db80(float *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lStack_150;
  ulonglong uStack_148;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte bStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong alStack_f0 [4];
  longlong lStack_d0;
  longlong lStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  uint uStack_88;
  uint uStack_84;
  byte bStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  
  fVar23 = _UNK_14366ce14;
  fVar22 = _UNK_14366ce10;
  fVar21 = _UNK_14366ce0c;
  *param_1 = _DAT_14366ce08;
  param_1[1] = fVar21;
  param_1[2] = fVar22;
  param_1[3] = fVar23;
  pub_142e32760(&uStack_130,param_2,0xb8);
  lStack_68 = lStack_d0;
  lStack_60 = lStack_f8;
  lStack_150 = lStack_a0;
  uStack_148 = uStack_98;
  lVar2 = lStack_128;
  lVar3 = lStack_120;
  uVar4 = uStack_130;
  puVar7 = puStack_c0;
  lVar10 = lStack_100;
  lVar11 = lStack_90;
  uVar5 = uStack_88;
  fVar21 = _DAT_143021a70;
  fVar22 = _UNK_143021a74;
  fVar23 = _UNK_143021a78;
  fVar24 = _UNK_143021a7c;
LAB_142b3dcd3:
  uVar13 = uStack_84;
  if (bStack_80 != 2) {
    if ((bStack_80 & 1) == 0) {
      bVar12 = lVar3 == lVar2;
      uVar6 = (ulonglong)uVar5;
      uVar9 = uVar4 & 0xffffffff;
      do {
        if ((uVar9 & 1) != 0) {
          if (!bVar12) goto LAB_142b3dc6c;
          uStack_130 = 0;
          uVar4 = 0;
        }
        if (uVar13 == (uint)uVar6) {
          if (puVar7 == puStack_b8) {
LAB_142b3dfd0:
            lStack_a0 = lStack_150;
            uStack_98 = uStack_148;
            uStack_88 = uVar5;
            uStack_84 = uVar13;
            goto LAB_142b3dff1;
          }
          while( true ) {
            uVar6 = *(ulonglong *)(*(longlong *)(lStack_68 + 8) + 0x58 + (ulonglong)*puVar7 * 0xa0);
            if (uVar6 != 0) break;
            puVar7 = puVar7 + 1;
            if (puVar7 == puStack_b8) goto LAB_142b3dfd0;
          }
          lVar2 = *(longlong *)(lStack_68 + 8) + (ulonglong)*puVar7 * 0xa0;
          puVar7 = puVar7 + 1;
          uVar4 = (ulonglong)*(uint *)(lVar2 + 0x94);
          if (*(ulonglong *)(lStack_c8 + 0x110) <
              *(ulonglong *)(*(longlong *)(alStack_f0[3] + 8) + 0x40 + uVar4 * 0x48)) {
            lVar11 = *(longlong *)(alStack_f0[3] + 8) + uVar4 * 0x48;
            uVar4 = *(ulonglong *)
                     (*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lStack_c8 + 0x110) * 8);
            if (uVar4 == 0) goto LAB_142b3de60;
            lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + ~uVar4 * 0x30);
          }
          else {
LAB_142b3de60:
            lVar11 = 0;
          }
          lStack_150 = *(longlong *)(lVar2 + 0x50);
          uVar13 = 0;
          uVar5 = (uint)uVar6;
          uStack_148 = uVar6;
          puStack_c0 = puVar7;
          lStack_90 = lVar11;
        }
        lVar2 = (ulonglong)~*(uint *)(lStack_150 + 8 + (ulonglong)uVar13 * 0x10) * 0xd8;
        uVar13 = uVar13 + 1;
        uVar1 = *(undefined4 *)(lVar11 + 200 + lVar2);
        uStack_84 = uVar13;
        pdb_140deec90(&uStack_78,lVar11 + lVar2 + 0x70,uVar1,uVar1);
        uStack_130 = 1;
        lStack_128 = 0;
        lStack_120 = 2;
        uStack_118 = uStack_78;
        uStack_114 = uStack_74;
        uStack_110 = uStack_70;
        uStack_10c = uStack_6c;
        uVar9 = 1;
        uVar4 = 1;
        lVar3 = 2;
        lVar2 = 0;
        bVar12 = false;
      } while( true );
    }
    uVar6 = (ulonglong)uVar5;
    uVar9 = uVar4 & 0xffffffff;
    do {
      if ((uVar9 & 1) != 0) {
        if (lVar3 != lVar2) goto LAB_142b3dc92;
        uStack_130 = 0;
        uVar4 = 0;
      }
      if (uVar13 == (uint)uVar6) {
        uStack_84 = uVar13;
        if (puVar7 == puStack_b8) goto LAB_142b3dff1;
        while( true ) {
          uVar6 = *(ulonglong *)
                   (*(longlong *)(alStack_f0[3] + 8) + 0x10 + (ulonglong)*puVar7 * 0x48);
          if (uVar6 != 0) break;
          puVar7 = puVar7 + 1;
          if (puVar7 == puStack_b8) goto LAB_142b3dff1;
        }
        lVar2 = *(longlong *)(alStack_f0[3] + 8) + (ulonglong)*puVar7 * 0x48;
        puVar7 = puVar7 + 1;
        if ((*(ulonglong *)(lStack_c8 + 0x110) < *(ulonglong *)(lVar2 + 0x40)) &&
           (uVar4 = *(ulonglong *)
                     (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_c8 + 0x110) * 8),
           uVar4 != 0)) {
          lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar4 * 0x30);
        }
        else {
          lVar11 = 0;
        }
        uStack_b0 = *(undefined8 *)(lVar2 + 8);
        uVar5 = (uint)uVar6;
        uVar13 = 0;
        puStack_c0 = puVar7;
        uStack_a8 = uVar6;
        lStack_90 = lVar11;
        uStack_88 = uVar5;
      }
      uVar4 = (ulonglong)uVar13;
      uVar13 = uVar13 + 1;
      uVar1 = *(undefined4 *)(lVar11 + 200 + uVar4 * 0xd8);
      uStack_84 = uVar13;
      pdb_140deec90(&uStack_78,lVar11 + uVar4 * 0xd8 + 0x70,uVar1,uVar1);
      uStack_130 = 1;
      lStack_128 = 0;
      lStack_120 = 2;
      uStack_118 = uStack_78;
      uStack_114 = uStack_74;
      uStack_110 = uStack_70;
      uStack_10c = uStack_6c;
      uVar9 = 1;
      uVar4 = 1;
      lVar3 = 2;
      lVar2 = 0;
    } while( true );
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = 1;
    if (lVar3 == lVar2) {
      uStack_130 = 0;
      goto LAB_142b3dcf1;
    }
    goto LAB_142b3dc92;
  }
LAB_142b3dcf1:
  uVar4 = 0;
  goto LAB_142b3dffe;
LAB_142b3dc6c:
  lStack_a0 = lStack_150;
  uStack_98 = uStack_148;
  uStack_88 = uVar5;
LAB_142b3dc92:
  plVar8 = (longlong *)(&uStack_118 + lVar2 * 2);
  lVar2 = lVar2 + 1;
  uStack_84 = uVar13;
  lStack_128 = lVar2;
  goto LAB_142b3dcb0;
LAB_142b3dff1:
  puStack_c0 = puVar7;
LAB_142b3dffe:
  if ((lStack_60 != lVar10 & bStack_108) != 1) {
    return param_1;
  }
  plVar8 = alStack_f0 + lVar10;
  lVar10 = lVar10 + 1;
  lStack_100 = lVar10;
LAB_142b3dcb0:
  fVar17 = (float)*plVar8;
  fVar18 = (float)((ulonglong)*plVar8 >> 0x20);
  fVar19 = (float)*plVar8;
  fVar20 = (float)((ulonglong)*plVar8 >> 0x20);
  uVar13 = -(uint)(fVar21 < fVar17);
  uVar14 = -(uint)(fVar22 < fVar18);
  uVar15 = -(uint)(fVar19 < fVar23);
  uVar16 = -(uint)(fVar20 < fVar24);
  fVar21 = (float)((uint)fVar21 & uVar13 | ~uVar13 & (uint)fVar17);
  fVar22 = (float)((uint)fVar22 & uVar14 | ~uVar14 & (uint)fVar18);
  fVar23 = (float)((uint)fVar23 & uVar15 | ~uVar15 & (uint)fVar19);
  fVar24 = (float)((uint)fVar24 & uVar16 | ~uVar16 & (uint)fVar20);
  *param_1 = fVar21;
  param_1[1] = fVar22;
  param_1[2] = fVar23;
  param_1[3] = fVar24;
  goto LAB_142b3dcd3;
}

