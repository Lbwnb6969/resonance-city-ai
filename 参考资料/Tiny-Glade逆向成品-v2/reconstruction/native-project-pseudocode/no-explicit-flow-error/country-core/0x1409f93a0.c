// VA 0x1409f93a0, PDB extent 31 bytes
// country_core::systems::collision::world::Rapier::get_rapier_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::Rapier::get_rapier_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 31 */

longlong pdb_1409f93a0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = param_1 + (ulonglong)(byte)param_2[2] * 0x390;
  if ((ulonglong)*param_2 < *(ulonglong *)(param_1 + 0x30)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*param_2 * 0xc0;
    if (*(int *)(lVar2 + lVar1) == 1) {
      lVar2 = lVar2 + lVar1;
      lVar1 = 0;
      if (*(uint *)(lVar2 + 4) == param_2[1]) {
        lVar1 = lVar2 + 0x10;
      }
      return lVar1;
    }
  }
  return 0;
}

