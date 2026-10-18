// VA 0x140ad9d30, PDB extent 298 bytes
// country_core::asset_libraries::ssbo_library::impl$27::fetch<ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPosition>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPieceGroup>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPositionRange>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ClumpAttribSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveCountSsbo>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2ExemplarParams>,rhapsody::rg::api::GraphApi>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::impl$27::fetch<ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPosition>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPieceGroup>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2CardPointPositionRange>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ClumpAttribSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveInstanceSsbo>,ref$<country_core::systems::render_loop::compute_passes::grass2::Grass2ActiveCountSsbo>,ref$<country_core::shader::grass2::inc::card_splat_common::Grass2ExemplarParams>,rhapsody::rg::api::GraphApi>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 298 */

longlong pdb_140ad9d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
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
  
  pdb_141524eb0(param_1,param_3,param_2);
  pdb_141524c60(&uStack_a4,param_3,param_2);
  pdb_141527aa0(&uStack_90,param_3,param_2);
  pdb_141525100(&uStack_7c,param_3,param_2);
  pdb_141523e80(&uStack_68,param_3,param_2);
  pdb_141527600(&uStack_54,param_3,param_2);
  pdb_141526f10(&uStack_40,param_3,param_2);
  pdb_141527850(&uStack_2c,param_3,param_2);
  *(undefined4 *)(param_1 + 0x24) = uStack_94;
  *(undefined8 *)(param_1 + 0x14) = uStack_a4;
  *(undefined8 *)(param_1 + 0x1c) = uStack_9c;
  *(undefined4 *)(param_1 + 0x38) = uStack_80;
  *(undefined8 *)(param_1 + 0x28) = uStack_90;
  *(undefined8 *)(param_1 + 0x30) = uStack_88;
  *(undefined4 *)(param_1 + 0x4c) = uStack_6c;
  *(undefined8 *)(param_1 + 0x3c) = uStack_7c;
  *(undefined8 *)(param_1 + 0x44) = uStack_74;
  *(undefined4 *)(param_1 + 0x60) = uStack_58;
  *(undefined8 *)(param_1 + 0x50) = uStack_68;
  *(undefined8 *)(param_1 + 0x58) = uStack_60;
  *(undefined4 *)(param_1 + 0x74) = uStack_44;
  *(undefined8 *)(param_1 + 100) = uStack_54;
  *(undefined8 *)(param_1 + 0x6c) = uStack_4c;
  *(undefined8 *)(param_1 + 0x78) = uStack_40;
  *(undefined8 *)(param_1 + 0x80) = uStack_38;
  *(undefined4 *)(param_1 + 0x88) = uStack_30;
  *(undefined8 *)(param_1 + 0x8c) = uStack_2c;
  *(undefined8 *)(param_1 + 0x94) = uStack_24;
  *(undefined4 *)(param_1 + 0x9c) = uStack_1c;
  return param_1;
}

