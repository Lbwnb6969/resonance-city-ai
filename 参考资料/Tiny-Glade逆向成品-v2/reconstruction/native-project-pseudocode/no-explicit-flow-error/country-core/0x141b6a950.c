// VA 0x141b6a950, PDB extent 95 bytes
// country_core::systems::mode_manager::WallGroupSelection::replace<array$<country_core::resources::walls::WallId,2> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::WallGroupSelection::replace<array$<country_core::resources::walls::WallId,2>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 95 */

void pdb_141b6a950(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  param_1[2] = 0;
  if (*param_1 < 2) {
    pdb_142d7f1b0(param_1,0,2,8,8);
    uVar3 = param_1[2];
  }
  else {
    uVar3 = 0;
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(param_1[1] + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[2] = uVar3 + 2;
  return;
}

