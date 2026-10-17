// Matched PDB: core::iter::adapters::flatten::and_then_or_clear<core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo> >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::PushConstants,enum2$<core::option::Option<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::PushConstants> > (*)(ref_mut$<core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo> >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0> >)>
// VA 0x1415df2e0, PDB extent 471 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::iter::adapters::flatten::and_then_or_clear<core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::PushConstants,enum2$<core::option::Option<country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::PushConstants>
   > 
   (*)(ref_mut$<core::iter::adapters::flatten::FlatMap<core::option::Iter<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   >,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<country_core::render::sparse_instance_buffer::InstancedDraw,alloc::alloc::Global>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure$0::closure_env$0>,country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute::closure$0::closure_env$0>
   >)>
   Extent: 471 bytes. No whole-program auto-analysis. */

void pdb_1415df2e0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 *in_RCX;
  int *in_RDX;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lStack_38;
  undefined8 *puStack_30;
  longlong lStack_28;
  
  if (*in_RDX != 1) {
    *in_RCX = 0;
    return;
  }
  if (*(longlong *)(in_RDX + 0xc) == 0) {
LAB_1415df34f:
    if (*(longlong *)(in_RDX + 2) != 0) {
      plVar1 = (longlong *)(in_RDX + 10);
      lVar5 = *plVar1;
      *plVar1 = 0;
      if (lVar5 != 0) {
        pdb_141a75e80(&lStack_38,*(longlong *)(in_RDX + 2));
        puVar4 = *(undefined4 **)(in_RDX + 4);
        lVar5 = *(longlong *)(in_RDX + 6);
        puVar6 = *(undefined4 **)(in_RDX + 8);
        *(undefined8 **)(in_RDX + 0xc) = puStack_30;
        *(undefined8 **)(in_RDX + 0xe) = puStack_30;
        *(longlong *)(in_RDX + 0x10) = lStack_38;
        *(undefined8 **)(in_RDX + 0x12) = puStack_30 + lStack_28;
        *(undefined4 **)(in_RDX + 0x14) = puVar4;
        *(longlong *)(in_RDX + 0x16) = lVar5;
        *(undefined4 **)(in_RDX + 0x18) = puVar6;
        if (lStack_28 != 0) goto LAB_1415df3cc;
        if (lStack_38 != 0) {
          func_0x0001406abac0(puStack_30,lStack_38 << 3,4);
        }
        param_1 = 0;
        *plVar1 = 0;
        in_RDX[0xc] = 0;
        in_RDX[0xd] = 0;
      }
    }
    if (*(longlong *)(in_RDX + 0x1a) != 0) {
      puVar2 = *(undefined8 **)(in_RDX + 0x1c);
      if (puVar2 != *(undefined8 **)(in_RDX + 0x20)) {
        *(undefined8 **)(in_RDX + 0x1c) = puVar2 + 1;
        param_2 = *puVar2;
        param_1 = **(undefined4 **)(in_RDX + 0x22);
        param_3 = *(undefined4 *)(*(longlong *)(in_RDX + 0x24) + 0x4c);
        param_4 = **(undefined4 **)(in_RDX + 0x26);
        goto LAB_1415df456;
      }
      if (*(longlong *)(in_RDX + 0x1e) != 0) {
        param_1 = func_0x0001406abac0(*(longlong *)(in_RDX + 0x1a),*(longlong *)(in_RDX + 0x1e) << 3
                                      ,4);
      }
      in_RDX[0x1a] = 0;
      in_RDX[0x1b] = 0;
    }
    in_RDX[0] = 0;
    in_RDX[1] = 0;
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(in_RDX + 0xe) == *(undefined8 **)(in_RDX + 0x12)) {
      if (*(longlong *)(in_RDX + 0x10) != 0) {
        param_1 = func_0x0001406abac0(*(longlong *)(in_RDX + 0xc),*(longlong *)(in_RDX + 0x10) << 3,
                                      4);
      }
      in_RDX[0xc] = 0;
      in_RDX[0xd] = 0;
      goto LAB_1415df34f;
    }
    puVar4 = *(undefined4 **)(in_RDX + 0x14);
    lVar5 = *(longlong *)(in_RDX + 0x16);
    puVar6 = *(undefined4 **)(in_RDX + 0x18);
    puStack_30 = *(undefined8 **)(in_RDX + 0xe);
LAB_1415df3cc:
    *(undefined8 **)(in_RDX + 0xe) = puStack_30 + 1;
    param_2 = *puStack_30;
    param_1 = *puVar4;
    param_3 = *(undefined4 *)(lVar5 + 0x4c);
    param_4 = *puVar6;
LAB_1415df456:
    uVar3 = 1;
  }
  *in_RCX = uVar3;
  *(undefined8 *)(in_RCX + 1) = param_2;
  in_RCX[3] = param_1;
  in_RCX[4] = param_3;
  in_RCX[5] = param_4;
  return;
}

