// VA 0x1409ef0f0, PDB extent 66 bytes
// country_core::systems::collision::world::Rapier::get_collider_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::Rapier::get_collider_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 66 */

longlong pdb_1409ef0f0(longlong param_1,int param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  
  param_3 = param_3 & 0xffffffff;
  if (((param_3 < *(ulonglong *)(param_1 + 0x10)) &&
      (lVar2 = *(longlong *)(param_1 + 8), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x20 + param_3 * 0x28) == param_2)) {
    return lVar2 + param_3 * 0x28;
  }
  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

