// Matched PDB: core::iter::adapters::flatten::impl$3::next<bevy_ecs::query::iter::QueryIter<tuple$<ref$<country_core::resources::roofs::roof_tiles::RoofTiles>,ref$<country_core::resources::roofs::roof_tile_sim::RoofTileSimulation>,ref$<country_core::resources::roofs::roof_shape::Roof>,ref$<country_core::resources::roofs::roof_animation::RoofAnimation> >,tuple$<> >,core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo> >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure_env$0>
// VA 0x1415dc320, PDB extent 1366 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::iter::adapters::flatten::impl$3::next<bevy_ecs::query::iter::QueryIter<tuple$<ref$<country_core::resources::roofs::roof_tiles::RoofTiles>,ref$<country_core::resources::roofs::roof_tile_sim::RoofTileSimulation>,ref$<country_core::resources::roofs::roof_shape::Roof>,ref$<country_core::resources::roofs::roof_animation::RoofAnimation>
   >,tuple$<>
   >,core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure_env$0>
   Extent: 1366 bytes. No whole-program auto-analysis. */

void pdb_1415dc320(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *in_RDX;
  longlong lVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  undefined4 uVar18;
  char cStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar18 = pdb_1415df2e0(&cStack_58);
  if (cStack_58 == '\0') {
    do {
      if (*(byte *)(in_RDX + 0x38) == 2) {
LAB_1415dc854:
        if ((int)in_RDX[0x14] != 1) {
          *(undefined4 *)param_1 = 0;
          return;
        }
        if (in_RDX[0x1a] == 0) {
LAB_1415df34f:
          if (in_RDX[0x15] != 0) {
            plVar17 = in_RDX + 0x19;
            lVar6 = *plVar17;
            *plVar17 = 0;
            if (lVar6 != 0) {
              pdb_141a75e80(&stack0xffffffffffffffc8,in_RDX[0x15]);
              puVar11 = (undefined4 *)in_RDX[0x16];
              lVar6 = in_RDX[0x17];
              puVar16 = (undefined4 *)in_RDX[0x18];
              in_RDX[0x1a] = (longlong)unaff_RDI;
              in_RDX[0x1b] = (longlong)unaff_RDI;
              in_RDX[0x1c] = unaff_RBP;
              in_RDX[0x1d] = (longlong)(unaff_RDI + unaff_RSI);
              in_RDX[0x1e] = (longlong)puVar11;
              in_RDX[0x1f] = lVar6;
              in_RDX[0x20] = (longlong)puVar16;
              if (unaff_RSI != 0) goto LAB_1415df3cc;
              if (unaff_RBP != 0) {
                func_0x0001406abac0(unaff_RDI,unaff_RBP << 3,4);
              }
              uVar18 = 0;
              *plVar17 = 0;
              in_RDX[0x1a] = 0;
            }
          }
          if (in_RDX[0x21] != 0) {
            puVar2 = (undefined8 *)in_RDX[0x22];
            if (puVar2 != (undefined8 *)in_RDX[0x24]) {
              in_RDX[0x22] = (longlong)(puVar2 + 1);
              param_2 = *puVar2;
              uVar18 = *(undefined4 *)in_RDX[0x25];
              param_3 = *(undefined4 *)(in_RDX[0x26] + 0x4c);
              param_4 = *(undefined4 *)in_RDX[0x27];
              goto LAB_1415df456;
            }
            if (in_RDX[0x23] != 0) {
              uVar18 = func_0x0001406abac0(in_RDX[0x21],in_RDX[0x23] << 3,4);
            }
            in_RDX[0x21] = 0;
          }
          in_RDX[0x14] = 0;
          uVar4 = 0;
        }
        else {
          if ((undefined8 *)in_RDX[0x1b] == (undefined8 *)in_RDX[0x1d]) {
            if (in_RDX[0x1c] != 0) {
              uVar18 = func_0x0001406abac0(in_RDX[0x1a],in_RDX[0x1c] << 3,4);
            }
            in_RDX[0x1a] = 0;
            goto LAB_1415df34f;
          }
          puVar11 = (undefined4 *)in_RDX[0x1e];
          lVar6 = in_RDX[0x1f];
          puVar16 = (undefined4 *)in_RDX[0x20];
          unaff_RDI = (undefined8 *)in_RDX[0x1b];
LAB_1415df3cc:
          in_RDX[0x1b] = (longlong)(unaff_RDI + 1);
          param_2 = *unaff_RDI;
          uVar18 = *puVar11;
          param_3 = *(undefined4 *)(lVar6 + 0x4c);
          param_4 = *puVar16;
LAB_1415df456:
          uVar4 = 1;
        }
        *(undefined4 *)param_1 = uVar4;
        *(undefined8 *)((longlong)param_1 + 4) = param_2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar18;
        *(undefined4 *)(param_1 + 2) = param_3;
        *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
        return;
      }
      lVar6 = in_RDX[0x2c];
      uVar8 = *(uint *)((longlong)in_RDX + 0x1bc);
      if ((*(byte *)(in_RDX + 0x38) & 1) == 0) {
        if (uVar8 == *(uint *)(in_RDX + 0x37)) {
          puVar10 = (uint *)in_RDX[0x2d];
          do {
            if (puVar10 == (uint *)in_RDX[0x2e]) goto LAB_1415dc854;
            in_RDX[0x2d] = (longlong)(puVar10 + 1);
            uVar8 = *puVar10;
            lVar1 = *(longlong *)(*(longlong *)(in_RDX[0x2b] + 8) + 0x58 + (ulonglong)uVar8 * 0xa0);
            puVar10 = puVar10 + 1;
          } while (lVar1 == 0);
          lVar9 = *(longlong *)(in_RDX[0x2b] + 8) + (ulonglong)uVar8 * 0xa0;
          uVar12 = (ulonglong)*(uint *)(lVar9 + 0x94);
          lVar7 = *(longlong *)(in_RDX[0x2a] + 8);
          lVar14 = lVar7 + uVar12 * 0x48;
          uVar12 = *(ulonglong *)(lVar7 + 0x40 + uVar12 * 0x48);
          if ((*(ulonglong *)(lVar6 + 0x110) < uVar12) &&
             (uVar5 = *(ulonglong *)
                       (*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar6 + 0x110) * 8),
             uVar5 != 0)) {
            lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
            in_RDX[0x33] = lVar7;
            uVar5 = *(ulonglong *)(lVar6 + 0x118);
            if (uVar12 <= uVar5) goto LAB_1415dc6aa;
LAB_1415dc618:
            uVar5 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
            if (uVar5 == 0) goto LAB_1415dc6aa;
            lVar13 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
            in_RDX[0x34] = lVar13;
            uVar5 = *(ulonglong *)(lVar6 + 0x120);
            if (uVar5 < uVar12) goto LAB_1415dc6c0;
LAB_1415dc733:
            lVar15 = 0;
            in_RDX[0x35] = 0;
            uVar5 = *(ulonglong *)(lVar6 + 0x128);
            if (uVar12 <= uVar5) goto LAB_1415dc794;
LAB_1415dc749:
            uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
            if (uVar12 == 0) goto LAB_1415dc794;
            lVar6 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar12 * 0x30);
          }
          else {
            lVar7 = 0;
            in_RDX[0x33] = 0;
            uVar5 = *(ulonglong *)(lVar6 + 0x118);
            if (uVar5 < uVar12) goto LAB_1415dc618;
LAB_1415dc6aa:
            lVar13 = 0;
            in_RDX[0x34] = 0;
            uVar5 = *(ulonglong *)(lVar6 + 0x120);
            if (uVar12 <= uVar5) goto LAB_1415dc733;
LAB_1415dc6c0:
            uVar5 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
            if (uVar5 == 0) goto LAB_1415dc733;
            lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
            in_RDX[0x35] = lVar15;
            uVar5 = *(ulonglong *)(lVar6 + 0x128);
            if (uVar5 < uVar12) goto LAB_1415dc749;
LAB_1415dc794:
            lVar6 = 0;
          }
          in_RDX[0x36] = lVar6;
          lVar14 = *(longlong *)(lVar9 + 0x50);
          in_RDX[0x31] = lVar14;
          in_RDX[0x32] = lVar1;
          *(int *)(in_RDX + 0x37) = (int)lVar1;
          uVar8 = 0;
        }
        else {
          lVar14 = in_RDX[0x31];
          lVar7 = in_RDX[0x33];
          lVar13 = in_RDX[0x34];
          lVar15 = in_RDX[0x35];
          lVar6 = in_RDX[0x36];
        }
        uVar3 = ~*(uint *)(lVar14 + 8 + (ulonglong)uVar8 * 0x10);
      }
      else if (uVar8 == *(uint *)(in_RDX + 0x37)) {
        puVar10 = (uint *)in_RDX[0x2d];
        do {
          if (puVar10 == (uint *)in_RDX[0x2e]) goto LAB_1415dc854;
          in_RDX[0x2d] = (longlong)(puVar10 + 1);
          uVar8 = *puVar10;
          lVar14 = *(longlong *)(in_RDX[0x2a] + 8);
          lVar1 = *(longlong *)(lVar14 + 0x10 + (ulonglong)uVar8 * 0x48);
          puVar10 = puVar10 + 1;
        } while (lVar1 == 0);
        lVar14 = lVar14 + (ulonglong)uVar8 * 0x48;
        uVar12 = *(ulonglong *)(lVar14 + 0x40);
        if ((*(ulonglong *)(lVar6 + 0x110) < uVar12) &&
           (uVar5 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lVar6 + 0x110) * 8)
           , uVar5 != 0)) {
          lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
          in_RDX[0x33] = lVar7;
          uVar5 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar12 <= uVar5) goto LAB_1415dc656;
LAB_1415dc5c1:
          uVar5 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
          if (uVar5 == 0) goto LAB_1415dc656;
          lVar13 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
          in_RDX[0x34] = lVar13;
          uVar5 = *(ulonglong *)(lVar6 + 0x120);
          if (uVar5 < uVar12) goto LAB_1415dc670;
LAB_1415dc6fa:
          lVar15 = 0;
          in_RDX[0x35] = 0;
          uVar5 = *(ulonglong *)(lVar6 + 0x128);
          if (uVar12 <= uVar5) goto LAB_1415dc76c;
LAB_1415dc710:
          uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
          if (uVar12 == 0) goto LAB_1415dc76c;
          lVar6 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar12 * 0x30);
        }
        else {
          lVar7 = 0;
          in_RDX[0x33] = 0;
          uVar5 = *(ulonglong *)(lVar6 + 0x118);
          if (uVar5 < uVar12) goto LAB_1415dc5c1;
LAB_1415dc656:
          lVar13 = 0;
          in_RDX[0x34] = 0;
          uVar5 = *(ulonglong *)(lVar6 + 0x120);
          if (uVar12 <= uVar5) goto LAB_1415dc6fa;
LAB_1415dc670:
          uVar5 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar5 * 8);
          if (uVar5 == 0) goto LAB_1415dc6fa;
          lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar5 * 0x30);
          in_RDX[0x35] = lVar15;
          uVar5 = *(ulonglong *)(lVar6 + 0x128);
          if (uVar5 < uVar12) goto LAB_1415dc710;
LAB_1415dc76c:
          lVar6 = 0;
        }
        in_RDX[0x36] = lVar6;
        in_RDX[0x2f] = *(longlong *)(lVar14 + 8);
        in_RDX[0x30] = lVar1;
        *(int *)(in_RDX + 0x37) = (int)lVar1;
        uVar8 = 0;
        uVar3 = uVar8;
      }
      else {
        lVar7 = in_RDX[0x33];
        lVar13 = in_RDX[0x34];
        lVar15 = in_RDX[0x35];
        lVar6 = in_RDX[0x36];
        uVar3 = uVar8;
      }
      uVar12 = (ulonglong)uVar3;
      plVar17 = (longlong *)(uVar12 * 0x10 + lVar7);
      *(uint *)((longlong)in_RDX + 0x1bc) = uVar8 + 1;
      lVar7 = in_RDX[0x28];
      if (*plVar17 == 0) {
        plVar17 = (longlong *)0x0;
      }
      if (*in_RDX != 0) {
        if ((in_RDX[6] != 0) && (in_RDX[8] != 0)) {
          func_0x0001406abac0(in_RDX[6],in_RDX[8] << 3,4);
        }
        if ((in_RDX[0xd] != 0) && (in_RDX[0xf] != 0)) {
          func_0x0001406abac0(in_RDX[0xd],in_RDX[0xf] << 3,4);
        }
      }
      *in_RDX = 1;
      in_RDX[1] = lVar7;
      in_RDX[2] = lVar13 + uVar12 * 0x18;
      in_RDX[3] = uVar12 * 0x58 + lVar15;
      in_RDX[4] = lVar6 + uVar12 * 8;
      in_RDX[5] = (longlong)plVar17;
      in_RDX[6] = 0;
      in_RDX[0xd] = 0;
      uVar18 = pdb_1415df2e0(&cStack_58,in_RDX);
    } while (cStack_58 == '\0');
  }
  param_1[2] = uStack_48;
  *param_1 = CONCAT71(uStack_57,cStack_58);
  param_1[1] = uStack_50;
  return;
}

