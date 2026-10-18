// VA 0x141995580, PDB extent 194 bytes
// bevy_ecs::bundle::impls::impl$7::component_ids<country_core::components::drawable::DrawableMeshBundle,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<tuple$<country_core::components::drawable::DrawableMeshBundle> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   bevy_ecs::bundle::impls::impl$7::component_ids<country_core::components::drawable::DrawableMeshBundle,bevy_ecs::bundle::info::impl$3::register_info::closure$0::closure_env$0<tuple$<country_core::components::drawable::DrawableMeshBundle>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 194 */

void pdb_141995580(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2 = (longlong *)*param_2;
  uVar2 = pdb_1419974c0();
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_141b342c0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_1419a18e0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  uVar2 = pdb_1419980d0(param_1);
  lVar1 = param_2[2];
  if (lVar1 == *param_2) {
    pdb_142db0920(param_2);
  }
  *(undefined8 *)(param_2[1] + lVar1 * 8) = uVar2;
  param_2[2] = lVar1 + 1;
  return;
}

