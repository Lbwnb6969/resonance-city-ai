// VA 0x142973f30, PDB extent 194 bytes
// country_core::components::drawable::impl$17::component_ids<bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<tuple$<country_core::resources::critters::Duck,enum2$<country_core::resources::critters::DuckState>,country_core::components::drawable::DrawableMeshBundle,enum2$<country_core::resources::critters::CritterLocomotion>,country_core::resources::critters::CritterGoal,country_core::resources::critters::CritterVelocityTarget,country_core::systems::render_loop::draw_passes::object_grass_push::ObjectGrassPush,country_core::resources::critters::Velocity,country_core::resources::critters::CritterVelocityMultiplier,country_core::components::drawable::PrevTransform> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::drawable::impl$17::component_ids<bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<tuple$<country_core::resources::critters::Duck,enum2$<country_core::resources::critters::DuckState>,country_core::components::drawable::DrawableMeshBundle,enum2$<country_core::resources::critters::CritterLocomotion>,country_core::resources::critters::CritterGoal,country_core::resources::critters::CritterVelocityTarget,country_core::systems::render_loop::draw_passes::object_grass_push::ObjectGrassPush,country_core::resources::critters::Velocity,country_core::resources::critters::CritterVelocityMultiplier,country_core::components::drawable::PrevTransform>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 194 */

void pdb_142973f30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2 = (longlong *)*param_2;
  uVar2 = pdb_142972c70();
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_142b526e0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_142941d70(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_142972630(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  return;
}

