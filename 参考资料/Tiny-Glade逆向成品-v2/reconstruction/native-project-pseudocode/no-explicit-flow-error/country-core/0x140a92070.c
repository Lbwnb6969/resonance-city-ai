// VA 0x140a92070, PDB extent 392 bytes
// country_core::asset_libraries::ssbo_library::impl$29::fetch<ref_mut$<country_core::systems::render_loop::indirect_params::DrawIndexedIndirectBuffer>,ref_mut$<country_core::render::nani::buffers::NaniNextVisibilityBitmaskSsbo>,ref_mut$<country_core::render::nani::buffers::NaniPrevVisibilityBitmaskSsbo>,ref_mut$<country_core::render::nani::buffers::NaniInstanceIndirectionSsbo>,ref_mut$<country_core::render::nani::buffers::NaniFilteredInstanceAllocatorSsbo>,ref$<country_core::render::nani::buffers::NaniDrawListOffsetDefaults>,ref$<country_core::render::nani::buffers::NaniDrawListMergeWindows>,ref_mut$<country_core::render::nani::buffers::NaniDrawListLengthSsbo>,ref_mut$<country_core::render::nani::buffers::NaniInstanceIndirectionAllocatorSsbo>,ref_mut$<country_core::render::nani::buffers::NaniDrawListSsbo>,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::impl$29::fetch<ref_mut$<country_core::systems::render_loop::indirect_params::DrawIndexedIndirectBuffer>,ref_mut$<country_core::render::nani::buffers::NaniNextVisibilityBitmaskSsbo>,ref_mut$<country_core::render::nani::buffers::NaniPrevVisibilityBitmaskSsbo>,ref_mut$<country_core::render::nani::buffers::NaniInstanceIndirectionSsbo>,ref_mut$<country_core::render::nani::buffers::NaniFilteredInstanceAllocatorSsbo>,ref$<country_core::render::nani::buffers::NaniDrawListOffsetDefaults>,ref$<country_core::render::nani::buffers::NaniDrawListMergeWindows>,ref_mut$<country_core::render::nani::buffers::NaniDrawListLengthSsbo>,ref_mut$<country_core::render::nani::buffers::NaniInstanceIndirectionAllocatorSsbo>,ref_mut$<country_core::render::nani::buffers::NaniDrawListSsbo>,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 392 */

longlong pdb_140a92070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  pdb_14152b6c0(param_1,param_3,param_2);
  pdb_14152bdb0(&uStack_cc,param_3,param_2);
  pdb_141529fa0(&uStack_b8,param_3,param_2);
  pdb_14152d030(&uStack_a4,param_3,param_2);
  pdb_1415298b0(&uStack_90,param_3,param_2);
  pdb_141525c90(&uStack_7c,param_3,param_2);
  pdb_1415283e0(&uStack_68,param_3,param_2);
  pdb_14152c250(&uStack_54,param_3,param_2);
  pdb_14152ee40(&uStack_40,param_3,param_2);
  pdb_141529660(&uStack_2c,param_3,param_2);
  *(undefined4 *)(param_1 + 0x24) = uStack_bc;
  *(undefined8 *)(param_1 + 0x14) = uStack_cc;
  *(undefined8 *)(param_1 + 0x1c) = uStack_c4;
  *(undefined4 *)(param_1 + 0x38) = uStack_a8;
  *(undefined8 *)(param_1 + 0x28) = uStack_b8;
  *(undefined8 *)(param_1 + 0x30) = uStack_b0;
  *(undefined4 *)(param_1 + 0x4c) = uStack_94;
  *(undefined8 *)(param_1 + 0x3c) = uStack_a4;
  *(undefined8 *)(param_1 + 0x44) = uStack_9c;
  *(undefined4 *)(param_1 + 0x60) = uStack_80;
  *(undefined8 *)(param_1 + 0x50) = uStack_90;
  *(undefined8 *)(param_1 + 0x58) = uStack_88;
  *(undefined4 *)(param_1 + 0x74) = uStack_6c;
  *(undefined8 *)(param_1 + 100) = uStack_7c;
  *(undefined8 *)(param_1 + 0x6c) = uStack_74;
  *(undefined8 *)(param_1 + 0x78) = uStack_68;
  *(undefined8 *)(param_1 + 0x80) = uStack_60;
  *(undefined4 *)(param_1 + 0x88) = uStack_58;
  *(undefined8 *)(param_1 + 0x8c) = uStack_54;
  *(undefined8 *)(param_1 + 0x94) = uStack_4c;
  *(undefined4 *)(param_1 + 0x9c) = uStack_44;
  *(undefined8 *)(param_1 + 0xa0) = uStack_40;
  *(undefined8 *)(param_1 + 0xa8) = uStack_38;
  *(undefined4 *)(param_1 + 0xb0) = uStack_30;
  *(undefined8 *)(param_1 + 0xb4) = uStack_2c;
  *(undefined8 *)(param_1 + 0xbc) = uStack_24;
  *(undefined4 *)(param_1 + 0xc4) = uStack_1c;
  return param_1;
}

