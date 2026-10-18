// VA 0x1428f50f0, PDB extent 151 bytes
// country_core::components::drawable::impl$32::component_ids<country_core::render::nani::instance_data::UberInstanceData,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::NaniBundle<country_core::render::nani::instance_data::UberInstanceData> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::drawable::impl$32::component_ids<country_core::render::nani::instance_data::UberInstanceData,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<country_core::components::drawable::NaniBundle<country_core::render::nani::instance_data::UberInstanceData>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 151 */

void pdb_1428f50f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2 = (longlong *)*param_2;
  uVar2 = pdb_1428f58b0();
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_1428f3bb0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_1428f6bb0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  return;
}

